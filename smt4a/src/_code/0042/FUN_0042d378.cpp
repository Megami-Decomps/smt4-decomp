#include "nn/Result.h"

extern "C" {

s32 nn_cec_CTR_detail_InitializeCecControl(void);
void FUN_0042fe3c(void);
s32 ipcServiceSessionAcquire(void);
void nn_cfg_CTR_Initialize(void);
u8 nn_cfg_CTR_IsDebugMode(void);
void FUN_001a0eb0(void);

/* State of the CEC module. */
struct CecState {
    /* 0x0 */ u8 initialized;
    /* 0x1 */ u8 serviceReady;
    /* 0x2 */ u8 unk2[2];
    /* 0x4 */ u8 debugMode;
};

extern CecState g_cecState;

/* One-time CEC initialization; returns the first failing result, or the service setup's. */
s32 FUN_0042d378(void)
{
    s32 result = 0;

    if (!g_cecState.initialized) {
        s32 init = nn_cec_CTR_detail_InitializeCecControl();
        if (nnResultIsFailure(init)) {
            return init;
        }
        FUN_0042fe3c();
        s32 setup = ipcServiceSessionAcquire();
        result = setup;
        if (!nnResultIsSuccess(setup)) {
            return setup;
        }
        g_cecState.serviceReady = 1;
        nn_cfg_CTR_Initialize();
        g_cecState.debugMode = nn_cfg_CTR_IsDebugMode();
        FUN_001a0eb0();
        g_cecState.initialized = 1;
    }
    return result;
}

} /* extern "C" */
