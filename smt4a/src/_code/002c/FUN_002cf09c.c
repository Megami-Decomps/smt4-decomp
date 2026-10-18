/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cf09c` (_code @ 0x2cf09c, 0x1d4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern float DAT_006472dc; /* 0x6472dc */
extern float DAT_006472e0; /* 0x6472e0 */
extern float DAT_006472e4; /* 0x6472e4 */
extern float DAT_006472e8; /* 0x6472e8 */

#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif


void FUN_002cf09c(float *param_1)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  float temp_v3;
  float temp_v4 [4];
  
  temp_v3 = *param_1 + param_1[5] + param_1[10] + 1.0f;
  if ((int)temp_v3 >= 0x3f800000) {
    temp_v3 = romwright_sqrt_4(temp_v3) * 2.0f;
    temp_v4[3] = temp_v3 * -0.25f;
    temp_v4[0] = (param_1[6] - param_1[9]) / temp_v3;
    temp_v4[1] = (param_1[8] - param_1[2]) / temp_v3;
    temp_v4[2] = (param_1[1] - param_1[4]) / temp_v3;
  }
  else {
    temp_v0 = (unsigned int)(*param_1 <= param_1[5]);
    if (param_1[temp_v0 * 5] < param_1[10]) {
      temp_v0 = 2;
    }
    temp_v1 = (temp_v0 + 1) % 3;
    temp_v2 = (temp_v1 + 1) % 3;
    temp_v3 = romwright_sqrt_4(((param_1[temp_v0 * 5] - param_1[temp_v1 * 5]) - param_1[temp_v2 * 5]) + 1.0f) * 2.0f;
    if (temp_v3 != 0.0f) {
      temp_v4[temp_v0] = temp_v3 * 0.25f;
      temp_v4[temp_v1] = (param_1[temp_v0 * 4 + temp_v1] + param_1[temp_v1 * 4 + temp_v0]) / temp_v3;
      temp_v4[temp_v2] = (param_1[temp_v0 * 4 + temp_v2] + param_1[temp_v2 * 4 + temp_v0]) / temp_v3;
      temp_v4[3] = (param_1[temp_v2 * 4 + temp_v1] - param_1[temp_v1 * 4 + temp_v2]) / temp_v3;
    }
    else {
      temp_v4[temp_v0] = 1.0f;
      temp_v4[temp_v1] = 0.0f;
      temp_v4[temp_v2] = 0.0f;
      temp_v4[3] = 0.0f;
    }
  }
  DAT_006472dc = temp_v4[0];
  DAT_006472e0 = temp_v4[1];
  DAT_006472e4 = temp_v4[2];
  DAT_006472e8 = temp_v4[3];
  return;
}
