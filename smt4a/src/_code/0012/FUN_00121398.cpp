/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00121398` (_code @ 0x121398, 0xa bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_00121398(int param_1,int param_2)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    temp_v0 = *(unsigned int *)(param_2 + 0xc);
  }
  return temp_v0;
}

} /* extern "C" */
