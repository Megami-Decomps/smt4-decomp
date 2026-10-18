/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0044b5f4` (_code @ 0x44b5f4, 0x224 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern unsigned int DAT_00536d14; /* 0x536d14 */
extern unsigned int DAT_00536d18; /* 0x536d18 */
extern unsigned int DAT_00536d1c; /* 0x536d1c */
extern unsigned int DAT_00536d20; /* 0x536d20 */

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


void FUN_0044b5f4(float *param_1,float *param_2)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  unsigned int temp_v0;
  float temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  float temp_v4;
  unsigned int in_fpscr;
  float temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  
  temp_v1 = param_2[1];
  temp_v4 = param_2[2];
  param_1[0xc] = *param_2;
  param_1[0xd] = temp_v1;
  param_1[0xe] = temp_v4;
  temp_v4 = romwright_fabs_4(param_2[4] * 40.743664f);
  temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f <= param_2[5] * 40.743664f) << 0x1d);
  temp_v5 = romwright_fabs_4(param_2[5] * 40.743664f);
  for (temp_v1 = romwright_fabs_4(param_2[3] * 40.743664f); (int)temp_v1 >= 0x47800000; temp_v1 = temp_v1 - 65536.0f) {
  }
  for (; (int)temp_v4 >= 0x47800000; temp_v4 = temp_v4 - 65536.0f) {
  }
  for (; (int)temp_v5 >= 0x47800000; temp_v5 = temp_v5 - 65536.0f) {
  }
  temp_v6 = VectorFloatToUnsigned(temp_v1,3);
  temp_v7 = VectorFloatToUnsigned(temp_v4,3);
  temp_v8 = VectorFloatToUnsigned(temp_v5,3);
  temp_v2 = temp_v7;
  temp_v12 = (float)VectorUnsignedToFloat(temp_v7 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
  temp_v7 = temp_v6 & 0xff;
  temp_v3 = temp_v8;
  temp_v9 = (float)VectorUnsignedToFloat(temp_v6 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
  temp_v11 = (float)VectorUnsignedToFloat(temp_v8 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
  temp_v13 = (float)(&DAT_00536d14)[temp_v7 * 4] + (temp_v1 - temp_v9) * (float)(&DAT_00536d1c)[temp_v7 * 4];
  temp_v10 = (float)(&DAT_00536d14)[temp_v2 * 4] + (temp_v4 - temp_v12) * (float)(&DAT_00536d1c)[temp_v2 * 4];
  temp_v14 = (float)(&DAT_00536d18)[temp_v7 * 4] + (temp_v1 - temp_v9) * (float)(&DAT_00536d20)[temp_v7 * 4];
  temp_v9 = (float)(&DAT_00536d18)[temp_v2 * 4] + (temp_v4 - temp_v12) * (float)(&DAT_00536d20)[temp_v2 * 4];
  temp_v4 = (float)(&DAT_00536d14)[temp_v3 * 4] + (temp_v5 - temp_v11) * (float)(&DAT_00536d1c)[temp_v3 * 4];
  temp_v1 = (float)(&DAT_00536d18)[temp_v3 * 4] + (temp_v5 - temp_v11) * (float)(&DAT_00536d20)[temp_v3 * 4];
  if (param_2[3] * 40.743664f < 0.0f) {
    temp_v13 = -temp_v13;
  }
  if (param_2[4] * 40.743664f < 0.0f) {
    temp_v10 = -temp_v10;
  }
  if (!romwright_subpiece_4_1_0(temp_v0 >> 0x1d,0)) {
    temp_v4 = -temp_v4;
  }
  param_1[8] = -temp_v10;
  *param_1 = temp_v1 * temp_v9;
  param_1[4] = temp_v4 * temp_v9;
  param_1[9] = temp_v13 * temp_v9;
  param_1[10] = temp_v14 * temp_v9;
  param_1[1] = temp_v13 * temp_v1 * temp_v10 - temp_v14 * temp_v4;
  param_1[6] = temp_v14 * temp_v4 * temp_v10 - temp_v13 * temp_v1;
  param_1[2] = temp_v13 * temp_v4 + temp_v14 * temp_v1 * temp_v10;
  param_1[5] = temp_v14 * temp_v1 + temp_v13 * temp_v4 * temp_v10;
  param_1[3] = 0.0f;
  param_1[7] = 0.0f;
  param_1[0xb] = 0.0f;
  temp_v1 = param_2[6];
  temp_v4 = param_2[7];
  param_1[0xb] = param_2[8];
  param_1[3] = temp_v1;
  param_1[7] = temp_v4;
  param_1[0xf] = (float)((unsigned int)param_1[0xf] | 0x800);
  return;
}
