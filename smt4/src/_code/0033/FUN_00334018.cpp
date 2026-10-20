/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00334018` (_code @ 0x334018, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002b63ac(void);


void FUN_00334018(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_002b63ac();
  *(unsigned short *)(temp_v0 + 0x72) = *(unsigned short *)(temp_v0 + 0x72) | (unsigned short)(1 << (param_1 & 0xff));
  return;
}

} /* extern "C" */
