#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"
/* NON_MATCHING: synchronization recovered; retail preserves producer-count arithmetic and reloads the final LCD flag through its global address. */

extern "C" {
void asdFileWakeWorker(void);
void asdGxSetTopScreenMode(u32 mode);
void FUN_0014a878(s32 event);
void gxLcdClearForceBlack(void);

// Drain queued display events, apply a pending screen mode, and reveal the LCD.
void FUN_00139ab0(void)
{
    s32 available = (g_asdGxPresets.interval + 1) - g_asdGxPresets.elapsedFrames;
    s32 queued = available - 1;
    for (s32 i = 0; i < queued; ++i) {
        FUN_0014a878(0x402);
    }
    asdFileWakeWorker();
    FUN_0014a878(0x402);
    g_asdGxPresets.elapsedFrames = 0;
    u32 mode = g_asdGxPresets.pendingStereoMode;
    if (mode >= 0) {
        g_asdGxPresets.stereoMode = mode;
        g_asdGxPresets.pendingStereoMode = -1;
        if (mode == 0) {
            asdGxSetTopScreenMode(0x700);
        } else if (mode == 1) {
            asdGxSetTopScreenMode(0x702);
        }
    }
    if (!g_asdGxPresets.forceBlackCleared) {
        gxLcdClearForceBlack();
        g_asdGxPresets.forceBlackCleared = 1;
    }
}
}
