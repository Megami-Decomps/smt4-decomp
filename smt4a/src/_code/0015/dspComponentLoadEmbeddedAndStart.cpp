#include "nn/Result.h"
#include "nn/dsp/DspComponent.h"

extern "C" {
extern const u8 DAT_005b4824[]; /* Embedded DSP component image. */

/* Records the DSP image and loads it into an idle session, as in IV's DSP loader. */
static __inline s32 dspComponentLoad(const u8 *image, u32 size, u16 programMask, u16 dataMask)
{
    g_callbackState.image.data = image;
    g_callbackState.image.size = size;
    g_callbackState.programMask = programMask;
    g_callbackState.dataMask = dataMask;
    if (g_callbackState.component != 0 && g_callbackState.loaded == 0) {
        return nn_dsp_CTR_DSP_LoadComponent((s32 *)g_callbackState.component, (u32)image, size,
                                          programMask, dataMask, &DAT_00589285);
    }
    return DSP_RESULT_CANNOT_LOAD_COMPONENT;
}

/* Loads the embedded DSP component and marks the callback state started on success. */
s32 dspComponentLoadEmbeddedAndStart(void)
{
    enum { DSP_IMAGE_SIZE = 0xC25C, DSP_FULL_MEMORY_MASK = 0xFF };
    s32 result = dspComponentLoad(DAT_005b4824, DSP_IMAGE_SIZE, DSP_FULL_MEMORY_MASK, DSP_FULL_MEMORY_MASK);
    if (nnResultIsSuccess(result)) {
        g_callbackState.started = 1;
    }
    return result;
}

} /* extern "C" */
