/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00377418` (_code @ 0x377418, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int gameFlagsGetBlock(void);


void FUN_00377418(int param_1,int param_2)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  
  temp_v1 = gameFlagsGetBlock();
  puVar3 = (unsigned int *)(temp_v1 + ((int)(param_1 + ((unsigned int)(param_1 >> 0x1f) >> 0x1b)) >> 5) * 4 + 0x152c);
  temp_v2 = *puVar3;
  temp_v0 = 1 << ((param_1 % 0x20) & 0xffU);
  if (param_2 != 0) {
    temp_v2 = temp_v2 | temp_v0;
  }
  else {
    temp_v2 = temp_v2 & ~temp_v0;
  }
  *puVar3 = temp_v2;
  return;
}

} /* extern "C" */
