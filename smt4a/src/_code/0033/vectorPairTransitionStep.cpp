/* NON_MATCHING: camera move step (mode 0 linear step, 1 approach, 2 eased, 3 stepped then renormalised); retail keeps frames/frame as a pair load, uses one d8 spill and applies each vec3 update component by component through memory, built schedules the loads together */
#include "map/LmapViewGlobals.h"

#define CAMERA_MODE_STEP 0
#define CAMERA_MODE_EASED 2
#define CAMERA_MODE_STEP_NORMALIZED 3

extern "C" {
f32 FUN_001f3f34(f32 from, f32 to, f32 duration, f32 elapsed);
void FUN_00330108(BattleVector3 *a, BattleVector3 *b, BattleVector3 *out);

static __inline void cameraPoseAdd(VectorPair *pose, const VectorPair *delta)
{
    pose->first.x += delta->first.x;
    pose->first.y += delta->first.y;
    pose->first.z += delta->first.z;
    pose->second.x += delta->second.x;
    pose->second.y += delta->second.y;
    pose->second.z += delta->second.z;
}

/* Moves `current` towards `target` by 1/divisor of the remaining distance. */
static __inline void cameraVecApproach(BattleVector3 *current, const BattleVector3 *target, f32 divisor)
{
    f32 scale = 1.0f / divisor;
    BattleVector3 delta;
    delta.x = (target->x - current->x) * scale;
    delta.y = (target->y - current->y) * scale;
    delta.z = (target->z - current->z) * scale;
    current->x += delta.x;
    current->y += delta.y;
    current->z += delta.z;
}

/* Advances the camera move by one frame. Returns 1 when the move has finished. */
u32 vectorPairTransitionStep(void)
{
    VectorPairTransition *move = &g_lmapViewHolder.view->move.value;
    if (move->frame >= move->duration) {
        move->current = move->target;
        return 1;
    }

    if (move->smoothing == CAMERA_MODE_STEP) {
        cameraPoseAdd(&move->current, &move->delta);
    } else if (move->smoothing == CAMERA_MODE_EASED) {
        f32 total = (f32)move->duration;
        f32 frame = (f32)move->frame;
        VectorPair eased;
        eased.first.x = FUN_001f3f34(move->start.first.x, move->target.first.x, total, frame);
        eased.first.y = FUN_001f3f34(move->start.first.y, move->target.first.y, total, frame);
        eased.first.z = FUN_001f3f34(move->start.first.z, move->target.first.z, total, frame);
        eased.second.x = FUN_001f3f34(move->start.second.x, move->target.second.x, total, frame);
        eased.second.y = FUN_001f3f34(move->start.second.y, move->target.second.y, total, frame);
        eased.second.z = FUN_001f3f34(move->start.second.z, move->target.second.z, total, frame);
        move->current = eased;
    } else if (move->smoothing == CAMERA_MODE_STEP_NORMALIZED) {
        cameraPoseAdd(&move->current, &move->delta);
        BattleVector3 normal;
        FUN_00330108(&move->current.second, &move->current.first, &normal);
        move->current.second = normal;
    } else {
        cameraVecApproach(&move->current.first, &move->target.first, move->smoothingDivisor);
        cameraVecApproach(&move->current.second, &move->target.second, move->smoothingDivisor);
    }
    move->frame++;
    return 0;
}

} /* extern "C" */
