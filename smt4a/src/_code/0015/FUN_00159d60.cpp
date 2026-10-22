/* NON_MATCHING: The hardware-mode byte copy uses LDRB rather than retail's signed inline-getter load and changes the adjacent store scheduling. */
#include "nn/snd/Initialization.h"
#include "nn/Result.h"
#include "shard/Dspsnd.h"

extern "C" {
extern NnSndInitialization DAT_005894e4;
extern NnSndMasterManager g_nnSndMasterManager;
extern NnSndVoiceManager g_nnSndVoiceManager;
extern DspsndState g_dspsndState;
s32 FUN_0016f864(void);
s32 FUN_0016f574(DspsndState *state, u32 mode);
void FUN_001a167c(NnSndMasterManager *manager);
void FUN_0016f25c(NnSndMasterManager *manager);
void nn_snd_CTR_VoiceManager_Initialize(NnSndVoiceManager *manager);
u32 FUN_001bd5f8(void);
void nn_snd_CTR_DspFxManager_Initialize(u32 work);
void FUN_0016e700(void (*first)(void), void (*second)(void), void (*third)(void));
void FUN_0016f3e4(void);
void FUN_0016f7ec(void);
void FUN_0016f3a8(void);

/* Initializes the DSP, master, voice and effect managers once and installs their callbacks. */
s32 FUN_00159d60(void)
{
    if (DAT_005894e4.initialized != 0) {
        return 0x0820ABF9;
    }
    s32 result = FUN_0016f864();
    if (nnResultIsFailure(result)) {
        return result;
    }
    result = FUN_0016f574(&g_dspsndState, 0);
    if (nnResultIsFailure(result)) {
        return result;
    }
    DAT_005894e4.hardwareMode = reinterpret_cast<const SystemSoundInfo *>(0x1FF81000)->mode;
    FUN_001a167c(&g_nnSndMasterManager);
    nn_snd_CTR_VoiceManager_Initialize(&g_nnSndVoiceManager);
    FUN_0016f25c(&g_nnSndMasterManager);
    nn_snd_CTR_DspFxManager_Initialize(FUN_001bd5f8());
    FUN_0016e700(FUN_0016f3e4, FUN_0016f7ec, FUN_0016f3a8);
    DAT_005894e4.unk01 = 0;
    DAT_005894e4.unk02 = 0;
    DAT_005894e4.unk03 = 0;
    DAT_005894e4.ready = 1;
    DAT_005894e4.initialized = 1;
    return 0;
}
}
