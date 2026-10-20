/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043e088` (_code @ 0x43e088, 0x280 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
} param_1_stack;


void FUN_0043e088(int param_1)

{
  int temp_v0;
  int temp_v1;
  int *piVar3;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  
  piVar3 = (int *)(param_1 + 0x1b04);
  temp_v4 = 0;
  temp_v6 = param_1 + *piVar3 * 0x1a88;
  temp_v2 = (unsigned int)*(short *)(temp_v6 + 0x18);
  if ((int)temp_v2 < 1) {
    temp_v6 = 0;
  }
  else {
    temp_v2 = temp_v2 & 1;
    if (temp_v2 == 1) {
      *(int *)(param_1 + *piVar3 * 0x68 + 0x1a9c) = temp_v6 + 0x191c;
    }
    temp_v7 = (unsigned int)(temp_v2 == 1);
    if ((int)temp_v2 < (int)*(short *)(param_1 + *piVar3 * 0x1a88 + 0x18)) {
      do {
        temp_v2 = temp_v2 + 2;
        *(unsigned int *)(param_1 + *piVar3 * 0x68 + temp_v7 * 4 + 0x1a9c) =
             param_1 + *piVar3 * 0x1a88 + temp_v7 * 0x10 + 0x191c;
        *(unsigned int *)(param_1 + *piVar3 * 0x68 + (temp_v7 + 1) * 4 + 0x1a9c) =
             param_1 + *piVar3 * 0x1a88 + (temp_v7 + 1) * 0x10 + 0x191c;
        temp_v7 = temp_v7 + 2;
      } while ((int)temp_v2 < (int)*(short *)(param_1 + *piVar3 * 0x1a88 + 0x18));
    }
    temp_v6 = 0;
    temp_v4 = (int)*(short *)(param_1 + *piVar3 * 0x1a88 + 0x18);
    if (temp_v4 != 0) {
      temp_v6 = param_1 + *piVar3 * 0x68 + 0x1a9c;
    }
  }
  temp_v3 = temp_v4 + 1;
  *(unsigned int *)(param_1 + *piVar3 * 0x68 + temp_v4 * 4 + 0x1a9c) = 0;
  temp_v5 = (int)*(short *)(param_1 + *piVar3 * 0x1a88 + 0x1a);
  temp_v4 = temp_v3;
  if (0 < temp_v5) {
    temp_v8 = 0;
    do {
      temp_v5 = temp_v5 - 1;
      temp_v0 = temp_v8 * 0x100;
      temp_v1 = temp_v4 * 4;
      temp_v4 = temp_v4 + 1;
      temp_v8 = temp_v8 + 1;
      *(int *)(param_1 + *piVar3 * 0x68 + temp_v1 + 0x1a9c) =
           param_1 + *piVar3 * 0x1a88 + temp_v0 + 0x11c;
    } while (temp_v5 != 0);
  }
  temp_v5 = 0;
  if (temp_v4 != temp_v3) {
    temp_v5 = param_1 + *piVar3 * 0x68 + temp_v3 * 4 + 0x1a9c;
  }
  *(int *)(param_1 + *piVar3 * 0x10 + 4) = param_1 + *piVar3 * 0x1a88 + 0x1c;
  *(int *)(param_1 + *piVar3 * 0x10 + 8) = temp_v5;
  *(unsigned short *)(param_1 + *piVar3 * 0x10 + 0xc) =
       *(unsigned short *)(param_1 + *piVar3 * 0x1a88 + 0x14);
  *(unsigned short *)(param_1 + *piVar3 * 0x10 + 0xe) =
       *(unsigned short *)(param_1 + *piVar3 * 0x1a88 + 0x16);
  *(int *)(param_1 + *piVar3 * 0x10 + 0x10) = temp_v6;
  return;
}

} /* extern "C" */
