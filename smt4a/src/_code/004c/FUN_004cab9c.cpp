/* NON_MATCHING: clear-mask load allocation and the halfword status-mask test differ. */
/* Synchronizes a battle motion controller with its source status and rebuilds the condition list. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"

extern "C" {
BtlMainStateA *btlGetMainState(void);
BattleMotionSubject *FUN_001568f8(BtlMainStateA *state, s32 group);
void halfRecClear(BtlMainStateA *state, BattleMotionSubject *source);
void flagSelectionRebuild(void *selection, u32 flags);
extern u64 g_battleMotionCombatantClearMask;

void FUN_004cab9c(BattleRosterRecordA *record)
{
    BattleRosterMotionA &motion = record->motion;
    BattleMotionSubject *source = FUN_001568f8(btlGetMainState(), motion.group);
    if (source == NULL) {
        return;
    }
    if (source->status & 0x180) {
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
    if (source->status & 0x3DC2) {
        halfRecClear(btlGetMainState(), source);
    }
    if (motion.unitIndex >= 0) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[motion.unitIndex];
        if (entry != NULL) {
            flagSelectionRebuild(motion.selection, source->status);
        }
    }
}
}
