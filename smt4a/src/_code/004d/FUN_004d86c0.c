/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d86c0` (_code @ 0x4d86c0, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_003fd7c0. */


void FUN_004d86c0(int *param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  if (*param_1 != 0) {
    FUN_003fd7c0(*(unsigned int *)(*param_1 + 4),param_2,2);
    return;
  }
  return;
}
