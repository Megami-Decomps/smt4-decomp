/* NON_MATCHING: null-work path merges its zero return and the stop-flag constant is hoisted early; -O2 fixes store scheduling but still merges the null return. */
#include "mobiclip_ctrl/MobiclipCtrlProcess.h"
#include "addon/aocMain.h"
#include "shard/W4_Match3_AocMainA.h"

struct MovieProcessStatus {
    u8 unk00[0x74];
    u8 special; // 0x74
    u8 stopRequested; // 0x75
};

extern "C" {
extern MobiclipProcessGlobals g_mobiclipProcess;

u32 mobiclipProcessPollStopEvent()
{
    MovieProcessStatus *work = (MovieProcessStatus *)g_mobiclipProcess.work;
    if (work != NULL) {
        if (work->special == 0 || sysLightEventTryWait(&g_aocMain->operationDone) == 0) {
            return 1;
        }
        AocMain *main = g_aocMain;
        main->flags &= ~0x10000u;
        work->stopRequested = 1;
    }
    return 0;
}
}
