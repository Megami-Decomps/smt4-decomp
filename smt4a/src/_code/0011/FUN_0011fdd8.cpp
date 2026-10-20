#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 kind;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ u32 word08;
    /* 0x0C */ u16 half0C;
} Record;

/* Copies the kind and the two values from `source` into `dest`. */
void FUN_0011fdd8(Record *dest, const Record *source)
{
    dest->kind = source->kind;
    dest->word08 = source->word08;
    dest->half0C = source->half0C;
}

} /* extern "C" */
