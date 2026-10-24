/* NON_MATCHING: instructions, constants and frame match; only the callee-saved register assignment differs (retail keeps the panel in r5 and the title x in r6, so the later x/y/detail values rotate with it; this build puts the panel in r6 and the title x in r5). */
#include "shard/S1ListPanel.h"
#include "shard/SpriteDetailPanel.h"

extern "C" {
extern RenderCtx* g_renderCtx;
s32 vec2GetXInt(const void* position);
s32 vec2GetYInt(const void* position);
f32 vec2GetSpeed(const void* position);
f32 renderCtxCalculateStereoParallax(RenderCtx* context, f32 depth);
void efctSetSpeed(f32 speed);
void FUN_001835b4(s32 layer, u32 group, s32 sprite, s32 x, s32 y, s32 priority);
void FUN_004045ac(SpriteDetailPanel* panel, s32 x, s32 y, f32 speed);
void FUN_00402ab8(SpriteDetailPanel* panel, s32 x, s32 y, f32 speed);
void FUN_004042fc(SpriteDetailPanel* panel, s32 x, s32 y, f32 speed);
void FUN_00404a8c(SpriteDetailPanel* panel, s32 x, s32 y, f32 speed);
void drawSpriteDetailPanelClipped(SpriteDetailPanel* panel, s32 x, s32 y, f32 speed);

// Draws the sprite detail panel: its title, the frame sprites at the panel position and the detail
// area (either the clipped detail panel or the frame's own detail sprites).
void FUN_004058b0(SpriteDetailPanel* panel)
{
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
    FUN_001835b4(2, 0x32, 11, x + parallax, y, 0x65);
    for (s32 i = 0; i < 4; ++i) {
        FUN_001835b4(2, 0x32, i + 14, x + parallax, y, 0x65);
    }
    efctSetSpeed(1.0f);
    const s32 detailX = vec2GetXInt(&panel->positions[2]) + x;
    const s32 detailY = vec2GetYInt(&panel->positions[2]) + y;
    const f32 detailSpeed = vec2GetSpeed(&panel->positions[2]) * speed;
    if (panel->mode == 0) {
        efctSetSpeed(detailSpeed);
        const s32 detailParallax = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.26f);
        for (s32 i = 0; i < 3; ++i) {
            FUN_001835b4(2, 0x32, i + 6, x + detailParallax, y, 0xc9);
        }
        efctSetSpeed(1.0f);
        FUN_00402ab8(panel, detailX, detailY, detailSpeed);
        FUN_004042fc(panel, x, y, detailSpeed);
    } else if (panel->mode == 1) {
        drawSpriteDetailPanelClipped(panel, detailX, detailY, detailSpeed);
    }
    FUN_00404a8c(panel, x, y, speed);
}
}
