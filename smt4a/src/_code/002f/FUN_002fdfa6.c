/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fdfa6` (_code @ 0x2fdfa6, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: FUN_002ec8a8. */


unsigned int FUN_002fdfa6(int *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  FUN_002ec8a8(param_3);
  (**(romwright_code **)(*param_1 + 0x14))(param_1,param_3);
  return 0;
}
