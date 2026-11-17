#include "map/MapEnemyGlobal.h"
#include "map/LmapGlobals.h"

extern "C" {

f32 distSpatial(MapVector a, MapVector b);

/* Distance from the field position to a slot; slots in state 2 count 300 units farther. */
static __inline f32 sceneSlotDistance(const MapEnemyEntryA *slot)
{
    f32 distance = distSpatial(g_lmapScene->pose.position, slot->basePosition);
    if (slot->state == 2) {
        distance += 300.0f;
    }
    return distance;
}

/* Reports whether the locked slot is at least as close to the field position as every other
 * active, locked enemy slot. */
s32 mapEnemyIsNearestLocked(const MapEnemyEntryA *slot)
{
    MapEnemyA *enemies = g_mapEnemy;
    f32 distance;
    s32 i;

    if (!slot->locked) {
        return 0;
    }
    distance = distSpatial(g_lmapScene->pose.position, slot->position);
    if (slot->state == 2) {
        distance += 300.0f;
    }
    for (i = 0; i < MAP_ENEMY_COUNT_A; i++) {
        const MapEnemyEntryA *other = &enemies->entries[i];
        if (other->active && other->locked && sceneSlotDistance(other) < distance) {
            return 0;
        }
    }
    return 1;
}

} /* extern "C" */
