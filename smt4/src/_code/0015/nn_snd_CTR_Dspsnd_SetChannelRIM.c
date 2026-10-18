/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_snd_CTR_Dspsnd_SetChannelRIM` (_code @ 0x153494, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002bb274(void);


unsigned int nn_snd_CTR_Dspsnd_SetChannelRIM(int param_1,int param_2,int param_3,unsigned char param_4)

{
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002bb274();
  temp_v1 = 0;
  if (temp_v0 != 0) {
    puVar2 = *(unsigned int **)(param_1 + (*(unsigned short *)(param_1 + 0x131a) & 1) * 0x60 + param_2 * 4 + 0x10b0)
    ;
    *(char *)(puVar2 + 0xe) = (char)param_3;
    if (param_3 == 0) {
      *(unsigned char *)((int)puVar2 + 0x39) = param_4;
    }
    *puVar2 = *puVar2 | 0x20000;
    temp_v1 = 1;
  }
  return temp_v1;
}
