/* NON_MATCHING: The nearest-entry loop allocates its distance and entry registers differently. */
#include "map/mapGimic.h"
#include "map/lmapMain.h"

extern "C" {
extern MapGimic *g_mapGimic;
extern LmapSceneA *g_lmapScene;
f32 distSpatial(f32 x0, f32 y0, f32 z0, f32 x1, f32 y1, f32 z1);

/* Requests the nearest active gimmick of the selected interaction kind. */
void FUN_003128d8(void)
{
    s32 bestIndex = -1;
    s32 bestDistance = 99999;
    for (s32 i = 0; i < MAP_GIMIC_ENTRIES; ++i) {
        MapGimicEntry *entry = &g_mapGimic->entries[i];
        if (entry->active != 0 && entry->id == 0xF) {
            s32 distance = static_cast<s32>(distSpatial(
                g_lmapScene->transform.position[0], g_lmapScene->transform.position[1], g_lmapScene->transform.position[2],
                entry->position[0], entry->position[1], entry->position[2]));
            if (distance < bestDistance) {
                bestDistance = distance;
                bestIndex = i;
            }
        }
    }
    if (bestIndex != -1) {
        g_mapGimic->entries[bestIndex].requestState = 1;
        g_mapGimic->entries[bestIndex].requested = 1;
    }
}
}
