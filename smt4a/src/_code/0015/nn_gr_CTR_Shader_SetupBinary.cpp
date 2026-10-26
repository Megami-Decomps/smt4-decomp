/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_gr_CTR_Shader_SetupBinary` (_code @ 0x158a40, 0xec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016d390(unsigned int *, unsigned int *, unsigned int, int);
int nn_gr_CTR_Shader_MakeShaderConstCommandCache(void);

#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Supplied declaration required: FUN_0016d390. */
/* Supplied declaration required: nn_gr_CTR_Shader_MakeShaderConstCommandCache. */


void nn_gr_CTR_Shader_SetupBinary(unsigned int *param_1,int param_2,unsigned int param_3,int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  int *piVar2;
  unsigned char temp_v1;
  unsigned int *puVar4;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5;
  
  temp_v4 = *(unsigned int *)(param_2 + 4);
  *(char *)(param_1 + 2) = (char)temp_v4;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  temp_v2 = 0;
  piVar2 = (int *)(param_2 + 8);
  for (temp_v4 = temp_v4 & 0xff; temp_v4 != 0; temp_v4 = temp_v4 - 1) {
    param_1[temp_v2 + 3] = *piVar2 + param_2;
    temp_v2 = temp_v2 + 1;
    piVar2 = piVar2 + 1;
  }
  param_1[0x23] = piVar2[2] + (int)piVar2;
  param_1[0x24] = piVar2[3];
  temp_v2 = piVar2[5];
  temp_v3 = piVar2[4];
  temp_v5 = temp_v2 != 0;
  puVar4 = (unsigned int *)((int)piVar2 + temp_v3);
  if (temp_v5) {
    temp_v3 = 0;
  }
  param_1[0xa5] = temp_v2;
  while (temp_v5) {
    temp_v2 = temp_v2 - 1;
    temp_v5 = temp_v2 != 0;
    param_1[temp_v3 + 0x25] = *puVar4;
    puVar4 = puVar4 + 2;
    temp_v3 = temp_v3 + 1;
  }
  temp_v0 = *(unsigned char *)(param_1 + 0xa6);
  puVar4 = param_1;
  nn_gr_CTR_Shader_MakeShaderConstCommandCache();
  temp_v1 = romwright_subpiece_4_1_0(puVar4,0);
  param_1[1] = param_4;
  if (-1 < param_4) {
    temp_v1 = 3;
  }
  *param_1 = param_3;
  if (-1 < param_4) {
    *(unsigned char *)(param_1 + 0xa6) = temp_v1;
  }
  puVar4 = param_1;
  FUN_0016d390(param_1,param_1 + 0xa9,param_3,param_4);
  param_1[0xd9] = ((int)puVar4 + (-0x2a4 - (int)param_1)) >> 2;
  if ((int)param_1[1] < 0) {
    *(unsigned char *)(param_1 + 0xa6) = temp_v0;
  }
  return;
}

} /* extern "C" */
