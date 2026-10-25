#include "shard/W5_W5Match7_SceneState.h"
#include "shard/W6_W6Match3_MapSceneTransition.h"

extern "C" {
float FUN_0050d8e4(float x, float z);
float mathPositionHeadingDegrees(MapVector from, MapVector to)
{
    float dx = to.x - from.x;
    float dz = to.z - from.z;
    float angle = FUN_0050d8e4(dx, dz) * 57.3248405456543f;
    if (angle < 0.0f) { angle += 360.0f; }
    if (angle > 360.0f) { angle -= 360.0f; }
    return angle;
}
}
