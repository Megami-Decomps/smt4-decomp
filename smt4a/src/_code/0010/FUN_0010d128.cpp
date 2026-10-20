/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010d128` (_code @ 0x10d128, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int valuePairSet(int, int *, unsigned int, unsigned int, int);

/* Supplied declaration required: valuePairSet. */


void FUN_0010d128(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int uStack_c;
  unsigned int uStack_8;
  
  uStack_c = param_2;
  uStack_8 = param_3;
  valuePairSet(param_1 + 4,&uStack_c,param_3,param_4,param_1);
  return;
}

} /* extern "C" */
