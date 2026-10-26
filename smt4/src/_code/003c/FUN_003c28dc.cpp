/* NON_MATCHING: mode/baseColor temporaries swap r1/r2 (retail mode in r2), the float divisor lands in s0 not s2, and the 240.0f/320.0f pool loads are scheduled differently. */
#include "ui/ByteScreenFade.h"
#include "camp/RenderCtx.h"

extern "C" {
extern RenderCtx* g_titleScene;
void FUN_002c0944(u32 color0, u32 color1, u32 color2, u32 color3,
                  f32 x, f32 y, f32 width, f32 height, f32 depth);

// Advances the screen fade by one frame and draws its overlay; does nothing while it is idle.
void FUN_003c28dc(ByteScreenFade* fade)
{
    u32 mode = fade->mode;
    if (mode == 0) {
        return;
    }
    s32 duration = fade->duration;
    if (duration < 1) {
        duration = 1;
    }
    u32 baseColor = 0;
    if (mode == 1) {
        if (fade->frame > 0) {
            --fade->frame;
        } else {
            fade->flags &= ~1;
            return;
        }
    } else if (mode == 2) {
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
    renderCtxSelectTexture(g_titleScene, 0);
    f32 width = 400.0f;
    if (fade->screen == 1) {
        width = 320.0f;
    }
    FUN_002c0944(color, color, color, color, 0.0f, 0.0f, width, 240.0f, 0.0f);
}
}
