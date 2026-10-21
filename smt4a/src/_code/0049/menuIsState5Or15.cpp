#include "common.h"

struct MenuState {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 state;
};

/* Tests whether the menu is in either of its two active states. */
extern "C" int menuIsState5Or15(const MenuState *menu)
{
    return menu->state == 5 || menu->state == 15;
}
