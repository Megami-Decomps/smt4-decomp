/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b7e24` (_code @ 0x1b7e24, 0x2d0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_001b7e24_arg1 fn_001b7e24_arg1;
struct fn_001b7e24_arg1 {
    unsigned char pad_0x0[0x4];
    uint field_0x4; /* +0x4 */
    unsigned char pad_0x8[0x18];
    float field_0x20; /* +0x20 */
    float field_0x24; /* +0x24 */
    float field_0x28; /* +0x28 */
    float field_0x2c; /* +0x2c */
    float field_0x30; /* +0x30 */
    float field_0x34; /* +0x34 */
    float field_0x38; /* +0x38 */
    float field_0x3c; /* +0x3c */
    float field_0x40; /* +0x40 */
};

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


void FUN_001b7e24(float *param_1,fn_001b7e24_arg1 *param_2)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  float temp_v2;
  unsigned char temp_v3;
  float temp_v4;
  unsigned char temp_v5;
  unsigned char temp_v6;
  unsigned int in_fpscr;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  
  temp_v2 = param_2->field_0x24;
  temp_v4 = param_2->field_0x28;
  param_1[0xc] = param_2->field_0x20;
  param_1[0xd] = temp_v2;
  param_1[0xe] = temp_v4;
  temp_v7 = param_2->field_0x2c * 40.743664f;
  temp_v8 = param_2->field_0x30 * 40.743664f;
  temp_v9 = param_2->field_0x34 * 40.743664f;
  temp_v4 = romwright_fabs_4(temp_v8);
  temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f <= temp_v9) << 0x1d);
  temp_v9 = romwright_fabs_4(temp_v9);
  for (temp_v2 = romwright_fabs_4(temp_v7); (int)temp_v2 >= 0x47800000; temp_v2 = temp_v2 - 65536.0f) {
  }
  for (; (int)temp_v4 >= 0x47800000; temp_v4 = temp_v4 - 65536.0f) {
  }
  for (; (int)temp_v9 >= 0x47800000; temp_v9 = temp_v9 - 65536.0f) {
  }
  temp_v10 = VectorFloatToUnsigned(temp_v2,3);
  temp_v11 = VectorFloatToUnsigned(temp_v4,3);
  temp_v12 = VectorFloatToUnsigned(temp_v9,3);
  temp_v1 = temp_v10;
  temp_v3 = temp_v12;
  temp_v15 = (float)VectorUnsignedToFloat(temp_v10 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
  temp_v10 = temp_v11 & 0xff;
  temp_v14 = (float)VectorUnsignedToFloat(temp_v11 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
  temp_v13 = (float)VectorUnsignedToFloat(temp_v12 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
  temp_v16 = (float)(&DAT_00536d14)[temp_v1 * 4] + (temp_v2 - temp_v15) * (float)(&DAT_00536d1c)[temp_v1 * 4];
  temp_v15 = (float)(&DAT_00536d18)[temp_v1 * 4] + (temp_v2 - temp_v15) * (float)(&DAT_00536d20)[temp_v1 * 4];
  temp_v2 = (float)(&DAT_00536d14)[temp_v10 * 4] + (temp_v4 - temp_v14) * (float)(&DAT_00536d1c)[temp_v10 * 4]
  ;
  temp_v4 = (float)(&DAT_00536d18)[temp_v10 * 4] + (temp_v4 - temp_v14) * (float)(&DAT_00536d20)[temp_v10 * 4]
  ;
  temp_v14 = (float)(&DAT_00536d14)[temp_v3 * 4] + (temp_v9 - temp_v13) * (float)(&DAT_00536d1c)[temp_v3 * 4]
  ;
  temp_v9 = (float)(&DAT_00536d18)[temp_v3 * 4] + (temp_v9 - temp_v13) * (float)(&DAT_00536d20)[temp_v3 * 4]
  ;
  if (temp_v7 < 0.0f) {
    temp_v16 = -temp_v16;
  }
  if (temp_v8 < 0.0f) {
    temp_v2 = -temp_v2;
  }
  if (!romwright_subpiece_4_1_0(temp_v0 >> 0x1d,0)) {
    temp_v14 = -temp_v14;
  }
  param_1[8] = -temp_v2;
  param_1[4] = temp_v14 * temp_v4;
  param_1[9] = temp_v16 * temp_v4;
  param_1[10] = temp_v15 * temp_v4;
  param_1[6] = temp_v15 * temp_v14 * temp_v2 - temp_v16 * temp_v9;
  param_1[5] = temp_v15 * temp_v9 + temp_v16 * temp_v14 * temp_v2;
  *param_1 = temp_v9 * temp_v4;
  param_1[1] = temp_v16 * temp_v9 * temp_v2 - temp_v15 * temp_v14;
  param_1[2] = temp_v16 * temp_v14 + temp_v15 * temp_v9 * temp_v2;
  param_1[3] = 0.0f;
  param_1[7] = 0.0f;
  param_1[0xb] = 0.0f;
  temp_v2 = param_2->field_0x38;
  temp_v4 = param_2->field_0x3c;
  param_1[0xb] = param_2->field_0x40;
  param_1[3] = temp_v2;
  param_1[7] = temp_v4;
  param_1[0xf] = (float)((unsigned int)param_1[0xf] | 0x800);
  if ((~param_2->field_0x4 & 1) == 0) {
    param_1[0xf] = (float)((unsigned int)param_1[0xf] | 0x20);
  }
  temp_v5 = (~param_2->field_0x4 & 2) == 0;
  if (temp_v5) {
    param_1[0xf] = (float)((unsigned int)param_1[0xf] | 0x100);
  }
  temp_v6 = (~param_2->field_0x4 & 4) == 0;
  if (temp_v6) {
    param_1[0xf] = (float)((unsigned int)param_1[0xf] | 0x80);
  }
  if ((~param_2->field_0x4 & 8) == 0) {
    param_1[0xf] = (float)((unsigned int)param_1[0xf] | 0x200);
  }
  if ((~param_2->field_0x4 & 0x10) == 0) {
    param_1[0xf] = (float)((unsigned int)param_1[0xf] | 0x400);
  }
  if (temp_v5 && temp_v6) {
    param_1[0xf] = (float)((unsigned int)param_1[0xf] | 0x40);
  }
  return;
}
