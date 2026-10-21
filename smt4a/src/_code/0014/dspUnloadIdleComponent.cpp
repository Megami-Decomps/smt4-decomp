#include "common.h"

struct DspCallbackState {
    u8 unk00;          // 0x00
    u8 loaded;         // 0x01
    u8 unk02;          // 0x02
    u8 stopped;        // 0x03
    u32 unk04;         // 0x04
    u32 component;     // 0x08
    u32 activeCount;   // 0x0c
};

extern "C" {
void sysFatalBreak();
u32 nn_dsp_CTR_DSP_UnloadComponent(u32);
extern DspCallbackState g_callbackState;
extern u32 g_dspCallbackSlots[8];

// Require all callbacks to be idle before unloading the DSP component.
u32 dspUnloadIdleComponent()
{
    if (g_callbackState.activeCount != 0) {
        sysFatalBreak();
    }
    for (s32 i = 0; i < 8; ++i) {
        if (g_dspCallbackSlots[i] != 0) {
            sysFatalBreak();
        }
    }
    u32 result = 0;
    if (g_callbackState.loaded != 0) {
        result = nn_dsp_CTR_DSP_UnloadComponent(g_callbackState.component);
        g_callbackState.loaded = 0;
    }
    g_callbackState.stopped = 1;
    return result;
}
}
