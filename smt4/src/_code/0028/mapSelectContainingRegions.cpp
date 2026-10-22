/* NON_MATCHING: input/zero VFP allocation saves d8-d10 rather than d8-d11, and the region-table base is reloaded; a lower optimization level may preserve retail's live ranges. */
#include "shard/W5_W5Match7_SceneState.h"

struct RegionEdge {
    MapVector origin;
    MapVector normal;
};

struct MapRegion {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u16 kind;
    /* 0x1a */ u16 id;
    /* 0x1c */ RegionEdge edgeA, edgeB, edgeC, edgeD;
};

struct MapRegionTable {
    MapRegion regions[32];
    /* 0xf80 */ s32 count;
};

struct RegionPoint {
    f32 x, z;
};

extern "C" {
extern MapRegionTable DAT_004c14a0;
void FUN_0025247c(f32 *out, f32 fromX, f32 fromY, f32 fromZ, f32 toX, f32 toY, f32 toZ);
f32 mathVec3Dot(f32 x, f32 y, f32 z, f32 otherX, f32 otherY, f32 otherZ);

// Select the containing map region independently for ordinary and alternate kinds.
void mapSelectContainingRegions(RegionPoint point)
{
    g_gameState.overrideKinds[0] = -1;
    g_gameState.overrideKinds[2] = -1;
    for (s32 index = 0; index < DAT_004c14a0.count; ++index) {
        MapRegion *region = &DAT_004c14a0.regions[index];
        MapVector direction;
        MapVector normal;
        for (s32 edge = 0; edge < 4; ++edge) {
            switch (edge) {
            case 0:
                normal = region->edgeA.normal;
                FUN_0025247c(&direction.x, region->edgeA.origin.x, region->edgeA.origin.y, region->edgeA.origin.z, point.x, 0.0f, point.z);
                break;
            case 1:
                normal = region->edgeB.normal;
                FUN_0025247c(&direction.x, region->edgeB.origin.x, region->edgeB.origin.y, region->edgeB.origin.z, point.x, 0.0f, point.z);
                break;
            case 2:
                normal = region->edgeC.normal;
                FUN_0025247c(&direction.x, region->edgeC.origin.x, region->edgeC.origin.y, region->edgeC.origin.z, point.x, 0.0f, point.z);
                break;
            case 3:
                normal = region->edgeD.normal;
                FUN_0025247c(&direction.x, region->edgeD.origin.x, region->edgeD.origin.y, region->edgeD.origin.z, point.x, 0.0f, point.z);
                break;
            }
            if (mathVec3Dot(normal.x, normal.y, normal.z, direction.x, direction.y, direction.z) < 0.0f) {
                goto nextRegion;
            }
        }
        if (region->kind == 0) {
            g_gameState.overrideKinds[0] = region->id;
        } else {
            g_gameState.overrideKinds[2] = region->id;
        }
    nextRegion:
        ;
    }
}
}
