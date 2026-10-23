/* NON_MATCHING: palette-copy registers, render-state push scheduling and bounds-registry base caching differ. */
#include "camp/RenderCtx.h"
#include <string.h>

struct DebugBoundsRecord { f32 minimum[3], maximum[3]; u32 id; };
struct DebugBoundsRegistry { DebugBoundsRecord entries[128]; s32 count; };
struct DebugBoundsPalette { u8 prefix[0x90]; u32 colors[12]; };
extern "C" {
extern DebugBoundsRegistry DAT_006160e0;
extern const DebugBoundsPalette DAT_00532240;
extern RenderCtxA *g_renderCtx;
s32 FUN_001692ac(s32 mode, s32 enabled);
void FUN_0016c4b8(RenderCtxA *context, s32 mode);
void FUN_00280a08(f32 x0, f32 y0, f32 z0, f32 x1, f32 y1, f32 z1,
    f32 x2, f32 y2, f32 z2, f32 x3, f32 y3, f32 z3,
    u32 firstColor, u32 secondColor, u32 thirdColor, u32 fourthColor);

void FUN_003a3400(f32 height)
{
    u32 colors[12];
    memcpy(colors, DAT_00532240.colors, sizeof(colors));
    if (DAT_006160e0.count != 0) {
        RenderCtxA *context = g_renderCtx;
        renderStackPush(&context->stackA, FUN_001692ac(5, 1));
        FUN_0016c4b8(g_renderCtx, 0);
        if (DAT_006160e0.count > 0) {
            height += 100.0f;
            for (s32 index = 0; index < DAT_006160e0.count; ++index) {
                const DebugBoundsRecord *bounds = &DAT_006160e0.entries[index];
                u32 color = colors[index % 12] | 0x70;
                FUN_00280a08(bounds->minimum[0], height, bounds->minimum[2],
                    bounds->minimum[0], height, bounds->maximum[2],
                    bounds->maximum[0], height, bounds->minimum[2],
                    bounds->maximum[0], height, bounds->maximum[2], color, color, color, color);
            }
        }
        renderStackPop(&g_renderCtx->stackA);
    }
}
}
