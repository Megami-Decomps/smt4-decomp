/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b72dc` (_code @ 0x2b72dc, 0xb8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ad314(float *, float [5]);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

/* Supplied declaration required: FUN_002ad314. */


float * FUN_002b72dc(float *param_1)

{
/* irregular: irregular input(s): in_s1, in_s2, in_s3; 1 native warning(s); review required */
  float in_s1;
  float in_s2;
  float temp_v0;
  float in_s3;
  float temp_v1;
  float temp_v2 [5];
  
  FUN_002ad314(&temp_v1,temp_v2);
  param_1[0xe] = -1.0f;
  param_1[1] = 0.0f;
  param_1[2] = 0.0f;
  param_1[3] = 0.0f;
  param_1[4] = 0.0f;
  param_1[6] = 0.0f;
  param_1[7] = 0.0f;
  param_1[8] = 0.0f;
  param_1[9] = 0.0f;
  param_1[0xc] = 0.0f;
  param_1[0xd] = 0.0f;
  temp_v0 = 1.0f / (in_s3 - in_s2);
  param_1[0xf] = 0.0f;
  param_1[5] = temp_v2[0] / temp_v1;
  *param_1 = (temp_v2[0] / temp_v1) / in_s1;
  param_1[10] = in_s3 * temp_v0;
  param_1[0xb] = in_s3 * in_s2 * temp_v0;
  return param_1;
}

} /* extern "C" */
