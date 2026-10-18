/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f86ac` (_code @ 0x2f86ac, 0x1e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002f9e1c(void);
/* Supplied declaration required: FUN_00311724. */


unsigned int FUN_002f86ac(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002f9e1c();
  if (*(int *)(param_1 + 8) != temp_v0) {
    FUN_00311724(param_1 + 4);
    return 1;
  }
  return 0;
}
