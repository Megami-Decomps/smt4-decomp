/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023a11c` (_code @ 0x23a11c, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0036110c. */


unsigned int FUN_0023a11c(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  FUN_0036110c();
  if ((((param_1 & 0x3fc00) == 0x4400) && ((param_1 & 0x3ff) >= 100)) && ((param_1 & 0x3ff) < 0xb4)) {
    temp_v0 = 0xc961391a;
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}
