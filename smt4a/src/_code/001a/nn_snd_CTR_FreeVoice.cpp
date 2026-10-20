#include "common.h"

extern "C" {

void nn_snd_CTR_VoiceManager_FreeVoice(u8 *manager, u32 voice);
extern u8 g_nnSndVoiceManager[];

/* Frees `voice` in the voice manager at 0x6449D0. */
void nn_snd_CTR_FreeVoice(u32 voice)
{
    nn_snd_CTR_VoiceManager_FreeVoice(g_nnSndVoiceManager, voice);
}

} /* extern "C" */
