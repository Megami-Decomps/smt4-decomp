#include "common.h"

extern "C" {

typedef struct Source {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 size;
} Source;

typedef struct Holder {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ Source *source;
} Holder;

/* Clears `*out` (if given) and returns 1 when the source holds at least 10 bytes. */
u32 FUN_003014c6(Holder *object, u32 *out)
{
    if (out != NULL) {
        *out = 0;
    }
    if (object->source->size < 10) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
