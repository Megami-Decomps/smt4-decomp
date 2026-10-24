#include "battle/btlUnit.h"

extern "C" {

void btlUnitSetParam(u32 unit, s32 param, u32 value, s32 flag);
u32 scrGetArg(u32 index);

extern u32 g_btlScriptUnit;

/* Script command: sets battle unit parameter 0x1D to the script's argument. */
s32 scrComm_Battle_SetUnitParam1D(void)
{
    u32 value = scrGetArg(0);

    btlUnitSetParam(g_btlScriptUnit, 0x1D, value, 1);
    return 1;
}

} /* extern "C" */
