#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u8 flags;
} Holder;

/* Returns bit 1 of `flags` (0 or 1). */
u32 objGetFlagBit1(Holder *object)
{
    return (object->flags & 2) >> 1;
}

} /* extern "C" */
