/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eb1f0` (_code @ 0x2eb1f0, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_002eb240; /* 0x2eb240 */

/* Supplied declaration required: FUN_00296cc8. */
/* Supplied declaration required: FUN_002be624. */


unsigned int FUN_002eb1f0(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1 [32];
  
  temp_v0 = FUN_00296cc8(0);
  FUN_00296cc8(1);
  FUN_00296cc8(2);
  FUN_00296cc8(3);
  FUN_00296cc8(4);
  FUN_002be624(temp_v1,&LAB_002eb240,temp_v0);
  return 1;
}
