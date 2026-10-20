/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00343b48` (_code @ 0x343b48, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002bbb5c(void);


void FUN_00343b48(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002bbb5c();
  *(unsigned char *)(temp_v0 + 0x10) = 1;
  return;
}

} /* extern "C" */
