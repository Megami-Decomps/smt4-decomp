/* NON_MATCHING: rectangle semantics restored; float-register scheduling and color initialization order differ. */
#include "shard/W6_W6Match3_EffectColor.h"

struct ColoredRectangle {
    f32 left;
    f32 top;
    f32 right;
    f32 bottom;
    u32 color;
};

extern "C" {
extern u32 g_titleScene;
void FUN_002c1b64(u32 scene, s32 mode);
void FUN_002b76d0(const EffectColor *topLeft, const EffectColor *topRight,
                  const EffectColor *bottomLeft, const EffectColor *bottomRight,
                  f32 x, f32 y, f32 width, f32 height, f32 depth);

/* Draw inclusive-coordinate rectangles, unpacking each packed RGBA color. */
void FUN_00118c38(const ColoredRectangle *rectangles, u32 count)
{
    for (u32 i = 0; i < count; ++i) {
        EffectColor color;
        color.red = 1.0f;
        color.green = 1.0f;
        color.blue = 1.0f;
        color.alpha = 1.0f;
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
        FUN_002c1b64(g_titleScene, 0);
        f32 x = rectangles[i].left;
        f32 y = rectangles[i].top;
        f32 width = rectangles[i].right - x;
        if (0.0f <= width)
            width += 1.0f;
        else
            width -= 1.0f;
        f32 height = rectangles[i].bottom - y;
        if (height >= 0.0f)
            height += 1.0f;
        else
            height -= 1.0f;
        FUN_002b76d0(&color, &color, &color, &color,
                      x, y, width, height, 0.0f);
    }
}
}
