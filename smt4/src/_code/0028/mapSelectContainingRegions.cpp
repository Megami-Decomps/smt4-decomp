#include "game/GameState.h"
#include "map/SelectionRegion.h"
#include "util/MathFunctions.h"
#include "util/VectorMath.h"

extern "C" SelectionRegionsIV DAT_004c14a0;

/* Selects the last containing region independently for the primary and secondary overrides. */
extern "C" void mapSelectContainingRegions(f32 x, f32 z)
{
    SelectionRegionsIV *regions = &DAT_004c14a0;
    GameState *overrides = &g_gameState;
    overrides->overrideKinds[0] = -1;
    overrides->overrideKinds[2] = -1;
    for (s32 index = 0; index < regions->count; ++index) {
        nw::math::VEC3 point;
        point.x = x;
        point.y = 0.0f;
        point.z = z;
        SelectionRegionQuad *region = &regions->regions[index];
        bool inside = true;
        for (s32 side = 0; side < 4; ++side) {
            nw::math::VEC3 normal;
            nw::math::VEC3 direction;
            switch (side) {
            case 0:
                normal = region->planes[0].normal;
                vec3DirectionBetween(&direction, region->planes[0].origin, point);
                break;
            case 1:
                normal = region->planes[1].normal;
                vec3DirectionBetween(&direction, region->planes[1].origin, point);
                break;
            case 2:
                normal = region->planes[2].normal;
                vec3DirectionBetween(&direction, region->planes[2].origin, point);
                break;
            case 3:
                normal = region->planes[3].normal;
                vec3DirectionBetween(&direction, region->planes[3].origin, point);
                break;
            }
            if (mathVec3Dot(normal.x, normal.y, normal.z, direction.x, direction.y, direction.z) < 0.0f) {
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
