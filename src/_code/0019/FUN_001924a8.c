/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001924a8` (_code @ 0x1924a8, 0x50 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044cdf0; /* 0x44cdf0 */

/* Supplied declaration required: FUN_00291cac. */
/* Supplied declaration required: FUN_00399d4c. */
/* Supplied declaration required: FUN_0039bdf0. */
/* Supplied declaration required: FUN_003c2ad0. */


void FUN_001924a8(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  FUN_00291cac(1,0);
  temp_v0 = DAT_0044cdf0;
  if (DAT_0044cdf0 != 0) {
    FUN_003c2ad0(DAT_0044cdf0 + 0x12334,8);
    FUN_00399d4c(temp_v0 + 0x40);
    FUN_0039bdf0(temp_v0 + 0x40);
  }
  *(unsigned char *)(DAT_0044cdf0 + 10) = 1;
  return;
}
