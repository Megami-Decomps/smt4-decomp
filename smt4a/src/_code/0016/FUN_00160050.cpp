/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00160050` (_code @ 0x160050, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


int FUN_00160050(int param_1)

{
  int temp_v0;
  
  if (*(int *)(param_1 + 0x84) >= *(int *)(param_1 + 0x80)) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = *(int *)(param_1 + 0x80) - *(int *)(param_1 + 0x84);
  }
  return temp_v0;
}

} /* extern "C" */
