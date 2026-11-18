#include "map/MapIfGlobals.h"
#include "shard/W6_W6Match1_PositionedStream.h"

extern "C" {

// Mark the first nearby map-interface record in one of the interactive categories.
void mapIfMarkNearbyInteractiveRecord(MapVector position)
{
    MapIfStateA *map = g_mapIf.state;
    for (s32 index = 0; index < 128; ++index) {
        MapIfRecord *entry = &map->records[index];
        if (entry->active == 0) {
            continue;
        }
        s32 category = entry->category;
        if (category == 0x1D || category == 0x31 || category == 0x1E ||
            category == 0x1F || category == 0x30 || category == 0x22 || category == 0x23) {
            union {
                f32 value;
                s32 bits;
            } distance;
            distance.value = distSpatial(position, entry->position);
            if (distance.bits < 0x41200000) {
                entry->state = 20;
                return;
            }
        }
    }
}
}
