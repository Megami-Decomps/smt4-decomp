/* Shuts the sound system down when it is running: unregisters the sound callbacks, finalises the master and voice
 * managers and, unless the DSP is owned elsewhere, the DSP sound state. Always returns 0. */
#include "common.h"
#include "mobiclip_ctrl/helper_S4AudioDevice.h"

extern "C" {
/* Flags of the sound system. */
struct SoundSystemState {
    /* 0x00 */ u8 running;
    /* 0x01 */ u8 unk01[2];
    /* 0x03 */ u8 dspOwnedElsewhere;
};

extern SoundSystemState DAT_005894e4;
extern u8 g_nnSndMasterManager;
extern u8 g_nnSndVoiceManager;
extern u8 g_dspsndState;

typedef void (*SoundCallback)(void);
void FUN_0016f3a8(void);
void dspsndHandlePendingRequest(void);
void FUN_0016f3e4(void);
void FUN_001590c0(SoundCallback first, SoundCallback second, SoundCallback third);
void FUN_001bd5f8(void);
void FUN_0016f374(void);
void sndMasterFinalize(void *manager);
void FUN_00159e18(void *manager);
void nn_snd_CTR_Dspsnd_Finalize(void *state, s32 flag);

s32 sndSystemShutdown(void)
{
    if (DAT_005894e4.running == 0) {
        return 0;
    }
    DAT_005894e4.running = 0;
    FUN_001590c0(FUN_0016f3e4, dspsndHandlePendingRequest, FUN_0016f3a8);
    FUN_001bd5f8();
    FUN_0016f374();
    sndMasterFinalize(&g_nnSndMasterManager);
    FUN_00159e18(&g_nnSndVoiceManager);
    if (DAT_005894e4.dspOwnedElsewhere == 0) {
        nn_snd_CTR_Dspsnd_Finalize(&g_dspsndState, 0);
    }
    return 0;
}
}
