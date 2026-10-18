/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00310724` (_code @ 0x310724, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002c0e9c(void);
/* Supplied declaration required: FUN_002c0ec4. */


int FUN_00310724(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  FUN_002c0ec4(0x15,0);
  temp_v0 = FUN_002c0e9c();
  return temp_v0 + param_1 * 100;
}
