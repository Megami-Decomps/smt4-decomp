/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030a7ec` (_code @ 0x30a7ec, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0030a7ec. */


void FUN_0030a7ec(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  while (param_2 != 0) {
    FUN_0030a7ec(param_1,*(unsigned int *)(param_2 + 0xc));
    temp_v0 = *(int *)(param_2 + 8);
    *(unsigned int *)(param_2 + 0xc) = *(unsigned int *)(param_1 + 4);
    *(int *)(param_1 + 4) = param_2;
    param_2 = temp_v0;
  }
  return;
}
