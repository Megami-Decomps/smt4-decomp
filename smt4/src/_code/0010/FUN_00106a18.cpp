/* NON_MATCHING: VFP grouping, folded zero cross-products and matrix-store scheduling differ. */
#include "camp/RenderCtx.h"
#include "shard/S1Mover.h"
#include <math.h>

extern "C" {
void FUN_002c2044(RenderCtx *context, s32 mode);
u32 asdGxPresetsGetByKind(u32 kind);
u32 FUN_002c15ac(u32 kind);
void FUN_0011d0dc(RenderCtx *context, f32 left, f32 right, f32 bottom, f32 top, f32 nearClip, f32 farClip);
void FUN_0011d084(RenderCtx *context, const f32 *matrix);
void FUN_002c159c(RenderCtx *context, f32 depth, f32 parameter);
void asdCameraRegister(RenderCtx *context);

// Configure the screen projection and an origin-facing camera at the requested depth.
void FUN_00106a18(RenderCtx *context, f32 depth, f32 minimum, f32 maximum, f32 parameter)
{
    FUN_002c2044(context, 1);
    f32 height = static_cast<f32>(asdGxPresetsGetByKind(0));
    f32 width = static_cast<f32>(FUN_002c15ac(0));
    FUN_0011d0dc(context, 0.0f, width, height, 0.0f, 1.0f, 1.0f);
    context->stereo.parameter = depth;
    context->stereo.defaultView.scale = 1.0f;
    context->stereo.defaultView.depth = depth;
    context->stereo.minimum = minimum;
    context->stereo.maximum = maximum;
    Vec3f eye = {0.0f, 0.0f, depth};
    Vec3f forward = {eye.x - 0.0f, eye.y - 0.0f, eye.z - 0.0f};
    f32 inverseLength = 1.0f / sqrtf(forward.x * forward.x + forward.y * forward.y + forward.z * forward.z);
    forward.z *= inverseLength;
    forward.x *= inverseLength;
    forward.y *= inverseLength;
    Vec3f right = {
        1.0f * forward.z - 0.0f * forward.y,
        0.0f * forward.x - 0.0f * forward.z,
        0.0f * forward.y - 1.0f * forward.x
    };
    inverseLength = 1.0f / sqrtf(right.x * right.x + right.y * right.y + right.z * right.z);
    right.z *= inverseLength;
    right.x *= inverseLength;
    right.y *= inverseLength;
    Vec3f vertical = {
        forward.y * right.z - forward.z * right.y,
        forward.z * right.x - forward.x * right.z,
        forward.x * right.y - forward.y * right.x
    };
    f32 view[3][4] = {
        {right.x, right.y, right.z, -(eye.x * right.x + eye.y * right.y + eye.z * right.z)},
        {vertical.x, vertical.y, vertical.z, -(eye.x * vertical.x + eye.y * vertical.y + eye.z * vertical.z)},
        {forward.x, forward.y, forward.z, -(eye.x * forward.x + eye.y * forward.y + eye.z * forward.z)}
    };
    FUN_0011d084(context, &view[0][0]);
    FUN_002c159c(context, depth, parameter);
    asdCameraRegister(context);
}
}
