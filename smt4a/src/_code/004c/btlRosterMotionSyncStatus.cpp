/* NON_MATCHING: 28 lines: retail loads the clear mask with one ldm and the entry's flags with ldrd, this build the
 * mask with two ldr and the flags with ldm, and it inverts the mask's low word into r7 (mvn/and for retail's bic). */
/* Synchronizes a battle motion controller with its source status and rebuilds the condition list. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "battle/BtlEntryLookup.h"

extern "C" {
void halfRecClear(BtlMainStateA *state, BtlUnitDataA *source);
void flagSelectionRebuild(void *selection, u32 flags);
extern u64 g_battleMotionCombatantClearMask;

/* hasAnyOf3DC2's body, which retail inlines late (the mask stays a pool word tested with tst). */
static u8 statusHasAnyOf3DC2(u32 mask)
{
    if (mask & 0x3DC2) {
        return 1;
    }
    return 0;
}

void btlRosterMotionSyncStatus(BattleRosterRecordA *record)
{
    BattleRosterMotionA &motion = record->motion;
    BtlUnitDataA *source = btlFindEntryBlockByMemberId(btlGetMainState(), motion.group);
    if (source == NULL) {
        return;
    }
    if (source->statusFlags & 0x180) {
        btlGetMainState();
        motion.state = 3;
        motion.stateFrame = 0;
        motion.motionDuration = 0;
    } else if (motion.flags & 0x80) {
        motion.state = 0;
        motion.stateFrame = 0;
        motion.motionDuration = 0;
        BtlMainStateA *state = btlGetMainState();
        if (motion.unitIndex >= 0) {
            state->entries[motion.unitIndex].flags &= ~g_battleMotionCombatantClearMask;
        }
    }
    if (statusHasAnyOf3DC2(source->statusFlags)) {
        halfRecClear(btlGetMainState(), source);
    }
    if (motion.unitIndex >= 0) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[motion.unitIndex];
        if (entry != NULL) {
            flagSelectionRebuild(motion.selection, source->statusFlags);
        }
    }
}
}
