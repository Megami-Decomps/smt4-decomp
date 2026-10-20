/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011b674` (_code @ 0x11b674, 0x22 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001182d0(int, unsigned int, int, unsigned int);
int FUN_0030745c(int, int, int, unsigned int, unsigned int);

/* Supplied declaration required: FUN_001182d0. */
/* Supplied declaration required: FUN_0030745c. */


void FUN_0011b674(int param_1,unsigned int param_2,int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  FUN_0030745c(param_1,param_3 + 0x90,param_3,param_4,param_4);
  FUN_001182d0(param_1 + 0x18,param_2,param_3,param_4);
  return;
}

} /* extern "C" */
