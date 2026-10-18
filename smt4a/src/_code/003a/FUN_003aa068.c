/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003aa068` (_code @ 0x3aa068, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_003aa068(int param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if ((param_1 != 0) && (temp_v0 = 0, *(int *)(param_1 + 0x243c) != 0)) {
    temp_v0 = 1;
  }
  return temp_v0;
}
