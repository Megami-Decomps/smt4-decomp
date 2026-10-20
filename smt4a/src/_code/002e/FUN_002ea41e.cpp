#include "common.h"

extern "C" {

typedef struct Triple {
    /* 0x00 */ u32 a;
    /* 0x04 */ u32 b;
    /* 0x08 */ u32 c;
} Triple;

typedef struct Source {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u32 a;
    /* 0x3C */ u32 b;
    /* 0x40 */ u32 c;
} Source;

/* Copies the three words at 0x38..0x40 of `source` into `dest`. */
void FUN_002ea41e(Triple *dest, Source *source)
{
    u32 a;
    u32 c;

    a = source->a;
    c = source->c;
    dest->b = source->b;
    dest->a = a;
    dest->c = c;
}

} /* extern "C" */
