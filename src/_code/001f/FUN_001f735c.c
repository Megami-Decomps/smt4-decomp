/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f735c` (_code @ 0x1f735c, 0x8d8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 64 slot(s), 256 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spE0; /* 0xe0: local_e0 */
    unsigned int spE8; /* 0xe8: local_e8 */
    unsigned int spEC; /* 0xec: local_ec */
    unsigned int spF0; /* 0xf0: local_f0 */
    unsigned int spF4; /* 0xf4: local_f4 */
    unsigned int spF8; /* 0xf8: local_f8 */
    unsigned int sp104; /* 0x104: local_104 */
    unsigned int sp108; /* 0x108: local_108 */
    unsigned int sp10C; /* 0x10c: local_10c */
    unsigned int sp110; /* 0x110: local_110 */
    unsigned int sp114; /* 0x114: local_114 */
    unsigned int sp11C; /* 0x11c: local_11c */
    unsigned int sp120; /* 0x120: local_120 */
    unsigned int sp124; /* 0x124: local_124 */
    unsigned int sp128; /* 0x128: local_128 */
    unsigned int sp12C; /* 0x12c: local_12c */
    unsigned int sp130; /* 0x130: local_130 */
    unsigned int sp138; /* 0x138: local_138 */
    unsigned int sp150; /* 0x150: local_150 */
    unsigned int sp154; /* 0x154: local_154 */
    unsigned int sp158; /* 0x158: local_158 */
    unsigned int sp15C; /* 0x15c: local_15c */
    unsigned int sp160; /* 0x160: local_160 */
    unsigned int sp164; /* 0x164: local_164 */
    unsigned int sp168; /* 0x168: local_168 */
    unsigned int sp1B4; /* 0x1b4: local_1b4 */
    unsigned int sp1B8; /* 0x1b8: local_1b8 */
    unsigned int sp1BC; /* 0x1bc: local_1bc */
    unsigned int sp1C0; /* 0x1c0: local_1c0 */
    unsigned int sp1C4; /* 0x1c4: local_1c4 */
    unsigned int sp1C8; /* 0x1c8: local_1c8 */
    unsigned int sp1D0; /* 0x1d0: local_1d0 */
    unsigned int sp1D4; /* 0x1d4: local_1d4 */
    unsigned int sp1D8; /* 0x1d8: local_1d8 */
    unsigned int sp1DC; /* 0x1dc: local_1dc */
    unsigned int sp1E0; /* 0x1e0: local_1e0 */
    unsigned int sp1E4; /* 0x1e4: local_1e4 */
    unsigned int sp1EC; /* 0x1ec: local_1ec */
    unsigned int sp1F0; /* 0x1f0: local_1f0 */
} param_1_stack;

extern unsigned int DAT_00476638; /* 0x476638 */
extern float DAT_004ea91c; /* 0x4ea91c */
extern float DAT_004ea920; /* 0x4ea920 */
extern float DAT_004ea924; /* 0x4ea924 */
extern float DAT_004ea928; /* 0x4ea928 */
extern float DAT_004ea92c; /* 0x4ea92c */
extern float DAT_004ea930; /* 0x4ea930 */
extern float DAT_004ea934; /* 0x4ea934 */
extern float DAT_004ea938; /* 0x4ea938 */
extern unsigned int DAT_004efd9c; /* 0x4efd9c */
extern float DAT_004efda0; /* 0x4efda0 */
extern float DAT_004efda4; /* 0x4efda4 */
extern float DAT_004efda8; /* 0x4efda8 */
extern float DAT_004efdac; /* 0x4efdac */
extern unsigned int DAT_004efdb0; /* 0x4efdb0 */
extern float DAT_004efdb4; /* 0x4efdb4 */
extern float DAT_004efdb8; /* 0x4efdb8 */
extern float DAT_004efdbc; /* 0x4efdbc */
extern float DAT_004efdc0; /* 0x4efdc0 */
extern unsigned int DAT_004efdc4; /* 0x4efdc4 */
extern float DAT_004efdc8; /* 0x4efdc8 */
extern float DAT_004efdcc; /* 0x4efdcc */
extern float DAT_004efdd0; /* 0x4efdd0 */
extern float DAT_004efdd4; /* 0x4efdd4 */
extern unsigned int DAT_004efdd8; /* 0x4efdd8 */

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Supplied declaration required: FUN_0021a1a4. */
/* Supplied declaration required: FUN_00256a50. */
/* Supplied declaration required: FUN_00256c98. */
/* Supplied declaration required: FUN_00256cd8. */
/* Supplied declaration required: FUN_00256dbc. */
/* Supplied declaration required: FUN_00256f88. */
/* Supplied declaration required: FUN_00257320. */
/* Supplied declaration required: FUN_002694f8. */
/* Supplied declaration required: FUN_00269508. */
/* Supplied declaration required: FUN_00269694. */
extern int FUN_00269a58(void);
/* Supplied declaration required: FUN_002ad314. */
/* Supplied declaration required: FUN_002b6eb8. */
/* Supplied declaration required: FUN_002bfe28. */
extern int FUN_002bfefc(unsigned int *);
/* Supplied declaration required: FUN_002f81b0. */


void FUN_001f735c(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 19 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar5;
  float *pfVar6;
  unsigned int *puVar7;
  unsigned short *puVar8;
  int temp_v4;
  float *pfVar10;
  int temp_v5;
  unsigned char temp_v6;
  unsigned int in_fpscr;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  unsigned long long temp_v17;
  unsigned int temp_v18;
  unsigned long long temp_v19;
  float temp_v20;
  float temp_v21;
  float fStack_1e8;
  float temp_v22;
  float temp_v23;
  float temp_v24;
  float temp_v25;
  float temp_v26;
  float temp_v27;
  float fStack_1cc;
  float temp_v28;
  float temp_v29;
  float temp_v30;
  float temp_v31;
  float temp_v32;
  float temp_v33;
  unsigned char temp_v34 [72];
  int temp_v35;
  float temp_v36;
  float temp_v37;
  float temp_v38;
  unsigned int temp_v39;
  float temp_v40;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float temp_v41;
  float fStack_134;
  float temp_v42;
  float temp_v43;
  float temp_v44;
  float temp_v45;
  float temp_v46;
  float temp_v47;
  float fStack_118;
  float temp_v48;
  float temp_v49;
  float temp_v50;
  float temp_v51;
  float temp_v52;
  unsigned int temp_v53;
  unsigned char *temp_v54;
  int temp_v55;
  unsigned int temp_v56;
  unsigned int temp_v57;
  unsigned int temp_v58;
  unsigned int temp_v59;
  unsigned int temp_v60;
  unsigned int temp_v61;
  unsigned int temp_v62;
  unsigned int temp_v63;
  unsigned int temp_v64;
  unsigned int temp_v65;
  unsigned int temp_v66;
  unsigned int temp_v67;
  int temp_v68;
  unsigned int temp_v69;
  float temp_v70;
  int temp_v71;
  int temp_v72;
  int temp_v73;
  float temp_v74 [4];
  unsigned int temp_v75;
  float temp_v76;
  float fStack_68;
  float temp_v77;
  float temp_v78;
  unsigned int temp_v79;
  int temp_v80;
  unsigned int temp_v81;
  unsigned int temp_v82;
  
  temp_v1 = FUN_00269a58();
  *(int *)(param_1 + 0x2c) = temp_v1 + *(int *)(param_1 + 0x2c);
  temp_v5 = *(int *)(param_1 + 0x2c);
  temp_v4 = *(int *)(param_1 + 0xbc);
  puVar8 = *(unsigned short **)(param_1 + 200);
  temp_v6 = temp_v5 == temp_v4;
  temp_v1 = temp_v5 - temp_v4;
  if (temp_v5 >= temp_v4) {
    temp_v6 = temp_v4 == 0;
    temp_v1 = temp_v4;
  }
  if (!temp_v6 && temp_v1 < 0 == (temp_v5 < temp_v4 && SBORROW4(temp_v5,temp_v4))) {
    if (*(char *)(param_1 + 0x74) == '\0') {
      return;
    }
    temp_v5 = 0;
    *(unsigned int *)(param_1 + 0x2c) = 0;
  }
  FUN_0021a1a4(puVar8,param_1,param_1 + 0x10);
  temp_v2 = param_1 + 0x30;
  FUN_00269694(temp_v2,param_1 + 0x54,temp_v5,temp_v4);
  temp_v3 = *(unsigned int *)(param_1 + 0x24);
  DAT_004ea92c = (float)VectorUnsignedToFloat(temp_v3 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
  DAT_004ea930 = (float)VectorUnsignedToFloat
                                  ((temp_v3 & 0xffffff) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
  DAT_004ea934 = (float)VectorUnsignedToFloat((temp_v3 & 0xffff) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
  DAT_004ea938 = (float)VectorUnsignedToFloat(temp_v3 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
  DAT_004ea92c = DAT_004ea92c * 0.003921569f;
  DAT_004ea930 = DAT_004ea930 * 0.003921569f;
  DAT_004ea934 = DAT_004ea934 * 0.003921569f;
  DAT_004ea938 = DAT_004ea938 * 0.003921569f;
  temp_v11 = (float)VectorUnsignedToFloat(temp_v2 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v9 = (float)VectorUnsignedToFloat(temp_v2 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v7 = (float)VectorUnsignedToFloat((temp_v2 & 0xffffff) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v8 = (float)VectorUnsignedToFloat((temp_v2 & 0xffff) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
  DAT_004ea91c = temp_v11 * 0.003921569f * DAT_004ea92c;
  DAT_004ea920 = temp_v7 * 0.003921569f * DAT_004ea930;
  DAT_004ea924 = temp_v8 * 0.003921569f * DAT_004ea934;
  DAT_004ea928 = temp_v9 * 0.003921569f * DAT_004ea938;
  temp_v1 = VectorFloatToUnsigned(DAT_004ea91c * 255.0f,3);
  temp_v2 = VectorFloatToUnsigned(DAT_004ea920 * 255.0f,3);
  temp_v3 = VectorFloatToUnsigned(DAT_004ea924 * 255.0f,3);
  temp_v8 = (float)VectorFloatToUnsigned(DAT_004ea928 * 255.0f,3);
  *(unsigned int *)(puVar8 + 0x28) =
       ((unsigned int)temp_v8 & 0xff) | ((temp_v3 & 0xff) << 8) | ((temp_v2 & 0xff) << 0x10) | (temp_v1 << 0x18);
  FUN_00269508(param_1 + 100,temp_v5,temp_v4);
  temp_v8 = *(float *)(param_1 + 0xc0) * temp_v8;
  FUN_00269508(param_1 + 0x90,temp_v5,temp_v4);
  temp_v9 = 16.0f;
  temp_v11 = 0.0625f;
  temp_v7 = 0.0f;
  if (*(int *)(param_1 + 0xd0) != 0) {
    FUN_00256f88(*(int *)(param_1 + 0xd0),temp_v5);
    FUN_00256dbc(*(unsigned int *)(param_1 + 0xd0),&temp_v35);
    temp_v71 = VectorFloatToUnsigned(temp_v41,3);
    temp_v68 = VectorFloatToUnsigned(fStack_134,3);
    temp_v17 = CONCAT44(temp_v8,temp_v35);
    temp_v8 = temp_v37 * temp_v11;
    *(unsigned int *)(puVar8 + 2) = temp_v39;
    temp_v2 = VectorFloatToUnsigned(temp_v40 * temp_v41 * temp_v9,3);
    temp_v3 = VectorFloatToUnsigned(fStack_148 * temp_v41 * temp_v9,3);
    temp_v4 = VectorFloatToUnsigned(fStack_14c * fStack_134 * temp_v9,3);
    temp_v1 = VectorFloatToUnsigned(fStack_144 * fStack_134 * temp_v9,3);
    temp_v11 = temp_v38 * temp_v11;
    temp_v53 = (temp_v2 & 0xffff) | (temp_v4 << 0x10);
    temp_v69 = (temp_v1 << 0x10) | (temp_v3 & 0xffff);
    temp_v67 = (temp_v2 & 0xffff) | (temp_v1 << 0x10);
    temp_v75 = (temp_v3 & 0xffff) | (temp_v4 << 0x10);
    FUN_002694f8(temp_v39);
  }
  else {
    temp_v36 = temp_v7;
    if (*(int *)(param_1 + 0xcc) != 0) {
      FUN_00256cd8(*(int *)(param_1 + 0xcc),temp_v5,&temp_v76);
      temp_v71 = VectorFloatToUnsigned(temp_v77,3);
      temp_v68 = VectorFloatToUnsigned(temp_v78,3);
      temp_v53 = 0;
      temp_v75 = (unsigned int)(temp_v77 * temp_v9);
      temp_v1 = (int)(temp_v78 * temp_v9);
      temp_v17 = CONCAT44(temp_v8,temp_v36);
      *(unsigned int *)(puVar8 + 2) = temp_v79;
      temp_v67 = temp_v1 << 0x10;
      temp_v7 = (float)VectorSignedToFloat(temp_v75,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v9 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v69 = (temp_v75 & 0xffff) | (temp_v1 << 0x10);
      temp_v75 = temp_v75 & 0xffff;
      temp_v8 = (float)VectorSignedToFloat((int)(temp_v76 * temp_v7) >> 5,(unsigned char)(in_fpscr >> 0x16) & 3
                                         );
      temp_v7 = (float)VectorSignedToFloat((int)(fStack_68 * temp_v9) >> 5,
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v8 = temp_v8 * temp_v11;
      temp_v11 = temp_v7 * temp_v11;
      temp_v7 = temp_v36;
      FUN_002694f8(temp_v79);
    }
    else {
      FUN_002f81b0(puVar8,&temp_v72);
      temp_v2 = temp_v72 << 4;
      temp_v75 = temp_v2 & 0xffff;
      temp_v7 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v9 = (float)VectorSignedToFloat(temp_v73 << 4,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v69 = (temp_v2 & 0xffff) | (temp_v73 << 0x14);
      temp_v17 = CONCAT44(temp_v8,temp_v36);
      temp_v67 = temp_v73 << 0x14;
      temp_v53 = 0;
      temp_v8 = temp_v7 * 0.03125f * temp_v11;
      temp_v11 = temp_v9 * 0.03125f * temp_v11;
      temp_v71 = temp_v72;
      temp_v68 = temp_v73;
      temp_v7 = temp_v36;
    }
  }
  temp_v42 = (float)temp_v17 + temp_v8;
  temp_v44 = temp_v36 + temp_v11;
  temp_v45 = (float)temp_v17 - temp_v8;
  puVar7 = *(unsigned int **)(*(int *)(puVar8 + 4) + 0x30);
  pfVar10 = *(float **)(*(int *)(puVar8 + 4) + 0x3c);
  temp_v49 = temp_v36 - temp_v11;
  temp_v19 = 0x3f800000;
  temp_v43 = temp_v7;
  temp_v46 = temp_v7;
  temp_v47 = temp_v44;
  fStack_118 = temp_v42;
  temp_v48 = temp_v7;
  temp_v50 = temp_v45;
  temp_v51 = temp_v7;
  temp_v52 = temp_v49;
  if (((DAT_00476638 & 1) == 0) && (temp_v1 = FUN_002bfefc(&DAT_00476638), temp_v1 != 0)) {
    DAT_004efd9c = (unsigned int)temp_v19;
    DAT_004efda0 = temp_v7;
    DAT_004efda4 = temp_v7;
    DAT_004efda8 = temp_v7;
    DAT_004efdac = temp_v7;
    DAT_004efdb0 = DAT_004efd9c;
    DAT_004efdb4 = temp_v7;
    DAT_004efdb8 = temp_v7;
    DAT_004efdbc = temp_v7;
    DAT_004efdc0 = temp_v7;
    DAT_004efdc4 = DAT_004efd9c;
    DAT_004efdc8 = temp_v7;
    DAT_004efdcc = temp_v7;
    DAT_004efdd0 = temp_v7;
    DAT_004efdd4 = temp_v7;
    DAT_004efdd8 = DAT_004efd9c;
  }
  temp_v18 = (unsigned int)((unsigned long long)temp_v17 >> 0x20);
  FUN_002bfe28(temp_v34,&DAT_004efd9c);
  temp_v80 = temp_v18;
  temp_v81 = temp_v18;
  temp_v82 = temp_v18;
  FUN_00256c98(temp_v34,&temp_v80);
  temp_v9 = -1.0f;
  FUN_002ad314(&temp_v70,temp_v74);
  temp_v33 = (float)temp_v19;
  temp_v8 = temp_v33 - temp_v74[0];
  temp_v20 = temp_v74[0] + temp_v8 * temp_v7;
  temp_v24 = temp_v74[0] + temp_v8 * temp_v33;
  temp_v25 = temp_v8 * temp_v9 * temp_v7;
  temp_v21 = temp_v8 * temp_v7 * temp_v9;
  fStack_1e8 = temp_v8 * temp_v7 * temp_v7;
  temp_v23 = temp_v21 + temp_v70 * temp_v7;
  fStack_1cc = temp_v25 + temp_v70 * temp_v7;
  temp_v27 = fStack_1e8 - temp_v70 * temp_v9;
  temp_v25 = temp_v25 - temp_v70 * temp_v7;
  temp_v21 = temp_v21 - temp_v70 * temp_v7;
  fStack_1e8 = fStack_1e8 + temp_v70 * temp_v9;
  temp_v22 = temp_v7;
  temp_v26 = temp_v7;
  temp_v28 = temp_v20;
  temp_v29 = temp_v7;
  temp_v30 = temp_v7;
  temp_v31 = temp_v7;
  temp_v32 = temp_v7;
  FUN_002b6eb8(temp_v34,&temp_v20);
  temp_v54 = temp_v34;
  puVar5 = (unsigned int *)&temp_v55;
  pfVar6 = &temp_v42;
  temp_v2 = 0;
  do {
    FUN_00257320(puVar5,temp_v54,pfVar6);
    temp_v2 = temp_v2 + 1;
    puVar5 = puVar5 + 4;
    pfVar6 = pfVar6 + 3;
  } while (temp_v2 < 4);
  *puVar7 = temp_v55;
  temp_v7 = (float)VectorUnsignedToFloat(temp_v71 << 4,(unsigned char)(in_fpscr >> 0x16) & 3);
  puVar7[1] = temp_v56;
  temp_v8 = (float)VectorUnsignedToFloat(temp_v68 << 4,(unsigned char)(in_fpscr >> 0x16) & 3);
  puVar7[2] = temp_v57;
  puVar7[3] = temp_v58;
  temp_v7 = (float)temp_v19 / temp_v7;
  temp_v14 = (float)VectorUnsignedToFloat(temp_v75 >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
  puVar7[4] = temp_v59;
  temp_v16 = (float)VectorUnsignedToFloat(temp_v53 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v12 = (float)VectorUnsignedToFloat(temp_v67 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v9 = (float)VectorUnsignedToFloat(temp_v69 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v15 = (float)VectorUnsignedToFloat(temp_v53 >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v11 = (float)VectorUnsignedToFloat(temp_v67 >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
  puVar7[5] = temp_v60;
  temp_v10 = (float)VectorUnsignedToFloat(temp_v69 >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
  puVar7[6] = temp_v61;
  temp_v8 = (float)temp_v19 / temp_v8;
  temp_v13 = (float)VectorUnsignedToFloat(temp_v75 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
  puVar7[7] = temp_v62;
  puVar7[8] = temp_v63;
  puVar7[9] = temp_v64;
  puVar7[10] = temp_v65;
  puVar7[0xb] = temp_v66;
  pfVar10[6] = temp_v16 * temp_v7;
  pfVar10[7] = temp_v15 * temp_v8;
  pfVar10[2] = temp_v12 * temp_v7;
  pfVar10[3] = temp_v11 * temp_v8;
  *pfVar10 = temp_v9 * temp_v7;
  pfVar10[1] = temp_v10 * temp_v8;
  pfVar10[4] = temp_v13 * temp_v7;
  pfVar10[5] = temp_v14 * temp_v8;
  if (*(char *)(param_1 + 0xc4) != '\0') {
    temp_v0 = *puVar8 | 0x100;
  }
  else {
    temp_v0 = *puVar8 & 0xfeff;
  }
  *puVar8 = temp_v0;
  FUN_00256a50(puVar8,*(unsigned int *)(param_1 + 0x58) & 0xffff);
  return;
}
