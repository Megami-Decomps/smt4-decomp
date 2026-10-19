/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00367fac` (_code @ 0x367fac, 0x3a0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

#ifndef ROMWRIGHT_ISNAN_DEFINED
#define ROMWRIGHT_ISNAN_DEFINED
static int romwright_isnanf(float value)
{
    return value != value;
}
static int romwright_isnan(double value)
{
    return value != value;
}
#endif
/* stack frame of void: 23 slot(s), 92 byte(s) */
typedef struct {
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spD8; /* 0xd8: local_d8 */
} void_stack;

extern unsigned int DAT_00536d14; /* 0x536d14 */
extern unsigned int DAT_00536d18; /* 0x536d18 */
extern unsigned int DAT_00536d1c; /* 0x536d1c */
extern unsigned int DAT_00536d20; /* 0x536d20 */
extern int DAT_00581288; /* 0x581288 */
extern float DAT_005f19b4; /* 0x5f19b4 */

/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
extern int FUN_00162e8c(void);
/* Supplied declaration required: nn_math_ARMv6_VEC3TransformAsm_2AD44C. */


/* WARNING: Removing unreachable block (ram,0x00368128) */
/* WARNING: Removing unreachable block (ram,0x00368138) */

unsigned int FUN_00367fac(void)

{
/* irregular: irregular input(s): in_fpscr, in_s0, in_s1, in_s2; 6 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  float temp_v2;
  int temp_v3;
  unsigned char temp_v4;
  float *pfVar6;
  int temp_v5;
  unsigned char temp_v6;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  float in_s1;
  float temp_v11;
  float in_s2;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  float afStack_140 [3];
  unsigned char temp_v18 [12];
  unsigned char temp_v19 [12];
  unsigned char temp_v20 [68];
  float temp_v21;
  float temp_v22;
  float temp_v23;
  float temp_v24;
  float temp_v25;
  float temp_v26;
  unsigned int temp_v27;
  float temp_v28;
  float temp_v29;
  float temp_v30;
  unsigned int temp_v31;
  float temp_v32;
  float temp_v33;
  float temp_v34;
  unsigned int temp_v35;
  float temp_v36 [20];
  
  temp_v17 = 0.0f;
  temp_v3 = FUN_00162e8c();
  temp_v23 = *(float *)(temp_v3 + 0x1528);
  if ((romwright_isnan(*(float *)(DAT_00581288 + 0x20) - 200.0f) || (in_s1 != in_s1)) &&
     (in_s1 < *(float *)(DAT_00581288 + 0x20) + 200.0f)) {
    temp_v7 = *(float *)(DAT_00581288 + 0x21c) * 0.7111111f;
    temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v17 < temp_v7) << 0x1f) |
            ((unsigned int)(temp_v17 == temp_v7) << 0x1e);
    temp_v1 = (unsigned char)(temp_v0 >> 0x18);
    for (temp_v11 = romwright_fabs_4(temp_v7); temp_v2 = temp_v17, (int)temp_v11 >= 0x47800000; temp_v11 = temp_v11 - 65536.0f) {
    }
    for (; (int)temp_v2 >= 0x47800000; temp_v2 = temp_v2 - 65536.0f) {
    }
    temp_v8 = VectorFloatToUnsigned(temp_v17,3);
    temp_v9 = VectorFloatToUnsigned(temp_v11,3);
    temp_v10 = VectorFloatToUnsigned(temp_v2,3);
    temp_v4 = temp_v8;
    temp_v6 = temp_v10;
    temp_v14 = (float)VectorUnsignedToFloat(temp_v8 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
    temp_v8 = temp_v9 & 0xff;
    temp_v13 = (float)VectorUnsignedToFloat(temp_v9 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
    temp_v12 = (float)VectorUnsignedToFloat(temp_v10 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
    temp_v15 = (float)(&DAT_00536d14)[temp_v4 * 4] +
             (temp_v17 - temp_v14) * (float)(&DAT_00536d1c)[temp_v4 * 4];
    temp_v16 = (float)(&DAT_00536d18)[temp_v4 * 4] +
             (temp_v17 - temp_v14) * (float)(&DAT_00536d20)[temp_v4 * 4];
    temp_v14 = (float)(&DAT_00536d14)[temp_v8 * 4] +
             (temp_v11 - temp_v13) * (float)(&DAT_00536d1c)[temp_v8 * 4];
    temp_v34 = (float)(&DAT_00536d18)[temp_v8 * 4] +
               (temp_v11 - temp_v13) * (float)(&DAT_00536d20)[temp_v8 * 4];
    temp_v13 = (float)(&DAT_00536d14)[temp_v6 * 4] +
             (temp_v2 - temp_v12) * (float)(&DAT_00536d1c)[temp_v6 * 4];
    temp_v11 = (float)(&DAT_00536d18)[temp_v6 * 4] +
             (temp_v2 - temp_v12) * (float)(&DAT_00536d20)[temp_v6 * 4];
    if (!(unsigned char)((temp_v1 >> 6) & 1) && (unsigned char)(temp_v1 >> 7) == ((temp_v17 != temp_v17) || (temp_v7 != temp_v7))) {
      temp_v14 = -temp_v14;
    }
    temp_v24 = temp_v11 * temp_v34;
    temp_v32 = -temp_v14;
    temp_v28 = temp_v13 * temp_v34;
    temp_v33 = temp_v15 * temp_v34;
    temp_v34 = temp_v16 * temp_v34;
    temp_v25 = temp_v15 * temp_v11 * temp_v14 - temp_v16 * temp_v13;
    temp_v30 = temp_v16 * temp_v13 * temp_v14 - temp_v15 * temp_v11;
    temp_v26 = temp_v15 * temp_v13 + temp_v16 * temp_v11 * temp_v14;
    temp_v29 = temp_v16 * temp_v11 + temp_v15 * temp_v13 * temp_v14;
    temp_v7 = DAT_005f19b4 * -0.5f;
    temp_v27 = 0;
    temp_v31 = 0;
    temp_v35 = 0;
    temp_v11 = DAT_005f19b4;
    temp_v21 = temp_v7;
    temp_v22 = temp_v17;
    nn_math_ARMv6_VEC3TransformAsm_2AD44C(afStack_140,&temp_v24,&temp_v21);
    temp_v11 = temp_v11 * 0.5f;
    temp_v21 = temp_v11;
    temp_v22 = temp_v17;
    nn_math_ARMv6_VEC3TransformAsm_2AD44C(temp_v18,&temp_v24,&temp_v21);
    temp_v21 = temp_v7;
    temp_v22 = temp_v17;
    temp_v23 = temp_v17;
    nn_math_ARMv6_VEC3TransformAsm_2AD44C(temp_v19,&temp_v24,&temp_v21);
    temp_v21 = temp_v11;
    temp_v22 = temp_v17;
    temp_v23 = temp_v17;
    nn_math_ARMv6_VEC3TransformAsm_2AD44C(temp_v20,&temp_v24,&temp_v21);
    temp_v3 = 0;
    do {
      pfVar6 = afStack_140 + temp_v3 * 3;
      *pfVar6 = *pfVar6 + *(float *)(DAT_00581288 + 0x208);
      afStack_140[temp_v3 * 3 + 1] = afStack_140[temp_v3 * 3 + 1] + *(float *)(DAT_00581288 + 0x20c);
      temp_v5 = temp_v3 + 1;
      temp_v11 = *(float *)(temp_v18 + (temp_v3 * 0xc - 4)) + *(float *)(DAT_00581288 + 0x210);
      *(float *)(temp_v18 + (temp_v3 * 0xc - 4)) = temp_v11;
      temp_v36[temp_v3 * 2] = *pfVar6;
      temp_v36[temp_v3 * 2 + 1] = temp_v11;
      temp_v3 = temp_v5;
    } while (temp_v5 < 4);
    if (((in_s0 - temp_v36[2]) * (temp_v36[1] - temp_v36[3]) -
         (temp_v36[0] - temp_v36[2]) * (in_s2 - temp_v36[3]) < temp_v17 &&
         (in_s0 - temp_v36[0]) * (temp_v36[5] - temp_v36[1]) -
         (temp_v36[4] - temp_v36[0]) * (in_s2 - temp_v36[1]) < temp_v17) &&
       ((in_s0 - temp_v36[4]) * (temp_v36[7] - temp_v36[5]) -
        (temp_v36[6] - temp_v36[4]) * (in_s2 - temp_v36[5]) < temp_v17 &&
        (in_s0 - temp_v36[6]) * (temp_v36[3] - temp_v36[7]) -
        (temp_v36[2] - temp_v36[6]) * (in_s2 - temp_v36[7]) < temp_v17)) {
      return 1;
    }
  }
  return 0;
}
