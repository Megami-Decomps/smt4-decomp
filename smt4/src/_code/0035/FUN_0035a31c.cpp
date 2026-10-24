/* NON_MATCHING: same stores and call; retail passes the load-status byte as its own symbol (DAT_0044e459, not g_callbackState + 1) and keeps `data` in r4 while the DSP handle stays in r0 for the call, built swaps those registers */
#include "common.h"

extern "C" {

struct DspComponentState {
    /* 0x00 */ u8 unk00;
    /* 0x01 */ s8 loaded;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ u16 sampleRate;
    /* 0x06 */ u16 channels;
    /* 0x08 */ s32 handle;
    /* 0x0c */ u8 unk0c[0x0c];
    /* 0x18 */ u8 *data;
    /* 0x1c */ u32 size;
};

extern DspComponentState g_callbackState;

u32 nn_dsp_CTR_DSP_LoadComponent(s32 handle, u8 *data, u32 size, u16 sampleRate, u16 channels, s8 *loaded);

/* Records the DSP component image and loads it once a DSP handle exists and nothing is loaded yet. */
u32 FUN_0035a31c(u8 *data, u32 size, u16 sampleRate, u16 channels)
{
    g_callbackState.data = data;
    g_callbackState.size = size;
    g_callbackState.sampleRate = sampleRate;
    g_callbackState.channels = channels;
    if (g_callbackState.handle != 0 && g_callbackState.loaded == 0) {
        return nn_dsp_CTR_DSP_LoadComponent(g_callbackState.handle, data, size, sampleRate, channels, &g_callbackState.loaded);
    }
    return 0xc8a0a7fc;
}

} /* extern "C" */
