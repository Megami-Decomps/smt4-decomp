#include "common.h"

extern "C" {

int nn_snd_CTR_Dspsnd_SetSoundOutputMode(u8 *state, u32 mode);

typedef struct MasterManagerImpl {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ s8 soundOutputMode;
} MasterManagerImpl;

extern u8 g_dspsndState;
extern int nn_snd_CTR_Dspsnd_IsInitialized(void);

void nn_snd_CTR_MasterManagerImpl_SetSoundOutputMode(MasterManagerImpl *manager, u32 mode)
{
    if (nn_snd_CTR_Dspsnd_IsInitialized() != 0) {
        manager->soundOutputMode = mode;
        nn_snd_CTR_Dspsnd_SetSoundOutputMode(&g_dspsndState, mode);
    }
}

} /* extern "C" */
