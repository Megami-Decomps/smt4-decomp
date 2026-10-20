/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b2144` (_code @ 0x2b2144, 0x1f0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorFloatToUnsigned(double, int);
int VectorUnsignedToFloat(unsigned int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned int DAT_00407ed0; /* 0x407ed0 */
extern unsigned int DAT_00407ed4; /* 0x407ed4 */
extern unsigned int DAT_00407ed8; /* 0x407ed8 */
extern unsigned int DAT_00407edc; /* 0x407edc */

#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */


void FUN_002b2144(float *param_1)

{
/* irregular: irregular input(s): in_fpscr, in_s0, in_s1, in_s2; 6 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v3;
  float temp_v4;
  float in_s1;
  float temp_v5;
  float in_s2;
  float temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  
  temp_v5 = romwright_fabs_4(in_s1);
  temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f <= in_s2) << 0x1d);
  temp_v6 = romwright_fabs_4(in_s2);
  for (temp_v3 = romwright_fabs_4(in_s0); (int)temp_v3 >= 0x47800000; temp_v3 = temp_v3 - 65536.0f) {
  }
  for (; (int)temp_v5 >= 0x47800000; temp_v5 = temp_v5 - 65536.0f) {
  }
  for (; (int)temp_v6 >= 0x47800000; temp_v6 = temp_v6 - 65536.0f) {
  }
  temp_v7 = VectorFloatToUnsigned(temp_v3,3);
  temp_v8 = VectorFloatToUnsigned(temp_v5,3);
  temp_v9 = VectorFloatToUnsigned(temp_v6,3);
  temp_v1 = temp_v7;
  temp_v2 = temp_v9;
  temp_v11 = (float)VectorUnsignedToFloat(temp_v7 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
  temp_v7 = temp_v8 & 0xff;
  temp_v12 = (float)VectorUnsignedToFloat(temp_v8 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
  temp_v10 = (float)VectorUnsignedToFloat(temp_v9 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
  temp_v4 = (float)(&DAT_00407ed0)[temp_v7 * 4] + (temp_v5 - temp_v12) * (float)(&DAT_00407ed8)[temp_v7 * 4];
  temp_v5 = (float)(&DAT_00407ed4)[temp_v7 * 4] + (temp_v5 - temp_v12) * (float)(&DAT_00407edc)[temp_v7 * 4];
  temp_v12 = (float)(&DAT_00407ed0)[temp_v1 * 4] + (temp_v3 - temp_v11) * (float)(&DAT_00407ed8)[temp_v1 * 4];
  temp_v13 = (float)(&DAT_00407ed4)[temp_v1 * 4] + (temp_v3 - temp_v11) * (float)(&DAT_00407edc)[temp_v1 * 4];
  temp_v11 = (float)(&DAT_00407ed0)[temp_v2 * 4] + (temp_v6 - temp_v10) * (float)(&DAT_00407ed8)[temp_v2 * 4];
  temp_v3 = (float)(&DAT_00407ed4)[temp_v2 * 4] + (temp_v6 - temp_v10) * (float)(&DAT_00407edc)[temp_v2 * 4];
  param_1[3] = 0.0f;
  param_1[7] = 0.0f;
  if (in_s0 < 0.0f) {
    temp_v12 = -temp_v12;
  }
  if (in_s1 < 0.0f) {
    temp_v4 = -temp_v4;
  }
  if (!romwright_subpiece_4_1_0(temp_v0 >> 0x1d,0)) {
    temp_v11 = -temp_v11;
  }
  param_1[8] = -temp_v4;
  param_1[0xb] = 0.0f;
  param_1[0xc] = 0.0f;
  param_1[0xd] = 0.0f;
  param_1[0xe] = 0.0f;
  param_1[0xf] = 1.0f;
  *param_1 = temp_v3 * temp_v5;
  param_1[9] = temp_v12 * temp_v5;
  param_1[10] = temp_v13 * temp_v5;
  param_1[1] = temp_v12 * temp_v3 * temp_v4 - temp_v13 * temp_v11;
  param_1[6] = temp_v13 * temp_v11 * temp_v4 - temp_v12 * temp_v3;
  param_1[2] = temp_v12 * temp_v11 + temp_v13 * temp_v3 * temp_v4;
  param_1[4] = temp_v11 * temp_v5;
  param_1[5] = temp_v13 * temp_v3 + temp_v12 * temp_v11 * temp_v4;
  return;
}

} /* extern "C" */
