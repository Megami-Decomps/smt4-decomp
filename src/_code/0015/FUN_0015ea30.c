/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015ea30` (_code @ 0x15ea30, 0x224 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp68; /* 0x68: local_68 */
} param_2_stack;


void FUN_0015ea30(int param_1,unsigned int *param_2)

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
  int temp_v12;
  
  temp_v11[0] = *param_2;
  temp_v11[1] = param_2[1];
  temp_v12 = 0;
  do {
    temp_v0 = param_1 + temp_v12 * 4;
    temp_v2 = param_1 + temp_v12 * 8;
    temp_v1 = *(int *)(temp_v0 + 0xd0);
    temp_v3 = 0;
    piVar4 = (int *)(*(int *)(temp_v0 + 0x3c) + *(int *)(param_1 + 0xa0) * 4);
    piVar5 = (int *)(*(int *)(temp_v0 + 0x4c) + *(int *)(param_1 + 0xa8) * 4);
    piVar6 = (int *)(*(int *)(temp_v2 + 0x60) + *(int *)(param_1 + 0xb8) * 4);
    piVar7 = (int *)(*(int *)(temp_v0 + 0x7c) + *(int *)(param_1 + 200) * 4);
    piVar8 = (int *)temp_v11[temp_v12];
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
    temp_v12 = temp_v12 + 1;
    *(int *)(temp_v0 + 0xd0) = temp_v1;
  } while (temp_v12 < 2);
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
