/* NON_MATCHING: the range's two words are read as ldrd here (retail: count, then first, as separate loads) and the out-pointer arguments are set up in the other order. */
#include "common.h"
#include "shard/W4_Match6_BtlEntry.h"

extern "C" {

struct EntryRange { u32 first; u32 count; };
extern BtlMainState *btlGetMainState(void);
extern BtlEntry *btlMainFindActiveEntry(BtlMainState *state);
extern s32 btlScriptResolveGroupArg(s32 group);
extern void FUN_002499fc(s32 group, u32 *first, u32 *count);
extern s32 scrGetArg(s32 index);
extern int scrSetResult(s32 value);

/* Script command: 1 if an absent-flag, active, unblocked entry in the range (or the active entry) has a positive stat of the requested kind. */
u32 FUN_00312148(void)
{
    s32 arg = scrGetArg(0);
    s32 kind = 0;
    EntryRange range;
    s32 i;
    BtlEntry *entry;

    if (arg == 0) {
        kind = 7;
    } else if (arg == 1) {
        kind = 10;
    } else if (arg == 2) {
        kind = 11;
    }
    s32 group = scrGetArg(1);
    FUN_002499fc(btlScriptResolveGroupArg(group), &range.first, &range.count);
    for (i = range.first; i < (s32)(range.first + range.count); i++) {
        entry = &btlGetMainState()->entries[i];

        if ((entry->flags & BTL_ENTRY_FLAG_PRESENT) == 0 && (entry->flags & BTL_ENTRY_FLAG_ACTIVE) != 0 &&
            (entry->flags & BTL_ENTRY_FLAG_BLOCKED) == 0 && entry->stat[kind] >= 1) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->hasActiveEntry != 0) {
        entry = btlMainFindActiveEntry(btlGetMainState());
        if (entry != NULL && entry->stat[kind] >= 1) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

}
