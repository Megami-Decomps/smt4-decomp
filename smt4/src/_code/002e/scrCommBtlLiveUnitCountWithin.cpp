#include "shard/W4_W4Match2_BtlUnits.h"

extern "C" {

extern BtlState *btlGetMainState(void);
extern BtlUnitEntry *btlMainFindActiveEntry(BtlState *state);
extern s32 scrGetArg(s32 index);
extern void scrSetResult(s32 value);
extern u32 btlScriptResolveGroupArg(void);
extern void FUN_002499fc(u32 group, s32 *first, s32 *count);

/* Script command: pushes whether the number of live units of the current group (plus the active entry) is within argument 0; returns 1. */
s32 scrCommBtlLiveUnitCountWithin(void)
{
    s32 limit = scrGetArg(0);
    s32 first;
    s32 count;
    s32 live;
    u32 group;
    s32 i;

    scrGetArg(1);
    group = btlScriptResolveGroupArg();
    live = 0;
    FUN_002499fc(group, &first, &count);
    for (i = first; i < first + count; i++) {
        BtlUnitEntry *unit = &btlGetMainState()->units[i];

        if ((unit->flags & 0x10) == 0 && (unit->flags & 1) != 0 && (unit->flags & 0x40) == 0) {
            live++;
        }
    }
    if (btlGetMainState()->hasActiveEntry != 0) {
        if (btlMainFindActiveEntry(btlGetMainState()) != NULL) {
            live++;
        }
    }
    scrSetResult(live <= limit);
    return 1;
}

} /* extern "C" */
