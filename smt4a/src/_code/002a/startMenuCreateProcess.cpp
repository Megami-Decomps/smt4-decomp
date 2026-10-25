/* NON_MATCHING: compiler hoists and shares the zero argument setup, changing instruction scheduling and literal-pool order; same mismatch as the IV twin. */
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

extern "C" {
s32 FUN_002e10f0(u32 handle);
extern s32 DAT_00640388;
extern void (*DAT_005b4020)();

// Start the menu process, then invoke the optional start callback.
void startMenuCreateProcess()
{
    asdProcessCreateSimple((const s8*)"StartMenu", DAT_00640388, 0, 0, FUN_002e10f0, NULL, 0);
    if (DAT_005b4020 != NULL) {
        DAT_005b4020();
    }
}
}
