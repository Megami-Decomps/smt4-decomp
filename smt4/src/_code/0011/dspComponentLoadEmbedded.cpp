/* Loads the DSP sound component from the embedded binary into the shared DSP state. Fails with 0xC8A0A7FC when the DSP
 * session is not open or the component is already loaded. */
#include "nn/dsp/DspComponent.h"

extern "C" {
extern u8 g_dspComponentEmbeddedData[];

/* Records the DSP component image and loads it once a DSP session exists and nothing is loaded yet. */
static __inline u32 dspComponentLoad(const u8 *data, u32 size, u16 programMask, u16 dataMask)
{
    g_callbackState.image.data = data;
    g_callbackState.image.size = size;
    g_callbackState.programMask = programMask;
    g_callbackState.dataMask = dataMask;
    if (g_callbackState.component != 0 && g_callbackState.loaded == 0) {
        return nn_dsp_CTR_DSP_LoadComponent((u32 *)g_callbackState.component, data, size, programMask, dataMask,
                                            &g_callbackState.loaded);
    }
    return DSP_RESULT_CANNOT_LOAD_COMPONENT;
}

u32 dspComponentLoadEmbedded(void)
{
    return dspComponentLoad(g_dspComponentEmbeddedData, 0xC20A, 0xFF, 0xFF);
}
}
