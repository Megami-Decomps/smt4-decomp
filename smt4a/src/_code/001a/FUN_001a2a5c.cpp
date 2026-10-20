#include "common.h"

extern "C" {

extern u32 DAT_005c0ab4;

/* Returns the address of the word at 0x5C0AB4. */
u32 *FUN_001a2a5c(void)
{
    return &DAT_005c0ab4;
}

} /* extern "C" */
