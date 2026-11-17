/* NON_MATCHING: zero-result exits and queued-skill mask scratch-register allocation differ. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "gamedata/SkillDataRecord.h"
#include "battle/BtlGlobals.h"

extern "C" {
BtlCombatantEntryA *btlFindFirstEntryMatchingCategoryAndRequiredMask(BtlMainStateA *state);
u32 FUN_004c5da4(s32 unitIndex, s32 markQueued);

// Resolve the active actor's queued skill and optionally mark this queue as consumed.
u32 FUN_003f0bd8(BtlMainStateA *state, s32 markQueued)
{
    u64 *flags = &state->stateFlags64.bits;
    if (markQueued && (*flags & g_btlMain.skillQueue.queuedSkillMask)) {
        return 0;
    }
    BtlCombatantEntryA *actor = btlFindFirstEntryMatchingCategoryAndRequiredMask(state);
    if (actor == NULL) {
        return 0;
    }
    u32 skill = FUN_004c5da4(actor->ids[0], markQueued);
    if (skill == 0 || skillDataFindById(skill) == NULL) {
        return 0;
    }
    if (markQueued) {
        *flags |= g_btlMain.skillQueue.queuedSkillMask;
    }
    return skill;
}
}
