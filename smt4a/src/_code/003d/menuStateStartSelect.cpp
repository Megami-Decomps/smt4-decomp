#include "ui/MenuState.h"
#include "ui/UiSpriteState.h"

extern "C" {

extern MenuState *g_menuState;


/* Stores the selection byte and starts the menu's panel animations (mode 1, or 5 for the two-panel layout). */
void menuStateStartSelect(u8 selection)
{
    MenuState *menu = g_menuState;

    menu->unk12 = selection;
    menu->unk2bc = 0;
    if (menu->type != 6) {
        menu->mode = 1;
        uiSpriteSelectAnim(menu->panelA, 0);
        return;
    }
    menu->mode = 5;
    uiSpriteSelectAnim(menu->panelA, 0);
    uiSpriteSelectAnim(menu->panelB, 3);
    menu->unk2c8 = menu->unk2c0;
}

} /* extern "C" */
