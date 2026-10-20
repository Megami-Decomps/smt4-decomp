/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b7420` (_code @ 0x1b7420, 0x364 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorFloatToUnsigned(double, int);
int VectorUnsignedToFloat(unsigned int, int);
int nn_math_ARMv6_MTX34CopyAsm(unsigned int *, unsigned int);

typedef struct fn_001b7420_arg2 fn_001b7420_arg2;
struct fn_001b7420_arg2 {
    unsigned char pad_0x0[0x18];
    undefined4 field_0x18; /* +0x18 */
    unsigned char pad_0x1c[0x14];
    undefined4 field_0x30; /* +0x30 */
    undefined4 field_0x34; /* +0x34 */
    undefined4 field_0x38; /* +0x38 */
    float field_0x3c; /* +0x3c */
    float field_0x40; /* +0x40 */
    float field_0x44; /* +0x44 */
    undefined4 field_0x48; /* +0x48 */
    unsigned char field_0x4c; /* +0x4c */
    unsigned char pad_0x4d[0x3];
    undefined4 field_0x50; /* +0x50 */
    unsigned char pad_0x54[0x30];
    undefined4 field_0x84; /* +0x84 */
    undefined4 field_0x88; /* +0x88 */
    undefined4 field_0x8c; /* +0x8c */
    undefined4 field_0x90; /* +0x90 */
    undefined4 field_0x94; /* +0x94 */
    undefined4 field_0x98; /* +0x98 */
    undefined4 field_0x9c; /* +0x9c */
    undefined4 field_0xa0; /* +0xa0 */
    undefined4 field_0xa4; /* +0xa4 */
    undefined4 field_0xa8; /* +0xa8 */
    undefined4 field_0xac; /* +0xac */
    undefined4 field_0xb0; /* +0xb0 */
};

extern unsigned int DAT_00536d14; /* 0x536d14 */
extern unsigned int DAT_00536d18; /* 0x536d18 */
extern unsigned int DAT_00536d1c; /* 0x536d1c */
extern unsigned int DAT_00536d20; /* 0x536d20 */
extern unsigned char DAT_0055b688; /* 0x55b688 */
extern unsigned char DAT_0055bce4; /* 0x55bce4 */

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
extern unsigned int FUN_001a1e28(void);
/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */


unsigned int *
FUN_001b7420(unsigned int *param_1,unsigned int param_2,fn_001b7420_arg2 *param_3,unsigned int *param_4)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned char temp_v8;
  unsigned int temp_v9;
  unsigned int in_fpscr;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  float temp_v21;
  float temp_v22;
  
  param_1[1] = param_2;
  param_1[2] = (unsigned int)param_3;
  *param_1 = (unsigned int)&DAT_0055bce4;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  *(unsigned char *)(param_1 + 0xb) = 1;
  *(unsigned char *)(param_1 + 0xc) = 1;
  param_1[0xe] = 3;
  param_1[0xd] = 0;
  temp_v1 = *param_4;
  temp_v2 = param_4[1];
  temp_v3 = param_4[2];
  temp_v4 = param_4[3];
  param_1[3] = 0;
  param_1[0xf] = temp_v1;
  param_1[0x10] = temp_v2;
  param_1[0x11] = temp_v3;
  param_1[0x12] = temp_v4;
  if (param_3 != (fn_001b7420_arg2 *)0x0) {
    *(unsigned char *)(param_1 + 0xc) = (unsigned char)param_3->field_0x18 & 1;
  }
  *param_1 = (unsigned int)&DAT_0055b688;
  temp_v1 = FUN_001a1e28();
  nn_math_ARMv6_MTX34CopyAsm(param_1 + 0x13,temp_v1);
  temp_v2 = 0x3f800000;
  param_1[0x1f] = 0x3f800000;
  param_1[0x20] = 0x3f800000;
  param_1[0x21] = 0x3f800000;
  param_1[0x22] = 0x801;
  temp_v1 = FUN_001a1e28();
  nn_math_ARMv6_MTX34CopyAsm(param_1 + 0x2f,temp_v1);
  param_1[0x3b] = temp_v2;
  param_1[0x3c] = temp_v2;
  param_1[0x3d] = temp_v2;
  param_1[0x3e] = 0x801;
  temp_v1 = FUN_001a1e28();
  nn_math_ARMv6_MTX34CopyAsm(param_1 + 0x3f,temp_v1);
  *(unsigned char *)(param_1 + 0x4b) = 0;
  param_1[0x4c] = 0;
  *(unsigned char *)(param_1 + 0x4d) = 1;
  temp_v1 = param_4[1];
  temp_v2 = param_4[2];
  temp_v3 = param_4[3];
  param_1[0x4e] = *param_4;
  param_1[0x4f] = temp_v1;
  param_1[0x50] = temp_v2;
  param_1[0x51] = temp_v3;
  if (param_3 != (fn_001b7420_arg2 *)0x0) {
    temp_v1 = param_3->field_0x34;
    temp_v2 = param_3->field_0x38;
    param_1[0x1f] = param_3->field_0x30;
    param_1[0x20] = temp_v1;
    param_1[0x21] = temp_v2;
    temp_v10 = param_3->field_0x3c * 40.743664f;
    temp_v12 = param_3->field_0x40 * 40.743664f;
    temp_v14 = param_3->field_0x44 * 40.743664f;
    temp_v13 = romwright_fabs_4(temp_v12);
    temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f <= temp_v14) << 0x1d);
    temp_v14 = romwright_fabs_4(temp_v14);
    for (temp_v11 = romwright_fabs_4(temp_v10); (int)temp_v11 >= 0x47800000; temp_v11 = temp_v11 - 65536.0f) {
    }
    for (; (int)temp_v13 >= 0x47800000; temp_v13 = temp_v13 - 65536.0f) {
    }
    for (; (int)temp_v14 >= 0x47800000; temp_v14 = temp_v14 - 65536.0f) {
    }
    temp_v15 = VectorFloatToUnsigned(temp_v11,3);
    temp_v16 = VectorFloatToUnsigned(temp_v13,3);
    temp_v17 = VectorFloatToUnsigned(temp_v14,3);
    temp_v5 = temp_v15;
    temp_v8 = temp_v17;
    temp_v19 = (float)VectorUnsignedToFloat(temp_v15 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
    temp_v15 = temp_v16 & 0xff;
    temp_v20 = (float)VectorUnsignedToFloat(temp_v16 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
    temp_v18 = (float)VectorUnsignedToFloat(temp_v17 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
    temp_v21 = (float)(&DAT_00536d14)[temp_v15 * 4] +
             (temp_v13 - temp_v20) * (float)(&DAT_00536d1c)[temp_v15 * 4];
    temp_v20 = (float)(&DAT_00536d18)[temp_v15 * 4] +
             (temp_v13 - temp_v20) * (float)(&DAT_00536d20)[temp_v15 * 4];
    temp_v13 = (float)(&DAT_00536d14)[temp_v5 * 4] +
             (temp_v11 - temp_v19) * (float)(&DAT_00536d1c)[temp_v5 * 4];
    temp_v22 = (float)(&DAT_00536d18)[temp_v5 * 4] +
             (temp_v11 - temp_v19) * (float)(&DAT_00536d20)[temp_v5 * 4];
    temp_v19 = (float)(&DAT_00536d14)[temp_v8 * 4] +
             (temp_v14 - temp_v18) * (float)(&DAT_00536d1c)[temp_v8 * 4];
    temp_v11 = (float)(&DAT_00536d18)[temp_v8 * 4] +
             (temp_v14 - temp_v18) * (float)(&DAT_00536d20)[temp_v8 * 4];
    if (temp_v10 < 0.0f) {
      temp_v13 = -temp_v13;
    }
    if (temp_v12 < 0.0f) {
      temp_v21 = -temp_v21;
    }
    if (!romwright_subpiece_4_1_0(temp_v0 >> 0x1d,0)) {
      temp_v19 = -temp_v19;
    }
    *(float *)&param_1[0x1b] = -temp_v21;
    *(float *)&param_1[0x13] = temp_v11 * temp_v20;
    *(float *)&param_1[0x17] = temp_v19 * temp_v20;
    *(float *)&param_1[0x1c] = temp_v13 * temp_v20;
    *(float *)&param_1[0x1d] = temp_v22 * temp_v20;
    param_1[0x14] = temp_v13 * temp_v11 * temp_v21 - temp_v22 * temp_v19;
    param_1[0x19] = temp_v22 * temp_v19 * temp_v21 - temp_v13 * temp_v11;
    param_1[0x15] = temp_v13 * temp_v19 + temp_v22 * temp_v11 * temp_v21;
    param_1[0x18] = temp_v22 * temp_v11 + temp_v13 * temp_v19 * temp_v21;
    param_1[0x16] = 0;
    param_1[0x1a] = 0;
    param_1[0x1e] = 0;
    temp_v1 = param_3->field_0x48;
    temp_v2 = *(unsigned int *)&param_3->field_0x4c;
    param_1[0x1e] = param_3->field_0x50;
    param_1[0x16] = temp_v1;
    param_1[0x1a] = temp_v2;
    param_1[0x22] = param_1[0x22] | 0x800;
    temp_v1 = param_3->field_0x88;
    temp_v2 = param_3->field_0x8c;
    temp_v3 = param_3->field_0x90;
    temp_v4 = param_3->field_0x94;
    temp_v6 = param_3->field_0x98;
    temp_v7 = param_3->field_0x9c;
    temp_v9 = param_3->field_0xa0;
    param_1[0x23] = param_3->field_0x84;
    param_1[0x24] = temp_v1;
    param_1[0x25] = temp_v2;
    param_1[0x26] = temp_v3;
    param_1[0x27] = temp_v4;
    param_1[0x28] = temp_v6;
    param_1[0x29] = temp_v7;
    param_1[0x2a] = temp_v9;
    temp_v1 = param_3->field_0xa8;
    temp_v2 = param_3->field_0xac;
    temp_v3 = param_3->field_0xb0;
    param_1[0x2b] = param_3->field_0xa4;
    param_1[0x2c] = temp_v1;
    param_1[0x2d] = temp_v2;
    param_1[0x2e] = temp_v3;
  }
  else {
    temp_v1 = FUN_001a1e28();
    nn_math_ARMv6_MTX34CopyAsm(param_1 + 0x23,temp_v1);
  }
  return param_1;
}

} /* extern "C" */
