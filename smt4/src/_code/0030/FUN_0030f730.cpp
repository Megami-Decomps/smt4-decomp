#include "camp/RenderCtx.h"

namespace {
struct BoundsOverlayPalette { u32 colors[12]; };
struct BoundsPaletteStorage {
    u8 prefix[0x90];
    BoundsOverlayPalette palette;
};
struct OverlayBounds {
    f32 minimum[3];
    f32 maximum[3];
    u32 flags;
};
struct OverlayBoundsList {
    OverlayBounds bounds[128];
    s32 count;
};
}
extern "C" {
extern const BoundsPaletteStorage DAT_0040490c;
extern OverlayBoundsList DAT_004c2424;
extern RenderCtx *g_titleScene;
u32 FUN_002c5d80(u32 mode, u32 option);
void FUN_00296dc4(u32 color0, u32 color1, u32 color2, u32 color3,
    f32 x0, f32 y0, f32 z0, f32 x1, f32 y1, f32 z1,
    f32 x2, f32 y2, f32 z2, f32 x3, f32 y3, f32 z3);

// Draw the registered diagnostic bounds as translucent quads on an elevated horizontal plane.
void FUN_0030f730(f32 height)
{
    BoundsOverlayPalette palette = DAT_0040490c.palette;
    OverlayBoundsList *list = &DAT_004c2424;
    if (list->count != 0) {
        RenderCtx *context = g_titleScene;
        u32 state = FUN_002c5d80(5, 1);
        renderStackPush(&context->stackA, state);
        renderCtxSelectTexture(g_titleScene, 0);
        s32 index = 0;
        if (list->count > 0) {
            height += 100.0f;
            for (; index < list->count; ++index) {
                const OverlayBounds *bounds = &list->bounds[index];
                f32 minimumX = bounds->minimum[0];
                f32 minimumZ = bounds->minimum[2];
                f32 maximumZ = bounds->maximum[2];
                f32 maximumX = bounds->maximum[0];
                u32 color = palette.colors[index % 12] | 0x70;
                FUN_00296dc4(color, color, color, color,
                    minimumX, height, minimumZ,
                    minimumX, height, maximumZ,
                    maximumX, height, minimumZ,
                    maximumX, height, maximumZ);
            }
        }
        renderStackPop(&g_titleScene->stackA);
    }
}
}
