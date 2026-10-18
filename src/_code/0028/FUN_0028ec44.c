/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028ec44` (_code @ 0x28ec44, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002b4854. */


unsigned int FUN_0028ec44(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  if ((param_1 - 1U < 0x3c) &&
     (FUN_002b4854(), *(char *)(param_1 + 0x6d) == '\x02' || *(char *)(param_1 + 0x6d) == '\x03')) {
    temp_v0 = 1;
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}
