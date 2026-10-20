/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d8c90` (_code @ 0x2d8c90, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0058104c; /* 0x58104c */


void FUN_002d8c90(int param_1)

{
  int temp_v0;
  int temp_v1;
  
  if ((param_1 == 0xd || param_1 == 0x10) || (param_1 == 0x12 || param_1 == 0x13)) {
    temp_v0 = 0;
    do {
      temp_v1 = *(int *)(DAT_0058104c + temp_v0 * 4 + 0xb0);
      if (temp_v1 == param_1) {
        return;
      }
      if (temp_v1 == 0) {
        *(int *)(DAT_0058104c + temp_v0 * 4 + 0xb0) = param_1;
        return;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 0x10);
  }
  return;
}

} /* extern "C" */
