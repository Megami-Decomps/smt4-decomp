/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e7682` (_code @ 0x2e7682, 0xe bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e74c4(unsigned int, unsigned int, unsigned int, unsigned int);

/* Supplied declaration required: FUN_002e74c4. */


void FUN_002e7682(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  FUN_002e74c4(*(unsigned int *)(param_1 + 8),param_2,param_3,0xffffffff);
  return;
}

} /* extern "C" */
