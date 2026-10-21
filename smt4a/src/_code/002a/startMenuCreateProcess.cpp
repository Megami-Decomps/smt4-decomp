/* NON_MATCHING: compiler hoists and shares the zero argument setup, changing instruction scheduling and literal-pool order; same mismatch as the IV twin. */
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

extern "C" {
u32 asdProcessCreateSimple(const s8* name, s32 group, u16 startDelay, u16 endDelay,
                           AsdProcUpdateFunc onUpdate, AsdProcFunc onEnd, u32 work);
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
