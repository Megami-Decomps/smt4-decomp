/* NON_MATCHING: the first slot and preceding job addresses use different add forms and scratch registers. */
#include "battle/btlAction.h"
#include "battle/BattleUnitRecordState.h"
#include "shard/Shard0032.h"
#include "shard/JobWork.h"
#include "battle/BtlGlobals.h"
#include "sys/RuntimeObjects.h"

extern "C" {
void FUN_004eb928(BattleUnitRecordState *work, s32 state);
s32 FUN_004ec120(BattleUnitRecordState *work, s32 state);
}


/* Advances one unit's action state after the preceding job has reached a safe state. */
extern "C" s32 btlActionAdvanceJobState(u32 handle)
{
    JobPool *job = (JobPool *)jobGetWork(handle);
    BtlActionSlotA *slots = g_btlAction.slots;
    BtlUnitA *slot = &g_btlAction.slots[job->current].unit;
    bool canAdvance = true;
    JobPool *jobs = (JobPool *)slots[0].owner;
    s32 previous = jobs->current - 1;
    if (previous < 0) {
        previous = 11;
    }
    u32 previousState = jobIsValid(jobs->jobs[previous])
        ? slots[((JobPool *)slots[0].owner)->current].unit.state
        : ~0u;
    s32 state = (slot->flags & 2) ? (s8)slot->command : slot->state;
    if (state == 11 && previousState <= 29) {
        canAdvance = false;
    }
    if (!(slot->flags & 0x40) && canAdvance) {
        if (slot->flags & 2) {
            if (slot->state == 38) {
                return -1;
            }
            BtlActionSlotA *currentSlots = g_btlAction.slots;
            BtlUnitA *current = &currentSlots[((JobPool *)currentSlots[0].owner)->current].unit;
            s32 nextState = (s8)slot->command;
            current->state = nextState;
            current->ticks = 0;
            current->command = 0;
            current->elapsed = 0;
            FUN_004eb928((BattleUnitRecordState *)currentSlots, nextState);
            slot->flags &= ~2u;
            return 0;
        }
        if (FUN_004ec120((BattleUnitRecordState *)g_btlAction.slots, slot->state)) {
            slot->flags |= 2;
        }
        if (slot->ticks < 0xFFFF) {
            ++slot->ticks;
        }
    }
    return 0;
}
