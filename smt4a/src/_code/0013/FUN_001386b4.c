/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001386b4` (_code @ 0x1386b4, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_005b40c9; /* 0x5b40c9 */

/* Supplied declaration required: FUN_0013ebd8. */
/* Supplied declaration required: FUN_00142b04. */
extern int FUN_001a0380(void);


int FUN_001386b4(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  FUN_00142b04();
  temp_v0 = FUN_001a0380();
  FUN_0013ebd8();
  if (-1 < temp_v0) {
    DAT_005b40c9 = 0;
  }
  return temp_v0;
}
