/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00377100` (_code @ 0x377104, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

unsigned int FUN_00377100(int param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    temp_v0 = (**(romwright_code **)(**(int **)(param_1 + 0x18) + 0xc))();
  }
  return temp_v0;
}

} /* extern "C" */
