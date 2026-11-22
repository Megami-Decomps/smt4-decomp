/* NON_MATCHING: the view is nn::math's MTX34LookAt (nw/math/VEC3.h) of an eye at (0, 0, depth), as in its IV twin
 * FUN_00106a18; retail copies the float arguments into s17/s20/s21/s18 and keeps 1.0f in s19 from entry, where armcc
 * here allocates the arguments in order and loads the constants late, which moves every look-at register. */
#include "camp/RenderCtx.h"
#include "shard/S1Mover.h"
#include "nw/math/VEC3.h"

extern "C" {
void asdCameraInitializeDefaults(RenderCtxA *context, s32 enabled); // declcheck: local (the shared header names another view of the camera)
u32 asdGxPresetsGetByKind(u32 kind);
u32 asdGxPresetsGetHeightByKind(u32 kind);
void FUN_0015a20c(RenderCtxA *context, f32 left, f32 right, f32 bottom, f32 top, f32 nearClip, f32 farClip);
void FUN_0015a1b4(RenderCtxA *context, const f32 *matrix);
void uiSetFloatPair(RenderCtxA *context, f32 depth, f32 parameter);
void asdCameraRegister(RenderCtxA *context);

// Configure the screen projection and an origin-facing camera at the requested depth.
void renderCtxSetupScreenCamera(RenderCtxA *context, f32 depth, f32 minimum, f32 maximum, f32 parameter)
{
    asdCameraInitializeDefaults(context, 1);
    f32 height = static_cast<f32>(asdGxPresetsGetByKind(0));
    f32 width = static_cast<f32>(asdGxPresetsGetHeightByKind(0));
    FUN_0015a20c(context, 0.0f, width, height, 0.0f, 1.0f, 1.0f);
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
    FUN_0015a1b4(context, &view[0][0]);
    uiSetFloatPair(context, depth, parameter);
    asdCameraRegister(context);
}
}
