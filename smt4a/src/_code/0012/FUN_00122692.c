/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00122692` (_code @ 0x122692, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00303038. */


unsigned int FUN_00122692(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  FUN_00303038(param_1,*(unsigned int *)(param_2 + 8));
  *(int *)(param_2 + 0x14) = *(int *)(*(int *)(param_2 + 8) + 0x10) << 3;
  return param_1;
}
