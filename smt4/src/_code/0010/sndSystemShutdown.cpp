/* Shuts the sound system down when it is running: unregisters the sound callbacks, finalises the master and voice
 * managers and, unless the DSP is owned elsewhere, the DSP sound state. Always returns 0. */
#include "common.h"

extern "C" {
/* Flags of the sound system. */
struct SoundSystemState {
    /* 0x00 */ u8 running;
    /* 0x01 */ u8 unk01[2];
    /* 0x03 */ u8 dspOwnedElsewhere;
};

extern SoundSystemState DAT_0044e7c0;
extern u8 g_nnSndMasterManager;
extern u8 g_nnSndVoiceManager;
extern u8 g_dspsndState;

typedef void (*SoundCallback)(void);
void FUN_00128f60(void);
void dspsndHandlePendingRequest(void);
void FUN_00129084(void);
void FUN_0011bf9c(SoundCallback first, SoundCallback second, SoundCallback third);
void FUN_002bb470(void);
void FUN_00128f2c(void);
void sndMasterFinalize(void *manager);
void FUN_0011ccd4(void *manager);
void nn_snd_CTR_Dspsnd_Finalize(void *state, s32 flag);

s32 sndSystemShutdown(void)
{
    if (DAT_0044e7c0.running == 0) {
        return 0;
    }
    DAT_0044e7c0.running = 0;
    FUN_0011bf9c(FUN_00129084, dspsndHandlePendingRequest, FUN_00128f60);
    FUN_002bb470();
    FUN_00128f2c();
    sndMasterFinalize(&g_nnSndMasterManager);
    FUN_0011ccd4(&g_nnSndVoiceManager);
    if (DAT_0044e7c0.dspOwnedElsewhere == 0) {
        nn_snd_CTR_Dspsnd_Finalize(&g_dspsndState, 0);
    }
    return 0;
}
}
