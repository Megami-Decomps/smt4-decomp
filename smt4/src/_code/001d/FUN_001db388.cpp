/* NON_MATCHING: the second perspective call addresses nearClip through r0 where retail uses r1. */
#include "shard/W5_W5Match4_BattleVectorTransition.h"
#include "shard/S3GfxAnim.h"

namespace {
struct ScreenCamera {
    u8 enabled;
    u8 unk001[3];
    BattleVector3 eye;
    BattleVector3 target;
    BattleVector3 up;
    f32 fieldOfView;
    f32 nearClip;
    f32 farClip;
    f32 aspect;
    u8 unk038[0x70];
    GfxTransform projection; // 0xa8
    GfxTransform stereoProjection; // 0xe8
    u8 unk128[0x30];
    GfxTransform transposedProjection; // 0x158
    u8 unk198[0x308];
    u8 stereo[0x6c]; // 0x4a0
}; // 0x50c
}

extern "C" {
GfxTransform* FUN_002b72dc(GfxTransform*, f32 fieldOfView, f32 aspect, f32 nearClip, f32 farClip);
void nn_math_ARMv6_MTX44PivotC_FAST(GfxTransform*, s32 mode);
void nn_math_ARMv6_MTX44TransposeAsm(GfxTransform* output, const GfxTransform* input);
void nn_ulcd_CTR_StereoCamera_SetBaseFrustum(void* stereo, const GfxTransform* frustum);

/* Sets the camera's perspective (field of view in degrees, the screen's aspect ratio) and rebuilds its projection matrices. */
void FUN_001db388(ScreenCamera* camera, s32 lowerScreen, f32 fieldOfView, f32 nearClip, f32 farClip)
{
    camera->fieldOfView = fieldOfView;
    camera->nearClip = nearClip;
    camera->farClip = farClip;
    camera->aspect = lowerScreen == 0 ? 400.0f / 240.0f : 320.0f / 240.0f;
    FUN_002b72dc(&camera->projection, camera->fieldOfView * 0.017453292f, camera->aspect, camera->nearClip, camera->farClip);
    nn_math_ARMv6_MTX44PivotC_FAST(&camera->projection, 1);
    nn_math_ARMv6_MTX44TransposeAsm(&camera->transposedProjection, &camera->projection);
    FUN_002b72dc(&camera->stereoProjection, camera->fieldOfView * 0.017453292f, camera->aspect, camera->nearClip, camera->farClip);
    nn_math_ARMv6_MTX44PivotC_FAST(&camera->stereoProjection, 0);
    if (camera->enabled) {
        nn_ulcd_CTR_StereoCamera_SetBaseFrustum(camera->stereo, &camera->stereoProjection);
    }
}

} /* extern "C" */
