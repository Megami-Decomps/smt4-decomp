#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_004e8568; /* 0x4e8568 */

extern void nn_snd_CTR_VoiceManager_FreeVoice(unsigned int, unsigned int);


void FUN_002bd430(unsigned int param_1)

{
  nn_snd_CTR_VoiceManager_FreeVoice((unsigned int)&DAT_004e8568,param_1);
  return;
}

} /* extern "C" */
