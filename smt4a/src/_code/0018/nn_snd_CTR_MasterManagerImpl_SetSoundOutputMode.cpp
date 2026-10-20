#include "common.h"

extern "C" {

void nn_snd_CTR_Dspsnd_SetSoundOutputMode(u8 *state, u32 mode);
s32 nn_snd_CTR_Dspsnd_IsInitialized(void);
extern u8 g_dspsndState[];

typedef struct MasterManagerImpl {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ u8 outputMode;
} MasterManagerImpl;

/* Records the sound output mode and forwards it to the DSP sound state, if nn_snd_CTR_Dspsnd_IsInitialized allows it. */
void nn_snd_CTR_MasterManagerImpl_SetSoundOutputMode(MasterManagerImpl *manager, u32 mode)
{
    if (nn_snd_CTR_Dspsnd_IsInitialized() != 0) {
        manager->outputMode = (u8)mode;
        nn_snd_CTR_Dspsnd_SetSoundOutputMode(g_dspsndState, mode);
        return;
    }
}

} /* extern "C" */
