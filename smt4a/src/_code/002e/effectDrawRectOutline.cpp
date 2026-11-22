#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {
void FUN_0032c810(u32 first, u32 second, f32 x0, f32 y0, f32 x1, f32 y1, f32 value0, f32 value1);

/* Emits the segments joining consecutive points of a polyline of `pointCount` points (and their values); the
 * projected circle fan (effectDrawProjectedCircleFan) draws its rim the same way. */
static __inline void drawPolyline(const Point2 *points, const u32 *values, s32 pointCount, f32 value0, f32 value1)
{
    for (s32 i = 0; i < pointCount - 1; ++i) {
        const Point2 *from = &points[i];
        FUN_0032c810(values[i], values[i + 1], from[0].x, from[0].y, from[1].x, from[1].y, value0, value1);
    }
}

/* Emits the four edges of a rectangle, closing both its positions and endpoint values. */
void effectDrawRectOutline(u32 first, u32 second, u32 third, u32 fourth, f32 x, f32 y, f32 width, f32 height, f32 value0, f32 value1)
{
    u32 values[5] = {first, second, third, fourth, first};
    Point2 points[5] = {{x, y}, {x, y + height}, {x + width, y + height}, {x + width, y}, {x, y}};
    drawPolyline(points, values, 5, value0, value1);
}
}
