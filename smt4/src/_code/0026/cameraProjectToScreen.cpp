/* NON_MATCHING: 82 lines: the instructions now match, but retail's frame is 32 bytes (view at sp+4, widths at sp+16)
 * where this build's is 24 (widths at sp, view at sp+8), which renumbers the VFP registers. */
#include "shard/W6_W6Match6_ProjectionCamera.h"
#include "nw/math/VEC4.h"

extern "C" {
void nn_math_ARMv6_VEC3TransformAsm_2AD44C(f32 *, const f32 (*)[4], const f32 *);

/* Transforms a world point into mirrored screen coordinates and keeps its view-space depth. */
void cameraProjectToScreen(f32 *screen, s32 display, const ProjectionMatrices *camera, const f32 *world)
{
    f32 widths[2] = {400.0f, 320.0f};
    f32 view[3];
    nn_math_ARMv6_VEC3TransformAsm_2AD44C(view, camera->view, world);
    nw::math::VEC4 clip;
    vec3TransformMtx44(&clip, camera->projection, view);
    f32 reciprocalW = 1.0f / clip.w;
    f32 x = clip.x * reciprocalW;
    f32 y = clip.y * reciprocalW;
    screen[0] = widths[display] * ((1.0f - y) * 0.5f);
    screen[1] = (1.0f - x) * 0.5f * 240.0f;
    screen[2] = view[2];
}
}
