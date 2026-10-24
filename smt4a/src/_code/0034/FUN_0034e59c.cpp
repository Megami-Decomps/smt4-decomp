#include "common.h"

extern "C" {

extern u32 g_btlScriptUnit;

void btlUnitSetParam(u32 unit, s32 param, s32 value, s32 mode);

/* Script command: sets parameter 16 of the scripted unit to 0. */
u32 FUN_0034e59c(void)
{
    btlUnitSetParam(g_btlScriptUnit, 16, 0, 1);
    return 1;
}

} /* extern "C" */
