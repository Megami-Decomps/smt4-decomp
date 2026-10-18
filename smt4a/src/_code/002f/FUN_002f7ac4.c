/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f7ac4` (_code @ 0x2f7ac4, 0x2e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: FUN_002ec728. */


unsigned int FUN_002f7ac4(int *param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = *(int *)(param_2 + 0x10) - *(int *)(param_2 + 0xc);
  if (((unsigned int)param_1[9] <= temp_v0) && (temp_v0 <= (unsigned int)param_1[10])) {
    FUN_002ec728(param_1 + 3);
    (**(romwright_code **)(*param_1 + 0x20))(param_1);
    return 1;
  }
  return 0;
}
