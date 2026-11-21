#include "shard/W6_W6Match3_EffectColor.h"
#include "camp/RenderCtxA.h"
#include "camp/RenderCtx.h"
#include "gfx/ColoredQuad.h"

extern "C" {

// Draw a solid-color rectangle, converting packed ARGB into normalized channels.
void gfxDrawSolidRectangle(s32 left, s32 top, s32 right, s32 bottom, u32 color)
{
    EffectColor channels;
    channels.red = 1.0f;
    channels.green = 1.0f;
    channels.blue = 1.0f;
    channels.alpha = 1.0f;
    renderCtxSelectTexture(g_renderCtx, 0);
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
    gfxDrawQuadFourColors((f32)left, (f32)top, (f32)(right - left), (f32)(bottom - top), &channels, &channels, &channels, &channels, 0.0f);
}
}
