/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_snd_CTR_Dspsnd_SetDspDelayEffect` (_code @ 0x1b5eb4, 0xe0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_001c6e20(void);


unsigned int nn_snd_CTR_Dspsnd_SetDspDelayEffect(int param_1,int param_2,unsigned short *param_3)

{
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  
  temp_v0 = FUN_001c6e20();
  if (temp_v0 == 0) {
    return 0;
  }
  puVar2 = *(unsigned int **)(param_1 + (unsigned int)*(unsigned short *)(param_1 + 0x131e) * 4 + 0x10a0);
  if ((*param_3 & 1) != 0) {
    *(unsigned short *)((int)puVar2 + param_2 * 0x14 + 0x2e) = param_3[1];
  }
  if ((*param_3 & 4) != 0) {
    temp_v0 = param_2 * 0x14;
    *(unsigned short *)((int)puVar2 + temp_v0 + 0x32) = param_3[3];
    *(unsigned short *)(puVar2 + param_2 * 5 + 0xe) = param_3[6];
    *(unsigned short *)((int)puVar2 + temp_v0 + 0x3a) = param_3[7];
    *(unsigned short *)(puVar2 + param_2 * 5 + 0xf) = param_3[8];
    *(unsigned short *)((int)puVar2 + temp_v0 + 0x3e) = param_3[9];
  }
  if ((*param_3 & 2) != 0) {
    puVar2[param_2 * 5 + 0xd] = *(unsigned int *)(param_3 + 4);
  }
  *(unsigned short *)(puVar2 + param_2 * 5 + 0xb) = *param_3 | (unsigned short)puVar2[param_2 * 5 + 0xb];
  if (param_2 == 0) {
    temp_v1 = *puVar2 | 0x400;
  }
  else {
    if (param_2 != 1) {
      return 1;
    }
    temp_v1 = *puVar2 | 0x800;
  }
  *puVar2 = temp_v1;
  return 1;
}

} /* extern "C" */
