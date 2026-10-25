/* NON_MATCHING: saved packed-color and float argument allocation differ; all four vertices and UVs restored. */
#include "shard/Shard0036.h"

extern "C" void FUN_00186948(u32 primitive);
extern "C" void FUN_00184c50(RgbaWord color, f32 x, f32 y, f32 z, f32 u, f32 v);
extern "C" void effectSubmitDefaultParameters();

// Submit four independently colored and textured vertices as a quad.
extern "C" void FUN_0019e3d0(f32 x0, f32 y0, f32 z0, RgbaWord color0,
    f32 x1, f32 y1, f32 z1, RgbaWord color1,
    f32 x2, f32 y2, f32 z2, RgbaWord color2,
    f32 x3, f32 y3, f32 z3, RgbaWord color3,
    f32 u0, f32 v0, f32 u1, f32 v1, f32 u2, f32 v2, f32 u3, f32 v3)
{
    FUN_00186948(1);
    FUN_00184c50(color0, x0, y0, z0, u0, v0);
    FUN_00184c50(color1, x1, y1, z1, u1, v1);
    FUN_00184c50(color2, x2, y2, z2, u2, v2);
    FUN_00184c50(color3, x3, y3, z3, u3, v3);
    effectSubmitDefaultParameters();
}
