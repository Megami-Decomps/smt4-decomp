/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038136c` (_code @ 0x38136c, 0x3c4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorFloatToUnsigned(double, int);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(...);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

extern float DAT_006472dc; /* 0x6472dc */
extern float DAT_006472e0; /* 0x6472e0 */
extern float DAT_006472e4; /* 0x6472e4 */
extern float DAT_006472e8; /* 0x6472e8 */
extern float DAT_006472ec; /* 0x6472ec */
extern float DAT_006472f0; /* 0x6472f0 */
extern float DAT_006472f4; /* 0x6472f4 */
extern float DAT_006472f8; /* 0x6472f8 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */


unsigned int FUN_0038136c(char *param_1,int *param_2,int param_3,int param_4)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int in_fpscr;
  int temp_v4;
  float temp_v5;
  float temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  
  if (param_4 == 0) {
    return (*(unsigned int *)(param_1 + 4) & 0xffffff) | (*param_2 << 0x18);
  }
  temp_v0 = *param_1;
  temp_v5 = 1.0f;
  temp_v9 = (float)VectorSignedToFloat(param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
  if (temp_v0 != '\0') {
    if (temp_v0 != '\x01') {
      if (temp_v0 != '\x02') {
        temp_v3 = *(unsigned int *)(param_1 + 4);
        temp_v2 = *(unsigned int *)(param_1 + 8);
        DAT_006472f8 = 0.0f;
      }
      else {
        temp_v4 = (int)(*(float *)(param_1 + 0x10) * temp_v9);
        if (temp_v4 > param_3) {
          temp_v3 = *(unsigned int *)(param_1 + 4);
          temp_v2 = *(unsigned int *)(param_1 + 0xc);
          temp_v10 = (float)VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v6 = (float)VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
          DAT_006472f8 = temp_v10 / temp_v6;
        }
        else {
          temp_v8 = (int)(*(float *)(param_1 + 0x18) * temp_v9);
          if (param_3 < temp_v8) {
            temp_v3 = *(unsigned int *)(param_1 + 0xc);
            temp_v2 = *(unsigned int *)(param_1 + 0x14);
            temp_v6 = (float)VectorSignedToFloat(temp_v8 - temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
            in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v6 == 0.0f) << 0x1e);
            temp_v1 = (unsigned char)(in_fpscr >> 0x18);
            temp_v10 = (float)VectorSignedToFloat(param_3 - temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
          }
          else {
            temp_v3 = *(unsigned int *)(param_1 + 0x14);
            temp_v2 = *(unsigned int *)(param_1 + 8);
            temp_v6 = (float)VectorSignedToFloat(param_4 - temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
            in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v6 == 0.0f) << 0x1e);
            temp_v1 = (unsigned char)(in_fpscr >> 0x18);
            temp_v10 = (float)VectorSignedToFloat(param_3 - temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
          }
          DAT_006472f8 = temp_v5;
          if (!(unsigned char)(temp_v1 >> 6)) {
            DAT_006472f8 = temp_v10 / temp_v6;
          }
        }
      }
    }
    else {
      temp_v4 = (int)(*(float *)(param_1 + 0x10) * temp_v9);
      if (temp_v4 > param_3) {
        temp_v3 = *(unsigned int *)(param_1 + 4);
        temp_v2 = *(unsigned int *)(param_1 + 0xc);
        temp_v10 = (float)VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v6 = (float)VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
        DAT_006472f8 = temp_v10 / temp_v6;
      }
      else {
        temp_v2 = *(unsigned int *)(param_1 + 8);
        temp_v3 = *(unsigned int *)(param_1 + 0xc);
        temp_v6 = (float)VectorSignedToFloat(param_4 - temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
        in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v6 == 0.0f) << 0x1e);
        temp_v1 = (unsigned char)(in_fpscr >> 0x18);
        temp_v10 = (float)VectorSignedToFloat(param_3 - temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
        DAT_006472f8 = temp_v5;
        if (!(unsigned char)(temp_v1 >> 6)) {
          DAT_006472f8 = temp_v10 / temp_v6;
        }
      }
    }
  }
  else {
    temp_v3 = *(unsigned int *)(param_1 + 4);
    temp_v2 = *(unsigned int *)(param_1 + 8);
    temp_v6 = (float)VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
    DAT_006472f8 = temp_v6 / temp_v9;
  }
  temp_v17 = (float)VectorUnsignedToFloat((temp_v2 & 0xffff) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v15 = (float)VectorUnsignedToFloat(temp_v2 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v13 = (float)VectorUnsignedToFloat((temp_v2 & 0xffffff) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v11 = (float)VectorUnsignedToFloat(temp_v2 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v10 = (float)VectorUnsignedToFloat(temp_v3 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v12 = (float)VectorUnsignedToFloat((temp_v3 & 0xffffff) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v14 = (float)VectorUnsignedToFloat((temp_v3 & 0xffff) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v16 = (float)VectorUnsignedToFloat(temp_v3 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v6 = 1.0f - DAT_006472f8;
  DAT_006472ec = temp_v11 * 0.003921569f * DAT_006472f8;
  DAT_006472f0 = temp_v13 * 0.003921569f * DAT_006472f8;
  DAT_006472f4 = temp_v17 * 0.003921569f * DAT_006472f8;
  DAT_006472f8 = temp_v15 * 0.003921569f * DAT_006472f8;
  DAT_006472dc = temp_v10 * 0.003921569f * temp_v6 + DAT_006472ec;
  DAT_006472e0 = temp_v12 * 0.003921569f * temp_v6 + DAT_006472f0;
  DAT_006472e4 = temp_v14 * 0.003921569f * temp_v6 + DAT_006472f4;
  DAT_006472e8 = temp_v16 * 0.003921569f * temp_v6 + DAT_006472f8;
  temp_v2 = VectorFloatToUnsigned(DAT_006472e0 * 255.0f,3);
  VectorFloatToUnsigned(DAT_006472dc * 255.0f,3);
  temp_v7 = VectorFloatToUnsigned(DAT_006472e4 * 255.0f,3);
  temp_v3 = VectorFloatToUnsigned(DAT_006472e8 * 255.0f,3);
  if (param_3 < (int)((float)param_2[2] * temp_v9)) {
    temp_v5 = (float)VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v9 = (float)VectorSignedToFloat((int)((float)param_2[2] * temp_v9),
                                        (unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v5 = temp_v5 / temp_v9;
  }
  else if ((int)((float)param_2[3] * temp_v9) < param_3) {
    temp_v5 = (float)VectorSignedToFloat(param_4 - param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v9 = (float)VectorSignedToFloat(param_4 - (int)((float)param_2[3] * temp_v9),
                                        (unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v5 = temp_v5 / temp_v9;
  }
  temp_v9 = (float)VectorUnsignedToFloat(*param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v4 = VectorFloatToUnsigned(temp_v9 * temp_v5,3);
  return (temp_v3 & 0xff) | ((temp_v2 & 0xff) << 0x10) | ((temp_v7 & 0xff) << 8) | (temp_v4 << 0x18);
}

} /* extern "C" */
