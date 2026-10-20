/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003821b8` (_code @ 0x3821b8, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_003821b8(int param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = 5;
  if ((*(int *)(param_1 + 0xda8) != 0) && (*(int *)(*(int *)(param_1 + 0xda8) + 4) == 6)) {
    temp_v0 = 4;
  }
  return temp_v0;
}

} /* extern "C" */
