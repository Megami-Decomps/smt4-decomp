#include "map/mapDepart.h"
#include "map/LmapViewGlobals.h"
#include "shard/W6_W6Match1_PositionedStream.h"

extern "C" {
extern u8 g_localCamera;

void uiSetFloatPair(u8* camera, f32 first, f32 second);

// Set the camera float pair from the horizontal target distance and target state.
void lmapUpdateCameraDistancePair(void)
{
    union {
        f32 value;
        s32 bits;
    } distance;

    LmapSceneA *scene = g_lmapScene;
    LmapViewA *view = g_lmapViewHolder.view;
    /* both points on the ground plane: the horizontal distance */
    MapVector scenePosition = scene->pose.position;
    scenePosition.y = 0.0f;
    MapVector targetPosition = view->savedEye;
    targetPosition.y = 0.0f;
    distance.value = distSpatial(scenePosition, targetPosition);

    if (distance.bits < 0x43340000) {
        distance.value -= 40.0f;
        if (distance.bits < 0x41a00000) {
            distance.value = 20.0f;
        }
        uiSetFloatPair(&g_localCamera, distance.value,
                       g_lmapViewHolder.view->scale);
    } else {
        uiSetFloatPair(&g_localCamera, 140.0f,
                       g_lmapViewHolder.view->scale);
    }
}
}
