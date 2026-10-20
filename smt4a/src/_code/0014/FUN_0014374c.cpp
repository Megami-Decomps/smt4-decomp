#include "common.h"

extern "C" {

extern u32 DAT_005b40b4;

/* Returns the first word of the global block at 0x5B40B4. */
u32 FUN_0014374c(void)
{
    return DAT_005b40b4;
}

} /* extern "C" */
