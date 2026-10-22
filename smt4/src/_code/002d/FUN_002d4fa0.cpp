/* NON_MATCHING: The compiler copies the zero-offset region-array base and exchanges the table/count registers. */
#include "map/RegionBounds.h"
extern "C" {
extern RegionBoundsTable DAT_004c2424;

// Tests inclusive X/Z bounds; kind zero accepts every region kind.
u32 FUN_002d4fa0(u32 kind, f32 x, f32 z)
{
    for (s32 index = 0; index < DAT_004c2424.count; ++index) {
        const RegionBounds* region = &DAT_004c2424.regions[index];
        if ((region->kind == kind || kind == 0) &&
            region->minimumX <= x && z >= region->minimumZ &&
            region->maximumX >= x && z <= region->maximumZ) {
            return 1;
        }
    }
    return 0;
}
}
