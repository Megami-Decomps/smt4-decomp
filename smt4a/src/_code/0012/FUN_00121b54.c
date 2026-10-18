/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00121b54` (_code @ 0x121b54, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002eac34(unsigned int);


void FUN_00121b54(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_002eac34(3);
  *(int *)(temp_v0 + 0x14) = param_1 + 0xe8;
  temp_v0 = FUN_002eac34(2);
  *(int *)(temp_v0 + 0x14) = param_1 + 0xe8;
  return;
}
