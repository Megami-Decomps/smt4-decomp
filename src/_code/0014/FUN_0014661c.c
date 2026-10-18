/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014661c` (_code @ 0x14661c, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_002bce48. */


int FUN_0014661c(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *param_1;
  if (temp_v0 == 0) {
    temp_v0 = -0x275efc09;
  }
  else {
    software_interrupt(0x23);
    if (temp_v0 < 0) {
      FUN_002bce48();
    }
    *param_1 = 0;
  }
  return temp_v0;
}
