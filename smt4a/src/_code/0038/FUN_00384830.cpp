/* NON_MATCHING: retail keeps zero in caller-clobbered s4 across the angle-difference call; this standalone unit preserves it in s16. Independent subtraction order also differs. */
#include "common.h"

struct Position {
    f32 x, y, z;
};

extern "C" {
f32 FUN_0050d8e4(f32 x, f32 z);
f32 FUN_002b5cd4(f32 current, f32 target);

// Absolute heading error between the current facing and the X/Z direction to a point.
f32 FUN_00384830(Position from, f32 heading, Position to)
{
    f32 angle = FUN_0050d8e4(to.x - from.x, to.z - from.z) * 57.3248405456543f;
    if (angle < 0.0f)
        angle += 360.0f;
    if (angle > 360.0f)
        angle -= 360.0f;
    f32 difference = FUN_002b5cd4(heading, angle);
    return difference < 0.0f ? -difference : difference;
}
}
