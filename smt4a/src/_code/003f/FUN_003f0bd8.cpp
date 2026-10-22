/* NON_MATCHING: zero-result exits and queued-skill mask scratch-register allocation differ. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

extern "C" {
extern BtlMainGlobalsA g_btlMain;
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *state);
u32 FUN_004c5da4(s32 unitIndex, s32 markQueued);
const void *dataTable04FindById(u32 skill);

// Resolve the active actor's queued skill and optionally mark this queue as consumed.
u32 FUN_003f0bd8(BtlMainStateA *state, s32 markQueued)
{
    u64 *flags = &state->stateFlags64.bits;
    if (markQueued && (*flags & g_btlMain.skillQueue.queuedSkillMask)) {
        return 0;
    }
    BtlCombatantEntryA *actor = FUN_003eaf20(state);
    if (actor == NULL) {
        return 0;
    }
    u32 skill = FUN_004c5da4(actor->unitIndex, markQueued);
    if (skill == 0 || dataTable04FindById(skill) == NULL) {
        return 0;
    }
    if (markQueued) {
        *flags |= g_btlMain.skillQueue.queuedSkillMask;
    }
    return skill;
}
}
