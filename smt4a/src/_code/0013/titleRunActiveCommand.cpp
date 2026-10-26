#include "shard/W6_W6Match2_TitleCommand.h"

extern "C" {

void processDispatchFinishedNodes(void);
s32 FUN_001696f4(void);

/* When FUN_001696f4 reports 1 and the request flag is set without the blocked flag, runs processDispatchFinishedNodes; always returns 0. */
u32 titleRunActiveCommand(void)
{
    if (FUN_001696f4() == 1) {
        if (g_titleFlags.commandActive != 0 && g_titleFlags.disabled == 0) {
            processDispatchFinishedNodes();
        }
    }
    return 0;
}

} /* extern "C" */
