/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00187168` (_code @ 0x187168, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_00187168(int param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if ((param_1 != 0) && (temp_v0 = 0, (*(unsigned int *)(param_1 + 0x130) & 1) != 0)) {
    temp_v0 = 1;
  }
  return temp_v0;
}
