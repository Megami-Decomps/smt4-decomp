#include "map/mapDepart.h"
#include "map/LmapViewGlobals.h"

extern "C" {
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
    LmapViewA *view = DAT_005806a0.view;
    MapVector scenePosition;
    scenePosition.x = scene->pose.position.x;
    scenePosition.y = 0.0f;
    scenePosition.z = scene->pose.position.z;
    MapVector targetPosition;
    targetPosition.x = view->savedEye.x;
    targetPosition.y = 0.0f;
    targetPosition.z = view->savedEye.z;
    distance.value = distSpatial(scenePosition.x, scenePosition.y, scenePosition.z,
                                 targetPosition.x, targetPosition.y, targetPosition.z);

    if (distance.bits < 0x43340000) {
        distance.value -= 40.0f;
        if (distance.bits < 0x41a00000) {
            distance.value = 20.0f;
        }
        uiSetFloatPair(&g_localCamera, distance.value,
                       DAT_005806a0.view->scale);
    } else {
        uiSetFloatPair(&g_localCamera, 140.0f,
                       DAT_005806a0.view->scale);
    }
}
}
