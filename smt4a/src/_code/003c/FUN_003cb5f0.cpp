/* NON_MATCHING: only two pairs of scene-position and preset-distance VFP loads are scheduled in opposite order. */
#include "map/lmapMain.h"

struct MapFollowCameraOutput {
    u8 unk00[0x1c];
    MapVector eye;
    MapVector target;
};
extern "C" {
s32 FUN_003033d4();
f32 FUN_001bc124(f32 radians);
f32 FUN_001bbf0c(f32 radians);
extern LmapExtraA *g_lmapView;
extern LmapSceneA *g_lmapScene;
extern MapFollowCameraOutput DAT_005f19fc;

void FUN_003cb5f0()
{
    s32 preset = FUN_003033d4();
    f32 targetX = g_lmapScene->transform.position[0];
    f32 targetZ = g_lmapScene->transform.position[2];
    f32 targetY = g_lmapScene->transform.position[1] + g_lmapView->followPresets.targetHeight[preset];
    targetX += FUN_001bc124((g_lmapView->followPose.heading - 90.0f) * 0.017453292f) *
        g_lmapView->followPresets.lateralDistance[preset];
    targetZ += FUN_001bbf0c((g_lmapView->followPose.heading - 90.0f) * 0.017453292f) *
        g_lmapView->followPresets.lateralDistance[preset];
    DAT_005f19fc.target.x = targetX;
    DAT_005f19fc.target.y = targetY;
    DAT_005f19fc.target.z = targetZ;

    f32 eyeX = g_lmapScene->transform.position[0] -
        FUN_001bc124(g_lmapView->followPose.heading * 0.017453292f) * g_lmapView->followPresets.rearDistance[preset];
    f32 eyeZ = g_lmapScene->transform.position[2] -
        FUN_001bbf0c(g_lmapView->followPose.heading * 0.017453292f) * g_lmapView->followPresets.rearDistance[preset];
    f32 eyeY = g_lmapScene->transform.position[1] + g_lmapView->followPresets.eyeHeight[preset] +
        g_lmapView->followPose.heightBias;
    eyeX += FUN_001bc124((g_lmapView->followPose.heading - 90.0f) * 0.017453292f) *
        g_lmapView->followPresets.lateralDistance[preset];
    eyeZ += FUN_001bbf0c((g_lmapView->followPose.heading - 90.0f) * 0.017453292f) *
        g_lmapView->followPresets.lateralDistance[preset];
    DAT_005f19fc.eye.x = eyeX;
    DAT_005f19fc.eye.y = eyeY;
    DAT_005f19fc.eye.z = eyeZ;
}
}
