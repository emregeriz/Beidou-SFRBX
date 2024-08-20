#include <stdint.h>
#include <stdio.h>
const double pre = 11100010010.0;
const int pad = 0;
const int rev = 0;

// SUBFRAME-1 //
typedef union {
    struct {
        uint32_t pre : 11;
        uint32_t rev : 4;
        uint32_t fraid : 3;
        uint32_t sow_msb : 8;
        uint32_t parity_bits : 4;
        uint32_t pad : 2;
    } BitField;

    uint32_t word;
} Word1_1;

typedef union {
    struct {
        uint32_t sow_lsb : 12;
        uint32_t sath1 : 1;
        uint32_t aodc : 5;
        uint32_t urai : 4;
        uint32_t parity_bits : 8;
        uint32_t pad : 2;
    } BitField;

    uint32_t word;
} Word1_2;

typedef union {
    struct {
        uint32_t wn : 13;
        uint32_t toc_msb : 9;
        uint32_t parity_bits : 8;
        uint32_t pad : 2;
    }BitField;

    uint32_t word;
} Word1_3;

typedef union {
    struct {
        uint32_t toc_lsb : 8;
        int32_t tgd1 : 10;
        int32_t tgd2_msb : 4;
        uint32_t parity_bits : 8;
        uint32_t pad : 2;
    }BitField;

    uint32_t word;
} Word1_4;

typedef union {
    struct {
        uint32_t tgd2_lsb : 6;
        int32_t alpha0 : 8;
        int32_t alpha1 : 8;
        uint32_t parity_bits : 8;
        uint32_t pad : 2;
    }BitField;

    uint32_t word;
} Word1_5;

typedef union {
    struct {
        int32_t alpha2 : 8;
        int32_t alpha3 : 8;
        int32_t beta0_msb : 6;
        uint32_t parity_bits : 8;
        uint32_t pad : 2;
    }BitField;

    uint32_t word;
} Word1_6;

typedef union {
    struct {
        uint32_t beta0_lsb : 2;
        int32_t beta1 : 8;
        int32_t beta2 : 8;
        int32_t beta3_msb : 4;
        uint32_t parity_bits : 8;
        uint32_t pad : 2;
    }BitField;

    uint32_t word;
} Word1_7;

typedef union {
    struct {
        uint32_t beta3_lsb : 4;
        int32_t a2 : 11;
        int32_t a0_msb : 7;
        uint32_t parity_bits : 8;
        uint32_t pad : 2;
    }BitField;

    uint32_t word;
} Word1_8;

typedef union {
    struct {
        uint32_t a0_lsb : 17;
        int32_t a1_msb : 5;
        uint32_t parity_bits : 8;
        uint32_t pad : 2;
    }BitField;

    uint32_t word;
} Word1_9;

typedef union {
    struct {
        uint32_t a1_lsb : 17;
        uint32_t aode : 5;
        uint32_t parity_bits : 8;
        uint32_t pad : 2;
    }BitField;

    uint32_t word;

}Word1_10;

typedef struct {
    Word1_1 word1;
    Word1_2 word2;
    Word1_3 word3;
    Word1_4 word4;
    Word1_5 word5;
    Word1_6 word6;
    Word1_7 word7;
    Word1_8 word8;
    Word1_9 word9;
    Word1_10 word10;
} Subframe1;


// SUBFRAME-2 //
typedef union {
    struct {
        uint32_t pre : 11;
        uint32_t rev : 4;
        uint32_t fraid : 3;
        uint32_t sow_msb : 8;
        uint32_t parity_bits : 4;
        uint32_t pad : 2;
    }BitField;

    uint32_t word;
} Word2_1;

typedef union {
    struct {
        uint32_t sow_lsb : 12;
        int32_t delta_n_msb : 10;
        uint32_t parity_bits : 8;
        uint32_t pad : 2;
    }BitField;

    uint32_t word;
} Word2_2;

typedef union {
    struct {
        uint32_t delta_n_lsb : 6;
        int32_t cuc_msb : 16;
        uint32_t parity_bits : 8;
        uint32_t pad : 2;
    }BitField;

    uint32_t word;
} Word2_3;

typedef union {
    struct {
        uint32_t cuc_lsb : 2;
        int32_t m0_msb : 20;
        uint32_t parity_bits : 8;
        uint32_t pad : 2;
    }BitField;

    uint32_t word;
} Word2_4;

typedef union {
    struct {
        uint32_t m0_lsb : 12;
        uint32_t e_msb : 10;
        uint32_t parity_bits : 8;
        uint32_t pad : 2;
    }BitField;

    uint32_t word;
} Word2_5;

typedef union {
    struct {
        uint32_t e_lsb : 22;
        uint32_t parity_bits : 8;
        uint32_t pad : 2;
    }BitField;

    uint32_t word;
} Word2_6;

typedef union {
    struct {
        int32_t cus : 18;
        int32_t crc_msb : 4;
        uint32_t parity_bits : 8;
        uint32_t pad : 2;
    }BitField;

    uint32_t word;
} Word2_7;

typedef union {
    struct {
        uint32_t crc_lsb : 14;
        int32_t crs_msb : 8;
        uint32_t parity_bits : 8;
        uint32_t pad : 2;
    }BitField;

    uint32_t word;
} Word2_8;

typedef union {
    struct {
        uint32_t crs_lsb : 10;
        uint32_t sqrt_a_msb : 12;
        uint32_t parity_bits : 8;
        uint32_t pad : 2;
    }BitField;

    uint32_t word;
} Word2_9;

typedef union {
    struct {
        uint32_t sqrt_a_lsb : 20;
        uint32_t toe : 2;
        uint32_t parity_bits : 8;
        uint32_t pad : 2;
    }BitField;

    uint32_t word;
} Word2_10;

typedef struct {
    Word2_1 word1;
    Word2_2 word2;
    Word2_3 word3;
    Word2_4 word4;
    Word2_5 word5;
    Word2_6 word6;
    Word2_7 word7;
    Word2_8 word8;
    Word2_9 word9;
    Word2_10 word10;
} Subframe2;

// SUBFRAME-3 //

typedef union {
    struct {
        uint32_t pre : 11;
        uint32_t rev : 4;
        uint32_t fraid : 3;
        uint32_t sow_msb : 8;
        uint32_t parity_bits : 4;
        uint32_t pad : 2;
    }BitField;

    uint32_t word;
} Word3_1;

typedef union {
    struct {
        uint32_t sow_lsb : 12;
        uint32_t toe_msb : 10;
        uint32_t parity_bits : 8;
        uint32_t pad : 2;
    }BitField;

    uint32_t word;
} Word3_2;

typedef union {
    struct {
        uint32_t toe_lsb : 5;
        int32_t i0_msb : 17;
        uint32_t parity_bits : 8;
        uint32_t pad : 2;
    }BitField;

    uint32_t word;
} Word3_3;

typedef union {
    struct {
        uint32_t i0_lsb : 15;
        int32_t cic_msb : 7;
        uint32_t parity_bits : 8;
        uint32_t pad : 2;
    }BitField;

    uint32_t word;
} Word3_4;

typedef union {
    struct {
        int32_t cic_lsb : 11;
        int32_t omega_msb : 11;
        uint32_t parity_bits : 8;
        uint32_t pad : 2;
    }BitField;

    uint32_t word;
} Word3_5;

typedef union {
    struct {
        uint32_t omega_lsb : 13;
        int32_t cis_msb : 9;
        uint32_t parity_bits : 8;
        uint32_t pad : 2;
    }BitField;

    uint32_t word;
} Word3_6;

typedef union {
    struct {
        uint32_t cis_lsb : 9;
        int32_t idot_msb : 13;
        uint32_t parity_bits : 8;
        uint32_t pad : 2;
    }BitField;

    uint32_t word;
} Word3_7;

typedef union {
    struct {
        uint32_t idot_lsb : 1;
        int32_t omega0_msb : 21;
        uint32_t parity_bits : 8;
        uint32_t pad : 2;
    }BitField;

    uint32_t word;
} Word3_8;

typedef union {
    struct {
        uint32_t omega0_lsb : 11;
        int32_t w_msb : 11;
        uint32_t parity_bits : 8;
        uint32_t pad : 2;
    }BitField;

    uint32_t word;
} Word3_9;

typedef union {
    struct {
        uint32_t w_lsb : 21;
        uint32_t rev : 1;
        uint32_t parity_bits : 8;
        uint32_t pad : 2;
    }BitField;

    uint32_t word;
} Word3_10;

typedef struct {
    Word3_1 word1;
    Word3_2 word2;
    Word3_3 word3;
    Word3_4 word4;
    Word3_5 word5;
    Word3_6 word6;
    Word3_7 word7;
    Word3_8 word8;
    Word3_9 word9;
    Word3_10 word10;
} Subframe3;

typedef struct
{
    double tgd2,sow;
    int pre, rev, fraid, parity_bits, pad;
    int sow_lsb, sow_msb;
    int sath1;
    int aodc, aode;
    int urai;
    int wn;
    int toc_lsb, toc_msb;
    double  tgd1, tgd2_msb, tgd2_lsb, tgd1_msb, tgd1_lsb;
    double  alpha1, alpha0, alpha2, alpha3;
    double  beta0_msb, beta0_lsb, beta1, beta2, beta3_msb, beta3_lsb;
    double a0_msb, a0_lsb, a1_msb, a1_lsb, a2;
    double  delta_n_msb, delta_n_lsb, omega_msb, omega_lsb, omega0_msb, omega0_lsb;
    double  e_msb, e_lsb, m0_lsb, m0_msb;
    double  cuc_lsb, cuc_msb, crc_msb, crc_lsb, cus;
    double  sqrt_a_msb, sqrt_a_lsb;
    int toe1, toe_msb, toe_lsb, toe_orta;
    double  i0_msb, i0_lsb;
    double  cic_msb, cic_lsb;
    double  idot_msb, idot_lsb;
    double  w_msb, w_lsb;
    double  cis_lsb, cis_msb, crs_lsb, crs_msb;
} eph_veriler_a;



//AYIRMA


typedef union
{
    struct
    {
        uint32_t sow_lsb : 12;
        uint32_t sow_msb : 8;
        uint32_t padding : 12;
    }bit_field;
    uint32_t value;
}sow_ut;


typedef union
{
    struct
    {
        uint32_t toc_lsb : 8;
        uint32_t toc_msb : 9;
        uint32_t padding : 15;
    }bit_field;
    uint32_t value;
}toc_ut;


typedef union
{
    struct
    {
        uint32_t tgd2_lsb : 6;
        uint32_t tdg2_msb : 4;
        uint32_t padding : 22;
    }bit_field;
    uint32_t value;
}tdg2_ut;

typedef union
{
    struct
    {
        uint32_t beta0_lsb : 2;
        uint32_t beta0_msb : 6;
        uint32_t padding : 24;
    }bit_field;
    uint32_t value;
}beta0_ut;
typedef union
{
    struct
    {
        uint32_t beta3_lsb : 4;
        uint32_t beta3_msb : 4;
        uint32_t padding : 24;
    }bit_field;
    uint32_t value;
}beta3_ut;
typedef union
{
    struct
    {
        uint32_t a0_lsb : 17;
        uint32_t a0_msb : 7;
        uint32_t padding : 8;
    }bit_field;
    uint32_t value;
}a0_ut;
typedef union
{
    struct
    {
        uint32_t a1_lsb : 17;
        uint32_t a1_msb : 5;
        uint32_t padding : 10;
    }bit_field;
    uint32_t value;
}a1_ut;
typedef union
{
    struct
    {
        uint32_t delta_n_lsb : 6;
        uint32_t delta_n_msb : 10;
        uint32_t padding : 16;
    }bit_field;
    uint32_t value;
}delta_n_ut;
typedef union
{
    struct
    {
        uint32_t cuc_lsb : 2;
        uint32_t cuc_msb : 16;
        uint32_t padding : 14;
    }bit_field;
    uint32_t value;
}cuc_ut;
typedef union
{
    struct
    {
        uint32_t m0_lsb : 12;
        uint32_t m0_msb : 20;

    }bit_field;
    uint32_t value;
}m0_ut;
typedef union
{
    struct
    {
        uint32_t e_lsb : 6;
        uint32_t e_msb : 4;
        uint32_t padding : 22;
    }bit_field;
    uint32_t value;
}e_ut;

typedef union
{
    struct
    {
        uint32_t crc_lsb : 14;
        uint32_t crc_msb : 4;
        uint32_t padding : 14;
    }bit_field;
    uint32_t value;
}crc_ut;

typedef union
{
    struct
    {
        uint32_t crs_lsb : 10;
        uint32_t crs_msb : 8;
        uint32_t padding : 24;
    }bit_field;
    uint32_t value;
}crs_ut;

typedef union
{
    struct
    {
        uint32_t sqrt_a_lsb : 20;
        uint32_t sqrt_a_msb : 12;

    }bit_field;
    uint32_t value;
}sqrt_a_ut;

typedef union
{
    struct
    {
        uint32_t toe_lsb : 5;
        uint32_t toe_msb : 2;
        uint32_t toe_ort : 10;
        uint32_t padding : 15;
    }bit_field;
    uint32_t value;
}toe_ut;
typedef union
{
    struct
    {
        uint32_t i0_lsb : 15;
        uint32_t i0_msb : 17;

    }bit_field;
    uint32_t value;
}i0_ut;
typedef union
{
    struct
    {
        uint32_t cic_lsb : 11;
        uint32_t cic_msb : 7;
        uint32_t padding : 14;
    }bit_field;
    uint32_t value;
}cic_ut;
typedef union
{
    struct
    {
        uint32_t omega_lsb : 13;
        uint32_t omega_msb : 11;
        uint32_t padding : 8;
    }bit_field;
    uint32_t value;
}omega_ut;


typedef union
{
    struct
    {
        uint32_t cis_lsb : 9;
        uint32_t cis_msb : 9;
        uint32_t padding : 14;

    }bit_field;
    uint32_t value;
}cis_ut;
typedef union
{
    struct
    {
        uint32_t idot_lsb : 1;
        uint32_t idot_msb : 13;
        uint32_t padding : 18;
    }bit_field;
    uint32_t value;
}idot_ut;


typedef union
{
    struct
    {
        uint32_t omega0_lsb : 11;
        uint32_t omega0_msb : 21;

    }bit_field;
    uint32_t value;
}omega0_ut;

typedef union
{
    struct
    {
        uint32_t w_lsb : 21;
        uint32_t w_msb : 11;

    }bit_field;
    uint32_t value;
}w_ut;

uint8_t subframe_1_word_1_doldur(const eph_veriler_a* const eph, Word1_1* const word1_1, uint8_t* paket_u8, uint8_t idx)
{
    sow_ut sow_value;
    sow_value.value = eph->sow;
    word1_1->BitField.sow_msb = sow_value.bit_field.sow_lsb;

    word1_1->BitField.pre = eph->pre;
    word1_1->BitField.rev = eph->rev;
    word1_1->BitField.fraid = eph->fraid;
    word1_1->BitField.sow_msb = eph->sow_msb;
    word1_1->BitField.parity_bits = eph->parity_bits;
    word1_1->BitField.pad = eph->pad;

    paket_u8[idx++] = word1_1->word >> 24;
    paket_u8[idx++] = word1_1->word >> 16;
    paket_u8[idx++] = word1_1->word >> 8;
    paket_u8[idx++] = word1_1->word;

    idx = idx + sizeof(word1_1->word);
    return idx;
}

void subframe_1_word_2_doldur(const eph_veriler_a* const eph, Word1_2* const word1_2, uint8_t* paket_u8, uint8_t idx)
{

    sow_ut sow_value;
    sow_value.value = eph->sow;
    word1_2->BitField.sow_lsb = sow_value.bit_field.sow_lsb;

    word1_2->BitField.sow_lsb = eph->sow_lsb;
    word1_2->BitField.sath1 = eph->sath1;
    word1_2->BitField.aodc = eph->aodc;
    word1_2->BitField.urai = eph->urai;
    word1_2->BitField.parity_bits = eph->parity_bits;
    word1_2->BitField.pad = eph->pad;


    paket_u8[idx++] = word1_2->word >> 24;
    paket_u8[idx++] = word1_2->word >> 16;
    paket_u8[idx++] = word1_2->word >> 8;
    paket_u8[idx++] = word1_2->word;

    idx = idx + sizeof(word1_2->word);
    return idx;

}

void subframe_1_word_3_doldur(const eph_veriler_a* const eph, Word1_3* const word1_3, uint8_t* paket_u8, uint8_t idx)
{
    word1_3->BitField.wn = eph->wn;
    word1_3->BitField.toc_msb = eph->toc_msb;
    word1_3->BitField.parity_bits = eph->parity_bits;
    word1_3->BitField.pad = eph->pad;

    paket_u8[idx++] = word1_3->word >> 24;
    paket_u8[idx++] = word1_3->word >> 16;
    paket_u8[idx++] = word1_3->word >> 8;
    paket_u8[idx++] = word1_3->word;

    idx = idx + sizeof(word1_3->word);
    return idx;
}

void subframe_1_word_4_doldur(const eph_veriler_a* const eph, Word1_4* const word1_4, uint8_t* paket_u8, uint8_t idx)
{
    word1_4->BitField.toc_lsb = eph->toc_lsb;
    word1_4->BitField.tgd1 = eph->tgd1;
    word1_4->BitField.tgd2_msb = eph->tgd2_msb;
    word1_4->BitField.parity_bits = eph->parity_bits;
    word1_4->BitField.pad = eph->pad;

    paket_u8[idx++] = word1_4->word >> 24;
    paket_u8[idx++] = word1_4->word >> 16;
    paket_u8[idx++] = word1_4->word >> 8;
    paket_u8[idx++] = word1_4->word;

    idx = idx + sizeof(word1_4->word);
    return idx;
}

void subframe_1_word_5_doldur(const eph_veriler_a* const eph, Word1_5* const word1_5, uint8_t* paket_u8, uint8_t idx)
{
    word1_5->BitField.tgd2_lsb = eph->tgd2_lsb;
    word1_5->BitField.alpha0 = eph->alpha0;
    word1_5->BitField.alpha1 = eph->alpha1;
    word1_5->BitField.parity_bits = eph->parity_bits;
    word1_5->BitField.pad = eph->pad;

    paket_u8[idx++] = word1_5->word >> 24;
    paket_u8[idx++] = word1_5->word >> 16;
    paket_u8[idx++] = word1_5->word >> 8;
    paket_u8[idx++] = word1_5->word;

    idx = idx + sizeof(word1_5->word);
    return idx;
}

uint8_t subframe_1_word_6_doldur(const eph_veriler_a* const eph, Word1_6* const word1_6, uint8_t* paket_u8, uint8_t idx)
{
    word1_6->BitField.alpha2 = eph->alpha2;
    word1_6->BitField.alpha3 = eph->alpha3;
    word1_6->BitField.beta0_msb = eph->beta0_msb;
    word1_6->BitField.parity_bits = eph->parity_bits;
    word1_6->BitField.pad = eph->pad;

    paket_u8[idx++] = word1_6->word >> 24;
    paket_u8[idx++] = word1_6->word >> 16;
    paket_u8[idx++] = word1_6->word >> 8;
    paket_u8[idx++] = word1_6->word;

    idx = idx + sizeof(word1_6->word);
    return idx;
}

void subframe_1_word_7_doldur(const eph_veriler_a* const eph, Word1_7* const word1_7, uint8_t* paket_u8, uint8_t idx)
{
    word1_7->BitField.beta0_lsb = eph->beta0_lsb;
    word1_7->BitField.beta1 = eph->beta1;
    word1_7->BitField.beta2 = eph->beta2;
    word1_7->BitField.beta3_msb = eph->beta3_msb;
    word1_7->BitField.parity_bits = eph->parity_bits;
    word1_7->BitField.pad = eph->pad;

    paket_u8[idx++] = word1_7->word >> 24;
    paket_u8[idx++] = word1_7->word >> 16;
    paket_u8[idx++] = word1_7->word >> 8;
    paket_u8[idx++] = word1_7->word;

    idx = idx + sizeof(word1_7->word);
    return idx;
}

void subframe_1_word_8_doldur(const eph_veriler_a* const eph, Word1_8* const word1_8, uint8_t* paket_u8, uint8_t idx)
{
    word1_8->BitField.beta3_lsb = eph->beta3_lsb;
    word1_8->BitField.a2 = eph->a2;
    word1_8->BitField.a0_msb = eph->a0_msb;
    word1_8->BitField.parity_bits = eph->parity_bits;
    word1_8->BitField.pad = eph->pad;

    paket_u8[idx++] = word1_8->word >> 24;
    paket_u8[idx++] = word1_8->word >> 16;
    paket_u8[idx++] = word1_8->word >> 8;
    paket_u8[idx++] = word1_8->word;

    idx = idx + sizeof(word1_8->word);
    return idx;
}

void subframe_1_word_9_doldur(const eph_veriler_a* const eph, Word1_9* const word1_9, uint8_t* paket_u8, uint8_t idx)
{
    word1_9->BitField.a0_lsb = eph->a0_lsb;
    word1_9->BitField.a1_msb = eph->a1_msb;
    word1_9->BitField.parity_bits = eph->parity_bits;
    word1_9->BitField.pad = eph->pad;

    paket_u8[idx++] = word1_9->word >> 24;
    paket_u8[idx++] = word1_9->word >> 16;
    paket_u8[idx++] = word1_9->word >> 8;
    paket_u8[idx++] = word1_9->word;

    idx = idx + sizeof(word1_9->word);
    return idx;
}

void subframe_1_word_10_doldur(const eph_veriler_a* const eph, Word1_10* const word1_10, uint8_t* paket_u8, uint8_t idx)
{
    word1_10->BitField.a1_lsb = eph->a1_lsb;
    word1_10->BitField.aode = eph->aode;
    word1_10->BitField.parity_bits = eph->parity_bits;
    word1_10->BitField.pad = eph->pad;

    paket_u8[idx++] = word1_10->word >> 24;
    paket_u8[idx++] = word1_10->word >> 16;
    paket_u8[idx++] = word1_10->word >> 8;
    paket_u8[idx++] = word1_10->word;

    idx = idx + sizeof(word1_10->word);
    return idx;
}

void subframe_2_word_1_doldur(const eph_veriler_a* const eph, Word2_1* const word2_1, uint8_t* paket_u8, uint8_t idx)
{
    word2_1->BitField.pre = eph->pre;
    word2_1->BitField.rev = eph->rev;
    word2_1->BitField.fraid = eph->fraid;
    word2_1->BitField.sow_msb = eph->sow_msb;
    word2_1->BitField.parity_bits = eph->parity_bits;
    word2_1->BitField.pad = eph->pad;

    paket_u8[idx++] = word2_1->word >> 24;
    paket_u8[idx++] = word2_1->word >> 16;
    paket_u8[idx++] = word2_1->word >> 8;
    paket_u8[idx++] = word2_1->word;

    idx = idx + sizeof(word2_1->word);
    return idx;
}

void subframe_2_word_2_doldur(const eph_veriler_a* const eph, Word2_2* const word2_2, uint8_t* paket_u8, uint8_t idx)
{
    word2_2->BitField.sow_lsb = eph->sow_lsb;
    word2_2->BitField.delta_n_msb = eph->delta_n_msb;
    word2_2->BitField.parity_bits = eph->parity_bits;
    word2_2->BitField.pad = eph->pad;

    paket_u8[idx++] = word2_2->word >> 24;
    paket_u8[idx++] = word2_2->word >> 16;
    paket_u8[idx++] = word2_2->word >> 8;
    paket_u8[idx++] = word2_2->word;

    idx = idx + sizeof(word2_2->word);
    return idx;
}

void subframe_2_word_3_doldur(const eph_veriler_a* const eph, Word2_3* const word2_3, uint8_t* paket_u8, uint8_t idx)
{
    word2_3->BitField.delta_n_lsb = eph->delta_n_lsb;
    word2_3->BitField.cuc_msb = eph->cuc_msb;
    word2_3->BitField.parity_bits = eph->parity_bits;
    word2_3->BitField.pad = eph->pad;

    paket_u8[idx++] = word2_3->word >> 24;
    paket_u8[idx++] = word2_3->word >> 16;
    paket_u8[idx++] = word2_3->word >> 8;
    paket_u8[idx++] = word2_3->word;

    idx = idx + sizeof(word2_3->word);
    return idx;
}

void subframe_2_word_4_doldur(const eph_veriler_a* const eph, Word2_4* const word2_4, uint8_t* paket_u8, uint8_t idx)
{
    word2_4->BitField.cuc_lsb = eph->cuc_lsb;
    word2_4->BitField.m0_msb = eph->m0_msb;
    word2_4->BitField.parity_bits = eph->parity_bits;
    word2_4->BitField.pad = eph->pad;

    paket_u8[idx++] = word2_4->word >> 24;
    paket_u8[idx++] = word2_4->word >> 16;
    paket_u8[idx++] = word2_4->word >> 8;
    paket_u8[idx++] = word2_4->word;

    idx = idx + sizeof(word2_4->word);
    return idx;

}

void subframe_2_word_5_doldur(const eph_veriler_a* const eph, Word2_5* const word2_5, uint8_t* paket_u8, uint8_t idx)
{
    word2_5->BitField.m0_lsb = eph->m0_lsb;
    word2_5->BitField.e_msb = eph->e_msb;
    word2_5->BitField.parity_bits = eph->parity_bits;
    word2_5->BitField.pad = eph->pad;

    paket_u8[idx++] = word2_5->word >> 24;
    paket_u8[idx++] = word2_5->word >> 16;
    paket_u8[idx++] = word2_5->word >> 8;
    paket_u8[idx++] = word2_5->word;

    idx = idx + sizeof(word2_5->word);
    return idx;

}

void subframe_2_word_6_doldur(const eph_veriler_a* const eph, Word2_6* const word2_6, uint8_t* paket_u8, uint8_t idx)
{
    word2_6->BitField.e_lsb = eph->e_lsb;
    word2_6->BitField.parity_bits = eph->parity_bits;
    word2_6->BitField.pad = eph->pad;

    paket_u8[idx++] = word2_6->word >> 24;
    paket_u8[idx++] = word2_6->word >> 16;
    paket_u8[idx++] = word2_6->word >> 8;
    paket_u8[idx++] = word2_6->word;

    idx = idx + sizeof(word2_6->word);
    return idx;

}

void subframe_2_word_7_doldur(const eph_veriler_a* const eph, Word2_7* const word2_7, uint8_t* paket_u8, uint8_t idx)
{
    word2_7->BitField.cus = eph->cus;
    word2_7->BitField.crc_msb = eph->crc_msb;
    word2_7->BitField.parity_bits = eph->parity_bits;
    word2_7->BitField.pad = eph->pad;

    paket_u8[idx++] = word2_7->word >> 24;
    paket_u8[idx++] = word2_7->word >> 16;
    paket_u8[idx++] = word2_7->word >> 8;
    paket_u8[idx++] = word2_7->word;

    idx = idx + sizeof(word2_7->word);
    return idx;

}

void subframe_2_word_8_doldur(const eph_veriler_a* const eph, Word2_8* const word2_8, uint8_t* paket_u8, uint8_t idx)
{
    word2_8->BitField.crc_lsb = eph->crc_lsb;
    word2_8->BitField.crs_msb = eph->crs_msb;
    word2_8->BitField.parity_bits = eph->parity_bits;
    word2_8->BitField.pad = eph->pad;

    paket_u8[idx++] = word2_8->word >> 24;
    paket_u8[idx++] = word2_8->word >> 16;
    paket_u8[idx++] = word2_8->word >> 8;
    paket_u8[idx++] = word2_8->word;

    idx = idx + sizeof(word2_8->word);
    return idx;

}

void subframe_2_word_9_doldur(const eph_veriler_a* const eph, Word2_9* const word2_9, uint8_t* paket_u8, uint8_t idx)
{
    word2_9->BitField.crs_lsb = eph->crs_lsb;
    word2_9->BitField.sqrt_a_msb = eph->sqrt_a_msb;
    word2_9->BitField.parity_bits = eph->parity_bits;
    word2_9->BitField.pad = eph->pad;

    paket_u8[idx++] = word2_9->word >> 24;
    paket_u8[idx++] = word2_9->word >> 16;
    paket_u8[idx++] = word2_9->word >> 8;
    paket_u8[idx++] = word2_9->word;

    idx = idx + sizeof(word2_9->word);
    return idx;
}

void subframe_2_word_10_doldur(const eph_veriler_a* const eph, Word2_10* const word2_10, uint8_t* paket_u8, uint8_t idx)
{
    word2_10->BitField.sqrt_a_lsb = eph->sqrt_a_lsb;
    word2_10->BitField.toe = eph->toe1;
    word2_10->BitField.parity_bits = eph->parity_bits;
    word2_10->BitField.pad = eph->pad;

    paket_u8[idx++] = word2_10->word >> 24;
    paket_u8[idx++] = word2_10->word >> 16;
    paket_u8[idx++] = word2_10->word >> 8;
    paket_u8[idx++] = word2_10->word;

    idx = idx + sizeof(word2_10->word);
    return idx;
}

void subframe_3_word_1_doldur(const eph_veriler_a* const eph, Word3_1* const word3_1, uint8_t* paket_u8, uint8_t idx)
{
    word3_1->BitField.pre = eph->pre;
    word3_1->BitField.rev = eph->rev;
    word3_1->BitField.fraid = eph->fraid;
    word3_1->BitField.sow_msb = eph->sow_msb;
    word3_1->BitField.parity_bits = eph->parity_bits;
    word3_1->BitField.pad = eph->pad;

    paket_u8[idx++] = word3_1->word >> 24;
    paket_u8[idx++] = word3_1->word >> 16;
    paket_u8[idx++] = word3_1->word >> 8;
    paket_u8[idx++] = word3_1->word;

    idx = idx + sizeof(word3_1->word);
    return idx;
}

void subframe_3_word_2_doldur(const eph_veriler_a* const eph, Word3_2* const word3_2, uint8_t* paket_u8, uint8_t idx)
{
    word3_2->BitField.sow_lsb = eph->sow_lsb;
    word3_2->BitField.toe_msb = eph->toe_msb;
    word3_2->BitField.parity_bits = eph->parity_bits;
    word3_2->BitField.pad = eph->pad;

    paket_u8[idx++] = word3_2->word >> 24;
    paket_u8[idx++] = word3_2->word >> 16;
    paket_u8[idx++] = word3_2->word >> 8;
    paket_u8[idx++] = word3_2->word;

    idx = idx + sizeof(word3_2->word);
    return idx;

}

void subframe_3_word_3_doldur(const eph_veriler_a* const eph, Word3_3* const word3_3, uint8_t* paket_u8, uint8_t idx)
{
    word3_3->BitField.toe_lsb = eph->toe_lsb;
    word3_3->BitField.i0_msb = eph->i0_msb;
    word3_3->BitField.parity_bits = eph->parity_bits;
    word3_3->BitField.pad = eph->pad;

    paket_u8[idx++] = word3_3->word >> 24;
    paket_u8[idx++] = word3_3->word >> 16;
    paket_u8[idx++] = word3_3->word >> 8;
    paket_u8[idx++] = word3_3->word;

    idx = idx + sizeof(word3_3->word);
    return idx;

}

void subframe_3_word_4_doldur(const eph_veriler_a* const eph, Word3_4* const word3_4, uint8_t* paket_u8, uint8_t idx)
{
    word3_4->BitField.i0_lsb = eph->i0_lsb;
    word3_4->BitField.cic_msb = eph->cic_msb;
    word3_4->BitField.parity_bits = eph->parity_bits;
    word3_4->BitField.pad = eph->pad;


    paket_u8[idx++] = word3_4->word >> 24;
    paket_u8[idx++] = word3_4->word >> 16;
    paket_u8[idx++] = word3_4->word >> 8;
    paket_u8[idx++] = word3_4->word;

    idx = idx + sizeof(word3_4->word);
    return idx;
}

void subframe_3_word_5_doldur(const eph_veriler_a* const eph, Word3_5* const word3_5, uint8_t* paket_u8, uint8_t idx)
{
    word3_5->BitField.cic_lsb = eph->cic_lsb;
    word3_5->BitField.omega_msb = eph->omega_msb;
    word3_5->BitField.parity_bits = eph->parity_bits;
    word3_5->BitField.pad = eph->pad;

    paket_u8[idx++] = word3_5->word >> 24;
    paket_u8[idx++] = word3_5->word >> 16;
    paket_u8[idx++] = word3_5->word >> 8;
    paket_u8[idx++] = word3_5->word;

    idx = idx + sizeof(word3_5->word);
    return idx;

}

void subframe_3_word_6_doldur(const eph_veriler_a* const eph, Word3_6* const word3_6, uint8_t* paket_u8, uint8_t idx)
{
    word3_6->BitField.omega_lsb = eph->omega_lsb;
    word3_6->BitField.cis_msb = eph->cis_msb;
    word3_6->BitField.parity_bits = eph->parity_bits;
    word3_6->BitField.pad = eph->pad;

    paket_u8[idx++] = word3_6->word >> 24;
    paket_u8[idx++] = word3_6->word >> 16;
    paket_u8[idx++] = word3_6->word >> 8;
    paket_u8[idx++] = word3_6->word;

    idx = idx + sizeof(word3_6->word);
    return idx;

}

void subframe_3_word_7_doldur(const eph_veriler_a* const eph, Word3_7* const word3_7, uint8_t* paket_u8, uint8_t idx)
{
    word3_7->BitField.cis_lsb = eph->cis_lsb;
    word3_7->BitField.idot_msb = eph->idot_msb;
    word3_7->BitField.parity_bits = eph->parity_bits;
    word3_7->BitField.pad = eph->pad;

    paket_u8[idx++] = word3_7->word >> 24;
    paket_u8[idx++] = word3_7->word >> 16;
    paket_u8[idx++] = word3_7->word >> 8;
    paket_u8[idx++] = word3_7->word;

    idx = idx + sizeof(word3_7->word);
    return idx;

}

void subframe_3_word_8_doldur(const eph_veriler_a* const eph, Word3_8* const word3_8, uint8_t* paket_u8, uint8_t idx)
{
    word3_8->BitField.idot_lsb = eph->idot_lsb;
    word3_8->BitField.omega0_msb = eph->omega0_msb;
    word3_8->BitField.parity_bits = eph->parity_bits;
    word3_8->BitField.pad = eph->pad;

    paket_u8[idx++] = word3_8->word >> 24;
    paket_u8[idx++] = word3_8->word >> 16;
    paket_u8[idx++] = word3_8->word >> 8;
    paket_u8[idx++] = word3_8->word;

    idx = idx + sizeof(word3_8->word);
    return idx;

}

void subframe_3_word_9_doldur(const eph_veriler_a* const eph, Word3_9* const word3_9, uint8_t* paket_u8, uint8_t idx)
{
    word3_9->BitField.omega0_lsb = eph->omega0_lsb;
    word3_9->BitField.w_msb = eph->w_msb;
    word3_9->BitField.parity_bits = eph->parity_bits;
    word3_9->BitField.pad = eph->pad;

    paket_u8[idx++] = word3_9->word >> 24;
    paket_u8[idx++] = word3_9->word >> 16;
    paket_u8[idx++] = word3_9->word >> 8;
    paket_u8[idx++] = word3_9->word;

    idx = idx + sizeof(word3_9->word);
    return idx;

}

void subframe_3_word_10_doldur(const eph_veriler_a* const eph, Word3_10* const word3_10, uint8_t* paket_u8, uint8_t idx)
{
    word3_10->BitField.w_lsb = eph->w_lsb;
    word3_10->BitField.rev = eph->rev;
    word3_10->BitField.parity_bits = eph->parity_bits;
    word3_10->BitField.pad = eph->pad;

    paket_u8[idx++] = word3_10->word >> 24;
    paket_u8[idx++] = word3_10->word >> 16;
    paket_u8[idx++] = word3_10->word >> 8;
    paket_u8[idx++] = word3_10->word;

    idx = idx + sizeof(word3_10->word);
    return idx;

}