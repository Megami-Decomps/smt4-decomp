#include "common.h"

extern "C" {

extern u8 DAT_004e8568;
extern void nn_snd_CTR_VoiceManager_FreeVoice(u8 *manager, u32 voice);

void FUN_002bd430(u32 voice)
{
    nn_snd_CTR_VoiceManager_FreeVoice(&DAT_004e8568, voice);
}

} /* extern "C" */
