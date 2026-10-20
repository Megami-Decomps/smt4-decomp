#include "common.h"

extern "C" {

/* Returns whether any of the bits `mask` selects is set in bits 8.. of `value`. */
u8 FUN_002f03f4(u32 value, u32 mask)
{
    return ((value >> 8) & mask) != 0;
}

} /* extern "C" */
