#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {

u32 scrGetArg(u32 index);
void scrSetResult(s32 result);
s32 battleUnitHasElementEntry(BtlCombatantEntryA *entry, u32 first, u32 second);

/* Script command: count the eligible battle entries that pass battleUnitHasElementEntry with the two arguments. */
u32 btlScriptCountMatchingCandidates(void)
{
    u32 first = scrGetArg(0);
    u32 second = scrGetArg(1);
    BtlMainStateA *state = btlGetMainState();
    s32 count = 0;

    for (s32 i = 0; i < 109; ++i) {
        BtlCombatantEntryA *entry = &state->entries[i];
        if (entry != NULL && (entry->flags & g_btlCandidateMasks.required) &&
            !(entry->flags & g_btlCandidateMasks.excluded) &&
            (entry->flags & g_btlCandidateMasks.unavailable) &&
            battleUnitHasElementEntry(entry, first, second)) {
            count++;
        }
    }
    scrSetResult(count);
    return 1;
}

} /* extern "C" */
