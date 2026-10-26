/* NON_MATCHING: The hardware-mode byte copy uses LDRB rather than retail's signed inline-getter load and changes the adjacent store scheduling. */
#include "nn/snd/Initialization.h"
#include "nn/Result.h"
#include "shard/Dspsnd.h"
#include "code/Code002c_Result.h"

extern "C" {
extern NnSndInitialization DAT_0044e7c0;
extern NnSndMasterManager g_nnSndMasterManager;
extern NnSndVoiceManager g_nnSndVoiceManager;
extern DspsndState g_dspsndState;
s32 FUN_00129214(DspsndState *state, u32 mode);
void FUN_00146e40(NnSndMasterManager *manager);
void FUN_00128e20(NnSndMasterManager *manager);
void nn_snd_CTR_VoiceManager_Initialize(NnSndVoiceManager *manager);
u32 FUN_002bb470(void);
void nn_snd_CTR_DspFxManager_Initialize(u32 work);
void FUN_0012852c(void (*first)(void), void (*second)(void), void (*third)(void));
void FUN_00129084(void);
void FUN_00129478(void);
void FUN_00128f60(void);

/* Initializes the DSP, master, voice and effect managers once and installs their callbacks. */
s32 FUN_0011cc1c(void)
{
    if (DAT_0044e7c0.initialized != 0) {
        return 0x0820ABF9;
    }
    s32 result = (s32)FUN_002c1398();
    if (nnResultIsFailure(result)) {
        return result;
    }
    result = FUN_00129214(&g_dspsndState, 0);
    if (nnResultIsFailure(result)) {
        return result;
    }
    s32 mode = reinterpret_cast<const SystemSoundInfo *>(0x1FF81000)->mode;

    DAT_0044e7c0.hardwareMode = mode;
    FUN_00146e40(&g_nnSndMasterManager);
    nn_snd_CTR_VoiceManager_Initialize(&g_nnSndVoiceManager);
    FUN_00128e20(&g_nnSndMasterManager);
    nn_snd_CTR_DspFxManager_Initialize(FUN_002bb470());
    FUN_0012852c(FUN_00129084, FUN_00129478, FUN_00128f60);
    DAT_0044e7c0.unk01 = 0;
    DAT_0044e7c0.unk02 = 0;
    DAT_0044e7c0.unk03 = 0;
    DAT_0044e7c0.ready = 1;
    DAT_0044e7c0.initialized = 1;
    return 0;
}
}
