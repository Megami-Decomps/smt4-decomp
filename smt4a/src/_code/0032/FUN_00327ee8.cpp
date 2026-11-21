/* NON_MATCHING: retail reaches the region count (0x6160dc, its own global in FUN_002de124) from the region table's address as a file static (anchor DAT_00614d7c + 0x1000 here), which moves the saved registers; x and the zero swap VFP registers. */
#include "map/SelectionRegion.h"
#include "game/GameStateA.h"

extern "C" {
extern SelectionRegions DAT_00614d7c;
void FUN_003250ac(MapVector *direction, MapVector origin, MapVector target);
f32 mathVec3Dot(MapVector left, MapVector right);

/* Find the last containing primary and secondary regions for a point on the map. */
void FUN_00327ee8(f32 x, f32 z)
{
    MapVector point;
    point.x = x;
    point.y = 0.0f;
    point.z = z;
    /* The second signed override is inside the shared opaque range. */
    GameStateA *overrides = &g_gameState;
    overrides->overrideKinds[0] = -1;
    overrides->overrideKinds[2] = -1;
    for (s32 i = 0; i < DAT_00614d7c.count; ++i) {
        SelectionRegionQuad *region = &DAT_00614d7c.regions[i];
        bool inside = true;
        for (s32 side = 0; side < 4; ++side) {
            MapVector normal;
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
                overrides->overrideKinds[0] = region->kind;
            else
                overrides->overrideKinds[2] = region->kind;
        }
    }
}
}
