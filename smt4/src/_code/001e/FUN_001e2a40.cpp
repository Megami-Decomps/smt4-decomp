/* NON_MATCHING: retail copies the point into s16-s18 as y, z, x and walks the entry through r1 (the table base in r0); the build pairs the x/y move (vmov.f64) and swaps r0/r1. */
#include "shard/W6_W6Match6_CollisionQuad.h"
#include "map/MapGimicGlobal.h"

extern "C" {
bool mapResolveCircleOverlapXZ(CollisionVector *result, CollisionVector first,
                               f32 firstRadius, CollisionVector second, f32 secondRadius);

void FUN_001e2a40(CollisionVector *result, CollisionVector point)
{
    for (s32 index = 0; index < MAP_GIMIC_COUNT; ++index) {
        MapGimic *table = g_mapGimic;
        MapGimicEntry *entry = &table->entries[index];
        if (entry->active && entry->kind == 13) {
            CollisionVector resolved;
            CollisionVector center = {entry->position[0], entry->position[1], entry->position[2]};
            if (mapResolveCircleOverlapXZ(&resolved, point, 50.0f, center, 50.0f)) {
                point = resolved;
            }
        }
    }
    *result = point;
}
}
