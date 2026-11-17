#include "map/mapDepart.h"
#include "map/LmapGlobals.h"

namespace {

struct CameraTargetView {
    u8 unk00[0x50]; // 0x00
    f32 positionX;  // 0x50
    u8 unk54[4];    // 0x54
    f32 positionZ;  // 0x58
    u8 unk5C[0x40]; // 0x5c
    f32 unk9C;      // 0x9c
};

struct CameraTargetStateView {
    u8 unk00[4];             // 0x00
    CameraTargetView* target; // 0x04
};

}

extern "C" {
extern CameraTargetStateView DAT_005806a0;
extern u8 g_localCamera;

f32 distSpatial(f32 firstX, f32 firstY, f32 firstZ,
                f32 secondX, f32 secondY, f32 secondZ);
void uiSetFloatPair(u8* camera, f32 first, f32 second);

// Set the camera float pair from the horizontal target distance and target state.
void lmapUpdateCameraDistancePair(void)
{
    union {
        f32 value;
        s32 bits;
    } distance;

    LmapSceneA *scene = g_lmapScene;
    CameraTargetView *target = DAT_005806a0.target;
    MapVector scenePosition;
    scenePosition.x = scene->pose.position.x;
    scenePosition.y = 0.0f;
    scenePosition.z = scene->pose.position.z;
    MapVector targetPosition;
    targetPosition.x = target->positionX;
    targetPosition.y = 0.0f;
    targetPosition.z = target->positionZ;
    distance.value = distSpatial(scenePosition.x, scenePosition.y, scenePosition.z,
                                 targetPosition.x, targetPosition.y, targetPosition.z);

    if (distance.bits < 0x43340000) {
        distance.value -= 40.0f;
        if (distance.bits < 0x41a00000) {
            distance.value = 20.0f;
        }
        uiSetFloatPair(&g_localCamera, distance.value,
                       DAT_005806a0.target->unk9C);
    } else {
        uiSetFloatPair(&g_localCamera, 140.0f,
                       DAT_005806a0.target->unk9C);
    }
}
}
