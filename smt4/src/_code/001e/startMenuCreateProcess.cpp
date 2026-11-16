#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

extern "C" {
s32 FUN_0021073c(u32 handle);
extern s32 DAT_004e3f64;        /* process group the start menu runs in */
extern void (*DAT_00465108)();  /* optional hook run after the menu starts */

// Start the menu process, then invoke the optional start callback.
void startMenuCreateProcess()
{
    s32 *group = &DAT_004e3f64;

    asdProcessCreateSimple((const s8*)"StartMenu", *group, 0, 0, FUN_0021073c, NULL, 0);
    if (DAT_00465108 != NULL) {
        DAT_00465108();
    }
}
}
