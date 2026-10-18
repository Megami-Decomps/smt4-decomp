/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002364e8` (_code @ 0x2364e8, 0x214 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

extern unsigned int DAT_00407fc0; /* 0x407fc0 */
extern unsigned int DAT_00407fc4; /* 0x407fc4 */
extern unsigned int DAT_00407fc8; /* 0x407fc8 */
extern unsigned int DAT_00407fcc; /* 0x407fcc */

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


void FUN_002364e8(float *param_1,float *param_2,float *param_3)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  unsigned int in_fpscr;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  
  temp_v4 = romwright_fabs_4(param_2[1] * 40.743664f);
  temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f <= param_2[2] * 40.743664f) << 0x1d);
  temp_v5 = romwright_fabs_4(param_2[2] * 40.743664f);
  for (temp_v3 = romwright_fabs_4(*param_2 * 40.743664f); (int)temp_v3 >= 0x47800000; temp_v3 = temp_v3 - 65536.0f) {
  }
  for (; (int)temp_v4 >= 0x47800000; temp_v4 = temp_v4 - 65536.0f) {
  }
  for (; (int)temp_v5 >= 0x47800000; temp_v5 = temp_v5 - 65536.0f) {
  }
  temp_v6 = VectorFloatToUnsigned(temp_v3,3);
  temp_v7 = VectorFloatToUnsigned(temp_v4,3);
  temp_v8 = VectorFloatToUnsigned(temp_v5,3);
  temp_v1 = temp_v6;
  temp_v2 = temp_v8;
  temp_v12 = (float)VectorUnsignedToFloat(temp_v6 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
  temp_v6 = temp_v7 & 0xff;
  temp_v10 = (float)VectorUnsignedToFloat(temp_v8 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
  temp_v9 = (float)VectorUnsignedToFloat(temp_v7 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
  temp_v11 = (float)(&DAT_00407fc0)[temp_v1 * 4] + (temp_v3 - temp_v12) * (float)(&DAT_00407fc8)[temp_v1 * 4];
  temp_v12 = (float)(&DAT_00407fc4)[temp_v1 * 4] + (temp_v3 - temp_v12) * (float)(&DAT_00407fcc)[temp_v1 * 4];
  temp_v3 = (float)(&DAT_00407fc0)[temp_v6 * 4] + (temp_v4 - temp_v9) * (float)(&DAT_00407fc8)[temp_v6 * 4];
  temp_v13 = (float)(&DAT_00407fc4)[temp_v6 * 4] + (temp_v4 - temp_v9) * (float)(&DAT_00407fcc)[temp_v6 * 4];
  temp_v9 = (float)(&DAT_00407fc0)[temp_v2 * 4] + (temp_v5 - temp_v10) * (float)(&DAT_00407fc8)[temp_v2 * 4];
  temp_v4 = (float)(&DAT_00407fc4)[temp_v2 * 4] + (temp_v5 - temp_v10) * (float)(&DAT_00407fcc)[temp_v2 * 4];
  if (*param_2 * 40.743664f < 0.0f) {
    temp_v11 = -temp_v11;
  }
  if (param_2[1] * 40.743664f < 0.0f) {
    temp_v3 = -temp_v3;
  }
  if (!romwright_subpiece_4_1_0(temp_v0 >> 0x1d,0)) {
    temp_v9 = -temp_v9;
  }
  param_1[8] = -temp_v3;
  *param_1 = temp_v4 * temp_v13;
  param_1[4] = temp_v9 * temp_v13;
  param_1[1] = temp_v11 * temp_v4 * temp_v3 - temp_v12 * temp_v9;
  param_1[6] = temp_v12 * temp_v9 * temp_v3 - temp_v11 * temp_v4;
  param_1[2] = temp_v11 * temp_v9 + temp_v12 * temp_v4 * temp_v3;
  param_1[5] = temp_v12 * temp_v4 + temp_v11 * temp_v9 * temp_v3;
  param_1[9] = temp_v11 * temp_v13;
  param_1[10] = temp_v12 * temp_v13;
  param_1[3] = 0.0f;
  param_1[7] = 0.0f;
  param_1[0xb] = 0.0f;
  temp_v4 = param_3[1];
  temp_v3 = param_3[2];
  param_1[3] = *param_3;
  param_1[0xb] = temp_v3;
  param_1[7] = temp_v4;
  param_1[0xf] = (float)((unsigned int)param_1[0xf] | 0x800);
  return;
}
