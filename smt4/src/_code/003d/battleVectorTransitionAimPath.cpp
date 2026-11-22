/* NON_MATCHING: the vector steps now reload through path.end as retail does and the end anchor is copied with
 * integer registers; retail also copies the start anchor that way (ip/r4) where the build loads it into VFP
 * registers, and it subtracts the start anchor's z after updating path.end. */
#include "battle/BattleVectorMath.h"

/* Aims the path from origin (offset by the end anchor on the ground plane) towards target, ending `distance` along
 * that direction, then rebases path.end on the current vector and path.start on the elapsed one. */
extern "C" void battleVectorTransitionAimPath(BattleVectorTransition *work, const BattleVector3 *origin,
                             const BattleVector3 *target, f32 distance)
{
    BattleVector3 endOffset = work->anchors.end;
    endOffset.y = 0.0f;
    BattleVector3 startOffset = work->anchors.start;
    startOffset.y = 0.0f;
    BattleVector3 direction;
    BattleVector3 projected;
    battleVectorAdd(&work->path.end, origin, &endOffset);
    battleVectorSub(&direction, target, &work->path.end);
    battleVectorScale(&direction, battleVectorNormalize(&direction, &direction), distance);
    battleVectorAdd(&projected, &direction, &work->path.end);
    battleVectorSub(&work->path.end, &work->path.end, &endOffset);
    battleVectorAdd(&work->path.end, &work->path.end, &work->current);
    battleVectorSub(&projected, &projected, &startOffset);
    battleVectorAdd(&work->path.start, &projected, &work->elapsed);
}
