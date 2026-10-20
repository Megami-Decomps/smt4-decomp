/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d1794` (_code @ 0x1d1794, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_006433d0; /* 0x6433d0 */

extern int nn_snd_CTR_Dspsnd_GetDroppedFrameCount(unsigned int);


void FUN_001d1794(int param_1)

{
  int temp_v0;
  
  temp_v0 = nn_snd_CTR_Dspsnd_GetDroppedFrameCount((unsigned int)&DAT_006433d0);
  if (-1 < temp_v0) {
    *(int *)(param_1 + 0x30) = temp_v0 + *(int *)(param_1 + 0x30);
  }
  return;
}

} /* extern "C" */
