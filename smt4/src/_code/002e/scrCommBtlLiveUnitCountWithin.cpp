#include "battle/BtlMainAccess.h"
#include "shard/W4_W4Match2_BtlUnits.h"
#include "script/ScriptArgs.h"

extern "C" {

extern BtlEntry *btlMainFindActiveEntry(BtlMainState *state);
extern s32 scrGetArg(s32 index);
extern s32 btlScriptResolveGroupArg(s32 group);
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

    group = btlScriptResolveGroupArg(scrGetArg(1));
    live = 0;
    FUN_002499fc(group, &first, &count);
    for (i = first; i < first + count; i++) {
        BtlEntry *unit = &btlGetMainState()->entries[i];

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
