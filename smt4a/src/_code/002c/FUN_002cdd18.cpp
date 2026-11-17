#include "battle/btlUI.h"
/* NON_MATCHING: retail writes each {frame = 0, state = N} pair with one stm from fresh constants and ends case 3/9 with its own inlined epilogue, and indexes the switch from 0; this build hoists the zero into r6, stores the pair with two str and subtracts 2 before the table. */
#include "common.h"
#include "ui/UiSpriteApi.h"

extern "C" {
s32 FUN_00163e84(s32 index);
void slotSetRequest(u32 index, u32 value, u32 extra);
void screenFadeSlotReset(u32 index);
/* Sets the sprite's visibility.active byte / reads its signed completion flag. */
void workSetStateByte(UiSpriteState *sprite, u8 state);
}

static __inline BtlUiPanelTimerA panelStartState(s32 state)
{
    BtlUiPanelTimerA timer = {0, state};
    return timer;
}

/* Advances the panel's state machine by one frame. */
extern "C" void FUN_002cdd18(BtlUiObjBA *panel)
{
    if (panel->timer.state > 0) {
        uiSpriteAdvanceAnimation(&panel->sprites[5], 1.0f);
    }
    switch (panel->timer.state) {
    case 2:
        uiSpriteAdvanceAnimation(&panel->sprites[3], 1.0f);
        if (uiSpriteAdvanceAnimation(&panel->sprites[0], 1.0f) && uiSpriteAdvanceAnimation(&panel->sprites[1], 1.0f) &&
            uiSpriteAdvanceAnimation(&panel->sprites[2], 1.0f)) {
            uiSpriteSelectAnim(&panel->sprites[0], 3);
            uiSpriteSelectAnim(&panel->sprites[1], 3);
            uiSpriteSelectAnim(&panel->sprites[3], 3);
            panel->timer = panelStartState(3);
        }
        break;
    case 3:
        uiSpriteAdvanceAnimation(&panel->sprites[0], 1.0f);
        uiSpriteAdvanceAnimation(&panel->sprites[1], 1.0f);
        uiSpriteAdvanceAnimation(&panel->sprites[3], 1.0f);
        if (uiSpriteGetCompletionState(&panel->sprites[0]) == 0 ||
            uiSpriteGetCompletionState(&panel->sprites[1]) == 0)
            break;
        workSetStateByte(&panel->sprites[0], 0);
        workSetStateByte(&panel->sprites[1], 0);
        workSetStateByte(&panel->sprites[2], 0);
        workSetStateByte(&panel->sprites[3], 0);
        /* fall through */
    case 9:
        panel->timer = panelStartState(1);
        break;
    case 4:
        uiSpriteAdvanceAnimation(&panel->sprites[3], 1.0f);
        if (uiSpriteAdvanceAnimation(&panel->sprites[0], 1.0f) && uiSpriteAdvanceAnimation(&panel->sprites[1], 1.0f)) {
            panel->timer = panelStartState(6);
        }
        break;
    case 5:
        if (uiSpriteAdvanceAnimation(&panel->sprites[6], 1.0f)) {
            panel->timer = panelStartState(7);
        }
        break;
    case 7:
        if (panel->delay < 0) {
            slotSetRequest(0, 2, 0xff0000ff);
            panel->timer = panelStartState(8);
        }
        panel->delay--;
        break;
    case 8:
        if (FUN_00163e84(0)) {
            workSetStateByte(&panel->sprites[0], 0);
            workSetStateByte(&panel->sprites[1], 0);
            workSetStateByte(&panel->sprites[2], 0);
            workSetStateByte(&panel->sprites[6], 0);
            workSetStateByte(&panel->sprites[3], 0);
            screenFadeSlotReset(0);
            panel->timer = panelStartState(9);
        }
        break;
    }
    panel->timer.frame++;
}
