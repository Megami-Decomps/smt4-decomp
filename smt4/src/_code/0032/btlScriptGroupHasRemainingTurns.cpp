#include "shard/W4_Match6_BtlEntry.h"

// This query's signed counter is within the entry's still-unnamed status padding.
struct GroupTurnEntryView { u8 unk000[0x96]; s16 remaining; };
extern "C" {
BtlMainState *btlGetMainState();
u32 scrGetArg(u32 index);
u32 btlScriptResolveGroupArg(u32 group);
void FUN_002499fc(u32 group, s32 *range, s32 *count);
BtlEntry *btlMainFindActiveEntry(BtlMainState *battle);
void scrSetResult(s32 result);

// Report whether the group or its active entry has a positive remaining turn counter.
u32 btlScriptGroupHasRemainingTurns()
{
    u32 group = btlScriptResolveGroupArg(scrGetArg(0));
    s32 first, count;
    FUN_002499fc(group, &first, &count);
    for (s32 i = first; i < count + first; ++i) {
        BtlEntry *entry = &btlGetMainState()->entries[i];
        if (!(entry->flags & 0x10) && (entry->flags & 1) && !(entry->flags & 0x40) &&
            ((GroupTurnEntryView *)entry)->remaining > 0) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->hasActiveEntry) {
        BtlEntry *entry = btlMainFindActiveEntry(btlGetMainState());
        s16 remaining = entry ? ((GroupTurnEntryView *)entry)->remaining : 0;
        if (entry && remaining != 0 && remaining >= 0) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
