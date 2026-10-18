/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002efb6c` (_code @ 0x2efb6c, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_002efb6c(unsigned int *param_1,int param_2)

{
  unsigned int temp_v0;
  
  temp_v0 = *(unsigned int *)*param_1;
  if (param_2 != 0) {
    temp_v0 = temp_v0 | param_1[1];
  }
  else {
    temp_v0 = temp_v0 & ~param_1[1];
  }
  *(unsigned int *)*param_1 = temp_v0;
  return;
}
