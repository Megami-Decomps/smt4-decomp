/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_snd_CTR_Dspsnd_SetChannelMix` (_code @ 0x1bdc58, 0xc0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int nn_snd_CTR_Dspsnd_IsInitialized(void);


unsigned char nn_snd_CTR_Dspsnd_SetChannelMix(int param_1,unsigned char param_2,int param_3)

{
  unsigned char temp_v0;
  int temp_v1;
  unsigned short *puVar3;
  unsigned short *puVar4;
  unsigned int *puVar5;
  
  temp_v1 = nn_snd_CTR_Dspsnd_IsInitialized();
  temp_v0 = 0;
  if (temp_v1 != 0) {
    temp_v1 = 4;
    puVar5 = *(unsigned int **)(param_1 + (*(unsigned short *)(param_1 + 0x131a) & 1) * 0x60 + (unsigned int)param_2 * 4 +
                       0x10b0);
    puVar3 = (unsigned short *)(param_3 - 2);
    puVar4 = (unsigned short *)((int)puVar5 + 2);
    do {
      temp_v1 = temp_v1 - 1;
      puVar4[1] = puVar3[1];
      puVar3 = puVar3 + 2;
      puVar4 = puVar4 + 2;
      *puVar4 = *puVar3;
    } while (temp_v1 != 0);
    puVar3 = (unsigned short *)(param_3 + 0xe);
    puVar4 = (unsigned short *)((int)puVar5 + 0x12);
    temp_v1 = 4;
    do {
      temp_v1 = temp_v1 - 1;
      puVar4[1] = puVar3[1];
      puVar3 = puVar3 + 2;
      puVar4 = puVar4 + 2;
      *puVar4 = *puVar3;
    } while (temp_v1 != 0);
    puVar4 = (unsigned short *)((int)puVar5 + 0x22);
    puVar3 = (unsigned short *)(param_3 + 0x1e);
    temp_v1 = 4;
    do {
      temp_v1 = temp_v1 - 1;
      puVar4[1] = puVar3[1];
      puVar3 = puVar3 + 2;
      puVar4 = puVar4 + 2;
      *puVar4 = *puVar3;
    } while (temp_v1 != 0);
    *puVar5 = *puVar5 | 0xe000000;
    temp_v0 = 1;
  }
  return temp_v0;
}

} /* extern "C" */
