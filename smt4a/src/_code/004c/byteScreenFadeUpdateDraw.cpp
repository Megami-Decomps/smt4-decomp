#include "ui/ByteScreenFade.h"
#include "gfx/ColoredQuad.h"
#include "camp/RenderCtxA.h"

extern "C" {

// Advances the screen fade by one frame and draws its overlay; does nothing while it is idle.
void byteScreenFadeUpdateDraw(ByteScreenFade* fade)
{
    if (fade->mode == 0) {
        return;
    }
    s32 duration = fade->duration;
    if (duration < 1) {
        duration = 1;
    }
    u32 baseColor = 0;
    if (fade->mode == 1) {
        if (fade->frame > 0) {
            --fade->frame;
        } else {
            fade->flags &= ~1;
            return;
        }
    } else if (fade->mode == 2) {
        if (fade->frame < duration) {
            ++fade->frame;
        } else {
            fade->flags &= ~1;
        }
        switch (fade->palette) {
        case 0:
            break;
        case 1:
            baseColor = 0xFFFFFF00;
            break;
        }
    }
    f32 alphaScale = 255.0f / (f32)duration;
    s16 alpha = (s16)((f32)fade->frame * alphaScale);
    u32 color = baseColor + (u8)alpha;
    renderCtxSelectTexture(g_renderCtx, 0);
    f32 height = 240.0f;
    f32 width = 400.0f;
    if (fade->screen == 1) {
        width = 320.0f;
    }
    gxSubmitDrawZeroExtraParams(0.0f, 0.0f, width, height, color, color, color, 0.0f, color);
}
}
