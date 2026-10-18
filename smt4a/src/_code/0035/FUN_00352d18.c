/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00352d18` (_code @ 0x352d18, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00162e8c(void);


unsigned char FUN_00352d18(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_00162e8c();
  return *(unsigned char *)(temp_v0 + param_1 + 0xc4c);
}
