/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023b650` (_code @ 0x23b650, 0xe8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_4_stack;


void FUN_0023b650(float *param_1,float *param_2,float *param_3,unsigned int param_4)

{
  unsigned int temp_v0;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  
  temp_v0 = 0;
  if (temp_v0 < param_4) {
    do {
      temp_v1 = param_3[1];
      temp_v4 = *param_3;
      temp_v7 = param_2[5];
      temp_v10 = param_2[9];
      temp_v3 = param_3[2];
      temp_v8 = param_2[6];
      temp_v5 = param_2[7];
      temp_v9 = param_2[4];
      temp_v11 = param_2[10];
      temp_v6 = param_2[0xb];
      temp_v12 = param_2[8];
      temp_v0 = temp_v0 + 1;
      param_3 = param_3 + 3;
      temp_v2 = 1.0f / (param_2[0xd] * temp_v1 + param_2[0xe] * temp_v3 +
                    param_2[0xf] + param_2[0xc] * temp_v4);
      *param_1 = (param_2[1] * temp_v1 + param_2[2] * temp_v3 + param_2[3] + *param_2 * temp_v4) * temp_v2;
      param_1[1] = (temp_v7 * temp_v1 + temp_v8 * temp_v3 + temp_v5 + temp_v9 * temp_v4) * temp_v2;
      param_1[2] = (temp_v10 * temp_v1 + temp_v11 * temp_v3 + temp_v6 + temp_v12 * temp_v4) * temp_v2;
      param_1 = param_1 + 3;
    } while (temp_v0 < param_4);
  }
  return;
}
