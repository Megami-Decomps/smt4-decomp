#include "shard/Shard003B.h"

extern "C" {

extern void FUN_001846d0(u8 *block, s32 value);

void menu32InitBlock368(Menu32 *menu)
{
    FUN_001846d0(menu->block368, 4);
    menu->unk3F4 = 0;
    menu->unk3F8 = 5;
}

} /* extern "C" */
