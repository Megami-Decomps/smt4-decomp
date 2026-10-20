/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015d240` (_code @ 0x15d240, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0015e3a4(unsigned int, unsigned int);

/* Supplied declaration required: FUN_0015e3a4. */


void FUN_0015d240(int param_1,int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  FUN_0015e3a4(*(unsigned int *)(*(int *)(param_1 + param_2 * 4) + 0x68),param_3);
  return;
}

} /* extern "C" */
