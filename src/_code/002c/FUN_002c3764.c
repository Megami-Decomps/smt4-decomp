/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c3764` (_code @ 0x2c3764, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002b3abc. */


unsigned int FUN_002c3764(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  if (param_1 == 0x20000) {
    FUN_002b3abc();
    return 0x1f2fffff;
  }
  if (param_1 != 0x30000) {
    temp_v0 = 0;
  }
  else {
    FUN_002b3abc(0x30000);
    temp_v0 = 0x1f5fffff;
  }
  return temp_v0;
}
