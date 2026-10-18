/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_snd_CTR_Dspsnd_SetAuxFrontBypass` (_code @ 0x14715c, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002bb274(void);


unsigned int nn_snd_CTR_Dspsnd_SetAuxFrontBypass(int param_1,int param_2,unsigned short param_3)

{
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002bb274();
  if (temp_v0 == 0) {
    return 0;
  }
  puVar2 = *(unsigned int **)(param_1 + (unsigned int)*(unsigned short *)(param_1 + 0x131e) * 4 + 0x10a0);
  *(unsigned short *)((int)puVar2 + param_2 * 2 + 0x24) = param_3;
  if (param_2 == 0) {
    temp_v1 = *puVar2 | 0x40;
  }
  else {
    if (param_2 != 1) {
      return 1;
    }
    temp_v1 = *puVar2 | 0x80;
  }
  *puVar2 = temp_v1;
  return 1;
}
