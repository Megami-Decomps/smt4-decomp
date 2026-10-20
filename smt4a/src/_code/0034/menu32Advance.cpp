#include "shard/Shard0034.h"

extern "C" {

extern void FUN_0020ad6c(Menu32 *menu, s32 value, s32 flag);
extern u8 FUN_002a21c8(void);
extern void FUN_003756c8(s32 value);

void menu32Advance(Menu32 *menu)
{
    menu->unk38B3 = 0;
    if (menu->unk387C == 0) {
        if (FUN_002a21c8() == 0) {
            FUN_003756c8(0);
        }
        FUN_0020ad6c(menu, 0xE, 1);
    } else if (menu->unk387C == 0x17) {
        menu->unk3888 = 0x1E;
        FUN_0020ad6c(menu, 0x18, 1);
    } else {
        FUN_0020ad6c(menu, 0x1E, 1);
    }
}

} /* extern "C" */
