/* NON_MATCHING: fast floating-point reassociation removes zero components and fuses projection arithmetic; --fpmode=std candidate. */
#include "shard/W5_W5Match4_BattleVectorTransition.h"
#include <math.h>

extern "C" void FUN_003d5f60(BattleVectorTransition *work, const BattleVector3 *origin,
                             const BattleVector3 *target, f32 distance)
{
    work->path.end.x = origin->x + work->anchors.end.x;
    work->path.end.y = origin->y + 0.0f;
    work->path.end.z = origin->z + work->anchors.end.z;
    BattleVector3 difference = {target->x - work->path.end.x,
                               target->y - work->path.end.y,
                               target->z - work->path.end.z};
    f32 inverseLength = 1.0f / sqrtf(difference.x * difference.x + difference.y * difference.y +
                                    difference.z * difference.z);
    BattleVector3 projected = {difference.x * inverseLength * distance + work->path.end.x,
                              difference.y * inverseLength * distance + work->path.end.y,
                              difference.z * inverseLength * distance + work->path.end.z};
    work->path.end.x -= work->anchors.end.x;
    work->path.end.y -= 0.0f;
    work->path.end.z -= work->anchors.end.z;
    work->path.end.x += work->current.x;
    work->path.end.y += work->current.y;
    work->path.end.z += work->current.z;
    work->path.start.x = (projected.x - work->anchors.start.x) + work->elapsed.x;
    work->path.start.y = (projected.y - 0.0f) + work->elapsed.y;
    work->path.start.z = (projected.z - work->anchors.start.z) + work->elapsed.z;
}
