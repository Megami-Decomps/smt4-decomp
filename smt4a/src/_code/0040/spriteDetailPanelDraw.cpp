#include "ui/UiSpriteApi.h"
#include "gfx/StereoParallax.h"
#include "camp/RenderCtxA.h"
/* NON_MATCHING: the panel and title X still use swapped saved registers, changing later register assignment. */
#include "shard/S1ListPanel.h"
#include "shard/TextureDrawCall.h"
#include "shard/SpriteDetailPanel.h"

extern "C" {
void efctSetSpeed(f32 speed);
void FUN_004045ac(SpriteDetailPanel* panel, s32 x, s32 y, f32 speed);
void FUN_00402ab8(SpriteDetailPanel* panel, s32 x, s32 y, f32 speed);
void uiDrawStereoListScrollBar(SpriteDetailPanel* panel, s32 x, s32 y, f32 speed);
void FUN_00404a8c(SpriteDetailPanel* panel, s32 x, s32 y, f32 speed);
void drawSpriteDetailPanelClipped(SpriteDetailPanel* panel, s32 x, s32 y, f32 speed);

/* Draws the panel's title, frame sprites and detail area. */
void spriteDetailPanelDraw(SpriteDetailPanel *panel)
{
    s32 i;
    const s32 titleX = vec2GetXInt(&panel->positions[0]);
    const s32 titleY = vec2GetYInt(&panel->positions[0]);
    FUN_004045ac(panel, titleX, titleY, vec2GetSpeed(&panel->positions[0]));
    if (panel->stage < 4) {
        return;
    }
    const s32 x = vec2GetXInt(&panel->positions[1]);
    const s32 y = vec2GetYInt(&panel->positions[1]);
    const f32 speed = vec2GetSpeed(&panel->positions[1]);
    const s32 parallax = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.26f);
    efctSetSpeed(speed);
    texDrawTableEntryAtStoredOrigin(2, 0x32, 11, x + parallax, y, 0x65);
    for (i = 0; i < 4; ++i) {
        texDrawTableEntryAtStoredOrigin(2, 0x32, i + 14, x + parallax, y, 0x65);
    }
    efctSetSpeed(1.0f);
    const s32 detailX = vec2GetXInt(&panel->positions[2]) + x;
    const s32 detailY = vec2GetYInt(&panel->positions[2]) + y;
    const f32 detailSpeed = vec2GetSpeed(&panel->positions[2]) * speed;
    if (panel->mode == 0) {
        efctSetSpeed(detailSpeed);
        const s32 detailParallax = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.26f);
        for (i = 0; i < 3; ++i) {
            texDrawTableEntryAtStoredOrigin(2, 0x32, i + 6, x + detailParallax, y, 0xc9);
        }
        efctSetSpeed(1.0f);
        FUN_00402ab8(panel, detailX, detailY, detailSpeed);
        uiDrawStereoListScrollBar(panel, x, y, detailSpeed);
    } else if (panel->mode == 1) {
        drawSpriteDetailPanelClipped(panel, detailX, detailY, detailSpeed);
    }
    FUN_00404a8c(panel, x, y, speed);
}
} /* extern "C" */
