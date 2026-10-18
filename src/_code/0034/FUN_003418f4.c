/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003418f4` (_code @ 0x3418f4, 0x8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char LAB_0015555c; /* 0x15555c */
extern unsigned int DAT_00407fc0; /* 0x407fc0 */
extern unsigned int DAT_00407fc4; /* 0x407fc4 */
extern unsigned int DAT_00407fc8; /* 0x407fc8 */
extern unsigned int DAT_00407fcc; /* 0x407fcc */
extern unsigned int DAT_00476634; /* 0x476634 */
extern int DAT_004efd6c; /* 0x4efd6c */
extern float DAT_004efd70; /* 0x4efd70 */
extern float DAT_004efd74; /* 0x4efd74 */
extern float DAT_004efd78; /* 0x4efd78 */
extern float DAT_004efd7c; /* 0x4efd7c */
extern int DAT_004efd80; /* 0x4efd80 */
extern float DAT_004efd84; /* 0x4efd84 */
extern float DAT_004efd88; /* 0x4efd88 */
extern float DAT_004efd8c; /* 0x4efd8c */
extern float DAT_004efd90; /* 0x4efd90 */
extern int DAT_004efd94; /* 0x4efd94 */
extern float DAT_004efd98; /* 0x4efd98 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
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
/* Supplied declaration required: FUN_00244f04. */
/* Supplied declaration required: FUN_00244f20. */
extern int FUN_00245478(int, int);
extern int FUN_002a3494(unsigned int);
/* Supplied declaration required: FUN_002a88dc. */
/* Supplied declaration required: FUN_002a8948. */
/* Supplied declaration required: FUN_002ad6d8. */
/* Supplied declaration required: FUN_002af604. */
/* Supplied declaration required: FUN_002c00b4. */
extern int FUN_002c00d4(unsigned int *);
/* Supplied declaration required: FUN_002c1ffc. */
/* Supplied declaration required: FUN_002c20a8. */
/* Supplied declaration required: FUN_002c5218. */
/* Supplied declaration required: FUN_002cba48. */


void FUN_003418f4(int *param_1,int param_2,int param_3,unsigned int param_4)

{
/* irregular: 2 goto(s); irregular input(s): in_fpscr; 14 native warning(s); review required */
  unsigned char temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  unsigned int *puVar4;
  unsigned int *puVar5;
  float *pfVar6;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar9;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int *puVar12;
  unsigned char temp_v6;
  int temp_v7;
  unsigned int in_fpscr;
  unsigned int temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  unsigned long long temp_v21;
  float temp_v22;
  float temp_v23;
  unsigned long long temp_v24;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_a0;
  unsigned char temp_v25 [4];
  unsigned char temp_v26 [16];
  float fStack_88;
  float fStack_84;
  float fStack_80;
  unsigned int uStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  unsigned int uStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  unsigned int uStack_5c;
  unsigned char temp_v27 [20];
  int iStack_28;
  
  if (param_2 < 0) {
    return;
  }
  (*(unsigned long long *)((unsigned char *)&temp_v27 + 16)) = romwright_piece_4_4(param_4,(*(unsigned int *)((unsigned char *)&temp_v27 + 16)));
  if (*param_1 <= param_2) {
    return;
  }
  param_1[1] = param_2;
  temp_v7 = param_1[param_2 + 0x15b];
  temp_v2 = *(int *)(temp_v7 + 0x68);
  temp_v4 = *(int *)(temp_v7 + 0x78);
  param_1[0x581] = *(int *)(temp_v7 + 0x58);
  param_1[0x582] = temp_v2;
  param_1[0x583] = temp_v4;
  piVar2 = (int *)FUN_002a8948(temp_v7);
  temp_v4 = piVar2[1];
  temp_v2 = piVar2[2];
  param_1[0x584] = *piVar2;
  param_1[0x585] = temp_v4;
  param_1[0x586] = temp_v2;
  FUN_002cba48(temp_v7,0);
  FUN_00244f20(1);
  if (-1 < param_3) {
    temp_v8 = 0;
    temp_v2 = param_1[param_2 * 0x20 + param_3 + 0x17b];
    *(unsigned int *)(temp_v2 + 0x3c) = 0;
    *(unsigned int *)(temp_v2 + 0x38) = 0;
    *(unsigned char *)(temp_v2 + 0x58) = 1;
    temp_v2 = param_1[param_2 * 0x20 + param_3 + 0x17b];
    *(unsigned int *)(temp_v2 + 0x44) = 0;
    in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f <= *(float *)(temp_v2 + 0x38)) << 0x1d);
    if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
      (**(romwright_code **)(temp_v2 + 0x4c))(*(unsigned int *)(temp_v2 + 0x50));
      temp_v1 = *(unsigned int *)(temp_v2 + 0x38);
      *(unsigned int *)(temp_v2 + 0x38) = temp_v8;
      *(unsigned int *)(temp_v2 + 0x3c) = temp_v1;
      *(unsigned char *)(temp_v2 + 0x58) = 1;
    }
    temp_v2 = param_1[param_2 * 0x20 + param_3 + 0x17b];
    *(unsigned char **)(temp_v2 + 0x4c) = &LAB_0015555c;
    *(unsigned char *)(temp_v2 + 0x58) = 1;
    temp_v4 = param_1[param_2 * 0x20 + param_3 + 0x17b];
    temp_v2 = FUN_00245478(temp_v7,temp_v4);
    if (((temp_v2 != 0) &&
        (temp_v2 = *(int *)(temp_v7 + 0x28), 0 < (*(int *)(temp_v2 + 0x10) - *(int *)(temp_v2 + 0xc)) >> 2)
        ) && (0 < *(int *)(temp_v2 + 0x28))) {
      **(int **)(temp_v2 + 0x1c) = temp_v4;
    }
  }
  temp_v2 = FUN_002a3494(0);
  temp_v4 = *(int *)(temp_v2 + 0xc);
  if (((temp_v4 == 0) || ((temp_v4 != temp_v7 && (FUN_002af604(), temp_v4 == 0)))) &&
     (*(int *)(temp_v7 + 0xc) == 0)) {
    temp_v5 = *(unsigned int *)(temp_v2 + 0x20);
    temp_v3 = temp_v5 & 0x3fffffff;
    if ((*(int *)(temp_v2 + 0x1c) - *(int *)(temp_v2 + 0x18)) >> 2 >= (int)temp_v3) {
      if (temp_v3 != 0) {
        temp_v3 = temp_v3 << 1;
      }
      else {
        temp_v3 = 1;
      }
      if (temp_v3 <= (temp_v5 & 0x3fffffff)) goto LAB_00341b80;
      if ((*(int *)(temp_v2 + 0x14) != 0) && ((temp_v5 & 0xc0000000) == 0x40000000)) {
        puVar4 = (unsigned int *)
                 (**(romwright_code **)(**(int **)(temp_v2 + 0x14) + 8))
                           (*(int **)(temp_v2 + 0x14),temp_v3 << 2,0x20);
        temp_v4 = 0;
        puVar5 = *(unsigned int **)(temp_v2 + 0x18);
        puVar12 = *(unsigned int **)(temp_v2 + 0x1c);
        puVar9 = puVar4;
        if (puVar5 != puVar12) {
          do {
            if (puVar9 != (unsigned int *)0x0) {
              *puVar9 = *puVar5;
            }
            puVar5 = puVar5 + 1;
            puVar9 = puVar9 + 1;
          } while (puVar5 != puVar12);
          temp_v4 = (*(int *)(temp_v2 + 0x1c) - *(int *)(temp_v2 + 0x18)) >> 2;
        }
        if (*(int *)(temp_v2 + 0x18) != 0) {
          (**(romwright_code **)(**(int **)(temp_v2 + 0x14) + 0xc))();
        }
        *(unsigned int **)(temp_v2 + 0x1c) = puVar4 + temp_v4;
        *(unsigned int **)(temp_v2 + 0x18) = puVar4;
        *(unsigned int *)(temp_v2 + 0x20) = (*(unsigned int *)(temp_v2 + 0x20) & 0xc0000000) | temp_v3;
        goto LAB_00341b80;
      }
      temp_v0 = 0;
    }
    else {
LAB_00341b80:
      temp_v0 = 1;
      if (*(int **)(temp_v2 + 0x1c) != (int *)0x0) {
        **(int **)(temp_v2 + 0x1c) = temp_v7;
      }
      *(int *)(temp_v2 + 0x1c) = *(int *)(temp_v2 + 0x1c) + 4;
    }
    if (temp_v0) {
      *(unsigned int *)(temp_v7 + 0xc) = *(unsigned int *)(temp_v2 + 0x10);
    }
  }
  FUN_00244f04(0);
  temp_v2 = FUN_002c5218();
  (*(unsigned long long *)((unsigned char *)&temp_v27 + 16)) = romwright_piece_4_4(temp_v2 + 0x30,(*(unsigned int *)((unsigned char *)&temp_v27 + 16)));
  FUN_002a88dc(temp_v7,temp_v2 + 0x28,temp_v2 + 0x34,temp_v2 + 0x2c);
  *(float *)(temp_v2 + 0x28) = *(float *)(temp_v2 + 0x28) * 57.295776f;
  temp_v2 = param_1[param_1[1] + 0x15b];
  temp_v21 = romwright_piece_4_4(*(unsigned int *)(temp_v2 + 0x68),*(unsigned int *)(temp_v2 + 0x58));
  temp_v22 = *(float *)(temp_v2 + 0x78);
  pfVar6 = (float *)FUN_002a8948(param_1[param_1[1] + 0x15b]);
  temp_v2 = 0x3f800000;
  temp_v20 = 0.0f;
  temp_v23 = *pfVar6;
  temp_v24 = *(unsigned long long *)(pfVar6 + 1);
  if (((DAT_00476634 & 1) == 0) && (temp_v4 = FUN_002c00d4(&DAT_00476634), temp_v4 != 0)) {
    DAT_004efd6c = temp_v2;
    DAT_004efd70 = temp_v20;
    DAT_004efd74 = temp_v20;
    DAT_004efd78 = temp_v20;
    DAT_004efd7c = temp_v20;
    DAT_004efd80 = temp_v2;
    DAT_004efd84 = temp_v20;
    DAT_004efd88 = temp_v20;
    DAT_004efd8c = temp_v20;
    DAT_004efd90 = temp_v20;
    DAT_004efd94 = temp_v2;
    DAT_004efd98 = temp_v20;
  }
  FUN_002c00b4(&fStack_88,&DAT_004efd6c);
  temp_v10 = (float)temp_v24 * 40.764328f;
  temp_v12 = (float)((unsigned long long)temp_v24 >> 0x20) * 40.764328f;
  temp_v11 = romwright_fabs_4(temp_v10);
  temp_v3 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v20 <= temp_v12) << 0x1d);
  temp_v12 = romwright_fabs_4(temp_v12);
  for (temp_v9 = romwright_fabs_4(temp_v23 * 40.764328f); (int)temp_v9 >= 0x47800000; temp_v9 = temp_v9 - 65536.0f) {
  }
  for (; (int)temp_v11 >= 0x47800000; temp_v11 = temp_v11 - 65536.0f) {
  }
  for (; (int)temp_v12 >= 0x47800000; temp_v12 = temp_v12 - 65536.0f) {
  }
  temp_v13 = VectorFloatToUnsigned(temp_v9,3);
  temp_v14 = VectorFloatToUnsigned(temp_v11,3);
  temp_v15 = VectorFloatToUnsigned(temp_v12,3);
  temp_v5 = temp_v13 & 0xff;
  temp_v19 = (float)VectorUnsignedToFloat(temp_v13 & 0xffff,(unsigned char)(temp_v3 >> 0x16) & 3);
  temp_v13 = temp_v14 & 0xff;
  temp_v6 = temp_v15;
  temp_v17 = (float)VectorUnsignedToFloat(temp_v15 & 0xffff,(unsigned char)(temp_v3 >> 0x16) & 3);
  temp_v16 = (float)VectorUnsignedToFloat(temp_v14 & 0xffff,(unsigned char)(temp_v3 >> 0x16) & 3);
  temp_v18 = (float)(&DAT_00407fc0)[temp_v5 * 4] +
           (temp_v9 - temp_v19) * (float)(&DAT_00407fc8)[temp_v5 * 4];
  temp_v19 = (float)(&DAT_00407fc4)[temp_v5 * 4] +
           (temp_v9 - temp_v19) * (float)(&DAT_00407fcc)[temp_v5 * 4];
  temp_v9 = (float)(&DAT_00407fc0)[temp_v13 * 4] +
           (temp_v11 - temp_v16) * (float)(&DAT_00407fc8)[temp_v13 * 4];
  fStack_60 = (float)(&DAT_00407fc4)[temp_v13 * 4] +
              (temp_v11 - temp_v16) * (float)(&DAT_00407fcc)[temp_v13 * 4];
  temp_v11 = (float)(&DAT_00407fc0)[temp_v6 * 4] +
           (temp_v12 - temp_v17) * (float)(&DAT_00407fc8)[temp_v6 * 4];
  temp_v12 = (float)(&DAT_00407fc4)[temp_v6 * 4] +
           (temp_v12 - temp_v17) * (float)(&DAT_00407fcc)[temp_v6 * 4];
  if (temp_v23 * 40.764328f < temp_v20) {
    temp_v18 = -temp_v18;
  }
  if (temp_v10 < temp_v20) {
    temp_v9 = -temp_v9;
  }
  if (!romwright_subpiece_4_1_0(temp_v3 >> 0x1d,0)) {
    temp_v11 = -temp_v11;
  }
  fStack_88 = temp_v12 * fStack_60;
  fStack_68 = -temp_v9;
  fStack_78 = temp_v11 * fStack_60;
  fStack_64 = temp_v18 * fStack_60;
  fStack_60 = temp_v19 * fStack_60;
  fStack_84 = temp_v18 * temp_v12 * temp_v9 - temp_v19 * temp_v11;
  fStack_70 = temp_v19 * temp_v11 * temp_v9 - temp_v18 * temp_v12;
  fStack_80 = temp_v18 * temp_v11 + temp_v19 * temp_v12 * temp_v9;
  fStack_74 = temp_v19 * temp_v12 + temp_v18 * temp_v11 * temp_v9;
  uStack_7c = 0;
  uStack_6c = 0;
  uStack_5c = 0;
  fStack_c0 = -1.0f;
  fStack_c8 = temp_v20;
  fStack_c4 = temp_v20;
  FUN_002ad6d8(&fStack_c8,&fStack_88);
  param_1[0x14d] = (int)(float)temp_v21;
  temp_v23 = (float)((unsigned long long)temp_v21 >> 0x20);
  param_1[0x14e] = (int)temp_v23;
  param_1[0x14f] = (int)temp_v22;
  param_1[0x150] = (int)((float)temp_v21 + fStack_c8);
  param_1[0x151] = (int)(temp_v23 + fStack_c4);
  param_1[0x152] = (int)(temp_v22 + fStack_c0);
  fStack_c8 = temp_v20;
  fStack_c4 = (float)temp_v2;
  fStack_c0 = temp_v20;
  FUN_002ad6d8(&fStack_c8,&fStack_88);
  param_1[0x157] = (int)fStack_c8;
  param_1[0x158] = (int)fStack_c4;
  param_1[0x159] = (int)fStack_c0;
  temp_v8 = FUN_002c5218();
  FUN_002c20a8(temp_v8,param_1 + 0x14d,param_1 + 0x150,param_1 + 0x157);
  FUN_002a88dc(param_1[param_1[1] + 0x15b],&fStack_a0,temp_v27,temp_v26,temp_v25);
  fStack_a0 = fStack_a0 * 180.0f * 0.31830987f;
  FUN_002c1ffc(temp_v8,1);
  return;
}
