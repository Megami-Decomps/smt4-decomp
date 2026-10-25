#include "shard/W6_W6Match2_TitleCommand.h"

extern "C" {

int processDispatchFinishedNodes(void);
int FUN_002c5210(void);

s32 titleRunActiveCommand(void)
{
    if (FUN_002c5210() == 1) {
        if (g_titleFlags.commandActive != 0 && g_titleFlags.disabled == 0) {
            processDispatchFinishedNodes();
        }
    }
    return 0;
}

} /* extern "C" */
