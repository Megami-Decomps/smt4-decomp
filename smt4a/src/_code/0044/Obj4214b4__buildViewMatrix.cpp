/* NON_MATCHING: Retail instruction scheduling/register allocation differs (504 retail versus 390 compiled rows). */
#include "classes/Obj4214b4.h"
#include "romwright_types.h"

extern "C" {

int FUN_0018a924(...);
int VectorFloatToUnsigned(...);
int VectorUnsignedToFloat(...);
int nn_math_ARMv6_MTX34MultAsm(...);
int nn_math_ARMv6_MTX34ToMTX33Asm(float *, unsigned int);
int nn_math_ARMv6_VEC3TransformAsm_2A87B4(...);
int nn_math_ARMv6_VEC3TransformAsm_2AD44C(...);

/* stack frame of param_4: 40 slot(s), 160 byte(s) */
typedef struct {
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spE0; /* 0xe0: local_e0 */
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned int spE8; /* 0xe8: local_e8 */
    unsigned int spEC; /* 0xec: local_ec */
    unsigned int spF4; /* 0xf4: local_f4 */
    unsigned int spF8; /* 0xf8: local_f8 */
    unsigned int spFC; /* 0xfc: local_fc */
    unsigned int sp100; /* 0x100: local_100 */
    unsigned int sp104; /* 0x104: local_104 */
    unsigned int sp108; /* 0x108: local_108 */
    unsigned int sp10C; /* 0x10c: local_10c */
    unsigned int sp110; /* 0x110: local_110 */
    unsigned int sp114; /* 0x114: local_114 */
    unsigned int sp118; /* 0x118: local_118 */
    unsigned int sp13C; /* 0x13c: local_13c */
    unsigned int sp144; /* 0x144: local_144 */
    unsigned int sp148; /* 0x148: local_148 */
    unsigned int sp14C; /* 0x14c: local_14c */
} param_4_stack;

extern unsigned int DAT_00536d14; /* 0x536d14 */
extern unsigned int DAT_00536d18; /* 0x536d18 */
extern unsigned int DAT_00536d1c; /* 0x536d1c */
extern unsigned int DAT_00536d20; /* 0x536d20 */

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
#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Supplied declaration required: FUN_0018a924. */
/* Supplied declaration required: nn_math_ARMv6_MTX34MultAsm. */
/* Supplied declaration required: nn_math_ARMv6_MTX34ToMTX33Asm. */
/* Supplied declaration required: nn_math_ARMv6_VEC3TransformAsm_2A87B4. */
/* Supplied declaration required: nn_math_ARMv6_VEC3TransformAsm_2AD44C. */


/* WARNING: Removing unreachable block (ram,0x0044b108) */
/* WARNING: Removing unreachable block (ram,0x0044af98) */
/* WARNING: Removing unreachable block (ram,0x0044adf8) */
/* WARNING: Removing unreachable block (ram,0x0044ae00) */
/* WARNING: Removing unreachable block (ram,0x0044afb0) */
/* WARNING: Removing unreachable block (ram,0x0044b110) */
/* WARNING: Removing unreachable block (ram,0x0044ad28) */
/* WARNING: Removing unreachable block (ram,0x0044ad0c) */
/* WARNING: Removing unreachable block (ram,0x0044aec4) */

} /* extern "C" */

void Obj4214b4::buildViewMatrix(float *param_2, unsigned int param_3, const float *param_4)

{
    int param_1 = (int)this;
/* irregular: irregular input(s): in_fpscr; 16 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int in_fpscr;
  float temp_v3;
  float temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  float fStack_140;
  float temp_v21;
  float afStack_138 [8];
  float temp_v22;
  float temp_v23;
  float temp_v24;
  unsigned int temp_v25;
  float temp_v26;
  float temp_v27;
  float temp_v28;
  unsigned int temp_v29;
  float temp_v30;
  float temp_v31;
  float fStack_f0;
  unsigned int temp_v32;
  float temp_v33;
  float temp_v34;
  float temp_v35;
  float temp_v36;
  float temp_v37;
  float temp_v38;
  unsigned int temp_v39;
  float temp_v40;
  float temp_v41;
  float temp_v42;
  unsigned int temp_v43;
  float temp_v44;
  float fStack_b4;
  float temp_v45;
  unsigned int temp_v46;
  float temp_v47;
  float temp_v48;
  float temp_v49;
  unsigned int temp_v50;
  float temp_v51;
  float temp_v52;
  float fStack_90;
  unsigned int temp_v53;
  float temp_v54;
  float temp_v55;
  float temp_v56;
  unsigned int temp_v57;
  unsigned char temp_v58 [88];
  
  temp_v17 = 40.743664f;
  if ((~*(unsigned int *)(*(int *)(param_1 + 0xc) + 4) & 1) == 0) {
    nn_math_ARMv6_MTX34ToMTX33Asm(&fStack_140,param_3);
    temp_v4 = 1.0f;
    temp_v33 = 0.0f;
    temp_v34 = 1.0f;
    temp_v35 = 0.0f;
    temp_v18 = 0.0f;
    temp_v19 = 0.0f;
    temp_v20 = -1.0f;
    temp_v3 = *(float *)(*(int *)(param_1 + 0xc) + 8) * temp_v17;
    in_fpscr = in_fpscr & 0xfffffff;
    temp_v0 = in_fpscr | ((unsigned int)(0.0f <= temp_v3) << 0x1d);
    for (temp_v3 = romwright_fabs_4(temp_v3); (int)temp_v3 >= 0x47800000; temp_v3 = temp_v3 - 65536.0f) {
    }
    temp_v5 = VectorFloatToUnsigned(temp_v3,3);
    temp_v6 = VectorFloatToUnsigned(0,3);
    temp_v2 = temp_v5 & 0xff;
    temp_v7 = VectorFloatToUnsigned(0,3);
    temp_v1 = temp_v7 & 0xff;
    temp_v8 = (float)VectorUnsignedToFloat(temp_v5 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
    temp_v5 = temp_v6 & 0xff;
    temp_v9 = (float)VectorUnsignedToFloat(temp_v6 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
    temp_v11 = (float)VectorUnsignedToFloat(temp_v7 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
    temp_v10 = (float)(&DAT_00536d14)[temp_v2 * 4] + (temp_v3 - temp_v8) * (float)(&DAT_00536d1c)[temp_v2 * 4]
    ;
    temp_v12 = (float)(&DAT_00536d18)[temp_v2 * 4] + (temp_v3 - temp_v8) * (float)(&DAT_00536d20)[temp_v2 * 4]
    ;
    temp_v3 = (float)(&DAT_00536d14)[temp_v5 * 4] + (0.0f - temp_v9) * (float)(&DAT_00536d1c)[temp_v5 * 4];
    temp_v31 = (float)(&DAT_00536d18)[temp_v5 * 4] +
               (0.0f - temp_v9) * (float)(&DAT_00536d20)[temp_v5 * 4];
    temp_v8 = (float)(&DAT_00536d14)[temp_v1 * 4] + (0.0f - temp_v11) * (float)(&DAT_00536d1c)[temp_v1 * 4];
    temp_v11 = (float)(&DAT_00536d18)[temp_v1 * 4] + (0.0f - temp_v11) * (float)(&DAT_00536d20)[temp_v1 * 4];
    if (!romwright_subpiece_4_1_0(temp_v0 >> 0x1d,0)) {
      temp_v10 = -temp_v10;
    }
    temp_v22 = temp_v11 * temp_v31;
    temp_v30 = -temp_v3;
    temp_v26 = temp_v8 * temp_v31;
    fStack_f0 = temp_v12 * temp_v31;
    temp_v31 = temp_v10 * temp_v31;
    temp_v23 = temp_v10 * temp_v11 * temp_v3 - temp_v12 * temp_v8;
    temp_v28 = temp_v12 * temp_v8 * temp_v3 - temp_v10 * temp_v11;
    temp_v24 = temp_v10 * temp_v8 + temp_v12 * temp_v11 * temp_v3;
    temp_v27 = temp_v12 * temp_v11 + temp_v10 * temp_v8 * temp_v3;
    temp_v25 = 0;
    temp_v29 = 0;
    temp_v32 = 0;
    temp_v3 = *(float *)(*(int *)(param_1 + 0xc) + 0xc) * temp_v17;
    temp_v0 = in_fpscr | ((unsigned int)(0.0f <= temp_v3) << 0x1d);
    for (temp_v3 = romwright_fabs_4(temp_v3); (int)temp_v3 >= 0x47800000; temp_v3 = temp_v3 - 65536.0f) {
    }
    temp_v5 = VectorFloatToUnsigned(0,3);
    temp_v6 = VectorFloatToUnsigned(temp_v3,3);
    temp_v2 = temp_v5 & 0xff;
    temp_v7 = VectorFloatToUnsigned(0,3);
    temp_v1 = temp_v7 & 0xff;
    temp_v8 = (float)VectorUnsignedToFloat(temp_v5 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
    temp_v5 = temp_v6 & 0xff;
    temp_v10 = (float)VectorUnsignedToFloat(temp_v6 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
    temp_v11 = (float)VectorUnsignedToFloat(temp_v7 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
    temp_v9 = (float)(&DAT_00536d14)[temp_v2 * 4] + (0.0f - temp_v8) * (float)(&DAT_00536d1c)[temp_v2 * 4];
    temp_v12 = (float)(&DAT_00536d18)[temp_v2 * 4] + (0.0f - temp_v8) * (float)(&DAT_00536d20)[temp_v2 * 4];
    temp_v8 = (float)(&DAT_00536d14)[temp_v5 * 4] + (temp_v3 - temp_v10) * (float)(&DAT_00536d1c)[temp_v5 * 4]
    ;
    temp_v45 = (float)(&DAT_00536d18)[temp_v5 * 4] +
               (temp_v3 - temp_v10) * (float)(&DAT_00536d20)[temp_v5 * 4];
    temp_v10 = (float)(&DAT_00536d18)[temp_v1 * 4] + (0.0f - temp_v11) * (float)(&DAT_00536d20)[temp_v1 * 4];
    temp_v3 = (float)(&DAT_00536d14)[temp_v1 * 4] + (0.0f - temp_v11) * (float)(&DAT_00536d1c)[temp_v1 * 4];
    if (!romwright_subpiece_4_1_0(temp_v0 >> 0x1d,0)) {
      temp_v8 = -temp_v8;
    }
    fStack_b4 = temp_v9 * temp_v45;
    temp_v36 = temp_v10 * temp_v45;
    temp_v44 = -temp_v8;
    temp_v40 = temp_v3 * temp_v45;
    temp_v45 = temp_v12 * temp_v45;
    temp_v38 = temp_v9 * temp_v3 + temp_v12 * temp_v10 * temp_v8;
    temp_v41 = temp_v12 * temp_v10 + temp_v9 * temp_v3 * temp_v8;
    temp_v37 = temp_v9 * temp_v10 * temp_v8 - temp_v12 * temp_v3;
    temp_v42 = temp_v12 * temp_v3 * temp_v8 - temp_v9 * temp_v10;
    temp_v39 = 0;
    temp_v43 = 0;
    temp_v46 = 0;
    temp_v17 = *(float *)(*(int *)(param_1 + 0xc) + 0x10) * temp_v17;
    in_fpscr = in_fpscr | ((unsigned int)(0.0f <= temp_v17) << 0x1d);
    for (temp_v17 = romwright_fabs_4(temp_v17); (int)temp_v17 >= 0x47800000; temp_v17 = temp_v17 - 65536.0f) {
    }
    temp_v5 = VectorFloatToUnsigned(0,3);
    temp_v1 = VectorFloatToUnsigned(0,3);
    temp_v2 = VectorFloatToUnsigned(temp_v17,3);
    temp_v0 = temp_v5 & 0xff;
    temp_v3 = (float)VectorUnsignedToFloat(temp_v5 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v5 = temp_v1 & 0xff;
    temp_v8 = (float)VectorUnsignedToFloat(temp_v1 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v1 = temp_v2 & 0xff;
    temp_v10 = (float)VectorUnsignedToFloat(temp_v2 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v9 = (float)(&DAT_00536d14)[temp_v0 * 4] + (0.0f - temp_v3) * (float)(&DAT_00536d1c)[temp_v0 * 4];
    temp_v11 = (float)(&DAT_00536d14)[temp_v5 * 4] + (0.0f - temp_v8) * (float)(&DAT_00536d1c)[temp_v5 * 4];
    temp_v12 = (float)(&DAT_00536d18)[temp_v0 * 4] + (0.0f - temp_v3) * (float)(&DAT_00536d20)[temp_v0 * 4];
    temp_v56 = (float)(&DAT_00536d18)[temp_v5 * 4] + (0.0f - temp_v8) * (float)(&DAT_00536d20)[temp_v5 * 4]
    ;
    temp_v3 = (float)(&DAT_00536d14)[temp_v1 * 4] +
            (temp_v17 - temp_v10) * (float)(&DAT_00536d1c)[temp_v1 * 4];
    temp_v17 = (float)(&DAT_00536d18)[temp_v1 * 4] +
             (temp_v17 - temp_v10) * (float)(&DAT_00536d20)[temp_v1 * 4];
    if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
      temp_v3 = -temp_v3;
    }
    temp_v47 = temp_v17 * temp_v56;
    temp_v54 = -temp_v11;
    temp_v51 = temp_v3 * temp_v56;
    temp_v55 = temp_v9 * temp_v56;
    temp_v56 = temp_v12 * temp_v56;
    temp_v48 = temp_v9 * temp_v17 * temp_v11 - temp_v12 * temp_v3;
    temp_v49 = temp_v9 * temp_v3 + temp_v12 * temp_v17 * temp_v11;
    fStack_90 = temp_v12 * temp_v3 * temp_v11 - temp_v9 * temp_v17;
    temp_v52 = temp_v12 * temp_v17 + temp_v9 * temp_v3 * temp_v11;
    temp_v50 = 0;
    temp_v53 = 0;
    temp_v57 = 0;
    nn_math_ARMv6_MTX34MultAsm(temp_v58,&temp_v36,&temp_v22);
    nn_math_ARMv6_MTX34MultAsm(temp_v58,temp_v58,&temp_v47);
    nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v33,temp_v58);
    nn_math_ARMv6_VEC3TransformAsm_2A87B4(&temp_v33,&fStack_140);
    nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v18,temp_v58);
    nn_math_ARMv6_VEC3TransformAsm_2A87B4(&temp_v18,&fStack_140);
    temp_v14 = *param_4;
    temp_v12 = param_4[1];
    temp_v13 = param_4[2];
    temp_v3 = temp_v14 - (temp_v18 + *param_4);
    temp_v11 = temp_v12 - (temp_v19 + param_4[1]);
    temp_v17 = temp_v13 - (temp_v20 + param_4[2]);
    temp_v8 = temp_v4 / romwright_sqrt_4(temp_v3 * temp_v3 + temp_v11 * temp_v11 + temp_v17 * temp_v17);
    temp_v17 = temp_v17 * temp_v8;
    temp_v11 = temp_v11 * temp_v8;
    temp_v3 = temp_v3 * temp_v8;
    temp_v10 = temp_v34 * temp_v17 - temp_v35 * temp_v11;
    temp_v9 = temp_v33 * temp_v11 - temp_v34 * temp_v3;
    temp_v8 = temp_v35 * temp_v3 - temp_v33 * temp_v17;
    temp_v4 = temp_v4 / romwright_sqrt_4(temp_v10 * temp_v10 + temp_v8 * temp_v8 + temp_v9 * temp_v9);
    temp_v9 = temp_v9 * temp_v4;
    temp_v10 = temp_v10 * temp_v4;
    temp_v8 = temp_v8 * temp_v4;
    *param_2 = temp_v10;
    param_2[1] = temp_v8;
    param_2[2] = temp_v9;
    temp_v4 = temp_v11 * temp_v9 - temp_v17 * temp_v8;
    temp_v15 = temp_v17 * temp_v10 - temp_v3 * temp_v9;
    temp_v16 = temp_v3 * temp_v8 - temp_v11 * temp_v10;
    param_2[4] = temp_v4;
    param_2[9] = temp_v11;
    param_2[10] = temp_v17;
    param_2[5] = temp_v15;
    param_2[6] = temp_v16;
    param_2[3] = -(temp_v14 * temp_v10 + temp_v12 * temp_v8 + temp_v13 * temp_v9);
    param_2[0xb] = -(temp_v14 * temp_v3 + temp_v12 * temp_v11 + temp_v13 * temp_v17);
    param_2[7] = -(temp_v14 * temp_v4 + temp_v12 * temp_v15 + temp_v13 * temp_v16);
    param_2[8] = temp_v3;
    return;
  }
  FUN_0018a924(&temp_v18,afStack_138);
  FUN_0018a924(&temp_v19,&temp_v20);
  FUN_0018a924(&fStack_140,&temp_v21);
  temp_v4 = temp_v18 * temp_v19 * fStack_140 + temp_v20 * temp_v21;
  temp_v17 = temp_v18 * temp_v20 * fStack_140 - temp_v19 * temp_v21;
  temp_v3 = temp_v18 * temp_v19 * temp_v21 - temp_v20 * fStack_140;
  temp_v11 = temp_v18 * temp_v20 * temp_v21 + temp_v19 * fStack_140;
  *param_2 = temp_v4;
  param_2[1] = afStack_138[0] * fStack_140;
  param_2[2] = temp_v17;
  param_2[3] = -(*param_4 * temp_v4 + param_4[1] * afStack_138[0] * fStack_140) +
               -(param_4[2] * temp_v17);
  param_2[4] = temp_v3;
  param_2[5] = afStack_138[0] * temp_v21;
  param_2[6] = temp_v11;
  param_2[7] = -(*param_4 * temp_v3 + param_4[1] * afStack_138[0] * temp_v21) +
               -(param_4[2] * temp_v11);
  param_2[8] = afStack_138[0] * temp_v19;
  param_2[9] = -temp_v18;
  param_2[10] = afStack_138[0] * temp_v20;
  param_2[0xb] = -(*param_4 * afStack_138[0] * temp_v19 + param_4[1] * -temp_v18) +
                 -(param_4[2] * afStack_138[0] * temp_v20);
  return;
}

