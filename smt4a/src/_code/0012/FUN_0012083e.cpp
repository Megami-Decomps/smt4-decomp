#include "common.h"

extern "C" {

void *FUN_0011e41a(void *dest, const void *source);

typedef struct Record {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 kindA;
    /* 0x05 */ u8 kindB;
    /* 0x06 */ u8 unk06[2];
    /* 0x08 */ u8 part[1];
} Record;

/* Assignment: copies the two bytes and the sub-part (through FUN_0011e41a) from `source` and returns `dest`. */
Record *FUN_0012083e(Record *dest, const Record *source)
{
    dest->kindA = source->kindA;
    dest->kindB = source->kindB;
    FUN_0011e41a(dest->part, source->part);
    return dest;
}

} /* extern "C" */
