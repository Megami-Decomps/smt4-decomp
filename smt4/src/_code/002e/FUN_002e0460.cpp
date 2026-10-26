/* NON_MATCHING: palette and rectangle global-base register allocation differ. */
#include "camp/RenderCtx.h"
struct DebugFloorRectangle {
    f32 x, y, z;
    f32 oppositeX, oppositeY, oppositeZ;
    u32 unk18;
};
struct DebugFloorRectangles {
    DebugFloorRectangle rectangles[256];
    s32 count;
};
struct DebugRectanglePalette { u32 colors[12]; };
struct DebugDrawingConstants {
    u8 unk00[0x30];
    DebugRectanglePalette floorColors;
};
typedef char DebugFloorRectangleLayoutCheck[(sizeof(DebugFloorRectangle) == 0x1C && offsetof(DebugFloorRectangles, count) == 0x1C00) ? 1 : -1];
extern "C" {
extern DebugFloorRectangles DAT_004bf89c;
extern DebugDrawingConstants DAT_0040490c;
extern RenderCtx *g_titleScene;
s32 FUN_002c5d80(u32 mode, u32 flags);
void FUN_00296dc4(u32 firstColor, u32 secondColor, u32 thirdColor, u32 fourthColor,
                 f32 firstX, f32 firstY, f32 firstZ, f32 secondX, f32 secondY, f32 secondZ,
                 f32 thirdX, f32 thirdY, f32 thirdZ, f32 fourthX, f32 fourthY, f32 fourthZ);

void FUN_002e0460(f32 height)
{
    DebugRectanglePalette palette = DAT_0040490c.floorColors;
    if (DAT_004bf89c.count) {
        RenderCtx *context = g_titleScene;
        s32 state = FUN_002c5d80(5, 1);
        renderStackPush(&context->stackA, state);
        renderCtxSelectTexture(g_titleScene, 0);
        for (s32 i = 0; i < DAT_004bf89c.count; ++i) {
            const DebugFloorRectangle &rectangle = DAT_004bf89c.rectangles[i];
            u32 color = palette.colors[i % 12] | 0x70;
            f32 y = height + 100.0f;
            FUN_00296dc4(color, color, color, color,
                         rectangle.x, y, rectangle.z, rectangle.x, y, rectangle.oppositeZ,
                         rectangle.oppositeX, y, rectangle.z, rectangle.oppositeX, y, rectangle.oppositeZ);
        }
        renderStackPop(&g_titleScene->stackA);
    }
}
}
