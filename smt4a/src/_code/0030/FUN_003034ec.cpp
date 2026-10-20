/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003034ec` (_code @ 0x3034ec, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0030337e(void);

/* Supplied declaration required: FUN_0030337e. */


unsigned int FUN_003034ec(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = param_1 + 4;
  FUN_0030337e();
  if (*(int *)(param_1 + 0xc) == temp_v0) {
    return 0;
  }
  return *(unsigned int *)(temp_v0 + 4);
}

} /* extern "C" */
