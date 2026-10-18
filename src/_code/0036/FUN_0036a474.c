/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036a474` (_code @ 0x36a474, 0x128 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;


void FUN_0036a474(float *param_1,int param_2,float *param_3)

{
  float temp_v0;
  
  temp_v0 = param_1[0xf];
  if ((~(unsigned int)temp_v0 & 0x10) == 0) {
    return;
  }
  if (((*param_1 * *param_1 + param_1[1] * param_1[1] + param_1[2] * param_1[2] < 1e-06f) ||
      (param_1[4] * param_1[4] + param_1[5] * param_1[5] + param_1[6] * param_1[6] < 1e-06f)) ||
     (param_1[8] * param_1[8] + param_1[9] * param_1[9] + param_1[10] * param_1[10] < 1e-06f)) {
    if (param_2 == 0) {
      *param_1 = 1.0f;
      param_1[4] = 0.0f;
      param_1[8] = 0.0f;
      param_1[1] = 0.0f;
      param_1[5] = 1.0f;
      param_1[9] = 0.0f;
      param_1[2] = 0.0f;
      param_1[6] = 0.0f;
      param_1[10] = 1.0f;
      param_1[0xf] = (float)((unsigned int)temp_v0 | 0x800);
      return;
    }
    *param_1 = *param_3;
    param_1[4] = param_3[4];
    param_1[8] = param_3[8];
    param_1[1] = param_3[1];
    param_1[5] = param_3[5];
    param_1[9] = param_3[9];
    param_1[2] = param_3[2];
    param_1[6] = param_3[6];
    param_1[10] = param_3[10];
    param_1[0xf] = (float)((unsigned int)temp_v0 | 0x800);
  }
  return;
}
