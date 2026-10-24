#include "common.h"

extern "C" {
extern u32 g_btlScriptUnit;
void btlUnitSetParam(u32 unit, s32 param, u32 value, s32 flag);

/* Script command: sets parameter 2 of the script's battle unit to 0. */
s32 FUN_003357c0(void)
{
    btlUnitSetParam(g_btlScriptUnit, 2, 0, 1);
    return 1;
}
}
