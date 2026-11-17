/* NON_MATCHING: canonical vector arguments are restored; saved vector copy order and gimmick record address registers differ. */
#include "shard/W6_W6Match6_CollisionQuad.h"
#include "map/MapGimicGlobal.h"

extern "C" {

bool mapResolveCircleOverlapXZ(CollisionVector *result, CollisionVector first, f32 firstRadius,
                              CollisionVector second, f32 secondRadius);

// Resolve the position sequentially against active type-13 gimmick circles.
void FUN_002947b8(CollisionVector *result, CollisionVector position)
{
    for (s32 index = 0; index < MAP_GIMIC_ENTRIES; ++index) {
        const MapGimicEntryA &record = g_mapGimic->entries[index];
        if (record.active != 0 && record.kind == 13) {
            CollisionVector resolved;
            CollisionVector center = {record.position[0], record.position[1], record.position[2]};
            if (mapResolveCircleOverlapXZ(&resolved, position, 50.0f, center, 50.0f)) {
                position = resolved;
            }
        }
    }

    *result = position;
}
}
