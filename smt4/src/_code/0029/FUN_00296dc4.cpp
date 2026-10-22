/* NON_MATCHING: VFP register allocation of the saved corner positions differs (retail saves d8-d13, copying p3.y/z as d13 = d5, and reuses s23 for 0.0f). */
#include "status/StatusCamera.h"

extern "C" {

void FUN_002b0124(u32 value);
void FUN_002aff74(u32 color, f32 x, f32 y, f32 z, f32 u, f32 v);
void submitDefaultFloatParameters(void);

/* Emits a four-vertex primitive (one color and position per corner) and submits the default parameters. */
void FUN_00296dc4(u32 color0, u32 color1, u32 color2, u32 color3, Vec3 p0, Vec3 p1, Vec3 p2, Vec3 p3)
{
    FUN_002b0124(1);
    FUN_002aff74(color0, p0.x, p0.y, p0.z, 0.0f, 0.0f);
    FUN_002aff74(color1, p1.x, p1.y, p1.z, 0.0f, 0.0f);
    FUN_002aff74(color2, p2.x, p2.y, p2.z, 0.0f, 0.0f);
    FUN_002aff74(color3, p3.x, p3.y, p3.z, 0.0f, 0.0f);
    submitDefaultFloatParameters();
}

} /* extern "C" */
