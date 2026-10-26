#include "map/RegionBounds.h"
extern "C" {
extern RegionBoundsTable DAT_006160e0;

// Tests inclusive X/Z bounds; kind zero accepts every region kind.
u32 FUN_0033f8a4(u32 kind, f32 x, f32 z)
{
    const RegionBoundsTable *table = &DAT_006160e0;
    for (s32 index = 0; index < table->count; ++index) {
        const RegionBounds* region = &table->regions[index];
        if ((region->kind == kind || kind == 0) &&
            region->minimumX <= x && z >= region->minimumZ &&
            region->maximumX >= x && z <= region->maximumZ) {
            return 1;
        }
    }
    return 0;
}
}
