/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038a344` (_code @ 0x38a344, 0x20 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002a7094(unsigned int, unsigned int, unsigned int);


void FUN_0038a344(unsigned int param_1,unsigned int param_2)

{
  int temp_v0;
  
  temp_v0 = FUN_002a7094(param_1,0x10,param_2);
  if (temp_v0 != 0) {
    *(unsigned char *)(temp_v0 + 0xd) = 0;
  }
  return;
}
