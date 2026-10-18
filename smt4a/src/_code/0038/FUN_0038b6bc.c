/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038b6bc` (_code @ 0x38b6bc, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00588fd4; /* 0x588fd4 */

/* Supplied declaration required: FUN_003e4140. */


void FUN_0038b6bc(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_00588fd4;
  if (DAT_00588fd4 != 0) {
    *(unsigned char *)(DAT_00588fd4 + 0x20d1) = 1;
    FUN_003e4140(temp_v0 + 0x20d4);
    return;
  }
  return;
}
