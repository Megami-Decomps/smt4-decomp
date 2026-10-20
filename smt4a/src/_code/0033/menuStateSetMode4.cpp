#include "shard/Shard0033.h"

extern "C" {

extern MenuState *g_menuState;

void menuStateSetMode4(u16 value)
{
    MenuState *menu = g_menuState;

    menu->mode = 4;
    menu->value = value;
    menu->unk2B1 = 0;
}

} /* extern "C" */
