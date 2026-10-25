#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {

u32 scrGetArg(u32 index);
void scrSetResult(s32 result);

/* Script command: whether every eligible battle entry with the given id has the given status flag bit. */
u32 btlScriptAllEntriesHaveStatusBit(void)
{
    u32 id = scrGetArg(0);
    u32 bit = 1 << scrGetArg(1);

    for (s32 i = 0; i < 109; ++i) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];
        if ((entry->flags & g_btlCandidateMasks.unavailable) &&
            (entry->flags & g_btlCandidateMasks.required) &&
            !(g_btlCandidateMasks.excluded & entry->flags) &&
            entry->id == id && !(entry->statusFlags & bit)) {
            scrSetResult(0);
            return 1;
        }
    }
    scrSetResult(1);
    return 1;
}

} /* extern "C" */
