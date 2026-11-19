/* NON_MATCHING: through a step pointer the scaled stores match; the compiler still drops the unscaled step.x store and pairs y/z into a vstmia (retail stores all three singly) (the pool rows then differ only by that one-instruction shift). */
#include "shard/W5_W5Match7_SceneState.h"
#include "map/LmapGlobals.h"
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
    MapVector *step = &scene->transition.step;
    step->x = to.x - from.x;
    step->y = to.y - from.y;
    step->z = to.z - from.z;
    scene->transition.start = from;
    scene->transition.end = to;
    scaleMapVector(step, 1.0f / 18.0f);
    g_lmapScene->pose.targetHeading = mathPositionHeadingDegrees(from, to);
}

} /* extern "C" */
