/* NON_MATCHING: everything matches except the frame size: retail reserves 28 bytes (count at sp, start at sp+4), this build 12. */
#include "battle/BattleHelpers.h"
#include "battle/BtlMainAccess.h"
#include "script/ScriptArgs.h"
#include "util/SlotRangeSelect.h"

extern "C" {

extern BtlEntry *btlMainFindActiveEntry(BtlMainState *state);

/* Script command: pushes whether the HP percentage of the present, non-excluded units of the current group (and the
 * active entry) is at most argument 0. */
u32 scrCommBtlGroupHpPercentWithin(void)
{
    s32 limit = scrGetArg(0);
    s32 count;
    s32 start;
    s32 group = btlScriptResolveGroupArg(scrGetArg(1));
    HpSums sums;

    sums.maximum = 0;
    sums.current = 0;
    btlSideGetEntryRange(group, &start, &count);
    for (s32 index = start; index < start + count; index++) {
        BtlEntry *unit = &btlGetMainState()->entries[index];

        if (!(unit->flags & 0x10) && (unit->flags & 1) && !(unit->flags & 0x40)) {
            sums.maximum += unit->data.maxHp;
            sums.current += unit->data.hp;
        }
    }
    if (btlGetMainState()->hasActiveEntry != 0) {
        BtlEntry *active = btlMainFindActiveEntry(btlGetMainState());
        if (active != NULL) {
            sums.maximum += active->data.maxHp;
            sums.current += active->data.hp;
        }
    }
    scrSetResult(sums.current * 100 / sums.maximum <= limit);
    return 1;
}

} /* extern "C" */
