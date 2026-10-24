/* NON_MATCHING: readable rewrite from retail disassembly compiles (206 vs 184 rows); retail keeps the panel base and parallax values in more callee-saved registers and shares the draw-state ring updates differently */
#include "common.h"

struct DrawRing {
    s32 index;              // 0x00
    s32 unk04;
    s32 slots[4];           // 0x08
    u8 dirty;               // 0x18
    u8 unk19[3];
    void (*flush)(void);    // 0x1c
};

struct RenderCtx {
    u8 unk0000[0x12b8];
    DrawRing ring;          // 0x12b8
};

// UI sprite header: only the alpha and the visibility byte are touched here.
struct UiSprite {
    u8 unk00[0x20];
    f32 alpha;              // 0x20
    u8 unk24[0x18];
    u8 visible;             // 0x3c
};

// Panel with four card sprites (offsets of the sprites inside the panel are kept as constants).
struct CardPanel {
    u8 unk000[0x3f8];
    s32 mode;                   // 0x3f8: 7 = slide-in animation
    u8 unk3fc[4];
    u8 showHeader;              // 0x400
    u8 showCards;               // 0x401
    u8 unk402[2];
    s32 slideStep;              // 0x404
};

extern "C" {

extern RenderCtx* g_renderCtx;

f32 renderCtxCalculateStereoParallax(RenderCtx* ctx, f32 depth);
void efctSetSpeed(f32 speed);
void FUN_001835b4(s32 layer, s32 group, s32 index, s32 x, s32 y, s32 z);
s32 packNibblesAndByte(u32 a, u32 b, u32 c);
f32 FUN_001a1ee0(f32 angle);
void pairSetHalves(void* sprite, s16 first, s16 second);
void FUN_001634b4(void* sprite, f32 offset);
void FUN_00387240(void* sprite, s32 a, s32 index);
void FUN_0036b63c(void* sprite, s32 arg);

static void setDrawState(s32 value)
{
    DrawRing* ring = &g_renderCtx->ring;
    s32 previous = ring->slots[ring->index];
    ring->slots[ring->index] = value;
    if (ring->dirty != 0 || previous != value) {
        ring->flush();
        ring->dirty = 0;
    }
}

#define PANEL_SPRITE(panel, offset) (reinterpret_cast<UiSprite*>(reinterpret_cast<u8*>(panel) + (offset)))

// Draws the panel: header and body frames, then the four cards (sliding in when mode is 7).
void FUN_003b21a4(CardPanel* panel)
{
    renderCtxCalculateStereoParallax(g_renderCtx, 0.29f);
    s32 shift = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.29f);
    if (panel->showHeader != 0 && PANEL_SPRITE(panel, 0x20)->alpha > 1.0f) {
        efctSetSpeed(PANEL_SPRITE(panel, 0x20)->alpha);
        FUN_001835b4(2, 12, 1000, shift, 0, 31);
        if (PANEL_SPRITE(panel, 0x138)->alpha > 1.0f) {
            efctSetSpeed(PANEL_SPRITE(panel, 0x138)->alpha);
            setDrawState(packNibblesAndByte(6, 1, 0));
            FUN_001835b4(2, 12, 0x3e9, shift, 0, 36);
            setDrawState(packNibblesAndByte(6, 7, 0));
        }
        efctSetSpeed(1.0f);
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
        PANEL_SPRITE(panel, 0x20)->visible = 0;
        PANEL_SPRITE(panel, 0xac)->visible = 0;
        PANEL_SPRITE(panel, 0x368)->visible = 0;
        PANEL_SPRITE(panel, 0x1c4)->visible = 0;
        pairSetHalves(PANEL_SPRITE(panel, 0x20), (s16)offsetY, (s16)offsetX);
        pairSetHalves(PANEL_SPRITE(panel, 0xac), (s16)offsetY, (s16)offsetX);
        pairSetHalves(PANEL_SPRITE(panel, 0x368), (s16)offsetY, (s16)offsetX);
        pairSetHalves(PANEL_SPRITE(panel, 0x1c4), (s16)offsetY, (s16)offsetX);
    }
    FUN_001634b4(PANEL_SPRITE(panel, 0x20), (f32)x);
    FUN_00387240(PANEL_SPRITE(panel, 0x20), 12, 41);
    PANEL_SPRITE(panel, 0x20)->visible = 1;
    FUN_001634b4(PANEL_SPRITE(panel, 0x1c4), (f32)x);
    FUN_00387240(PANEL_SPRITE(panel, 0x1c4), 12, 45);
    PANEL_SPRITE(panel, 0x1c4)->visible = 1;
    FUN_001634b4(PANEL_SPRITE(panel, 0xac), (f32)x);
    FUN_00387240(PANEL_SPRITE(panel, 0xac), 12, 43);
    PANEL_SPRITE(panel, 0xac)->visible = 1;
    FUN_001634b4(PANEL_SPRITE(panel, 0x368), (f32)x);
    FUN_00387240(PANEL_SPRITE(panel, 0x368), 12, 41);
    FUN_0036b63c(PANEL_SPRITE(panel, 0x368), 1);
}

} /* extern "C" */
