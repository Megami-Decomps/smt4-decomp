/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00285800` (_code @ 0x285800, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00588fd4; /* 0x588fd4 */

/* Supplied declaration required: FUN_0021af2c. */


void FUN_00285800(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_00588fd4;
  *(unsigned int *)(DAT_00588fd4 + 0x1374) = 0;
  FUN_0021af2c();
  *(unsigned char *)(temp_v0 + 0x2014) = 0;
  return;
}
