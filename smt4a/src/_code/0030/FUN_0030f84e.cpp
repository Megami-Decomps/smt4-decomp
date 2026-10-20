/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030f84e` (_code @ 0x30f84e, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002fb208(void);

/* Supplied declaration required: FUN_002fb208. */


unsigned int FUN_0030f84e(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = param_1;
  FUN_002fb208();
  if (temp_v0 == *(int *)(param_1 + 0x1d4)) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
