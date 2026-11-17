/* NON_MATCHING: pool order now matches; only `vmov.f32 s1, s0` is scheduled before `mov r2, r3` (retail after). */
#include "ui/ByteScreenFade.h"
#include "camp/RenderCtxA.h"

extern "C" {
void gxSubmitDrawZeroExtraParams(u32 color0, u32 color1, u32 color2, u32 color3,
                  f32 x, f32 y, f32 width, f32 height, f32 depth);

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
    gxSubmitDrawZeroExtraParams(color, color, color, color, 0.0f, 0.0f, width, height, 0.0f);
}
}
