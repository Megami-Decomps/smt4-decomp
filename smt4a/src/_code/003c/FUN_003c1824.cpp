/* NON_MATCHING: first 64-bit mask intersection uses r6/r3 rather than retail r3/ip; remaining scan matches. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" BtlMainStateA *btlGetMainState(void);
extern "C" int scrSetResult(s32 result);

/* Report whether any permitted combatant has a positive availability value. */
extern "C" u32 FUN_003c1824(void)
{
    /* This word cannot be added to the shared entry's halfword-aligned union. */
    struct CandidateAvailabilityView {
        u8 unk000[0xCC];
        s32 value;
    };
    for (s32 index = 0; index < 109; ++index) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        u64 flags = entry->flags;
        if ((g_btlCandidateMasks.unavailable & flags) &&
            (g_btlCandidateMasks.required & flags) &&
            !(g_btlCandidateMasks.excluded & flags) &&
            reinterpret_cast<CandidateAvailabilityView *>(entry)->value > 0) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
