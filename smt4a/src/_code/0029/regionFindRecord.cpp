/* NON_MATCHING: compiler anchors the literal at the count field rather than the region-array base. */
#include "shard/W5_W5Match2_RegionTable.h"
extern "C" {
extern RegionTable DAT_00613178;
/* Find the first matching region that contains the supplied point. */
s32 regionFindRecord(s32 kind, f32 x, f32 y)
{
    for (s32 index = 0; index < DAT_00613178.count; ++index) {
        const RegionRecord *region = &DAT_00613178.regions[index];
        if ((region->kind == kind || kind == 0) && region->minX <= x && y >= region->minY && region->maxX >= x && y <= region->maxY) {
            return region->result;
        }
    }
    return -1;
}
}
