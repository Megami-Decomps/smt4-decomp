/* NON_MATCHING: saved camera coordinate/constant VFP registers differ and target X/Y stores coalesce. */
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

void FUN_003cb49c(void)
{
    s32 preset = FUN_003033d4();
    const f32 degreesToRadians = 0.017453292f;
    f32 targetX = g_lmapScene->transform.position[0];
    f32 targetY = g_lmapScene->transform.position[1] + g_lmapView->followPresets.targetHeight[preset];
    f32 targetZ = g_lmapScene->transform.position[2];
    targetX += FUN_001bc124((g_lmapView->followPose.heading - 90.0f) * degreesToRadians) * g_lmapView->followPresets.lateralDistance[preset];
    targetZ += FUN_001bbf0c((g_lmapView->followPose.heading - 90.0f) * degreesToRadians) * g_lmapView->followPresets.lateralDistance[preset];
    DAT_005f19fc.target.x = targetX;
    DAT_005f19fc.target.y = targetY;
    DAT_005f19fc.target.z = targetZ;
    f32 eyeX = g_lmapScene->transform.position[0] - FUN_001bc124(g_lmapView->followPose.heading * degreesToRadians) * g_lmapView->followPresets.rearDistance[preset];
    f32 eyeZ = g_lmapScene->transform.position[2] - FUN_001bbf0c(g_lmapView->followPose.heading * degreesToRadians) * g_lmapView->followPresets.rearDistance[preset];
    f32 eyeY = g_lmapScene->transform.position[1] + g_lmapView->followPresets.eyeHeight[preset] + g_lmapView->followPose.heightBias;
    eyeX += FUN_001bc124((g_lmapView->followPose.heading - 90.0f) * degreesToRadians) * g_lmapView->followPresets.lateralDistance[preset];
    eyeZ += FUN_001bbf0c((g_lmapView->followPose.heading - 90.0f) * degreesToRadians) * g_lmapView->followPresets.lateralDistance[preset];
    DAT_005f19fc.eye.x = eyeX;
    DAT_005f19fc.eye.y = eyeY;
    DAT_005f19fc.eye.z = eyeZ;
}
}
