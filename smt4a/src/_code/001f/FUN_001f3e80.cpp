/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f3e80` (_code @ 0x1f3e80, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int __aeabi_idivmod(int, int);

/* Supplied declaration required: __aeabi_idivmod. */


int FUN_001f3e80(int param_1,int param_2,int param_3,int param_4,int param_5)

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
    __aeabi_idivmod(param_4,param_3);
    temp_v0 = __aeabi_idivmod((temp_v2 - param_3 / 2) * (param_1 - temp_v1),param_3 / 2);
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

} /* extern "C" */
