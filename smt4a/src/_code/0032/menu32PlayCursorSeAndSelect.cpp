#include "shard/Shard0032.h"

extern "C" {

extern u32 FUN_00341f88(void);
extern void sysPlaySe(u32 id);
extern void FUN_0020ad6c(Menu32 *menu, s32 value, s32 flag);

void menu32PlayCursorSeAndSelect(Menu32 *menu)
{
    sysPlaySe(FUN_00341f88());
    FUN_0020ad6c(menu, menu->unk3880, 1);
}

} /* extern "C" */
