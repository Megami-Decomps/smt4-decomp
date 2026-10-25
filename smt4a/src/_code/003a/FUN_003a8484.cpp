/* NON_MATCHING: candidate mask load grouping, value comparison, and saved registers differ. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {
BtlMainStateA *btlGetMainState(void);
u32 scrGetArg(u32 index);
void scrSetResult(s32 value);

// Test whether an eligible combatant has a positive value in the selected candidate column.
u32 FUN_003a8484(void)
{
    // These words occupy a halfword-aligned union in the shared entry layout.
    struct CandidateValuesView {
        u8 unk000[0x74];
        s32 values[12];
    };
    u32 selector = scrGetArg(0);
    s32 column = 0;
    if (selector == 0) {
        column = 7;
    } else if (selector == 1) {
        column = 8;
    } else if (selector == 2) {
        column = 10;
    } else if (selector == 3) {
        column = 11;
    }
    for (s32 index = 0; index < 109; ++index) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        if ((entry->flags & g_btlCandidateMasks.unavailable) &&
            (g_btlCandidateMasks.required & entry->flags) &&
            !(g_btlCandidateMasks.excluded & entry->flags) &&
            ((CandidateValuesView *)entry)->values[column] >= 1) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
