/* NON_MATCHING: loop body and frame now match; retail materialises the segment count (4) in r7 only after building the arrays (using r7 as the sp+32 temporary first), this build sets it at entry and uses ip. */
#include "common.h"

namespace { struct Point2 { f32 x, y; }; }
extern "C" {
void FUN_00263028(u32 first, u32 second, f32 x0, f32 y0, f32 x1, f32 y1, f32 value0, f32 value1);

/* Emits `count` segments joining consecutive points (and their values). */
static __inline void drawPolyline(const u32 *values, const Point2 *points, s32 count, f32 value0, f32 value1)
{
    for (s32 i = 0; i < count; ++i) {
        const Point2 *from = &points[i];
        FUN_00263028(values[i], values[i + 1], from[0].x, from[0].y, from[1].x, from[1].y, value0, value1);
    }
}

/* Emits the four edges of a rectangle, closing both its positions and endpoint values. */
void FUN_0021025c(u32 first, u32 second, u32 third, u32 fourth, f32 x, f32 y, f32 width, f32 height, f32 value0, f32 value1)
{
    u32 values[5] = {first, second, third, fourth, first};
    Point2 points[5] = {{x, y}, {x, y + height}, {x + width, y + height}, {x + width, y}, {x, y}};
    drawPolyline(values, points, 4, value0, value1);
}
}
