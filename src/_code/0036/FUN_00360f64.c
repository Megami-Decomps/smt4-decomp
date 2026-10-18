/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00360f64` (_code @ 0x360f64, 0xfc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_00237a94. */


unsigned int FUN_00360f64(void)

{
/* irregular: 3 goto(s); irregular input(s): in_s0, in_s1, in_s5; 5 native warning(s); review required */
  unsigned char temp_v0;
  float in_s0;
  float temp_v1;
  float temp_v2;
  unsigned int temp_v3;
  float in_s1;
  float temp_v4;
  float temp_v5;
  float in_s5;
  float temp_v6;
  float temp_v7;
  
  temp_v5 = -in_s0;
  temp_v6 = 64.0f;
  temp_v7 = 256.0f;
  if (in_s1 >= in_s5) {
    if (in_s0 >= in_s5) {
      temp_v2 = in_s0;
      temp_v1 = in_s1;
      if (in_s0 <= in_s1) {
LAB_0036103c:
        temp_v2 = temp_v2 / temp_v1;
        FUN_00237a94();
        temp_v6 = temp_v2 + in_s5;
        temp_v3 = VectorFloatToUnsigned(temp_v6 * temp_v7,3);
        return temp_v3 & 0xffff;
      }
    }
    else {
      temp_v2 = in_s1;
      temp_v1 = temp_v5;
      in_s0 = in_s1;
      in_s5 = 192.0f;
      temp_v6 = temp_v7;
      if (in_s1 < temp_v5) goto LAB_0036103c;
    }
  }
  else {
    temp_v4 = -in_s1;
    if (in_s0 >= in_s5) {
      temp_v0 = temp_v4 < in_s0;
      temp_v2 = temp_v4;
      temp_v1 = in_s0;
      in_s0 = temp_v4;
      in_s5 = temp_v6;
      temp_v6 = 128.0f;
      if (temp_v0) goto LAB_0036103c;
    }
    else {
      temp_v2 = temp_v5;
      temp_v1 = temp_v4;
      in_s0 = temp_v5;
      in_s5 = 128.0f;
      temp_v6 = 192.0f;
      if (temp_v5 <= temp_v4) goto LAB_0036103c;
    }
  }
  temp_v1 = temp_v1 / in_s0;
  FUN_00237a94();
  temp_v6 = temp_v6 - temp_v1;
  temp_v3 = VectorFloatToUnsigned(temp_v6 * temp_v7,3);
  return temp_v3 & 0xffff;
}
