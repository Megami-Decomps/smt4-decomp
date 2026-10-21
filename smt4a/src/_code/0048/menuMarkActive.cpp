#include "common.h"

struct MenuFlag {
    /* 0x0000 */ u8 unk0000[0x7B90];
    /* 0x7B90 */ u8 active;
};

/* Marks the menu active. */
extern "C" void menuMarkActive(MenuFlag *menu)
{
    menu->active = 1;
}
