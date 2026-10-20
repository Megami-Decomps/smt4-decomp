#include "nn/Result.h"

extern "C" {

s32 nn_cec_CTR_detail_InitializeCecControl(void);
void FUN_0042fe3c(void);
s32 FUN_0015997c(void);
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

extern CecState DAT_005b4486;

/* One-time CEC initialization; returns the first failing result, or the service setup's. */
s32 FUN_0042d378(void)
{
    s32 result = 0;

    if (!DAT_005b4486.initialized) {
        s32 init = nn_cec_CTR_detail_InitializeCecControl();
        if (nnResultIsFailure(init)) {
            return init;
        }
        FUN_0042fe3c();
        s32 setup = FUN_0015997c();
        result = setup;
        if (!nnResultIsSuccess(setup)) {
            return setup;
        }
        DAT_005b4486.serviceReady = 1;
        nn_cfg_CTR_Initialize();
        DAT_005b4486.debugMode = nn_cfg_CTR_IsDebugMode();
        FUN_001a0eb0();
        DAT_005b4486.initialized = 1;
    }
    return result;
}

} /* extern "C" */
