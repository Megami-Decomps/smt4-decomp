/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ef978` (_code @ 0x3ef978, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_003ef978(unsigned int param_1,int param_2,int param_3)

{
  unsigned int temp_v0;
  
  if (param_3 < 4) {
    temp_v0 = *(unsigned int *)(param_2 + 0x50) | 0x200;
  }
  else {
    if (param_3 >= 0x36) {
      if (param_3 >= 0x37) {
        return;
      }
      *(unsigned int *)(param_2 + 0x50) = *(unsigned int *)(param_2 + 0x50) | 0x800;
      return;
    }
    temp_v0 = *(unsigned int *)(param_2 + 0x50) | 0x400;
  }
  *(unsigned int *)(param_2 + 0x50) = temp_v0;
  return;
}

} /* extern "C" */
