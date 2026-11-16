#include "camp/RenderCtx.h"

namespace {
struct FloorOverlayPalette { u32 colors[12]; };
struct FloorPaletteStorage {
    u8 prefix[0x30];
    FloorOverlayPalette palette;
};
struct FloorRectangle {
    f32 minimum[3];
    f32 maximum[3];
    u32 flags;
};
struct FloorRectangleList {
    FloorRectangle rectangles[256];
    s32 count;
};
typedef char FloorRectangleLayoutCheck[(sizeof(FloorRectangle) == 0x1C && offsetof(FloorRectangleList, count) == 0x1C00) ? 1 : -1];
}
extern "C" {
extern const FloorPaletteStorage DAT_0040490c;
extern FloorRectangleList DAT_004bf89c;
extern RenderCtx *g_titleScene;
u32 FUN_002c5d80(u32 mode, u32 option);
void FUN_00296dc4(u32 color0, u32 color1, u32 color2, u32 color3,
    f32 x0, f32 y0, f32 z0, f32 x1, f32 y1, f32 z1,
    f32 x2, f32 y2, f32 z2, f32 x3, f32 y3, f32 z3);

// Draw the registered diagnostic floor rectangles as translucent quads on an elevated horizontal plane.
void FUN_002e0460(f32 height)
{
    FloorOverlayPalette palette = DAT_0040490c.palette;
    FloorRectangleList *list = &DAT_004bf89c;
    if (list->count != 0) {
        RenderCtx *context = g_titleScene;
        u32 state = FUN_002c5d80(5, 1);
        renderStackPush(&context->stackA, state);
        renderCtxSelectTexture(g_titleScene, 0);
        s32 index = 0;
        if (list->count > 0) {
            height += 100.0f;
            for (; index < list->count; ++index) {
                const FloorRectangle *rectangle = &list->rectangles[index];
                f32 minimumX = rectangle->minimum[0];
                f32 minimumZ = rectangle->minimum[2];
                f32 maximumZ = rectangle->maximum[2];
                f32 maximumX = rectangle->maximum[0];
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
