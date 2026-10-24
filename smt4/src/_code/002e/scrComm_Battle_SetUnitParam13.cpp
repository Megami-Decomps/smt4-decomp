#include "battle/btlScript.h"

extern "C" {

s32 scrGetArg(u32 index);
void btlUnitSetParam(u32 unit, s32 param, u32 value);

/* Script command: sets unit parameter 0x13 of the script's unit. */
u32 scrComm_Battle_SetUnitParam13(void)
{
    btlUnitSetParam(g_btlScriptUnit, 0x13, scrGetArg(0));
    return 1;
}

} /* extern "C" */
