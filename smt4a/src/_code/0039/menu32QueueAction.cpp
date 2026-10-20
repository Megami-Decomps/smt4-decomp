#include "shard/Shard0039.h"

extern "C" {

extern s32 FUN_003f25e8(u32 value);
extern s32 FUN_0018719c(u32 index);

/* Queues a new action: remembers the previous one and resets the transient fields. */
void menu32QueueAction(Menu32 *menu, u16 action, s32 flag)
{
    menu->unk4B0F = 1;
    menu->unk4B10 = 0;
    menu->unk4B16 = menu->unk4B14;
    menu->unk4B14 = action;
    menu->unk4B19 = flag;
    menu->unk4B1A = 0;
    menu->unk4B1B = 0;
    menu->unk4B1C = 0;
    menu->unk4B20 = 0;
    menu->unk4B24 = 0;
    if (FUN_003f25e8(menu->unk3874) != 0 && FUN_0018719c(0x4C9) == 0 && flag != 0) {
        menu->unk4B1C = 1;
        menu->unk4B28 = 1;
    } else {
        menu->unk4B28 = 0;
    }
}

} /* extern "C" */
