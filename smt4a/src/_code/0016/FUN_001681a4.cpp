#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x00 */ u8 unk00[0xF4];
    /* 0xF4 */ u32 flags;
} Holder;

/* Returns bit 1 of `flags` (0 or 1), or 0 when there is no object. */
u32 FUN_001681a4(Holder *object)
{
    u32 bit;

    bit = 0;
    if (object != NULL) {
        bit = (object->flags & 2) >> 1;
    }
    return bit;
}

} /* extern "C" */
