/* NON_MATCHING: the entry address still uses different scratch registers; the scene position loads before the gimmick position instead of after it. */
#include "map/LmapGlobals.h"
#include "map/mapDepart.h"
#include "util/MathFunctions.h"
#include "map/MapGimicGlobal.h"

extern "C" {

/* Requests the nearest active gimmick of the selected interaction kind. */
void mapGimicRequestNearestOfKind(void)
{
    enum { GIMIC_INTERACTION_KIND = 0xF };
    s32 bestIndex = -1;
    s32 bestDistance = 99999;
    for (s32 i = 0; i < MAP_GIMIC_COUNT; ++i) {
        MapGimicEntry *entry = &g_mapGimic->entries[i];
        if (entry->active != 0 && entry->kind == GIMIC_INTERACTION_KIND) {
            s32 distance = (s32)mathDistanceBetweenPoints(
                g_lmapScene->pose.position.x, g_lmapScene->pose.position.y, g_lmapScene->pose.position.z,
                entry->position[0], entry->position[1], entry->position[2]);
            if (distance < bestDistance) {
                bestDistance = distance;
                bestIndex = i;
            }
        }
    }
    if (bestIndex != -1) {
        MapGimicEntry *best = &g_mapGimic->entries[bestIndex];
        best->motion = 1;
        best->dirty = 1;
    }
}
} /* extern "C" */
