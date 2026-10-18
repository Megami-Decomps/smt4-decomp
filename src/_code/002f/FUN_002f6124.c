/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f6124` (_code @ 0x2f6124, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0049fc14; /* 0x49fc14 */

/* Supplied declaration required: FUN_00276c24. */
extern unsigned int FUN_00296f60(void);


unsigned int FUN_002f6124(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_00296f60();
  FUN_00276c24(0xc9,temp_v0,0xffffffff);
  DAT_0049fc14 = 0;
  return 1;
}
