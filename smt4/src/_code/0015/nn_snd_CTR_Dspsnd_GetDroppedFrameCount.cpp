/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_snd_CTR_Dspsnd_GetDroppedFrameCount` (_code @ 0x15e8fc, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002bb274(void);


int nn_snd_CTR_Dspsnd_GetDroppedFrameCount(int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002bb274();
  if (temp_v0 == 0) {
    temp_v1 = 0xffffffff;
  }
  else {
    temp_v1 = (unsigned int)*(unsigned short *)
                   (*(int *)(param_1 + (unsigned int)*(unsigned short *)(param_1 + 0x131c) * 4 + 0x10a8) + 2);
  }
  return temp_v1;
}

} /* extern "C" */
