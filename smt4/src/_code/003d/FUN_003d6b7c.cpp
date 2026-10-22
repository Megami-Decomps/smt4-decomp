/* NON_MATCHING: command capture uses explicit stack stores instead of retail's argument-register push/VFP save layout. */
#include "shard/W5_W5Match4_BattleVectorTransition.h"
#include <math.h>

struct BattleArcStartCommand {
    f32 offset, first, second, third;
    BattleVectorTransition *owner;
    u32 duration, mode;
};
extern "C" {
extern BattleVector3 DAT_00493530;
void FUN_003d5f60(BattleVectorTransition *transition, const BattleArcStartCommand *command, const BattleVector3 *point, f32 distance);

// Capture the current vectors and start an offset arc using the ground-plane endpoint distance.
void FUN_003d6b7c(BattleVectorTransition *transition, u32 duration, u32 mode,
    f32 offset, f32 first, f32 second, f32 third)
{
    BattleArcStartCommand command = {offset, first, second, third, transition, duration, mode};
    transition->path.duration = duration;
    transition->path.frame = 0;
    transition->path.mode = mode;
    transition->path.horizontalOffset = (s32)offset;
    transition->flags |= 0x10000;
    transition->elapsedData.alternateElapsed = transition->elapsed;
    DAT_00493530 = transition->current;
    BattleVector3 difference = {transition->anchors.start.x - transition->anchors.end.x, 0.0f,
        transition->anchors.start.z - transition->anchors.end.z};
    f32 distance = sqrtf(difference.x * difference.x + difference.y * difference.y + difference.z * difference.z);
    BattleVector3 point = {transition->anchors.end.x, 0.0f, transition->anchors.end.z};
    point.x += (f32)transition->path.horizontalOffset * 0.5f;
    point.z += (f32)transition->path.depthOffset;
    FUN_003d5f60(transition, &command, &point, distance);
}
}
