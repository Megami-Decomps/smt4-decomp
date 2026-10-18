/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a6410` (_code @ 0x2a6410, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002a7094(unsigned int, int);
extern int FUN_002a728c(unsigned int, unsigned int, unsigned int, unsigned int);


void FUN_002a6410(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
  int temp_v0;
  
  temp_v0 = FUN_002a728c(param_2,param_2,param_3,param_1);
  if ((temp_v0 != -1) && (temp_v0 = FUN_002a7094(param_1,temp_v0), temp_v0 != 0)) {
    *(unsigned char *)(temp_v0 + 0xd) = 0;
  }
  return;
}
