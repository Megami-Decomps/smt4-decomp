/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003834e0` (_code @ 0x3834e0, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0019dfbc(unsigned int);


void FUN_003834e0(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_0019dfbc(**(unsigned int **)(param_1 + 0x5c4));
  if (temp_v0 == 2) {
    *(unsigned int *)(param_1 + 4) = 4;
    *(unsigned int *)(param_1 + 8) = 0;
  }
  return;
}
