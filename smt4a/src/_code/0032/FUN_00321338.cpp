#include "shard/Shard0032.h"

extern "C" {

extern void btlCommandMenuEnterMode(Menu32 *menu, s32 value, s32 flag);

void FUN_00321338(Menu32 *menu)
{
    btlCommandMenuEnterMode(menu, menu->unk3884, 1);
}

} /* extern "C" */
