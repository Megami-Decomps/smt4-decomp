/* NON_MATCHING: retail loads both queue words with ldm (begin, end) and keeps the +1 and -1 as separate adds in the flush count (armcc folds them or emits subgt); the build also adds a nop before the force-black test when it goes through asdGxGetBlackForced. */
#include "shard/W6_W6Match3_GxPresetResumeState.h"

extern "C" {
extern GxPresetResumeState g_asdGxPresets;
void asdFileWakeWorker(void);
void asdGxSetTopScreenMode(u32 mode);
void gxLcdClearForceBlack(void);
void FUN_00113244(u32 command);
u8 asdGxGetBlackForced(const GxPresetResumeState *presets);

/* Flush the queued GX commands, wake the file worker, then apply a pending top-screen preset. */
void FUN_001052d8(void)
{
    s32 count = g_asdGxPresets.unk1c0 + 1 - g_asdGxPresets.unk1bc;
    s32 i;

    for (i = 0; i < count - 1; i++) {
        FUN_00113244(0x402);
    }
    asdFileWakeWorker();
    FUN_00113244(0x402);
    g_asdGxPresets.unk1bc = 0;
    if (g_asdGxPresets.pending >= 0) {
        g_asdGxPresets.current = g_asdGxPresets.pending;
        g_asdGxPresets.pending = -1;
        switch (g_asdGxPresets.current) {
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
