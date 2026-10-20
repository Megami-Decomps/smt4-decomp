#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 kind;
    /* 0x05 */ u8 unk05;
    /* 0x06 */ u16 half06;
    /* 0x08 */ u8 byte08;
} Record;

/* Copies every field of `source` into `dest`. */
void FUN_0012055e(Record *dest, const Record *source)
{
    dest->kind = source->kind;
    dest->half06 = source->half06;
    dest->byte08 = source->byte08;
}

} /* extern "C" */
