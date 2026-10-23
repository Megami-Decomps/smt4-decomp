/* NON_MATCHING: Vector loads/stores merge into VLDMIAs/VSTMIAs, changing bases and component scheduling. */
#include "shard/W5_W5Match4_BattleVectorTransition.h"

extern "C" {
f32 FUN_00227280(u32 mode, s32 duration, s32 frame);

/* Advances the axis and origin-offset transitions and clears their active bit at completion. */
void FUN_003d681c(BattleVectorTransition *work)
{
    BattleVector3 difference = {
        work->axisDestination.x - work->axis.current.x,
        work->axisDestination.y - work->axis.current.y,
        work->axisDestination.z - work->axis.current.z
    };
    f32 factor = FUN_00227280(work->axisMode, work->axisTarget, work->axisFrame);
    work->axis.current.x += difference.x * factor;
    work->axis.current.y += difference.y * factor;
    work->axis.current.z += difference.z * factor;
    BattleVector3 offsetDifference = {
        work->axisElapsed.x - work->originData.originOffset.x,
        work->axisElapsed.y - work->originData.originOffset.y,
        work->axisElapsed.z - work->originData.originOffset.z
    };
    work->originData.originOffset.x += offsetDifference.x * factor;
    work->originData.originOffset.y += offsetDifference.y * factor;
    work->originData.originOffset.z += offsetDifference.z * factor;
    if (++work->axisFrame > work->axisTarget) {
        work->axis.current = work->axisDestination;
        work->originData.originOffset = work->axisElapsed;
        work->flags &= ~0x800000;
    }
}
}
