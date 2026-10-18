/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00222838` (_code @ 0x222838, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0049fc14; /* 0x49fc14 */

/* Supplied declaration required: FUN_00276c24. */
extern unsigned int FUN_00296f60(unsigned int);
/* Supplied declaration required: FUN_002c59b8. */


unsigned int FUN_00222838(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00296f60(0);
  temp_v1 = FUN_00296f60(1);
  temp_v2 = FUN_00296f60(2);
  FUN_00276c24(temp_v0,temp_v1,temp_v2);
  DAT_0049fc14 = 0;
  FUN_002c59b8(8,0,0);
  return 1;
}
