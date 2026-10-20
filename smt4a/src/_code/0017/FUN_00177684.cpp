/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00177684` (_code @ 0x177684, 0x42c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0017dd84(void);
int asdGfxCmdBufferForward8(...);
int VectorFloatToUnsigned(...);
int VectorUnsignedToFloat(unsigned int, int);

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
} param_3_stack;

/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Supplied declaration required: FUN_0017dd84. */
/* Supplied declaration required: asdGfxCmdBufferForward8. */


void FUN_00177684(unsigned int *param_1,unsigned int param_2,int param_3)

{
/* irregular: irregular input(s): in_fpscr; 5 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  unsigned int in_fpscr;
  float temp_v10;
  unsigned int temp_v11;
  float temp_v12;
  float temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  float temp_v17;
  
  temp_v5 = 0;
  temp_v12 = 0.0f;
  temp_v17 = 1.0f;
  temp_v6 = 0;
  temp_v7 = 0;
  if ((param_2 & 1) != 0) {
    temp_v13 = (float)param_1[4];
    temp_v11 = in_fpscr & 0xfffffff;
    temp_v10 = temp_v12;
    if ((0.0f <= temp_v13) && (temp_v10 = temp_v13, (int)temp_v13 >= 0x3f800001)) {
      temp_v10 = temp_v17;
    }
    temp_v14 = VectorFloatToUnsigned(temp_v10 * 255.0f + 0.5f,3);
    temp_v13 = (float)param_1[5];
    temp_v4 = temp_v14 & 0xff;
    temp_v10 = temp_v12;
    if ((0.0f <= temp_v13) && (temp_v10 = temp_v13, (int)temp_v13 >= 0x3f800001)) {
      temp_v10 = temp_v17;
    }
    temp_v15 = VectorFloatToUnsigned(temp_v10 * 255.0f + 0.5f,3);
    temp_v13 = (float)param_1[6];
    temp_v15 = temp_v15 & 0xff;
    in_fpscr = temp_v11 | ((unsigned int)(0.0f <= temp_v13) << 0x1d);
    temp_v10 = temp_v12;
    if ((romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) && (temp_v10 = temp_v13, (int)temp_v13 >= 0x3f800001)) {
      temp_v10 = temp_v17;
    }
    temp_v0 = *(char *)(param_1 + 1);
    temp_v16 = VectorFloatToUnsigned(temp_v10 * 255.0f + 0.5f,3);
    temp_v1 = temp_v16;
    if (temp_v0 != '\0') {
      if (temp_v0 != '\x02') {
        if (temp_v0 != '\x03') {
          if (temp_v0 == '\x04') {
            temp_v10 = (float)param_1[7];
            in_fpscr = temp_v11 | ((unsigned int)(0.0f <= temp_v10) << 0x1d);
            if ((romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) && (temp_v12 = temp_v10, (int)temp_v10 >= 0x3f800001)) {
              temp_v12 = temp_v17;
            }
            temp_v6 = 0x10;
            temp_v5 = param_1[2] * param_1[3] * 2;
            temp_v7 = VectorFloatToUnsigned(temp_v12 * 255.0f + 0.5f,3);
            temp_v7 = ((temp_v4 >> 4) << 0xc) | ((temp_v15 >> 4) << 8) | (temp_v16 & 0xf0) |
                    ((temp_v7 & 0xff) >> 4);
          }
        }
        else {
          temp_v6 = 0x10;
          temp_v7 = ((temp_v4 >> 3) << 0xb) | ((temp_v15 >> 2) << 5) | (temp_v1 >> 3);
          temp_v5 = param_1[2] * param_1[3] * 2;
        }
      }
      else {
        temp_v10 = (float)param_1[7];
        in_fpscr = temp_v11 | ((unsigned int)(0.0f <= temp_v10) << 0x1d);
        if ((romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) && (temp_v12 = temp_v17, (int)temp_v10 < 0x3f800001)) {
          temp_v12 = temp_v10;
        }
        temp_v6 = 0x10;
        temp_v5 = param_1[2] * param_1[3] * 2;
        temp_v7 = VectorFloatToUnsigned(temp_v12 * 255.0f + 0.5f,3);
        temp_v7 = ((temp_v4 >> 3) << 0xb) | ((temp_v15 >> 3) << 6) | ((temp_v1 >> 3) << 1) |
                (unsigned int)((temp_v7 & 0xff) >= 0x80);
      }
    }
    else {
      temp_v10 = (float)param_1[7];
      in_fpscr = temp_v11 | ((unsigned int)(0.0f <= temp_v10) << 0x1d);
      if ((romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) && (temp_v12 = temp_v17, (int)temp_v10 < 0x3f800001)) {
        temp_v12 = temp_v10;
      }
      temp_v6 = 0x20;
      temp_v5 = param_1[2] * param_1[3] * 4;
      temp_v7 = VectorFloatToUnsigned(temp_v12 * 255.0f + 0.5f,3);
      temp_v7 = (temp_v14 << 0x18) | (temp_v15 << 0x10) | (temp_v1 << 8) | (temp_v7 & 0xff);
    }
  }
  temp_v8 = 0;
  temp_v9 = 0;
  temp_v11 = 0;
  if ((param_2 & 6) != 0) {
    temp_v0 = *(char *)(param_1 + 10);
    temp_v11 = VectorFloatToUnsigned(param_1[0xd],3);
    temp_v4 = 0;
    if (temp_v11 < 2) {
      temp_v17 = (float)VectorUnsignedToFloat(temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
    }
    temp_v11 = VectorFloatToUnsigned(temp_v17,3);
    if (temp_v0 != '\x03') {
      if (temp_v0 != '\0') {
        if (temp_v0 == '\x02') {
          temp_v12 = (float)VectorUnsignedToFloat(temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v8 = param_1[0xb] * param_1[0xc] * 3;
          if ((0.0f < temp_v12) && ((unsigned int)romwright_fabs_4(temp_v12) >> 0x17 != 0xff)) {
            if ((int)(temp_v12 * 16777216.0f) < 0x4b800000) {
              temp_v4 = VectorFloatToUnsigned(temp_v12 * 16777216.0f,3);
            }
            else {
              temp_v4 = 0xffffff;
            }
          }
          temp_v9 = 0x18;
          temp_v11 = temp_v4;
        }
      }
      else {
        temp_v12 = (float)VectorUnsignedToFloat(temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v8 = param_1[0xb] * param_1[0xc] * 2;
        if ((0.0f < temp_v12) && ((unsigned int)romwright_fabs_4(temp_v12) >> 0x17 != 0xff)) {
          if ((int)(temp_v12 * 65536.0f) < 0x47800000) {
            temp_v4 = VectorFloatToUnsigned(temp_v12 * 65536.0f,3);
          }
          else {
            temp_v4 = 0xffff;
          }
        }
        temp_v9 = 0x10;
        temp_v11 = temp_v4;
      }
    }
    else {
      temp_v12 = (float)VectorUnsignedToFloat(temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v8 = param_1[0xb] * param_1[0xc] * 4;
      if ((0.0f < temp_v12) && ((unsigned int)romwright_fabs_4(temp_v12) >> 0x17 != 0xff)) {
        if ((int)(temp_v12 * 16777216.0f) < 0x4b800000) {
          temp_v4 = VectorFloatToUnsigned(temp_v12 * 16777216.0f,3);
        }
        else {
          temp_v4 = 0xffffff;
        }
      }
      temp_v9 = 0x20;
      temp_v11 = temp_v4 | ((unsigned int)*(unsigned char *)(param_1 + 0xe) << 0x18);
    }
  }
  if ((param_2 & 3) != 0) {
    if (param_3 != 0) {
      FUN_0017dd84();
    }
    temp_v2 = 0;
    if ((param_2 & 6) != 0) {
      temp_v2 = param_1[9];
    }
    temp_v3 = 0;
    if ((param_2 & 1) != 0) {
      temp_v3 = *param_1;
    }
    asdGfxCmdBufferForward8(temp_v3,temp_v5,temp_v7,temp_v6,temp_v2,temp_v8,temp_v11,temp_v9);
  }
  return;
}

} /* extern "C" */
