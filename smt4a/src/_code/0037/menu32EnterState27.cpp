#include "shard/Shard0037.h"

extern "C" {

extern void FUN_0020ad6c(Menu32 *menu, s32 value, s32 flag);
extern void FUN_0038e4cc(Menu32 *menu, s32 value);

void menu32EnterState27(Menu32 *menu)
{
    if (menu->unk387C != 0) {
        FUN_0020ad6c(menu, 0x27, 1);
        FUN_0038e4cc(menu, 9);
    }
}

} /* extern "C" */
