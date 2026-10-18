/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003002dc` (_code @ 0x3002dc, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_00293c98(void);
/* Supplied declaration required: FUN_00296f60. */
/* Supplied declaration required: FUN_0033b2e0. */


unsigned int FUN_003002dc(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00296f60(0);
  temp_v1 = FUN_00296f60(1);
  temp_v2 = FUN_00293c98();
  FUN_0033b2e0(temp_v2,temp_v0,temp_v1);
  return 1;
}
