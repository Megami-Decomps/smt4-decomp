/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042c2ac` (_code @ 0x42c2ac, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
extern int FUN_0042b1c4(unsigned int);


void FUN_0042c2ac(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_0042b1c4(*param_1 & 0xfffffffe);
  if (-1 < temp_v0) {
    param_1[4] = param_4;
    param_1[3] = param_3;
    temp_v1 = param_1[2];
    if ((int)(param_4 - (temp_v1 + (param_3 < param_1[1]))) < 0 !=
        (SBORROW4(param_4,temp_v1) != SBORROW4(param_4 - temp_v1,(unsigned int)(param_3 < param_1[1])))) {
      param_1[1] = param_3;
      param_1[2] = param_4;
    }
  }
  return;
}
