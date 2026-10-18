/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00300318` (_code @ 0x300318, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_002939f4(void);
/* Supplied declaration required: FUN_00296cc8. */
/* Supplied declaration required: FUN_0033b0ac. */


unsigned int FUN_00300318(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00296cc8(0);
  temp_v1 = FUN_00296cc8(1);
  temp_v2 = FUN_002939f4();
  FUN_0033b0ac(temp_v2,temp_v0,temp_v1);
  return 1;
}
