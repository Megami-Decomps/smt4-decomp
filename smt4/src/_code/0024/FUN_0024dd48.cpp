/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024dd48` (_code @ 0x24dd48, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001b1b8c(int, int);

/* Supplied declaration required: FUN_001b1b8c. */


void FUN_0024dd48(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  FUN_001b1b8c(param_1,1);
  for (temp_v0 = *(int *)(param_1 + 0x34); temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x34)) {
    FUN_001b1b8c(temp_v0,0);
  }
  return;
}

} /* extern "C" */
