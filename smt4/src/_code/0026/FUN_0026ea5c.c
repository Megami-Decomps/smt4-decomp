/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026ea5c` (_code @ 0x26ea5c, 0x1c0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_4_stack;

/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif


void FUN_0026ea5c(int param_1,int param_2,float *param_3,float *param_4)

{
/* irregular: irregular input(s): in_d8, in_s0, in_s1, in_s10, in_s11, in_s12, in_s13, in_s14, in_s15, in_s2, in_s3, in_s4, in_s5, in_s6, in_s7, in_s8, in_s9; 10 native warning(s); review required */
  float in_s0;
  float in_s1;
  float in_s2;
  float in_s3;
  float temp_v0;
  unsigned int in_s4;
  float in_s5;
  float temp_v1;
  float in_s6;
  float in_s7;
  float temp_v2;
  float in_s8;
  float in_s9;
  float in_s10;
  float in_s11;
  float in_s12;
  float in_s13;
  float in_s14;
  float in_s15;
  long long in_d8;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  
  temp_v4 = 0.0f;
  if (param_1 != 0) {
    if (param_1 != 1) {
      if (param_1 == 2) {
        in_d8 = romwright_piece_4_4(0x41200000,in_s4);
        in_s9 = temp_v4;
        in_s10 = temp_v4;
        in_s11 = in_s7;
        in_s12 = in_s6;
        in_s13 = in_s6;
        in_s14 = in_s7;
        in_s15 = in_s3;
      }
    }
    else {
      in_d8 = (unsigned long long)(unsigned int)in_s8 << 0x20;
      in_s9 = in_s5;
      in_s10 = in_s8;
      in_s11 = 10.0f;
      in_s12 = in_s6;
      in_s13 = in_s6;
      in_s14 = temp_v4;
      in_s15 = in_s3;
    }
  }
  else {
    in_d8 = CONCAT44(in_s8,in_s4);
    in_s9 = in_s5;
    in_s10 = in_s8;
    in_s11 = in_s7;
    in_s12 = temp_v4;
    in_s13 = 10.0f;
    in_s14 = in_s7;
    in_s15 = temp_v4;
  }
  temp_v1 = in_s14 - (float)in_d8;
  temp_v3 = (float)((unsigned long long)in_d8 >> 0x20);
  temp_v2 = temp_v3 - in_s10;
  temp_v0 = (in_s12 - in_s15) * (in_s11 - in_s14) - temp_v1 * (in_s13 - in_s12);
  temp_v5 = temp_v1 * temp_v2 - (in_s10 - in_s9) * (in_s11 - in_s14);
  temp_v1 = (in_s10 - in_s9) * (in_s13 - in_s12) - (in_s12 - in_s15) * temp_v2;
  temp_v2 = 1.0f / romwright_sqrt_4(temp_v5 * temp_v5 + temp_v1 * temp_v1 + temp_v0 * temp_v0);
  temp_v5 = temp_v5 * temp_v2;
  temp_v1 = temp_v1 * temp_v2;
  temp_v0 = temp_v0 * temp_v2;
  if (((unsigned int)temp_v5 < 0xb8d1b717) && ((int)temp_v5 < 0x38d1b717)) {
    temp_v5 = temp_v4;
  }
  if (((unsigned int)temp_v1 < 0xb8d1b717) && ((int)temp_v1 < 0x38d1b717)) {
    temp_v1 = temp_v4;
  }
  if (((unsigned int)temp_v0 < 0xb8d1b717) && ((int)temp_v0 < 0x38d1b717)) {
    temp_v0 = temp_v4;
  }
  temp_v4 = (float)in_d8;
  if ((param_2 != 0) && (in_s9 = in_s10, temp_v4 = in_s14, in_s15 = in_s12, param_2 != 1)) {
    in_s9 = temp_v3;
    temp_v4 = in_s11;
    in_s15 = in_s13;
  }
  temp_v2 = temp_v5 * in_s15 + temp_v1 * temp_v4 + temp_v0 * in_s9;
  if ((in_s0 * temp_v5 + in_s1 * temp_v1 + in_s2 * temp_v0) - temp_v2 < 0.0f) {
    temp_v5 = -temp_v5;
    temp_v1 = -temp_v1;
    temp_v0 = -temp_v0;
    temp_v2 = temp_v5 * in_s15 + temp_v1 * temp_v4 + temp_v0 * in_s9;
  }
  *param_3 = temp_v5;
  param_3[1] = temp_v1;
  param_3[2] = temp_v0;
  *param_4 = temp_v2;
  return;
}
