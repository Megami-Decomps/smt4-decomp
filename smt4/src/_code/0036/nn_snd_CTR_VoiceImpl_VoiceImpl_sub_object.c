/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_snd_CTR_VoiceImpl_VoiceImpl_sub_object` (_code @ 0x3601e4, 0x78 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002c38fc. */


unsigned int * nn_snd_CTR_VoiceImpl_VoiceImpl_sub_object(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = param_2;
  param_1[0x16] = 0;
  param_1[0x12] = 0;
  param_1[0xe] = 0;
  param_1[0x17] = 0;
  param_1[0x13] = 0;
  param_1[0xf] = 0;
  param_1[0x18] = 0;
  param_1[0x14] = 0;
  param_1[0x10] = 0;
  param_1[0x19] = 0;
  param_1[0x15] = 0;
  param_1[0x11] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0xffffffff;
  FUN_002c38fc(param_1 + 0x1c);
  *(unsigned short *)(param_1 + 1) = 1;
  *(unsigned short *)(param_1 + 0x1b) = *(unsigned short *)(param_1 + 0x1b) | 0x8000;
  return param_1;
}
