#include "common.h"

extern "C" {

extern void *g_btlScriptUnit;

s32 scrGetArg(u32 index);
void btlUnitSetParam(void *unit, u32 param, s32 value);

/* Script command: sets the script unit's parameter 27 to argument zero. */
s32 FUN_002dbf90(void)
{
    btlUnitSetParam(g_btlScriptUnit, 27, scrGetArg(0));
    return 1;
}

} /* extern "C" */
