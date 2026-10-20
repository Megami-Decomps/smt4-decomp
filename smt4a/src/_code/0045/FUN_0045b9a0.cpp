/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0045b9a0` (_code @ 0x45b9a0, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0018c87c(int);

/* Supplied declaration required: FUN_0018c87c. */


int FUN_0045b9a0(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    temp_v0 = *(int *)(param_1 + 0x1c);
    FUN_0018c87c(param_1 + 0x18);
    return temp_v0 - 0x1c;
  }
  return 0;
}

} /* extern "C" */
