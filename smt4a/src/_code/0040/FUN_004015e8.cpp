/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004015e8` (_code @ 0x4015e8, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_004ffba8(unsigned int);


unsigned int FUN_004015e8(int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  
  if ((*(int *)(param_1 + 0x1c) == 0) ||
     (temp_v0 = FUN_004ffba8(*(unsigned int *)(*(int *)(param_1 + 0x1c) + 4)), temp_v1 = 0, temp_v0 != 0)) {
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
