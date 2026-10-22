/* NON_MATCHING: projection VFP scheduling and viewport-width constant placement differ. */
#include "shard/W6_W6Match6_ProjectionCamera.h"

extern "C" {
void nn_math_ARMv6_VEC3TransformAsm_2AD44C(f32 *, const f32 (*)[4], const f32 *);

// Transform a world point into mirrored screen coordinates and retain view-space depth.
void FUN_002a1850(f32 *screen, s32 display, const ProjectionMatrices *camera, const f32 *world)
{
    f32 widths[2] = {400.0f, 320.0f};
    f32 view[3];
    nn_math_ARMv6_VEC3TransformAsm_2AD44C(view, camera->view, world);
    const f32 (*projection)[4] = camera->projection;
    f32 reciprocalW = 1.0f / (projection[3][1] * view[1] + projection[3][2] * view[2] +
                             projection[3][3] + projection[3][0] * view[0]);
    screen[0] = widths[display] * (1.0f -
        (projection[1][1] * view[1] + projection[1][2] * view[2] +
         projection[1][3] + projection[1][0] * view[0]) * reciprocalW) * 0.5f;
    screen[1] = (1.0f -
        (projection[0][1] * view[1] + projection[0][2] * view[2] +
         projection[0][3] + projection[0][0] * view[0]) * reciprocalW) * 0.5f * 240.0f;
    screen[2] = view[2];
}
}
