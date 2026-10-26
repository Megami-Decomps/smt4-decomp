/* NON_MATCHING: retail evaluates the four colour arguments and the shifted corners right to left (mov r3,r0; mov r2,r3; mov r1,r2) with the constant in s6; the build orders the VFP moves and adds differently. */
#include "status/StatusCamera.h"

extern "C" void FUN_00280a08(u32 color0, u32 color1, u32 color2, u32 color3, Vec3 p0, Vec3 p1, Vec3 p2, Vec3 p3);

extern "C" void FUN_002039a0(u32 color, Vec3 start, Vec3 end)
{
    Vec3 shiftedStart = { start.x + 10.0f, start.y + 10.0f, start.z };
    Vec3 shiftedEnd = { end.x + 10.0f, end.y + 10.0f, end.z };

    FUN_00280a08(color, color, color, color, start, end, shiftedStart, shiftedEnd);
}
