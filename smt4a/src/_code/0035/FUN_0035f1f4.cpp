#include "common.h"

extern "C" {
extern u32 g_btlScriptUnit;
void btlUnitSetParam(u32 unit, s32 param, u32 value, s32 flag);

/* Script command: sets parameter 4 of the script's battle unit to 0. */
s32 FUN_0035f1f4(void)
{
    btlUnitSetParam(g_btlScriptUnit, 4, 0, 1);
    return 1;
}
}
