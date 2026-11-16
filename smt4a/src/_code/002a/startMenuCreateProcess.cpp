#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

extern "C" {
s32 FUN_002e10f0(u32 handle);
extern s32 DAT_00640388;        /* process group the start menu runs in */
extern void (*DAT_005b4020)();  /* optional hook run after the menu starts */

// Start the menu process, then invoke the optional start callback.
void startMenuCreateProcess()
{
    s32 *group = &DAT_00640388;

    asdProcessCreateSimple((const s8*)"StartMenu", *group, 0, 0, FUN_002e10f0, NULL, 0);
    if (DAT_005b4020 != NULL) {
        DAT_005b4020();
    }
}
}
