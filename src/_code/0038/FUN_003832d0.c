/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003832d0` (_code @ 0x3832d0, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0019e0c0(unsigned int);


void FUN_003832d0(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_0019e0c0(**(unsigned int **)(param_1 + 0x5c4));
  if (temp_v0 == 2) {
    *(unsigned int *)(param_1 + 4) = 4;
    *(unsigned int *)(param_1 + 8) = 0;
  }
  return;
}
