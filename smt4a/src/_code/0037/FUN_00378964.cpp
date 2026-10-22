/* NON_MATCHING: saved vector copy order and loop-index/entry core registers differ. */
#include "map/mapIf.h"
#include "shard/S1Mover.h"

extern "C" {
extern MapIfGlobalsA g_mapIf;
f32 distSpatial(Vec3f first, Vec3f second);

// Mark the first nearby map-interface record in one of the interactive categories.
void FUN_00378964(Vec3f position)
{
    MapIfStateA *map = g_mapIf.state;
    for (s32 index = 0; index < 128; ++index) {
        MapIfRecord *entry = &map->records[index];
        if (entry->active == 0) {
            continue;
        }
        s32 category = entry->display.category;
        if (category == 0x1D || category == 0x31 || category == 0x1E ||
            category == 0x1F || category == 0x30 || category == 0x22 || category == 0x23) {
            union {
                f32 value;
                s32 bits;
            } distance;
            Vec3f point = {entry->position.x, entry->position.y, entry->position.z};
            distance.value = distSpatial(position, point);
            if (distance.bits < 0x41200000) {
                entry->state = 20;
                return;
            }
        }
    }
}
}
