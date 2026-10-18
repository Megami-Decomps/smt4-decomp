/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003713cc` (_code @ 0x3713cc, 0x8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

void FUN_003713cc(unsigned int param_1,int *param_2,int *param_3,int *param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  if (param_3 == param_4) {
    return;
  }
  temp_v0 = *param_3;
  if (temp_v0 != 0) {
    temp_v0 = temp_v0 + (int)param_3;
  }
  (**(romwright_code **)(*param_2 + 0xc))(param_2,temp_v0);
                    /* WARNING: Could not recover jumptable at 0x00371410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(romwright_code **)(*param_2 + 0xc))(param_2,param_3);
  return;
}
