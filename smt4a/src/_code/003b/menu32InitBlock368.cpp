#include "shard/Shard003B.h"

extern "C" {

extern void uiSpriteSelectAnim(u8 *block, s32 value);

void menu32InitBlock368(Menu32 *menu)
{
    uiSpriteSelectAnim(menu->block368, 4);
    menu->unk3F4 = 0;
    menu->unk3F8 = 5;
}

} /* extern "C" */
