/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034ddac` (_code @ 0x34ddac, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c0894(unsigned int);

/* Supplied declaration required: FUN_002c0894. */


void FUN_0034ddac(int param_1)

{
/* irregular: 1 native warning(s); review required */
  *(unsigned int *)(*(int *)(param_1 + 0x10) + 0x24) = 0;
  FUN_002c0894(*(unsigned int *)(param_1 + 0x10));
  *(unsigned int *)(param_1 + 0x10) = 0;
  return;
}

} /* extern "C" */
