#include "gfx/StereoParallax.h"
/* NON_MATCHING: readable rewrite from retail disassembly compiles (206 vs 199 rows); retail keeps the panel base and parallax values in more callee-saved registers and shares the draw-state ring updates differently */
#include "common.h"
#include "shard/TextureDrawCall.h"
#include "util/BitsAndBytes.h"
#include "ui/UiSpriteApi.h"

struct DrawRing {
    s32 index;              // 0x00
    s32 unk04;
    s32 slots[4];           // 0x08
    u8 dirty;               // 0x18
    u8 unk19[3];
    void (*flush)(s32 state);   // 0x1c
};

struct RenderCtx {
    u8 unk0000[0x12b8];
    DrawRing ring;          // 0x12b8
};

// Panel with seven sprites: the header, the body frame and the cards.
struct CardPanel {
    u8 unk000[0x20];
    UiSpriteState sprites[7];   // 0x20
    u8 unk3f4[4];
    s32 mode;                   // 0x3f8: 7 = slide-in animation
    u8 unk3fc[4];
    u8 showHeader;              // 0x400
    u8 showCards;               // 0x401
    u8 unk402[2];
    s32 slideStep;              // 0x404
};

extern "C" {

extern RenderCtx* g_renderCtx;

void efctSetSpeed(f32 speed);
f32 FUN_001a1ee0(f32 angle);
void pairSetHalves(void* sprite, s16 first, s16 second);
void effectRenderTransformedInstance(void* sprite, f32 offset);
void uiStoreTextureEntryCenter(void* sprite, s32 a, s32 index);
void FUN_0036b63c(void* sprite, s32 arg);

static void setDrawState(s32 value)
{
    DrawRing* ring = &g_renderCtx->ring;
    s32 previous = ring->slots[ring->index];
    ring->slots[ring->index] = value;
    if (ring->dirty != 0 || previous != value) {
        ring->flush(value);
        ring->dirty = 0;
    }
}

// Draws the panel: header and body frames, then the four cards (sliding in when mode is 7).
void FUN_003b21a4(CardPanel* panel)
{
    renderCtxCalculateStereoParallax(g_renderCtx, 0.29f);
    s32 shift = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.29f);
    if (panel->showHeader != 0) {
        f32 headerAlpha = vec2GetSpeed(&panel->sprites[0]);
        if (headerAlpha > 1.0f) {
            efctSetSpeed(headerAlpha);
            texDrawTableEntryAtStoredOrigin(2, 12, 1000, shift, 0, 31);
            f32 bodyAlpha = vec2GetSpeed(&panel->sprites[2]);
            if (bodyAlpha > 1.0f) {
                efctSetSpeed(bodyAlpha);
                setDrawState(packNibblesAndByte(6, 1, 0));
                texDrawTableEntryAtStoredOrigin(2, 12, 0x3e9, shift, 0, 36);
                setDrawState(packNibblesAndByte(6, 7, 0));
            }
            efctSetSpeed(1.0f);
        }
    }

    s32 x = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.29f);
    if (panel->showCards == 0) return;

    s32 offsetX = 0;
    s32 offsetY = 0;
    if (panel->mode == 7) {
        f32 angle = (f32)(10 - panel->slideStep) * 1.5707964f * 0.1f * 40.743664f;
        f32 slide = (1.0f - FUN_001a1ee0(angle)) * 8.0f;
        if ((panel->slideStep & 1) != 0) slide = -slide;
        if ((panel->slideStep & 4) != 0) {
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
