/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c6b34` (_code @ 0x1c6b34, 0xd8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_3_stack;


int * FUN_001c6b34(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int temp_v0;
  
  if (param_2 != 0) {
    param_3 = 0x300;
  }
  else {
    param_3 = param_3 << 8;
  }
  *param_1 = param_3;
  param_1[1] = 0x2025e;
  param_1[2] = 0;
  temp_v0 = 5;
  param_1[3] = 0x900251;
  piVar1 = param_1 + 3;
  do {
    temp_v0 = temp_v0 - 1;
    piVar1[1] = -0x152f0153;
    piVar1 = piVar1 + 2;
    *piVar1 = -0x152f0153;
  } while (temp_v0 != 0);
  param_1[0xe] = 0;
  param_1[0xf] = 0x1d00200;
  temp_v0 = 0xf;
  piVar1 = param_1 + 0xf;
  do {
    temp_v0 = temp_v0 - 1;
    piVar1[1] = -0x152f0153;
    piVar1 = piVar1 + 2;
    *piVar1 = -0x152f0153;
  } while (temp_v0 != 0);
  if (param_2 == 0) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = 2;
  }
  param_1[0x2e] = temp_v0;
  param_1[0x2f] = 0x10229;
  param_1[0x30] = 0;
  param_1[0x31] = 0x1d00200;
  temp_v0 = 0xf;
  piVar1 = param_1 + 0x31;
  do {
    temp_v0 = temp_v0 - 1;
    piVar1[1] = -0x152f0153;
    piVar1 = piVar1 + 2;
    *piVar1 = -0x152f0153;
  } while (temp_v0 != 0);
  param_1[0x50] = param_2;
  param_1[0x51] = 0x10244;
  return param_1 + 0x52;
}
