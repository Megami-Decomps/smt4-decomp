/* NON_MATCHING: synchronization recovered; retail preserves producer-count arithmetic and reloads the final LCD flag through its global address. */
#include "shard/W6_W6Match3_GxPresetResumeState.h"

extern "C" {
extern GxPresetResumeState g_asdGxPresets;
void asdFileWakeWorker(void);
void asdGxSetTopScreenMode(u32 mode);
void FUN_0014a878(s32 event);
void gxLcdClearForceBlack(void);

// Drain queued display events, apply a pending screen mode, and reveal the LCD.
void FUN_00139ab0(void)
{
    s32 available = (g_asdGxPresets.unk1c0 + 1) - g_asdGxPresets.unk1bc;
    s32 queued = available - 1;
    for (s32 i = 0; i < queued; ++i) {
        FUN_0014a878(0x402);
    }
    asdFileWakeWorker();
    FUN_0014a878(0x402);
    g_asdGxPresets.unk1bc = 0;
    s32 mode = g_asdGxPresets.pending;
    if (mode >= 0) {
        g_asdGxPresets.current = mode;
        g_asdGxPresets.pending = -1;
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
