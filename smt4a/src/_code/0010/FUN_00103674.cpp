/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00103674` (_code @ 0x103674, 0x3e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e7194(int, int);
int rt_memcpy_w(int, int, int);

/* Supplied declaration required: FUN_002e7194. */
/* Supplied declaration required: rt_memcpy_w. */


int FUN_00103674(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  FUN_002e7194(param_1 + 4,param_2 + 4);
  *(unsigned int *)(param_1 + 0x34) = *(unsigned int *)(param_2 + 0x34);
  rt_memcpy_w(param_1 + 0x38,param_2 + 0x38,0x78);
  rt_memcpy_w(param_1 + 0xb0,param_2 + 0xb0,0x78);
  *(unsigned int *)(param_1 + 0x128) = *(unsigned int *)(param_2 + 0x128);
  return param_1;
}

} /* extern "C" */
