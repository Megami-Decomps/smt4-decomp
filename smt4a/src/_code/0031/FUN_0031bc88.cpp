/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031bc88` (_code @ 0x31bc88, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_00164a9c(void);


unsigned char FUN_0031bc88(void)

{
  int temp_v0;
  
  temp_v0 = FUN_00164a9c();
  return *(int *)(temp_v0 + 0xc) == 0;
}

} /* extern "C" */
