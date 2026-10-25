#include "battle/BattleCommandMenu.h"
#include "shard/TextureDrawCall.h"
#include "camp/RenderCtx.h"
#include "shard/W6_W6Match8_TitleOverlay.h"

/* The title logo: four effect elements and the flags that enable its two draw passes. */
struct TitleLogo {
    /* 0x000 */ u8 unk000[0x20];
    /* 0x020 */ TitleDrawElement elements[4];
    /* 0x250 */ u8 unk250[0xC];
    /* 0x25C */ s8 drawGlow;
    /* 0x25D */ s8 drawLayers;
};

extern "C" {
extern RenderCtx *g_titleScene;

f32 renderCtxCalculateStereoParallax(RenderCtx *context, f32 scale);
void effectRenderTransformedInstance(TitleDrawElement *element, f32 value);
void efctSetSpeed(f32 speed);
f32 vec2GetSpeed(const void *element);
s32 packNibblesAndByte(u32 high, u32 low, u32 byte);

#define TITLE_LOGO_STEREO_SCALE 0.29f
#define BATTLE_FLAG_HIDE_LOGO_FRAME 0x200

/* Draws the title logo: the frame element, then (when enabled) the glow sprites and the three
 * layered elements under their own render state. */
void titleDrawLogo(TitleLogo *logo)
{
    s32 frame = (s32)renderCtxCalculateStereoParallax(g_titleScene, TITLE_LOGO_STEREO_SCALE);
    if ((btlGetMainState()->flags & BATTLE_FLAG_HIDE_LOGO_FRAME) == 0)
        effectRenderTransformedInstance(&logo->elements[3], (f32)frame);

    frame = (s32)renderCtxCalculateStereoParallax(g_titleScene, TITLE_LOGO_STEREO_SCALE);
    if (logo->drawGlow != 0) {
        const f32 minimumScale = 0.0f;
        f32 first = vec2GetSpeed(&logo->elements[0]);
        if (first > minimumScale) {
            efctSetSpeed(first);
            FUN_002bf288(2, 0x14, 1000, frame, 0, 0x1F);
            f32 third = vec2GetSpeed(&logo->elements[2]);
            if (third > minimumScale) {
                efctSetSpeed(third);
                renderCtxSetB(g_titleScene, packNibblesAndByte(6, 1, 0));
                FUN_002bf288(2, 0x14, 0x3E9, frame, 0, 0x24);
                renderCtxSetB(g_titleScene, packNibblesAndByte(6, 7, 0));
            }
            efctSetSpeed(1.0f);
        }
    }
    if (logo->drawLayers != 0) {
        effectRenderTransformedInstance(&logo->elements[0], (f32)frame);
        RenderCtx *context = g_titleScene;
        renderCtxSetB(context, packNibblesAndByte(6, 1, 0));
        effectRenderTransformedInstance(&logo->elements[2], (f32)frame);
        context = g_titleScene;
        renderCtxSetB(context, packNibblesAndByte(6, 7, 0));
        effectRenderTransformedInstance(&logo->elements[1], (f32)frame);
    }
}

} /* extern "C" */
