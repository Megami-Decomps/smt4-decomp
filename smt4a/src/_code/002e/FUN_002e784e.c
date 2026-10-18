/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e784e` (_code @ 0x2e784e, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *FUN_002e6dac(int);


unsigned int * FUN_002e784e(unsigned int param_1)

{
  unsigned int *puVar1;
  unsigned int temp_v0;
  
  puVar1 = (unsigned int *)FUN_002e6dac(param_1 + 4);
  *puVar1 = param_1;
  for (temp_v0 = 0; temp_v0 < param_1; temp_v0 = temp_v0 + 1) {
  }
  return puVar1 + 1;
}
