#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 a;
    /* 0x08 */ u8 b;
    /* 0x09 */ u8 unk09[3];
    /* 0x0C */ u32 c;
    /* 0x10 */ u8 d;
} Record;

/* Copies the four fields of `source` into `dest`. */
void FUN_0030e8b4(Record *dest, const Record *source)
{
    dest->a = source->a;
    dest->b = source->b;
    dest->c = source->c;
    dest->d = source->d;
}

} /* extern "C" */
