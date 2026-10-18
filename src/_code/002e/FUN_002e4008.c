/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e4008` (_code @ 0x2e4008, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00293c98(void);
/* Supplied declaration required: FUN_002b8b78. */


unsigned int FUN_002e4008(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00293c98();
  *(unsigned int *)(temp_v0 + 0x44a0) = *(unsigned int *)(temp_v0 + 0x44a0) | 0x100000;
  FUN_002b8b78(0xdd);
  return 1;
}
