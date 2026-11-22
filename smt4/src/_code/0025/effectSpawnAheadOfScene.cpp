/* NON_MATCHING: retail computes the radian angle into s0 and copies it to s18 for the cosine (the build computes it into s18 and copies it to s0); the 0.017453292 literal also loads after the heading add in retail. */
#include "shard/W5_W5Match7_SceneState.h"
#include "map/LmapGlobals.h"
#include "shard/W6_W6Match3_ForwardEffect.h"
#include "util/TrigF32.h"
#include "code/Code001f_Smt4.h"

/* Spawns a kind-ten effect `distance` from the scene position, `angle` degrees off its heading. */
extern "C" void effectSpawnAheadOfScene(f32 angle, f32 distance)
{
    MapVector position = g_lmapScene->pose.position;
    angle = (g_lmapScene->pose.heading + angle) * 0.017453292f;
    position.x += libm_sinf(angle) * distance;
    position.z += libm_cosf(angle) * distance;
    effectSpawnKindTen(position);
}
