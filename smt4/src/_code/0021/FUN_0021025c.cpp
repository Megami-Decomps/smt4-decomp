/* NON_MATCHING: The rectangle arrays use different stack placement and saved-register allocation in the edge loop. */
#include "common.h"

namespace { struct Point2 { f32 x, y; }; }
extern "C" {
void FUN_00263028(u32 first, u32 second, f32 x0, f32 y0, f32 x1, f32 y1, f32 value0, f32 value1);

/* Emits the four edges of a rectangle, closing both its positions and endpoint values. */
void FUN_0021025c(u32 first, u32 second, u32 third, u32 fourth, f32 x, f32 y, f32 width, f32 height, f32 value0, f32 value1)
{
    u32 values[5] = {first, second, third, fourth, first};
    Point2 points[5] = {{x, y}, {x, y + height}, {x + width, y + height}, {x + width, y}, {x, y}};
    for (s32 i = 0; i < 4; ++i) {
        FUN_00263028(values[i], values[i + 1], points[i].x, points[i].y, points[i + 1].x, points[i + 1].y, value0, value1);
    }
}
}
