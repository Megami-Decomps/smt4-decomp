#include "ui/MenuState.h"
#include "ui/UiSpriteApi.h"

extern "C" {

extern MenuState *g_menuState;


/* Sets the menu to its confirm mode (4, or 6 when type is 6) and starts the panel animations. */
void menuStateStartConfirm(void)
{
    MenuState *menu = g_menuState;

    menu->animationPhase = 0;
    if (menu->type != 6) {
        menu->mode = 4;
        uiSpriteSelectAnim(&menu->primarySprites[0], 1);
        return;
    }
    menu->mode = 6;
    uiSpriteSelectAnim(&menu->primarySprites[0], 1);
    uiSpriteSelectAnim(&menu->secondarySprites[0], 4);
}

} /* extern "C" */
