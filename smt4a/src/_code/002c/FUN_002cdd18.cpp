/* NON_MATCHING: retail writes each {frame = 0, state = N} pair with one stm from fresh constants and ends case 3/9 with its own inlined epilogue, and indexes the switch from 0; this build hoists the zero into r6, stores the pair with two str and subtracts 2 before the table. */
#include "common.h"
#include "ui/UiSpriteApi.h"

struct PanelTimer {
    s32 frame; /* frames spent in the current state */
    s32 state;
};

/* A panel of seven animated sprites driven by a small state machine. */
struct SpritePanel {
    /* 0x000 */ u8 unk000[0x20];
    /* 0x020 */ UiSpriteState sprites[7];
    /* 0x3F4 */ PanelTimer timer;
    /* 0x3FC */ u8 unk3FC[8];
    /* 0x404 */ s32 countdown;
};
typedef char SpritePanelOffsets[sizeof(SpritePanel) == 0x408 ? 1 : -1];

extern "C" {
s32 FUN_00163e84(s32 index);
void slotSetRequest(u32 index, u32 value, u32 extra);
void screenFadeSlotReset(u32 index);
/* Sets the sprite's visibility.active byte / reads its signed completion flag. */
void workSetStateByte(UiSpriteState *sprite, u8 state);
}

static __inline PanelTimer panelStartState(s32 state)
{
    PanelTimer timer = {0, state};
    return timer;
}

/* Advances the panel's state machine by one frame. */
extern "C" void FUN_002cdd18(SpritePanel *panel)
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
        if (panel->countdown < 0) {
            slotSetRequest(0, 2, 0xff0000ff);
            panel->timer = panelStartState(8);
        }
        panel->countdown--;
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
