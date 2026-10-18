/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011b6e2` (_code @ 0x11b6e2, 0x22 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0010ab7e(void);


unsigned char FUN_0011b6e2(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_0010ab7e();
  if (temp_v0 != 0) {
    *(unsigned char *)(param_1 + 0x14) = 0;
  }
  return temp_v0 != 0;
}
