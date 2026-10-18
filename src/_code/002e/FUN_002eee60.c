/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eee60` (_code @ 0x2eee60, 0x50 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0049fc14; /* 0x49fc14 */

/* Supplied declaration required: FUN_00276c24. */
/* Supplied declaration required: FUN_0027d81c. */
/* Supplied declaration required: FUN_00296f60. */
/* Supplied declaration required: FUN_002c59b8. */


unsigned int FUN_002eee60(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_00296f60();
  FUN_00296f60(1);
  FUN_0027d81c(temp_v0);
  FUN_00276c24(0x18,1,0);
  DAT_0049fc14 = 0;
  FUN_002c59b8(6,0,0);
  return 1;
}
