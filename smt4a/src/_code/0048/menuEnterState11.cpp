#include "common.h"

struct MenuState {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 state;
    /* 0x08 */ u32 step;
    /* 0x0C */ u8 unk0C[0x54];
    /* 0x60 */ u32 selection;
};

/* Enters state 11 and records the requested selection. */
extern "C" void menuEnterState11(MenuState *menu, u32 selection)
{
    menu->state = 11;
    menu->step = 0;
    menu->selection = selection;
}
