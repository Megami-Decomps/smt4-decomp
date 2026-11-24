/* NON_MATCHING: 14 lines. Retail uses r1 for the delayed panel value copy and phase stores, and forms the sprite address before the value store. */
#include "ui/MenuState.h"
#include "ui/UiSpriteApi.h"

extern "C" {
extern MenuState *g_menuState;

/* Advances the opening, closing and delayed multi-panel animations. */
u32 comWinAdvanceAnimation(void)
{
    MenuState *work = g_menuState;
    switch (work->mode) {
    case 1:
        if (uiSpriteAdvanceAnimation(&work->primarySprites[0], 1.0f)) {
            work->animationTimer = 0;
            work->mode = 2;
        }
        break;
    case 4:
        if (uiSpriteAdvanceAnimation(&work->primarySprites[0], 1.0f))
            work->mode = 0;
        break;
    case 5:
        switch (work->animationPhase) {
        case COM_WIN_OPENING_PANELS:
            uiSpriteAdvanceAnimation(&work->primarySprites[0], 1.0f);
            uiSpriteAdvanceAnimation(&work->secondarySprites[0], 1.0f);
            if (uiSpriteGetCompletionState(&work->primarySprites[0]) && uiSpriteGetCompletionState(&work->secondarySprites[0])) {
                work->animationTimer = 0;
                work->animationPhase = COM_WIN_WAITING_FOR_PANEL;
                uiSpriteAdvanceAnimation(&work->primarySprites[1], 1.0f);
            }
            break;
        case COM_WIN_WAITING_FOR_PANEL:
            if (work->animationTimer < 20) {
                uiSpriteAdvanceAnimation(&work->primarySprites[1], 1.0f);
                break;
            }
            work->currentPanelValue = work->pendingPanelValue;
            uiSpriteSelectAnim(&work->secondarySprites[1], 5);
            work->animationPhase = COM_WIN_REVEALING_PANEL;
            /* fall through */
        case COM_WIN_REVEALING_PANEL:
            if (uiSpriteAdvanceAnimation(&work->secondarySprites[1], 1.0f))
                work->animationPhase = COM_WIN_PANEL_REVEALED;
            /* fall through */
        default: {
            uiSpriteAdvanceAnimation(&work->primarySprites[1], 1.0f);
            break;
        }
        }
        break;
    case 2:
        uiSpriteAdvanceAnimation(&work->primarySprites[1], 1.0f);
        break;
    case 6:
        uiSpriteAdvanceAnimation(&work->primarySprites[0], 1.0f);
        uiSpriteAdvanceAnimation(&work->secondarySprites[0], 1.0f);
        if (!uiSpriteGetCompletionState(&work->primarySprites[0]) || !uiSpriteGetCompletionState(&work->secondarySprites[0]))
            break;
        work->mode = 0;
        break;
    }
    ++work->animationTimer;
    return 0;
}
} /* extern "C" */
