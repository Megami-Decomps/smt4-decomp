/* NON_MATCHING: mask halves use different load and AND operand registers; the fallback-value test is if-converted differently. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

// These word fields fall inside an unaligned padding union in the shared combatant layout.
struct CandidateValueView {
    u8 unk000[0xb0];
    s32 primary; // 0xb0
    u32 unkB4;
    s32 secondary; // 0xb8
};
extern "C" {
BtlMainStateA *btlGetMainState();
void scrSetResult(s32 result);

// Report whether any eligible combatant has a positive primary or fallback value.
u32 FUN_003caa2c()
{
    for (s32 i = 0; i < 109; ++i) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];
        u64 flags = entry->flags;
        if ((flags & g_btlCandidateMasks.unavailable) &&
            (flags & g_btlCandidateMasks.required) && !(flags & g_btlCandidateMasks.excluded)) {
            CandidateValueView *values = (CandidateValueView *)entry;
            s32 value = values->primary;
            if (value < 1)
                value = values->secondary;
            if (value > 0) {
                scrSetResult(1);
                return 1;
            }
        }
    }
    scrSetResult(0);
    return 1;
}
}
