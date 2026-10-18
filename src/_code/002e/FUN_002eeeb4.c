/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eeeb4` (_code @ 0x2eeeb4, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0049fc14; /* 0x49fc14 */

/* Supplied declaration required: FUN_002769b4. */
/* Supplied declaration required: FUN_0027d5ac. */
/* Supplied declaration required: FUN_00296cc8. */
/* Supplied declaration required: FUN_002c57c8. */


unsigned int FUN_002eeeb4(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_00296cc8();
  FUN_00296cc8(1);
  FUN_0027d5ac(temp_v0);
  FUN_002769b4(0x18,1,0);
  DAT_0049fc14 = 0;
  FUN_002c57c8(6,0,0);
  return 1;
}
