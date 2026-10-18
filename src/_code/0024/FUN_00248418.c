/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00248418` (_code @ 0x248418, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00433158; /* 0x433158 */

extern int FUN_002c0e4c(void);
/* Supplied declaration required: FUN_002c0ec4. */


int FUN_00248418(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  FUN_002c0ec4(0x23,0);
  temp_v0 = FUN_002c0e4c();
  return temp_v0 + *(int *)(DAT_00433158 + 0x3e4);
}
