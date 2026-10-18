/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001db548` (_code @ 0x1db548, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_002ebb88(void);
/* Supplied declaration required: FUN_0035777c. */


unsigned char FUN_001db548(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_002ebb88();
  FUN_0035777c();
  return (temp_v0 & 0x80000000) == 0;
}
