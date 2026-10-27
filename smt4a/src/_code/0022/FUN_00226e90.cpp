/* NON_MATCHING: float minimum/maximum accumulators and loop loads occupy different VFP registers. */
#include "shard/S1Mover.h"

extern "C" {
// Project a triangle or quad onto the plane perpendicular to the selected axis and find its bounds.
void FUN_00226e90(s32 axis, s32 count, f32 *minimum, f32 *maximum,
                  Vec3f first, Vec3f second, Vec3f third, Vec3f fourth)
{
    s32 i;
    Vec3f points[4];
    points[0] = first;
    points[1] = second;
    points[2] = third;
    if (count == 4)
        points[3] = fourth;
    if (axis == 0) {
        f32 minY = points[0].y, minZ = points[0].z;
        f32 maxY = minY, maxZ = minZ;
        for (i = 1; i < count; ++i) {
            if (points[i].y < minY) minY = points[i].y;
            if (points[i].z < minZ) minZ = points[i].z;
            if (maxY < points[i].y) maxY = points[i].y;
            if (maxZ < points[i].z) maxZ = points[i].z;
        }
        minimum[0] = minY;
        minimum[1] = minZ;
        maximum[0] = maxY;
        maximum[1] = maxZ;
    } else if (axis == 1) {
        f32 minX = points[0].x, minZ = points[0].z;
        f32 maxX = minX, maxZ = minZ;
        for (s32 i = 1; i < count; ++i) {
            if (points[i].x < minX) minX = points[i].x;
            if (points[i].z < minZ) minZ = points[i].z;
            if (maxX < points[i].x) maxX = points[i].x;
            if (maxZ < points[i].z) maxZ = points[i].z;
        }
        minimum[0] = minX;
        minimum[1] = minZ;
        maximum[0] = maxX;
        maximum[1] = maxZ;
    } else if (axis == 2) {
        f32 minX = points[0].x, minY = points[0].y;
        f32 maxX = minX, maxY = minY;
        for (s32 i = 1; i < count; ++i) {
            if (points[i].x < minX) minX = points[i].x;
            if (points[i].y < minY) minY = points[i].y;
            if (maxX < points[i].x) maxX = points[i].x;
            if (maxY < points[i].y) maxY = points[i].y;
        }
        minimum[0] = minX;
        minimum[1] = minY;
        maximum[0] = maxX;
        maximum[1] = maxY;
    }
}
}
