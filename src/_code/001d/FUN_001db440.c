/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001db440` (_code @ 0x1db440, 0x24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_002ebb30(void);
/* Supplied declaration required: FUN_0035798c. */


unsigned char FUN_001db440(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_002ebb30();
  FUN_0035798c();
  return (temp_v0 & 0x80000000) == 0;
}
