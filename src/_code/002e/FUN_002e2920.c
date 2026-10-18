/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e2920` (_code @ 0x2e2920, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0028df54. */
/* Supplied declaration required: FUN_00296f60. */
/* Supplied declaration required: FUN_0029923c. */


unsigned int FUN_002e2920(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00296f60();
  temp_v1 = FUN_00296f60(1);
  FUN_0029923c(temp_v0,temp_v1);
  FUN_0028df54();
  return 1;
}
