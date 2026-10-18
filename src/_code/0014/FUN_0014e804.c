/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014e804` (_code @ 0x14e804, 0x1dc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned int DAT_00407fc0; /* 0x407fc0 */
extern unsigned int DAT_00407fc4; /* 0x407fc4 */
extern unsigned int DAT_00407fc8; /* 0x407fc8 */
extern unsigned int DAT_00407fcc; /* 0x407fcc */

#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002a3788. */
/* Supplied declaration required: FUN_002a37a4. */


/* WARNING: Removing unreachable block (ram,0x0014e934) */
/* WARNING: Removing unreachable block (ram,0x0014e93c) */

void FUN_0014e804(float *param_1)

{
/* irregular: irregular input(s): in_fpscr, in_s0, in_s1, in_s2; 10 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v3;
  float in_s1;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  float temp_v7;
  float temp_v8;
  float in_s2;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float fStack_24;
  unsigned int temp_v17;
  unsigned char temp_v18 [8];
  unsigned int uStack_14;
  
  temp_v17 = 0;
  temp_v16 = -in_s1;
  uStack_14 = 0;
  fStack_24 = -in_s2;
  temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f <= 256.0f - in_s0) << 0x1d);
  for (temp_v3 = romwright_fabs_4(256.0f - in_s0); (int)temp_v3 >= 0x47800000; temp_v3 = temp_v3 - 65536.0f) {
  }
  temp_v4 = VectorFloatToUnsigned(0,3);
  temp_v5 = VectorFloatToUnsigned(0,3);
  temp_v6 = VectorFloatToUnsigned(temp_v3,3);
  temp_v1 = temp_v4;
  temp_v2 = temp_v6;
  temp_v9 = (float)VectorUnsignedToFloat(temp_v4 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
  temp_v4 = temp_v5 & 0xff;
  temp_v10 = (float)VectorUnsignedToFloat(temp_v5 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
  temp_v7 = (float)VectorUnsignedToFloat(temp_v6 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
  temp_v12 = (float)(&DAT_00407fc4)[temp_v2 * 4];
  temp_v8 = (float)(&DAT_00407fc0)[temp_v2 * 4];
  temp_v11 = (float)(&DAT_00407fc0)[temp_v1 * 4] + (0.0f - temp_v9) * (float)(&DAT_00407fc8)[temp_v1 * 4];
  temp_v13 = (float)(&DAT_00407fc4)[temp_v1 * 4] + (0.0f - temp_v9) * (float)(&DAT_00407fcc)[temp_v1 * 4];
  temp_v14 = (float)(&DAT_00407fc8)[temp_v2 * 4];
  temp_v15 = (float)(&DAT_00407fcc)[temp_v2 * 4];
  temp_v9 = (float)(&DAT_00407fc0)[temp_v4 * 4] + (0.0f - temp_v10) * (float)(&DAT_00407fc8)[temp_v4 * 4];
  temp_v10 = (float)(&DAT_00407fc4)[temp_v4 * 4] + (0.0f - temp_v10) * (float)(&DAT_00407fcc)[temp_v4 * 4];
  param_1[3] = 0.0f;
  temp_v8 = temp_v8 + (temp_v3 - temp_v7) * temp_v14;
  temp_v12 = temp_v12 + (temp_v3 - temp_v7) * temp_v15;
  param_1[7] = 0.0f;
  if (!romwright_subpiece_4_1_0(temp_v0 >> 0x1d,0)) {
    temp_v8 = -temp_v8;
  }
  param_1[8] = -temp_v9;
  param_1[0xb] = 0.0f;
  param_1[0xc] = 0.0f;
  param_1[0xd] = 0.0f;
  param_1[0xf] = 1.0f;
  param_1[0xe] = 0.0f;
  *param_1 = temp_v12 * temp_v10;
  param_1[4] = temp_v8 * temp_v10;
  param_1[1] = temp_v11 * temp_v12 * temp_v9 - temp_v13 * temp_v8;
  param_1[6] = temp_v13 * temp_v8 * temp_v9 - temp_v11 * temp_v12;
  param_1[2] = temp_v11 * temp_v8 + temp_v13 * temp_v12 * temp_v9;
  param_1[5] = temp_v13 * temp_v12 + temp_v11 * temp_v8 * temp_v9;
  param_1[9] = temp_v11 * temp_v10;
  param_1[10] = temp_v13 * temp_v10;
  FUN_002a37a4(param_1,param_1,&temp_v16);
  FUN_002a3788(param_1,temp_v18);
  return;
}
