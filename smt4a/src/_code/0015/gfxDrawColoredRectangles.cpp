#include "shard/W6_W6Match3_EffectColor.h"
#include "camp/RenderCtxA.h"
#include "gfx/ColoredQuad.h"

struct ColoredRectangle {
    f32 left;
    f32 top;
    f32 right;
    f32 bottom;
    u32 color;
};

extern "C" {

/* Draw inclusive-coordinate rectangles, unpacking each packed RGBA color. */
void gfxDrawColoredRectangles(const ColoredRectangle *rectangles, u32 count)
{
    for (u32 i = 0; i < count; ++i) {
        EffectColor color;
        effectColorSet(&color, 1.0f, 1.0f, 1.0f, 1.0f);
        u32 packed = rectangles[i].color;
        for (s32 channel = 0; channel < 4; ++channel) {
            f32 value = (f32)(packed & 0xff) * 0.003921569f;
            switch (channel) {
            case 0: color.alpha = value; break;
            case 1: color.blue = value; break;
            case 2: color.green = value; break;
            case 3: color.red = value; break;
            }
            packed >>= 8;
        }
        renderCtxSelectTexture(g_renderCtx, 0);
        f32 x = rectangles[i].left;
        f32 y = rectangles[i].top;
        f32 width = rectangles[i].right - rectangles[i].left;
        if (0.0f <= width)
            width += 1.0f;
        else
            width -= 1.0f;
        f32 height = rectangles[i].bottom - rectangles[i].top;
        if (height >= 0.0f)
            height += 1.0f;
        else
            height -= 1.0f;
        gfxDrawQuadFourColors(x, y, width, height, &color, &color, &color, &color, 0.0f);
    }
}
}
