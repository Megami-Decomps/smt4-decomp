#include "common.h"

extern "C" {

void FUN_002e9598(u8 *dest, const u8 *source);

typedef struct Record {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 kind;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ u8 partA[8];
    /* 0x10 */ u8 partB[1];
} Record;

/* Assignment: copies `kind` and the two parts (through FUN_002e9598) from `source` and returns `dest`. */
Record *FUN_001178e2(Record *dest, const Record *source)
{
    dest->kind = source->kind;
    FUN_002e9598(dest->partA, source->partA);
    FUN_002e9598(dest->partB, source->partB);
    return dest;
}

} /* extern "C" */
