/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019eb14` (_code @ 0x19eb14, 0xe4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0018a924(float *, float [7]);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Supplied declaration required: FUN_0018a924. */


void FUN_0019eb14(float *param_1)

{
/* irregular: 1 native warning(s); review required */
  float temp_v0;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9 [7];
  
  temp_v1 = *param_1 - param_1[3];
  temp_v3 = param_1[1] - param_1[4];
  temp_v0 = param_1[2] - param_1[5];
  temp_v2 = -temp_v1;
  temp_v4 = 1.0f / romwright_sqrt_4(temp_v1 * temp_v1 + temp_v3 * temp_v3 + temp_v0 * temp_v0);
  temp_v5 = 1.0f / romwright_sqrt_4(temp_v0 * temp_v0 + 0.0f + temp_v2 * temp_v2);
  temp_v6 = temp_v0 * temp_v5;
  temp_v2 = temp_v2 * temp_v5;
  temp_v7 = temp_v0 * temp_v4 * temp_v6 - temp_v1 * temp_v4 * temp_v2;
  temp_v0 = temp_v3 * temp_v4 * temp_v2 - temp_v0 * temp_v4 * temp_v5 * 0.0f;
  temp_v1 = temp_v1 * temp_v4 * temp_v5 * 0.0f - temp_v3 * temp_v4 * temp_v6;
  FUN_0018a924(&temp_v8,temp_v9);
  param_1[6] = temp_v0 * temp_v9[0] - temp_v8 * temp_v6;
  param_1[7] = temp_v7 * temp_v9[0];
  param_1[8] = temp_v1 * temp_v9[0] - temp_v8 * temp_v2;
  return;
}

} /* extern "C" */
