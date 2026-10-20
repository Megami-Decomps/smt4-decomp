/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e9334` (_code @ 0x2e9334, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e93da(void);
int FUN_002e93ec(unsigned int, unsigned int);

/* Supplied declaration required: FUN_002e93da. */
/* Supplied declaration required: FUN_002e93ec. */


void FUN_002e9334(int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  FUN_002e93da();
  *(unsigned char *)(param_1 + 0x65) = 0;
  FUN_002e93ec(*(unsigned int *)(param_1 + 4),param_2);
  return;
}

} /* extern "C" */
