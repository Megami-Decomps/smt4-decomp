/* NON_MATCHING: retail reloads the global base for the final force-black byte query; compiler reuses saved R4, producing one fewer instruction. */
#include "shard/W6_W6Match3_GxPresetResumeState.h"

extern "C" {
extern GxPresetResumeState g_asdGxPresets;
void asdFileWakeWorker(void);
void asdGxSetTopScreenMode(u32 mode);
void gxLcdClearForceBlack(void);

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
    if (!g_asdGxPresets.forceBlackCleared) {
        gxLcdClearForceBlack();
        g_asdGxPresets.forceBlackCleared = 1;
    }
}
}
