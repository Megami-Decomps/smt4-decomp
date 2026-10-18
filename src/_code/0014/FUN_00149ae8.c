/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00149ae8` (_code @ 0x149ae8, 0x2ac bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

extern int FUN_002a4b88(unsigned int, unsigned int);


void FUN_00149ae8(int *param_1,int *param_2)

{
  int *piVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int *unaff_r5;
  int temp_v4;
  int *piVar7;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  
  temp_v4 = *param_2;
  temp_v5 = 0;
  temp_v6 = 0;
  temp_v7 = 0;
  temp_v8 = 0x1010100;
  temp_v3 = param_2[2];
  temp_v2 = temp_v4 * 4 + 0x28 + ((((temp_v4 * 2 + 0x1dbU) & 0xfffffffc) + 7) & 0xfffffff8);
  if (temp_v3 != 0) {
    unaff_r5 = (int *)((int)param_2 + temp_v3 + 8);
  }
  if (temp_v3 == 0) {
    unaff_r5 = (int *)0x0;
  }
  piVar7 = unaff_r5 + param_2[1];
  for (; unaff_r5 != piVar7; unaff_r5 = unaff_r5 + 1) {
    if (*unaff_r5 != 0) {
      temp_v3 = *unaff_r5 + (int)unaff_r5;
    }
    else {
      temp_v3 = 0;
    }
    temp_v3 = *(int *)(temp_v3 + 4);
    if (*unaff_r5 != 0) {
      piVar1 = (int *)(*unaff_r5 + (int)unaff_r5);
    }
    else {
      piVar1 = (int *)0x0;
    }
    if (*piVar1 != 0x40000000) {
      switch(temp_v3) {
      case 10:
      case 0xb:
        temp_v2 = temp_v4 * 4 + 0x28 + ((temp_v2 + 7U) & 0xfffffff8);
        break;
      case 0xc:
        temp_v2 = ((temp_v2 + 7U) & 0xfffffff8) + temp_v4 * 0xc + 0x68;
      }
    }
    else {
      switch(temp_v3) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 8:
        temp_v2 = FUN_002a4b88(0x1406,3);
        break;
      case 4:
      case 7:
        temp_v2 = FUN_002a4b88(0x1406,1);
        break;
      case 5:
      case 6:
        temp_v2 = FUN_002a4b88(0x1406,2);
        break;
      case 10:
      case 0xb:
        temp_v2 = ((temp_v2 + 3U) & 0xfffffffc) + 4;
      }
    }
    *(unsigned char *)((int)&temp_v5 + temp_v3) = 1;
  }
  temp_v3 = 0;
  do {
    if (*(char *)((int)&temp_v5 + temp_v3) == '\0') {
      switch(temp_v3) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 8:
        temp_v2 = FUN_002a4b88(0x1406,3);
        break;
      case 4:
      case 7:
        temp_v2 = FUN_002a4b88(0x1406,1);
        break;
      case 5:
      case 6:
        temp_v2 = FUN_002a4b88(0x1406,2);
      }
      *(unsigned char *)((int)&temp_v5 + temp_v3) = 0;
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 0x10);
  temp_v0 = param_1[1];
  param_1[1] = 0x20;
  temp_v1 = 0x20;
  if ((unsigned int)param_1[2] >= 0x20) {
    temp_v1 = param_1[2];
  }
  param_1[2] = temp_v1;
  param_1[1] = temp_v0;
  *param_1 = ((*param_1 + 0x1fU) & 0xffffffe0) + temp_v2;
  if (temp_v0 <= (unsigned int)param_1[2]) {
    temp_v0 = param_1[2];
  }
  param_1[2] = temp_v0;
  return;
}
