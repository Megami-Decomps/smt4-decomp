#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"
/* NON_MATCHING: retail loads both queue words with ldm (begin, end) and keeps the +1 and -1 as separate adds in the flush count (armcc folds them or emits subgt); the build also adds a nop before the force-black test when it goes through asdGxGetBlackForced. */

extern "C" {
void asdFileWakeWorker(void);
void asdGxSetTopScreenMode(u32 mode);
void gxLcdClearForceBlack(void);
void FUN_0014a878(u32 command);
u8 asdGxGetBlackForced(const AsdGxPresets *presets);

/* Flush the queued GX commands, wake the file worker, then apply a pending top-screen preset. */
void FUN_00139ab0(void)
{
    s32 count = g_asdGxPresets.interval + 1 - g_asdGxPresets.elapsedFrames;
    s32 i;

    for (i = 0; i < count - 1; i++) {
        FUN_0014a878(0x402);
    }
    asdFileWakeWorker();
    FUN_0014a878(0x402);
    g_asdGxPresets.elapsedFrames = 0;
    if (g_asdGxPresets.pendingStereoMode >= 0) {
        g_asdGxPresets.stereoMode = g_asdGxPresets.pendingStereoMode;
        g_asdGxPresets.pendingStereoMode = -1;
        switch (g_asdGxPresets.stereoMode) {
        case 0:
            asdGxSetTopScreenMode(0x700);
            break;
        case 1:
            asdGxSetTopScreenMode(0x702);
            break;
        }
    }
    if (!asdGxGetBlackForced(&g_asdGxPresets)) {
        gxLcdClearForceBlack();
        g_asdGxPresets.forceBlackCleared = 1;
    }
}

} /* extern "C" */
