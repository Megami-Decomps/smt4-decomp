#include "common.h"
#include "classes/Obj55c920.h"
#include "shard/Shard004A.h"
#include "code/Code002a.h"
#include "code/Code0049_Smt4a.h"
#include "ui/AnimatedMessage.h"
#include "ui/UiSpriteApi.h"
#include "code/Code0031_Smt4a.h"

extern "C" {
extern u32 g_entryWindowColors[10];

void pairAt8Get(const ScreenRect *rect, UiFloatPosition *size);
void screenRectDrawCompositeScaled(const EffectRect *rect, u32 id, s32 dx, s32 dy, u32 last, f32 speed);
void drawSetColorFromRGBA8(u32 color);
s32 rangeGetMinimumLimit(void *list);
void FUN_004a7950(Screen4A *window, s32 value, u32 alpha);
void FUN_004a2a30(Screen4A *window, s32 entry, s32 alternate, u32 textId, f32 scale);
void FUN_004a3238(Screen4A *window, s32 index, u32 mode, s32 enabled, u32 text, f32 scale);
void owner4ASetSizeAndCall(Screen4A *screen, s32 step);
}

/* Whether the window's rectangle reaches into the 320-pixel wide screen. The same test as FUN_004a5344's
 * panelIntersectsHorizontalView; retail's frame shows it was a scope of its own: the position's slot at [sp]
 * is reused for the frame parts' outgoing stack argument. */
static __inline bool screenIntersectsHorizontalView(Screen4A *screen)
{
    UiFloatPosition position;
    UiFloatPosition size;
    words2Copy((const UiFloatPosition *)&screen->layout.rect, &position);
    pairAt8Get(&screen->layout.rect, &size);
    return position.x + size.x < 320.0f && position.x + size.x > -320.0f;
}

/* Draws the Bible menu's list window when it is on screen: the frame parts for the menu's mode, the
 * registration percentage and the visible rows, layer by layer, with the selected row last. */
void Obj55c920::FUN_004a24a8()
{
    Screen4A *screen = (Screen4A *)this;

    if (!screenIntersectsHorizontalView(screen)) {
        return;
    }
    s32 slide;
    f32 scale;
    f32 fullSpeed = 1.0f; /* the effect speed restored after each part drawn at the window's own */
    s32 first;
    s32 visible;
    BibleAnalyzeListEntry *rows;
    s32 layer;

    scale = vec2GetSpeed(&screen->bank.sprites[screen->bankPreset.preset]);
    slide = screen->transition.slide;

    screenRectDrawCompositeScaled((const EffectRect *)&screen->layout.rect, 2, 0, 0, slide, scale);
    screenRectDrawPartScaled((const EffectRect *)&screen->layout.rect, 0x4a4, 0, 0, slide, scale);
    screenRectDrawPartScaled((const EffectRect *)&screen->layout.rect, 0x4a5, 0, 0, slide, scale);
    screenRectDrawPartScaled((const EffectRect *)&screen->layout.rect, 0x4a6, 0, 0, slide, scale);
    screenRectDrawPartScaled((const EffectRect *)&screen->layout.rect, 0x4a7, 0, 0, slide, scale);
    if (screen->unk0860 == 0) {
        screenRectDrawPartScaled((const EffectRect *)&screen->layout.rect, 0x4a2, 0, 0, slide, scale);
    } else {
        screenRectDrawPartScaled((const EffectRect *)&screen->layout.rect, 0x4a3, 0, 0, slide, scale);
    }
    if (screen->unk0860 != 1) {
        if (screen->bankPreset.alternateFrame != 0) {
            screenRectDrawPartScaled((const EffectRect *)&screen->layout.rect, 0x5b3, 0, 0, slide, scale);
            screenRectDrawPartScaled((const EffectRect *)&screen->layout.rect, 0x5b4, 0, 0, slide, scale);
            screenRectDrawPartScaled((const EffectRect *)&screen->layout.rect, 0x5b5, 0, 0, slide, scale);
            screenRectDrawPartScaled((const EffectRect *)&screen->layout.rect, 0x5b6, 0, 0, slide, scale);
            screenRectDrawPartScaled((const EffectRect *)&screen->layout.rect, 0x5bf, 0, 0, slide, scale);
            screenRectDrawPartScaled((const EffectRect *)&screen->layout.rect, 0x5c0, 0, 0, slide, scale);
            screenRectDrawPartScaled((const EffectRect *)&screen->layout.rect, 0x5c1, 0, 0, slide, scale);
            screenRectDrawPartScaled((const EffectRect *)&screen->layout.rect, 0x5c2, 0, 0, slide, scale);
        } else {
            screenRectDrawPartScaled((const EffectRect *)&screen->layout.rect, 0x5b7, 0, 0, slide, scale);
            screenRectDrawPartScaled((const EffectRect *)&screen->layout.rect, 0x5b8, 0, 0, slide, scale);
            screenRectDrawPartScaled((const EffectRect *)&screen->layout.rect, 0x5b9, 0, 0, slide, scale);
            screenRectDrawPartScaled((const EffectRect *)&screen->layout.rect, 0x5ba, 0, 0, slide, scale);
            screenRectDrawPartScaled((const EffectRect *)&screen->layout.rect, 0x5bb, 0, 0, slide, scale);
            screenRectDrawPartScaled((const EffectRect *)&screen->layout.rect, 0x5bc, 0, 0, slide, scale);
            screenRectDrawPartScaled((const EffectRect *)&screen->layout.rect, 0x5bd, 0, 0, slide, scale);
            screenRectDrawPartScaled((const EffectRect *)&screen->layout.rect, 0x5be, 0, 0, slide, scale);
        }
    }
    efctSetSpeed(scale);
    FUN_004a7950(screen, screen->gauge.percent, slide);
    efctSetSpeed(fullSpeed);
    if (screen->listCount.count == 0) {
        return;
    }

    first = resourceDispatchTaggedOperation(&screen->selection.holder);
    visible = rangeGetMinimumLimit(&screen->selection.holder);
    rows = screen->rows;
    /* The rows' four lower layers, then their top layer, where the selected row only sets its colour. Retail
     * sets the layer to 5 again (mov r9, #5) although the loop leaves it there. */
    for (layer = 1; layer <= 4; layer++) {
        for (s32 row = 0; row < visible; row++) {
            if (screen->state != 2 || FUN_0031d174(&screen->selection.holder) != row) {
                FUN_004a3238(screen, row, layer, 0, rows[first + row].id, scale);
            }
        }
    }
    layer = 5;
    for (s32 row = 0; row < visible; row++) {
        if (screen->state == 2 && FUN_0031d174(&screen->selection.holder) == row) {
            if (row != 0) {
                if (g_entryWindowColors[row - 1] != g_entryWindowColors[row]) {
                    drawSetColorFromRGBA8(g_entryWindowColors[row]);
                }
            } else {
                drawSetColorFromRGBA8(g_entryWindowColors[0]);
            }
        } else {
            FUN_004a3238(screen, row, layer, 0, rows[first + row].id, scale);
        }
    }
    gxResetColorQuadToWhite();
    if (screen->state == 2 || screen->state == 3 || screen->state == 8 || screen->state == 4 || screen->state == 5 ||
        screen->state == 6 || screen->state == 10 || screen->state == 9) {
        s16 id = rows[flaggedValueHolderGetTotal(&screen->selection.holder)].id;
        FUN_004a2a30(screen, FUN_0031d174(&screen->selection.holder), 1, id, scale);
    }
    efctSetSpeed(scale);
    owner4ASetSizeAndCall(screen, slide);
    efctSetSpeed(fullSpeed);
}
