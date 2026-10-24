#include "common.h"

extern "C" {

extern void *g_btlScriptUnit;

void btlUnitSetParam(void *unit, u32 param, s32 value);

/* Script command: sets the script unit's parameter 3 to zero. */
s32 FUN_002e3fb8(void)
{
    btlUnitSetParam(g_btlScriptUnit, 3, 0);
    return 1;
}

} /* extern "C" */
