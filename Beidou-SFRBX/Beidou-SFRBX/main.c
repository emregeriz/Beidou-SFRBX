
#include <stdio.h>
#include <string.h>

#define MAX_LINE_LENGTH 1000

int main() {

    FILE* rinex_file;
    char line[MAX_LINE_LENGTH];
    int found_header = 0;
    int found_beidou = 0;
    char filename[256];
    errno_t err;


    printf("Lutfen RINEX dosyasinin yolunu girin: ");
    fgets(filename, sizeof(filename), stdin);
    filename[strcspn(filename, "\n")] = '\0';

    err = fopen_s(&rinex_file, filename, "r");
    if (err != 0) {
        perror("Dosya acma hatasý");
        return 1;
    }

    // BEIDOU kontrolü
    if (fgets(line, MAX_LINE_LENGTH, rinex_file) != NULL) {
        if (strstr(line, "BEIDOU") != NULL) {
            found_beidou = 1;
        }
    }

    if (!found_beidou) {
        printf("Dosya BEIDOU'yu icermiyor.\n");
        fclose(rinex_file);
        return 1;
    }


    fseek(rinex_file, 0, SEEK_SET);


    if (fgets(line, MAX_LINE_LENGTH, rinex_file) != NULL) {
        double version;
        sscanf_s(line, "%lf", &version);
        if (version != 3.04) {
            printf("RINEX versiyon 3.04 degil. AlgIlanan versiyon: %.2lf\n", version);
            fclose(rinex_file);
            return 1;
        }


    }


    while (fgets(line, MAX_LINE_LENGTH, rinex_file) != NULL) {

        if (strncmp(line, "END OF HEADER", 14) == 0) {
            printf("End of header found.\n");
            break;
        }

        while (fgets(line, MAX_LINE_LENGTH, rinex_file) != NULL) {
            if (line[0] == 'C') {
                int year, month, day, hour, minute, second;
                int SatelliteID;
                double SVClockBias, SVClockDrift, SVClockDriftRate;
                double aode, crs, delta_n, m0;
                double cuc, e, cus, sqrt_a;
                double toe, cic, omega0, cis;
                double i0, crc, omega, omega_dot;
                double idot, code_on_l2, gps_week, l2_p_data_flag;
                double sv_accuracy, sv_health, tgd, iodc;
                double TransmissionTime, AODC;


                sscanf_s(line, "C%2d %d %d %d %d %d %d %lf %lf %lf", &SatelliteID, &year, &month, &day, &hour,
                    &minute, &second, &SVClockBias, &SVClockDrift, &SVClockDriftRate);


                for (int i = 0; i < 7; i++) {
                    if (fgets(line, MAX_LINE_LENGTH, rinex_file) != NULL) {
                        if (i == 0) {
                            sscanf_s(line, "%lf %lf %lf %lf", &aode, &crs, &delta_n, &m0);
                        }
                        else if (i == 1) {
                            sscanf_s(line, "%lf %lf %lf %lf", &cuc, &e, &cus, &sqrt_a);
                        }
                        else if (i == 2) {
                            sscanf_s(line, "%lf %lf %lf %lf", &toe, &cic, &omega0, &cis);
                        }
                        else if (i == 3) {
                            sscanf_s(line, "%lf %lf %lf %lf", &i0, &crc, &omega, &omega_dot);
                        }
                        else if (i == 4) {
                            sscanf_s(line, "%lf %lf %lf %lf", &idot, &code_on_l2, &gps_week, &l2_p_data_flag);
                        }
                        else if (i == 5) {
                            sscanf_s(line, "%lf %lf %lf %lf", &sv_accuracy, &sv_health, &tgd, &iodc);
                        }
                        else if (i == 6) {
                            sscanf_s(line, "%lf %lf ", &TransmissionTime, &AODC);
                        }
                    }
                }


                printf("SatelliteID: %02d\n", SatelliteID);
                printf("Tarih ve Saat: %04d-%02d-%02d %02d:%02d:%02d\n", year, month, day, hour, minute, second);
                printf("SVClockBias : %.12lf\n", SVClockBias);
                printf("SVClockDrift : %.12lf\n", SVClockDrift);
                printf("SVClockDriftRate : %.12lf\n", SVClockDriftRate);
                printf("aode : %.12lf\n", aode);
                printf("crs : %.12lf\n", crs);
                printf("delta_n : %.20lf\n", delta_n);
                printf("m0 : %.12lf\n", m0);
                printf("cuc : %.12lf\n", cuc);
                printf("e : %.12lf\n", e);
                printf("cus : %.12lf\n", cus);
                printf("sqrt_a : %.12lf\n", sqrt_a);
                printf("toe : %.12lf\n", toe);
                printf("cic : %.12lf\n", cic);
                printf("omega0 : %.12lf\n", omega0);
                printf("cis : %.12lf\n", cis);
                printf("i0 : %.12lf\n", i0);
                printf("crc : %.12lf\n", crc);
                printf("omega : %.12lf\n", omega);
                printf("omega_dot : %.12lf\n", omega_dot);
                printf("idot : %.12lf\n", idot);
                printf("code_on_l2 : %.12lf\n", code_on_l2);
                printf("gps_week : %.12lf\n", gps_week);
                printf("l2_p_data_flag : %.12lf\n", l2_p_data_flag);
                printf("sv_accuracy : %.12lf\n", sv_accuracy);
                printf("sv_health : %.12lf\n", sv_health);
                printf("TGD1 : %.12lf\n", tgd);
                printf("TGD2 : %.12lf\n", iodc);
                printf("TransmissionTime : %.12lf\n", TransmissionTime);
                printf("AODC : %.12lf\n", AODC);

                printf("\n");
            }
        }

        fclose(rinex_file);

        return 0;
    }

}