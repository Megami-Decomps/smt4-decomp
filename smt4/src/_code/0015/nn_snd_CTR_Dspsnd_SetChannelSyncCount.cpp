/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_snd_CTR_Dspsnd_SetChannelSyncCount` (_code @ 0x15f154, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002bb274(void);


unsigned char nn_snd_CTR_Dspsnd_SetChannelSyncCount(int param_1,unsigned char param_2,short param_3)

{
  int temp_v0;
  unsigned int *puVar2;
  
  temp_v0 = FUN_002bb274();
  if (temp_v0 != 0) {
    puVar2 = *(unsigned int **)(param_1 + (*(unsigned short *)(param_1 + 0x131a) & 1) * 0x60 + (unsigned int)param_2 * 4 +
                       0x10b0);
    *(short *)((int)puVar2 + 0xa2) = param_3;
    *puVar2 = *puVar2 | 0x10000000;
  }
  return temp_v0 != 0;
}

} /* extern "C" */
