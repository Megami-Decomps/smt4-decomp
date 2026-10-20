#include "battle/btlUnit.h"

extern "C" {

void btlUnitSetParam(u32 unit, s32 param, s32 value, s32 flag);
s32 scrGetArg(void);

extern u32 g_btlScriptUnit;

/* Script command: sets unit parameter 0x19 to the index of the given slot. */
s32 scrComm_Battle_SetUnitParam19FromSlot(void)
{
    s32 slot = scrGetArg();
    s32 index = 0;

    if (slot == 0) {
        index = 7;
    } else if (slot == 1) {
        index = 8;
    } else if (slot == 2) {
        index = 10;
    } else if (slot == 3) {
        index = 0xB;
    }

    btlUnitSetParam(g_btlScriptUnit, 0x19, index, 1);
    return 1;
}

} /* extern "C" */
