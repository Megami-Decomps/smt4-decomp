/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039729c` (_code @ 0x39729c, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_003972c8. */


void FUN_0039729c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  FUN_003972c8(param_1,*(unsigned int *)(param_1 + 4));
  temp_v0 = param_1 + 8;
  *(int *)(param_1 + 0x10) = temp_v0;
  *(int *)(param_1 + 4) = temp_v0;
  *(int *)(param_1 + 0x1c) = temp_v0;
  *(unsigned int *)(param_1 + 0x20) = 0;
  *(int *)(param_1 + 0x18) = temp_v0;
  return;
}
