/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001482cc` (_code @ 0x1482cc, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_00150030(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bb308. */
/* Supplied declaration required: FUN_002bb378. */


unsigned int FUN_001482cc(unsigned int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  FUN_002bb378();
  temp_v0 = FUN_00150030(param_1,param_2);
  FUN_002bb308();
  return temp_v0;
}
