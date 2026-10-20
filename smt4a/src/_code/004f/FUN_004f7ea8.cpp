/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f7ea8` (_code @ 0x4f7ea8, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001aba54(unsigned int);
int FUN_00335660(...);

/* Supplied declaration required: FUN_001aba54. */
/* Supplied declaration required: FUN_00335660. */


void FUN_004f7ea8(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  FUN_001aba54(param_2);
  temp_v0 = FUN_00335660(param_3,param_2);
  *(unsigned int *)(param_1 + 0x1f54) = temp_v0;
  temp_v0 = FUN_00335660(param_3,param_2,0);
  *(unsigned int *)(param_1 + 0x1f58) = temp_v0;
  return;
}

} /* extern "C" */
