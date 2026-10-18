/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ab7a0` (_code @ 0x3ab7a0, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0019e0c0(unsigned int);


void FUN_003ab7a0(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_0019e0c0(*(unsigned int *)(param_1 + 0x5a0));
  if (temp_v0 == 2) {
    *(unsigned int *)(param_1 + 0x14) = 3;
    *(unsigned int *)(param_1 + 0x18) = 0;
  }
  return;
}
