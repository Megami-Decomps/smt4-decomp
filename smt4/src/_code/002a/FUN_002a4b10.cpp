/* NON_MATCHING: DSP wrapper family: retail loads the g_callbackState pointer before the error constant (pool order) and moves the second argument first. */
#include "nn/dsp/DspComponentState.h"

extern "C" {
extern u32 DAT_00407e38;
u32 nn_dsp_CTR_DSP_FlushDataCache(u32 component, u32 process, u32 address, u32 size);

u32 FUN_002a4b10(u32 address, u32 size)
{
    u32 result = DSP_RESULT_NOT_LOADED;
    u32 component = g_callbackState.component;
    if (component != 0) {
        result = nn_dsp_CTR_DSP_FlushDataCache(component, DAT_00407e38, address, size);
    }
    return result;
}
}
