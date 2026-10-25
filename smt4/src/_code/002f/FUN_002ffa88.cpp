#include "battle/BtlMainAccess.h"
#include "shard/W4_W4Match2_BtlUnits.h"

extern "C" {
u32 scrGetArg(s32);
u32 btlScriptResolveGroupArg(u32);
void FUN_002499fc(u32, s32 *, s32 *);
BtlEntry *btlMainFindActiveEntry(BtlMainState *);
void scrSetResult(s32);

/* Test whether a matching unit in the selected group has status kind two. */
u32 FUN_002ffa88()
{
    u32 groupId = scrGetArg(0);
    s32 status = scrGetArg(1);
    u32 group = btlScriptResolveGroupArg(scrGetArg(2));
    s32 first, count;
    FUN_002499fc(group, &first, &count);
    for (s32 i = first; i < first + count; ++i) {
        BtlEntry *unit = &btlGetMainState()->entries[i];
        if (!(unit->flags & 0x10) && (unit->flags & 1) && !(unit->flags & 0x40) && unit->id == groupId &&
            (unit->values[status] >> 10) == 2) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->hasActiveEntry) {
        BtlEntry *unit = btlMainFindActiveEntry(btlGetMainState());
        if (unit != NULL && unit->id == groupId && (unit->values[status] >> 10) == 2) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
