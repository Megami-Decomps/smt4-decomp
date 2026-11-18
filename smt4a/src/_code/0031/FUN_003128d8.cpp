/* NON_MATCHING: only scratch registers differ: retail scales the entry index into r1 and loads g_mapGimic into r0 (built: r0/r1), in the loop and in the final request stores. */
#include "map/MapGimicGlobal.h"
#include "map/LmapGlobals.h"
#include "shard/W6_W6Match1_PositionedStream.h"

extern "C" {

/* Requests the nearest active gimmick of the selected interaction kind. */
void FUN_003128d8(void)
{
    s32 bestIndex = -1;
    s32 bestDistance = 99999;
    for (s32 i = 0; i < MAP_GIMIC_ENTRIES; ++i) {
        MapGimicEntryA *entry = &g_mapGimic->entries[i];
        if (entry->active != 0 && entry->kind == 0xF) {
            s32 distance = static_cast<s32>(distSpatial(g_lmapScene->pose.position, entry->position));
            if (distance < bestDistance) {
                bestDistance = distance;
                bestIndex = i;
            }
        }
    }
    if (bestIndex != -1) {
        MapGimicEntryA *best = &g_mapGimic->entries[bestIndex];
        best->motion = 1;
        best->requested = 1;
    }
}
}
