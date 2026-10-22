/* NON_MATCHING: the entry-table base and index arithmetic use R0/R1 in the opposite order. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {
u32 scrGetArg(u32 index);
void scrSetResult(u32 value);
BtlMainStateA* btlGetMainState(void);

// Report whether any eligible combatant's selected signed parameter exceeds the threshold.
u32 FUN_003c1730(void)
{
    // Dword parameters would increase the alignment of the shared union beginning at byte 0xA.
    struct ParameterView {
        u8 unk00[0x74];
        s32 values[12];
    };
    typedef char ParameterOffset[offsetof(ParameterView, values) == 0x74 ? 1 : -1];
    u32 kind = scrGetArg(0);
    s32 parameter = 0;
    if (kind == 0) {
        parameter = 7;
    } else if (kind == 1) {
        parameter = 8;
    } else if (kind == 2) {
        parameter = 10;
    } else if (kind == 3) {
        parameter = 11;
    }
    s32 threshold = (s32)scrGetArg(1);
    for (s32 i = 0; i < 109; ++i) {
        const BtlCombatantEntryA* entry = btlGetMainState()->entries + i;
        if ((g_btlCandidateMasks.unavailable & entry->flags) != 0 &&
            (g_btlCandidateMasks.required & entry->flags) != 0 &&
            (entry->flags & g_btlCandidateMasks.excluded) == 0 &&
            reinterpret_cast<const ParameterView*>(entry)->values[parameter] > threshold) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
