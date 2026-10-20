#include "common.h"

extern "C" {

extern u8 g_nnSndVoiceManager;
extern void nn_snd_CTR_VoiceManager_FreeVoice(u8 *manager, u32 voice);

void sndVoiceFree(u32 voice)
{
    nn_snd_CTR_VoiceManager_FreeVoice(&g_nnSndVoiceManager, voice);
}

} /* extern "C" */
