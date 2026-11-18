#ifndef SMT4_MAP_COLLISION_PLACEMENT_H
#define SMT4_MAP_COLLISION_PLACEMENT_H
#include "common.h"
#include <stddef.h>

/* Mutable 20-byte placement rows shared by table 0x2c sections 0 and 3. */
struct MapCollisionPlacementRecord {
    s8 map, area;
    s8 kind;
    s8 flag;
    s16 x, y, z, width, depth, yaw, pitch;
    s16 tag;
};
typedef char MapCollisionPlacementLayoutCheck[
    sizeof(MapCollisionPlacementRecord) == 0x14 &&
    offsetof(MapCollisionPlacementRecord, kind) == 2 &&
    offsetof(MapCollisionPlacementRecord, flag) == 3 &&
    offsetof(MapCollisionPlacementRecord, pitch) == 0x10 &&
    offsetof(MapCollisionPlacementRecord, tag) == 0x12 ? 1 : -1];

extern "C" {
/* Unsigned bounds check; null when the index is out of range. */
MapCollisionPlacementRecord *dataTable2cSub0GetRecord(u32 index);
MapCollisionPlacementRecord *dataTable2cSub3GetRecord(u32 index);
}
#endif
