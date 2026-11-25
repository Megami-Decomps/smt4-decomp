/* NON_MATCHING: the entry base and field tests use swapped r0/r1; the initial VFP copies are in y/x/z order instead of y/z/x. */
#include "shard/W6_W6Match6_CollisionQuad.h"
#include "map/MapGimicGlobal.h"

extern "C" {
bool mapResolveCircleOverlapXZ(CollisionVector *result, CollisionVector first,
                               f32 firstRadius, CollisionVector second, f32 secondRadius);

/* Pushes the position out of each active kind-13 gimmick's collision circle. */
void FUN_001e2a40(CollisionVector *result, CollisionVector point)
{
    CollisionVector current = point;
    for (s32 index = 0; index < MAP_GIMIC_COUNT; ++index) {
        const MapGimic *gimmicks = g_mapGimic;
        const MapGimicEntry &entry = gimmicks->entries[index];
        if (entry.active && entry.kind == 13) {
            CollisionVector resolved;
            CollisionVector center = {entry.position[0], entry.position[1], entry.position[2]};
            if (mapResolveCircleOverlapXZ(&resolved, current, 50.0f, center, 50.0f)) {
                current = resolved;
            }
        }
    }
    *result = current;
}
} /* extern "C" */
