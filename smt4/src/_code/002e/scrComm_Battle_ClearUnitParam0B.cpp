#include "battle/btlScript.h"

extern "C" {

void btlUnitSetParam(u32 unit, s32 param, u32 value);

/* Script command: clears unit parameter 0xB of the script's unit. */
u32 scrComm_Battle_ClearUnitParam0B(void)
{
    btlUnitSetParam(g_btlScriptUnit, 0xB, 0);
    return 1;
}

} /* extern "C" */
