/* NON_MATCHING: the waypoint advance now matches retail's layout (end-of-queue snap by chained assignment, both legs set by one helper); retail still splits the restart leg's position copy instead of the target's and loads the direction components one by one into s17/s18/s20 (heading s19, zero s21) where armcc here uses one vldmia and s19..s21. */
#include "common.h"
#include "util/MathFunctions.h"

struct PathVec3 {
    f32 x, y, z;
};

/* One waypoint of a queue (0x28 bytes). */
struct PathPoint {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ PathVec3 position;
    /* 0x10 */ u8 unk10[0x18];
};

/* A queue of waypoints (0x284 bytes). */
struct PathQueue {
    /* 0x000 */ PathPoint points[16];
    /* 0x280 */ s32 count;
};

/* Something that walks along a waypoint queue. */
struct PathMover {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 reached;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ s32 queue;
    /* 0x08 */ s32 waypoint;      /* index of the waypoint walked from */
    /* 0x0C */ PathVec3 position;
    /* 0x18 */ PathVec3 target;
    /* 0x24 */ f32 speed;
    /* 0x28 */ f32 heading;       /* degrees */
};

extern "C" {
extern PathQueue *g_vectorQueueWork;

f32 distSpatial(f32 ax, f32 ay, f32 az, f32 bx, f32 by, f32 bz);
f32 __hardfp_atan2f(f32 y, f32 x); /* __hardfp_atan2f */

/* Puts the walker on the leg from waypoint `index` to the next one. */
static __inline void pathMoverSetLeg(PathMover *mover, const PathQueue *queue, s32 index)
{
    mover->position = queue->points[index].position;
    mover->target = queue->points[index + 1].position;
}

/* Moves the walker one step toward its target waypoint, turning its heading gradually; when the
 * waypoint is reached it advances to the next pair, wrapping to the start at the end. */
void FUN_00312ea0(PathMover *mover)
{
    if (!mover->active || mover->reached)
        return;
    f32 distance = distSpatial(mover->position.x, mover->position.y, mover->position.z,
                                             mover->target.x, mover->target.y, mover->target.z);
    if (distance < 0.0f)
        distance = -distance;
    if (mover->speed > distance) {
        s32 next = ++mover->waypoint;
        PathQueue *queue = &g_vectorQueueWork[mover->queue];
        if (next + 1 >= queue->count) {
            mover->waypoint = queue->count - 1;
            mover->reached = 1;
            mover->position = mover->target = queue->points[mover->waypoint].position;
            mover->reached = 0;
            mover->waypoint = 0;
            pathMoverSetLeg(mover, queue, 0);
            return;
        }
        pathMoverSetLeg(mover, queue, next);
        return;
    }

    f32 dx = mover->target.x - mover->position.x;
    f32 dz = mover->target.z - mover->position.z;
    f32 dy = mover->target.y - mover->position.y;
    if (distance != 0.0f) {
        f32 wanted = __hardfp_atan2f(dx, dz) * 57.32484f;
        f32 delta = mathAngleDeltaDegrees(mover->heading, wanted);
        f32 turn = delta;
        if (turn < 0.0f)
            turn = -turn;
        f32 step = turn * (1.0f / 6.0f);
        if (step < 1.0f)
            step = 1.0f;
        f32 heading = wanted;
        if (turn > step)
            heading = delta >= 0.0f ? mover->heading + step : mover->heading - step;
        f32 inverse = 1.0f / distance;
        dx *= inverse;
        dy *= inverse;
        dz *= inverse;
        mover->heading = heading;
    }
    mover->position.x += dx * mover->speed;
    mover->position.y += dy * mover->speed;
    mover->position.z += dz * mover->speed;
}

} /* extern "C" */
