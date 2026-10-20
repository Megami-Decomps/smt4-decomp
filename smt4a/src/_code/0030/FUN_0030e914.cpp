#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u16 *flags;
} Holder;

/* Returns whether any of the bits `mask` selects is set in entry `index` of the 16-bit flag array. */
u8 FUN_0030e914(Holder *object, u16 mask, s32 index)
{
    return (object->flags[index] & mask) != 0;
}

} /* extern "C" */
