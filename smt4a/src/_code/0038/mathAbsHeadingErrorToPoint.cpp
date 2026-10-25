#include "common.h"

struct Position {
    f32 x, y, z;
};

extern "C" {
f32 FUN_0050d8e4(f32 x, f32 z);
f32 mathAngleDeltaDegrees(f32 current, f32 target);

// Absolute heading error between the current facing and the X/Z direction to a point.
f32 mathAbsHeadingErrorToPoint(Position from, f32 heading, Position to)
{
    f32 dx = to.x - from.x;
    f32 dz = to.z - from.z;
    f32 angle = FUN_0050d8e4(dx, dz) * 57.3248405456543f;
    if (angle < 0.0f)
        angle += 360.0f;
    if (angle > 360.0f)
        angle -= 360.0f;
    f32 difference = mathAngleDeltaDegrees(heading, angle);
    return difference < 0.0f ? -difference : difference;
}
}
