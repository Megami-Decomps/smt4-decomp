/* NON_MATCHING: per-plane VFP argument setup and region-table/count literal anchoring differ. */
#include "map/SelectionRegion.h"

extern "C" {
extern SelectionRegions DAT_00614d7c;
extern GameStateA g_gameState;
void FUN_003250ac(MapVector *direction, MapVector origin, MapVector target);
f32 mathVec3Dot(MapVector left, MapVector right);

/* Find the last containing primary and secondary regions for a point on the map. */
void FUN_00327ee8(f32 x, f32 z)
{
    /* The second signed override is inside the shared opaque range. */
    struct RegionOverrides {
        u8 unk00[0x33];
        s8 primary;
        u8 unk34;
        s8 secondary;
    };
    typedef char RegionOverrideOffsets[
        offsetof(RegionOverrides, primary) == 0x33 &&
        offsetof(RegionOverrides, secondary) == 0x35 ? 1 : -1];
    RegionOverrides *overrides = (RegionOverrides *)&g_gameState;
    overrides->primary = -1;
    overrides->secondary = -1;
    for (s32 i = 0; i < DAT_00614d7c.count; ++i) {
        SelectionRegionQuad *region = &DAT_00614d7c.regions[i];
        bool inside = true;
        for (s32 side = 0; side < 4; ++side) {
            MapVector normal;
            MapVector point = {x, 0.0f, z};
            MapVector direction;
            switch (side) {
            case 0:
                normal = region->planes[0].normal;
                FUN_003250ac(&direction, region->planes[0].origin, point);
                break;
            case 1:
                normal = region->planes[1].normal;
                FUN_003250ac(&direction, region->planes[1].origin, point);
                break;
            case 2:
                normal = region->planes[2].normal;
                FUN_003250ac(&direction, region->planes[2].origin, point);
                break;
            case 3:
                normal = region->planes[3].normal;
                FUN_003250ac(&direction, region->planes[3].origin, point);
                break;
            }
            if (mathVec3Dot(normal, direction) < 0.0f) {
                inside = false;
                break;
            }
        }
        if (inside) {
            if (region->secondary == 0)
                overrides->primary = region->kind;
            else
                overrides->secondary = region->kind;
        }
    }
}
}
