#include "common.h"

extern "C" {

void nn_snd_CTR_VoiceManager_FreeVoice(u8 *manager, u32 voice);
extern u8 DAT_006449d0[];

/* Frees `voice` in the voice manager at 0x6449D0. */
void FUN_001afdc4(u32 voice)
{
    nn_snd_CTR_VoiceManager_FreeVoice(DAT_006449d0, voice);
}

} /* extern "C" */
