/* NON_MATCHING: null-work path merges its zero return and the stop-flag constant is hoisted early; -O2 fixes store scheduling but still merges the null return. */
#include "mobiclip_ctrl/MobiclipCtrlProcess.h"
#include "addon/aocMain.h"
#include "shard/W4_Match3_AocMainA.h"

struct MovieProcessStatus {
    u8 unk00[0x74];
    u8 special; // 0x74
    u8 stopRequested; // 0x75
};
struct MovieControlGate {
    u8 unk000[0x98];
    AocObjB event; // 0x98
    u8 unk0a8[0x6ac];
    u32 flags; // 0x754
};

extern "C" {
extern MobiclipProcessGlobals g_mobiclipProcess;
u32 sysLightEventTryWait(AocObjB *event);

u32 mobiclipProcessPollStopEvent()
{
    MovieProcessStatus *work = (MovieProcessStatus *)g_mobiclipProcess.work;
    if (work != NULL) {
        if (work->special == 0 || sysLightEventTryWait(&((MovieControlGate *)g_aocMain)->event) == 0) {
            return 1;
        }
        MovieControlGate *main = (MovieControlGate *)g_aocMain;
        main->flags &= ~0x10000u;
        work->stopRequested = 1;
    }
    return 0;
}
}
