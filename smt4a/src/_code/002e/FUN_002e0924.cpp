/* NON_MATCHING: the edge is passed as one 4-float aggregate (single vldm, like retail); retail keeps the loop bound 4 in r7 (push {r4-r7,lr}, 60-byte frame), ours compares against the constant. */
#include "common.h"

#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {
struct Edge {
    Point2 start, end;
};
void FUN_0032c810(u32 first, u32 second, Edge edge, f32 value0, f32 value1);

/* Emits the four edges of a rectangle, closing both its positions and endpoint values. */
void FUN_002e0924(u32 first, u32 second, u32 third, u32 fourth, f32 x, f32 y, f32 width, f32 height, f32 value0, f32 value1)
{
    u32 values[5] = {first, second, third, fourth, first};
    Point2 points[5] = {{x, y}, {x, y + height}, {x + width, y + height}, {x + width, y}, {x, y}};
    for (s32 i = 0; i < 4; ++i) {
        FUN_0032c810(values[i], values[i + 1], *reinterpret_cast<const Edge *>(&points[i]), value0, value1);
    }
}
}
