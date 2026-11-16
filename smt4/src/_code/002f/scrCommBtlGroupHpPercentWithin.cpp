/* NON_MATCHING: accumulators, range loop and active-entry tail now match; retail reserves a 28-byte frame (start at sp+4, count at sp) where the build uses 12 bytes, so the loop reload pairs into ldrd. */
#include "battle/BtlMainAccess.h"
#include "script/ScriptArgs.h"
#include "util/SlotRangeSelect.h"

extern "C" {

extern BtlEntry *btlMainFindActiveEntry(BtlMainState *state);
extern s32 btlScriptResolveGroupArg(s32 group);

/* HP totals of a set of units. */
struct HpSums {
    s32 maximum;
    s32 current;
};

/* Adds the maximum and current HP of the present, non-excluded units of the group's range. */
static __inline void groupAddHp(s32 group, HpSums *sums)
{
    s32 count;
    s32 start;

    btlSideGetEntryRange(group, &start, &count);
    for (s32 index = start; index < count + start; index++) {
        BtlEntry *unit = &btlGetMainState()->entries[index];

        if (!(unit->flags & 0x10) && (unit->flags & 1) && !(unit->flags & 0x40)) {
            sums->maximum += unit->maxHp;
            sums->current += unit->hp;
        }
    }
}

/* Script command: pushes whether the HP percentage of the present, non-excluded units of the current group (and the
 * active entry) is at most argument 0. */
u32 scrCommBtlGroupHpPercentWithin(void)
{
    s32 limit = scrGetArg(0);
    s32 group = btlScriptResolveGroupArg(scrGetArg(1));
    HpSums sums;

    sums.maximum = 0;
    sums.current = 0;
    groupAddHp(group, &sums);
    if (btlGetMainState()->hasActiveEntry != 0) {
        BtlEntry *active = btlMainFindActiveEntry(btlGetMainState());
        if (active != NULL) {
            sums.maximum += active->maxHp;
            sums.current += active->hp;
        }
    }
    scrSetResult(sums.current * 100 / sums.maximum <= limit);
    return 1;
}

} /* extern "C" */
