#include "common.h"

extern "C" {

extern void *g_btlScriptUnit;

void btlUnitSetParam(void *unit, u32 param, s32 value);

/* Script command: sets the script unit's parameter 15 to zero. */
s32 FUN_002dbf48(void)
{
    btlUnitSetParam(g_btlScriptUnit, 15, 0);
    return 1;
}

} /* extern "C" */
