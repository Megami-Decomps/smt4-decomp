#include "common.h"

extern "C" {

void FUN_002ff8a8(u8 *dest, const u8 *source);

typedef struct Record {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 kindA;
    /* 0x05 */ u8 kindB;
    /* 0x06 */ u8 unk06[2];
    /* 0x08 */ u8 part[1];
} Record;

/* Assignment: copies the two bytes and the sub-part (through FUN_002ff8a8) from `source` and returns `dest`. */
Record *FUN_0011b272(Record *dest, const Record *source)
{
    dest->kindA = source->kindA;
    dest->kindB = source->kindB;
    FUN_002ff8a8(dest->part, source->part);
    return dest;
}

} /* extern "C" */
