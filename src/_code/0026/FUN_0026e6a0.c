/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026e6a0` (_code @ 0x26e6a0, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002c5f60. */


int FUN_0026e6a0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = param_2;
  if (param_1 < param_2) {
    temp_v1 = param_1;
    param_1 = param_2;
  }
  if (param_3 != 0) {
    if (param_4 < 0) {
      param_4 = -param_4;
    }
    FUN_002c5f60(param_4,param_3);
    temp_v0 = FUN_002c5f60((temp_v2 - param_3 / 2) * (param_1 - temp_v1),param_3 / 2);
    if (temp_v0 < 0) {
      temp_v0 = -temp_v0;
    }
    if (param_5 != 0) {
      temp_v0 = (param_1 - temp_v1) - temp_v0;
    }
    param_1 = param_1 - temp_v0;
  }
  return param_1;
}
