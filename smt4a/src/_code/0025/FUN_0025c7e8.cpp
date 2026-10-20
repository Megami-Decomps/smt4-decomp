/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025c7e8` (_code @ 0x25c7e8, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022258c(int);

/* Supplied declaration required: FUN_0022258c. */


unsigned int FUN_0025c7e8(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = *(unsigned int *)(*(int *)(param_1 + 4) + 8);
  if (temp_v0 < 2) {
    *(unsigned int *)(*(int *)(param_1 + 4) + 8) = temp_v0 + 1;
  }
  else if (temp_v0 == 2) {
    FUN_0022258c(0);
    return 0xffffffff;
  }
  return 0;
}

} /* extern "C" */
