/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00106160` (_code @ 0x106160, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0044ea00; /* 0x44ea00 */

/* Supplied declaration required: FUN_002c5188. */
/* Supplied declaration required: FUN_002c5218. */


unsigned int FUN_00106160(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002c5218();
  if (temp_v0 != 0) {
    temp_v1 = FUN_002c5218();
    FUN_002c5188(DAT_0044ea00,temp_v1);
  }
  return 0;
}
