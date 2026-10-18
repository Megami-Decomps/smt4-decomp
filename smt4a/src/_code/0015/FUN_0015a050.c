/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015a050` (_code @ 0x15a050, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_0015a050(float *param_1)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2, in_s3, in_s4, in_s5; 6 native warning(s); review required */
  float in_s0;
  float temp_v0;
  float in_s1;
  float temp_v1;
  float in_s2;
  float temp_v2;
  float in_s3;
  float in_s4;
  float in_s5;
  
  param_1[1] = 0.0f;
  param_1[2] = 0.0f;
  param_1[4] = 0.0f;
  param_1[6] = 0.0f;
  temp_v1 = 1.0f / (in_s1 - in_s0);
  param_1[8] = 0.0f;
  param_1[9] = 0.0f;
  param_1[0xc] = 0.0f;
  param_1[0xd] = 0.0f;
  param_1[0xe] = 0.0f;
  param_1[0xf] = 1.0f;
  temp_v2 = 1.0f / (in_s3 - in_s2);
  temp_v0 = 1.0f / (in_s5 - in_s4);
  param_1[10] = temp_v0;
  *param_1 = temp_v1 * 2.0f;
  param_1[3] = -((in_s1 + in_s0) * temp_v1);
  param_1[5] = temp_v2 * 2.0f;
  param_1[7] = -((in_s3 + in_s2) * temp_v2);
  param_1[0xb] = in_s4 * temp_v0;
  return;
}
