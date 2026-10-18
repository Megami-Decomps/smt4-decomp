/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e8d58` (_code @ 0x3e8d58, 0x10c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


/* WARNING: Type propagation algorithm not settling */

void FUN_003e8d58(int *param_1,int *param_2,int *param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned char *puVar3;
  int temp_v1;
  unsigned char temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  
  puVar1 = (unsigned int *)*param_1;
  switch(puVar1[2]) {
  case 0:
  case 1:
    temp_v1 = *param_3;
    break;
  case 2:
    *(char *)param_2 = (char)*param_3;
    return;
  case 3:
    temp_v0 = *puVar1;
    if ((temp_v0 & 4) == 0) {
      *param_2 = *param_3;
    }
    if ((temp_v0 & 8) == 0) {
      param_2[1] = param_3[1];
    }
    return;
  case 4:
    temp_v0 = *puVar1;
    if ((temp_v0 & 8) == 0) {
      *param_2 = *param_3;
    }
    if ((temp_v0 & 0x10) == 0) {
      param_2[1] = param_3[1];
    }
    if ((temp_v0 & 0x20) == 0) {
      param_2[2] = param_3[2];
    }
    return;
  case 5:
    temp_v1 = param_3[1];
    temp_v3 = param_3[2];
    temp_v4 = param_3[3];
    temp_v5 = param_3[4];
    temp_v6 = param_3[5];
    temp_v7 = param_3[6];
    temp_v8 = param_3[7];
    *param_2 = *param_3;
    param_2[1] = temp_v1;
    param_2[2] = temp_v3;
    param_2[3] = temp_v4;
    param_2[4] = temp_v5;
    param_2[5] = temp_v6;
    param_2[6] = temp_v7;
    param_2[7] = temp_v8;
    temp_v1 = param_3[9];
    temp_v3 = param_3[10];
    temp_v4 = param_3[0xb];
    temp_v5 = param_3[0xc];
    temp_v6 = param_3[0xd];
    temp_v7 = param_3[0xe];
    temp_v8 = param_3[0xf];
    param_2[8] = param_3[8];
    param_2[9] = temp_v1;
    param_2[10] = temp_v3;
    param_2[0xb] = temp_v4;
    param_2[0xc] = temp_v5;
    param_2[0xd] = temp_v6;
    param_2[0xe] = temp_v7;
    param_2[0xf] = temp_v8;
    return;
  case 6:
    temp_v0 = *puVar1;
    if ((temp_v0 & 0x10) == 0) {
      *param_2 = *param_3;
    }
    if ((temp_v0 & 0x20) == 0) {
      param_2[1] = param_3[1];
    }
    if ((temp_v0 & 0x40) == 0) {
      param_2[2] = param_3[2];
    }
    if ((temp_v0 & 0x80) == 0) {
      param_2[3] = param_3[3];
    }
    return;
  case 7:
    puVar3 = (unsigned char *)*param_3;
    temp_v2 = puVar3 == (unsigned char *)0x0;
    if (!temp_v2) {
      puVar3 = puVar3 + (int)param_3;
      temp_v2 = puVar3 == (unsigned char *)0x0;
    }
    if (temp_v2) {
      *param_2 = 0;
      return;
    }
    temp_v1 = (int)puVar3 - (int)param_2;
    break;
  default:
    return;
  }
  *param_2 = temp_v1;
  return;
}
