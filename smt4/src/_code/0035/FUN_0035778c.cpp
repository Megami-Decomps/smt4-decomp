#include "nn/Result.h"

extern "C" {

s32 nn_cec_CTR_detail_InitializeCecControl(void);
void FUN_00358f98(void);
s32 FUN_0011c834(void);
void nn_cfg_CTR_Initialize(void);
u8 nn_cfg_CTR_IsDebugMode(void);
void FUN_001467a4(void);

/* State of the CEC module. */
struct CecState {
    /* 0x0 */ u8 initialized;
    /* 0x1 */ u8 serviceReady;
    /* 0x2 */ u8 unk2[2];
    /* 0x4 */ u8 debugMode;
};

extern CecState DAT_004656ca;

/* One-time CEC initialization; returns the first failing result, or the service setup's. */
s32 FUN_0035778c(void)
{
    s32 result = 0;

    if (!DAT_004656ca.initialized) {
        s32 init = nn_cec_CTR_detail_InitializeCecControl();
        if (nnResultIsFailure(init)) {
            return init;
        }
        FUN_00358f98();
        s32 setup = FUN_0011c834();
        result = setup;
        if (!nnResultIsSuccess(setup)) {
            return setup;
        }
        DAT_004656ca.serviceReady = 1;
        nn_cfg_CTR_Initialize();
        DAT_004656ca.debugMode = nn_cfg_CTR_IsDebugMode();
        FUN_001467a4();
        DAT_004656ca.initialized = 1;
    }
    return result;
}

} /* extern "C" */
