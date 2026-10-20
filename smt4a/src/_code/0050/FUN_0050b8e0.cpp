/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0050b8e0` (_code @ 0x50b8e0, 0x554 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0044b92c(float *);
int FUN_0046722c(int);
int VectorFloatToUnsigned(double, int);
int VectorUnsignedToFloat(unsigned int, int);
int nn_math_ARMv6_MTX34CopyAsm(float *, float *);
int nw_gfx_CalculatedTransform_UpdateRotateFlags(float *);
int nw_gfx_CalculatedTransform_UpdateTranslateFlags(float *);

extern unsigned int DAT_00536d14; /* 0x536d14 */
extern unsigned int DAT_00536d18; /* 0x536d18 */
extern unsigned int DAT_00536d1c; /* 0x536d1c */
extern unsigned int DAT_00536d20; /* 0x536d20 */
extern unsigned int DAT_005c4c2c; /* 0x5c4c2c */
extern float DAT_0064c054; /* 0x64c054 */
extern float DAT_0064c058; /* 0x64c058 */
extern float DAT_0064c05c; /* 0x64c05c */
extern float DAT_0064c060; /* 0x64c060 */
extern float DAT_0064c064; /* 0x64c064 */
extern float DAT_0064c068; /* 0x64c068 */
extern float DAT_0064c06c; /* 0x64c06c */
extern float DAT_0064c070; /* 0x64c070 */
extern float DAT_0064c074; /* 0x64c074 */
extern float DAT_0064c078; /* 0x64c078 */
extern float DAT_0064c07c; /* 0x64c07c */
extern float DAT_0064c080; /* 0x64c080 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
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
extern int FUN_002eba64(unsigned int *);
/* Supplied declaration required: FUN_0044b92c. */
/* Supplied declaration required: FUN_0046722c. */
/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */
/* Supplied declaration required: nw_gfx_CalculatedTransform_UpdateRotateFlags. */
/* Supplied declaration required: nw_gfx_CalculatedTransform_UpdateTranslateFlags. */


unsigned int FUN_0050b8e0(int *param_1,float *param_2,unsigned int param_3,unsigned int *param_4)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 8 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int in_fpscr;
  unsigned int in_s0;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  unsigned long long temp_v16;
  unsigned long long temp_v17;
  unsigned long long temp_v18;
  unsigned long long temp_v19;
  float temp_v20;
  float temp_v21;
  
  puVar1 = (unsigned int *)*param_1;
  temp_v6 = *puVar1;
  temp_v5 = in_s0;
  if ((temp_v6 & 0x10000) != 0) {
    temp_v1 = *param_4;
  }
  else if ((temp_v6 & 0x40) != 0) {
    temp_v1 = puVar1[3];
  }
  else {
    temp_v1 = puVar1[3];
    if (temp_v1 != 0) {
      temp_v0 = (int)(puVar1 + 3) + temp_v1;
    }
    else {
      temp_v0 = 0;
    }
    FUN_0046722c(temp_v0);
    temp_v1 = in_s0;
  }
  temp_v4 = temp_v5;
  if ((temp_v6 & 0x20000) != 0) {
    temp_v5 = param_4[1];
  }
  else {
    puVar1 = (unsigned int *)*param_1;
    if ((*puVar1 & 0x80) != 0) {
      temp_v5 = puVar1[4];
    }
    else {
      temp_v2 = puVar1[4];
      if (temp_v2 != 0) {
        temp_v0 = (int)(puVar1 + 4) + temp_v2;
      }
      else {
        temp_v0 = 0;
      }
      FUN_0046722c(temp_v0);
    }
  }
  temp_v2 = temp_v4;
  if ((temp_v6 & 0x40000) != 0) {
    temp_v4 = param_4[2];
  }
  else {
    puVar1 = (unsigned int *)*param_1;
    if ((*puVar1 & 0x100) != 0) {
      temp_v4 = puVar1[5];
    }
    else {
      temp_v3 = puVar1[5];
      if (temp_v3 != 0) {
        temp_v0 = (int)(puVar1 + 5) + temp_v3;
      }
      else {
        temp_v0 = 0;
      }
      FUN_0046722c(temp_v0);
    }
  }
  temp_v18 = romwright_piece_4_4(temp_v4,temp_v2);
  if ((temp_v6 & 0x80000) != 0) {
    temp_v2 = param_4[3];
  }
  else {
    puVar1 = (unsigned int *)*param_1;
    if ((*puVar1 & 0x200) != 0) {
      temp_v2 = puVar1[6];
    }
    else {
      temp_v4 = puVar1[6];
      if (temp_v4 != 0) {
        temp_v0 = (int)(puVar1 + 6) + temp_v4;
      }
      else {
        temp_v0 = 0;
      }
      FUN_0046722c(temp_v0);
    }
  }
  if ((temp_v6 & 0x100000) != 0) {
    temp_v4 = param_4[4];
  }
  else {
    puVar1 = (unsigned int *)*param_1;
    temp_v4 = (unsigned int)temp_v18;
    if ((*puVar1 & 0x400) != 0) {
      temp_v4 = puVar1[7];
    }
    else {
      temp_v3 = puVar1[7];
      if (temp_v3 != 0) {
        temp_v0 = (int)(puVar1 + 7) + temp_v3;
      }
      else {
        temp_v0 = 0;
      }
      FUN_0046722c(temp_v0);
    }
  }
  temp_v19 = romwright_piece_4_4(temp_v5,temp_v4);
  if ((temp_v6 & 0x200000) != 0) {
    temp_v7 = (float)param_4[5];
  }
  else {
    puVar1 = (unsigned int *)*param_1;
    temp_v7 = (float)temp_v18;
    if ((*puVar1 & 0x800) != 0) {
      temp_v7 = (float)puVar1[8];
    }
    else {
      temp_v5 = puVar1[8];
      if (temp_v5 != 0) {
        temp_v0 = (int)(puVar1 + 8) + temp_v5;
      }
      else {
        temp_v0 = 0;
      }
      FUN_0046722c(temp_v0);
    }
  }
  if ((temp_v6 & 0x800000) != 0) {
    temp_v5 = param_4[6];
  }
  else {
    puVar1 = (unsigned int *)*param_1;
    temp_v5 = (unsigned int)temp_v18;
    if ((*puVar1 & 0x2000) != 0) {
      temp_v5 = puVar1[10];
    }
    else {
      temp_v4 = puVar1[10];
      if (temp_v4 != 0) {
        temp_v0 = (int)(puVar1 + 10) + temp_v4;
      }
      else {
        temp_v0 = 0;
      }
      FUN_0046722c(temp_v0);
    }
  }
  temp_v16 = romwright_piece_4_4(temp_v2,temp_v5);
  if ((temp_v6 & 0x1000000) != 0) {
    temp_v5 = param_4[7];
  }
  else {
    puVar1 = (unsigned int *)*param_1;
    temp_v5 = (unsigned int)temp_v18;
    if ((*puVar1 & 0x4000) != 0) {
      temp_v5 = puVar1[0xb];
    }
    else {
      temp_v4 = puVar1[0xb];
      if (temp_v4 != 0) {
        temp_v0 = (int)(puVar1 + 0xb) + temp_v4;
      }
      else {
        temp_v0 = 0;
      }
      FUN_0046722c(temp_v0);
    }
  }
  temp_v17 = romwright_piece_4_4(temp_v1,temp_v5);
  if ((temp_v6 & 0x2000000) != 0) {
    temp_v8 = (float)param_4[8];
  }
  else {
    puVar1 = (unsigned int *)*param_1;
    temp_v8 = (float)temp_v18;
    if ((*puVar1 & 0x8000) != 0) {
      temp_v8 = (float)puVar1[0xc];
    }
    else {
      temp_v5 = puVar1[0xc];
      if (temp_v5 != 0) {
        temp_v0 = (int)(puVar1 + 0xc) + temp_v5;
      }
      else {
        temp_v0 = 0;
      }
      FUN_0046722c(temp_v0);
    }
  }
  temp_v11 = (float)((unsigned long long)temp_v18 >> 0x20);
  temp_v20 = 0.0f;
  if (param_2 == (float *)0x0) {
    param_2 = (float *)0x0;
  }
  else {
    temp_v21 = 1.0f;
    if (((DAT_005c4c2c & 1) == 0) && (temp_v0 = FUN_002eba64(&DAT_005c4c2c), temp_v0 != 0)) {
      DAT_0064c054 = temp_v21;
      DAT_0064c058 = temp_v20;
      DAT_0064c05c = temp_v20;
      DAT_0064c060 = temp_v20;
      DAT_0064c064 = temp_v20;
      DAT_0064c068 = temp_v21;
      DAT_0064c06c = temp_v20;
      DAT_0064c070 = temp_v20;
      DAT_0064c074 = temp_v20;
      DAT_0064c078 = temp_v20;
      DAT_0064c07c = temp_v21;
      DAT_0064c080 = temp_v20;
    }
    nn_math_ARMv6_MTX34CopyAsm(param_2,&DAT_0064c054);
    param_2[0xc] = temp_v21;
    param_2[0xd] = temp_v21;
    param_2[0xe] = temp_v21;
    param_2[0xf] = 2.87126e-42f;
  }
  param_2[0xc] = (float)((unsigned long long)temp_v17 >> 0x20);
  temp_v9 = (float)((unsigned long long)temp_v16 >> 0x20) * 40.743664f;
  temp_v10 = (float)temp_v19 * 40.743664f;
  param_2[0xd] = (float)((unsigned long long)temp_v19 >> 0x20);
  param_2[0xe] = temp_v11;
  temp_v11 = romwright_fabs_4(temp_v10);
  temp_v5 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v20 <= temp_v7 * 40.743664f) << 0x1d);
  temp_v21 = romwright_fabs_4(temp_v7 * 40.743664f);
  for (temp_v7 = romwright_fabs_4(temp_v9); (int)temp_v7 >= 0x47800000; temp_v7 = temp_v7 - 65536.0f) {
  }
  for (; (int)temp_v11 >= 0x47800000; temp_v11 = temp_v11 - 65536.0f) {
  }
  for (; (int)temp_v21 >= 0x47800000; temp_v21 = temp_v21 - 65536.0f) {
  }
  temp_v6 = VectorFloatToUnsigned(temp_v7,3);
  temp_v2 = VectorFloatToUnsigned(temp_v11,3);
  temp_v3 = VectorFloatToUnsigned(temp_v21,3);
  temp_v1 = temp_v6 & 0xff;
  temp_v4 = temp_v3 & 0xff;
  temp_v15 = (float)VectorUnsignedToFloat(temp_v6 & 0xffff,(unsigned char)(temp_v5 >> 0x16) & 3);
  temp_v6 = temp_v2 & 0xff;
  temp_v13 = (float)VectorUnsignedToFloat(temp_v3 & 0xffff,(unsigned char)(temp_v5 >> 0x16) & 3);
  temp_v12 = (float)VectorUnsignedToFloat(temp_v2 & 0xffff,(unsigned char)(temp_v5 >> 0x16) & 3);
  temp_v14 = (float)(&DAT_00536d14)[temp_v1 * 4] + (temp_v7 - temp_v15) * (float)(&DAT_00536d1c)[temp_v1 * 4];
  temp_v15 = (float)(&DAT_00536d18)[temp_v1 * 4] + (temp_v7 - temp_v15) * (float)(&DAT_00536d20)[temp_v1 * 4];
  temp_v7 = (float)(&DAT_00536d14)[temp_v6 * 4] + (temp_v11 - temp_v12) * (float)(&DAT_00536d1c)[temp_v6 * 4];
  temp_v12 = (float)(&DAT_00536d18)[temp_v6 * 4] + (temp_v11 - temp_v12) * (float)(&DAT_00536d20)[temp_v6 * 4]
  ;
  temp_v11 = (float)(&DAT_00536d14)[temp_v4 * 4] + (temp_v21 - temp_v13) * (float)(&DAT_00536d1c)[temp_v4 * 4]
  ;
  temp_v21 = (float)(&DAT_00536d18)[temp_v4 * 4] + (temp_v21 - temp_v13) * (float)(&DAT_00536d20)[temp_v4 * 4]
  ;
  if (temp_v9 < temp_v20) {
    temp_v14 = -temp_v14;
  }
  if (temp_v10 < temp_v20) {
    temp_v7 = -temp_v7;
  }
  if (!romwright_subpiece_4_1_0(temp_v5 >> 0x1d,0)) {
    temp_v11 = -temp_v11;
  }
  param_2[8] = -temp_v7;
  *param_2 = temp_v21 * temp_v12;
  param_2[4] = temp_v11 * temp_v12;
  param_2[9] = temp_v14 * temp_v12;
  param_2[10] = temp_v15 * temp_v12;
  param_2[1] = temp_v14 * temp_v21 * temp_v7 - temp_v15 * temp_v11;
  param_2[2] = temp_v14 * temp_v11 + temp_v15 * temp_v21 * temp_v7;
  param_2[5] = temp_v15 * temp_v21 + temp_v14 * temp_v11 * temp_v7;
  param_2[6] = temp_v15 * temp_v11 * temp_v7 - temp_v14 * temp_v21;
  param_2[3] = 0.0f;
  param_2[7] = 0.0f;
  param_2[0xb] = 0.0f;
  param_2[3] = (float)temp_v16;
  param_2[7] = (float)temp_v17;
  param_2[0xb] = temp_v8;
  param_2[0xf] = (float)((unsigned int)param_2[0xf] | 0x800);
  if ((~(unsigned int)param_2[0xf] & 8) != 0) {
    temp_v7 = (float)((unsigned int)param_2[0xf] & 0xfffff9ff);
    param_2[0xf] = temp_v7;
    temp_v8 = param_2[0xc];
    if (((temp_v8 == param_2[0xd]) && (temp_v8 == param_2[0xe])) &&
       (param_2[0xf] = (float)((unsigned int)temp_v7 | 0x400), param_2[0xc] == 1.0f)) {
      param_2[0xf] = (float)((unsigned int)temp_v7 | 0x600);
    }
  }
  nw_gfx_CalculatedTransform_UpdateRotateFlags(param_2);
  nw_gfx_CalculatedTransform_UpdateTranslateFlags(param_2);
  FUN_0044b92c(param_2);
  return param_3;
}

} /* extern "C" */
