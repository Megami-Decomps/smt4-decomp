/* NON_MATCHING: the spilled argument block now matches (push {r0-r3}, vpush {d0-d1}; the callee reads the offset
 * vector from it); retail copies the current vector to DAT_00493530 and the anchors with integer registers and
 * builds the ground-plane distance from them, where the build uses VFP loads and stores. */
#include "shard/W5_W5Match4_BattleVectorTransition.h"
#include <math.h>

extern "C" {
extern BattleVector3 DAT_00493530;
void FUN_003d5f60(BattleVectorTransition *work, const BattleVector3 *origin, const BattleVector3 *target, f32 distance);

/* Starts the depth-offset arc: records the path parameters, captures the current vectors and aims the arc at the
 * end anchor pushed back by the depth offset. */
void FUN_003d710c(BattleVectorTransition *work, u32 duration, u32 mode, s32 depthOffset, f32 x, f32 y, f32 z, f32 w)
{
    work->path.mode = mode;
    work->path.depthOffset = depthOffset;
    work->path.duration = duration;
    work->path.frame = 0;
    work->flags |= 0x10000;
    work->elapsedData.alternateElapsed = work->elapsed;
    DAT_00493530 = work->current;
    BattleVector3 start = {work->anchors.start.x, 0.0f, work->anchors.start.z};
    BattleVector3 end = {work->anchors.end.x, 0.0f, work->anchors.end.z};
    BattleVector3 difference = {start.x - end.x, start.y - end.y, start.z - end.z};
    f32 distance = sqrtf(difference.x * difference.x + difference.y * difference.y + difference.z * difference.z);
    end.z += (f32)work->path.depthOffset;
    FUN_003d5f60(work, (const BattleVector3 *)&x, &end, distance);
}
}
