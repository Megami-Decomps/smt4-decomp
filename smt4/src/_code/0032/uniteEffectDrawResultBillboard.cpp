/* NON_MATCHING: same calls, constants and maths as retail; retail picks the cue frame through a register loaded before
 * the 3-or-4 test, multiplies the half field of view by 1/180 and pi separately (armcc folds them here) and gives
 * the VFP values other registers (the zero in s17, -1 in s19, the angle in s16 for every arm). */
#include "common.h"
#include "camp/RenderCtx.h"
#include "camp/RenderCtxTitle.h"
#include "ui/AnimatedMessage.h"
#include "camp/Unite/UniteEffectState.h"
#include "AsdSDK/Source/Gfx/Camera/AsdCamera.h"
#include "util/TrigF32.h"
#include <math.h>

extern "C" {
void statusCameraApply(void);
AsdCamera *asdCameraGetSavedRenderPairs(void); // declcheck: local (returns the saved camera; the shared declarations return u32)
f32 libm_tanf(f32 radians);
void renderCtxResetColorScale(RenderCtx *context);
void FUN_0033e160(const AnimationTracks *texture, s32 zero, s32 frame, const AsdCameraVec3 *position, u32 color,
                  u32 flag, f32 scale, f32 angle);

/* Draws the fusion result's billboard 20 units beyond the camera's target, turned to face the camera,
 * while the result is shown (state 3 past the material count's cue, states 4 and 5, and the first 20
 * frames of the fade-out in state 6). */
s32 uniteEffectDrawResultBillboard(void)
{
    UniteEffectWork *work = g_screenStateWork;
    renderStackPush(g_titleScene->stacks + RENDER_STACK_A, renderCtxPackPassFlags(1, 0));
    s32 start = 0;
    if (work->sacrifice != 0) {
        if (work->materialCount == 2)
            start = 800;
        else if (work->materialCount == 3 || work->materialCount == 4)
            start = 885;
    } else {
        if (work->materialCount == 2)
            start = 654;
        else if (work->materialCount == 3 || work->materialCount == 4)
            start = 785;
    }
    if ((work->state == 3 && work->phase > start) || work->state == 4 || work->state == 5 ||
        (work->state == 6 && work->phase < 20)) {
        statusCameraApply();
        AsdCamera *camera = asdCameraGetSavedRenderPairs();
        CameraPosition position(0.0f, 0.0f, 0.0f);
        f32 dx = camera->target.x - camera->eye.x;
        f32 dy = 0.0f;
        f32 dz = camera->target.z - camera->eye.z;
        f32 length = sqrtf(dx * dx + dy * dy + dz * dz);
        f32 inverse = 1.0f / length;
        f32 nx = dx * inverse;
        f32 ny = dy * inverse;
        f32 nz = dz * inverse;
        /* The turn from the -z axis to the view direction, 256 units a full turn. */
        CameraPosition forward(0.0f, 0.0f, -1.0f);
        f32 cosine = forward.x * nx + forward.y * ny + forward.z * nz;
        f32 angle;
        if (cosine == 1.0f) {
            angle = 0.0f;
        } else if (cosine == -1.0f) {
            angle = 128.0f;
        } else {
            angle = libm_acosf(cosine) * (128.0f / 3.14159265f);
            if (forward.z * nx - forward.x * nz < 0.0f)
                angle = -angle;
        }
        position = CameraPosition(camera->target.x, -7.5f, camera->target.z);
        CameraPosition offset(nx * 20.0f, ny * 20.0f, nz * 20.0f);
        position.x += offset.x;
        position.y += offset.y;
        position.z += offset.z;
        f32 distance = length - -20.0f;
        f32 scale = distance / (120.0f / libm_tanf(camera->perspective.fovy * 0.5f / 180.0f * 3.14159265f));
        f32 alpha = 1.0f;
        if (work->state == 6)
            alpha -= (f32)work->phase * 0.05f;
        FUN_0033e160(work->resultTexture, 0, work->renderTarget.resultFrame, &position,
                     (u32)(alpha * 255.0f) - 0x100, 0, scale, angle);
    }
    renderStackPop(g_titleScene->stacks + RENDER_STACK_A);
    renderCtxApplyTransforms(g_titleScene);
    renderCtxResetColorScale(g_titleScene);
    return 0;
}

} /* extern "C" */
