/* NON_MATCHING: VFP allocation and constant-load scheduling differ; the two-float ABI and heading-relative placement are recovered. */
#include "shard/W5_W5Match7_SceneState.h"
#include "shard/W6_W6Match3_ForwardEffect.h"

extern "C" f32 FUN_0028250c(f32 radians);
extern "C" f32 FUN_00282390(f32 radians);
extern "C" void effectSpawnKindTen(f32 x, f32 y, f32 z);

extern "C" void effectSpawnAheadOfScene(f32 angle, f32 distance)
{
    MapVector position = g_lmapScene->position;
    angle = (g_lmapScene->heading + angle) * 0.017453292f;
    position.x += FUN_0028250c(angle) * distance;
    position.z += FUN_00282390(angle) * distance;
    effectSpawnKindTen(position.x, position.y, position.z);
}
