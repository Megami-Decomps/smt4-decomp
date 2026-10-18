/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001105ac` (_code @ 0x1105ac, 0x7c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0011d778(void);
/* Supplied declaration required: FUN_002bb480. */
/* Supplied declaration required: FUN_002bb490. */
/* Supplied declaration required: FUN_002bb648. */
/* Supplied declaration required: FUN_002bb6b8. */


void FUN_001105ac(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  FUN_002bb480(0xe);
  while( 1 ) {
    FUN_002bb6b8();
    temp_v0 = FUN_0011d778();
    FUN_002bb648();
    if ((temp_v0 != -0x375f3010 && temp_v0 != -0x1f5f33f8) && temp_v0 != -0x375f33fe) break;
    FUN_002bb490(10000000,0);
  }
  return;
}
