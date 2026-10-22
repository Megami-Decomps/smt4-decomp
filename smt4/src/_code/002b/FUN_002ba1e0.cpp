/* NON_MATCHING: quad argument retention and GPR/VFP scheduling differ. */
#include "common.h"

extern "C" {
void FUN_002b0124(u32 mode);
void FUN_002aff74(u32 color, f32 x, f32 y, f32 z, f32 u, f32 v);
void submitDefaultFloatParameters();

// Submit four colored, textured vertices and finish the quad's parameter packet.
void FUN_002ba1e0(u32 color0, u32 color1, u32 color2, u32 color3,
    f32 x0, f32 y0, f32 z0, f32 x1, f32 y1, f32 z1,
    f32 x2, f32 y2, f32 z2, f32 x3, f32 y3, f32 z3,
    f32 u0, f32 v0, f32 u1, f32 v1, f32 u2, f32 v2, f32 u3, f32 v3)
{
    FUN_002b0124(1);
    FUN_002aff74(color0, x0, y0, z0, u0, v0);
    FUN_002aff74(color1, x1, y1, z1, u1, v1);
    FUN_002aff74(color2, x2, y2, z2, u2, v2);
    FUN_002aff74(color3, x3, y3, z3, u3, v3);
    submitDefaultFloatParameters();
}
}
