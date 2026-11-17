/* NON_MATCHING: Work-table indexing, scene-position argument loads, and the final request stores use different scratch registers. */
#include "map/LmapGlobals.h"
#include "map/mapDepart.h"
#include "util/MathFunctions.h"
#include "map/MapGimicGlobal.h"

extern "C" {

/* Requests the nearest active gimmick of the selected interaction kind. */
void FUN_0021df18(void)
{
    s32 bestIndex = -1;
    s32 bestDistance = 99999;
    for (s32 i = 0; i < MAP_GIMIC_COUNT; ++i) {
        MapGimicEntry *entry = &g_mapGimic->entries[i];
        if (entry->active != 0 && entry->kind == 0xF) {
            s32 distance = static_cast<s32>(mathDistanceBetweenPoints(
                g_lmapScene->pose.position.x, g_lmapScene->pose.position.y, g_lmapScene->pose.position.z,
                entry->position[0], entry->position[1], entry->position[2]));
            if (distance < bestDistance) {
                bestDistance = distance;
                bestIndex = i;
            }
        }
    }
    if (bestIndex != -1) {
        g_mapGimic->entries[bestIndex].motion = 1;
        g_mapGimic->entries[bestIndex].dirty = 1;
    }
}
}
