/* NON_MATCHING: the input vector uses a paired VFP move and the entry address uses different core registers. */
#include "shard/W6_W6Match6_CollisionQuad.h"
#include "map/MapGimicGlobal.h"

extern "C" {
bool mapResolveCircleOverlapXZ(CollisionVector *result, CollisionVector first,
                               f32 firstRadius, CollisionVector second, f32 secondRadius);

void FUN_001e2a40(CollisionVector *result, CollisionVector point)
{
    for (s32 index = 0; index < MAP_GIMIC_COUNT; ++index) {
        MapGimicEntry *entry = &g_mapGimic->entries[index];
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
