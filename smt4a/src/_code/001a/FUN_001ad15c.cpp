/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ad15c` (_code @ 0x1ad15c, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_001ad15c(int param_1,int param_2,int param_3)

{
  unsigned int temp_v0;
  
  if (param_1 != 0) {
    param_3 = *(int *)(param_1 + 8);
  }
  if (param_1 != 0 && param_3 != 0) {
    if (param_2 == 0x10000) {
      *(unsigned int *)(param_3 + 8) = 0x10000;
    }
    else {
      if (param_2 != 0x20000) {
        if (param_2 != 0x30000) {
          return;
        }
        *(unsigned int *)(param_3 + 8) = 0x30000;
        temp_v0 = *(unsigned int *)(param_1 + 0x10) | 0x40;
      }
      else {
        *(unsigned int *)(param_3 + 8) = 0x20000;
        temp_v0 = *(unsigned int *)(param_1 + 0x10) | 0x20;
      }
      *(unsigned int *)(param_1 + 0x10) = temp_v0;
    }
  }
  return;
}

} /* extern "C" */
