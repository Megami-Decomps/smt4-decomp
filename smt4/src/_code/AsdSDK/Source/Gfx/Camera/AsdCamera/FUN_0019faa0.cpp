/* NON_MATCHING: camera subobject pointer reuse, scalar/VFP paired transfers and saved register allocation differ. */
#include "gfx/CameraManager.h"

struct CameraProjectionInitializationView {
    u8 enabled;
    u8 unk001[0x27];
    f32 fieldOfView;
    f32 nearClip;
    f32 farClip;
    f32 aspect;
    u8 unk038[0x70];
    f32 projection[16];
    f32 baseFrustum[16];
    u8 unk128[0x30];
    f32 transposedProjection[16];
    u8 unk198[0x308];
    u8 stereoCamera[0x68];
};
struct CameraChannelInitializationView {
    u32 owner;
    u32 frame;
    f32 frameStep;
    f32 timeScale;
    CameraDefaultVector target;
    CameraDefaultVector eye;
    CameraDefaultVector rotation;
    f32 nearClip;
    f32 farClip;
    union {
        ManagedCameraIV camera;
        CameraProjectionInitializationView projection;
    };
};
struct StereoCameraInitializationView {
    u8 enabled;
    u8 unk01[3];
    CameraChannelInitializationView channels[2];
};
typedef char CameraInitializationOffsets[
    sizeof(CameraProjectionInitializationView) == 0x508 &&
    sizeof(CameraChannelInitializationView) == 0x544 &&
    offsetof(CameraChannelInitializationView, camera) == 0x3C ? 1 : -1];
extern "C" {
extern StereoCameraInitializationView g_sceneCameraElements;
extern const CameraDefaultVector DAT_004d493c[];
extern CameraManagerIV g_asdCamera;
void FUN_002c2044(ManagedCameraIV *, s32);
void FUN_002c1edc(ManagedCameraIV *, const CameraDefaultVector *, const CameraDefaultVector *, const CameraDefaultVector *);
void FUN_002b72dc(f32 *, f32, f32, f32, f32);
void nn_math_ARMv6_MTX44PivotC_FAST(f32 *, s32);
void nn_math_ARMv6_MTX44TransposeAsm(f32 *, const f32 *);
void nn_ulcd_CTR_StereoCamera_SetBaseFrustum(void *, const f32 *);

void FUN_0019faa0(u32 owner, u8 enabled, f32 frameStep)
{
    g_sceneCameraElements.enabled = enabled;
    // The default look-at block immediately precedes the channel state.
    const CameraDefaultLookAt *defaults = reinterpret_cast<const CameraDefaultLookAt *>(&g_sceneCameraElements) - 1;
    for (s32 i = 0; i < 2; ++i) {
        CameraChannelInitializationView *channel = &g_sceneCameraElements.channels[i];
        channel->owner = owner;
        channel->frame = 0;
        channel->target.z = 0.0f;
        channel->target.y = 0.0f;
        channel->frameStep = frameStep;
        channel->timeScale = frameStep * 3600.0f;
        channel->target.x = 0.0f;
        channel->rotation.z = 0.0f;
        channel->rotation.y = 0.0f;
        channel->rotation.x = -0.0872664601f;
        channel->nearClip = 20.0f;
        channel->farClip = 25600.0f;
        channel->eye = defaults->eye;
        FUN_002c2044(&channel->camera, 1);
        FUN_002c1edc(&channel->camera, &channel->eye, &channel->target, DAT_004d493c);
        channel->projection.fieldOfView = 18.267f;
        channel->projection.nearClip = channel->nearClip;
        channel->projection.farClip = channel->farClip;
        channel->projection.aspect = i == 0 ? 400.0f / 240.0f : 320.0f / 240.0f;
        FUN_002b72dc(channel->projection.projection, 0.318819284f, channel->projection.aspect,
                     channel->projection.nearClip, channel->projection.farClip);
        nn_math_ARMv6_MTX44PivotC_FAST(channel->projection.projection, 1);
        nn_math_ARMv6_MTX44TransposeAsm(channel->projection.transposedProjection, channel->projection.projection);
        FUN_002b72dc(channel->projection.baseFrustum, channel->projection.fieldOfView * 0.0174532924f,
                     channel->projection.aspect, channel->projection.nearClip, channel->projection.farClip);
        nn_math_ARMv6_MTX44PivotC_FAST(channel->projection.baseFrustum, 0);
        if (channel->projection.enabled)
            nn_ulcd_CTR_StereoCamera_SetBaseFrustum(channel->projection.stereoCamera, channel->projection.baseFrustum);
        g_asdCamera.work->active[i] = &channel->camera;
    }
}
}
