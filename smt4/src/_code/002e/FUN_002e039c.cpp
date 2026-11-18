#include "gamedata/MapSaveBlock.h"

#include "map/MapZoneLabels.h"

#define MAP_ZONE_KIND_ANY_A 0
#define MAP_ZONE_KIND_ANY_B 99

extern "C" {

extern MapCollisionAuxTable DAT_004be698;



/* Returns the label of the first zone of the given kind (0 or 99: any kind) whose box contains
 * (x, z) on the ground plane and remembers it; falls back to the last zone found. */
const char *FUN_002e039c(s32 kind, f32 x, f32 z)
{
    MapSaveBlock *work = gameGetMapBlock();
    MapCollisionAuxTable *table = &DAT_004be698;
    s32 i;

    for (i = 0; i < table->count; i++) {
        MapCollisionAuxRegion *zone = &table->regions[i];
        if (zone->area == kind || kind == MAP_ZONE_KIND_ANY_A || kind == MAP_ZONE_KIND_ANY_B) {
            if (zone->minimum.x <= x && z >= zone->minimum.z && zone->maximum.x >= x && z <= zone->maximum.z) {
                work->currentZone = i;
                return zone->label;
            }
        }
    }
    return table->regions[work->currentZone].label;
}

} /* extern "C" */
