/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c3a98` (_code @ 0x4c3a98, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_0014aa78(void);
/* Supplied declaration required: FUN_003f0e20. */


void FUN_004c3a98(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_0014aa78();
  FUN_003f0e20(temp_v0,param_1);
  return;
}
