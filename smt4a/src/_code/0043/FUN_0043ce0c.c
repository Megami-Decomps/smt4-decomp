/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043ce0c` (_code @ 0x43ce0c, 0x330 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;


void FUN_0043ce0c(int param_1)

{
  int *piVar1;
  int *piVar2;
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int temp_v3;
  unsigned int temp_v4;
  
  temp_v3 = 0;
  piVar9 = (int *)(param_1 + 0x18);
  piVar1 = (int *)0x53f354;
  temp_v0 = *(unsigned int *)(param_1 + 4);
  temp_v1 = *(unsigned int *)(param_1 + 8);
  temp_v2 = *(unsigned int *)(param_1 + 0xc);
  piVar7 = piVar9;
  temp_v4 = *(unsigned int *)(param_1 + 0x10);
  do {
    temp_v0 = temp_v0 + ((temp_v1 & temp_v2) | (temp_v4 & ~temp_v1)) + *piVar7 + *piVar1;
    temp_v0 = temp_v1 + ((temp_v0 >> 0x19) | (temp_v0 * 0x80));
    temp_v4 = temp_v4 + ((temp_v2 & ~temp_v0) | (temp_v0 & temp_v1)) + piVar7[1] + piVar1[1];
    piVar6 = piVar7 + 3;
    temp_v4 = temp_v0 + ((temp_v4 >> 0x14) | (temp_v4 * 0x1000));
    piVar2 = piVar1 + 3;
    temp_v2 = temp_v2 + ((temp_v4 & temp_v0) | (temp_v1 & ~temp_v4)) + piVar7[2] + piVar1[2];
    piVar7 = piVar7 + 4;
    temp_v2 = temp_v4 + ((temp_v2 >> 0xf) | (temp_v2 * 0x20000));
    piVar1 = piVar1 + 4;
    temp_v1 = temp_v1 + ((temp_v2 & temp_v4) | (temp_v0 & ~temp_v2)) + *piVar6 + *piVar2;
    temp_v3 = temp_v3 + 1;
    temp_v1 = temp_v2 + ((temp_v1 >> 10) | (temp_v1 * 0x400000));
  } while (temp_v3 < 4);
  piVar7 = (int *)0x53f454;
  temp_v3 = 0;
  do {
    piVar6 = piVar7 + 2;
    temp_v3 = temp_v3 + 1;
    temp_v0 = temp_v0 + ((temp_v2 & ~temp_v4) | (temp_v1 & temp_v4)) + piVar9[*piVar7] + *piVar1;
    temp_v0 = temp_v1 + ((temp_v0 >> 0x1b) | (temp_v0 * 0x20));
    piVar8 = piVar7 + 3;
    temp_v4 = temp_v4 + ((temp_v0 & temp_v2) | (temp_v1 & ~temp_v2)) + piVar9[piVar7[1]] + piVar1[1];
    piVar2 = piVar1 + 3;
    temp_v4 = temp_v0 + ((temp_v4 >> 0x17) | (temp_v4 * 0x200));
    piVar7 = piVar7 + 4;
    temp_v2 = temp_v2 + ((temp_v0 & ~temp_v1) | (temp_v4 & temp_v1)) + piVar9[*piVar6] + piVar1[2];
    temp_v2 = temp_v4 + ((temp_v2 >> 0x12) | (temp_v2 * 0x4000));
    piVar1 = piVar1 + 4;
    temp_v1 = temp_v1 + ((temp_v4 & ~temp_v0) | (temp_v2 & temp_v0)) + piVar9[*piVar8] + *piVar2;
    temp_v1 = temp_v2 + ((temp_v1 >> 0xc) | (temp_v1 * 0x100000));
  } while (temp_v3 < 4);
  temp_v3 = 0;
  do {
    piVar6 = piVar7 + 2;
    temp_v0 = piVar9[*piVar7] + (temp_v1 ^ temp_v2 ^ temp_v4) + temp_v0 + *piVar1;
    temp_v0 = temp_v1 + ((temp_v0 >> 0x1c) | (temp_v0 * 0x10));
    piVar8 = piVar7 + 3;
    temp_v4 = temp_v4 + (temp_v0 ^ temp_v1 ^ temp_v2) + piVar9[piVar7[1]] + piVar1[1];
    piVar2 = piVar1 + 3;
    temp_v4 = temp_v0 + ((temp_v4 >> 0x15) | (temp_v4 * 0x800));
    piVar7 = piVar7 + 4;
    temp_v2 = temp_v2 + (temp_v4 ^ temp_v0 ^ temp_v1) + piVar9[*piVar6] + piVar1[2];
    temp_v3 = temp_v3 + 1;
    temp_v2 = temp_v4 + ((temp_v2 >> 0x10) | (temp_v2 * 0x10000));
    piVar1 = piVar1 + 4;
    temp_v1 = temp_v1 + (temp_v2 ^ temp_v4 ^ temp_v0) + piVar9[*piVar8] + *piVar2;
    temp_v1 = temp_v2 + ((temp_v1 >> 9) | (temp_v1 * 0x800000));
  } while (temp_v3 < 4);
  temp_v3 = 0;
  do {
    temp_v0 = temp_v0 + ((~temp_v4 | temp_v1) ^ temp_v2) + piVar9[*piVar7] + *piVar1;
    piVar6 = piVar7 + 2;
    temp_v0 = temp_v1 + ((temp_v0 >> 0x1a) | (temp_v0 * 0x40));
    temp_v4 = temp_v4 + ((temp_v0 | ~temp_v2) ^ temp_v1) + piVar9[piVar7[1]] + piVar1[1];
    piVar8 = piVar7 + 3;
    temp_v4 = temp_v0 + ((temp_v4 >> 0x16) | (temp_v4 * 0x400));
    piVar2 = piVar1 + 3;
    piVar7 = piVar7 + 4;
    temp_v2 = temp_v2 + ((temp_v4 | ~temp_v1) ^ temp_v0) + piVar9[*piVar6] + piVar1[2];
    temp_v2 = temp_v4 + ((temp_v2 >> 0x11) | (temp_v2 * 0x8000));
    piVar1 = piVar1 + 4;
    temp_v1 = temp_v1 + ((~temp_v0 | temp_v2) ^ temp_v4) + piVar9[*piVar8] + *piVar2;
    temp_v3 = temp_v3 + 1;
    temp_v1 = temp_v2 + ((temp_v1 >> 0xb) | (temp_v1 * 0x200000));
  } while (temp_v3 < 4);
  *(unsigned int *)(param_1 + 4) = temp_v0 + *(unsigned int *)(param_1 + 4);
  *(unsigned int *)(param_1 + 8) = temp_v1 + *(unsigned int *)(param_1 + 8);
  *(unsigned int *)(param_1 + 0xc) = temp_v2 + *(unsigned int *)(param_1 + 0xc);
  *(unsigned int *)(param_1 + 0x10) = temp_v4 + *(unsigned int *)(param_1 + 0x10);
  return;
}
