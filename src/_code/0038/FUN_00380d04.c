/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00380d04` (_code @ 0x380d04, 0x124 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00235744. */


void FUN_00380d04(float *param_1,unsigned int *param_2,float *param_3)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 3 native warning(s); review required */
  unsigned int temp_v0;
  float temp_v1;
  unsigned int in_fpscr;
  float in_s0;
  int temp_v2;
  int temp_v3;
  float temp_v4;
  
  if (((unsigned int)param_3[3] & 1) != 0) {
    in_s0 = *param_3;
  }
  else {
    FUN_00235744(param_3);
  }
  temp_v3 = VectorFloatToUnsigned(in_s0,3);
  temp_v4 = (float)VectorUnsignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v4 = in_s0 - temp_v4;
  if (temp_v4 == 0.0f) {
    temp_v4 = param_3[temp_v3 * 4 + 5];
    temp_v1 = param_3[temp_v3 * 4 + 6];
    *param_1 = param_3[temp_v3 * 4 + 4];
    param_1[1] = temp_v4;
    param_1[2] = temp_v1;
    temp_v0 = (unsigned int)param_3[temp_v3 * 4 + 7] | *param_2;
  }
  else {
    if (param_3[1] == in_s0) {
      temp_v3 = temp_v3 + 1;
      temp_v4 = param_3[temp_v3 * 4 + 5];
      temp_v1 = param_3[temp_v3 * 4 + 6];
      *param_1 = param_3[temp_v3 * 4 + 4];
      param_1[1] = temp_v4;
      param_1[2] = temp_v1;
      *param_2 = (unsigned int)param_3[temp_v3 * 4 + 7] | *param_2;
      return;
    }
    in_s0 = in_s0 + 1.0f;
    FUN_00235744(param_3);
    temp_v2 = VectorFloatToUnsigned(in_s0,3);
    temp_v1 = param_3[temp_v3 * 4 + 4];
    *param_1 = temp_v1 + temp_v4 * (param_3[temp_v2 * 4 + 4] - temp_v1);
    param_1[1] = param_3[temp_v3 * 4 + 5] + temp_v4 * (param_3[temp_v2 * 4 + 5] - param_3[temp_v3 * 4 + 5]);
    param_1[2] = param_3[temp_v3 * 4 + 6] + temp_v4 * (param_3[temp_v2 * 4 + 6] - param_3[temp_v3 * 4 + 6]);
    temp_v0 = ((unsigned int)param_3[temp_v2 * 4 + 7] & (unsigned int)param_3[temp_v3 * 4 + 7]) | *param_2;
  }
  *param_2 = temp_v0;
  return;
}
