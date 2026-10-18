/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001fc480` (_code @ 0x1fc480, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044cdf0; /* 0x44cdf0 */

extern int FUN_002879c0(void);
/* Supplied declaration required: FUN_0039f238. */


unsigned int FUN_001fc480(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002879c0();
  if ((temp_v0 != 0) && (*(int *)(DAT_0044cdf0 + 0x30) == 0)) {
    FUN_0039f238(DAT_0044cdf0 + 0x40);
  }
  return 0;
}
