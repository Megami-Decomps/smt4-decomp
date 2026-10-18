/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021e8b0` (_code @ 0x21e8b0, 0x1c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044cdf0; /* 0x44cdf0 */

/* Supplied declaration required: FUN_0023167c. */


void FUN_0021e8b0(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0044cdf0;
  *(unsigned int *)(DAT_0044cdf0 + 0x28) = param_1;
  *(unsigned int *)(temp_v0 + 0x2c) = 0;
  FUN_0023167c(temp_v0 + 0x40,param_1);
  return;
}
