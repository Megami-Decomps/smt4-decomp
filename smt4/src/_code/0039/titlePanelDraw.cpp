#include "camp/RenderCtx.h"
#include "shard/TextureDrawCall.h"

// The panel's effect state (observed fields).
struct TitlePanelEffect {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ f32 speed;
};

// A title-scene panel (observed fields).
struct TitlePanel {
    /* 0x000 */ u8 unk000[0x20];
    /* 0x020 */ s8 frame;
    /* 0x021 */ u8 unk021[7];
    /* 0x028 */ u8 highlighted;     // draws the highlighted frame variant
    /* 0x029 */ u8 compact;         // draws the single combined element instead of two
    /* 0x02A */ u8 unk02a[0x7a];
    /* 0x0A4 */ s32 elementX;
    /* 0x0A8 */ u8 unk0a8[4];
    /* 0x0AC */ s32 frameX;
    /* 0x0B0 */ u8 unk0b0[0x6e4];
    /* 0x794 */ TitlePanelEffect effect;
};

extern "C" {

extern RenderCtx *g_titleScene;

void FUN_002c39a4(RenderCtx *context);
void FUN_002bed3c(void);
void efctSetSpeed(f32 speed);
f32 vec2GetSpeed(const void *vector);
s32 FUN_002c5d80(u32 first, u32 second);
s32 packNibblesAndByte(u32 first, u32 second, u32 third);
void FUN_002c1b64(RenderCtx *context, s32 value);
void FUN_002bf380(s32 layer, s32 group, s32 id, s32 x, s32 y, s32 size);
void FUN_00397db0(TitlePanel *panel, u8 frame, f32 speed);
void FUN_002c198c(RenderCtx *context);
void FUN_002c18e4(RenderCtx *context);

// Draws the panel: its frame and its one or two elements, then the animated body at the panel's frame.
void titlePanelDraw(TitlePanel *panel)
{
    FUN_002c39a4(g_titleScene);
    FUN_002bed3c();
    renderCtxPushA(g_titleScene, FUN_002c5d80(1, 0));
    FUN_002c1b64(g_titleScene, 0);
    f32 speed = vec2GetSpeed(&panel->effect);
    efctSetSpeed(speed);
    FUN_002bf380(2, 0x2e, 0, panel->frameX, 0, 0xb);
    renderCtxSetB(g_titleScene, packNibblesAndByte(6, 1, 0));
    if (panel->compact != 0) {
        FUN_002bf288(2, 0x2e, 0x3f, panel->elementX, 0, 0xb);
    } else {
        FUN_002bf288(2, 0x2e, 0x3d, panel->elementX, 0, 0xb);
        FUN_002bf288(2, 0x2e, 0x3e, panel->elementX, 0, 0xb);
    }
    renderCtxSetB(g_titleScene, packNibblesAndByte(6, 7, 0));
    s8 frame = panel->frame;
    if (panel->highlighted != 0) {
        frame = frame + 4;
    }
    FUN_00397db0(panel, frame, speed);
    efctSetSpeed(1.0f);
    renderStackPop(&g_titleScene->stackA);
    FUN_002c198c(g_titleScene);
    FUN_002c18e4(g_titleScene);
}

}
