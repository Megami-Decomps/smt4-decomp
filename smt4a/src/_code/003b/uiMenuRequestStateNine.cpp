#include "common.h"

extern "C" {

struct Menu { u8 unk0000[0x387c]; u32 state; };
void statusIconSetKind(Menu *menu, s32 state);

/* Switches the menu's status icon to kind 9 unless the menu is in state 39; 1 when it did. */
s32 uiMenuRequestStateNine(Menu *menu)
{
    if (menu->state != 39) {
        statusIconSetKind(menu, 9);
        return 1;
    }
    return 0;
}

} /* extern "C" */
