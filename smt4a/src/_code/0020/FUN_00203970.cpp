/* NON_MATCHING: retail uses mov r3, r0 where the compiled block uses vmov.f32 s8, s2. */
#include "common.h"

extern "C" void FUN_00280a08(
    u32 context, u32 context1, u32 context2, u32 context3,
    f32 x0, f32 y0, f32 z0, f32 x1, f32 y1, f32 z1,
    f32 shiftedX0, f32 shiftedY0, f32 shiftedZ0,
    f32 shiftedX1, f32 shiftedY1, f32 shiftedZ1);

extern "C" void FUN_00203970(
    u32 context, f32 x0, f32 y0, f32 z0, f32 x1, f32 y1, f32 z1)
{
    FUN_00280a08(
        context, context, context, context,
        x0, y0, z0, x1, y1, z1,
        x0 + 10.0f, y0 + 10.0f, z0,
        x1 + 10.0f, y1 + 10.0f, z1);
}
