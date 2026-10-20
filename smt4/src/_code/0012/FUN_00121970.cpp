/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00121970` (_code @ 0x121970, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b4e74(...);

/* Supplied declaration required: FUN_002b4e74. */


void FUN_00121970(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002b4e74();
  FUN_002b4e74(param_1 + 0xb4);
  *(unsigned char *)(param_1 + 0x18d) = 0;
  return;
}

} /* extern "C" */
