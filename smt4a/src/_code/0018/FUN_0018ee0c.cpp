/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018ee0c` (_code @ 0x18ee0c, 0x294 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a9464(void);
int VectorUnsignedToFloat(int, int);

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Supplied declaration required: FUN_001a9464. */


void FUN_0018ee0c(int param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_fpscr, in_s0, in_s1, in_s2, in_s3, in_s4, in_s5; 8 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2;
  int temp_v3;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v4;
  float temp_v5;
  float in_s1;
  float in_s2;
  float in_s3;
  float in_s4;
  float in_s5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  
  temp_v7 = in_s1 - in_s0;
  temp_v9 = 0.0f;
  temp_v8 = 1.0f;
  temp_v6 = (((in_s4 - in_s3) / in_s4) / in_s5) * 0.0078125f;
  switch(param_2) {
  case 0:
    temp_v3 = 0;
    while( 1 ) {
      temp_v5 = (float)VectorUnsignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v4 = in_s3 + temp_v5 * temp_v6;
      temp_v1 = in_fpscr & 0xfffffff;
      in_fpscr = temp_v1 | ((unsigned int)(temp_v4 == in_s0) << 0x1e) | ((unsigned int)(in_s0 <= temp_v4) << 0x1d);
      temp_v2 = (unsigned char)(in_fpscr >> 0x18);
      temp_v5 = temp_v8;
      if (((unsigned char)((temp_v2 >> 5) & 1) && !(unsigned char)(temp_v2 >> 6)) &&
         (temp_v1 = temp_v1 | ((unsigned int)(temp_v4 < in_s1) << 0x1f) | ((unsigned int)(temp_v4 == in_s1) << 0x1e),
         in_fpscr = temp_v1 | ((unsigned int)((temp_v4 != temp_v4) || (in_s1 != in_s1)) << 0x1c),
         temp_v2 = (unsigned char)(temp_v1 >> 0x18), temp_v5 = temp_v9,
         (unsigned char)((temp_v2 >> 6) & 1) || temp_v2 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1))) {
        temp_v5 = (in_s1 - temp_v4) / temp_v7;
      }
      if (temp_v3 >= 0x80) break;
      temp_v0 = temp_v3 * 4;
      temp_v3 = temp_v3 + 1;
      *(float *)(param_1 + temp_v0) = temp_v5;
    }
    return;
  case 1:
    temp_v3 = 0;
    while( 1 ) {
      temp_v5 = (float)VectorUnsignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v4 = in_s3 + temp_v5 * temp_v6;
      temp_v1 = in_fpscr & 0xfffffff;
      in_fpscr = temp_v1 | ((unsigned int)(temp_v4 == in_s0) << 0x1e) | ((unsigned int)(in_s0 <= temp_v4) << 0x1d);
      temp_v2 = (unsigned char)(in_fpscr >> 0x18);
      temp_v5 = temp_v8;
      if (((unsigned char)((temp_v2 >> 5) & 1) && !(unsigned char)(temp_v2 >> 6)) &&
         (temp_v1 = temp_v1 | ((unsigned int)(temp_v4 < in_s1) << 0x1f) | ((unsigned int)(temp_v4 == in_s1) << 0x1e),
         in_fpscr = temp_v1 | ((unsigned int)((temp_v4 != temp_v4) || (in_s1 != in_s1)) << 0x1c),
         temp_v2 = (unsigned char)(temp_v1 >> 0x18), temp_v5 = temp_v9,
         (unsigned char)((temp_v2 >> 6) & 1) || temp_v2 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1))) {
        temp_v5 = -(((temp_v4 - in_s0) * in_s2) / temp_v7);
        FUN_001a9464();
      }
      if (temp_v3 >= 0x80) break;
      temp_v0 = temp_v3 * 4;
      temp_v3 = temp_v3 + 1;
      *(float *)(param_1 + temp_v0) = temp_v5;
    }
    break;
  case 2:
    temp_v3 = 0;
    while( 1 ) {
      temp_v5 = (float)VectorUnsignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v4 = in_s3 + temp_v5 * temp_v6;
      temp_v1 = in_fpscr & 0xfffffff;
      in_fpscr = temp_v1 | ((unsigned int)(temp_v4 == in_s0) << 0x1e) | ((unsigned int)(in_s0 <= temp_v4) << 0x1d);
      temp_v2 = (unsigned char)(in_fpscr >> 0x18);
      temp_v5 = temp_v8;
      if (((unsigned char)((temp_v2 >> 5) & 1) && !(unsigned char)(temp_v2 >> 6)) &&
         (temp_v1 = temp_v1 | ((unsigned int)(temp_v4 < in_s1) << 0x1f) | ((unsigned int)(temp_v4 == in_s1) << 0x1e),
         in_fpscr = temp_v1 | ((unsigned int)((temp_v4 != temp_v4) || (in_s1 != in_s1)) << 0x1c),
         temp_v2 = (unsigned char)(temp_v1 >> 0x18), temp_v5 = temp_v9,
         (unsigned char)((temp_v2 >> 6) & 1) || temp_v2 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1))) {
        temp_v5 = ((temp_v4 - in_s0) * in_s2) / temp_v7;
        temp_v5 = -(temp_v5 * temp_v5);
        FUN_001a9464();
      }
      if (temp_v3 >= 0x80) break;
      temp_v0 = temp_v3 * 4;
      temp_v3 = temp_v3 + 1;
      *(float *)(param_1 + temp_v0) = temp_v5;
    }
    break;
  case 3:
    temp_v3 = 0;
    while( 1 ) {
      temp_v9 = (float)VectorUnsignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v5 = in_s3 + temp_v9 * temp_v6;
      in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v5 == in_s0) << 0x1e) |
                 ((unsigned int)(in_s0 <= temp_v5) << 0x1d);
      temp_v2 = (unsigned char)(in_fpscr >> 0x18);
      temp_v9 = temp_v8;
      if ((unsigned char)((temp_v2 >> 5) & 1) && !(unsigned char)(temp_v2 >> 6)) {
        temp_v8 = -(((temp_v5 - in_s0) * in_s2) / temp_v7);
        FUN_001a9464();
      }
      if (temp_v3 >= 0x80) break;
      temp_v0 = temp_v3 * 4;
      temp_v3 = temp_v3 + 1;
      *(float *)(param_1 + temp_v0) = temp_v8;
      temp_v8 = temp_v9;
    }
    break;
  case 4:
    temp_v3 = 0;
    while( 1 ) {
      temp_v9 = (float)VectorUnsignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v5 = in_s3 + temp_v9 * temp_v6;
      in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v5 == in_s0) << 0x1e) |
                 ((unsigned int)(in_s0 <= temp_v5) << 0x1d);
      temp_v2 = (unsigned char)(in_fpscr >> 0x18);
      temp_v9 = temp_v8;
      if ((unsigned char)((temp_v2 >> 5) & 1) && !(unsigned char)(temp_v2 >> 6)) {
        temp_v8 = ((temp_v5 - in_s0) * in_s2) / temp_v7;
        temp_v8 = -(temp_v8 * temp_v8);
        FUN_001a9464();
      }
      if (temp_v3 >= 0x80) break;
      temp_v0 = temp_v3 * 4;
      temp_v3 = temp_v3 + 1;
      *(float *)(param_1 + temp_v0) = temp_v8;
      temp_v8 = temp_v9;
    }
    break;
  default:
    return;
  }
  return;
}

} /* extern "C" */
