/* NON_MATCHING: compiler reverses the independent X and Z subtraction instruction order. */
#include "shard/W5_W5Match7_SceneState.h"
#include "shard/W6_W6Match3_MapSceneTransition.h"

extern "C" {
float FUN_00281e34(float x, float z);
float mathPositionHeadingDegrees(MapVector from, MapVector to)
{
    float angle = FUN_00281e34(to.x - from.x, to.z - from.z) * 57.3248405456543f;
    if (angle < 0.0f) { angle += 360.0f; }
    if (angle > 360.0f) { angle -= 360.0f; }
    return angle;
}
}
