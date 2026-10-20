/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003aeb0c` (_code @ 0x3aeb0c, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002d0298(int);


void FUN_003aeb0c(int param_1)

{
  int temp_v0;
  int temp_v1;
  
  temp_v1 = *(int *)(param_1 + 0x20);
  temp_v0 = FUN_002d0298(temp_v1 + 8);
  if (temp_v0 != 0) {
    *(unsigned int *)(temp_v1 + 0x7e38) = 0;
  }
  return;
}

} /* extern "C" */
