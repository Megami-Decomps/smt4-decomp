/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00146f44` (_code @ 0x146f44, 0x40 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002bb5b4(void);


void FUN_00146f44(int param_1,unsigned short param_2)

{
  int temp_v0;
  
  temp_v0 = FUN_002bb5b4();
  if (temp_v0 != 0) {
    temp_v0 = *(int *)(param_1 + (unsigned int)*(unsigned short *)(param_1 + 0x131e) * 4 + 0x10a0);
    *(unsigned short *)(temp_v0 + 0xbc) = param_2;
    *(unsigned int *)(temp_v0 + 0xc0) = *(unsigned int *)(temp_v0 + 0xc0) | 0x10000;
  }
  return;
}
