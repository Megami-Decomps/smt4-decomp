/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010032e` (_code @ 0x10032e, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002e3138(unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002e3140. */


void FUN_0010032e(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002e3138(*param_1,param_2,0xffffffff,0xffffffff);
  if (temp_v0 < 0) {
    FUN_002e3140();
  }
  return;
}
