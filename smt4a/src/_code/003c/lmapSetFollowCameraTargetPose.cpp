#include "map/lmapMain.h"

struct FollowCameraTargets {
    u8 prefix[0x34];
    MapVector eye;
    MapVector target;
};
typedef char FollowCameraTargetsOffsetCheck[offsetof(FollowCameraTargets, eye) == 0x34 &&
    offsetof(FollowCameraTargets, target) == 0x40 ? 1 : -1];

extern "C" {
extern LmapExtraA *g_lmapView;
extern LmapSceneA *g_lmapScene;
extern FollowCameraTargets DAT_005f19fc;
s32 FUN_003033d4(void);
f32 FUN_001bc124(f32);
f32 FUN_001bbf0c(f32);

void lmapSetFollowCameraTargetPose(void)
{
    s32 preset = FUN_003033d4();
    MapVector target;
    target.x = g_lmapScene->transform.position[0];
    target.z = g_lmapScene->transform.position[2];
    target.y = g_lmapScene->transform.position[1] + g_lmapView->followPresets.targetHeight[preset];
    target.x += FUN_001bc124((g_lmapView->followPose.heading - 90.0f) * 0.017453292f) * g_lmapView->followPresets.lateralDistance[preset];
    target.z += FUN_001bbf0c((g_lmapView->followPose.heading - 90.0f) * 0.017453292f) * g_lmapView->followPresets.lateralDistance[preset];
    DAT_005f19fc.target = target;
    MapVector eye;
    eye.x = g_lmapScene->transform.position[0] - FUN_001bc124(g_lmapView->followPose.heading * 0.017453292f) * g_lmapView->followPresets.rearDistance[preset];
    eye.z = g_lmapScene->transform.position[2] - FUN_001bbf0c(g_lmapView->followPose.heading * 0.017453292f) * g_lmapView->followPresets.rearDistance[preset];
    eye.y = g_lmapScene->transform.position[1] + g_lmapView->followPresets.eyeHeight[preset] + g_lmapView->followPose.heightBias;
    eye.x += FUN_001bc124((g_lmapView->followPose.heading - 90.0f) * 0.017453292f) * g_lmapView->followPresets.lateralDistance[preset];
    eye.z += FUN_001bbf0c((g_lmapView->followPose.heading - 90.0f) * 0.017453292f) * g_lmapView->followPresets.lateralDistance[preset];
    DAT_005f19fc.eye = eye;
}
}
