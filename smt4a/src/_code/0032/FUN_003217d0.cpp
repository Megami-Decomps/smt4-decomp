#include "common.h"
#include "shard/TextureDrawCall.h"
#include "gfx/StereoParallax.h"
#include "camp/RenderCtx.h"
#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match8_TitleOverlay.h"
#include "util/BitsAndBytes.h"
#include <stddef.h>

/* The panel's draw switches. */
struct ResultPanelFlags {
    /* 0x0 */ s8 drawGlow;
    /* 0x1 */ s8 drawLayers;
    /* 0x2 */ u8 unk2;
    /* 0x3 */ u8 skip;   /* hands the draw to FUN_003b21a4 instead */
};

/* The battle result panel: six effect elements and the flags that enable its two draw passes. */
struct ResultPanel {
    /* 0x000 */ u8 unk000[0x20];
    /* 0x020 */ TitleDrawElement elements[6];
    /* 0x368 */ u8 unk368[0x98];
    /* 0x400 */ ResultPanelFlags flags;
};
typedef char ResultPanelOffsets[offsetof(ResultPanel, flags.drawGlow) == 0x400 &&
    offsetof(ResultPanel, flags.skip) == 0x403 ? 1 : -1];

extern "C" {

extern RenderCtxA *g_renderCtx;
extern u64 DAT_0057a9b0; /* battle state flags that hide the panel's frame */

void FUN_001634b4(TitleDrawElement *element, f32 offset);
void efctSetSpeed(f32 speed);
f32 vec2GetSpeed(const void *element);
void FUN_003b21a4(ResultPanel *panel);

#define RESULT_PANEL_STEREO_SCALE 0.29f

/* Draws the result panel: the frame element, then (when enabled) the glow sprites and the three
 * layered elements under their own render state, shifted by the stereo parallax. */
void FUN_003217d0(ResultPanel *panel)
{
    ResultPanelFlags *flags = &panel->flags;
    if (flags->skip != 0) {
        FUN_003b21a4(panel);
        return;
    }
    s32 frame = (s32)renderCtxCalculateStereoParallax(g_renderCtx, RESULT_PANEL_STEREO_SCALE);
    BtlMainStateA *battle = btlGetMainState();
    if ((battle->stateFlags64.bits & DAT_0057a9b0) == 0)
        FUN_001634b4(&panel->elements[5], (f32)frame);

    frame = (s32)renderCtxCalculateStereoParallax(g_renderCtx, RESULT_PANEL_STEREO_SCALE);
    if (flags->drawGlow != 0) {
        const f32 minimumScale = 0.0f;
        f32 first = vec2GetSpeed(&panel->elements[0]);
        if (first > minimumScale) {
            efctSetSpeed(first);
            FUN_001835b4(2, 12, 1000, frame, 0, 0x1F);
            f32 third = vec2GetSpeed(&panel->elements[2]);
            if (third > minimumScale) {
                efctSetSpeed(third);
                renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 1, 0));
                FUN_001835b4(2, 12, 0x3E9, frame, 0, 0x24);
                renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 7, 0));
            }
            efctSetSpeed(1.0f);
        }
    }
    if (flags->drawLayers != 0) {
        FUN_001634b4(&panel->elements[0], (f32)frame);
        FUN_001634b4(&panel->elements[3], (f32)frame);
        RenderCtxA *context = g_renderCtx;
        renderCtxSetB(context, packNibblesAndByte(6, 1, 0));
        FUN_001634b4(&panel->elements[2], (f32)frame);
        context = g_renderCtx;
        renderCtxSetB(context, packNibblesAndByte(6, 7, 0));
        FUN_001634b4(&panel->elements[1], (f32)frame);
    }
}

} /* extern "C" */
