/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018f0ac` (_code @ 0x18f0ac, 0x3dc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a9464(void);
int VectorUnsignedToFloat(int, int);

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Supplied declaration required: FUN_001a9464. */


void FUN_0018f0ac(int param_1,unsigned int param_2,int param_3)

{
/* irregular: irregular input(s): in_fpscr, in_s0, in_s1, in_s2, in_s3, in_s4; 7 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  unsigned int in_fpscr;
  unsigned int temp_v3;
  float in_s0;
  float temp_v4;
  float in_s1;
  float temp_v5;
  float temp_v6;
  float in_s2;
  float in_s3;
  float in_s4;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  unsigned long long temp_v12;
  
  temp_v11 = 1.0f;
  temp_v12 = 0x3f800000;
  temp_v10 = -0.0078125f;
  temp_v9 = -1.0f;
  temp_v8 = in_s1 - in_s0;
  temp_v7 = 1.0f / (in_s4 - in_s3);
  temp_v4 = 0.0f;
  switch(param_2) {
  case 0:
    temp_v2 = 0;
    while( 1 ) {
      temp_v10 = (float)VectorUnsignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v6 = (in_s3 + temp_v10 * -0.0078125f) * temp_v7;
      temp_v3 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v6 < 0.0f) << 0x1f) |
              ((unsigned int)(temp_v6 == 0.0f) << 0x1e);
      temp_v1 = (unsigned char)(temp_v3 >> 0x18);
      temp_v10 = temp_v4;
      if (((unsigned char)((temp_v1 >> 6) & 1) || (unsigned char)(temp_v1 >> 7) != (temp_v6 != temp_v6)) &&
         (temp_v3 = (in_fpscr & 0xfffffff) | ((unsigned int)(-1.0f <= temp_v6) << 0x1d), temp_v10 = temp_v6,
         !romwright_subpiece_4_1_0(temp_v3 >> 0x1d,0))) {
        temp_v10 = temp_v9;
      }
      temp_v6 = -(*(float *)(param_3 + 0x2c) + *(float *)(param_3 + 0x28) * temp_v10) /
              (*(float *)(param_3 + 0x3c) + *(float *)(param_3 + 0x38) * temp_v10);
      in_fpscr = (temp_v3 & 0xfffffff) | ((unsigned int)(temp_v6 == in_s0) << 0x1e) |
                 ((unsigned int)(in_s0 <= temp_v6) << 0x1d);
      temp_v1 = (unsigned char)(in_fpscr >> 0x18);
      temp_v10 = temp_v11;
      if (((unsigned char)((temp_v1 >> 5) & 1) && !(unsigned char)(temp_v1 >> 6)) &&
         (temp_v3 = (temp_v3 & 0xfffffff) | ((unsigned int)(temp_v6 < in_s1) << 0x1f) |
                  ((unsigned int)(temp_v6 == in_s1) << 0x1e),
         in_fpscr = temp_v3 | ((unsigned int)((temp_v6 != temp_v6) || (in_s1 != in_s1)) << 0x1c),
         temp_v1 = (unsigned char)(temp_v3 >> 0x18), temp_v10 = temp_v4,
         (unsigned char)((temp_v1 >> 6) & 1) || temp_v1 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1))) {
        temp_v10 = (in_s1 - temp_v6) / temp_v8;
      }
      if (temp_v2 >= 0x80) break;
      temp_v0 = temp_v2 * 4;
      temp_v2 = temp_v2 + 1;
      *(float *)(param_1 + temp_v0) = temp_v10;
    }
    return;
  case 1:
    temp_v2 = 0;
    while( 1 ) {
      temp_v6 = (float)VectorUnsignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v5 = (in_s3 + temp_v6 * temp_v10) * temp_v7;
      temp_v3 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v5 < temp_v4) << 0x1f) |
              ((unsigned int)(temp_v5 == temp_v4) << 0x1e);
      temp_v1 = (unsigned char)(temp_v3 >> 0x18);
      temp_v6 = temp_v4;
      if (((unsigned char)((temp_v1 >> 6) & 1) || (unsigned char)(temp_v1 >> 7) != ((temp_v5 != temp_v5) || (temp_v4 != temp_v4))) &&
         (temp_v3 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v9 <= temp_v5) << 0x1d), temp_v6 = temp_v5,
         !romwright_subpiece_4_1_0(temp_v3 >> 0x1d,0))) {
        temp_v6 = temp_v9;
      }
      temp_v5 = (-*(float *)(param_3 + 0x2c) + -(*(float *)(param_3 + 0x28) * temp_v6)) /
              (*(float *)(param_3 + 0x3c) + *(float *)(param_3 + 0x38) * temp_v6);
      in_fpscr = (temp_v3 & 0xfffffff) | ((unsigned int)(temp_v5 == in_s0) << 0x1e) |
                 ((unsigned int)(in_s0 <= temp_v5) << 0x1d);
      temp_v1 = (unsigned char)(in_fpscr >> 0x18);
      temp_v6 = temp_v11;
      if (((unsigned char)((temp_v1 >> 5) & 1) && !(unsigned char)(temp_v1 >> 6)) &&
         (temp_v3 = (temp_v3 & 0xfffffff) | ((unsigned int)(temp_v5 < in_s1) << 0x1f) |
                  ((unsigned int)(temp_v5 == in_s1) << 0x1e),
         in_fpscr = temp_v3 | ((unsigned int)((temp_v5 != temp_v5) || (in_s1 != in_s1)) << 0x1c),
         temp_v1 = (unsigned char)(temp_v3 >> 0x18), temp_v6 = temp_v4,
         (unsigned char)((temp_v1 >> 6) & 1) || temp_v1 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1))) {
        temp_v6 = -(((temp_v5 - in_s0) * in_s2) / temp_v8);
        FUN_001a9464();
      }
      if (temp_v2 >= 0x80) break;
      temp_v0 = temp_v2 * 4;
      temp_v2 = temp_v2 + 1;
      *(float *)(param_1 + temp_v0) = temp_v6;
    }
    break;
  case 2:
    temp_v2 = 0;
    while( 1 ) {
      temp_v6 = (float)VectorUnsignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v5 = (in_s3 + temp_v6 * temp_v10) * temp_v7;
      temp_v3 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v5 < temp_v4) << 0x1f) |
              ((unsigned int)(temp_v5 == temp_v4) << 0x1e);
      temp_v1 = (unsigned char)(temp_v3 >> 0x18);
      temp_v6 = temp_v4;
      if (((unsigned char)((temp_v1 >> 6) & 1) || (unsigned char)(temp_v1 >> 7) != ((temp_v5 != temp_v5) || (temp_v4 != temp_v4))) &&
         (temp_v3 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v9 <= temp_v5) << 0x1d), temp_v6 = temp_v5,
         !romwright_subpiece_4_1_0(temp_v3 >> 0x1d,0))) {
        temp_v6 = temp_v9;
      }
      temp_v5 = (-*(float *)(param_3 + 0x2c) + -(*(float *)(param_3 + 0x28) * temp_v6)) /
              (*(float *)(param_3 + 0x3c) + *(float *)(param_3 + 0x38) * temp_v6);
      in_fpscr = (temp_v3 & 0xfffffff) | ((unsigned int)(temp_v5 == in_s0) << 0x1e) |
                 ((unsigned int)(in_s0 <= temp_v5) << 0x1d);
      temp_v1 = (unsigned char)(in_fpscr >> 0x18);
      temp_v6 = temp_v11;
      if (((unsigned char)((temp_v1 >> 5) & 1) && !(unsigned char)(temp_v1 >> 6)) &&
         (temp_v3 = (temp_v3 & 0xfffffff) | ((unsigned int)(temp_v5 < in_s1) << 0x1f) |
                  ((unsigned int)(temp_v5 == in_s1) << 0x1e),
         in_fpscr = temp_v3 | ((unsigned int)((temp_v5 != temp_v5) || (in_s1 != in_s1)) << 0x1c),
         temp_v1 = (unsigned char)(temp_v3 >> 0x18), temp_v6 = temp_v4,
         (unsigned char)((temp_v1 >> 6) & 1) || temp_v1 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1))) {
        temp_v6 = ((temp_v5 - in_s0) * in_s2) / temp_v8;
        temp_v6 = -(temp_v6 * temp_v6);
        FUN_001a9464();
      }
      if (temp_v2 >= 0x80) break;
      temp_v0 = temp_v2 * 4;
      temp_v2 = temp_v2 + 1;
      *(float *)(param_1 + temp_v0) = temp_v6;
    }
    break;
  case 3:
    temp_v2 = 0;
    while( 1 ) {
      temp_v11 = (float)VectorUnsignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v6 = (in_s3 + temp_v11 * temp_v10) * temp_v7;
      temp_v3 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v6 < temp_v4) << 0x1f) |
              ((unsigned int)(temp_v6 == temp_v4) << 0x1e);
      temp_v1 = (unsigned char)(temp_v3 >> 0x18);
      temp_v11 = temp_v4;
      if (((unsigned char)((temp_v1 >> 6) & 1) || (unsigned char)(temp_v1 >> 7) != ((temp_v6 != temp_v6) || (temp_v4 != temp_v4))) &&
         (temp_v3 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v9 <= temp_v6) << 0x1d), temp_v11 = temp_v6,
         !romwright_subpiece_4_1_0(temp_v3 >> 0x1d,0))) {
        temp_v11 = temp_v9;
      }
      temp_v11 = (-*(float *)(param_3 + 0x2c) + -(*(float *)(param_3 + 0x28) * temp_v11)) /
               (*(float *)(param_3 + 0x3c) + *(float *)(param_3 + 0x38) * temp_v11);
      in_fpscr = (temp_v3 & 0xfffffff) | ((unsigned int)(temp_v11 == in_s0) << 0x1e) |
                 ((unsigned int)(in_s0 <= temp_v11) << 0x1d);
      temp_v1 = (unsigned char)(in_fpscr >> 0x18);
      if (!(unsigned char)((temp_v1 >> 5) & 1) || (unsigned char)(temp_v1 >> 6)) {
        temp_v11 = (float)temp_v12;
      }
      else {
        temp_v11 = -(((temp_v11 - in_s0) * in_s2) / temp_v8);
        FUN_001a9464();
      }
      if (temp_v2 >= 0x80) break;
      temp_v0 = temp_v2 * 4;
      temp_v2 = temp_v2 + 1;
      *(float *)(param_1 + temp_v0) = temp_v11;
    }
    break;
  case 4:
    temp_v2 = 0;
    while( 1 ) {
      temp_v11 = (float)VectorUnsignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v6 = (in_s3 + temp_v11 * temp_v10) * temp_v7;
      temp_v3 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v6 < temp_v4) << 0x1f) |
              ((unsigned int)(temp_v6 == temp_v4) << 0x1e);
      temp_v1 = (unsigned char)(temp_v3 >> 0x18);
      temp_v11 = temp_v4;
      if (((unsigned char)((temp_v1 >> 6) & 1) || (unsigned char)(temp_v1 >> 7) != ((temp_v6 != temp_v6) || (temp_v4 != temp_v4))) &&
         (temp_v3 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v9 <= temp_v6) << 0x1d), temp_v11 = temp_v9,
         romwright_subpiece_4_1_0(temp_v3 >> 0x1d,0))) {
        temp_v11 = temp_v6;
      }
      temp_v11 = (-*(float *)(param_3 + 0x2c) + -(*(float *)(param_3 + 0x28) * temp_v11)) /
               (*(float *)(param_3 + 0x3c) + *(float *)(param_3 + 0x38) * temp_v11);
      in_fpscr = (temp_v3 & 0xfffffff) | ((unsigned int)(temp_v11 == in_s0) << 0x1e) |
                 ((unsigned int)(in_s0 <= temp_v11) << 0x1d);
      temp_v1 = (unsigned char)(in_fpscr >> 0x18);
      if (!(unsigned char)((temp_v1 >> 5) & 1) || (unsigned char)(temp_v1 >> 6)) {
        temp_v11 = (float)temp_v12;
      }
      else {
        temp_v11 = ((temp_v11 - in_s0) * in_s2) / temp_v8;
        temp_v11 = -(temp_v11 * temp_v11);
        FUN_001a9464();
      }
      if (temp_v2 >= 0x80) break;
      temp_v0 = temp_v2 * 4;
      temp_v2 = temp_v2 + 1;
      *(float *)(param_1 + temp_v0) = temp_v11;
    }
    break;
  default:
    return;
  }
  return;
}

} /* extern "C" */
