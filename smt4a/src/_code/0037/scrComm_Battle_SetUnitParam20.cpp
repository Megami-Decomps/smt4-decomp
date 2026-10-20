#include "battle/btlUnit.h"

extern "C" {

void btlUnitSetParam(u32 unit, s32 param, u32 value, s32 flag);
u32 scrGetArg(void);

extern u32 g_btlScriptUnit;

/* Script command: sets battle unit parameter 0x20 to the script's argument. */
s32 scrComm_Battle_SetUnitParam20(void)
{
    u32 value = scrGetArg();

    btlUnitSetParam(g_btlScriptUnit, 0x20, value, 1);
    return 1;
}

} /* extern "C" */
