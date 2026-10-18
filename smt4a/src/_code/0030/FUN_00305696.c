/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00305696` (_code @ 0x305696, 0xa bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_00305696(int param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if (*(int *)(param_1 + 0x78) != 0) {
    temp_v0 = *(unsigned int *)(*(int *)(param_1 + 0x78) + 0x24);
  }
  return temp_v0;
}
