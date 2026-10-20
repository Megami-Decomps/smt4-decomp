/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d2288` (_code @ 0x2d2288, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_00162e8c(void);


unsigned char FUN_002d2288(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_00162e8c();
  return (*(unsigned int *)(temp_v0 + ((int)(param_1 + ((unsigned int)(param_1 >> 0x1f) >> 0x1b)) >> 5) * 4 + 0x808) &
         (1 << ((param_1 % 0x20) & 0xffU))) != 0;
}

} /* extern "C" */
