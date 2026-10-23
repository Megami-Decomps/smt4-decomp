/* NON_MATCHING: fixed iteration bound materialization, saved registers and return-block placement differ. */
#include "battle/btlAction.h"
#include "battle/BattleUnitRecordState.h"

extern "C" {
void FUN_0023c368(s32, BattleUnitSlotState *, BtlActionRecord *, s32, s32, s32, s32, s32);
void btlReflectCreateKind21(s32, BattleUnitSlotState *, BtlActionRecord *, u32, s32, s32);

u32 FUN_003cfc84(BtlMainState **battle, BattleUnitSlotState *work, s32 alternate)
{
    u32 frame = work->effectTiming.frame;
    if (alternate) {
        if (frame == 20) {
            for (s32 i = 4; i < 54; ++i) {
                BtlActionRecord *target = &(*battle)->actions[i];
                u32 status = target->status;
                if ((status & 1) && (status & 2) && (status & 0x400))
                    FUN_0023c368(0, work, target, 0, 10, 10, 2, 1);
            }
        }
        return work->effectTiming.frame > 40;
    }
    if (frame == 20) {
        for (s32 i = 4; i < 54; ++i) {
            BtlActionRecord *target = &(*battle)->actions[i];
            u32 status = target->status;
            if ((status & 1) && (status & 2) && (status & 0x400))
                btlReflectCreateKind21(0, work, target, 0, 10, 1);
        }
    } else if (frame == 30) {
        for (s32 i = 4; i < 54; ++i) {
            BtlActionRecord *target = &(*battle)->actions[i];
            u32 status = target->status;
            if ((status & 1) && (status & 2) && (status & 0x400))
                btlReflectCreateKind21(0, work, target, target->editorRestore.saved, 5, 1);
        }
    }
    return work->effectTiming.frame > 35;
}
}
