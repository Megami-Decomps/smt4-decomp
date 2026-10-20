#include "common.h"

extern "C" {

s32 FUN_0015a420(void);

/* Returns whether FUN_0015a420 reports 1. */
u8 FUN_0014733c(void)
{
    return FUN_0015a420() == 1;
}

} /* extern "C" */
