/* NON_MATCHING: retail evaluates the four colour arguments and the shifted corners right to left (mov r3,r0; mov r2,r3; mov r1,r2) with the constant in s6; the build orders the VFP moves and adds differently. */
#include "status/StatusCamera.h"

extern "C" void FUN_00280a08(u32 color0, u32 color1, u32 color2, u32 color3, Vec3 p0, Vec3 p1, Vec3 p2, Vec3 p3);

static void drawQuad(u32 color, Vec3 p0, Vec3 p1, Vec3 p2, Vec3 p3)
{
    FUN_00280a08(color, color, color, color, p0, p1, p2, p3);
}

/* The point moved ten units along x and y. */
static Vec3 shiftedPoint(Vec3 point)
{
    Vec3 shifted = { point.x + 10.0f, point.y + 10.0f, point.z };
    return shifted;
}

extern "C" void FUN_00203970(u32 context, Vec3 start, Vec3 end)
{
    drawQuad(context, start, end, shiftedPoint(start), shiftedPoint(end));
}
