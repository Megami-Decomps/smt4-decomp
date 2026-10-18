/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003aea60` (_code @ 0x3aea60, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00225220(int);


void FUN_003aea60(int param_1)

{
  int temp_v0;
  int temp_v1;
  
  temp_v1 = *(int *)(param_1 + 0x20);
  temp_v0 = FUN_00225220(temp_v1 + 8);
  if (temp_v0 != 0) {
    *(unsigned int *)(temp_v1 + 0x7e38) = 0;
  }
  return;
}
