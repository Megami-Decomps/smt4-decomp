#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 kind;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ u32 word08;
    /* 0x0C */ u32 word0C;
    /* 0x10 */ u32 word10;
    /* 0x14 */ u16 half14;
    /* 0x16 */ u16 half16;
} Record;

/* Copies every field of `source` into `dest`. */
void FUN_0012027e(Record *dest, const Record *source)
{
    dest->kind = source->kind;
    dest->word08 = source->word08;
    dest->word0C = source->word0C;
    dest->word10 = source->word10;
    dest->half14 = source->half14;
    dest->half16 = source->half16;
}

} /* extern "C" */
