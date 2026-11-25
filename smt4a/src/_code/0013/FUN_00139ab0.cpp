/* NON_MATCHING: retail loads the elapsed-frame count and interval together, then adds 1 to the interval,
 * subtracts the elapsed count and reserves the final wait. The build loads and schedules those separately. */
#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"

extern "C" {
void asdFileWakeWorker(void);
void asdGxSetTopScreenMode(u32 mode);
void gxLcdClearForceBlack(void);
void asdGfxWaitVblank(u32 command);

/* Flush the queued GX commands, wake the file worker, then apply a pending top-screen preset. */
void FUN_00139ab0(void)
{
    s32 count = g_asdGxPresets.interval + 1 - g_asdGxPresets.elapsedFrames;
    s32 i;

    for (i = 0; i < count - 1; i++) {
        asdGfxWaitVblank(0x402);
    }
    asdFileWakeWorker();
    asdGfxWaitVblank(0x402);
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
    if (!asdGxWasBlackCleared(&g_asdGxPresets)) {
        gxLcdClearForceBlack();
        g_asdGxPresets.forceBlackCleared = 1;
    }
}

} /* extern "C" */
