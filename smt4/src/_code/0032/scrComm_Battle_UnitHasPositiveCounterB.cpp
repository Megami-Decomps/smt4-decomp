#include "battle/BattleUnitSlot.h"

extern "C" {

int scrSetResult(int result);

extern u32 g_btlScriptUnit;
u32 scrComm_Battle_UnitHasPositiveCounterB(void)
{
    u8 *unit = reinterpret_cast<u8 *>(btlUnitGet(reinterpret_cast<BtlState *const *>(g_btlScriptUnit)));

    if (*(s16 *)(*(int *)(unit + 0x20) + 0x90) > 0) {
        scrSetResult(1);
    } else {
        scrSetResult(0 < *(s16 *)(*(int *)(unit + 0x20) + 0x94));
    }
    return 1;
}

} /* extern "C" */
