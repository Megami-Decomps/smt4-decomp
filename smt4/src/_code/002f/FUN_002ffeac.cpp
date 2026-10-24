#include "common.h"

extern "C" {
extern u32 g_btlScriptUnit;
s32 scrGetArg(u32 index);
void btlUnitSetParam(u32 unit, s32 param, u32 value);

/* Script command: sets parameter 23 of the script's battle unit to its first argument. */
s32 FUN_002ffeac(void)
{
    btlUnitSetParam(g_btlScriptUnit, 23, scrGetArg(0));
    return 1;
}
}
