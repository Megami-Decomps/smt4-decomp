/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014d378` (_code @ 0x14d378, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_0014d378(int param_1)

{
  unsigned int temp_v0;
  
  if (*(char *)(param_1 + 0xc) != '\0') {
    temp_v0 = **(unsigned int **)(param_1 + 4);
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}
