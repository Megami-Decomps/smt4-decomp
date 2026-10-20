/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00429e14` (_code @ 0x429e14, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0042a16c(int, int, unsigned int, int);

/* Supplied declaration required: FUN_0042a16c. */


void FUN_00429e14(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = param_1;
  FUN_0042a16c(param_1,2,param_2,0);
  if (temp_v0 < 0) {
    FUN_0042a16c(param_1,1,param_2,0);
  }
  return;
}

} /* extern "C" */
