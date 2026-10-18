/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00141af8` (_code @ 0x141af8, 0x10 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_00141af8(int param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if (*(unsigned int **)(param_1 + 8) != (unsigned int *)0x0) {
    temp_v0 = **(unsigned int **)(param_1 + 8);
  }
  return temp_v0;
}
