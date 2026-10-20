/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00376f84` (_code @ 0x376f84, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_00162e8c(void);


int FUN_00376f84(void)

{
  int temp_v0;
  
  temp_v0 = FUN_00162e8c();
  return (int)*(short *)(temp_v0 + 0x20);
}

} /* extern "C" */
