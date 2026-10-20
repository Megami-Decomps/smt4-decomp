/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_Material_CopyResLightingLookupTable` (_code @ 0x235e30, 0x144 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

void nw_gfx_Material_CopyResLightingLookupTable
               (int *param_1,unsigned int param_2,int *param_3,unsigned int *param_4)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int *piVar4;
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int *puVar8;
  int *piVar9;
  unsigned char temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  
  puVar1 = (unsigned int *)(**(romwright_code **)(*param_3 + 8))(param_3,0xc);
  if (puVar1 == (unsigned int *)0x0) {
    *param_1 = 0;
    param_1[1] = -0x80000000;
    return;
  }
  temp_v0 = param_4[1];
  temp_v1 = param_4[2];
  *puVar1 = *param_4;
  puVar1[1] = temp_v0;
  puVar1[2] = temp_v1;
  puVar2 = (unsigned int *)(**(romwright_code **)(*param_3 + 8))(param_3,0x10,4);
  if (puVar2 == (unsigned int *)0x0) {
    (**(romwright_code **)(*param_3 + 0xc))(param_3,puVar1);
    *param_1 = 0;
    param_1[1] = -0x80000000;
    return;
  }
  if (param_4[2] == 0) {
    puVar3 = (unsigned int *)0x0;
  }
  else {
    puVar3 = (unsigned int *)((int)param_4 + param_4[2] + 8);
  }
  temp_v4 = puVar3[1];
  temp_v5 = puVar3[2];
  temp_v6 = puVar3[3];
  piVar4 = (int *)(puVar2 + 3);
  *puVar2 = *puVar3;
  puVar2[1] = temp_v4;
  puVar2[2] = temp_v5;
  puVar2[3] = temp_v6;
  if (puVar3[3] != 0) {
    temp_v2 = (int)puVar3 + puVar3[3] + 0xc;
  }
  else {
    temp_v2 = 0;
  }
  if (temp_v2 != 0) {
    *piVar4 = temp_v2 - (int)piVar4;
  }
  else {
    *piVar4 = 0;
  }
  puVar8 = puVar3 + 1;
  piVar4 = (int *)(puVar2 + 1);
  temp_v3 = puVar3[1] == 0;
  if (!temp_v3) {
    puVar8 = (unsigned int *)((int)puVar8 + puVar3[1]);
    temp_v3 = puVar8 == (unsigned int *)0x0;
  }
  if (!temp_v3) {
    *piVar4 = (int)puVar8 - (int)piVar4;
  }
  else {
    *piVar4 = 0;
  }
  piVar4 = (int *)(puVar3 + 2);
  piVar9 = (int *)(puVar2 + 2);
  temp_v3 = *piVar4 == 0;
  if (!temp_v3) {
    piVar4 = (int *)((int)piVar4 + *piVar4);
    temp_v3 = piVar4 == (int *)0x0;
  }
  if (!temp_v3) {
    *piVar9 = (int)piVar4 - (int)piVar9;
  }
  else {
    *piVar9 = 0;
  }
  *puVar1 = *param_4 & 0xff;
  puVar1[1] = param_4[1] & 0xff;
  puVar1[2] = (int)puVar2 - (int)(puVar1 + 2);
  *param_1 = (int)puVar1;
  param_1[1] = 0;
  return;
}

} /* extern "C" */
