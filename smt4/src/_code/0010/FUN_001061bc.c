/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001061bc` (_code @ 0x1061bc, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0044ea00; /* 0x44ea00 */

/* Supplied declaration required: FUN_002c4f8c. */
/* Supplied declaration required: FUN_002c501c. */


unsigned int FUN_001061bc(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002c501c();
  if (temp_v0 != 0) {
    temp_v1 = FUN_002c501c();
    FUN_002c4f8c(DAT_0044ea00,temp_v1);
  }
  return 0;
}
