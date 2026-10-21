/* NON_MATCHING: compiler removes the first unscaled step store and groups the other two, changing VFP allocation and scaling-store order. */
#include "shard/W5_W5Match7_SceneState.h"
#include "shard/W6_W6Match3_MapSceneTransition.h"

static inline void scaleMapVector(MapVector *vector, f32 scale)
{
    vector->x *= scale;
    vector->y *= scale;
    vector->z *= scale;
}

extern "C" {

void lmapSceneBeginPositionTransition(f32 x, f32 y, f32 z, f32 endX, f32 endY, f32 endZ)
{
    MapVector from = {x, y, z};
    MapVector to = {endX, endY, endZ};
    LmapScene *scene = g_lmapScene;
    scene->transition.step.x = to.x - from.x;
    scene->transition.step.y = to.y - from.y;
    scene->transition.step.z = to.z - from.z;
    scene->transition.start = from;
    scene->transition.end = to;
    scaleMapVector(&scene->transition.step, 1.0f / 18.0f);
    g_lmapScene->targetHeading = mathPositionHeadingDegrees(from, to);
}

} /* extern "C" */
