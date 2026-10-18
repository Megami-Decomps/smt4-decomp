/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ab9c0` (_code @ 0x3ab9c0, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0019dfbc(unsigned int);


void FUN_003ab9c0(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_0019dfbc(*(unsigned int *)(param_1 + 0x5a0));
  if (temp_v0 == 2) {
    *(unsigned int *)(param_1 + 0x14) = 3;
    *(unsigned int *)(param_1 + 0x18) = 0;
  }
  return;
}
