/* NON_MATCHING: global clustering, GPR/VFP allocation, clip-pair transfer and loop condition lowering differ; full period/projection float ABI is reconstructed. Alternate optimization candidate. */
#include "shard/W5_W5Match4_BattleVectorTransition.h"
#include "shard/S3GfxAnim.h"

namespace {
struct DefaultScreenCamera {
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
struct ScreenCameraSlot {
    s32 mode;
    s32 counter;
    f32 period;
    f32 scaledPeriod;
    BattleVector3 target;
    BattleVector3 eye;
    BattleVector3 rotation;
    f32 nearClip;
    f32 farClip;
    DefaultScreenCamera camera; // 0x3c
}; // 0x548
struct ScreenCameraDefaults {
    u8 enabled;
    u8 unk01[3];
    ScreenCameraSlot slots[2];
};
struct ScreenCameraWork {
    u8 unk00[0x80];
    DefaultScreenCamera* upper;
    DefaultScreenCamera* lower;
};
struct ScreenCameraGlobals {
    u32 job;
    ScreenCameraWork* work;
};
}

extern "C" {
extern ScreenCameraDefaults DAT_006309c4;
extern BattleVector3 DAT_006309a0;
extern BattleVector3 DAT_006309b8;
extern ScreenCameraGlobals g_asdCamera;
void asdCameraInitializeDefaults(DefaultScreenCamera*, s32 enabled);
void FUN_0014f0dc(DefaultScreenCamera*, const BattleVector3* eye,
                 const BattleVector3* target, const BattleVector3* up);
GfxTransform* FUN_0016fba0(GfxTransform*, f32 fieldOfView, f32 aspect, f32 nearClip, f32 farClip);
void nn_math_ARMv6_MTX44PivotC_FAST(GfxTransform*, s32 mode);
void nn_math_ARMv6_MTX44TransposeAsm(GfxTransform* output, const GfxTransform* input);
void nn_ulcd_CTR_StereoCamera_SetBaseFrustum(void* stereo, const GfxTransform* frustum);

void asdCameraResetScreenDefaults(s32 mode, s32 enabled, f32 period)
{
    const f32 scaledPeriod = period * 3600.0f;
    DAT_006309c4.enabled = static_cast<u8>(enabled);
    for (s32 screen = 0; screen < 2; ++screen) {
        ScreenCameraSlot* slot = &DAT_006309c4.slots[screen];
        slot->mode = mode;
        slot->counter = 0;
        slot->period = period;
        slot->scaledPeriod = scaledPeriod;
        slot->target.x = 0.0f;
        slot->target.y = 0.0f;
        slot->target.z = 0.0f;
        slot->eye = DAT_006309a0;
        slot->rotation.x = -0.08726646f;
        slot->rotation.y = 0.0f;
        slot->rotation.z = 0.0f;
        slot->nearClip = 20.0f;
        slot->farClip = 25600.0f;

        DefaultScreenCamera* camera = &slot->camera;
        asdCameraInitializeDefaults(camera, 1);
        FUN_0014f0dc(camera, &slot->eye, &slot->target, &DAT_006309b8);
        camera->fieldOfView = 18.267f;
        camera->nearClip = slot->nearClip;
        camera->farClip = slot->farClip;
        camera->aspect = screen == 0 ? 5.0f / 3.0f : 4.0f / 3.0f;
        FUN_0016fba0(&camera->projection, 18.267f * 0.017453292f,
                      camera->aspect, camera->nearClip, camera->farClip);
        nn_math_ARMv6_MTX44PivotC_FAST(&camera->projection, 1);
        nn_math_ARMv6_MTX44TransposeAsm(&camera->transposedProjection, &camera->projection);
        FUN_0016fba0(&camera->stereoProjection, camera->fieldOfView * 0.017453292f,
                      camera->aspect, camera->nearClip, camera->farClip);
        nn_math_ARMv6_MTX44PivotC_FAST(&camera->stereoProjection, 0);
        if (camera->enabled) {
            nn_ulcd_CTR_StereoCamera_SetBaseFrustum(camera->stereo, &camera->stereoProjection);
        }
        if (screen == 0) {
            g_asdCamera.work->upper = camera;
        } else {
            g_asdCamera.work->lower = camera;
        }
    }
}
} // extern "C"
