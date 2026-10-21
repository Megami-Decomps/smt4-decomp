#include "shard/Shard0032.h"

extern "C" {

extern u32 buttonHelpGetValue(void);
extern void sysPlaySe(u32 id);
extern void FUN_0020ad6c(Menu32 *menu, s32 value, s32 flag);

void menu32PlayCursorSeAndSelect(Menu32 *menu)
{
    sysPlaySe(buttonHelpGetValue());
    FUN_0020ad6c(menu, menu->unk3880, 1);
}

} /* extern "C" */
