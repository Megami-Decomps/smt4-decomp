/* NON_MATCHING: readable DSP wrapper; retail loads the g_callbackState pointer before the argument move and orders the literal pool error constant first. */
#include "nn/dsp/DspComponentState.h"

extern "C" {
u32 nn_dsp_CTR_DSP_SetSemaphoreMask(u32 component, u16 mask);

u32 FUN_0013a23c(u16 mask)
{
    u32 result = DSP_RESULT_NOT_LOADED;
    u32 component = g_callbackState.component;
    if (component != 0) {
        result = nn_dsp_CTR_DSP_SetSemaphoreMask(component, mask);
    }
    return result;
}
}
