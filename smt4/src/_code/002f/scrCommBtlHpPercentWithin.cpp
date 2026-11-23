#include "battle/BattleHelpers.h"
#include "shard/W4_W4Match2_BtlUnits.h"
#include "battle/BtlMainAccess.h"
#include "script/ScriptArgs.h"

extern "C" {


/* Script command: pushes whether the live units' current/maximum HP percentage (argument 0 compares) is at most argument 0. */
u32 scrCommBtlHpPercentWithin(void)
{
    s32 limit = scrGetArg(0);
    HpSums sums;

    sums.maximum = 0;
    sums.current = 0;
    for (s32 index = 0; index < 0x6D; index++) {
        BtlEntry *unit = &btlGetMainState()->entries[index];

        if ((unit->flags & 0x10) && (unit->flags & 1) && !(unit->flags & 0x40)) {
            sums.maximum += unit->data.maxHp;
            sums.current += unit->data.hp;
        }
    }
    scrSetResult(sums.current * 100 / sums.maximum <= limit);
    return 1;
}

} /* extern "C" */
