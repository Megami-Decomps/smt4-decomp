#include "ui/MenuState.h"

extern "C" {

extern MenuState *g_menuState;

int FUN_001846d0(u8 *panel, int arg);

/* Sets the menu to its confirm mode (4, or 6 when type is 6) and starts the panel animations. */
void menuStateStartConfirm(void)
{
    MenuState *menu = g_menuState;

    menu->unk2bc = 0;
    if (menu->type != 6) {
        menu->mode = 4;
        FUN_001846d0(menu->panelA, 1);
        return;
    }
    menu->mode = 6;
    FUN_001846d0(menu->panelA, 1);
    FUN_001846d0(menu->panelB, 4);
}

} /* extern "C" */
