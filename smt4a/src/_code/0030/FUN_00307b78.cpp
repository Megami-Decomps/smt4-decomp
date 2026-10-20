#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 kind;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ u64 value08;
    /* 0x10 */ u32 word10;
} Record;

/* Copies the kind, the 64-bit value at 8 and the word at 0x10 from `source` into `dest`. */
void FUN_00307b78(Record *dest, const Record *source)
{
    dest->kind = source->kind;
    dest->value08 = source->value08;
    dest->word10 = source->word10;
}

} /* extern "C" */
