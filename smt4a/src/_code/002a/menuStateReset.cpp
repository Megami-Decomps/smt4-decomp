#include "common.h"

extern "C" {

typedef struct MenuState {
    /* 0x000 */ u8 unk000[0x14];
    /* 0x014 */ u32 mode;
    /* 0x018 */ u16 argument;
    /* 0x01A */ u8 unk01A[0x297];
    /* 0x2B1 */ u8 confirmed;
} MenuState;
extern MenuState *g_menuState;

/* Resets the menu to mode 0 and clears `confirmed`. */
void menuStateReset(void)
{
    MenuState *menu;

    menu = g_menuState;
    g_menuState->mode = 0;
    menu->confirmed = 0;
}

} /* extern "C" */
