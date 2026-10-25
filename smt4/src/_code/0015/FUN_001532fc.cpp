/* Releases the delay and reverb effects attached to aux bus `bus` (under the manager's lock) and resets the bus. */
#include "nn/os/CriticalSectionLock.h"

extern "C" {
/* The effects attached to one aux bus. */
struct AuxBusFx {
    /* 0x00 */ void *delay;
    /* 0x04 */ void *reverb;
};

struct SoundFxManager {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ AuxBusFx fx[2];
    /* 0x44 */ u8 lock[0x10];     /* nn::os::CriticalSection */
};

extern u8 g_nnSndMasterManagerImpl;
void nn_snd_CTR_FxDelay_Finalize(void *delay);
void nn_snd_CTR_FxReverb_Finalize(void *reverb);
void FUN_002a2ab0(void *manager, s32 bus, s32 enable);

void FUN_001532fc(SoundFxManager *manager, s32 bus)
{
    CriticalSectionLock guard(manager->lock);

    if (manager->fx[bus].delay != NULL) {
        nn_snd_CTR_FxDelay_Finalize(manager->fx[bus].delay);
    }
    if (manager->fx[bus].reverb != NULL) {
        nn_snd_CTR_FxReverb_Finalize(manager->fx[bus].reverb);
    }
    manager->fx[bus].delay = NULL;
    manager->fx[bus].reverb = NULL;
    FUN_002a2ab0(&g_nnSndMasterManagerImpl, bus, 0);
}
}
