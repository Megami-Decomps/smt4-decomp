/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f27f0` (_code @ 0x1f27f0, 0xfc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_001f27f0(unsigned short *param_1,int *param_2,int param_3)

{
  unsigned int *puVar1;
  unsigned short *puVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int *puVar13;
  unsigned int *puVar14;
  
  puVar3 = (unsigned int *)(param_1 + 0x101);
  temp_v0 = (((unsigned int)*param_1 + *(unsigned int *)(param_1 + 1) * 0x10000) >> 1) & 0x7f7f7f7f;
  temp_v1 = (((*(unsigned int *)(param_1 + 1) >> 0x10) + *(unsigned int *)(param_1 + 3) * 0x10000) >> 1) & 0x7f7f7f7f;
  temp_v2 = (((*(unsigned int *)(param_1 + 3) >> 0x10) + *(unsigned int *)(param_1 + 5) * 0x10000) >> 1) & 0x7f7f7f7f;
  temp_v3 = (((*(unsigned int *)(param_1 + 5) >> 0x10) + (unsigned int)param_1[7] * 0x10000) >> 1) & 0x7f7f7f7f;
  do {
    puVar4 = puVar3 + 0x80;
    temp_v4 = (((unsigned int)*(unsigned short *)((int)puVar3 - 2) + *puVar3 * 0x10000) >> 1) & 0x7f7f7f7f;
    temp_v5 = (((*puVar3 >> 0x10) + puVar3[1] * 0x10000) >> 1) & 0x7f7f7f7f;
    temp_v6 = (((puVar3[1] >> 0x10) + puVar3[2] * 0x10000) >> 1) & 0x7f7f7f7f;
    temp_v7 = (((puVar3[2] >> 0x10) + (unsigned int)(unsigned short)puVar3[3] * 0x10000) >> 1) & 0x7f7f7f7f;
    *param_2 = temp_v0 + temp_v4;
    param_2[1] = temp_v1 + temp_v5;
    param_2[2] = temp_v2 + temp_v6;
    param_2[3] = temp_v3 + temp_v7;
    puVar2 = (unsigned short *)((int)puVar3 + 0x1fe);
    puVar13 = puVar3 + 0x81;
    puVar14 = puVar3 + 0x82;
    puVar1 = puVar3 + 0x83;
    puVar3 = puVar3 + 0x100;
    temp_v0 = (((unsigned int)*puVar2 + *puVar4 * 0x10000) >> 1) & 0x7f7f7f7f;
    temp_v1 = (((*puVar4 >> 0x10) + *puVar13 * 0x10000) >> 1) & 0x7f7f7f7f;
    temp_v2 = (((*puVar13 >> 0x10) + *puVar14 * 0x10000) >> 1) & 0x7f7f7f7f;
    temp_v3 = (((*puVar14 >> 0x10) + (unsigned int)(unsigned short)*puVar1 * 0x10000) >> 1) & 0x7f7f7f7f;
    param_2[0x80] = temp_v4 + temp_v0;
    param_2[0x81] = temp_v5 + temp_v1;
    param_2[0x82] = temp_v6 + temp_v2;
    param_2[0x83] = temp_v7 + temp_v3;
    param_2 = param_2 + 0x100;
    param_3 = param_3 - 2;
  } while (param_3 != 0);
  return;
}

} /* extern "C" */
