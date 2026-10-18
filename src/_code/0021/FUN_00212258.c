/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00212258` (_code @ 0x212258, 0x84 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0049f943; /* 0x49f943 */
extern unsigned char DAT_0049fc14; /* 0x49fc14 */

/* Supplied declaration required: FUN_00276c24. */
/* Supplied declaration required: FUN_0027d81c. */
/* Supplied declaration required: FUN_00296f60. */
/* Supplied declaration required: FUN_002c59b8. */


unsigned int FUN_00212258(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00296f60(0);
  temp_v1 = FUN_00296f60(1);
  temp_v2 = FUN_00296f60(2);
  if (temp_v0 != 0x18) {
    FUN_00276c24(temp_v0,temp_v1,temp_v2);
  }
  else {
    FUN_00276c24(0x18,1,temp_v2);
    FUN_0027d81c(temp_v1);
    DAT_0049f943 = 1;
  }
  DAT_0049fc14 = 0;
  FUN_002c59b8(6,0,0);
  return 1;
}
