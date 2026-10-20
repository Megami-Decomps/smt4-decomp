/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0044b92c` (_code @ 0x44b92c, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_0044b92c(int param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = *(unsigned int *)(param_1 + 0x3c) & 0xffffff9f;
  *(unsigned int *)(param_1 + 0x3c) = temp_v0;
  if (((~temp_v0 & 0x180) == 0) &&
     (*(unsigned int *)(param_1 + 0x3c) = temp_v0 | 0x40, (~(temp_v0 | 0x40) & 0x200) == 0)) {
    *(unsigned int *)(param_1 + 0x3c) = temp_v0 | 0x60;
  }
  return;
}

} /* extern "C" */
