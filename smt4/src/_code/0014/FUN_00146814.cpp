/* NON_MATCHING: readable DSP wrapper; retail loads the g_callbackState pointer before the argument move and orders the literal pool error constant first. */
#include "nn/dsp/DspComponentState.h"

extern "C" {
u32 nn_dsp_CTR_DSP_SetSemaphore(u32 component, u16 value);

u32 FUN_00146814(u16 value)
{
    u32 result = DSP_RESULT_NOT_LOADED;
    u32 component = g_callbackState.component;
    if (component != 0) {
        result = nn_dsp_CTR_DSP_SetSemaphore(component, value);
    }
    return result;
}
}
