/* NON_MATCHING: retail sets the enemy group's range constants after the duration and enable constants, the build
 * before them (4 lines; the Apocalypse twin FUN_004e753c differs the same way). */
#include "battle/btlAction.h"
#include "battle/BattleUnitRecordState.h"
#include "battle/btlUnit.h"
#include "util/SlotRangeSelect.h"

extern "C" {
void btlReflectQueueTransitionPair(s32, BattleUnitSlotState *, BtlActionRecord *, s32, s32, s32, s32, s32);
}

static __inline bool actionUsesTimedEffect(const BtlActionRecord *record)
{
    u32 status = record->status;
    return (status & 1) && (status & 2) && (status & 0x400);
}

/* Trigger the timed enemy action transition, and report when its mode-specific wait is complete. */
extern "C" u32 btlEnemyGroupColorTransitionStep(BtlMainState **battle, BattleUnitSlotState *work, s32 alternate)
{
    s32 first = 0;
    s32 count = 0;
    btlRosterGroupRange(1, first, count);

    if (alternate != 0) {
        if (work->effectTiming.frame == 20) {
            for (s32 i = first; i < first + count; ++i) {
                BtlActionRecord *target = &(*battle)->actions[i];
                if (actionUsesTimedEffect(target)) {
                    btlReflectQueueTransitionPair(0, work, target, 0, 10, 10, 2, 1);
                }
            }
        }
        if (work->effectTiming.frame <= 40) {
            return 0;
        }
    } else {
        switch (work->effectTiming.frame) {
        case 20:
            for (s32 i = first; i < first + count; ++i) {
                BtlActionRecord *target = &(*battle)->actions[i];
                if (actionUsesTimedEffect(target)) {
                    btlReflectCreateKind21(0, (u32)work, (u32)target, 0, 10, 1);
                }
            }
            break;
        case 30:
            for (s32 i = first; i < first + count; ++i) {
                BtlActionRecord *target = &(*battle)->actions[i];
                if (actionUsesTimedEffect(target)) {
                    btlReflectCreateKind21(0, (u32)work, (u32)target, target->editorRestore.saved, 5, 1);
                }
            }
            break;
        }
        if (work->effectTiming.frame <= 35) {
            return 0;
        }
    }
    return 1;
}
