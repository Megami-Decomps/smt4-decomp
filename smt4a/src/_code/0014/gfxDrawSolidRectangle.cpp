#include "shard/W6_W6Match3_EffectColor.h"

extern "C" {
extern void *g_renderCtx;
void FUN_0016c4b8(void *context, s32 mode);
void FUN_00167618(const EffectColor *topLeft, const EffectColor *topRight,
                  const EffectColor *bottomLeft, const EffectColor *bottomRight,
                  f32 x, f32 y, f32 width, f32 height, f32 depth);

// Draw a solid-color rectangle, converting packed ARGB into normalized channels.
void gfxDrawSolidRectangle(s32 left, s32 top, s32 right, s32 bottom, u32 color)
{
    EffectColor channels;
    channels.red = 1.0f;
    channels.green = 1.0f;
    channels.blue = 1.0f;
    channels.alpha = 1.0f;
    FUN_0016c4b8(g_renderCtx, 0);
    for (s32 channel = 0; channel < 4; ++channel) {
        f32 value = (color & 255) * 0.003921569f;
        switch (channel) {
        case 0: channels.alpha = value; break;
        case 1: channels.blue = value; break;
        case 2: channels.green = value; break;
        case 3: channels.red = value; break;
        }
        color >>= 8;
    }
    FUN_00167618(&channels, &channels, &channels, &channels,
                  (f32)left, (f32)top, (f32)(right - left), (f32)(bottom - top), 0.0f);
}
}
