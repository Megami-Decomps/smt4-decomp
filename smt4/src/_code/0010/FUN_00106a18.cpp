/* NON_MATCHING: the view is nn::math's MTX34LookAt (nw/math/VEC3.h) of an eye at (0, 0, depth); retail copies the five float arguments into s17/s20/s21/s18 one by one and keeps 1.0f in s19 from entry, where armcc here allocates the arguments in order and loads the constants late, which moves every look-at register. */
#include "camp/RenderCtx.h"
#include "shard/S1Mover.h"
#include "nw/math/VEC3.h"

extern "C" {
void cameraMatrixCacheReset(RenderCtx *context, s32 mode);
u32 asdGxPresetsGetByKind(u32 kind);
u32 asdGxPresetsGetHeightByKind(u32 kind);
void FUN_0011d0dc(RenderCtx *context, f32 left, f32 right, f32 bottom, f32 top, f32 nearClip, f32 farClip);
void FUN_0011d084(RenderCtx *context, const f32 *matrix);
void FUN_002c159c(RenderCtx *context, f32 depth, f32 parameter);
void asdCameraRegister(RenderCtx *context);

// Configure the screen projection and an origin-facing camera at the requested depth.
void FUN_00106a18(RenderCtx *context, f32 depth, f32 minimum, f32 maximum, f32 parameter)
{
    cameraMatrixCacheReset(context, 1);
    f32 height = static_cast<f32>(asdGxPresetsGetByKind(0));
    f32 width = static_cast<f32>(asdGxPresetsGetHeightByKind(0));
    FUN_0011d0dc(context, 0.0f, width, height, 0.0f, 1.0f, 1.0f);
    context->stereo.parameter = depth;
    context->stereo.defaultView.scale = 1.0f;
    context->stereo.defaultView.depth = depth;
    context->stereo.minimum = minimum;
    context->stereo.maximum = maximum;
    nw::math::VEC3 eye;
    eye.x = 0.0f;
    eye.y = 0.0f;
    eye.z = depth;
    nw::math::VEC3 up;
    up.x = 0.0f;
    up.y = 1.0f;
    up.z = 0.0f;
    nw::math::VEC3 target;
    target.x = 0.0f;
    target.y = 0.0f;
    target.z = 0.0f;
    f32 view[3][4];
    nw::math::MTX34LookAt(view, &eye, &up, &target);
    FUN_0011d084(context, &view[0][0]);
    FUN_002c159c(context, depth, parameter);
    asdCameraRegister(context);
}
}
