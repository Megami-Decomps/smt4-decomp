#include "ui/MenuState.h"
#include "ui/UiSpriteApi.h"

extern "C" {

extern MenuState *g_menuState;


/* Stores the selection byte and starts the menu's panel animations (mode 1, or 5 for the two-panel layout). */
void menuStateStartSelect(u8 selection)
{
    MenuState *menu = g_menuState;

    menu->unk12 = selection;
    menu->animationPhase = 0;
    if (menu->type != 6) {
        menu->mode = 1;
        uiSpriteSelectAnim(&menu->primarySprites[0], 0);
        return;
    }
    menu->mode = 5;
    uiSpriteSelectAnim(&menu->primarySprites[0], 0);
    uiSpriteSelectAnim(&menu->secondarySprites[0], 3);
    menu->currentPanelValue = menu->unk2c0;
}

} /* extern "C" */
