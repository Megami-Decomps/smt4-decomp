#include "common.h"

extern "C" {
s32 scrGetArg(u32 index);
u32 mapGimicStartById(s32 id);

/* Script command: starts the map gimic named by its first argument; true if it started. */
s32 FUN_003b03f0(void)
{
    return mapGimicStartById(scrGetArg(0)) != 0;
}
}
