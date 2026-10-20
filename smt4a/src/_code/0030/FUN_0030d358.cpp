#include "common.h"

extern "C" {

typedef struct Triple {
    /* 0x00 */ u32 a;
    /* 0x04 */ u32 b;
    /* 0x08 */ u32 c;
} Triple;

/* Copies the three words of `source` into `dest` when `dest` is not NULL. */
void FUN_0030d358(u32 unused, Triple *dest, Triple *source)
{
    u32 a;
    u32 b;
    u32 c;

    if (dest != NULL) {
        a = source->a;
        b = source->b;
        c = source->c;
        dest->a = a;
        dest->b = b;
        dest->c = c;
    }
}

} /* extern "C" */
