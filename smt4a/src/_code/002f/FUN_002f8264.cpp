#include "common.h"

extern "C" {

void FUN_002e7232(u32 value);

/* Frees the word `*slot` refers to and returns the slot. */
u32 *FUN_002f8264(u32 *slot)
{
    FUN_002e7232(*slot);
    return slot;
}

} /* extern "C" */
