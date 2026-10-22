#include "common.h"

#define MAP_ZONE_MAX 144
#define MAP_ZONE_KIND_ANY_A 0
#define MAP_ZONE_KIND_ANY_B 99

/* A map zone: an axis-aligned box, the value it yields and its kind. */
typedef struct MapZone {
    /* 0x00 */ f32 min[3];
    /* 0x0C */ f32 max[3];
    /* 0x18 */ u32 value;
    /* 0x1C */ s32 kind;
} MapZone;

typedef struct MapZoneTable {
    /* 0x0000 */ MapZone zones[MAP_ZONE_MAX];
    /* 0x1200 */ s32 count;
} MapZoneTable;

/* The map work block as the zone lookup sees it: the last zone found at 0xD58. */
typedef struct MapZoneWork {
    /* 0x000 */ u8 unk000[0xD58];
    /* 0xD58 */ s16 currentZone;
} MapZoneWork;

extern "C" {

extern MapZoneTable DAT_004be698;

MapZoneWork *gameGetMapBlock(void);

/* Returns the value of the first zone of the given kind (0 or 99: any kind) whose box contains
 * (x, z) on the ground plane and remembers it; falls back to the last zone found. */
u32 FUN_002e039c(s32 kind, f32 x, f32 z)
{
    MapZoneWork *work = gameGetMapBlock();
    MapZoneTable *table = &DAT_004be698;
    s32 i;

    for (i = 0; i < table->count; i++) {
        MapZone *zone = &table->zones[i];
        if (zone->kind == kind || kind == MAP_ZONE_KIND_ANY_A || kind == MAP_ZONE_KIND_ANY_B) {
            if (zone->min[0] <= x && z >= zone->min[2] && zone->max[0] >= x && z <= zone->max[2]) {
                work->currentZone = i;
                return zone->value;
            }
        }
    }
    return table->zones[work->currentZone].value;
}

} /* extern "C" */
