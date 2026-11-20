/* NON_MATCHING: the fatal result handler still needs the SDK's instruction-address argument; the saved fields are scheduled differently around the load guard. */
#include "nn/dsp/DspComponent.h"
#include "nn/Result.h"

extern "C" {
int errThrowFatal(void);
int FUN_001a1118(int, int);
extern void (*DAT_0061a664[8])(void);

/* Reloads the saved DSP image and notifies the registered callbacks. */
void FUN_00189938(void)
{
    g_callbackState.unk0 = 0;
    if (!g_callbackState.reloadPending)
        return;

    s32 result;
    if (g_callbackState.component != 0 && g_callbackState.loaded == 0) {
        result = nn_dsp_CTR_DSP_LoadComponent((s32 *)g_callbackState.component,
                    (u32)g_callbackState.image.data, g_callbackState.image.size,
                    g_callbackState.programMask, g_callbackState.dataMask, &DAT_00589285);
    } else {
        result = DSP_RESULT_CANNOT_LOAD_COMPONENT;
    }
    if (nnResultIsFailure(result))
        errThrowFatal();

    for (s32 i = 0; i < 8; ++i) {
        if (DAT_0061a664[i])
            DAT_0061a664[i]();
    }
    g_callbackState.reloadPending = 0;
    if (g_callbackState.component != 0)
        FUN_001a1118(g_callbackState.component, g_callbackState.started);
}

} /* extern "C" */
