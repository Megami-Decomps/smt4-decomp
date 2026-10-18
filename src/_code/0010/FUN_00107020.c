/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00107020` (_code @ 0x107020, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00433158; /* 0x433158 */

extern int FUN_00110d88(void);
/* Supplied declaration required: FUN_002c23f8. */


void FUN_00107020(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = DAT_00433158;
  if (DAT_00433158 == 0) {
    temp_v0 = 0x450;
    FUN_002c23f8();
    temp_v1 = 0;
    if (temp_v0 != 0) {
      temp_v1 = FUN_00110d88();
    }
  }
  DAT_00433158 = temp_v1;
  return;
}
