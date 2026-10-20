/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033ab6c` (_code @ 0x33ab6c, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_00162e8c(void);


void FUN_0033ab6c(int param_1,int param_2)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v1 = FUN_00162e8c();
  temp_v1 = temp_v1 + ((int)(param_1 + ((unsigned int)(param_1 >> 0x1f) >> 0x1b)) >> 5) * 4;
  temp_v2 = *(unsigned int *)(temp_v1 + 0xd4c);
  temp_v0 = 1 << ((param_1 % 0x20) & 0xffU);
  if (param_2 != 0) {
    temp_v2 = temp_v2 | temp_v0;
  }
  else {
    temp_v2 = temp_v2 & ~temp_v0;
  }
  *(unsigned int *)(temp_v1 + 0xd4c) = temp_v2;
  return;
}

} /* extern "C" */
