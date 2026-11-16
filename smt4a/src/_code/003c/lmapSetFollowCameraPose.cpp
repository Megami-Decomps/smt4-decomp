#include "map/lmapMain.h"

struct MapFollowCameraOutput {
    u8 unk00[0x1c];
    MapVector eye;
    MapVector target;
};
extern "C" {
s32 FUN_003033d4();
f32 libm_sinf(f32 radians);
f32 libm_cosf(f32 radians);
extern LmapExtraA *g_lmapView;
extern LmapSceneA *g_lmapScene;
extern MapFollowCameraOutput DAT_005f19fc;

void lmapSetFollowCameraPose()
{
    s32 preset = FUN_003033d4();
    MapVector target;
    target.x = g_lmapScene->transform.position[0];
    target.z = g_lmapScene->transform.position[2];
    target.y = g_lmapScene->transform.position[1] + g_lmapView->followPresets.targetHeight[preset];
    target.x += libm_sinf((g_lmapView->followPose.heading - 90.0f) * 0.017453292f) *
        g_lmapView->followPresets.lateralDistance[preset];
    target.z += libm_cosf((g_lmapView->followPose.heading - 90.0f) * 0.017453292f) *
        g_lmapView->followPresets.lateralDistance[preset];
    DAT_005f19fc.target = target;

    MapVector eye;
    eye.x = g_lmapScene->transform.position[0] -
        libm_sinf(g_lmapView->followPose.heading * 0.017453292f) * g_lmapView->followPresets.rearDistance[preset];
    eye.z = g_lmapScene->transform.position[2] -
        libm_cosf(g_lmapView->followPose.heading * 0.017453292f) * g_lmapView->followPresets.rearDistance[preset];
    eye.y = g_lmapScene->transform.position[1] + g_lmapView->followPresets.eyeHeight[preset] +
        g_lmapView->followPose.heightBias;
    eye.x += libm_sinf((g_lmapView->followPose.heading - 90.0f) * 0.017453292f) *
        g_lmapView->followPresets.lateralDistance[preset];
    eye.z += libm_cosf((g_lmapView->followPose.heading - 90.0f) * 0.017453292f) *
        g_lmapView->followPresets.lateralDistance[preset];
    DAT_005f19fc.eye = eye;
}
}
