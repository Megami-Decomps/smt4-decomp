/* The shop selection menu is the same scene the loading and transaction handlers receive. */
#ifndef SHARD_S1SELECTMENU_H
#define SHARD_S1SELECTMENU_H
#include "shard/S2Scene3a.h"

typedef Scene3a SelectMenu;
typedef EquipmentMenuCursor MenuList;
enum {
    MENU_REFRESH = 0x100,
    MENU_CANCEL = 0x200,
    MENU_CONFIRM = 0x400,
    MENU_SCROLL = 0x800,
    MENU_CLOSE = 0x1000
};
#endif
