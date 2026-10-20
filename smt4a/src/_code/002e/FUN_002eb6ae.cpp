#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x3C];
    /* 0x3C */ u16 flags;
} Holder;

/* Returns whether any of the given bits is set in the halfword at 0x3C. */
u8 FUN_002eb6ae(Holder *object, u16 bits)
{
    return (object->flags & bits) != 0;
}

} /* extern "C" */
