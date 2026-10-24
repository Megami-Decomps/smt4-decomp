#include "common.h"

extern "C" {

s32 scrGetArg(s32 index);
extern u32 g_btlScriptUnit;

void btlUnitSetParam(u32 unit, s32 param, s32 value);

/* Script command: sets parameter 24 of the scripted unit to the first argument. */
u32 FUN_002f7674(void)
{
    btlUnitSetParam(g_btlScriptUnit, 24, scrGetArg(0));
    return 1;
}

} /* extern "C" */
