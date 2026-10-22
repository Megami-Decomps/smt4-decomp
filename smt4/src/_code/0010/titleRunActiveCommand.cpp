#include "shard/W6_W6Match2_TitleCommand.h"

extern "C" {

int FUN_0010baf8(void);
int FUN_002c5210(void);

s32 titleRunActiveCommand(void)
{
    if (FUN_002c5210() == 1) {
        if (g_titleFlags.commandActive != 0 && g_titleFlags.disabled == 0) {
            FUN_0010baf8();
        }
    }
    return 0;
}

} /* extern "C" */
