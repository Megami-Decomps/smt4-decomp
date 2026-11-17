#include "shard/Shard0032.h"
#include "ui/UiSpriteApi.h"

extern "C" {

extern void btlCommandMenuEnterMode(Menu32 *menu, s32 value, s32 flag);

void menu32InitBlock96C(Menu32 *menu)
{
    uiSpriteSetKeyframe(&menu->block96C, 0xD, 0);
    btlCommandMenuEnterMode(menu, 0xE, 1);
}

} /* extern "C" */
