/* NON_MATCHING: endpoint load hoisting and floating-point register scheduling differ from retail. */
#include "common.h"
#include <math.h>

struct SegmentPoint {
    f32 x;
    f32 y;
};

struct SegmentStyle {
    u8 unk00[0xa4];
    u8 rightFacing; /* 0xa4 */
};

extern "C" {
extern void *g_renderCtx;
void FUN_0016c4b8(void *context, s32 mode);
void FUN_0034111c(u32 colorA, u32 colorB, f32 x0, f32 y0, f32 x1, f32 y1, f32 alpha, f32 scale);

// Draw two joined segments with the elbow offset toward the facing side.
void drawFacingElbowSegments(const SegmentStyle *style, const SegmentPoint *start,
                  const SegmentPoint *end, u32 color, s32 transparency)
{
    FUN_0016c4b8(g_renderCtx, 0);
    f32 x = end->x;
    f32 y = end->y;
    f32 offsetX = 0.0f;
    f32 offsetY = 0.0f;
    if (style->rightFacing) {
        x -= 16.0f;
        if (fabsf(x - start->x) < 1.0f) {
            x = start->x;
        }
        if (fabsf(y - start->y) - fabsf(x - start->x) < 0.0f) {
            x = fabsf(y - start->y) + start->x;
            offsetX = -0.5f;
        }
    } else {
        x += 16.0f;
        if (fabsf(x - start->x) < 1.0f) {
            x = start->x;
        }
        if (fabsf(y - start->y) - fabsf(x - start->x) < 0.0f) {
            x = start->x - fabsf(y - start->y);
            offsetX = 0.5f;
        }
    }
    SegmentPoint adjustedElbow = {offsetX + x, offsetY + y};
    FUN_0034111c(color, color, start->x, start->y, x, y,
                 (256 - transparency) * (1.0f / 256.0f), 1.0f);
    FUN_0034111c(color, color, adjustedElbow.x, adjustedElbow.y, end->x, end->y,
                 (256 - transparency) * (1.0f / 256.0f), 1.0f);
}
}
