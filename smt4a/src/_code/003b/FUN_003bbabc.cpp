/* NON_MATCHING: required-mask load grouping and AND instruction scheduling differ. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "script/ScriptArgs.h"

extern "C" {
s32 scrGetArg(s32 index);
BtlMainStateA *btlGetMainState();

/* Test whether an eligible unit has a negative value in the requested modifier. */
u32 FUN_003bbabc()
{
    // A local view avoids raising the alignment of the shared union starting at 0x00A.
    struct ModifierView {
        u8 prefix[0x74];
        s32 values[12];
    };
    u32 unitId = scrGetArg(0);
    s32 modifier = scrGetArg(1);
    s32 index = 0;
    if (modifier == 0) {
        index = 7;
    } else if (modifier == 1) {
        index = 8;
    } else if (modifier == 2) {
        index = 10;
    } else if (modifier == 3) {
        index = 11;
    }
    for (s32 slot = 0; slot < 109; ++slot) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[slot];
        u64 flags = entry->flags;
        if ((g_btlCandidateMasks.unavailable & flags) &&
            (g_btlCandidateMasks.required & flags) &&
            !(flags & g_btlCandidateMasks.excluded) &&
            entry->id == unitId &&
            reinterpret_cast<ModifierView *>(entry)->values[index] <= -1) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
