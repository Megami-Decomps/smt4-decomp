/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d3714` (_code @ 0x1d3714, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_006449d0; /* 0x6449d0 */

extern void nn_snd_CTR_VoiceManager_SetPriority(unsigned int, unsigned int, int);


void FUN_001d3714(int param_1,int param_2)

{
  if (param_2 >= 0x8000) {
    param_2 = 0x7fff;
  }
  if (param_2 < 0) {
    param_2 = 0;
  }
  *(int *)(param_1 + 0x20) = param_2;
  nn_snd_CTR_VoiceManager_SetPriority((unsigned int)&DAT_006449d0,param_1,param_2);
  return;
}
