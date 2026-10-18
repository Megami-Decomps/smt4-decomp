/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036ee9c` (_code @ 0x36ee9c, 0x26c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */


unsigned int * FUN_0036ee9c(int *param_1,int *param_2)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  unsigned int *puVar3;
  int *piVar4;
  unsigned char *puVar5;
  int *piVar6;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int in_fpscr;
  float temp_v4;
  int temp_v5;
  float temp_v6;
  int temp_v7;
  float temp_v8;
  
  if (param_1[5] == 0xc) {
    temp_v2 = 0x10;
  }
  else {
    temp_v2 = 8;
  }
  puVar3 = (unsigned int *)(**(romwright_code **)(*param_2 + 8))(param_2,0x3c,4);
  if (puVar3 != (unsigned int *)0x0) {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
  }
  *puVar3 = 0x20000011;
  puVar3[1] = 0x4d495854;
  puVar3[2] = 0x5000000;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = *param_1;
  puVar3[7] = param_1[1];
  puVar3[8] = *(unsigned int *)(param_1[5] * 4 + 0x4091f8);
  puVar3[9] = *(unsigned int *)(param_1[5] * 4 + 0x409230);
  puVar3[10] = param_1[2];
  puVar3[0xb] = 0;
  puVar3[0xc] = param_1[3];
  puVar3[0xd] = param_1[5];
  piVar4 = (int *)(**(romwright_code **)(*param_2 + 8))(param_2,0x20,4);
  if (piVar4 != (int *)0x0) {
    *piVar4 = 0;
    piVar4[1] = 0;
    piVar4[2] = 0;
    piVar4[3] = 0;
    piVar4[4] = 0;
    piVar4[5] = 0;
    piVar4[6] = 0;
    piVar4[7] = 0;
  }
  piVar4[4] = (int)param_2;
  *piVar4 = *param_1;
  temp_v3 = 0;
  piVar4[1] = param_1[1];
  piVar4[6] = param_1[4];
  temp_v4 = *(float *)(param_1[5] * 4 + 0x409268);
  temp_v5 = VectorFloatToUnsigned(temp_v4 * 8.0f,3);
  piVar4[5] = temp_v5;
  temp_v5 = *param_1;
  temp_v1 = param_1[1];
  temp_v0 = param_1[2];
  while (0 < temp_v0) {
    temp_v6 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v8 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v7 = VectorFloatToUnsigned(temp_v4 * temp_v6 * temp_v8,3);
    temp_v3 = temp_v3 + temp_v7;
    if (temp_v5 == temp_v2 && temp_v1 == temp_v2) {
      puVar3[10] = (param_1[2] - temp_v0) + 1;
      break;
    }
    if (temp_v2 < temp_v5) {
      temp_v5 = temp_v5 / 2;
    }
    temp_v0 = temp_v0 - 1;
    if (temp_v2 < temp_v1) {
      temp_v1 = temp_v1 / 2;
    }
  }
  if (*(char *)((int)param_1 + 0x19) == '\0') {
    piVar4[2] = 0;
  }
  else {
    puVar5 = (unsigned char *)(**(romwright_code **)(*param_2 + 8))(param_2,temp_v3,0x80);
    puVar2 = puVar5;
    temp_v2 = temp_v3;
    if ((char)param_1[6] != '\0') {
      for (; temp_v2 != 0; temp_v2 = temp_v2 - 1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
    }
    temp_v2 = 0;
    if (puVar5 != (unsigned char *)0x0) {
      temp_v2 = (int)puVar5 - (int)(piVar4 + 3);
    }
    piVar4[2] = temp_v3;
    if (puVar5 != (unsigned char *)0x0) {
      piVar4[3] = temp_v2;
      piVar6 = (int *)(puVar3 + 0xe);
      if (piVar4 != (int *)0x0) {
        *piVar6 = (int)piVar4 - (int)piVar6;
      }
      else {
        *piVar6 = 0;
      }
      return puVar3;
    }
  }
  piVar4[3] = 0;
  piVar6 = (int *)(puVar3 + 0xe);
  if (piVar4 != (int *)0x0) {
    *piVar6 = (int)piVar4 - (int)piVar6;
  }
  else {
    *piVar6 = 0;
  }
  return puVar3;
}
