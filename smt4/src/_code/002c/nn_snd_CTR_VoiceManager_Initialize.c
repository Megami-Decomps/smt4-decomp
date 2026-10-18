/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_snd_CTR_VoiceManager_Initialize` (_code @ 0x2c38dc, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: nn_os_SimpleLock_Initialize. */


void nn_snd_CTR_VoiceManager_Initialize(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  *(unsigned short *)(param_1 + 3) = 0;
  *(unsigned char *)((int)param_1 + 0xe) = 0;
  nn_os_SimpleLock_Initialize();
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}
