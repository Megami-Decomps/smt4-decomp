/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004ff970` (_code @ 0x4ff970, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_004ff970(int param_1)

{
  unsigned int temp_v0;
  
  if (*(int *)(param_1 + 0x90) == 0) {
    temp_v0 = 0xffff;
  }
  else {
    temp_v0 = *(unsigned int *)(param_1 + 0x84);
  }
  return temp_v0;
}
