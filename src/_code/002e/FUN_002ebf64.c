/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ebf64` (_code @ 0x2ebf64, 0xf0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002c55e4. */


void FUN_002ebf64(float *param_1)

{
/* irregular: 1 goto(s); 1 native warning(s); review required */
  unsigned int temp_v0;
  float temp_v1;
  unsigned char temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  
  temp_v3 = 1.0f;
  temp_v4 = 0.4f;
  temp_v1 = param_1[3];
  if ((int)temp_v1 < 0x10) {
    temp_v5 = temp_v4;
    FUN_002c55e4(0xf,temp_v1);
    *param_1 = temp_v3;
    if (temp_v5 < temp_v3) {
joined_r0x002ebff8:
      if (temp_v1 == 2.10195e-44f) {
        *param_1 = temp_v5;
      }
    }
    else {
      *param_1 = temp_v5;
    }
  }
  else {
    temp_v1 = (float)((int)temp_v1 - 0xf);
    temp_v5 = temp_v3;
    FUN_002c55e4(0xf,temp_v1);
    *param_1 = temp_v4;
    if (temp_v4 < temp_v5) goto joined_r0x002ebff8;
    *param_1 = temp_v5;
  }
  temp_v1 = param_1[3];
  if ((temp_v1 == 0.0f) || ((int)temp_v1 + 0x13U < 0x27)) {
    param_1[1] = 0.0f;
  }
  else {
    temp_v0 = (int)temp_v1 + 0x1d;
    temp_v2 = temp_v0 >= 0x3b;
    if (temp_v2) {
      temp_v0 = (int)temp_v1 + 9;
    }
    if (!temp_v2 || temp_v0 < 0x13) {
      param_1[1] = 2.8026e-45f;
    }
  }
  param_1[3] = (float)((int)temp_v1 + 1);
  if ((int)temp_v1 + 1 >= 0x1f) {
    param_1[3] = 0.0f;
  }
  return;
}
