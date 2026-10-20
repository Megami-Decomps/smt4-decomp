#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_006449d0; /* 0x6449d0 */

extern void nn_snd_CTR_VoiceManager_FreeVoice(unsigned int, unsigned int);


void FUN_001afdc4(unsigned int param_1)

{
  nn_snd_CTR_VoiceManager_FreeVoice((unsigned int)&DAT_006449d0,param_1);
  return;
}

} /* extern "C" */
