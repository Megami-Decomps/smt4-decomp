/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043bb48` (_code @ 0x43bb48, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001bde20(unsigned int);
int VectorFloatToUnsigned(double, int);

/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_001bde20. */


unsigned int FUN_0043bb48(unsigned int param_1)

{
/* irregular: 3 goto(s); irregular input(s): in_s0, in_s1; 4 native warning(s); review required */
  unsigned char temp_v0;
  float in_s0;
  float temp_v1;
  float temp_v2;
  unsigned int temp_v3;
  float in_s1;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  
  temp_v6 = 0.0f;
  if (in_s1 == 0.0f && in_s0 == 0.0f) {
    return 0;
  }
  temp_v5 = -in_s0;
  temp_v7 = 64.0f;
  temp_v8 = 256.0f;
  if (in_s1 >= 0.0f) {
    if (in_s0 >= 0.0f) {
      temp_v2 = in_s0;
      temp_v1 = in_s1;
      if (in_s0 <= in_s1) {
LAB_0043bc3c:
        temp_v2 = temp_v2 / temp_v1;
        FUN_001bde20(param_1);
        temp_v7 = temp_v2 + temp_v6;
        temp_v3 = VectorFloatToUnsigned(temp_v7 * temp_v8,3);
        return temp_v3 & 0xffff;
      }
    }
    else {
      temp_v2 = in_s1;
      temp_v1 = temp_v5;
      in_s0 = in_s1;
      temp_v6 = 192.0f;
      temp_v7 = temp_v8;
      if (in_s1 < temp_v5) goto LAB_0043bc3c;
    }
  }
  else {
    temp_v4 = -in_s1;
    if (in_s0 >= 0.0f) {
      temp_v0 = temp_v4 < in_s0;
      temp_v2 = temp_v4;
      temp_v1 = in_s0;
      in_s0 = temp_v4;
      temp_v6 = temp_v7;
      temp_v7 = 128.0f;
      if (temp_v0) goto LAB_0043bc3c;
    }
    else {
      temp_v2 = temp_v5;
      temp_v1 = temp_v4;
      in_s0 = temp_v5;
      temp_v6 = 128.0f;
      temp_v7 = 192.0f;
      if (temp_v5 <= temp_v4) goto LAB_0043bc3c;
    }
  }
  temp_v1 = temp_v1 / in_s0;
  FUN_001bde20(param_1);
  temp_v7 = temp_v7 - temp_v1;
  temp_v3 = VectorFloatToUnsigned(temp_v7 * temp_v8,3);
  return temp_v3 & 0xffff;
}

} /* extern "C" */
