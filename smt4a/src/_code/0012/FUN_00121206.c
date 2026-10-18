/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00121206` (_code @ 0x121206, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001211cc. */
/* Supplied declaration required: FUN_003100ae. */


unsigned int FUN_00121206(int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    temp_v0 = param_1;
    FUN_001211cc();
    FUN_003100ae(param_1,*(int *)(param_1 + 0x10) - 1,param_2);
    if (temp_v0 == param_1) {
      return 1;
    }
  }
  return 0;
}
