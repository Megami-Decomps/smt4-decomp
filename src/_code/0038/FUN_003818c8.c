/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003818c8` (_code @ 0x3818c8, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int FUN_003818c8(int param_1,unsigned int param_2)

{
  int temp_v0;
  
  if (((unsigned int)*(unsigned char *)(param_1 + 9) & (1 << (param_2 & 0xff))) != 0) {
    temp_v0 = 0;
    do {
      if (*(int *)(param_1 + param_2 * 0x50 + temp_v0 * 4 + 0x10) == -1) {
        return temp_v0;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 0x14);
  }
  return -1;
}
