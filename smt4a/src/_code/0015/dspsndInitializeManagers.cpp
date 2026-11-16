#include "nn/snd/Initialization.h"
#include "nn/Result.h"
#include "shard/Dspsnd.h"

extern "C" {
extern NnSndInitialization g_sndSystemState;
extern NnSndMasterManager g_nnSndMasterManager;
extern NnSndVoiceManager g_nnSndVoiceManager;
extern DspsndState g_dspsndState;
s32 FUN_0016f864(void);
s32 FUN_0016f574(DspsndState *state, u32 mode);
void FUN_001a167c(NnSndMasterManager *manager, s8 value);
void FUN_0016f25c(NnSndMasterManager *manager);
void nn_snd_CTR_VoiceManager_Initialize(NnSndVoiceManager *manager);
u32 FUN_001bd5f8(void);
void nn_snd_CTR_DspFxManager_Initialize(u32 work);
void FUN_0016e700(void (*first)(void), void (*second)(void), void (*third)(void));
void FUN_0016f3e4(void);
void dspsndHandlePendingRequest(void);
void FUN_0016f3a8(void);

/* Initializes the DSP, master, voice and effect managers once and installs their callbacks. */
s32 dspsndInitializeManagers(void)
{
    if (g_sndSystemState.initialized != 0) {
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
    s8 mode = reinterpret_cast<const SystemSoundInfo *>(0x1FF81000)->mode;

    g_sndSystemState.hardwareMode = mode;
    FUN_001a167c(&g_nnSndMasterManager, mode);
    nn_snd_CTR_VoiceManager_Initialize(&g_nnSndVoiceManager);
    FUN_0016f25c(&g_nnSndMasterManager);
    nn_snd_CTR_DspFxManager_Initialize(FUN_001bd5f8());
    FUN_0016e700(FUN_0016f3e4, dspsndHandlePendingRequest, FUN_0016f3a8);
    g_sndSystemState.unk01 = 0;
    g_sndSystemState.unk02 = 0;
    g_sndSystemState.unk03 = 0;
    g_sndSystemState.ready = 1;
    g_sndSystemState.initialized = 1;
    return 0;
}
}
