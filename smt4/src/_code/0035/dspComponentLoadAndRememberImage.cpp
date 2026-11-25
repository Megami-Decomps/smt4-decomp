#include "nn/dsp/DspComponent.h"

/* Saves the component image for later reloads and loads it into an idle DSP session. */
extern "C" u32 dspComponentLoadAndRememberImage(const u8 *data, u32 size, u16 programMask, u16 dataMask)
{
    g_callbackState.image.data = data;
    g_callbackState.image.size = size;
    g_callbackState.programMask = programMask;
    g_callbackState.dataMask = dataMask;
    if (g_callbackState.component != 0 && g_callbackState.loaded == 0) {
        return nn_dsp_CTR_DSP_LoadComponent((u32 *)g_callbackState.component, g_callbackState.image.data,
                                            g_callbackState.image.size, programMask, dataMask, &g_callbackState.loaded);
    }
    return DSP_RESULT_CANNOT_LOAD_COMPONENT;
}
