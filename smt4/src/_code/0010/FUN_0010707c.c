/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010707c` (_code @ 0x10707c, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00433158; /* 0x433158 */

extern int FUN_00110e7c(void);
/* Supplied declaration required: FUN_002c222c. */


void FUN_0010707c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = DAT_00433158;
  if (DAT_00433158 == 0) {
    temp_v0 = 0x450;
    FUN_002c222c();
    temp_v1 = 0;
    if (temp_v0 != 0) {
      temp_v1 = FUN_00110e7c();
    }
  }
  DAT_00433158 = temp_v1;
  return;
}
