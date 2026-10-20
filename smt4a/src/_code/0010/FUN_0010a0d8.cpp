/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010a0d8` (_code @ 0x10a0d8, 0x1e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e93ec(int, unsigned int);
int FUN_002e9672(void);

/* Supplied declaration required: FUN_002e93ec. */
/* Supplied declaration required: FUN_002e9672. */


void FUN_0010a0d8(int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  param_1 = param_1 + 0x120;
  FUN_002e9672();
  *(unsigned short *)(param_1 + 6) = 0xed30;
  FUN_002e93ec(param_1,param_2);
  return;
}

} /* extern "C" */
