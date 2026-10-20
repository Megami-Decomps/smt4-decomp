/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c4178` (_code @ 0x4c4178, 0x43c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(...);
int btlGetMainState(void);
int FUN_001568f8(...);
int FUN_001aba54(void);
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

typedef struct fn_004c4178_arg0 fn_004c4178_arg0;
struct fn_004c4178_arg0 {
    byte field_0x0; /* +0x0 */
    unsigned char pad_0x1[0x39];
    unsigned char field_0x3a; /* +0x3a */
    unsigned char pad_0x3b[0xcd];
    short field_0x108; /* +0x108 */
    short field_0x10a; /* +0x10a */
    short field_0x10c; /* +0x10c */
    unsigned char pad_0x10e[0x8];
    ushort field_0x116; /* +0x116 */
};

/* stack frame of param_5: 10 slot(s), 35 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spF0; /* 0xf0: local_f0 */
    unsigned char spFA; /* 0xfa: local_fa */
    unsigned int sp10C; /* 0x10c: local_10c */
    unsigned short sp124; /* 0x124: local_124 */
    unsigned int sp12C; /* 0x12c: local_12c */
    unsigned int sp130; /* 0x130: local_130 */
} param_5_stack;

extern unsigned int DAT_00571498; /* 0x571498 */
extern unsigned int DAT_0057149c; /* 0x57149c */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Supplied declaration required: btlGetMainState. */
/* Supplied declaration required: FUN_001568f8. */
/* Supplied declaration required: FUN_001aba54. */
/* Supplied declaration required: FUN_00243d30. */
/* Supplied declaration required: FUN_0028cb6c. */
/* Supplied declaration required: FUN_003e8bb0. */
/* Supplied declaration required: FUN_003f0e20. */
/* Supplied declaration required: FUN_004bf6e0. */
/* Supplied declaration required: FUN_004bfc1c. */
/* Supplied declaration required: FUN_004c3bc0. */
/* Supplied declaration required: FUN_004c5448. */


int FUN_004c4178(fn_004c4178_arg0 *param_1,int param_2,unsigned int param_3,int param_4,int param_5)

{
/* irregular: irregular input(s): in_fpscr, in_s0, in_s1; 14 native warning(s); review required */
  char temp_v0;
  unsigned char *pbVar2;
  unsigned char *pbVar3;
  int temp_v1;
  int temp_v2;
  unsigned char *pbVar6;
  float *pfVar7;
  fn_004c4178_arg0 *pfVar8;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v5;
  unsigned int in_s1;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  unsigned long long temp_v11;
  unsigned long long temp_v12;
  float temp_v13;
  unsigned long long temp_v14;
  unsigned int temp_v15;
  unsigned long long temp_v16;
  float temp_v17;
  unsigned int temp_v18;
  unsigned long long temp_v19;
  int uStack_120;
  unsigned int uStack_11c;
  unsigned int uStack_118;
  unsigned int uStack_114;
  unsigned int uStack_110;
  unsigned int temp_v20;
  unsigned int uStack_108;
  unsigned int uStack_104;
  unsigned int uStack_100;
  unsigned int uStack_fc;
  unsigned char *temp_v21;
  unsigned char temp_v22 [8];
  unsigned int uStack_d4;
  unsigned int uStack_d0;
  int uStack_cc;
  unsigned int uStack_c8;
  unsigned int uStack_c4;
  unsigned int uStack_c0;
  unsigned int temp_v23;
  unsigned int uStack_b8;
  unsigned int uStack_b4;
  unsigned int uStack_b0;
  unsigned int uStack_ac;
  int temp_v24;
  fn_004c4178_arg0 *temp_v25;
  int iStack_30;
  unsigned int uStack_2c;
  int iStack_28;
  unsigned int temp_v26;
  
  temp_v8 = 1.0f;
  temp_v25 = param_1;
  iStack_30 = param_2;
  uStack_2c = param_3;
  iStack_28 = param_4;
  pbVar2 = (unsigned char *)btlGetMainState();
  temp_v21 = pbVar2;
  FUN_001568f8(pbVar2,param_2);
  pbVar3 = temp_v21;
  FUN_001568f8(temp_v21,param_3);
  temp_v10 = (float)VectorUnsignedToFloat
                            ((unsigned int)*(unsigned short *)(pbVar2 + 0x116),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v15 = VectorSignedToFloat((int)*(short *)(pbVar2 + 0x108),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v5 = (float)VectorUnsignedToFloat
                            ((unsigned int)*(unsigned short *)(pbVar3 + 0x116),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v18 = VectorSignedToFloat((int)*(short *)(pbVar2 + 0x10a),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v7 = temp_v10 + 6.0f;
  temp_v5 = temp_v10 - temp_v5;
  temp_v26 = VectorSignedToFloat((int)*(short *)(pbVar2 + 0x10c),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v19 = romwright_piece_4_4(temp_v26,temp_v18);
  temp_v12 = CONCAT44(temp_v7,in_s1);
  if ((int)temp_v7 < 0x3f800000) {
    temp_v7 = temp_v8;
  }
  if (0xc1200000 < (unsigned int)temp_v5) {
    temp_v5 = -10.0f;
  }
  temp_v9 = temp_v8 + temp_v5 * 0.025f;
  temp_v5 = temp_v8;
  if (((int)temp_v9 < 0x3f800001) && (temp_v5 = temp_v9, (int)temp_v9 < 0x3f400000)) {
    temp_v5 = 0.75f;
  }
  temp_v18 = 0x3f4ccccd;
  if ((*pbVar2 & 4) != 0) {
    temp_v18 = 0x3f19999a;
  }
  temp_v11 = CONCAT44(temp_v10,temp_v18);
  temp_v18 = VectorSignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_004bf6e0(8);
  temp_v9 = (float)VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_004bf6e0(10);
  temp_v14 = CONCAT44(temp_v9,temp_v18);
  FUN_004c3bc0(param_2,param_3);
  temp_v16 = CONCAT44(temp_v15,temp_v9);
  temp_v10 = temp_v8;
  temp_v1 = btlGetMainState();
  temp_v4 = temp_v1;
  FUN_003f0e20(temp_v1,param_2);
  if (temp_v4 != 0) {
    temp_v2 = temp_v1;
    FUN_003f0e20(temp_v1,param_3);
    temp_v0 = '\0';
    if (temp_v2 != 0) {
      temp_v0 = *(char *)(temp_v2 + 0x239);
    }
    if ((temp_v2 != 0 && temp_v0 != '\0') && (FUN_003e8bb0(&uStack_cc,temp_v1,temp_v4), temp_v24 != 0)) {
      if (temp_v24 == 1) {
        temp_v8 = 1.5f;
      }
      else if (temp_v24 == 2) {
        temp_v8 = 5.0f;
      }
    }
  }
  FUN_004bfc1c(param_2,param_3);
  temp_v9 = (float)temp_v14 * (float)((unsigned long long)temp_v14 >> 0x20) * (float)temp_v16 * temp_v8 * temp_v9;
  pbVar6 = temp_v21;
  FUN_003f0e20(temp_v21,param_2);
  temp_v17 = (float)((unsigned long long)temp_v16 >> 0x20);
  FUN_003e8bb0(temp_v22,temp_v21,pbVar6);
  uStack_120 = uStack_d0;
  uStack_11c = uStack_cc;
  uStack_118 = uStack_c8;
  uStack_114 = uStack_c4;
  uStack_110 = uStack_c0;
  temp_v20 = temp_v23;
  uStack_108 = uStack_b8;
  uStack_104 = uStack_b4;
  uStack_100 = uStack_b0;
  uStack_fc = uStack_ac;
  FUN_004c5448(param_2,temp_v25);
  temp_v13 = 0.01f;
  temp_v6 = (float)VectorUnsignedToFloat(uStack_d4 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v8 = (float)VectorSignedToFloat(param_4 + param_5,(unsigned char)(in_fpscr >> 0x16) & 3);
  if ((*(unsigned char *)((unsigned char *)&uStack_fc + 2)) != '\0') {
    temp_v7 = (float)((unsigned long long)temp_v12 >> 0x20) * 0.5f +
             (float)((unsigned long long)temp_v11 >> 0x20) * 0.5f * in_s0 * 0.01f;
  }
  else {
    temp_v7 = (temp_v7 * 0.45f + temp_v17 * 0.45f + (float)temp_v19 * 0.05f +
             (float)((unsigned long long)temp_v19 >> 0x20) * 0.05f) * in_s0 * 0.01f;
  }
  temp_v5 = (temp_v7 + in_s0 * in_s0 * 0.006666667f) * (float)temp_v12 * temp_v9 * (float)temp_v11 *
           temp_v6 * 0.01f * temp_v5;
  temp_v7 = temp_v5 / (temp_v8 * 0.5f);
  if (param_2 != 0) {
    temp_v5 = (float)VectorSignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v7 = (temp_v10 + temp_v5 * 0.01f) * temp_v7;
  }
  if (!((*(unsigned int *)(temp_v21 + 0x45a0) & DAT_00571498) != 0 ||
       (*(unsigned int *)(temp_v21 + 0x45a4) & DAT_0057149c) != 0)) {
    if ((*pbVar2 & 4) != 0) {
      if ((*pbVar3 & 4) != 0) {
        FUN_0028cb6c();
        pfVar7 = (float *)FUN_0028cb6c();
        temp_v5 = *pfVar7;
      }
      else {
        FUN_0028cb6c();
        temp_v4 = FUN_0028cb6c();
        temp_v5 = *(float *)(temp_v4 + 8);
      }
    }
    else if ((*pbVar3 & 4) != 0) {
      FUN_0028cb6c();
      pfVar7 = (float *)FUN_0028cb6c();
      temp_v5 = *pfVar7;
    }
    else {
      FUN_0028cb6c();
      temp_v4 = FUN_0028cb6c();
      temp_v5 = *(float *)(temp_v4 + 8);
    }
    temp_v7 = temp_v5 * temp_v7;
  }
  pbVar2 = temp_v21;
  FUN_003f0e20(temp_v21,param_3);
  if (*(int *)(pbVar2 + 0x160) != 0) {
    temp_v5 = (float)VectorUnsignedToFloat
                              (*(int *)(pbVar2 + 0x160) + 100,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v5 = temp_v5 * temp_v13;
    temp_v7 = temp_v5 * temp_v7;
  }
  if (((temp_v25 != (fn_004c4178_arg0 *)0x0) &&
      (pfVar8 = temp_v25, FUN_001aba54(), pfVar8 != (fn_004c4178_arg0 *)0x0)) &&
     (*(short *)&pfVar8->field_0x3a < 0)) {
    FUN_00243d30(*(unsigned short *)(pbVar3 + 0x15e) >> 10);
    temp_v7 = temp_v7 * temp_v5;
  }
  temp_v3 = (unsigned int)*(unsigned char *)((int)&uStack_120 + pbVar3[0x1bc] + 2);
  if (temp_v3 != 0) {
    temp_v5 = (float)VectorUnsignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v7 = temp_v7 * temp_v5 * temp_v13;
  }
  return (int)temp_v7;
}

} /* extern "C" */
