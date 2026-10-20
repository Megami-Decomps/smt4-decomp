#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 byte04;
    /* 0x05 */ u8 byte05;
    /* 0x06 */ u8 byte06;
    /* 0x07 */ u8 byte07;
    /* 0x08 */ u64 value08;
    /* 0x10 */ u32 word10;
    /* 0x14 */ u32 word14;
    /* 0x18 */ u8 byte18;
    /* 0x19 */ u8 unk19;
    /* 0x1A */ u16 half1A;
} Record;

/* Copies every field of `source` into `dest`. */
void FUN_0011e41a(Record *dest, const Record *source)
{
    dest->byte04 = source->byte04;
    dest->byte05 = source->byte05;
    dest->byte06 = source->byte06;
    dest->byte07 = source->byte07;
    dest->value08 = source->value08;
    dest->word10 = source->word10;
    dest->word14 = source->word14;
    dest->byte18 = source->byte18;
    dest->half1A = source->half1A;
}

} /* extern "C" */
