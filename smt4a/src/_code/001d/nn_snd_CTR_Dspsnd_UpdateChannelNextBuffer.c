/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_snd_CTR_Dspsnd_UpdateChannelNextBuffer` (_code @ 0x1d38fc, 0xa4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001c6e20(void);


unsigned char nn_snd_CTR_Dspsnd_UpdateChannelNextBuffer(int param_1,unsigned char param_2,int param_3)

{
  unsigned char temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  
  temp_v1 = FUN_001c6e20();
  temp_v0 = 0;
  if (temp_v1 != 0) {
    puVar3 = *(unsigned int **)(param_1 + (*(unsigned short *)(param_1 + 0x131a) & 1) * 0x60 + (unsigned int)param_2 * 4 +
                       0x10b0);
    if (*(short *)(*(int *)(param_1 + (unsigned int)*(unsigned short *)(param_1 + 0x131c) * 0x60 + (unsigned int)param_2 * 4
                           + 0x1170) + 8) == *(short *)(param_3 + 0x12)) {
      *(short *)((int)puVar3 + 0xbe) = *(short *)(param_3 + 0x12);
      *(unsigned short *)(puVar3 + 0x2f) =
           ((unsigned short)puVar3[0x2f] & 0xfffd) | (((short)*(char *)(param_3 + 0x10) & 1U) << 1);
      puVar3[0x2c] = (*(unsigned int *)(param_3 + 4) >> 0x10) | (*(unsigned int *)(param_3 + 4) << 0x10);
      *puVar3 = *puVar3 | 8;
    }
    temp_v0 = 1;
  }
  return temp_v0;
}
