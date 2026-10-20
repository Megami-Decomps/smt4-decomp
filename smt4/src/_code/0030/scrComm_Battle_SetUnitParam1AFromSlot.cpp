#include "battle/btlUnit.h"

extern "C" {

void btlUnitSetParam(u32 unit, s32 param, u32 value);
s32 scrGetArg(void);

extern u32 g_btlScriptUnit;

/* Script command: sets unit parameter 0x1A to the index of the given slot. */
s32 scrComm_Battle_SetUnitParam1AFromSlot(void)
{
    s32 slot = scrGetArg();
    u32 index = 0;

    if (slot == 0) {
        index = 7;
    } else if (slot == 1) {
        index = 10;
    } else if (slot == 2) {
        index = 0xB;
    }
    btlUnitSetParam(g_btlScriptUnit, 0x1A, index);
    return 1;
}

} /* extern "C" */
