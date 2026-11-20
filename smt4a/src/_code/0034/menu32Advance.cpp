#include "shard/Shard0034.h"

extern "C" {

extern void btlCommandMenuEnterMode(Menu32 *menu, s32 value, s32 flag);
extern u8 buttonHelpIsStateActive(void);
extern void btlPlayMenuConfirmSe(s32 value);

void menu32Advance(Menu32 *menu)
{
    menu->unk38B3 = 0;
    if (menu->unk387C == 0) {
        if (buttonHelpIsStateActive() == 0) {
            btlPlayMenuConfirmSe(0);
        }
        btlCommandMenuEnterMode(menu, 0xE, 1);
    } else if (menu->unk387C == 0x17) {
        menu->unk3888 = 0x1E;
        btlCommandMenuEnterMode(menu, 0x18, 1);
    } else {
        btlCommandMenuEnterMode(menu, 0x1E, 1);
    }
}

} /* extern "C" */
