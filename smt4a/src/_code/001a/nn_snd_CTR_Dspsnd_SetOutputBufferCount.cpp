/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_snd_CTR_Dspsnd_SetOutputBufferCount` (_code @ 0x1a1aa0, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_001c6e20(void);


void nn_snd_CTR_Dspsnd_SetOutputBufferCount(int param_1,int param_2)

{
  int temp_v0;
  unsigned int *puVar2;
  
  temp_v0 = FUN_001c6e20();
  if (temp_v0 != 0) {
    puVar2 = *(unsigned int **)(param_1 + (unsigned int)*(unsigned short *)(param_1 + 0x131e) * 4 + 0x10a0);
    *(short *)(puVar2 + 4) = (short)param_2;
    *puVar2 = *puVar2 | 0x8000;
  }
  return;
}

} /* extern "C" */
