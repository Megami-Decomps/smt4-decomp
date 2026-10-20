#include "common.h"

extern "C" {

typedef struct Source {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 *ref;
} Source;

/* Copies the word at 8 of the source's `ref` target into `*out`. */
void FUN_0030f846(u32 *out, Source *source)
{
    *out = source->ref[2];
}

} /* extern "C" */
