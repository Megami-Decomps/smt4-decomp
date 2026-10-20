/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_snd_CTR_Dspsnd_SetIsHeadsetConnected` (_code @ 0x147254, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002bb274(void);


unsigned char nn_snd_CTR_Dspsnd_SetIsHeadsetConnected(int param_1,unsigned char param_2)

{
  int temp_v0;
  unsigned int *puVar2;
  
  temp_v0 = FUN_002bb274();
  if (temp_v0 != 0) {
    puVar2 = *(unsigned int **)(param_1 + (unsigned int)*(unsigned short *)(param_1 + 0x131e) * 4 + 0x10a0);
    *(unsigned short *)((int)puVar2 + 0x1a) = (unsigned short)param_2;
    *puVar2 = *puVar2 | 0x10000000;
  }
  return temp_v0 != 0;
}

} /* extern "C" */
