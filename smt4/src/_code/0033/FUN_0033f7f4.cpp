/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033f7f4` (_code @ 0x33f7f4, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002c09bc(void);


void FUN_0033f7f4(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002c09bc();
  *(unsigned int *)(temp_v0 + 0x1f872) = 0;
  *(unsigned int *)(temp_v0 + 0x1f876) = 0;
  *(unsigned int *)(temp_v0 + 0x1f87a) = 0;
  *(unsigned int *)(temp_v0 + 0x1f87e) = 0;
  *(unsigned short *)(temp_v0 + 0x1f882) = 0;
  return;
}

} /* extern "C" */
