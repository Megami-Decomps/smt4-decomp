/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c58e0` (_code @ 0x4c58e0, 0x4c4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "battle/BtlMainAccess.h"
#include "romwright_types.h"

extern "C" {

int CONCAT44(...);
int FUN_001568f8(...);
int dataTable04FindById(void);
int FUN_00243d30(...);
int FUN_0028cb6c(void);
int FUN_003e8bb0(...);
int FUN_003f0e20(...);
int FUN_004bf6e0(int);
int FUN_004bfc1c(...);
int FUN_004c3bc0(int, unsigned int);
int FUN_004c5448(...);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(...);

typedef struct fn_004c58e0_arg0 fn_004c58e0_arg0;
struct fn_004c58e0_arg0 {
    byte field_0x0; /* +0x0 */
    unsigned char pad_0x1[0x39];
    ushort field_0x3a; /* +0x3a */
    unsigned char pad_0x3c[0xc8];
    short field_0x104; /* +0x104 */
    short field_0x106; /* +0x106 */
    unsigned char pad_0x108[0x4];
    short field_0x10c; /* +0x10c */
    unsigned char pad_0x10e[0x8];
    ushort field_0x116; /* +0x116 */
};

/* stack frame of param_7: 10 slot(s), 38 byte(s) */
typedef struct {
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned short spC4; /* 0xc4: local_c4 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spD8; /* 0xd8: local_d8 */
} param_7_stack;

extern unsigned int DAT_00571498; /* 0x571498 */
extern unsigned int DAT_0057149c; /* 0x57149c */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Supplied declaration required: btlGetMainState. */
/* Supplied declaration required: FUN_001568f8. */
/* Supplied declaration required: dataTable04FindById. */
/* Supplied declaration required: FUN_00243d30. */
/* Supplied declaration required: FUN_0028cb6c. */
/* Supplied declaration required: FUN_003e8bb0. */
/* Supplied declaration required: FUN_003f0e20. */
/* Supplied declaration required: FUN_004bf6e0. */
/* Supplied declaration required: FUN_004bfc1c. */
/* Supplied declaration required: FUN_004c3bc0. */
/* Supplied declaration required: FUN_004c5448. */


int FUN_004c58e0(fn_004c58e0_arg0 *param_1,int param_2,int param_3,unsigned int param_4,
                unsigned int param_5,int param_6,int param_7)

{
/* irregular: irregular input(s): in_fpscr, in_s0, in_s1; 15 native warning(s); review required */
  char temp_v0;
  unsigned char *pbVar2;
  unsigned char *pbVar3;
  unsigned char *pbVar4;
  int temp_v1;
  int temp_v2;
  unsigned char *pbVar7;
  float *pfVar8;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int in_fpscr;
  unsigned int in_s0;
  float temp_v5;
  float temp_v6;
  unsigned int in_s1;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  unsigned long long temp_v11;
  float temp_v12;
  unsigned long long temp_v13;
  float temp_v14;
  float temp_v15;
  unsigned int temp_v16;
  float temp_v17;
  unsigned long long temp_v18;
  float temp_v19;
  float temp_v20;
  unsigned long long temp_v21;
  float temp_v22;
  unsigned long long temp_v23;
  unsigned long long temp_v24;
  float temp_v25;
  int uStack_c0;
  unsigned int uStack_bc;
  unsigned int uStack_b8;
  unsigned int uStack_b4;
  unsigned int uStack_b0;
  unsigned int temp_v26;
  int iStack_a8;
  unsigned int uStack_a4;
  unsigned int uStack_a0;
  unsigned int uStack_9c;
  unsigned char temp_v27 [2];
  short sStack_96;
  unsigned int uStack_90;
  unsigned int uStack_8c;
  unsigned int uStack_88;
  unsigned int uStack_84;
  unsigned int uStack_80;
  unsigned int uStack_7c;
  unsigned int temp_v28;
  int temp_v29;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned char *temp_v30;
  unsigned int temp_v31;
  
  temp_v21 = romwright_piece_4_4(param_5,in_s1);
  temp_v9 = 1.0f;
  pbVar2 = (unsigned char *)reinterpret_cast<int>(btlGetMainState());
  pbVar3 = pbVar2;
  FUN_001568f8(pbVar2,param_3);
  pbVar4 = pbVar2;
  FUN_001568f8(pbVar2,param_4);
  temp_v30 = pbVar4 + 0x100;
  temp_v5 = (float)VectorUnsignedToFloat
                            ((unsigned int)*(unsigned short *)(pbVar3 + 0x116),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v16 = VectorSignedToFloat((int)*(short *)(pbVar3 + 0x106),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v7 = (float)VectorUnsignedToFloat
                            ((unsigned int)*(unsigned short *)(pbVar4 + 0x116),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v15 = (float)VectorSignedToFloat((int)*(short *)(pbVar3 + 0x104),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v7 = temp_v5 - temp_v7;
  temp_v31 = VectorSignedToFloat((int)*(short *)(pbVar3 + 0x10c),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v18 = romwright_piece_4_4(temp_v31,temp_v16);
  temp_v6 = temp_v5 + 6.0f;
  if ((int)(temp_v5 + 6.0f) < 0x3f800000) {
    temp_v6 = temp_v9;
  }
  if (0xc1200000 < (unsigned int)temp_v7) {
    temp_v7 = -10.0f;
  }
  temp_v5 = temp_v9 + temp_v7 * 0.025f;
  temp_v7 = temp_v5;
  if ((int)temp_v5 >= 0x3f800001) {
    temp_v7 = temp_v9;
  }
  temp_v11 = CONCAT44(temp_v6,temp_v7);
  if (((int)temp_v5 < 0x3f800001) && ((int)temp_v7 < 0x3f400000)) {
    temp_v11 = CONCAT44(temp_v6,0x3f400000);
  }
  temp_v16 = 0x3f4ccccd;
  if ((*pbVar3 & 4) != 0) {
    temp_v16 = 0x3f19999a;
  }
  temp_v13 = romwright_piece_4_4(in_s0,temp_v16);
  temp_v16 = VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_004bf6e0(7);
  temp_v6 = (float)VectorSignedToFloat(param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_004bf6e0(10);
  temp_v23 = CONCAT44(temp_v6,temp_v16);
  FUN_004c3bc0(param_3,param_4);
  temp_v24 = CONCAT44(temp_v9,temp_v6);
  temp_v1 = reinterpret_cast<int>(btlGetMainState());
  temp_v4 = temp_v1;
  FUN_003f0e20(temp_v1,param_3);
  if (temp_v4 != 0) {
    temp_v2 = temp_v1;
    FUN_003f0e20(temp_v1,param_4);
    temp_v0 = '\0';
    if (temp_v2 != 0) {
      temp_v0 = *(char *)(temp_v2 + 0x239);
    }
    if ((temp_v2 != 0 && temp_v0 != '\0') && (FUN_003e8bb0(temp_v27,temp_v1,temp_v4), temp_v29 != 0)) {
      if (temp_v29 == 1) {
        temp_v9 = 1.5f;
      }
      else if (temp_v29 == 2) {
        temp_v9 = 5.0f;
      }
    }
  }
  FUN_004bfc1c(param_3,param_4);
  temp_v6 = (float)temp_v23 * (float)((unsigned long long)temp_v23 >> 0x20) * (float)temp_v24 * temp_v9 * temp_v6;
  pbVar7 = pbVar2;
  FUN_003f0e20(pbVar2,param_3);
  temp_v25 = (float)((unsigned long long)temp_v24 >> 0x20);
  FUN_003e8bb0(temp_v27,pbVar2,pbVar7);
  uStack_c0 = uStack_8c;
  uStack_bc = uStack_88;
  uStack_b8 = uStack_84;
  uStack_b4 = uStack_80;
  uStack_b0 = uStack_7c;
  temp_v26 = temp_v28;
  iStack_a8 = temp_v29;
  uStack_a4 = uStack_70;
  uStack_a0 = uStack_6c;
  uStack_9c = uStack_68;
  FUN_004c5448(param_3,param_1);
  temp_v22 = 0.01f;
  temp_v9 = (float)VectorSignedToFloat(param_6 + param_7,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v7 = (float)VectorUnsignedToFloat(uStack_90 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v7 = temp_v7 * 0.01f;
  temp_v5 = (float)((unsigned long long)temp_v11 >> 0x20);
  temp_v20 = (float)temp_v21;
  temp_v10 = (float)temp_v11;
  temp_v12 = (float)temp_v13;
  temp_v17 = (float)temp_v18;
  temp_v19 = (float)((unsigned long long)temp_v18 >> 0x20);
  temp_v14 = (float)((unsigned long long)temp_v13 >> 0x20);
  if ((int)param_1 < 1) {
    temp_v9 = (float)VectorSignedToFloat((int)((unsigned long long)temp_v21 >> 0x20),
                                        (unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v5 = temp_v5 * 0.45f;
    if (param_2 != 1) {
      temp_v7 = (temp_v5 + temp_v15 * 0.05f + temp_v17 * 0.45f + temp_v19 * 0.05f + temp_v9) * 0.33333334f *
               temp_v14 * temp_v20 * temp_v6 * temp_v12 * temp_v7;
      temp_v10 = temp_v7 * temp_v10;
    }
    else {
      temp_v7 = (temp_v5 + temp_v15 * 0.45f + temp_v17 * 0.05f + temp_v19 * 0.05f + temp_v9) * 0.33333334f *
               temp_v14 * temp_v20 * temp_v6 * temp_v12 * temp_v7;
      temp_v10 = temp_v7 * temp_v10;
    }
  }
  else {
    temp_v8 = temp_v14 * temp_v14 * 0.001f;
    temp_v5 = temp_v5 * 0.45f;
    if (sStack_96 != 1) {
      temp_v7 = (temp_v8 + (temp_v5 + temp_v15 * 0.45f + temp_v17 * 0.05f + temp_v19 * 0.05f) * temp_v14 * 0.01f) *
               temp_v20 * temp_v6 * temp_v12 * temp_v7 * temp_v10;
      temp_v10 = temp_v7 / (temp_v9 * 0.5f);
    }
    else {
      temp_v7 = (temp_v8 + (temp_v5 + temp_v15 * 0.05f + temp_v17 * 0.45f + temp_v19 * 0.05f) * temp_v14 * 0.01f) *
               temp_v20 * temp_v6 * temp_v12 * temp_v7 * temp_v10;
      temp_v10 = temp_v7 / (temp_v9 * 0.5f);
    }
  }
  if (param_3 != 0) {
    temp_v7 = (float)VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v10 = (temp_v25 + temp_v7 * 0.01f) * temp_v10;
  }
  if (!((DAT_00571498 & *(unsigned int *)(pbVar2 + 0x45a0)) != 0 ||
       (DAT_0057149c & *(unsigned int *)(pbVar2 + 0x45a4)) != 0)) {
    if ((*pbVar3 & 4) != 0) {
      if ((*pbVar4 & 4) != 0) {
        FUN_0028cb6c();
        pfVar8 = (float *)FUN_0028cb6c();
        temp_v7 = *pfVar8;
      }
      else {
        FUN_0028cb6c();
        temp_v4 = FUN_0028cb6c();
        temp_v7 = *(float *)(temp_v4 + 8);
      }
    }
    else if ((*pbVar4 & 4) != 0) {
      FUN_0028cb6c();
      pfVar8 = (float *)FUN_0028cb6c();
      temp_v7 = *pfVar8;
    }
    else {
      FUN_0028cb6c();
      temp_v4 = FUN_0028cb6c();
      temp_v7 = *(float *)(temp_v4 + 8);
    }
    temp_v10 = temp_v7 * temp_v10;
  }
  FUN_003f0e20(pbVar2,param_4);
  if (*(int *)(pbVar2 + 0x160) != 0) {
    temp_v7 = (float)VectorUnsignedToFloat
                              (*(int *)(pbVar2 + 0x160) + 100,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v7 = temp_v7 * temp_v22;
    temp_v10 = temp_v7 * temp_v10;
  }
  if (((param_1 != (fn_004c58e0_arg0 *)0x0) && (dataTable04FindById(), param_1 != (fn_004c58e0_arg0 *)0x0))
     && ((short)param_1->field_0x3a < 0)) {
    FUN_00243d30(*(unsigned short *)(temp_v30 + 0x5e) >> 10);
    temp_v10 = temp_v10 * temp_v7;
  }
  temp_v3 = (unsigned int)*(unsigned char *)((int)&uStack_c0 + pbVar4[0x1bc] + 2);
  if (temp_v3 != 0) {
    temp_v6 = (float)VectorUnsignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v10 = temp_v10 * temp_v6 * temp_v22;
  }
  return (int)temp_v10;
}

} /* extern "C" */
