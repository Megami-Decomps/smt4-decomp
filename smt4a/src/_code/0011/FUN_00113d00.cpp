/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00113d00` (_code @ 0x113d00, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_00113d00(int param_1,int param_2)

{
  if ((*(int *)(param_1 + 4) != 0) && (*(int *)(param_1 + 4) != param_2)) {
    return 0;
  }
  *(int *)(param_1 + 4) = param_2;
  return 1;
}

} /* extern "C" */
