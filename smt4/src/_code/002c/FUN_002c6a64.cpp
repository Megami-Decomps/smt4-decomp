/* NON_MATCHING: title logo draw; retail reaches the element scales through element pointers (add r0,r4,#32/#312) and keeps 0 in r9 plus a base r7=this+0x200; built folds the offsets (4 rows shorter), everything else matches */
#include "battle/BattleCommandMenu.h"
#include "camp/RenderCtx.h"
#include "shard/W6_W6Match8_TitleOverlay.h"

/* The title logo: four effect elements and the flags that enable its two draw passes. */
struct TitleLogo {
    /* 0x000 */ u8 unk000[0x20];
    /* 0x020 */ TitleDrawElement elements[4];
    /* 0x250 */ u8 unk250[0xC];
    /* 0x25C */ u8 drawGlow;
    /* 0x25D */ u8 drawLayers;
};

extern "C" {
extern RenderCtx *g_titleScene;

f32 renderCtxCalculateStereoParallax(RenderCtx *context, f32 scale);
void effectRenderTransformedInstance(TitleDrawElement *element, f32 value);
void efctSetSpeed(f32 speed);
void FUN_002bf288(u32 layer, u32 bank, u32 sprite, s32 x, s32 y, u32 flags);
s32 packNibblesAndByte(u32 high, u32 low, u32 byte);

#define TITLE_LOGO_STEREO_SCALE 0.29f
#define BATTLE_FLAG_HIDE_LOGO_FRAME 0x200

/* Draws the title logo: the frame element, then (when enabled) the glow sprites and the three
 * layered elements under their own render state. */
void FUN_002c6a64(TitleLogo *logo)
{
    s32 frame = (s32)renderCtxCalculateStereoParallax(g_titleScene, TITLE_LOGO_STEREO_SCALE);
    if ((btlGetMainState()->flags & BATTLE_FLAG_HIDE_LOGO_FRAME) == 0)
        effectRenderTransformedInstance(&logo->elements[3], (f32)frame);

    frame = (s32)renderCtxCalculateStereoParallax(g_titleScene, TITLE_LOGO_STEREO_SCALE);
    if (logo->drawGlow != 0) {
        f32 first = logo->elements[0].scale;
        if (first > 0.0f) {
            efctSetSpeed(first);
            FUN_002bf288(2, 0x14, 1000, frame, 0, 0x1F);
            f32 third = logo->elements[2].scale;
            if (third > 0.0f) {
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
        renderCtxSetB(g_titleScene, packNibblesAndByte(6, 1, 0));
        effectRenderTransformedInstance(&logo->elements[2], (f32)frame);
        renderCtxSetB(g_titleScene, packNibblesAndByte(6, 7, 0));
        effectRenderTransformedInstance(&logo->elements[1], (f32)frame);
    }
}

} /* extern "C" */
