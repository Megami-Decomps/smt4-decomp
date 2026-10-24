#include "common.h"

extern "C" {

extern u32 g_btlScriptUnit;

void btlUnitSetParam(u32 unit, u32 param, s32 value, s32 flag);

/* Script command: sets the script unit's parameter 3 to zero. */
s32 FUN_0035f21c(void)
{
    btlUnitSetParam(g_btlScriptUnit, 3, 0, 1);
    return 1;
}

} /* extern "C" */
