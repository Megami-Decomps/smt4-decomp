/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036a5a8` (_code @ 0x36a5a8, 0x148 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_0036a5a8(float *param_1)

{
  float temp_v0;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  
  if ((~(unsigned int)param_1[0xf] & 0x10) != 0) {
    temp_v0 = *param_1;
    temp_v1 = param_1[1];
    temp_v3 = param_1[2];
    temp_v2 = param_1[4];
    temp_v4 = 2.0f / (temp_v0 * temp_v0 + temp_v1 * temp_v1 + temp_v3 * temp_v3 + temp_v2 * temp_v2);
    temp_v6 = temp_v1 * temp_v4;
    temp_v5 = temp_v3 * temp_v4;
    temp_v8 = temp_v0 * temp_v0 * temp_v4;
    temp_v7 = temp_v2 * temp_v0 * temp_v4;
    temp_v4 = temp_v0 * temp_v6 - temp_v2 * temp_v5;
    temp_v9 = 1.0f - (temp_v1 * temp_v6 + temp_v3 * temp_v5);
    *param_1 = temp_v9;
    param_1[1] = temp_v4;
    param_1[2] = temp_v0 * temp_v5 + temp_v2 * temp_v6;
    param_1[4] = temp_v0 * temp_v6 + temp_v2 * temp_v5;
    param_1[5] = 1.0f - (temp_v8 + temp_v3 * temp_v5);
    param_1[6] = temp_v1 * temp_v5 - temp_v7;
    param_1[8] = temp_v0 * temp_v5 - temp_v2 * temp_v6;
    param_1[9] = temp_v1 * temp_v5 + temp_v7;
    param_1[10] = 1.0f - (temp_v8 + temp_v1 * temp_v6);
    if (((temp_v9 * temp_v9 + temp_v4 * temp_v4 + param_1[2] * param_1[2] < 1e-06f) ||
        (param_1[4] * param_1[4] + param_1[5] * param_1[5] + param_1[6] * param_1[6] < 1e-06f)) ||
       (param_1[8] * param_1[8] + param_1[9] * param_1[9] + param_1[10] * param_1[10] < 1e-06f)) {
      return 0;
    }
    param_1[0xf] = (float)((unsigned int)param_1[0xf] | 0x800);
  }
  return 1;
}
