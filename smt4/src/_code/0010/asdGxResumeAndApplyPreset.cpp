/* NON_MATCHING: armcc emits `nop {0}` between the force-black getter's cmp and bne; retail has none. */
#include "shard/W6_W6Match3_GxPresetResumeState.h"

extern "C" {
extern GxPresetResumeState g_asdGxPresets;
void asdFileWakeWorker(void);
void asdGxSetTopScreenMode(u32 mode);
void gxLcdClearForceBlack(void);
u8 asdGxGetBlackForced(const GxPresetResumeState *presets);

void asdGxResumeAndApplyPreset(void)
{
    asdFileWakeWorker();
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
}
