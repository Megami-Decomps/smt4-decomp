/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_hidlow_ClampStickMinimum` (_code @ 0x13c170, 0x1bc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorSignedToFloat(...);

/* stack frame of param_6: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_6_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */


void nn_hidlow_ClampStickMinimum
               (short *param_1,short *param_2,int param_3,int param_4,int param_5,int param_6)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int in_fpscr;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  
  temp_v4 = (float)VectorSignedToFloat(param_4 * param_4 + param_3 * param_3,
                                     (unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v0 = in_fpscr & 0xfffffff;
  temp_v1 = temp_v0 | ((unsigned int)(temp_v4 == 0.0f) << 0x1e);
  if (!romwright_subpiece_4_1_0(temp_v1 >> 0x1e,0)) {
    if (param_4 * param_4 < param_3 * param_3) {
      if (param_3 < 0) {
        temp_v2 = (float)VectorSignedToFloat(param_4,(unsigned char)(temp_v1 >> 0x16) & 3);
        temp_v5 = (float)VectorSignedToFloat(param_3,(unsigned char)(temp_v1 >> 0x16) & 3);
        temp_v2 = (temp_v2 * -36.0f) / temp_v5;
        temp_v5 = -36.0f;
      }
      else {
        temp_v2 = (float)VectorSignedToFloat(param_4,(unsigned char)(temp_v1 >> 0x16) & 3);
        temp_v5 = (float)VectorSignedToFloat(param_3,(unsigned char)(temp_v1 >> 0x16) & 3);
        temp_v2 = (temp_v2 * 36.0f) / temp_v5;
        temp_v5 = 36.0f;
      }
    }
    else if (param_4 < 0) {
      temp_v2 = (float)VectorSignedToFloat(param_3,(unsigned char)(temp_v1 >> 0x16) & 3);
      temp_v5 = (float)VectorSignedToFloat(param_4,(unsigned char)(temp_v1 >> 0x16) & 3);
      temp_v5 = (temp_v2 * -36.0f) / temp_v5;
      temp_v2 = -36.0f;
    }
    else {
      temp_v2 = (float)VectorSignedToFloat(param_3,(unsigned char)(temp_v1 >> 0x16) & 3);
      temp_v5 = (float)VectorSignedToFloat(param_4,(unsigned char)(temp_v1 >> 0x16) & 3);
      temp_v5 = (temp_v2 * 36.0f) / temp_v5;
      temp_v2 = 36.0f;
    }
    temp_v2 = temp_v5 * temp_v5 + temp_v2 * temp_v2;
    if (1600.0f <= temp_v2) {
      temp_v2 = 1600.0f;
    }
    temp_v1 = temp_v0 | ((unsigned int)(temp_v2 <= temp_v4) << 0x1d);
    if (romwright_subpiece_4_1_0(temp_v1 >> 0x1d,0)) {
      temp_v6 = (float)VectorSignedToFloat(param_6,(unsigned char)(temp_v1 >> 0x16) & 3);
      temp_v8 = (float)VectorSignedToFloat(param_6 * param_6,(unsigned char)(temp_v1 >> 0x16) & 3);
      temp_v0 = temp_v0 | ((unsigned int)(temp_v4 < temp_v8) << 0x1f);
      temp_v3 = romwright_sqrt_4(temp_v4);
      temp_v7 = temp_v3 - romwright_sqrt_4(temp_v2);
      temp_v5 = (float)VectorSignedToFloat(param_6 - 0x28,(unsigned char)(temp_v0 >> 0x16) & 3);
      if (romwright_subpiece_4_1_0(temp_v0 >> 0x1f,0) == ((temp_v4 != temp_v4) || (temp_v8 != temp_v8))) {
        temp_v4 = (float)VectorSignedToFloat(param_3,(unsigned char)(temp_v0 >> 0x16) & 3);
        temp_v2 = (float)VectorSignedToFloat(param_4,(unsigned char)(temp_v0 >> 0x16) & 3);
        *param_1 = (short)(int)((temp_v4 * temp_v5) / temp_v3);
        *param_2 = (short)(int)((temp_v2 * temp_v5) / temp_v3);
        return;
      }
      temp_v4 = (float)VectorSignedToFloat(param_3,(unsigned char)(temp_v0 >> 0x16) & 3);
      temp_v3 = (temp_v6 - romwright_sqrt_4(temp_v2)) * temp_v3;
      temp_v2 = (float)VectorSignedToFloat(param_4,(unsigned char)(temp_v0 >> 0x16) & 3);
      *param_1 = (short)(int)((temp_v4 * temp_v5 * temp_v7) / temp_v3);
      *param_2 = (short)(int)((temp_v2 * temp_v5 * temp_v7) / temp_v3);
      return;
    }
  }
  *param_1 = 0;
  *param_2 = 0;
  return;
}

} /* extern "C" */
