/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015e104` (_code @ 0x15e104, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_004e6f64; /* 0x4e6f64 */

extern int nn_snd_CTR_Dspsnd_GetDroppedFrameCount(unsigned int);


void FUN_0015e104(int param_1)

{
  int temp_v0;
  
  temp_v0 = nn_snd_CTR_Dspsnd_GetDroppedFrameCount((unsigned int)&DAT_004e6f64);
  if (-1 < temp_v0) {
    *(int *)(param_1 + 0x30) = temp_v0 + *(int *)(param_1 + 0x30);
  }
  return;
}

} /* extern "C" */
