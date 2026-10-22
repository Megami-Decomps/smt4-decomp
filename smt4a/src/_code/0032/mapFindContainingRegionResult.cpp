#include "common.h"
#include <stddef.h>

struct SpatialTableRegion {
    s8 id;
    u8 unk01;
    u8 kind;
    u8 unk03;
    s16 minimumX;
    u16 unk06;
    s16 minimumY;
    s16 maximumX;
    s16 maximumY;
    u8 unk0E[4];
    s16 resultIndex;
};
typedef char SpatialTableRegionOffsets[offsetof(SpatialTableRegion, minimumX) == 4 &&
    offsetof(SpatialTableRegion, minimumY) == 8 && offsetof(SpatialTableRegion, resultIndex) == 0x12 ? 1 : -1];

extern "C" {
s32 dataTable2CType0Count(void);
const SpatialTableRegion* dataTable2CGetEntry(s32 index);
void* dataTable2CType2GetEntry(s32 index);

// Find a kind-six region containing the point and resolve its result-table entry.
void* mapFindContainingRegionResult(s32 id, f32 x, f32 y)
{
    for (s32 i = 0; i < dataTable2CType0Count(); ++i) {
        const SpatialTableRegion* region = dataTable2CGetEntry(i);
        if (region->id == -1) {
            return NULL;
        }
        if (region->kind == 6 && region->id == id &&
            region->minimumX <= x && region->minimumY <= y &&
            region->maximumX >= x && region->maximumY >= y) {
            return dataTable2CType2GetEntry(region->resultIndex);
        }
    }
    return NULL;
}
}
