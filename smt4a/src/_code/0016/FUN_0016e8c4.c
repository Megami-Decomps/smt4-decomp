/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016e8c4` (_code @ 0x16e8c4, 0x16c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;


void FUN_0016e8c4(int *param_1,int *param_2,int *param_3,int param_4)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  
  temp_v0 = (param_4 - 0x3c) / 0x23ab1;
  temp_v5 = (param_4 - 0x3c) % 0x23ab1;
  if ((int)temp_v5 < 0) {
    temp_v0 = temp_v0 - 1;
    temp_v5 = temp_v5 + 0x23ab1;
  }
  temp_v1 = (int)(((long long)(int)temp_v5 * -0x1a537e05 + ((unsigned long long)temp_v5 << 0x20)) >> 0x20);
  temp_v2 = (temp_v1 >> 0xf) - (temp_v1 >> 0x1f);
  temp_v1 = (int)(((long long)(int)temp_v5 * -0x1a537e05 + ((unsigned long long)temp_v5 << 0x20)) >> 0x20);
  temp_v6 = temp_v5 + ((temp_v1 >> 0xf) - (temp_v1 >> 0x1f)) * -0x8eac;
  temp_v5 = temp_v6 % 0x5b5;
  temp_v1 = (int)(((long long)(int)temp_v5 * -0x4c73064f + ((unsigned long long)temp_v5 << 0x20)) >> 0x20);
  temp_v3 = (temp_v1 >> 8) - (temp_v1 >> 0x1f);
  temp_v1 = (int)(((long long)(int)temp_v5 * -0x4c73064f + ((unsigned long long)temp_v5 << 0x20)) >> 0x20);
  temp_v4 = ((temp_v1 >> 8) - (temp_v1 >> 0x1f)) * -0x16d + temp_v5;
  temp_v5 = temp_v4 * 5 + 2;
  temp_v1 = (int)(((long long)(int)temp_v5 * -0x29d47f29 + ((unsigned long long)temp_v5 << 0x20)) >> 0x20);
  temp_v1 = (temp_v1 >> 7) - (temp_v1 >> 0x1f);
  temp_v6 = temp_v0 * 400 + temp_v2 * 100 + (temp_v6 / 0x5b5) * 4 + temp_v3;
  temp_v7 = temp_v6 + 2000;
  temp_v0 = (temp_v4 - (temp_v1 * 0x99 + 2) / 5) + 1;
  if (!(temp_v3 == 4 || temp_v2 == 4)) {
    if (temp_v1 < 10) {
      temp_v1 = temp_v1 + 3;
    }
    else {
      temp_v1 = temp_v1 - 9;
      temp_v7 = temp_v7 + 1;
    }
  }
  else {
    temp_v1 = 0xb;
    temp_v0 = 0x1d;
    temp_v7 = temp_v6 + 1999;
    temp_v1 = temp_v1 - 9;
    temp_v7 = temp_v7 + 1;
  }
  if (param_1 != (int *)0x0) {
    *param_1 = temp_v7;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = temp_v1;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = temp_v0;
  }
  return;
}
