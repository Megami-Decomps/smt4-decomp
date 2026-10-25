/* NON_MATCHING: compiler hoists and shares the zero argument setup, changing instruction scheduling and literal-pool order; default and O2 agree on the mismatch. */
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

extern "C" {
s32 FUN_0021073c(u32 handle);
extern s32 DAT_004e3f64;
extern void (*DAT_00465108)();

// Start the menu process, then invoke the optional start callback.
void startMenuCreateProcess()
{
    asdProcessCreateSimple((const s8*)"StartMenu", DAT_004e3f64, 0, 0, FUN_0021073c, NULL, 0);
    if (DAT_00465108 != NULL) {
        DAT_00465108();
    }
}
}
