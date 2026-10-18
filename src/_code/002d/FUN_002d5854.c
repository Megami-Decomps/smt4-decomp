/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d5854` (_code @ 0x2d5854, 0x104 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Supplied declaration required: FUN_002575fc. */
/* Supplied declaration required: FUN_0025b988. */
/* Supplied declaration required: FUN_002b03b0. */


void FUN_002d5854(unsigned int param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2, in_s3; 7 native warning(s); review required */
  float in_s0;
  float in_s1;
  float in_s2;
  float in_s3;
  float temp_v0;
  float temp_v1;
  
  if ((in_s0 < in_s2) || (temp_v0 = in_s2, temp_v1 = in_s1, in_s3 < in_s1)) {
    temp_v0 = in_s0;
    in_s0 = in_s2;
    temp_v1 = in_s3;
    in_s3 = in_s1;
  }
  if (romwright_sqrt_4((in_s3 - temp_v1) * (in_s3 - temp_v1) + -(temp_v0 - in_s0) * -(temp_v0 - in_s0)) != 0.0f) {
    FUN_002b03b0();
    FUN_002575fc(param_1);
    FUN_002575fc(param_2);
    FUN_002575fc(param_1);
    FUN_002575fc(param_2);
    FUN_0025b988();
    return;
  }
  return;
}
