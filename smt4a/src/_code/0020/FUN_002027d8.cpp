/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002027d8` (_code @ 0x2027d8, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e2b50(int, int);

/* Supplied declaration required: FUN_002e2b50. */


unsigned int FUN_002027d8(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002e2b50(param_1,10);
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  return 1;
}

} /* extern "C" */
