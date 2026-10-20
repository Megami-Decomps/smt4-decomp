#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ u8 flags;
} Holder;

/* Returns whether any of the given bits is set in the byte at 0x1C. */
u8 FUN_002f14a8(Holder *object, u8 bits)
{
    return (object->flags & bits) != 0;
}

} /* extern "C" */
