/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f670c` (_code @ 0x2f670c, 0x2e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_002f670c(unsigned int *param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  unsigned int *puVar2;
  
  puVar2 = param_1 + 0x270;
  *param_1 = param_2;
  *puVar2 = 1;
  do {
    param_1[*puVar2] = param_1[*puVar2 - 1] * 0x10dcd;
    temp_v0 = *puVar2;
    *puVar2 = temp_v0 + 1;
  } while (temp_v0 + 1 < 0x270);
  return;
}

} /* extern "C" */
