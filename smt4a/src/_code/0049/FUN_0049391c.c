/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0049391c` (_code @ 0x49391c, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0049c9a0. */


int FUN_0049391c(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_0049c9a0();
  temp_v1 = FUN_0049c9a0(param_2);
  return temp_v1 - temp_v0;
}
