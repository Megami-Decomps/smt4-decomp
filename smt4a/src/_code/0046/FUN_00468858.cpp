/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00468858` (_code @ 0x468858, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_00468858(int param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = 5;
  if ((*(int *)(param_1 + 0xad8) != 0) && (*(int *)(*(int *)(param_1 + 0xad8) + 4) == 6)) {
    temp_v0 = 4;
  }
  return temp_v0;
}

} /* extern "C" */
