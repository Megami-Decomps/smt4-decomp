#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 kind;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ u32 value;
} Record;

/* Copies `source` into `dest` when `dest` is not NULL. */
void FUN_0030d010(u32 unused, Record *dest, Record *source)
{
    if (dest != NULL) {
        dest->kind = source->kind;
        dest->value = source->value;
    }
}

} /* extern "C" */
