#include "common.h"

extern "C" {

void _ZN9Obj55aff4aSERKS_(u8 *dest, const u8 *source);

typedef struct Record {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 kind;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ u8 partA[8];
    /* 0x10 */ u8 partB[1];
} Record;

/* Assignment: copies `kind` and the two parts (through _ZN9Obj55aff4aSERKS_) from `source` and returns `dest`. */
Record *FUN_001178e2(Record *dest, const Record *source)
{
    dest->kind = source->kind;
    _ZN9Obj55aff4aSERKS_(dest->partA, source->partA);
    _ZN9Obj55aff4aSERKS_(dest->partB, source->partB);
    return dest;
}

} /* extern "C" */
