#include "common.h"

extern "C" {

int soundMasterSetVolumeIfEnabled(u8 *manager);

extern u8 g_nnSndMasterManager;

void nw_snd_SoundSystem_SetMasterVolume(void)
{
    soundMasterSetVolumeIfEnabled(&g_nnSndMasterManager);
}

} /* extern "C" */
