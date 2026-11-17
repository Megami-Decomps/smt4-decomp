#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"

extern "C" {
void asdFileWakeWorker(void);
void asdGxSetTopScreenMode(u32 mode);
void gxLcdClearForceBlack(void);
u8 asdGxGetBlackForced(const AsdGxPresets *presets);

void asdGxResumeAndApplyPreset(void)
{
    asdFileWakeWorker();
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
}
