/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d2b8c` (_code @ 0x1d2b8c, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_001d2b8c(int param_1,unsigned int *param_2)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int *piVar15;
  int temp_v9;
  unsigned char temp_v10;
  unsigned int temp_v11 [5];
  int iStack_34;
  
  if (*(char *)(param_1 + 0x104) == '\0') {
    return;
  }
  temp_v11[0] = *param_2;
  temp_v11[1] = param_2[1];
  iStack_34 = 0;
  do {
    temp_v0 = param_1 + iStack_34 * 4;
    temp_v2 = param_1 + iStack_34 * 8;
    temp_v1 = *(int *)(temp_v0 + 0xd0);
    temp_v3 = 0;
    piVar4 = (int *)(*(int *)(temp_v0 + 0x3c) + *(int *)(param_1 + 0xa0) * 4);
    piVar5 = (int *)(*(int *)(temp_v0 + 0x4c) + *(int *)(param_1 + 0xa8) * 4);
    piVar6 = (int *)(*(int *)(temp_v2 + 0x60) + *(int *)(param_1 + 0xb8) * 4);
    piVar7 = (int *)(*(int *)(temp_v0 + 0x7c) + *(int *)(param_1 + 200) * 4);
    piVar8 = (int *)temp_v11[iStack_34];
    piVar15 = (int *)(*(int *)(temp_v2 + 0x5c) + *(int *)(param_1 + 0xb4) * 4);
    do {
      temp_v4 = *piVar8;
      temp_v7 = *piVar5;
      temp_v3 = temp_v3 + 1;
      *piVar5 = temp_v4;
      temp_v5 = *piVar15;
      temp_v2 = temp_v5;
      if (temp_v5 < 0) {
        temp_v2 = -temp_v5;
      }
      temp_v2 = temp_v2 * *(int *)(param_1 + 0xbc) >> 7;
      if (temp_v5 < 0) {
        temp_v2 = -temp_v2;
      }
      *piVar15 = temp_v2 + temp_v7;
      temp_v6 = *piVar6;
      temp_v2 = temp_v6;
      if (temp_v6 < 0) {
        temp_v2 = -temp_v6;
      }
      temp_v2 = temp_v2 * *(int *)(param_1 + 0xc0) >> 7;
      if (temp_v6 < 0) {
        temp_v2 = -temp_v2;
      }
      *piVar6 = temp_v7 + temp_v2;
      temp_v8 = *(int *)(param_1 + 0xcc);
      temp_v7 = *piVar7;
      temp_v2 = temp_v7;
      if (temp_v7 < 0) {
        temp_v2 = -temp_v7;
      }
      temp_v2 = temp_v2 * temp_v8 >> 7;
      if (temp_v7 < 0) {
        temp_v2 = -temp_v2;
      }
      temp_v2 = temp_v2 + (temp_v5 - temp_v6);
      temp_v10 = temp_v2 < 0;
      *piVar7 = temp_v2;
      if (temp_v10) {
        temp_v2 = -temp_v2;
      }
      temp_v2 = temp_v2 * temp_v8 >> 7;
      if (temp_v10) {
        temp_v2 = -temp_v2;
      }
      temp_v5 = *(int *)(param_1 + 0xe8);
      temp_v8 = *piVar4;
      temp_v9 = *(int *)(param_1 + 0xe0);
      temp_v6 = *(int *)(param_1 + 0xec);
      *piVar4 = temp_v4;
      temp_v1 = (temp_v1 * temp_v6 + temp_v5 * (temp_v7 - temp_v2)) >> 7;
      *piVar8 = (*(int *)(param_1 + 0xe4) * temp_v1 + temp_v8 * temp_v9) >> 7;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
      piVar6 = piVar6 + 1;
      piVar7 = piVar7 + 1;
      piVar8 = piVar8 + 1;
      piVar15 = piVar15 + 1;
    } while (temp_v3 < 0xa0);
    iStack_34 = iStack_34 + 1;
    *(int *)(temp_v0 + 0xd0) = temp_v1;
  } while (iStack_34 < 2);
  temp_v1 = *(int *)(param_1 + 0xa0) + 0xa0;
  *(int *)(param_1 + 0xa0) = temp_v1;
  if (*(int *)(param_1 + 0x9c) <= temp_v1) {
    *(unsigned int *)(param_1 + 0xa0) = 0;
  }
  temp_v1 = *(int *)(param_1 + 0xa8) + 0xa0;
  *(int *)(param_1 + 0xa8) = temp_v1;
  if (*(int *)(param_1 + 0xa4) <= temp_v1) {
    *(unsigned int *)(param_1 + 0xa8) = 0;
  }
  temp_v1 = *(int *)(param_1 + 0xb4) + 0xa0;
  *(int *)(param_1 + 0xb4) = temp_v1;
  if (*(int *)(param_1 + 0xac) <= temp_v1) {
    *(unsigned int *)(param_1 + 0xb4) = 0;
  }
  temp_v1 = *(int *)(param_1 + 0xb8) + 0xa0;
  *(int *)(param_1 + 0xb8) = temp_v1;
  if (*(int *)(param_1 + 0xb0) <= temp_v1) {
    *(unsigned int *)(param_1 + 0xb8) = 0;
  }
  temp_v1 = *(int *)(param_1 + 200) + 0xa0;
  *(int *)(param_1 + 200) = temp_v1;
  if (*(int *)(param_1 + 0xc4) <= temp_v1) {
    *(unsigned int *)(param_1 + 200) = 0;
  }
  return;
}
