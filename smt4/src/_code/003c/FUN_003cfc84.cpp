/* NON_MATCHING: retail keeps the enemy range bound (first + count) in r6 for all three loops and uses one more saved register (frame 16); the build compares the alternate loop against 54 and frames 20 bytes. */
#include "battle/btlAction.h"
#include "battle/BattleUnitRecordState.h"
#include "battle/btlUnit.h"

extern "C" {
void btlReflectQueueTransitionPair(s32, BattleUnitSlotState *, BtlActionRecord *, s32, s32, s32, s32, s32);

u32 FUN_003cfc84(BtlMainState **battle, BattleUnitSlotState *work, s32 alternate)
{
    u32 frame = work->effectTiming.frame;
    /* The enemy action records: 50 slots after the four party slots. */
    s32 first = 4;
    s32 count = 50;
    if (alternate) {
        if (frame == 20) {
            for (s32 i = first; i < first + count; ++i) {
                BtlActionRecord *target = &(*battle)->actions[i];
                u32 status = target->status;
                if ((status & 1) && (status & 2) && (status & 0x400))
                    btlReflectQueueTransitionPair(0, work, target, 0, 10, 10, 2, 1);
            }
        }
        if (work->effectTiming.frame <= 40)
            return 0;
        return 1;
    }
    if (frame == 20) {
        for (s32 i = first; i < first + count; ++i) {
            BtlActionRecord *target = &(*battle)->actions[i];
            u32 status = target->status;
            if ((status & 1) && (status & 2) && (status & 0x400))
                btlReflectCreateKind21(0, reinterpret_cast<u32>(work), reinterpret_cast<u32>(target), 0, 10, 1);
        }
    } else if (frame == 30) {
        for (s32 i = first; i < first + count; ++i) {
            BtlActionRecord *target = &(*battle)->actions[i];
            u32 status = target->status;
            if ((status & 1) && (status & 2) && (status & 0x400))
                btlReflectCreateKind21(0, reinterpret_cast<u32>(work), reinterpret_cast<u32>(target), target->editorRestore.saved, 5, 1);
        }
    }
    if (work->effectTiming.frame <= 35)
        return 0;
    return 1;
}
}
