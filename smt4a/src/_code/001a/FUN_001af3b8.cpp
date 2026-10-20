#include "common.h"

extern "C" {

extern u32 DAT_005c1bec;

/* Returns the first word of the global at 0x5C1BEC. */
u32 FUN_001af3b8(void)
{
    return DAT_005c1bec;
}

} /* extern "C" */
