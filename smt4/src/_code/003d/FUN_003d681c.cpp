/* NON_MATCHING: Vector loads/stores merge into VLDMIAs/VSTMIAs, changing bases and component scheduling. */
#include "shard/W5_W5Match4_BattleVectorTransition.h"

extern "C" {
f32 FUN_00227280(u32 mode, s32 duration, s32 frame);

static __inline void addScaled(BattleVector3 *result, const BattleVector3 *delta, f32 factor)
{
    result->x += delta->x * factor;
    result->y += delta->y * factor;
    result->z += delta->z * factor;
}

static __inline void vectorSubtract(BattleVector3 *result, const BattleVector3 *left, const BattleVector3 *right)
{
    result->x = left->x - right->x;
    result->y = left->y - right->y;
    result->z = left->z - right->z;
}

/* Advances the axis and origin-offset transitions and clears their active bit at completion. */
void FUN_003d681c(BattleVectorTransition *work)
{
    BattleVector3 difference;
    vectorSubtract(&difference, &work->axisDestination, &work->axis.current);
    f32 factor = FUN_00227280(work->axisMode, work->axisTarget, work->axisFrame);
    work->axis.current.x += difference.x * factor;
    work->axis.current.y += difference.y * factor;
    work->axis.current.z += difference.z * factor;
    BattleVector3 offsetDifference;
    vectorSubtract(&offsetDifference, &work->axisElapsed, &work->originData.originOffset);
    addScaled(&work->originData.originOffset, &offsetDifference, factor);
    ++work->axisFrame;
    if (work->axisFrame > work->axisTarget) {
        battleVectorCopy(&work->axis.current, &work->axisDestination);
        battleVectorCopy(&work->originData.originOffset, &work->axisElapsed);
        work->flags &= ~0x800000;
    }
}
}
