/* NON_MATCHING: 54 lines. Retail keeps the numeric panel's label layer (201) in a saved register across the loop,
 * as FUN_003f54c4 does with its own, and allocates the scroll index differently; a single-use inline taking the layer
 * as a parameter gives 12 lines, but nothing besides the score supports it. */
#include "ui/MenuStereoFrame.h"
#include "ui/AnimatedDigitPanel.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "code/Code003f.h"
#include "ui/UiSpriteApi.h"

enum { CAMP_STATUS_LABEL_LAYER = 201 };

extern "C" {
void FUN_003f78f8(void *owner, s32 x, s32 y, f32 alpha);
void textDrawRangeFaded(void *panel, s32 x, s32 y, u32 color, u32 layer, s32 value, f32 alpha);

/* Draws the camp status screen at the main sprite's position, then resets the effect speed. */
void FUN_003f82b8(DigitPanelDisplay *screen)
{
    s32 x = vec2GetXInt(&screen->screenPosition);
    s32 y = vec2GetYInt(&screen->screenPosition);
    f32 speed = vec2GetSpeed(&screen->screenPosition);

    switch (screen->mode) {
    case 0:
    case 1:
    case 2:
    case 3: {
        vec2GetXInt(&screen->background);
        vec2GetYInt(&screen->background);
        vec2GetSpeed(&screen->background);
        menuDrawStereoFrame(x, y, speed);
        break;
    }
    case 4:
    case 5:
        FUN_003f6e24(screen, x, y, speed);
        break;
    case 9:
    case 10:
    case 11: {
        /* The scrolling numeric panel: the same loop as FUN_003f54c4's, with this panel's eight anchors. */
        s32 parallax = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.26f);
        FUN_003f5b14(screen, x, y, 226, 229, speed);
        for (s32 i = 0; i < 8; i++) {
            s32 value = screen->scroll + i - screen->scrollBase;
            if (value >= 0) {
                TextureTableEntryIV *frame = asdTMTexTableEntryAt(49, 252 + i);
                s32 labelX = frame->x + x + parallax;
                s32 labelY = frame->y + y;
                textDrawRangeFaded(screen->labels, labelX, labelY, CAMP_STATUS_LABEL_LAYER, 6, value, speed);
            }
        }
        FUN_003f78f8(screen, x, y, speed);
        break;
    }
    default:
        FUN_003f5d94(screen, x, y, speed);
        break;
    }
    efctSetSpeed(1.0f);
}

}
