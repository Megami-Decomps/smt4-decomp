/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a5474` (_code @ 0x1a5474, 0x98 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_001a5474_arg2 fn_001a5474_arg2;
struct fn_001a5474_arg2 {
    unsigned char pad_0x0[0x4];
    float field_0x4; /* +0x4 */
    unsigned char pad_0x8[0xc];
    float field_0x14; /* +0x14 */
    unsigned char pad_0x18[0xc];
    float field_0x24; /* +0x24 */
};

#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif


void FUN_001a5474(float *param_1,float *param_2,fn_001a5474_arg2 *param_3)

{
  float temp_v0;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  
  temp_v1 = *param_2 * param_3->field_0x4 + param_2[1] * param_3->field_0x14 +
          param_2[2] * param_3->field_0x24;
  temp_v4 = 1.0f;
  temp_v3 = param_2[4] * param_3->field_0x4 + param_2[5] * param_3->field_0x14 +
          param_2[6] * param_3->field_0x24;
  temp_v2 = 0.0f;
  temp_v0 = temp_v1 * temp_v1 + temp_v3 * temp_v3;
  if (temp_v0 != 0.0f) {
    temp_v4 = 1.0f / romwright_sqrt_4(temp_v0);
    temp_v2 = temp_v1 * temp_v4;
    temp_v4 = temp_v3 * temp_v4;
  }
  *param_1 = temp_v4;
  param_1[5] = temp_v4;
  param_1[1] = temp_v2;
  param_1[10] = 1.0f;
  param_1[2] = 0.0f;
  param_1[6] = 0.0f;
  param_1[8] = 0.0f;
  param_1[9] = 0.0f;
  param_1[4] = -temp_v2;
  return;
}
