/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00105748` (_code @ 0x105748, 0x12 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002ebd34(void);


void FUN_00105748(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_002ebd34();
  *(unsigned char *)(**(int **)(param_1 + 0x34) + temp_v0) = 1;
  return;
}
