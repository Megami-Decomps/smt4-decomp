#include "ui/MenuState.h"

extern "C" {

extern MenuState *g_menuState;

int FUN_001846d0(u8 *panel, int arg);

/* Stores the selection byte and starts the menu's panel animations (mode 1, or 5 for the two-panel layout). */
void menuStateStartSelect(u8 selection)
{
    MenuState *menu = g_menuState;

    menu->unk12 = selection;
    menu->unk2bc = 0;
    if (menu->type != 6) {
        menu->mode = 1;
        FUN_001846d0(menu->panelA, 0);
        return;
    }
    menu->mode = 5;
    FUN_001846d0(menu->panelA, 0);
    FUN_001846d0(menu->panelB, 3);
    menu->unk2c8 = menu->unk2c0;
}

} /* extern "C" */
