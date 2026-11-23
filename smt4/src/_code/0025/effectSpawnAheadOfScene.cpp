#include "shard/W5_W5Match7_SceneState.h"
#include "map/LmapGlobals.h"
#include "shard/W6_W6Match3_ForwardEffect.h"
#include "util/TrigF32.h"
#include "code/Code001f_Smt4.h"

/* Spawns a kind-ten effect `distance` from the scene position, `angle` degrees off its heading. */
extern "C" void effectSpawnAheadOfScene(f32 angle, f32 distance)
{
    MapVector position = g_lmapScene->pose.position;
    f32 degrees = g_lmapScene->pose.heading + angle;
    position.x += libm_sinf(degrees * 0.017453292f) * distance;
    position.z += libm_cosf(degrees * 0.017453292f) * distance;
    effectSpawnKindTen(position);
}
