#include "common.h"

extern "C" {
extern u32 g_btlScriptUnit;
void btlUnitSetParam(u32 unit, s32 param, u32 value);

/* Script command: sets parameter 4 of the script's battle unit to 0. */
s32 FUN_002e3f94(void)
{
    btlUnitSetParam(g_btlScriptUnit, 4, 0);
    return 1;
}
}
