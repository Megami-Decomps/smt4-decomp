/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_hidlow_ClampStickCross` (_code @ 0x13bf88, 0x104 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int aeabi_idivmod(int, int);

/* Supplied declaration required: aeabi_idivmod. */


short nn_hidlow_ClampStickCross
                (short *param_1,short *param_2,int param_3,int param_4,int param_5,int param_6)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  if (param_3 < 0) {
    if (!(-param_5 == param_3 || -param_3 < param_5)) {
      param_3 = param_3 + param_5;
    }
    else {
      param_3 = 0;
    }
  }
  else if (param_3 > param_5) {
    param_3 = param_3 - param_5;
  }
  else {
    param_3 = 0;
  }
  if (param_4 < 0) {
    if (-param_5 != param_4 && param_5 <= -param_4) {
      param_4 = param_4 + param_5;
    }
    else {
      param_4 = 0;
    }
  }
  else if (param_5 < param_4) {
    param_4 = param_4 - param_5;
  }
  else {
    param_4 = 0;
  }
  param_6 = param_6 - param_5;
  temp_v1 = param_4 * param_4 + param_3 * param_3;
  if (param_6 * param_6 - temp_v1 == 0 || param_6 * param_6 < temp_v1) {
    temp_v1 = temp_v1 * 0x4000;
    if (temp_v1 < 1) {
      temp_v3 = 0;
    }
    else {
      temp_v2 = 1;
      temp_v3 = temp_v1;
      if (temp_v1 >= 2) {
        do {
          temp_v2 = temp_v2 * 2;
          temp_v3 = temp_v3 >> 1;
        } while (temp_v2 < temp_v3);
      }
      do {
        temp_v3 = temp_v2;
        temp_v2 = aeabi_idivmod(temp_v1,temp_v3);
        temp_v2 = (temp_v2 + temp_v3) >> 1;
      } while (temp_v2 < temp_v3);
    }
    temp_v0 = aeabi_idivmod(param_3 * param_6 * 0x80,temp_v3);
    param_3 = (int)temp_v0;
    temp_v0 = aeabi_idivmod(param_4 * param_6 * 0x80,temp_v3);
    param_4 = (int)temp_v0;
  }
  *param_1 = (short)param_3;
  *param_2 = (short)param_4;
  return (short)param_6;
}

} /* extern "C" */
