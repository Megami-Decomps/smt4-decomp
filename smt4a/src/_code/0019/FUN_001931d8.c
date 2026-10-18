/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001931d8` (_code @ 0x1931d8, 0xf8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */


unsigned int FUN_001931d8(float *param_1)

{
/* irregular: 1 native warning(s); review required */
  float temp_v0;
  int temp_v1;
  float temp_v2;
  float temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  float temp_v7;
  
  temp_v0 = 1.0f;
  temp_v3 = *param_1;
  temp_v2 = 0.0f;
  temp_v7 = temp_v0;
  if ((temp_v3 <= 1.0f) && (temp_v7 = temp_v3, temp_v3 < 0.0f)) {
    temp_v7 = temp_v2;
  }
  temp_v4 = VectorFloatToUnsigned(temp_v7 * 255.0f + 0.5f,3);
  temp_v3 = param_1[1];
  temp_v7 = temp_v0;
  if ((temp_v3 <= 1.0f) && (temp_v7 = temp_v3, temp_v3 < 0.0f)) {
    temp_v7 = temp_v2;
  }
  temp_v5 = VectorFloatToUnsigned(temp_v7 * 255.0f + 0.5f,3);
  temp_v3 = param_1[2];
  temp_v7 = temp_v0;
  if ((temp_v3 <= 1.0f) && (temp_v7 = temp_v3, temp_v3 < 0.0f)) {
    temp_v7 = temp_v2;
  }
  temp_v6 = VectorFloatToUnsigned(temp_v7 * 255.0f + 0.5f,3);
  temp_v7 = param_1[3];
  if ((temp_v7 <= 1.0f) && (temp_v0 = temp_v2, 0.0f <= temp_v7)) {
    temp_v0 = temp_v7;
  }
  temp_v1 = VectorFloatToUnsigned(temp_v0 * 255.0f + 0.5f,3);
  return (temp_v1 << 0x18) | ((temp_v6 & 0xff) << 0x10) | ((temp_v5 & 0xff) << 8) | (temp_v4 & 0xff);
}
