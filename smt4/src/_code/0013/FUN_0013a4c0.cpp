/* NON_MATCHING: readable DSP wrapper; retail loads the g_callbackState pointer before the argument move and orders the literal pool error constant first. */
#include "nn/dsp/DspComponentState.h"

extern "C" {
u32 nn_dsp_CTR_DSP_RecvData(u32 component, u16 index, u16 *data);

u32 FUN_0013a4c0(u16 index, u16 *data)
{
    u32 result = DSP_RESULT_NOT_LOADED;
    u32 component = g_callbackState.component;
    if (component != 0) {
        result = nn_dsp_CTR_DSP_RecvData(component, index, data);
    }
    return result;
}
}
