/* NON_MATCHING: predecessor job indexing folds into the base rather than a byte index; initial scheduling and scratch registers differ. */
#include "battle/btlAction.h"
#include "battle/BattleUnitRecordState.h"
#include "shard/Shard0032.h"

extern "C" {
extern BtlActionGlobals g_btlAction;
JobPool *jobGetWork(void);
s32 jobIsValid(u32 job);
void FUN_004eb928(BattleUnitRecordState *work, s32 state);
s32 FUN_004ec120(BattleUnitRecordState *work, s32 state);
}

namespace {
// The halfword at +6 cannot be placed in the existing byte-aligned padding union at +5.
struct SlotProgressView {
    u32 flags;
    s8 state;
    s8 pendingState;
    u16 ticks;
    u32 elapsed;
};
typedef char SlotProgressOffsetCheck[offsetof(SlotProgressView, ticks) == 6 &&
    offsetof(SlotProgressView, elapsed) == 8 ? 1 : -1];
static inline SlotProgressView *slotProgress(BattleUnitSlotState *slot)
{
    return (SlotProgressView *)slot;
}
}

// Advance one unit's action state after the preceding job has reached a safe state.
extern "C" s32 FUN_00298354(void)
{
    JobPool *job = jobGetWork();
    BattleUnitRecordState *work = (BattleUnitRecordState *)g_btlAction.data;
    SlotProgressView *slot = slotProgress(&work->slots[job->current]);
    bool canAdvance = true;
    JobPool *jobs = (JobPool *)work->battle;
    s32 previous = jobs->current - 1;
    if (previous < 0) {
        previous = 11;
    }
    u32 previousState;
    if (jobIsValid(jobs->jobs[previous])) {
        previousState = slotProgress(&work->slots[((JobPool *)work->battle)->current])->state;
    } else {
        previousState = ~0u;
    }
    s32 state = (slot->flags & 2) ? slot->pendingState : slot->state;
    if (state == 11 && previousState <= 29) {
        canAdvance = false;
    }
    if (!(slot->flags & 0x40) && canAdvance) {
        if (slot->flags & 2) {
            if (slot->state == 38) {
                return -1;
            }
            BattleUnitRecordState *currentWork = (BattleUnitRecordState *)g_btlAction.data;
            SlotProgressView *current = slotProgress(&currentWork->slots[((JobPool *)currentWork->battle)->current]);
            s32 nextState = slot->pendingState;
            current->state = nextState;
            current->ticks = 0;
            current->pendingState = 0;
            current->elapsed = 0;
            FUN_004eb928(currentWork, nextState);
            slot->flags &= ~2u;
            return 0;
        }
        if (FUN_004ec120((BattleUnitRecordState *)g_btlAction.data, slot->state)) {
            slot->flags |= 2;
        }
        if (slot->ticks < 0xFFFF) {
            ++slot->ticks;
        }
    }
    return 0;
}
