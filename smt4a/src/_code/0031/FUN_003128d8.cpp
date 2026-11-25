/* NON_MATCHING: the loop scales the entry index into r0 and loads the table base into r1, opposite to retail. */
#include "map/MapGimicGlobal.h"
#include "map/LmapGlobals.h"
#include "shard/W6_W6Match1_PositionedStream.h"

extern "C" {

/* Requests the nearest active gimmick of the selected interaction kind. */
void FUN_003128d8(void)
{
    enum { GIMIC_INTERACTION_KIND = 0xF };
    s32 bestIndex = -1;
    s32 bestDistance = 99999;
    for (s32 i = 0; i < MAP_GIMIC_ENTRIES; ++i) {
        MapGimicEntryA *entry = &g_mapGimic->entries[i];
        if (entry->active != 0 && entry->kind == GIMIC_INTERACTION_KIND) {
            s32 distance = (s32)distSpatial(g_lmapScene->pose.position, entry->position);
            if (distance < bestDistance) {
                bestDistance = distance;
                bestIndex = i;
            }
        }
    }
    if (bestIndex == -1) {
        return;
    }
    MapGimicEntryA *best = &g_mapGimic->entries[bestIndex];
    best->motion = 1;
    best->requested = 1;
}
} /* extern "C" */
