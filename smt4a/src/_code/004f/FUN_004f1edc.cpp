/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f1edc` (_code @ 0x4f1edc, 0x9c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003d4dd4(int, double, double);

/* Supplied declaration required: FUN_003d4dd4. */


void FUN_004f1edc(float *param_1)

{
/* irregular: 1 native warning(s); review required */
  float temp_v0;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  
  temp_v0 = param_1[7];
  temp_v3 = param_1[10] - temp_v0;
  temp_v2 = param_1[0xb] - param_1[8];
  temp_v1 = param_1[0xc] - param_1[9];
  FUN_003d4dd4(0,param_1[0x1e6],param_1[0x1e5]);
  *param_1 = param_1[7] + temp_v3 * temp_v0;
  param_1[1] = param_1[8] + temp_v2 * temp_v0;
  param_1[2] = param_1[9] + temp_v1 * temp_v0;
  temp_v0 = (float)((int)param_1[0x1e5] + 1);
  param_1[0x1e5] = temp_v0;
  if ((int)param_1[0x1e6] < (int)temp_v0) {
    *param_1 = param_1[10];
    param_1[1] = param_1[0xb];
    param_1[2] = param_1[0xc];
    param_1[0x193] = (float)((unsigned int)param_1[0x193] & 0xfff7ffff);
  }
  return;
}

} /* extern "C" */
