/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bff6c` (_code @ 0x2bff6c, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001373b4. */


void FUN_002bff6c(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  FUN_001373b4(*(unsigned int *)(param_1 + 0x24),*(unsigned int *)(param_2 + 0x24),
               *(unsigned int *)(param_1 + 0x14),*(unsigned int *)(param_1 + 0x18),
               *(unsigned int *)(param_1 + 0x1c));
  return;
}
