#include "common.h"

extern "C" {

typedef struct Mask {
    /* 0x00 */ u32 *flags;
    /* 0x04 */ u32 bits;
} Mask;

/* Returns whether any of the mask's bits is set in the word `*flags` refers to. */
u8 FUN_002efa80(Mask *mask)
{
    return (*mask->flags & mask->bits) != 0;
}

} /* extern "C" */
