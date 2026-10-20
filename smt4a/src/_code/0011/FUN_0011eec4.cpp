#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 kind;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ u64 value08;
    /* 0x10 */ u32 word10;
    /* 0x14 */ u32 word14;
    /* 0x18 */ u16 half18;
    /* 0x1A */ u8 unk1A[2];
    /* 0x1C */ u32 word1C;
} Record;

/* Copies every field of `source` into `dest`. */
void FUN_0011eec4(Record *dest, const Record *source)
{
    dest->kind = source->kind;
    dest->value08 = source->value08;
    dest->word10 = source->word10;
    dest->word14 = source->word14;
    dest->half18 = source->half18;
    dest->word1C = source->word1C;
}

} /* extern "C" */
