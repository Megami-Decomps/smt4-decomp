/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003083ee` (_code @ 0x3083ee, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* Supplied declaration required: FUN_003083ee. */


void FUN_003083ee(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  while (param_2 != 0) {
    FUN_003083ee(param_1,*(unsigned int *)(param_2 + 0xc));
    temp_v0 = *(int *)(param_2 + 8);
    *(unsigned int *)(param_2 + 0xc) = *(unsigned int *)(param_1 + 4);
    *(int *)(param_1 + 4) = param_2;
    param_2 = temp_v0;
  }
  return;
}

} /* extern "C" */
