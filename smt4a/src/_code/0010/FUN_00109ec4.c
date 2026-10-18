/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00109ec4` (_code @ 0x109ec4, 0x1e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: FUN_002e7232. */


unsigned int FUN_00109ec4(int *param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  if (param_2 != 0) {
    temp_v0 = (**(romwright_code **)(*param_1 + 0x14))(param_1,param_2);
    FUN_002e7232(param_2);
    return temp_v0;
  }
  return 0;
}
