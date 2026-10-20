/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ece58` (_code @ 0x2ece58, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e7232(void);

/* Supplied declaration required: FUN_002e7232. */


unsigned int FUN_002ece58(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 0xd8) != 0) {
    FUN_002e7232();
  }
  *(unsigned int *)(param_1 + 0xd8) = param_2;
  return 1;
}

} /* extern "C" */
