#include "camp/RenderCtx.h"
#include "shard/TextureDrawCall.h"
#include "camp/RenderCtxTitle.h"
#include "ui/UiSpriteApi.h"

// The panel's effect state (observed fields).
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
    /* 0x794 */ UiSpriteState effect;
};

extern "C" {


void gxResetColorQuadToWhite(void);
void efctSetSpeed(f32 speed);
s32 packNibblesAndByte(u32 first, u32 second, u32 third);
void texDrawCompositeSprite(s32 layer, s32 group, s32 id, s32 x, s32 y, s32 size);
void FUN_00397db0(TitlePanel *panel, u8 frame, f32 speed);
void renderCtxResetColorScale(RenderCtx *context);

// Draws the panel: its frame and its one or two elements, then the animated body at the panel's frame.
void titlePanelDraw(TitlePanel *panel)
{
    renderCtxSelectStereoLayout(g_titleScene);
    gxResetColorQuadToWhite();
    renderCtxPushA(g_titleScene, renderCtxPackPassFlags(1, 0));
    renderCtxSelectTexture(g_titleScene, 0);
    f32 speed = vec2GetSpeed(&panel->effect);
    efctSetSpeed(speed);
    texDrawCompositeSprite(2, 0x2e, 0, panel->frameX, 0, 0xb);
    renderCtxSetB(g_titleScene, packNibblesAndByte(6, 1, 0));
    if (panel->compact != 0) {
        texDrawTableEntryAtStoredOrigin(2, 0x2e, 0x3f, panel->elementX, 0, 0xb);
    } else {
        texDrawTableEntryAtStoredOrigin(2, 0x2e, 0x3d, panel->elementX, 0, 0xb);
        texDrawTableEntryAtStoredOrigin(2, 0x2e, 0x3e, panel->elementX, 0, 0xb);
    }
    renderCtxSetB(g_titleScene, packNibblesAndByte(6, 7, 0));
    s8 frame = panel->frame;
    if (panel->highlighted != 0) {
        frame = frame + 4;
    }
    FUN_00397db0(panel, frame, speed);
    efctSetSpeed(1.0f);
    renderStackPop(g_titleScene->stacks + RENDER_STACK_A);
    renderCtxApplyTransforms(g_titleScene);
    renderCtxResetColorScale(g_titleScene);
}

}
