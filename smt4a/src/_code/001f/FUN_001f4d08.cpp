/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f4d08` (_code @ 0x1f4d08, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(double, double);

/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */


void FUN_001f4d08(int param_1,unsigned int *param_2)

{
/* irregular: irregular input(s): in_d6, in_s0, in_s1, in_s10, in_s11, in_s14, in_s2, in_s3, in_s4, in_s5, in_s6, in_s7, in_s8, in_s9; 13 native warning(s); review required */
  float in_s0;
  float temp_v0;
  float in_s1;
  float temp_v1;
  float in_s2;
  float temp_v2;
  float in_s3;
  float in_s4;
  float in_s5;
  float in_s6;
  float in_s7;
  float in_s8;
  float in_s9;
  float in_s10;
  float in_s11;
  unsigned long long in_d6;
  float in_s14;
  
  temp_v1 = (in_s1 + in_s4 + in_s7 + in_s10) * 0.25f;
  temp_v2 = (in_s2 + in_s5 + in_s8 + in_s11) * 0.25f;
  if (param_1 != 0) {
    temp_v0 = (in_s0 + in_s3 + in_s6 + in_s9) * 0.25f;
    if (param_1 != 1) {
      if (param_1 == 2) {
        in_d6 = CONCAT44(temp_v1,temp_v0);
        in_s14 = 0.0f;
      }
    }
    else {
      in_d6 = (unsigned long long)(unsigned int)temp_v0;
      in_s14 = temp_v2;
    }
  }
  else {
    in_d6 = (unsigned long long)(unsigned int)temp_v1 << 0x20;
    in_s14 = temp_v2;
  }
  *param_2 = (int)in_d6;
  param_2[1] = (int)(in_d6 >> 0x20);
  *(float *)&param_2[2] = in_s14;
  return;
}

} /* extern "C" */
