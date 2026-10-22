#include "map/lmapMain.h"

extern "C" {
extern LmapSceneA *g_lmapScene;
f32 mathAngleDeltaDegrees(f32 current, f32 target);

// Ease the scene heading toward its saved target, with a minimum five-degree step.
void mapEaseSceneHeading()
{
    f32 delta = mathAngleDeltaDegrees(g_lmapScene->transform.headingDegrees, g_lmapScene->transform.headingCopy);
    f32 distance = delta;
    if (distance < 0.0f)
        distance = -distance;
    f32 factor = distance < 15.0f ? 0.2f : 0.33333334f;
    f32 step = distance * factor;
    if (step < 5.0f)
        step = 5.0f;
    f32 heading;
    if (distance <= step)
        heading = g_lmapScene->transform.headingCopy;
    else if (delta < 0.0f)
        heading = g_lmapScene->transform.headingDegrees - step;
    else
        heading = g_lmapScene->transform.headingDegrees + step;
    if (heading < 0.0f)
        heading += 360.0f;
    if (heading > 360.0f)
        heading -= 360.0f;
    g_lmapScene->transform.headingDegrees = heading;
}
}
