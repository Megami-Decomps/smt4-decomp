#include "common.h"

extern "C" {

extern u32 g_btlScriptUnit;

void btlUnitSetParam(u32 unit, s32 param, s32 value);

/* Script command: sets parameter 5 of the scripted unit to 0. */
u32 FUN_002e4000(void)
{
    btlUnitSetParam(g_btlScriptUnit, 5, 0);
    return 1;
}

} /* extern "C" */
