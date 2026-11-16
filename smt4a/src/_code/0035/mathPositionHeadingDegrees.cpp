#include "shard/W5_W5Match7_SceneState.h"
#include "shard/W6_W6Match3_MapSceneTransition.h"
#include "util/MathFunctions_mapDepart.h"

extern "C" {
float __hardfp_atan2f(float x, float z);
float mathPositionHeadingDegrees(MapVector from, MapVector to)
{
    float dx = to.x - from.x;
    float dz = to.z - from.z;
    float angle = __hardfp_atan2f(dx, dz) * 57.3248405456543f;
    if (angle < 0.0f) { angle += 360.0f; }
    if (angle > 360.0f) { angle -= 360.0f; }
    return angle;
}
}
