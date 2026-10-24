/* NON_MATCHING: readable rebuild of the path mover step; retail keeps the distance, the direction components and the new heading in s16..s20 across the atan2/angle calls and lays the waypoint-advance block before the move, which armcc here orders differently. */
#include "common.h"

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
f32 FUN_0050d8e4(f32 y, f32 x); /* atan2f */
f32 mathAngleDeltaDegrees(f32 from, f32 to);

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
        if (next + 1 < queue->count) {
            mover->position = queue->points[next].position;
            mover->target = queue->points[next + 1].position;
            return;
        }
        mover->waypoint = queue->count - 1;
        mover->reached = 1;
        mover->target = queue->points[queue->count - 1].position;
        mover->position = queue->points[queue->count - 1].position;
        mover->reached = 0;
        mover->waypoint = 0;
        mover->position = queue->points[0].position;
        mover->target = queue->points[1].position;
        return;
    }

    f32 dx = mover->target.x - mover->position.x;
    f32 dz = mover->target.z - mover->position.z;
    f32 dy = mover->target.y - mover->position.y;
    if (distance != 0.0f) {
        f32 wanted = FUN_0050d8e4(dx, dz) * 57.32484f;
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
