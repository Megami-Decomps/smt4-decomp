/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00164ce0` (_code @ 0x164ce0, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00164a9c(void);


void FUN_00164ce0(unsigned int param_1,unsigned char param_2)

{
  int temp_v0;
  
  temp_v0 = FUN_00164a9c();
  *(unsigned char *)(temp_v0 + 0x31) = param_2;
  return;
}
