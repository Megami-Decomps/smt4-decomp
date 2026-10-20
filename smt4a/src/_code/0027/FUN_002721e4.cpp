/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002721e4` (_code @ 0x2721e4, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


int FUN_002721e4(int param_1)

{
  int temp_v0;
  
  temp_v0 = *(int *)(param_1 + 0x20);
  if ((*(int *)(param_1 + 0x28) == 0) && (temp_v0 != 0)) {
    temp_v0 = temp_v0 + param_1;
  }
  return temp_v0;
}

} /* extern "C" */
