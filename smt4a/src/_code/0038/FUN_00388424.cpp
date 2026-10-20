#include "shard/Shard0038.h"

extern "C" {

extern MenuState *g_menuState;

void FUN_00388424(u32 a, u8 b)
{
    MenuState *menu = g_menuState;

    menu->unk2AC = a;
    menu->unk2B0 = b;
}

} /* extern "C" */
