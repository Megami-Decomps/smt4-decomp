/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e7690` (_code @ 0x2e7690, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e74c4(unsigned int, unsigned int, int, unsigned int);

/* Supplied declaration required: FUN_002e74c4. */


void FUN_002e7690(int param_1,unsigned int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  FUN_002e74c4(*(unsigned int *)(param_1 + 8),param_2,param_3 << 1,0xffffffff);
  return;
}

} /* extern "C" */
