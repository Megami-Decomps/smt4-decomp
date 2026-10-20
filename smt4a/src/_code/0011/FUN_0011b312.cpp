#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 kind;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ u64 value08;
    /* 0x10 */ u32 word10;
    /* 0x14 */ u8 unk14[4];
    /* 0x18 */ u64 value18;
} Record;

/* Copies the kind, the two 64-bit values and the word at 0x10 from `source` into `dest`. */
void FUN_0011b312(Record *dest, const Record *source)
{
    dest->kind = source->kind;
    dest->value08 = source->value08;
    dest->word10 = source->word10;
    dest->value18 = source->value18;
}

} /* extern "C" */
