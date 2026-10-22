/* NON_MATCHING: native argument homing differs from the local command and vector stores. */
#include "shard/W5_W5Match4_BattleVectorTransition.h"
#include <math.h>

struct DepthArcStartCommand {
    f32 x, y, z, w;
    BattleVectorTransition *owner;
    u32 duration, mode;
    s32 depthOffset;
};
typedef char DepthArcStartCommandLayoutCheck[sizeof(DepthArcStartCommand) == 0x20 &&
    offsetof(DepthArcStartCommand, owner) == 0x10 &&
    offsetof(DepthArcStartCommand, depthOffset) == 0x1c ? 1 : -1];

extern "C" {
extern BattleVector3 DAT_00493530;
void FUN_003d5f60(BattleVectorTransition *work, const DepthArcStartCommand *command, const BattleVector3 *point, f32 distance);

void FUN_003d710c(BattleVectorTransition *work, u32 duration, u32 mode, s32 depthOffset, f32 x, f32 y, f32 z, f32 w)
{
    DepthArcStartCommand command = {x, y, z, w, work, duration, mode, depthOffset};
    work->path.mode = mode;
    work->path.depthOffset = depthOffset;
    work->path.duration = duration;
    work->path.frame = 0;
    work->flags |= 0x10000;
    work->elapsedData.alternateElapsed = work->elapsed;
    DAT_00493530 = work->current;
    BattleVector3 difference = {work->anchors.start.x - work->anchors.end.x, 0.0f, work->anchors.start.z - work->anchors.end.z};
    f32 distance = sqrtf(difference.x * difference.x + difference.y * difference.y + difference.z * difference.z);
    BattleVector3 point = {work->anchors.end.x, 0.0f, work->anchors.end.z};
    point.z += (f32)work->path.depthOffset;
    FUN_003d5f60(work, &command, &point, distance);
}
}
