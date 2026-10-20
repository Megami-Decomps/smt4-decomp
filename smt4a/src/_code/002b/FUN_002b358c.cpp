/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b358c` (_code @ 0x2b358c, 0x5cc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int renderCtxResetColorScale(...);
int FUN_0016c4b8(unsigned int, unsigned int);
int skinObjectUpdateMatrices(...);
int FUN_00184c4c(...);
int FUN_00186940(void);
int FUN_0018a924(...);
int FUN_0019a0fc(...);
int FUN_001bced4(...);
int FUN_001d3e54(...);
int FUN_002371b0(void);
int FUN_002b3538(...);
int FUN_00409c60(...);
int VectorUnsignedToFloat(unsigned int, int);
int nn_math_ARMv6_MTX44TransposeAsm(...);

typedef struct fn_002b358c_arg0 fn_002b358c_arg0;
typedef struct fn_002b358c_arg0_p18 fn_002b358c_arg0_p18;
struct fn_002b358c_arg0 {
    unsigned char pad_0x0[0x4];
    int field_0x4; /* +0x4 */
    unsigned char field_0x8; /* +0x8 */
    unsigned char pad_0x9[0xb];
    uint field_0x14; /* +0x14 */
    fn_002b358c_arg0_p18 *field_0x18; /* +0x18 */
    unsigned char pad_0x1c[0x14];
    unsigned char field_0x30; /* +0x30 */
    unsigned char pad_0x31[0x7];
    unsigned char field_0x38; /* +0x38 */
    unsigned char pad_0x39[0x3];
    unsigned char field_0x3c; /* +0x3c */
    unsigned char pad_0x3d[0x3];
    unsigned char field_0x40; /* +0x40 */
    unsigned char pad_0x41[0x1f];
    int field_0x60; /* +0x60 */
    byte field_0x64; /* +0x64 */
    byte field_0x65; /* +0x65 */
    byte field_0x66; /* +0x66 */
    byte field_0x67; /* +0x67 */
    unsigned char pad_0x68[0x40];
    uint field_0xa8; /* +0xa8 */
};
struct fn_002b358c_arg0_p18 {
    unsigned char pad_0x0[0x4];
    unsigned char field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x3];
    unsigned char field_0x8; /* +0x8 */
    unsigned char pad_0x9[0xb];
    unsigned char field_0x14; /* +0x14 */
    unsigned char pad_0x15[0x3];
    unsigned char field_0x18; /* +0x18 */
    unsigned char pad_0x19[0x17];
    undefined4 field_0x30; /* +0x30 */
    unsigned char pad_0x34[0x4];
    undefined4 field_0x38; /* +0x38 */
    undefined4 field_0x3c; /* +0x3c */
};

/* stack frame of param_1: 64 slot(s), 256 byte(s) */
typedef struct {
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned int spE8; /* 0xe8: local_e8 */
    unsigned int spF0; /* 0xf0: local_f0 */
    unsigned int spF4; /* 0xf4: local_f4 */
    unsigned int spF8; /* 0xf8: local_f8 */
    unsigned int sp100; /* 0x100: local_100 */
    unsigned int sp104; /* 0x104: local_104 */
    unsigned int sp108; /* 0x108: local_108 */
    unsigned int sp110; /* 0x110: local_110 */
    unsigned int sp114; /* 0x114: local_114 */
    unsigned int sp118; /* 0x118: local_118 */
    unsigned int sp120; /* 0x120: local_120 */
    unsigned int sp124; /* 0x124: local_124 */
    unsigned int sp128; /* 0x128: local_128 */
    unsigned int sp12C; /* 0x12c: local_12c */
    unsigned int sp130; /* 0x130: local_130 */
    unsigned int sp138; /* 0x138: local_138 */
    unsigned int sp140; /* 0x140: local_140 */
    unsigned int sp148; /* 0x148: local_148 */
    unsigned int sp154; /* 0x154: local_154 */
    unsigned int sp158; /* 0x158: local_158 */
    unsigned int sp15C; /* 0x15c: local_15c */
    unsigned int sp160; /* 0x160: local_160 */
    unsigned int sp164; /* 0x164: local_164 */
    unsigned int sp174; /* 0x174: local_174 */
    unsigned int sp184; /* 0x184: local_184 */
    unsigned int sp194; /* 0x194: local_194 */
    unsigned int sp198; /* 0x198: local_198 */
    unsigned int sp19C; /* 0x19c: local_19c */
    unsigned int sp1A0; /* 0x1a0: local_1a0 */
    unsigned int sp1A8; /* 0x1a8: local_1a8 */
    unsigned int sp1AC; /* 0x1ac: local_1ac */
    unsigned int sp1B0; /* 0x1b0: local_1b0 */
    unsigned int sp1B4; /* 0x1b4: local_1b4 */
    unsigned int sp1B8; /* 0x1b8: local_1b8 */
    unsigned int sp1BC; /* 0x1bc: local_1bc */
    unsigned int sp1C0; /* 0x1c0: local_1c0 */
    unsigned int sp1CC; /* 0x1cc: local_1cc */
    unsigned int sp1D0; /* 0x1d0: local_1d0 */
    unsigned int sp1D4; /* 0x1d4: local_1d4 */
    unsigned int sp1D8; /* 0x1d8: local_1d8 */
    unsigned int sp1DC; /* 0x1dc: local_1dc */
    unsigned int sp1F8; /* 0x1f8: local_1f8 */
} param_1_stack;

extern unsigned int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: renderCtxResetColorScale. */
/* Supplied declaration required: FUN_0016c4b8. */
/* Supplied declaration required: skinObjectUpdateMatrices. */
/* Supplied declaration required: FUN_00184c4c. */
/* Supplied declaration required: FUN_00186940. */
/* Supplied declaration required: FUN_0018a924. */
/* Supplied declaration required: FUN_0019a0fc. */
/* Supplied declaration required: FUN_001bced4. */
/* Supplied declaration required: FUN_001d3e54. */
/* Supplied declaration required: FUN_002371b0. */
/* Supplied declaration required: FUN_002b3538. */
/* Supplied declaration required: FUN_00409c60. */
/* Supplied declaration required: nn_math_ARMv6_MTX44TransposeAsm. */


void FUN_002b358c(fn_002b358c_arg0 *param_1)

{
/* irregular: irregular input(s): in_fpscr; 14 native warning(s); review required */
  float *pfVar1;
  unsigned int *puVar2;
  fn_002b358c_arg0_p18 *pfVar3;
  unsigned int temp_v0;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  unsigned int *puVar8;
  unsigned int in_fpscr;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  unsigned long long temp_v4;
  float temp_v5;
  unsigned long long temp_v6;
  int temp_v7;
  float *temp_v8;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  float fStack_1a4;
  float temp_v19;
  float temp_v20;
  float temp_v21;
  float temp_v22;
  unsigned char temp_v23 [12];
  unsigned int temp_v24;
  unsigned int temp_v25;
  unsigned int temp_v26;
  unsigned int temp_v27;
  unsigned int temp_v28;
  unsigned int temp_v29;
  unsigned int temp_v30;
  unsigned int temp_v31;
  int temp_v32;
  unsigned int *temp_v33;
  int iStack_134;
  float *temp_v34;
  int temp_v35;
  float temp_v36;
  float temp_v37;
  float temp_v38;
  float temp_v39;
  float temp_v40;
  float temp_v41;
  float temp_v42;
  float temp_v43;
  float temp_v44;
  float temp_v45;
  float temp_v46;
  float temp_v47;
  float temp_v48;
  float temp_v49;
  float fStack_e0;
  float temp_v50;
  float temp_v51;
  float temp_v52;
  float temp_v53;
  float temp_v54;
  float temp_v55;
  float temp_v56;
  float temp_v57;
  float temp_v58;
  float temp_v59;
  float temp_v60;
  float temp_v61;
  float temp_v62;
  unsigned char temp_v63 [64];
  unsigned int *temp_v64;
  int iStack_64;
  int temp_v65;
  int temp_v66;
  fn_002b358c_arg0 *temp_v67;
  int temp_v68;
  unsigned int *temp_v69;
  float temp_v70;
  float temp_v71 [9];
  
  skinObjectUpdateMatrices(g_renderCtx);
  temp_v7 = param_1->field_0x4;
  if (param_1->field_0x60 < param_1->field_0x4) {
    temp_v7 = param_1->field_0x60;
  }
  if ((param_1->field_0x14 & 1) != 0) {
    FUN_002b3538(param_1,1,&temp_v8);
  }
  if ((param_1->field_0x14 & 2) != 0) {
    FUN_002b3538(param_1,2,&temp_v64);
  }
  if ((param_1->field_0x14 & 4) != 0) {
    FUN_002b3538(param_1,4,&temp_v34);
  }
  if ((param_1->field_0x14 & 0x20) != 0) {
    FUN_002b3538(param_1,0x20,&temp_v65);
  }
  if ((param_1->field_0x14 & 0x80) != 0) {
    FUN_002b3538(param_1,0x80,&temp_v33);
  }
  if ((param_1->field_0x14 & 8) != 0) {
    FUN_002b3538(param_1,8,&temp_v33);
  }
  else if ((param_1->field_0x14 & 0x80000) != 0) {
    temp_v33 = (unsigned int *)&param_1->field_0x40;
    iStack_134 = 0;
  }
  FUN_0016c4b8(g_renderCtx,*(unsigned int *)&param_1[1].field_0x8);
  VectorUnsignedToFloat((unsigned int)param_1->field_0x67,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorUnsignedToFloat((unsigned int)param_1->field_0x66,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorUnsignedToFloat((unsigned int)param_1->field_0x65,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorUnsignedToFloat((unsigned int)param_1->field_0x64,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00409c60(g_renderCtx,(unsigned int)param_1->field_0x66,(unsigned int)param_1->field_0x65,
               (unsigned int)param_1->field_0x64);
  temp_v67 = (fn_002b358c_arg0 *)0x0;
  pfVar3 = param_1->field_0x18;
  temp_v68 = pfVar3->field_0x30;
  temp_v11 = pfVar3->field_0x38;
  temp_v32 = pfVar3->field_0x3c;
  if ((param_1->field_0xa8 & 2) != 0) {
    temp_v67 = param_1 + 1;
  }
  FUN_001bced4(temp_v23);
  temp_v4 = 0x3f800000;
  temp_v24 = 0;
  temp_v25 = 0;
  temp_v26 = 0;
  temp_v27 = 0;
  temp_v28 = 0;
  temp_v29 = 0;
  temp_v30 = 0x3f800000;
  nn_math_ARMv6_MTX44TransposeAsm(temp_v23);
  temp_v10 = 0;
  if (0 < temp_v7) {
    temp_v3 = -1.0f;
    temp_v6 = 0x3f000000;
    do {
      puVar2 = temp_v33;
      pfVar1 = temp_v8;
      temp_v5 = (float)((unsigned long long)temp_v4 >> 0x20);
      pfVar7 = (float *)(temp_v68 + temp_v10 * 0x30);
      puVar8 = (unsigned int *)(temp_v11 + temp_v10 * 0x10);
      temp_v69 = (unsigned int *)(temp_v32 + temp_v10 * 0x20);
      temp_v0 = *temp_v64;
      temp_v1 = *temp_v34 * (float)temp_v6;
      temp_v2 = temp_v34[1] * (float)temp_v6;
      temp_v31 = (unsigned int)*(unsigned char *)((int)temp_v64 + 3) |
                  (temp_v0 << 0x18) | (((temp_v0 >> 8) & 0xff) << 0x10) |
                  (((temp_v0 >> 0x10) & 0xff) << 8);
      temp_v18 = temp_v5;
      temp_v16 = temp_v5;
      if (temp_v67 != (fn_002b358c_arg0 *)0x0) {
        temp_v18 = temp_v5 - *(float *)temp_v67 * temp_v1;
        temp_v16 = temp_v5 - (float)temp_v67->field_0x4 * temp_v2;
      }
      temp_v12 = temp_v18 - temp_v1;
      temp_v13 = temp_v16 + temp_v2;
      temp_v16 = temp_v16 - temp_v2;
      temp_v18 = temp_v18 + temp_v1;
      temp_v14 = temp_v5;
      temp_v15 = temp_v12;
      temp_v17 = temp_v5;
      fStack_1a4 = temp_v16;
      temp_v19 = temp_v5;
      temp_v20 = temp_v18;
      temp_v21 = temp_v13;
      temp_v22 = temp_v5;
      FUN_0018a924(&temp_v70,temp_v71);
      temp_v62 = (float)temp_v4;
      temp_v1 = temp_v62 - temp_v71[0];
      temp_v48 = temp_v71[0] + temp_v1 * temp_v5;
      temp_v57 = temp_v71[0] + temp_v1 * temp_v62;
      temp_v49 = temp_v1 * temp_v5 * temp_v5;
      fStack_e0 = temp_v1 * temp_v5 * temp_v3;
      temp_v51 = temp_v49 + temp_v70 * temp_v3;
      temp_v56 = fStack_e0 + temp_v70 * temp_v5;
      temp_v49 = temp_v49 - temp_v70 * temp_v3;
      temp_v53 = fStack_e0 - temp_v70 * temp_v5;
      temp_v55 = fStack_e0 - temp_v70 * temp_v5;
      fStack_e0 = fStack_e0 + temp_v70 * temp_v5;
      temp_v50 = temp_v5;
      temp_v52 = temp_v48;
      temp_v54 = temp_v5;
      temp_v58 = temp_v5;
      temp_v59 = temp_v5;
      temp_v60 = temp_v5;
      temp_v61 = temp_v5;
      FUN_0019a0fc(temp_v63,temp_v23,&temp_v48);
      pfVar5 = &temp_v36;
      pfVar6 = &temp_v12;
      temp_v0 = 0;
      do {
        FUN_001d3e54(pfVar5,temp_v63,pfVar6);
        temp_v0 = temp_v0 + 1;
        pfVar5 = pfVar5 + 4;
        pfVar6 = pfVar6 + 3;
      } while (temp_v0 < 4);
      FUN_00186940();
      *pfVar7 = temp_v36 + *pfVar1;
      pfVar7[1] = temp_v37 + pfVar1[1];
      pfVar7[2] = temp_v38 + pfVar1[2];
      *puVar8 = temp_v31;
      *temp_v69 = puVar2[2];
      temp_v69[1] = puVar2[1];
      FUN_00184c4c(*puVar8);
      pfVar7[3] = temp_v39 + *pfVar1;
      pfVar7[4] = temp_v40 + pfVar1[1];
      pfVar7[5] = temp_v41 + pfVar1[2];
      puVar8[1] = temp_v31;
      temp_v69[2] = puVar2[2];
      temp_v69[3] = puVar2[3];
      FUN_00184c4c(puVar8[1]);
      pfVar7[6] = temp_v42 + *pfVar1;
      pfVar7[7] = temp_v43 + pfVar1[1];
      pfVar7[8] = temp_v44 + pfVar1[2];
      puVar8[2] = temp_v31;
      temp_v69[4] = *puVar2;
      temp_v69[5] = puVar2[3];
      FUN_00184c4c(puVar8[2]);
      pfVar7[9] = temp_v45 + *pfVar1;
      pfVar7[10] = temp_v46 + pfVar1[1];
      pfVar7[0xb] = temp_v47 + pfVar1[2];
      puVar8[3] = temp_v31;
      temp_v69[6] = *puVar2;
      temp_v69[7] = puVar2[1];
      FUN_00184c4c(puVar8[3]);
      FUN_002371b0();
      temp_v10 = temp_v10 + 1;
      temp_v8 = (float *)((int)temp_v8 + temp_v9);
      temp_v64 = (unsigned int *)((int)temp_v64 + iStack_64);
      temp_v34 = (float *)(temp_v35 + (int)temp_v34);
      temp_v65 = temp_v66 + temp_v65;
      temp_v33 = (unsigned int *)((int)temp_v33 + iStack_134);
    } while (temp_v10 < temp_v7);
  }
  renderCtxResetColorScale(g_renderCtx);
  skinObjectUpdateMatrices(g_renderCtx);
  return;
}

} /* extern "C" */
