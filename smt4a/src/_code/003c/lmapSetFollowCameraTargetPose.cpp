#include "map/LmapViewGlobals.h"
#include "util/TrigF32.h"

struct FollowCameraTargets {
    u8 prefix[0x34];
    MapVector eye;
    MapVector target;
};
typedef char FollowCameraTargetsOffsetCheck[offsetof(FollowCameraTargets, eye) == 0x34 &&
    offsetof(FollowCameraTargets, target) == 0x40 ? 1 : -1];

extern "C" {
extern FollowCameraTargets DAT_005f19fc;
s32 lmapResolveContextValue(void);
f32 libm_sinf(f32);

void lmapSetFollowCameraTargetPose(void)
{
    s32 preset = lmapResolveContextValue();
    MapVector target;
    target.x = g_lmapScene->pose.position.x;
    target.z = g_lmapScene->pose.position.z;
    target.y = g_lmapScene->pose.position.y + g_lmapView->targetHeight[preset];
    target.x += libm_sinf((g_lmapView->heading - 90.0f) * 0.017453292f) * g_lmapView->lateralDistance[preset];
    target.z += libm_cosf((g_lmapView->heading - 90.0f) * 0.017453292f) * g_lmapView->lateralDistance[preset];
    DAT_005f19fc.target = target;
    MapVector eye;
    eye.x = g_lmapScene->pose.position.x - libm_sinf(g_lmapView->heading * 0.017453292f) * g_lmapView->rearDistance[preset];
    eye.z = g_lmapScene->pose.position.z - libm_cosf(g_lmapView->heading * 0.017453292f) * g_lmapView->rearDistance[preset];
    eye.y = g_lmapScene->pose.position.y + g_lmapView->eyeHeight[preset] + g_lmapView->heightBias;
    eye.x += libm_sinf((g_lmapView->heading - 90.0f) * 0.017453292f) * g_lmapView->lateralDistance[preset];
    eye.z += libm_cosf((g_lmapView->heading - 90.0f) * 0.017453292f) * g_lmapView->lateralDistance[preset];
    DAT_005f19fc.eye = eye;
}
}
