/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c2a1c` (_code @ 0x2c2a1c, 0xd4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_movefromRt (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */


void FUN_002c2a1c(float *param_1)

{
/* irregular: irregular input(s): in_cr0, in_cr12; 5 native warning(s); review required */
  unsigned int in_cr0;
  unsigned int in_cr12;
  float temp_v0;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  
  temp_v0 = 1.0f;
  temp_v2 = *param_1;
  temp_v1 = 0.0f;
  temp_v4 = temp_v0;
  if ((temp_v2 <= 1.0f) && (temp_v4 = temp_v2, temp_v2 < 0.0f)) {
    temp_v4 = temp_v1;
  }
  VectorFloatToUnsigned(temp_v4 * 255.0f + 0.5f,3);
  temp_v3 = param_1[1];
  temp_v4 = temp_v0;
  temp_v2 = temp_v1;
  if (temp_v3 <= 1.0f) {
    temp_v4 = temp_v3;
    if (temp_v3 < temp_v2) {
      temp_v4 = temp_v1;
    }
  }
  do {
    VectorFloatToUnsigned(temp_v4 * 255.0f + 0.5f,3);
    temp_v2 = param_1[2];
    temp_v4 = temp_v0;
    if ((temp_v2 <= temp_v0) && (temp_v4 = temp_v2, temp_v2 < temp_v1)) {
      temp_v4 = temp_v1;
    }
    temp_v2 = temp_v4 * 255.0f + 0.5f;
    VectorFloatToUnsigned(temp_v2,3);
    temp_v3 = param_1[3];
    if ((temp_v3 <= temp_v0) && (temp_v3 < temp_v1)) {
      temp_v0 = temp_v1;
    }
    temp_v1 = temp_v1 - temp_v1 * 0.5f;
    param_1 = (float *)coprocessor_movefromRt(10,5,0,in_cr12,in_cr0);
    coprocessor_function(0xc,1,0,in_cr0,in_cr0,in_cr0);
    temp_v4 = temp_v3;
    if (temp_v3 < temp_v2) {
      temp_v4 = temp_v1;
    }
  } while( 1 );
}
