/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039ff40` (_code @ 0x39ff40, 0x20 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002310d8. */


int FUN_0039ff40(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_002310d8();
  temp_v1 = FUN_002310d8(param_2);
  return temp_v1 - temp_v0;
}
