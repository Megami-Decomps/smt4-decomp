#ifndef SMT4_MAP_ZONE_LABELS_H
#define SMT4_MAP_ZONE_LABELS_H
#include "common.h"
#include "shard/W6_W6Match6_CollisionQuad.h"

/* Each ground-plane zone retains a label from table 0x2c section 2. */
struct MapCollisionAuxRegion {
    CollisionVector minimum, maximum;
    const char *label;
    s32 area;
};
struct MapCollisionAuxTable {
    MapCollisionAuxRegion regions[144];
    s32 count;
};
typedef char MapCollisionAuxLayoutCheck[
    sizeof(MapCollisionAuxRegion) == 0x20 &&
    offsetof(MapCollisionAuxRegion, label) == 0x18 &&
    offsetof(MapCollisionAuxTable, count) == 0x1200 ? 1 : -1];

extern "C" {
/* Fixed-stride 32-byte string slots; null when the index is out of range. */
const char *dataTable2cSub2GetRecord(u32 index);
const char *FUN_002e039c(s32 area, f32 x, f32 z);
}
#endif
