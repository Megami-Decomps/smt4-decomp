/* NON_MATCHING: frame-load hoisting, palette-test lowering, and quad argument/VFP allocation differ. */
#include "ui/ByteScreenFade.h"

extern "C" {
extern void* g_titleScene;
void FUN_002c1b64(void* context, u32 target);
void FUN_002c0944(u32 color0, u32 color1, u32 color2, u32 color3,
                  f32 x, f32 y, f32 width, f32 height, f32 depth);

void FUN_003c28e8(ByteScreenFade* fade, u32, u32 mode)
{
    s32 duration = fade->duration;
    if (duration < 1) {
        duration = 1;
    }
    u32 baseColor = 0;
    switch (mode) {
    case 1:
        if (fade->frame > 0) {
            --fade->frame;
        } else {
            fade->flags &= ~1;
            return;
        }
        break;
    case 2:
        if (fade->frame < duration) {
            ++fade->frame;
        } else {
            fade->flags &= ~1;
        }
        if (fade->palette == 1) {
            baseColor = 0xFFFFFF00;
        }
        break;
    }
    f32 alphaScale = 255.0f / (f32)duration;
    s16 alpha = (s16)((f32)fade->frame * alphaScale);
    u32 color = baseColor + (u8)alpha;
    FUN_002c1b64(g_titleScene, 0);
    f32 width = 400.0f;
    if (fade->screen == 1) {
        width = 320.0f;
    }
    FUN_002c0944(color, color, color, color, 0.0f, 0.0f, width, 240.0f, 0.0f);
}
}
