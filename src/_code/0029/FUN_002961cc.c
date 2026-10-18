/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002961cc` (_code @ 0x2961cc, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002c0e9c(void);
/* Supplied declaration required: FUN_002c0ec4. */


unsigned int FUN_002961cc(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  FUN_002c0ec4(9,1);
  temp_v0 = FUN_002c0e9c();
  if (param_1 < 99) {
    temp_v1 = *(unsigned int *)((temp_v0 + param_1 * 4) - 4);
  }
  else {
    temp_v1 = 0;
  }
  return temp_v1;
}
