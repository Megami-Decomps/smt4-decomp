/* NON_MATCHING: selected counter column and found flag use swapped r5/r6 registers. */
#include "battle/BtlMainAccess.h"
#include "common.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "script/ScriptArgs.h"

extern "C" {

// Test whether all eligible copies of a unit have a positive selected counter.
s32 FUN_003c6294(void)
{
    u32 id = scrGetArg(0);
    s32 kind = scrGetArg(1);
    s32 column = 0;
    if (kind == 0)
        column = 7;
    else if (kind == 1)
        column = 8;
    else if (kind == 2)
        column = 10;
    else if (kind == 3)
        column = 11;
    u8 found = 0;
    for (s32 i = 0; i < 109; ++i) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];
        if ((entry->flags & g_btlCandidateMasks.unavailable) != 0 &&
            (entry->flags & g_btlCandidateMasks.required) != 0 &&
            (entry->flags & g_btlCandidateMasks.excluded) == 0 && entry->id == id) {
            found = 1;
            // A local view avoids changing the shared combatant's still-unclassified padding.
            struct CounterView {
                u8 prefix[0x74];
                s32 values[12];
            };
            if (reinterpret_cast<CounterView *>(entry)->values[column] < 1) {
                scrSetResult(0);
                return 1;
            }
        }
    }
    scrSetResult(found != 0);
    return 1;
}
}
