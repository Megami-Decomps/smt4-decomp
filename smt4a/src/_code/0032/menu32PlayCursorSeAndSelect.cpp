#include "shard/Shard0032.h"

extern "C" {

extern u32 buttonHelpGetValue(void);
extern void sysPlaySe(u32 id);
extern void btlCommandMenuEnterMode(Menu32 *menu, s32 value, s32 flag);

void menu32PlayCursorSeAndSelect(Menu32 *menu)
{
    sysPlaySe(buttonHelpGetValue());
    btlCommandMenuEnterMode(menu, menu->unk3880, 1);
}

} /* extern "C" */
