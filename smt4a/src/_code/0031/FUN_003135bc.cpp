/* NON_MATCHING: VFP allocation and scene-position load grouping differ; the directional calculation and tail calls match. */
#include "map/lmapMain.h"

extern "C" {
f32 FUN_001bbf0c(f32 radians);
f32 FUN_001bc124(f32 radians);
void FUN_003136e4(f32 angle, f32 distance);
s32 FUN_003644bc(void);
void effectSpawnKindTen(f32 x, f32 y, f32 z);
extern LmapSceneA *g_lmapScene;

/* Spawns a map effect at a distance and bearing from the scene position. */
void FUN_003135bc(f32 angle, f32 distance)
{
    if (FUN_003644bc()) {
        FUN_003136e4(angle, distance);
        return;
    }
    f32 x = g_lmapScene->transform.position[0];
    f32 y = g_lmapScene->transform.position[1];
    f32 z = g_lmapScene->transform.position[2];
    f32 radians = (g_lmapScene->transform.headingDegrees + angle) * 0.017453292f;
    x += FUN_001bc124(radians) * distance;
    z += FUN_001bbf0c(radians) * distance;
    effectSpawnKindTen(x, y, z);
}
}
