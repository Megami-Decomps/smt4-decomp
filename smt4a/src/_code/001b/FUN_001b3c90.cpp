/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b3c90` (_code @ 0x1b3c90, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_001b3c90(int param_1,int param_2)

{
  unsigned int temp_v0;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    temp_v0 = 0;
  }
  else {
    temp_v0 = *(unsigned int *)(*(int *)(param_1 + 4) + param_2 * 0xc + 0xc);
  }
  return temp_v0;
}

} /* extern "C" */
