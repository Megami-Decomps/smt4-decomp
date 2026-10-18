/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004dbef8` (_code @ 0x4dbef8, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_004dbef8(int param_1,unsigned int param_2,int param_3)

{
  short temp_v0;
  int temp_v1;
  
  temp_v1 = 0;
  do {
    temp_v0 = *(short *)(param_3 + temp_v1 * 2);
    if (temp_v0 != 0) {
      *(short *)(param_1 + *(int *)(param_1 + 0x1b0) * 2 + 0x17e) = temp_v0;
      *(int *)(param_1 + 0x1b0) = *(int *)(param_1 + 0x1b0) + 1;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 8);
  if (*(int *)(param_1 + 0x1b0) < 0x18) {
    *(unsigned short *)(param_1 + *(int *)(param_1 + 0x1b0) * 2 + 0x17e) = 0;
  }
  return;
}
