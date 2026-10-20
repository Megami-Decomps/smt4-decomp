/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00193c08` (_code @ 0x193c08, 0x2c4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(unsigned int, double);
int VectorFloatToUnsigned(double, int);
int VectorUnsignedToFloat(unsigned int, int);
int nn_math_ARMv6_MTX34MultAsm(float *, int *, float *);

/* stack frame of param_2: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
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
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Supplied declaration required: nn_math_ARMv6_MTX34MultAsm. */


void FUN_00193c08(int param_1,int param_2)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned char temp_v1;
  unsigned int temp_v2;
  float *pfVar5;
  unsigned int *puVar6;
  unsigned int temp_v3;
  unsigned int *puVar8;
  unsigned int in_fpscr;
  float temp_v4;
  unsigned int temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  unsigned long long temp_v19;
  int temp_v20;
  unsigned int temp_v21;
  unsigned int temp_v22;
  unsigned int temp_v23;
  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned int temp_v24;
  unsigned int temp_v25;
  unsigned int uStack_58;
  unsigned int temp_v26;
  unsigned int uStack_50;
  unsigned int temp_v27;
  int temp_v28;
  int iStack_28;
  
  temp_v3 = 0;
  if (*(int *)(param_2 + 0x10) != 0) {
    temp_v19 = 0x4222f983;
    temp_v16 = 65536.0f;
    temp_v17 = 0.0f;
    temp_v28 = param_1;
    iStack_28 = param_2;
    do {
      puVar8 = (unsigned int *)(*(int *)(param_2 + 0xc) + temp_v3 * 0x40);
      puVar6 = (unsigned int *)(*(int *)(temp_v28 + 0x70) + temp_v3 * 100);
      temp_v0 = puVar6[3];
      temp_v2 = puVar6[4];
      puVar8[1] = puVar6[2];
      puVar8[2] = temp_v0;
      puVar8[3] = temp_v2;
      pfVar5 = (float *)(puVar8 + 4);
      temp_v18 = (float)temp_v19;
      temp_v7 = romwright_fabs_4((float)puVar6[6] * temp_v18);
      in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v17 <= (float)puVar6[7] * temp_v18) << 0x1d);
      temp_v8 = romwright_fabs_4((float)puVar6[7] * temp_v18);
      for (temp_v4 = romwright_fabs_4((float)puVar6[5] * temp_v18); (int)temp_v4 >= 0x47800000; temp_v4 = temp_v4 - temp_v16)
      {
      }
      for (; (int)temp_v7 >= 0x47800000; temp_v7 = temp_v7 - temp_v16) {
      }
      for (; (int)temp_v8 >= 0x47800000; temp_v8 = temp_v8 - temp_v16) {
      }
      temp_v5 = VectorFloatToUnsigned(temp_v4,3);
      temp_v9 = VectorFloatToUnsigned(temp_v7,3);
      temp_v10 = VectorFloatToUnsigned(temp_v8,3);
      temp_v1 = temp_v5;
      temp_v15 = (float)VectorUnsignedToFloat(temp_v5 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v13 = (float)VectorUnsignedToFloat(temp_v9 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v5 = temp_v10 & 0xff;
      temp_v14 = (float)VectorUnsignedToFloat(temp_v10 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v9 = temp_v9 & 0xff;
      temp_v11 = (float)(&DAT_00536d14)[temp_v1 * 4] +
               (temp_v4 - temp_v15) * (float)(&DAT_00536d1c)[temp_v1 * 4];
      temp_v19 = CONCAT44((&DAT_00536d1c)[temp_v5 * 4],temp_v18);
      temp_v6 = (float)(&DAT_00536d14)[temp_v9 * 4] +
               (temp_v7 - temp_v13) * (float)(&DAT_00536d1c)[temp_v9 * 4];
      temp_v12 = (float)(&DAT_00536d14)[temp_v5 * 4] +
               (temp_v8 - temp_v14) * (float)(&DAT_00536d1c)[temp_v5 * 4];
      temp_v4 = (float)(&DAT_00536d18)[temp_v1 * 4] +
              (temp_v4 - temp_v15) * (float)(&DAT_00536d20)[temp_v1 * 4];
      temp_v7 = (float)(&DAT_00536d18)[temp_v9 * 4] +
               (temp_v7 - temp_v13) * (float)(&DAT_00536d20)[temp_v9 * 4];
      temp_v8 = (float)(&DAT_00536d18)[temp_v5 * 4] +
               (temp_v8 - temp_v14) * (float)(&DAT_00536d20)[temp_v5 * 4];
      if ((float)puVar6[5] * temp_v18 < temp_v17) {
        temp_v11 = -temp_v11;
      }
      if ((float)puVar6[6] * temp_v18 < temp_v17) {
        temp_v6 = -temp_v6;
      }
      if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
        temp_v12 = -temp_v12;
      }
      *pfVar5 = temp_v8 * temp_v7;
      *(float *)&puVar8[8] = temp_v12 * temp_v7;
      *(float *)&puVar8[0xd] = temp_v11 * temp_v7;
      *(float *)&puVar8[0xe] = temp_v4 * temp_v7;
      puVar8[10] = temp_v4 * temp_v12 * temp_v6 - temp_v11 * temp_v8;
      puVar8[9] = temp_v4 * temp_v8 + temp_v11 * temp_v12 * temp_v6;
      *(float *)&puVar8[0xc] = -temp_v6;
      puVar8[5] = temp_v11 * temp_v8 * temp_v6 - temp_v4 * temp_v12;
      puVar8[6] = temp_v11 * temp_v12 + temp_v4 * temp_v8 * temp_v6;
      puVar8[7] = 0;
      puVar8[0xb] = 0;
      puVar8[0xf] = 0;
      temp_v21 = 0;
      temp_v20 = 0x3f800000;
      temp_v22 = 0;
      temp_v23 = puVar6[8];
      uStack_68 = 0;
      uStack_64 = 0x3f800000;
      temp_v24 = 0;
      temp_v25 = puVar6[9];
      uStack_58 = 0;
      temp_v26 = 0;
      uStack_50 = 0x3f800000;
      temp_v27 = puVar6[10];
      nn_math_ARMv6_MTX34MultAsm(pfVar5,&temp_v20,pfVar5);
      *puVar8 = *puVar6;
      puVar1 = (unsigned int *)(*(int *)(param_2 + 0xc) + temp_v3 * 0x40);
      temp_v3 = temp_v3 + 1;
      *puVar1 = *puVar1 | 2;
    } while (temp_v3 < *(unsigned int *)(param_2 + 0x10));
  }
  return;
}

} /* extern "C" */
