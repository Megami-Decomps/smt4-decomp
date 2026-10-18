/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e7204` (_code @ 0x2e7204, 0x93c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002e7204_arg0 fn_002e7204_arg0;
typedef struct fn_002e7204_arg0_p9c fn_002e7204_arg0_p9c;
typedef struct fn_002e7204_arg0_pa0 fn_002e7204_arg0_pa0;
struct fn_002e7204_arg0 {
    unsigned char field_0x0; /* +0x0 */
    unsigned char pad_0x1[0x3];
    uint field_0x4; /* +0x4 */
    float field_0x8; /* +0x8 */
    ushort field_0xc; /* +0xc */
    unsigned char pad_0xe[0x2];
    unsigned char field_0x10; /* +0x10 */
    unsigned char pad_0x11[0x3];
    unsigned char field_0x14; /* +0x14 */
    unsigned char pad_0x15[0x3];
    unsigned char field_0x18; /* +0x18 */
    unsigned char pad_0x19[0x13];
    float field_0x2c; /* +0x2c */
    ushort field_0x30; /* +0x30 */
    unsigned char pad_0x32[0x22];
    int field_0x54; /* +0x54 */
    unsigned char pad_0x58[0x44];
    fn_002e7204_arg0_p9c *field_0x9c; /* +0x9c */
    fn_002e7204_arg0_pa0 *field_0xa0; /* +0xa0 */
};
struct fn_002e7204_arg0_p9c {
    unsigned char field_0x0; /* +0x0 */
    unsigned char pad_0x1[0x3];
    unsigned char field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x3];
    undefined4 field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    unsigned char field_0x14; /* +0x14 */
    unsigned char pad_0x15[0x3];
    undefined4 field_0x18; /* +0x18 */
};
struct fn_002e7204_arg0_pa0 {
    undefined4 field_0x0; /* +0x0 */
    undefined4 field_0x4; /* +0x4 */
    undefined4 field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    float field_0x10; /* +0x10 */
    float field_0x14; /* +0x14 */
    char field_0x18; /* +0x18 */
};

/* stack frame of param_1: 47 slot(s), 188 byte(s) */
typedef struct {
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spF8; /* 0xf8: local_f8 */
    unsigned int spFC; /* 0xfc: local_fc */
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
    unsigned int sp134; /* 0x134: local_134 */
    unsigned int sp138; /* 0x138: local_138 */
    unsigned int sp140; /* 0x140: local_140 */
    unsigned int sp158; /* 0x158: local_158 */
    unsigned int sp15C; /* 0x15c: local_15c */
    unsigned int sp160; /* 0x160: local_160 */
    unsigned int sp168; /* 0x168: local_168 */
    unsigned int sp16C; /* 0x16c: local_16c */
    unsigned int sp170; /* 0x170: local_170 */
    unsigned int sp178; /* 0x178: local_178 */
    unsigned int sp17C; /* 0x17c: local_17c */
    unsigned int sp180; /* 0x180: local_180 */
    unsigned int sp188; /* 0x188: local_188 */
    unsigned int sp18C; /* 0x18c: local_18c */
    unsigned int sp190; /* 0x190: local_190 */
    unsigned int sp1B8; /* 0x1b8: local_1b8 */
    unsigned int sp1C0; /* 0x1c0: local_1c0 */
    unsigned int sp1C8; /* 0x1c8: local_1c8 */
    unsigned int sp1CC; /* 0x1cc: local_1cc */
    unsigned int sp1D0; /* 0x1d0: local_1d0 */
    unsigned int sp1D4; /* 0x1d4: local_1d4 */
    unsigned int sp1D8; /* 0x1d8: local_1d8 */
    unsigned int sp1DC; /* 0x1dc: local_1dc */
} param_1_stack;

extern float DAT_00472520; /* 0x472520 */
extern float DAT_00472524; /* 0x472524 */
extern float DAT_00472528; /* 0x472528 */
extern float DAT_0047252c; /* 0x47252c */
extern unsigned int DAT_00472550; /* 0x472550 */
extern float DAT_00472564; /* 0x472564 */
extern float DAT_00472568; /* 0x472568 */
extern float DAT_0047256c; /* 0x47256c */
extern float DAT_004ea91c; /* 0x4ea91c */
extern float DAT_004ea920; /* 0x4ea920 */
extern float DAT_004ea924; /* 0x4ea924 */
extern float DAT_004ea928; /* 0x4ea928 */
extern float DAT_004ea92c; /* 0x4ea92c */
extern float DAT_004ea930; /* 0x4ea930 */
extern float DAT_004ea934; /* 0x4ea934 */
extern float DAT_004ea938; /* 0x4ea938 */
extern float DAT_004ea95c; /* 0x4ea95c */
extern float DAT_004ea960; /* 0x4ea960 */
extern float DAT_004ea964; /* 0x4ea964 */
extern float DAT_004ea968; /* 0x4ea968 */
extern float DAT_004ea96c; /* 0x4ea96c */
extern float DAT_004ea970; /* 0x4ea970 */
extern float DAT_004ea974; /* 0x4ea974 */
extern float DAT_004ea978; /* 0x4ea978 */
extern float DAT_004ea97c; /* 0x4ea97c */
extern float DAT_004ea980; /* 0x4ea980 */
extern float DAT_004ea984; /* 0x4ea984 */
extern float DAT_004ea988; /* 0x4ea988 */
extern float DAT_004ea98c; /* 0x4ea98c */
extern float DAT_004ea990; /* 0x4ea990 */
extern float DAT_004ea994; /* 0x4ea994 */
extern float DAT_004ea998; /* 0x4ea998 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001a9e68. */
/* Supplied declaration required: FUN_0024fa94. */
/* Supplied declaration required: FUN_0024faa4. */
/* Supplied declaration required: FUN_0024ffbc. */
/* Supplied declaration required: FUN_00250108. */
/* Supplied declaration required: FUN_00256c3c. */
/* Supplied declaration required: FUN_00259b70. */
/* Supplied declaration required: FUN_002a2f1c. */
/* Supplied declaration required: FUN_002f88fc. */
/* Supplied declaration required: FUN_0031f6d0. */


void FUN_002e7204(fn_002e7204_arg0 *param_1)

{
/* irregular: irregular input(s): in_fpscr; 14 native warning(s); review required */
  unsigned int temp_v0;
  fn_002e7204_arg0_p9c *pfVar2;
  float temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  float temp_v4;
  float temp_v5;
  float *pfVar8;
  fn_002e7204_arg0_pa0 *pfVar9;
  int temp_v6;
  int temp_v7;
  float *unaff_r10;
  float temp_v8;
  unsigned int in_fpscr;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  unsigned long long temp_v13;
  float temp_v14;
  float temp_v15;
  long long temp_v16;
  unsigned long long temp_v17;
  float temp_v18;
  int temp_v19;
  unsigned int temp_v20;
  unsigned int temp_v21;
  float temp_v22;
  float temp_v23;
  float temp_v24;
  float temp_v25;
  float temp_v26;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float temp_v27;
  float temp_v28;
  float temp_v29;
  int temp_v30;
  unsigned int temp_v31;
  unsigned int temp_v32;
  unsigned int temp_v33;
  unsigned int temp_v34;
  unsigned int temp_v35;
  unsigned int temp_v36;
  unsigned int temp_v37;
  unsigned int temp_v38;
  float temp_v39;
  float fStack_13c;
  float temp_v40;
  float temp_v41;
  float temp_v42;
  float temp_v43;
  float temp_v44;
  float temp_v45;
  float temp_v46;
  float fStack_11c;
  float temp_v47;
  float temp_v48;
  float temp_v49;
  float fStack_10c;
  float temp_v50;
  float temp_v51;
  float temp_v52;
  float temp_v53;
  float temp_v54;
  unsigned char temp_v55 [64];
  float temp_v56;
  int temp_v57;
  unsigned int temp_v58;
  unsigned int temp_v59;
  float temp_v60;
  float temp_v61;
  float fStack_88;
  float temp_v62;
  float temp_v63;
  float temp_v64;
  float temp_v65;
  float temp_v66;
  
  temp_v0 = param_1->field_0x4;
  temp_v14 = 0.003921569f;
  temp_v3 = (temp_v0 & 0xffff) >> 8;
  temp_v9 = (float)VectorUnsignedToFloat(temp_v0 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
  DAT_004ea920 = (float)VectorUnsignedToFloat
                                  ((temp_v0 & 0xffffff) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
  DAT_004ea928 = (float)VectorUnsignedToFloat(temp_v0 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
  DAT_004ea924 = (float)VectorUnsignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v9 = temp_v9 * 0.003921569f;
  DAT_004ea920 = DAT_004ea920 * 0.003921569f;
  DAT_004ea928 = DAT_004ea928 * 0.003921569f;
  DAT_004ea924 = DAT_004ea924 * 0.003921569f;
  pfVar2 = param_1->field_0x9c;
  temp_v7 = pfVar2->field_0x8;
  if (temp_v7 != 0) {
    temp_v3 = pfVar2->field_0x10;
  }
  DAT_004ea91c = temp_v9;
  if ((temp_v7 != 0 && temp_v3 != 0) && (param_1->field_0x54 != 0)) {
    temp_v15 = 0.0f;
    temp_v18 = 1.0f;
    pfVar8 = (float *)pfVar2->field_0x18;
    temp_v3 = (in_fpscr & 0xfffffff) | ((unsigned int)(param_1->field_0x8 == 0.0f) << 0x1e);
    pfVar9 = param_1->field_0xa0;
    temp_v1 = temp_v18;
    if (!romwright_subpiece_4_1_0(temp_v3 >> 0x1e,0)) {
      temp_v1 = 1.0f / param_1->field_0x8;
    }
    temp_v17 = CONCAT44(temp_v1,DAT_004ea928);
    if (param_1->field_0xc == 3) {
      temp_v13 = CONCAT44(0x3f000000,DAT_004ea920);
      temp_v16 = (unsigned long long)(unsigned int)DAT_004ea924 << 0x20;
      if ((pfVar2->field_0xc & 1) != 0) {
        FUN_0024faa4(pfVar2,&temp_v26);
        FUN_0024fa94(param_1->field_0x9c,&temp_v62);
        DAT_004ea91c = temp_v26;
        DAT_004ea920 = fStack_1b4;
        DAT_004ea924 = fStack_1b0;
        DAT_004ea928 = fStack_1ac;
        FUN_002a2f1c();
        if (0 < temp_v7) {
          unaff_r10 = (float *)&DAT_00472550;
        }
        DAT_004ea98c = temp_v62;
        temp_v6 = 0;
        DAT_004ea990 = temp_v63;
        DAT_004ea994 = temp_v64;
        DAT_004ea998 = temp_v65;
        temp_v22 = DAT_004ea96c;
        temp_v23 = DAT_004ea970;
        temp_v24 = DAT_004ea974;
        temp_v66 = DAT_004ea97c;
        temp_v25 = DAT_004ea980;
        temp_v54 = DAT_004ea984;
        temp_v56 = temp_v62;
        temp_v53 = temp_v63;
        temp_v52 = temp_v64;
        temp_v14 = DAT_004ea968;
        temp_v1 = DAT_004ea960;
        temp_v15 = DAT_004ea95c;
        temp_v18 = DAT_004ea964;
        temp_v11 = DAT_004ea988;
        temp_v12 = DAT_004ea978;
        if (0 < temp_v7) {
          do {
            if (-1 < (int)pfVar8[4]) {
              DAT_004ea96c = temp_v22;
              DAT_004ea970 = temp_v23;
              DAT_004ea974 = temp_v24;
              DAT_004ea97c = temp_v66;
              DAT_004ea980 = temp_v25;
              DAT_004ea984 = temp_v54;
              DAT_004ea98c = temp_v56;
              DAT_004ea990 = temp_v53;
              DAT_004ea994 = temp_v52;
              temp_v4 = *pfVar8;
              temp_v5 = pfVar8[1];
              temp_v8 = pfVar8[2];
              DAT_004ea934 = (float)((unsigned long long)temp_v16 >> 0x20);
              temp_v16 = CONCAT44(DAT_004ea934,temp_v14);
              DAT_004ea930 = (float)temp_v13;
              temp_v13 = CONCAT44(temp_v18,DAT_004ea930);
              fStack_88 = temp_v5 * temp_v24 + temp_v8 * temp_v54 + temp_v52 + temp_v4 * temp_v18;
              DAT_004ea95c = temp_v15;
              DAT_004ea960 = temp_v1;
              DAT_004ea964 = temp_v18;
              DAT_004ea968 = temp_v14;
              DAT_004ea978 = temp_v12;
              DAT_004ea988 = temp_v11;
              DAT_004ea998 = temp_v65;
              unaff_r10[3] = temp_v5 * temp_v12 + temp_v8 * temp_v11 + temp_v65 + temp_v4 * temp_v14;
              *unaff_r10 = temp_v5 * temp_v22 + temp_v8 * temp_v66 + temp_v56 + temp_v4 * temp_v15;
              unaff_r10[1] = temp_v5 * temp_v23 + temp_v8 * temp_v25 + temp_v53 + temp_v4 * temp_v1;
              unaff_r10[2] = fStack_88;
              temp_v60 = *unaff_r10;
              temp_v61 = unaff_r10[1];
              temp_v4 = pfVar8[5];
              temp_v10 = (float)VectorUnsignedToFloat
                                        (((unsigned int)temp_v4 & 0xffffff) >> 0x10,(unsigned char)(temp_v3 >> 0x16) & 3)
              ;
              temp_v5 = (float)VectorUnsignedToFloat
                                       (((unsigned int)temp_v4 & 0xffff) >> 8,(unsigned char)(temp_v3 >> 0x16) & 3);
              temp_v8 = (float)VectorUnsignedToFloat((unsigned int)temp_v4 & 0xff,(unsigned char)(temp_v3 >> 0x16) & 3);
              temp_v4 = (float)VectorUnsignedToFloat((unsigned int)temp_v4 >> 0x18,(unsigned char)(temp_v3 >> 0x16) & 3);
              DAT_004ea938 = (float)temp_v17;
              DAT_004ea91c = temp_v4 * 0.003921569f * temp_v9;
              DAT_004ea920 = temp_v10 * 0.003921569f * DAT_004ea930;
              DAT_004ea924 = temp_v5 * 0.003921569f * DAT_004ea934;
              DAT_004ea928 = temp_v8 * 0.003921569f * DAT_004ea938;
              DAT_004ea92c = temp_v9;
              if (-1 < pfVar9->field_0x18) {
                FUN_0031f6d0(param_1,pfVar9,pfVar8[4]);
              }
              FUN_002f88fc(pfVar9->field_0x0);
              temp_v4 = (float)VectorSignedToFloat(pfVar8[4],(unsigned char)(temp_v3 >> 0x16) & 3);
              temp_v3 = (temp_v3 & 0xfffffff) |
                      ((unsigned int)(0.0f <= pfVar9->field_0x14 * temp_v4 +
                                     param_1->field_0x2c * temp_v4 * temp_v4 * 0.5f) << 0x1d);
              if (!romwright_subpiece_4_1_0(temp_v3 >> 0x1d,0)) {
                FUN_00256c3c();
              }
              else {
                temp_v57 = pfVar9->field_0x4;
                temp_v58 = pfVar9->field_0x8;
                temp_v59 = pfVar9->field_0xc;
                FUN_001a9e68(&temp_v30,&temp_v57,0);
              }
              temp_v2 = pfVar9->field_0x0;
              *(unsigned int *)(temp_v2 + 0x4c) = temp_v30;
              *(unsigned int *)(temp_v2 + 0x5c) = temp_v33;
              *(unsigned int *)(temp_v2 + 0x6c) = temp_v36;
              *(unsigned int *)(temp_v2 + 0x50) = temp_v31;
              *(unsigned int *)(temp_v2 + 0x60) = temp_v34;
              *(unsigned int *)(temp_v2 + 0x70) = temp_v37;
              *(unsigned int *)(temp_v2 + 0x54) = temp_v32;
              *(unsigned int *)(temp_v2 + 100) = temp_v35;
              *(unsigned int *)(temp_v2 + 0x74) = temp_v38;
              *(unsigned int *)(temp_v2 + 0x88) = *(unsigned int *)(temp_v2 + 0x88) | 0x800;
              DAT_004ea928 = DAT_0047252c;
              DAT_004ea91c = DAT_00472520;
              DAT_004ea920 = DAT_00472524;
              DAT_004ea924 = DAT_00472528;
              temp_v28 = pfVar8[6];
              temp_v27 = DAT_00472564 * temp_v28;
              if (param_1->field_0x30 != 0) {
                temp_v29 = (float)((unsigned long long)temp_v17 >> 0x20);
                temp_v27 = temp_v27 * temp_v29;
                temp_v28 = DAT_00472568 * temp_v28 * temp_v29;
                temp_v29 = DAT_0047256c * pfVar8[6] * temp_v29;
              }
              else {
                temp_v28 = DAT_00472568 * temp_v28;
                temp_v29 = DAT_0047256c * pfVar8[6];
              }
              FUN_00250108(&temp_v30,&temp_v27,2);
              temp_v2 = pfVar9->field_0x0;
              *(float *)(temp_v2 + 0x7c) = temp_v27;
              *(float *)(temp_v2 + 0x80) = temp_v28;
              *(float *)(temp_v2 + 0x84) = temp_v29;
              *(unsigned int *)(temp_v2 + 0x88) = *(unsigned int *)(temp_v2 + 0x88) | 0x800;
              FUN_0024ffbc(&temp_v30,&temp_v60,2);
              temp_v2 = pfVar9->field_0x0;
              *(float *)(temp_v2 + 0x58) = temp_v27;
              *(float *)(temp_v2 + 0x68) = temp_v28;
              *(float *)(temp_v2 + 0x78) = temp_v29;
              *(unsigned int *)(temp_v2 + 0x88) = *(unsigned int *)(temp_v2 + 0x88) | 0x800;
            }
            temp_v6 = temp_v6 + 1;
            pfVar8 = pfVar8 + 10;
            pfVar9 = pfVar9 + 1;
          } while (temp_v6 < temp_v7);
          return;
        }
      }
      else {
        FUN_0024faa4(pfVar2,&temp_v26);
        DAT_004ea91c = temp_v26;
        DAT_004ea920 = fStack_1b4;
        DAT_004ea924 = fStack_1b0;
        DAT_004ea928 = fStack_1ac;
        FUN_002a2f1c();
        temp_v40 = DAT_004ea964;
        temp_v42 = DAT_004ea96c;
        temp_v43 = DAT_004ea970;
        temp_v44 = DAT_004ea974;
        temp_v47 = DAT_004ea984;
        temp_v50 = DAT_004ea994;
        temp_v49 = DAT_004ea98c;
        fStack_10c = DAT_004ea990;
        temp_v6 = 0;
        temp_v39 = DAT_004ea95c;
        fStack_13c = DAT_004ea960;
        temp_v46 = DAT_004ea97c;
        fStack_11c = DAT_004ea980;
        temp_v41 = temp_v15;
        temp_v45 = temp_v15;
        temp_v48 = temp_v15;
        temp_v51 = temp_v18;
        if (0 < temp_v7) {
          do {
            if (-1 < (int)pfVar8[4]) {
              temp_v1 = pfVar8[5];
              temp_v11 = (float)VectorUnsignedToFloat
                                        (((unsigned int)temp_v1 & 0xffffff) >> 0x10,(unsigned char)(temp_v3 >> 0x16) & 3)
              ;
              temp_v18 = (float)VectorUnsignedToFloat((unsigned int)temp_v1 & 0xff,(unsigned char)(temp_v3 >> 0x16) & 3);
              temp_v12 = (float)VectorUnsignedToFloat((unsigned int)temp_v1 >> 0x18,(unsigned char)(temp_v3 >> 0x16) & 3);
              temp_v1 = (float)VectorUnsignedToFloat
                                       (((unsigned int)temp_v1 & 0xffff) >> 8,(unsigned char)(temp_v3 >> 0x16) & 3);
              DAT_004ea930 = (float)temp_v13;
              DAT_004ea934 = (float)((unsigned long long)temp_v16 >> 0x20);
              DAT_004ea938 = (float)temp_v17;
              DAT_004ea91c = temp_v12 * temp_v14 * temp_v9;
              DAT_004ea920 = temp_v11 * temp_v14 * DAT_004ea930;
              DAT_004ea924 = temp_v1 * temp_v14 * DAT_004ea934;
              DAT_004ea928 = temp_v18 * temp_v14 * DAT_004ea938;
              DAT_004ea92c = temp_v9;
              if (-1 < pfVar9->field_0x18) {
                FUN_0031f6d0(param_1,pfVar9,pfVar8[4]);
              }
              FUN_002f88fc(pfVar9->field_0x0);
              temp_v1 = (float)VectorSignedToFloat(pfVar8[4],(unsigned char)(temp_v3 >> 0x16) & 3);
              temp_v3 = (temp_v3 & 0xfffffff) |
                      ((unsigned int)(temp_v15 <=
                             pfVar9->field_0x14 * temp_v1 +
                             param_1->field_0x2c * temp_v1 *
                             temp_v1 * (float)((unsigned long long)temp_v13 >> 0x20)) << 0x1d);
              if (!romwright_subpiece_4_1_0(temp_v3 >> 0x1d,0)) {
                FUN_00256c3c();
              }
              else {
                temp_v19 = pfVar9->field_0x4;
                temp_v20 = pfVar9->field_0x8;
                temp_v21 = pfVar9->field_0xc;
                FUN_001a9e68(temp_v55,&temp_v19,0);
              }
              FUN_00256c3c(&temp_v30);
              FUN_00259b70(&temp_v30,temp_v55,&temp_v39);
              temp_v2 = pfVar9->field_0x0;
              *(unsigned int *)(temp_v2 + 0x4c) = temp_v30;
              *(unsigned int *)(temp_v2 + 0x5c) = temp_v33;
              *(unsigned int *)(temp_v2 + 0x6c) = temp_v36;
              *(unsigned int *)(temp_v2 + 0x50) = temp_v31;
              *(unsigned int *)(temp_v2 + 0x60) = temp_v34;
              *(unsigned int *)(temp_v2 + 0x70) = temp_v37;
              *(unsigned int *)(temp_v2 + 0x54) = temp_v32;
              *(unsigned int *)(temp_v2 + 100) = temp_v35;
              *(unsigned int *)(temp_v2 + 0x74) = temp_v38;
              *(unsigned int *)(temp_v2 + 0x88) = *(unsigned int *)(temp_v2 + 0x88) | 0x800;
              temp_v28 = pfVar8[6];
              temp_v27 = DAT_00472564 * temp_v28;
              if (param_1->field_0x30 != 0) {
                temp_v29 = (float)((unsigned long long)temp_v17 >> 0x20);
                temp_v27 = temp_v27 * temp_v29;
                temp_v28 = DAT_00472568 * temp_v28 * temp_v29;
                temp_v29 = DAT_0047256c * pfVar8[6] * temp_v29;
              }
              else {
                temp_v28 = DAT_00472568 * temp_v28;
                temp_v29 = DAT_0047256c * pfVar8[6];
              }
              FUN_00250108(&temp_v30,&temp_v27,2);
              temp_v2 = pfVar9->field_0x0;
              *(float *)(temp_v2 + 0x7c) = temp_v27;
              *(float *)(temp_v2 + 0x80) = temp_v28;
              *(float *)(temp_v2 + 0x84) = temp_v29;
              *(unsigned int *)(temp_v2 + 0x88) = *(unsigned int *)(temp_v2 + 0x88) | 0x800;
              temp_v27 = *pfVar8;
              temp_v28 = pfVar8[1];
              temp_v29 = pfVar8[2];
              FUN_0024ffbc(&temp_v30,&temp_v27,2);
              temp_v2 = pfVar9->field_0x0;
              *(float *)(temp_v2 + 0x58) = temp_v27;
              *(float *)(temp_v2 + 0x68) = temp_v28;
              *(float *)(temp_v2 + 0x78) = temp_v29;
              *(unsigned int *)(temp_v2 + 0x88) = *(unsigned int *)(temp_v2 + 0x88) | 0x800;
            }
            temp_v6 = temp_v6 + 1;
            pfVar8 = pfVar8 + 10;
            pfVar9 = pfVar9 + 1;
          } while (temp_v6 < temp_v7);
        }
      }
    }
  }
  return;
}
