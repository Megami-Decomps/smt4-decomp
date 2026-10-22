#include "shard/W4_Match6_BtlEntry.h"

extern "C" {

s32 scrGetArg(u32 index);
void scrSetResult(s32 result);
u32 btlScriptResolveGroupArg(s32 side);
void FUN_002499fc(u32 group, s32 *first, s32 *count);
BtlMainState *btlGetMainState(void);
BtlEntry *btlMainFindActiveEntry(BtlMainState *state);

/* Script command: result 1 when some active, present and unblocked entry of side `arg0` (or the
 * active entry) can still act. */
s32 btlScriptSideCanAct(void)
{
    s32 first;
    s32 count;
    s32 i;

    FUN_002499fc(btlScriptResolveGroupArg(scrGetArg(0)), &first, &count);
    for (i = first; i < count + first; i++) {
        BtlEntry *entry = &btlGetMainState()->entries[i];
        if (!(entry->flags & BTL_ENTRY_FLAG_PRESENT) && (entry->flags & BTL_ENTRY_FLAG_ACTIVE) &&
            !(entry->flags & BTL_ENTRY_FLAG_BLOCKED) && entry->turn.unk098 > 0) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->hasActiveEntry) {
        BtlEntry *entry = btlMainFindActiveEntry(btlGetMainState());
        if (entry != NULL && entry->turn.unk098 > 0) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
