#include "common.h"

extern "C" {

/* Takes the word out of `*slot` (leaving 0) and returns it. */
u32 FUN_002fafba(u32 *slot)
{
    u32 value;

    value = *slot;
    *slot = 0;
    return value;
}

} /* extern "C" */
