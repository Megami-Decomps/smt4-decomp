#include "gfx/StereoParallax.h"
/* NON_MATCHING: 50 lines off: in the slide block retail gives the vertical offset r7 and the step pointer r6 (swapped here) and loads 40.743664f after the first product; the first draw-state set matches only through renderStackSetCounted, the second differs in its scratch registers */
#include "common.h"
#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"
#include "shard/TextureDrawCall.h"
#include "util/BitsAndBytes.h"
#include "ui/UiSpriteApi.h"

/* unit-local: the panel with seven sprites (the header, the body frame and the cards); no other user known. */
struct CardPanel {
    /* 0x000 */ u8 unk000[0x20];
    /* 0x020 */ UiSpriteState sprites[7];
    /* 0x3F4 */ u8 unk3f4[4];
    /* 0x3F8 */ s32 mode;          /* 7 = slide-in animation */
    /* 0x3FC */ u8 unk3fc[4];
    /* 0x400 */ s8 showHeader;
    /* 0x401 */ s8 showCards;
    /* 0x402 */ u8 unk402[2];
    /* 0x404 */ s32 slideStep;
};

extern "C" {

void efctSetSpeed(f32 speed);
f32 phaseSine(f32 angle);
void pairSetHalves(void* sprite, s16 first, s16 second);
void effectRenderTransformedInstance(void* sprite, f32 offset);
void uiStoreTextureEntryCenter(void* sprite, s32 a, s32 index);
void FUN_0036b63c(void* sprite, s32 arg);

/* Draws the panel: header and body frames, then the four cards (sliding in when mode is 7). */
void FUN_003b21a4(CardPanel* panel)
{
    renderCtxCalculateStereoParallax(g_renderCtx, 0.29f);
    s32 shift = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.29f);
    if (panel->showHeader != 0) {
        f32 headerAlpha = vec2GetSpeed(&panel->sprites[0]);
        if (headerAlpha > 0.0f) {
            efctSetSpeed(headerAlpha);
            texDrawTableEntryAtStoredOrigin(2, 12, 1000, shift, 0, 31);
            f32 bodyAlpha = vec2GetSpeed(&panel->sprites[2]);
            if (bodyAlpha > 0.0f) {
                efctSetSpeed(bodyAlpha);
                renderCtxSetStackTop(g_renderCtx, RENDER_STACK_B, packNibblesAndByte(6, 1, 0));
                texDrawTableEntryAtStoredOrigin(2, 12, 0x3e9, shift, 0, 36);
                renderCtxSetStackTop(g_renderCtx, RENDER_STACK_B, packNibblesAndByte(6, 7, 0));
            }
            efctSetSpeed(1.0f);
        }
    }

    s32 x = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.8f);
    if (panel->showCards == 0) return;

    s32 offsetX = 0;
    s32 offsetY = 0;
    if (panel->mode == 7) {
        f32 angle = (f32)(10 - panel->slideStep) * 1.5707964f * 0.1f * 40.743664f;
        f32 slide = (1.0f - phaseSine(angle)) * 8.0f;
        slide = (panel->slideStep & 1) != 0 ? -slide : slide;
        if (((panel->slideStep / 4) & 1) != 0) {
            offsetY = (s32)slide;
        } else {
            offsetX = (s32)slide;
        }
        spriteSetVisible(&panel->sprites[0], 0);
        spriteSetVisible(&panel->sprites[1], 0);
        spriteSetVisible(&panel->sprites[6], 0);
        spriteSetVisible(&panel->sprites[3], 0);
        pairSetHalves(&panel->sprites[0], (s16)offsetY, (s16)offsetX);
        pairSetHalves(&panel->sprites[1], (s16)offsetY, (s16)offsetX);
        pairSetHalves(&panel->sprites[6], (s16)offsetY, (s16)offsetX);
        pairSetHalves(&panel->sprites[3], (s16)offsetY, (s16)offsetX);
    }
    effectRenderTransformedInstance(&panel->sprites[0], (f32)x);
    uiStoreTextureEntryCenter(&panel->sprites[0], 12, 41);
    spriteSetVisible(&panel->sprites[0], 1);
    effectRenderTransformedInstance(&panel->sprites[3], (f32)x);
    uiStoreTextureEntryCenter(&panel->sprites[3], 12, 45);
    spriteSetVisible(&panel->sprites[3], 1);
    effectRenderTransformedInstance(&panel->sprites[1], (f32)x);
    uiStoreTextureEntryCenter(&panel->sprites[1], 12, 43);
    spriteSetVisible(&panel->sprites[1], 1);
    effectRenderTransformedInstance(&panel->sprites[6], (f32)x);
    uiStoreTextureEntryCenter(&panel->sprites[6], 12, 41);
    FUN_0036b63c(&panel->sprites[6], 1);
}

} /* extern "C" */
