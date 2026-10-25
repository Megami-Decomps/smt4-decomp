#include "shard/W4_Match6_BtlEntry.h"
#include "battle/BattleUnitSlot.h"

extern "C" {

int scrSetResult(int result);
extern int btlSlotsHaveReadyUnit(BtlEntry *unit);

extern u32 g_btlScriptUnit;
u32 FUN_002f70b8(void)
{
    u8 *unit = reinterpret_cast<u8 *>(btlUnitGet(reinterpret_cast<BtlState *const *>(g_btlScriptUnit)));

    if (btlSlotsHaveReadyUnit(*reinterpret_cast<BtlEntry **>(unit + 0x20)) != 0) {
        scrSetResult(1);
        return 1;
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
