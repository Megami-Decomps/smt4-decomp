#include "map/LmapGlobals.h"
#include "util/TrigF32.h"
#include "code/Code002b_Smt4a.h"

extern "C" {

void FUN_003136e4(f32 angle, f32 distance);
s32 FUN_003644bc(void);

/* Spawns a map effect at a distance and bearing from the scene position. */
void FUN_003135bc(f32 angle, f32 distance)
{
    if (FUN_003644bc()) {
        FUN_003136e4(angle, distance);
        return;
    }
    MapVector position = g_lmapScene->pose.position;
    f32 degrees = g_lmapScene->pose.heading + angle;
    position.x += libm_sinf(degrees * 0.017453292f) * distance;
    position.z += libm_cosf(degrees * 0.017453292f) * distance;
    effectSpawnKindTen(position);
}
}
