/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00246908` (_code @ 0x246908, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


int FUN_00246908(int param_1)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = 0;
  for (temp_v1 = *(int *)(param_1 + 0x8c); temp_v1 != 0; temp_v1 = *(int *)(temp_v1 + 0xac)) {
    temp_v0 = temp_v0 + 1;
  }
  return temp_v0;
}

} /* extern "C" */
