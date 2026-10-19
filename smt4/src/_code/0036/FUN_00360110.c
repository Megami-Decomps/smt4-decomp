/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00360110` (_code @ 0x360110, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004e8568; /* 0x4e8568 */

extern void nn_snd_CTR_VoiceManager_SetPriority(unsigned int, unsigned int, int);


void FUN_00360110(int param_1,int param_2)

{
  if (param_2 >= 0x8000) {
    param_2 = 0x7fff;
  }
  if (param_2 < 0) {
    param_2 = 0;
  }
  *(int *)(param_1 + 0x20) = param_2;
  nn_snd_CTR_VoiceManager_SetPriority((unsigned int)&DAT_004e8568,param_1,param_2);
  return;
}
