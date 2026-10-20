/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002dea74` (_code @ 0x2dea74, 0xa00 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(...);
int FUN_0021a1a4(unsigned short *, int, int);
int FUN_00256a50(...);
int FUN_00256c98(...);
int FUN_00256cd8(...);
int FUN_00256dbc(...);
int FUN_00256f88(...);
int FUN_00257320(...);
int FUN_002694f8(...);
int FUN_00269508(...);
int FUN_00269694(unsigned int, int, int, int);
int FUN_002ad314(...);
int FUN_002bfe28(...);
int FUN_002f81b0(...);
int SBORROW4(int, int);
int VectorFloatToUnsigned(...);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(...);
int nn_math_ARMv6_MTX44MultAsm(...);

/* stack frame of param_1: 64 slot(s), 256 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spF8; /* 0xf8: local_f8 */
    unsigned int spFC; /* 0xfc: local_fc */
    unsigned int sp118; /* 0x118: local_118 */
    unsigned int sp11C; /* 0x11c: local_11c */
    unsigned int sp120; /* 0x120: local_120 */
    unsigned int sp138; /* 0x138: local_138 */
    unsigned int sp144; /* 0x144: local_144 */
    unsigned int sp148; /* 0x148: local_148 */
    unsigned int sp14C; /* 0x14c: local_14c */
    unsigned int sp150; /* 0x150: local_150 */
    unsigned int sp154; /* 0x154: local_154 */
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
    unsigned int sp1C4; /* 0x1c4: local_1c4 */
    unsigned int sp1C8; /* 0x1c8: local_1c8 */
    unsigned int sp1D0; /* 0x1d0: local_1d0 */
    unsigned int sp1D4; /* 0x1d4: local_1d4 */
    unsigned int sp1D8; /* 0x1d8: local_1d8 */
    unsigned int sp1DC; /* 0x1dc: local_1dc */
    unsigned int sp1E0; /* 0x1e0: local_1e0 */
    unsigned int sp1E4; /* 0x1e4: local_1e4 */
    unsigned int sp1E8; /* 0x1e8: local_1e8 */
    unsigned int sp1EC; /* 0x1ec: local_1ec */
    unsigned int sp1F0; /* 0x1f0: local_1f0 */
    unsigned int sp200; /* 0x200: local_200 */
    unsigned int sp208; /* 0x208: local_208 */
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
extern unsigned int DAT_004efda0; /* 0x4efda0 */
extern unsigned int DAT_004efda4; /* 0x4efda4 */
extern unsigned int DAT_004efda8; /* 0x4efda8 */
extern unsigned int DAT_004efdac; /* 0x4efdac */
extern unsigned int DAT_004efdb0; /* 0x4efdb0 */
extern unsigned int DAT_004efdb4; /* 0x4efdb4 */
extern unsigned int DAT_004efdb8; /* 0x4efdb8 */
extern unsigned int DAT_004efdbc; /* 0x4efdbc */
extern unsigned int DAT_004efdc0; /* 0x4efdc0 */
extern unsigned int DAT_004efdc4; /* 0x4efdc4 */
extern unsigned int DAT_004efdc8; /* 0x4efdc8 */
extern unsigned int DAT_004efdcc; /* 0x4efdcc */
extern unsigned int DAT_004efdd0; /* 0x4efdd0 */
extern unsigned int DAT_004efdd4; /* 0x4efdd4 */
extern unsigned int DAT_004efdd8; /* 0x4efdd8 */

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
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
/* Supplied declaration required: FUN_002bfe28. */
extern int FUN_002bfefc(unsigned int *);
/* Supplied declaration required: FUN_002f81b0. */
/* Supplied declaration required: nn_math_ARMv6_MTX44MultAsm. */


void FUN_002dea74(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 19 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  unsigned short *puVar9;
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
  float temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  float temp_v21;
  float temp_v22;
  unsigned long long temp_v23;
  float temp_v24;
  unsigned long long temp_v25;
  unsigned long long temp_v26;
  unsigned char temp_v27 [64];
  unsigned char *temp_v28;
  unsigned int temp_v29;
  float temp_v30;
  float temp_v31;
  float temp_v32;
  float temp_v33;
  float temp_v34;
  float temp_v35;
  float temp_v36;
  float temp_v37;
  float temp_v38;
  float fStack_1cc;
  float temp_v39;
  float temp_v40;
  float temp_v41;
  float temp_v42;
  float temp_v43;
  unsigned int temp_v44;
  float temp_v45;
  float temp_v46;
  float temp_v47;
  float temp_v48;
  float temp_v49;
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
  float fStack_164;
  float temp_v60;
  float temp_v61;
  float temp_v62;
  float temp_v63;
  float temp_v64;
  float temp_v65;
  float temp_v66;
  float temp_v67;
  int temp_v68;
  unsigned int temp_v69;
  unsigned int temp_v70;
  unsigned int temp_v71;
  float temp_v72;
  float temp_v73 [10];
  float temp_v74;
  float fStack_cc;
  float temp_v75;
  float temp_v76;
  unsigned int temp_v77;
  float temp_v78;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float temp_v79;
  float fStack_9c;
  int temp_v80;
  int temp_v81;
  float temp_v82;
  float fStack_88;
  float temp_v83;
  float temp_v84;
  unsigned int temp_v85;
  float temp_v86;
  float temp_v87;
  float temp_v88;
  int temp_v89;
  
  temp_v1 = FUN_00269a58();
  *(int *)(param_1 + 0x2c) = temp_v1 + *(int *)(param_1 + 0x2c);
  temp_v4 = *(int *)(param_1 + 0x2c);
  temp_v5 = *(int *)(param_1 + 0xbc);
  puVar9 = *(unsigned short **)(param_1 + 0x13c);
  temp_v6 = temp_v4 == temp_v5;
  temp_v1 = temp_v4 - temp_v5;
  if (temp_v4 >= temp_v5) {
    temp_v6 = temp_v5 == 0;
    temp_v1 = temp_v5;
  }
  if (!temp_v6 && temp_v1 < 0 == (temp_v4 < temp_v5 && SBORROW4(temp_v4,temp_v5))) {
    if (*(char *)(param_1 + 0x74) == '\0') {
      return;
    }
    temp_v4 = 0;
    *(unsigned int *)(param_1 + 0x2c) = 0;
  }
  temp_v22 = (float)VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_0021a1a4(puVar9,param_1,param_1 + 0x10);
  temp_v2 = param_1 + 0x30;
  FUN_00269694(temp_v2,param_1 + 0x54,temp_v4,temp_v5);
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
  temp_v10 = (float)VectorUnsignedToFloat((temp_v2 & 0xffff) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v8 = (float)VectorUnsignedToFloat(temp_v2 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v9 = (float)VectorUnsignedToFloat((temp_v2 & 0xffffff) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v11 = (float)VectorUnsignedToFloat(temp_v2 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
  DAT_004ea91c = temp_v8 * 0.003921569f * DAT_004ea92c;
  DAT_004ea920 = temp_v9 * 0.003921569f * DAT_004ea930;
  DAT_004ea924 = temp_v10 * 0.003921569f * DAT_004ea934;
  DAT_004ea928 = temp_v11 * 0.003921569f * DAT_004ea938;
  temp_v1 = VectorFloatToUnsigned(DAT_004ea91c * 255.0f,3);
  temp_v2 = VectorFloatToUnsigned(DAT_004ea920 * 255.0f,3);
  temp_v3 = VectorFloatToUnsigned(DAT_004ea924 * 255.0f,3);
  temp_v9 = (float)VectorFloatToUnsigned(DAT_004ea928 * 255.0f,3);
  *(unsigned int *)(puVar9 + 0x28) =
       ((temp_v3 & 0xff) << 8) | ((unsigned int)temp_v9 & 0xff) | ((temp_v2 & 0xff) << 0x10) | (temp_v1 << 0x18);
  FUN_00269508(param_1 + 100,temp_v4,temp_v5);
  temp_v10 = *(float *)(param_1 + 0xc0) * temp_v9;
  FUN_00269508(param_1 + 0xd0,temp_v4,temp_v5);
  temp_v8 = temp_v9;
  FUN_00269508(param_1 + 0xfc,temp_v4,temp_v5);
  temp_v23 = CONCAT44(temp_v9,temp_v8);
  FUN_00269508(param_1 + 0x90,temp_v4,temp_v5);
  temp_v9 = 16.0f;
  temp_v8 = 0.0625f;
  temp_v11 = 0.0f;
  if (*(int *)(param_1 + 0x144) != 0) {
    FUN_00256f88(*(int *)(param_1 + 0x144),temp_v4);
    FUN_00256dbc(*(unsigned int *)(param_1 + 0x144),&temp_v74);
    temp_v68 = VectorFloatToUnsigned(temp_v79,3);
    temp_v89 = VectorFloatToUnsigned(fStack_9c,3);
    temp_v75 = temp_v75 * temp_v8;
    *(unsigned int *)(puVar9 + 2) = temp_v77;
    temp_v76 = temp_v76 * temp_v8;
    temp_v2 = VectorFloatToUnsigned(temp_v78 * temp_v79 * temp_v9,3);
    temp_v3 = VectorFloatToUnsigned(fStack_b0 * temp_v79 * temp_v9,3);
    temp_v4 = VectorFloatToUnsigned(fStack_b4 * fStack_9c * temp_v9,3);
    temp_v1 = VectorFloatToUnsigned(fStack_ac * fStack_9c * temp_v9,3);
    temp_v29 = (temp_v2 & 0xffff) | (temp_v4 << 0x10);
    temp_v69 = (temp_v1 << 0x10) | (temp_v3 & 0xffff);
    temp_v70 = (temp_v2 & 0xffff) | (temp_v1 << 0x10);
    temp_v71 = (temp_v3 & 0xffff) | (temp_v4 << 0x10);
    FUN_002694f8(temp_v77);
  }
  else if (*(int *)(param_1 + 0x140) != 0) {
    FUN_00256cd8(*(int *)(param_1 + 0x140),temp_v4,&temp_v82);
    temp_v68 = VectorFloatToUnsigned(temp_v83,3);
    temp_v89 = VectorFloatToUnsigned(temp_v84,3);
    temp_v29 = 0;
    temp_v71 = (unsigned int)(temp_v83 * temp_v9);
    temp_v1 = (int)(temp_v84 * temp_v9);
    *(unsigned int *)(puVar9 + 2) = temp_v85;
    temp_v70 = temp_v1 << 0x10;
    temp_v9 = (float)VectorSignedToFloat(temp_v71,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v24 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v69 = (temp_v71 & 0xffff) | (temp_v1 << 0x10);
    temp_v71 = temp_v71 & 0xffff;
    temp_v75 = (float)VectorSignedToFloat((int)(temp_v82 * temp_v9) >> 5,(unsigned char)(in_fpscr >> 0x16) & 3
                                         );
    temp_v76 = (float)VectorSignedToFloat((int)(fStack_88 * temp_v24) >> 5,
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v75 = temp_v75 * temp_v8;
    temp_v76 = temp_v76 * temp_v8;
    temp_v77 = temp_v85;
    temp_v74 = temp_v11;
    fStack_cc = temp_v11;
    FUN_002694f8(temp_v77);
  }
  else {
    FUN_002f81b0(puVar9,&temp_v80);
    temp_v2 = temp_v80 << 4;
    temp_v9 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v24 = (float)VectorSignedToFloat(temp_v81 << 4,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v70 = temp_v81 << 0x14;
    temp_v71 = temp_v2 & 0xffff;
    temp_v69 = (temp_v81 << 0x14) | (temp_v2 & 0xffff);
    temp_v29 = 0;
    temp_v75 = temp_v9 * 0.03125f * temp_v8;
    temp_v76 = temp_v24 * 0.03125f * temp_v8;
    temp_v68 = temp_v80;
    temp_v89 = temp_v81;
    temp_v74 = temp_v11;
    fStack_cc = temp_v11;
  }
  temp_v8 = *(float *)(param_1 + 0x128);
  temp_v24 = *(float *)(param_1 + 300);
  temp_v9 = *(float *)(param_1 + 0x130);
  temp_v2 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v8 == temp_v11) << 0x1e);
  pfVar8 = *(float **)(*(int *)(puVar9 + 4) + 0x30);
  pfVar10 = *(float **)(*(int *)(puVar9 + 4) + 0x3c);
  temp_v6 = 0;
  if (romwright_subpiece_4_1_0(temp_v2 >> 0x1e,0)) {
    temp_v2 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v24 == temp_v11) << 0x1e);
    temp_v6 = romwright_subpiece_4_1_0(temp_v2 >> 0x1e,0);
  }
  if ((!temp_v6) ||
     (temp_v2 = (temp_v2 & 0xfffffff) | ((unsigned int)(temp_v9 == temp_v11) << 0x1e), temp_v13 = temp_v11,
     temp_v18 = temp_v11, temp_v7 = temp_v11, !romwright_subpiece_4_1_0(temp_v2 >> 0x1e,0))) {
    temp_v7 = 1.0f / romwright_sqrt_4(temp_v8 * temp_v8 + temp_v24 * temp_v24 + temp_v9 * temp_v9);
    temp_v13 = temp_v8 * temp_v7;
    temp_v18 = temp_v9 * temp_v7;
    temp_v7 = temp_v24 * temp_v7;
  }
  temp_v26 = CONCAT44(temp_v7,temp_v11);
  temp_v74 = temp_v74 - *(float *)(param_1 + 200) * temp_v75 * 0.5f;
  fStack_cc = fStack_cc - *(float *)(param_1 + 0xcc) * temp_v76 * 0.5f;
  temp_v57 = temp_v74 + temp_v75;
  fStack_164 = temp_v74 - temp_v75;
  temp_v59 = fStack_cc + temp_v76;
  temp_v64 = fStack_cc - temp_v76;
  temp_v58 = temp_v11;
  temp_v60 = temp_v11;
  temp_v61 = temp_v59;
  temp_v62 = temp_v57;
  temp_v63 = temp_v11;
  temp_v65 = fStack_164;
  temp_v66 = temp_v11;
  temp_v67 = temp_v64;
  if (((DAT_00476638 & 1) == 0) && (temp_v1 = FUN_002bfefc(&DAT_00476638), temp_v1 != 0)) {
    DAT_004efda0 = (unsigned int)temp_v26;
    DAT_004efd9c = 0x3f800000;
    DAT_004efdb0 = 0x3f800000;
    DAT_004efdc4 = 0x3f800000;
    DAT_004efdd8 = 0x3f800000;
    DAT_004efda4 = DAT_004efda0;
    DAT_004efda8 = DAT_004efda0;
    DAT_004efdac = DAT_004efda0;
    DAT_004efdb4 = DAT_004efda0;
    DAT_004efdb8 = DAT_004efda0;
    DAT_004efdbc = DAT_004efda0;
    DAT_004efdc0 = DAT_004efda0;
    DAT_004efdc8 = DAT_004efda0;
    DAT_004efdcc = DAT_004efda0;
    DAT_004efdd0 = DAT_004efda0;
    DAT_004efdd4 = DAT_004efda0;
  }
  FUN_002bfe28(temp_v27,&DAT_004efd9c);
  temp_v86 = temp_v10 * (float)temp_v23;
  temp_v88 = temp_v10 * (float)((unsigned long long)temp_v23 >> 0x20);
  temp_v87 = temp_v10;
  FUN_00256c98(temp_v27,&temp_v86);
  temp_v10 = (float)temp_v26;
  temp_v23 = CONCAT44(temp_v9,0xbf800000);
  FUN_002ad314(&temp_v72,temp_v73);
  temp_v25 = CONCAT44(0x3f800000,temp_v24);
  temp_v9 = 1.0f - temp_v73[0];
  temp_v11 = (float)temp_v23;
  temp_v30 = temp_v73[0] + temp_v9 * temp_v10;
  temp_v35 = temp_v73[0] + temp_v9 * 1.0f;
  temp_v34 = temp_v9 * temp_v10 * temp_v11;
  temp_v32 = temp_v9 * temp_v10 * temp_v10;
  temp_v36 = temp_v9 * temp_v11 * temp_v10;
  temp_v31 = temp_v34 - temp_v72 * temp_v10;
  fStack_1cc = temp_v36 + temp_v72 * temp_v10;
  temp_v38 = temp_v32 - temp_v72 * temp_v11;
  temp_v34 = temp_v34 + temp_v72 * temp_v10;
  temp_v32 = temp_v32 + temp_v72 * temp_v11;
  temp_v36 = temp_v36 - temp_v72 * temp_v10;
  temp_v44 = 0x3f800000;
  temp_v33 = temp_v10;
  temp_v37 = temp_v10;
  temp_v39 = temp_v30;
  temp_v40 = temp_v10;
  temp_v41 = temp_v10;
  temp_v42 = temp_v10;
  temp_v43 = temp_v10;
  nn_math_ARMv6_MTX44MultAsm(temp_v27,&temp_v30);
  temp_v28 = temp_v27;
  pfVar6 = &temp_v45;
  pfVar7 = &temp_v57;
  temp_v3 = 0;
  do {
    FUN_00257320(pfVar6,temp_v28,pfVar7);
    temp_v3 = temp_v3 + 1;
    pfVar6 = pfVar6 + 4;
    pfVar7 = pfVar7 + 3;
  } while (temp_v3 < 4);
  temp_v17 = (float)VectorUnsignedToFloat(temp_v68 << 4,(unsigned char)(temp_v2 >> 0x16) & 3);
  temp_v9 = *(float *)(param_1 + 0x134);
  temp_v24 = (float)VectorUnsignedToFloat(temp_v89 << 4,(unsigned char)(temp_v2 >> 0x16) & 3);
  temp_v10 = temp_v22 * 0.5f;
  temp_v11 = (float)((unsigned long long)temp_v25 >> 0x20);
  temp_v24 = temp_v11 / temp_v24;
  temp_v19 = (float)VectorUnsignedToFloat(temp_v69 >> 0x10,(unsigned char)(temp_v2 >> 0x16) & 3);
  temp_v20 = (float)VectorUnsignedToFloat(temp_v29 & 0xffff,(unsigned char)(temp_v2 >> 0x16) & 3);
  temp_v12 = (float)VectorUnsignedToFloat(temp_v71 & 0xffff,(unsigned char)(temp_v2 >> 0x16) & 3);
  temp_v14 = (float)VectorUnsignedToFloat(temp_v70 & 0xffff,(unsigned char)(temp_v2 >> 0x16) & 3);
  temp_v16 = (float)VectorUnsignedToFloat(temp_v69 & 0xffff,(unsigned char)(temp_v2 >> 0x16) & 3);
  temp_v7 = (temp_v8 + temp_v13 * temp_v9 * temp_v10) * temp_v22;
  temp_v21 = (float)VectorUnsignedToFloat(temp_v29 >> 0x10,(unsigned char)(temp_v2 >> 0x16) & 3);
  temp_v13 = (float)VectorUnsignedToFloat(temp_v71 >> 0x10,(unsigned char)(temp_v2 >> 0x16) & 3);
  temp_v15 = (float)VectorUnsignedToFloat(temp_v70 >> 0x10,(unsigned char)(temp_v2 >> 0x16) & 3);
  temp_v11 = temp_v11 / temp_v17;
  temp_v18 = ((float)((unsigned long long)temp_v23 >> 0x20) + temp_v18 * temp_v9 * temp_v10) * temp_v22;
  temp_v8 = ((float)temp_v25 + (float)((unsigned long long)temp_v26 >> 0x20) * temp_v9 * temp_v10) * temp_v22 -
           *(float *)(param_1 + 0x138) * temp_v22 * temp_v22 * 0.5f;
  *pfVar8 = temp_v45 + temp_v7;
  pfVar8[1] = temp_v46 + temp_v8;
  pfVar8[2] = temp_v47 + temp_v18;
  pfVar8[3] = temp_v48 + temp_v7;
  pfVar8[4] = temp_v49 + temp_v8;
  pfVar8[5] = temp_v50 + temp_v18;
  pfVar8[6] = temp_v51 + temp_v7;
  pfVar8[7] = temp_v52 + temp_v8;
  pfVar8[8] = temp_v53 + temp_v18;
  pfVar8[9] = temp_v54 + temp_v7;
  pfVar8[10] = temp_v55 + temp_v8;
  pfVar8[0xb] = temp_v56 + temp_v18;
  pfVar10[6] = temp_v20 * temp_v11;
  pfVar10[7] = temp_v21 * temp_v24;
  pfVar10[4] = temp_v12 * temp_v11;
  pfVar10[5] = temp_v13 * temp_v24;
  *pfVar10 = temp_v16 * temp_v11;
  pfVar10[1] = temp_v19 * temp_v24;
  pfVar10[2] = temp_v14 * temp_v11;
  pfVar10[3] = temp_v15 * temp_v24;
  if (*(char *)(param_1 + 0xc4) != '\0') {
    temp_v0 = *puVar9 | 0x100;
  }
  else {
    temp_v0 = *puVar9 & 0xfeff;
  }
  *puVar9 = temp_v0;
  FUN_00256a50(puVar9,*(unsigned int *)(param_1 + 0x58) & 0xffff);
  return;
}

} /* extern "C" */
