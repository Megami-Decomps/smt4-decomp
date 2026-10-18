/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001521b0` (_code @ 0x1521b0, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_001521b0(int param_1,int param_2)

{
  unsigned int temp_v0;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    temp_v0 = 0;
  }
  else {
    temp_v0 = *(unsigned int *)(*(int *)(param_1 + 4) + param_2 * 0xc + 0xc);
  }
  return temp_v0;
}
