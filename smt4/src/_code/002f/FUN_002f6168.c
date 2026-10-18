/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f6168` (_code @ 0x2f6168, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0049fc14; /* 0x49fc14 */

/* Supplied declaration required: FUN_002769b4. */
extern unsigned int FUN_00296cc8(void);


unsigned int FUN_002f6168(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_00296cc8();
  FUN_002769b4(0xc9,temp_v0,0xffffffff);
  DAT_0049fc14 = 0;
  return 1;
}
