/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_snd_CTR_Dspsnd_SetChannelIIRFilter_Mono` (_code @ 0x1b61ac, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001c6e20(void);


unsigned char nn_snd_CTR_Dspsnd_SetChannelIIRFilter_Mono
               (int param_1,int param_2,unsigned short param_3,unsigned short param_4)

{
  int temp_v0;
  unsigned int *puVar2;
  
  temp_v0 = FUN_001c6e20();
  if (temp_v0 != 0) {
    puVar2 = *(unsigned int **)(param_1 + (*(unsigned short *)(param_1 + 0x131a) & 1) * 0x60 + param_2 * 4 + 0x10b0)
    ;
    *(unsigned short *)(puVar2 + 0xf) = param_3;
    *(unsigned short *)((int)puVar2 + 0x3e) = param_4;
    *puVar2 = *puVar2 | 0x800000;
  }
  return temp_v0 != 0;
}
