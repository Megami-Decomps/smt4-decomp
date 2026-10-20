#include "common.h"

extern "C" {

/* Returns whether `value` is at least 0x15E. */
u8 idIsAtLeast350(u32 value)
{
    return value >= 0x15E;
}

} /* extern "C" */
