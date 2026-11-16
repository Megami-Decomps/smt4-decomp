/* NON_MATCHING: VFP allocation and scene-position load grouping differ; the directional calculation and tail calls match. */
#include "map/lmapMain.h"

extern "C" {
f32 libm_cosf(f32 radians);
f32 libm_sinf(f32 radians);
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
    MapVector position = *reinterpret_cast<const MapVector *>(g_lmapScene->transform.position);
    f32 radians = (g_lmapScene->transform.headingDegrees + angle) * 0.017453292f;
    position.x += libm_sinf(radians) * distance;
    position.z += libm_cosf(radians) * distance;
    effectSpawnKindTen(position.x, position.y, position.z);
}
}
