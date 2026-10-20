/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00239f84` (_code @ 0x239f84, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00360efc(void);

/* Supplied declaration required: FUN_00360efc. */


unsigned int FUN_00239f84(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  FUN_00360efc();
  if ((((param_1 & 0x3fc00) == 0x4400) && ((param_1 & 0x3ff) >= 100)) && ((param_1 & 0x3ff) < 0xb4)) {
    temp_v0 = 0xc961391a;
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
