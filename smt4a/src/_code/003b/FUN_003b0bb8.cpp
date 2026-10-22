/* NON_MATCHING: stat selection and candidate-mask AND register allocation differ. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {
BtlMainStateA *btlGetMainState();
s32 scrGetArg(u32 index);
void scrSetResult(s32 result);

u32 FUN_003b0bb8()
{
    s32 stat = 0;
    switch (scrGetArg(0)) {
    case 0: stat = 7; break;
    case 1: stat = 8; break;
    case 2: stat = 10; break;
    case 3: stat = 11; break;
    }
    // Word fields cannot be added to the shared union beginning at byte 0x0a.
    struct CandidateStatView { u8 unk000[0x74]; s32 values[12]; };
    typedef char CandidateStatOffsetCheck[offsetof(CandidateStatView, values) == 0x74 ? 1 : -1];
    for (s32 index = 0; index < 109; ++index) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        u64 flags = entry->flags;
        if ((flags & g_btlCandidateMasks.unavailable) != 0 &&
            (flags & g_btlCandidateMasks.required) != 0 &&
            (flags & g_btlCandidateMasks.excluded) == 0 &&
            ((CandidateStatView *)entry)->values[stat] < 0) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
