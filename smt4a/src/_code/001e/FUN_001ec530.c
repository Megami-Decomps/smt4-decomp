/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ec530` (_code @ 0x1ec530, 0xf0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_001ec530(unsigned char *param_1,int *param_2,int param_3)

{
  unsigned char *pbVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int *puVar12;
  unsigned int *puVar13;
  unsigned int *puVar14;
  
  puVar2 = (unsigned int *)(param_1 + 0x101);
  temp_v0 = (((unsigned int)*param_1 + *(unsigned int *)(param_1 + 1) * 0x100) >> 1) & 0x7f7f7f7f;
  temp_v1 = (((*(unsigned int *)(param_1 + 1) >> 0x18) + *(unsigned int *)(param_1 + 5) * 0x100) >> 1) & 0x7f7f7f7f;
  temp_v2 = (((*(unsigned int *)(param_1 + 5) >> 0x18) + *(unsigned int *)(param_1 + 9) * 0x100) >> 1) & 0x7f7f7f7f;
  temp_v3 = (((*(unsigned int *)(param_1 + 9) >> 0x18) + *(int *)(param_1 + 0xd) * 0x100) >> 1) & 0x7f7f7f7f;
  do {
    puVar3 = puVar2 + 0x40;
    temp_v4 = (((unsigned int)*(unsigned char *)((int)puVar2 - 1) + *puVar2 * 0x100) >> 1) & 0x7f7f7f7f;
    temp_v5 = (((*puVar2 >> 0x18) + puVar2[1] * 0x100) >> 1) & 0x7f7f7f7f;
    temp_v6 = (((puVar2[1] >> 0x18) + puVar2[2] * 0x100) >> 1) & 0x7f7f7f7f;
    temp_v7 = (((puVar2[2] >> 0x18) + puVar2[3] * 0x100) >> 1) & 0x7f7f7f7f;
    *param_2 = temp_v0 + temp_v4;
    param_2[1] = temp_v1 + temp_v5;
    param_2[2] = temp_v2 + temp_v6;
    param_2[3] = temp_v3 + temp_v7;
    pbVar1 = (unsigned char *)((int)puVar2 + 0xff);
    puVar12 = puVar2 + 0x41;
    puVar13 = puVar2 + 0x42;
    puVar14 = puVar2 + 0x43;
    puVar2 = puVar2 + 0x80;
    temp_v0 = (((unsigned int)*pbVar1 + *puVar3 * 0x100) >> 1) & 0x7f7f7f7f;
    temp_v1 = (((*puVar3 >> 0x18) + *puVar12 * 0x100) >> 1) & 0x7f7f7f7f;
    temp_v2 = (((*puVar12 >> 0x18) + *puVar13 * 0x100) >> 1) & 0x7f7f7f7f;
    temp_v3 = (((*puVar13 >> 0x18) + *puVar14 * 0x100) >> 1) & 0x7f7f7f7f;
    param_2[0x40] = temp_v4 + temp_v0;
    param_2[0x41] = temp_v5 + temp_v1;
    param_2[0x42] = temp_v6 + temp_v2;
    param_2[0x43] = temp_v7 + temp_v3;
    param_2 = param_2 + 0x80;
    param_3 = param_3 - 2;
  } while (param_3 != 0);
  return;
}
