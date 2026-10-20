/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00356c74` (_code @ 0x356c74, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int SBORROW4(unsigned int, unsigned int);

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
extern int FUN_00355db0(unsigned int);


void FUN_00356c74(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00355db0(*param_1 & 0xfffffffe);
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

} /* extern "C" */
