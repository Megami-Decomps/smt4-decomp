#include "common.h"

extern "C" {

void sharedRefRelease(u32 value);

/* Frees the word `*slot` refers to and returns the slot. */
u32 *FUN_002f8264(u32 *slot)
{
    sharedRefRelease(*slot);
    return slot;
}

} /* extern "C" */
