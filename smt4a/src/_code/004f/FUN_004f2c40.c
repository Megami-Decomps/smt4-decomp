/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f2c40` (_code @ 0x4f2c40, 0x1298 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

#ifndef ROMWRIGHT_FLOAT_BITS_DEFINED
#define ROMWRIGHT_FLOAT_BITS_DEFINED
static unsigned int romwright_f2u(float value)
{
    union { float f; unsigned int u; } bits;
    bits.f = value;
    return bits.u;
}
static float romwright_u2f(unsigned int value)
{
    union { float f; unsigned int u; } bits;
    bits.u = value;
    return bits.f;
}
#endif
/* stack frame of param_1: 40 slot(s), 160 byte(s) */
typedef struct {
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
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
    unsigned int spE0; /* 0xe0: local_e0 */
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned int spF4; /* 0xf4: local_f4 */
    unsigned int spF8; /* 0xf8: local_f8 */
    unsigned int spFC; /* 0xfc: local_fc */
    unsigned int sp110; /* 0x110: local_110 */
    unsigned int sp114; /* 0x114: local_114 */
    unsigned int sp118; /* 0x118: local_118 */
    unsigned int sp120; /* 0x120: local_120 */
} param_1_stack;

extern float DAT_0057150c; /* 0x57150c */
extern float DAT_00571510; /* 0x571510 */
extern int DAT_00571514; /* 0x571514 */
extern unsigned int DAT_00571518; /* 0x571518 */
extern float fRam0057151c; /* 0x57151c */
extern int DAT_00571520; /* 0x571520 */
extern int DAT_00571524; /* 0x571524 */
extern int DAT_00571528; /* 0x571528 */
extern int DAT_0057152c; /* 0x57152c */
extern int DAT_00589144; /* 0x589144 */
extern float DAT_005e1530; /* 0x5e1530 */
extern float DAT_005e1534; /* 0x5e1534 */
extern float DAT_005e1538; /* 0x5e1538 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Supplied declaration required: FUN_001418fc. */
/* Supplied declaration required: FUN_0014f0dc. */
extern unsigned int FUN_00184964(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0018a924. */
/* Supplied declaration required: FUN_001a1ee0. */
/* Supplied declaration required: FUN_001aff14. */
/* Supplied declaration required: FUN_00203a5c. */
extern float *FUN_00208bfc(void);
extern int FUN_0022a00c(float *);
/* Supplied declaration required: FUN_00280070. */
extern int FUN_00283214(void);
/* Supplied declaration required: FUN_002e5104. */
/* Supplied declaration required: FUN_002e512c. */
/* Supplied declaration required: FUN_0031b91c. */
/* Supplied declaration required: FUN_003d37bc. */
/* Supplied declaration required: FUN_003d4dd4. */
/* Supplied declaration required: FUN_003d8f24. */
/* Supplied declaration required: FUN_003d9174. */
/* Supplied declaration required: FUN_003f9c6c. */
/* Supplied declaration required: FUN_004f0c80. */
/* Supplied declaration required: FUN_004f112c. */
/* Supplied declaration required: FUN_004f1708. */
/* Supplied declaration required: FUN_004f18e8. */
/* Supplied declaration required: FUN_004f1f78. */
/* Supplied declaration required: FUN_004f2094. */
/* Supplied declaration required: FUN_004f2548. */


unsigned int FUN_004f2c40(float *param_1)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr, in_s0; 24 native warning(s); review required */
  float temp_v0;
  unsigned int temp_v1;
  float temp_v2;
  float *pfVar4;
  int temp_v3;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v4;
  float temp_v5;
  unsigned long long temp_v6;
  float temp_v7;
  float temp_v8;
  unsigned long long temp_v9;
  float temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  float *temp_v13;
  float *pfStack_11c;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float fStack_10c;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  float *temp_v20;
  float temp_v21;
  float temp_v22;
  float temp_v23;
  float temp_v24;
  float temp_v25;
  float temp_v26;
  float temp_v27;
  float temp_v28;
  float temp_v29;
  float temp_v30;
  float temp_v31;
  float temp_v32;
  float temp_v33;
  float temp_v34;
  float temp_v35;
  float *temp_v36;
  float *temp_v37 [2];
  float temp_v38;
  float temp_v39;
  float *temp_v40;
  float *temp_v41;
  float temp_v42;
  float temp_v43;
  float *temp_v44;
  float temp_v45;
  float temp_v46;
  float temp_v47;
  float *temp_v48;
  float *temp_v49;
  float *temp_v50;
  float *temp_v51;
  float *temp_v52;
  
  temp_v3 = DAT_00589144;
  temp_v44 = param_1 + 0x19e;
  pfVar6 = param_1 + 0x193;
  temp_v10 = 1.0f;
  temp_v11 = 0x46c35000;
  temp_v12 = 0x3dcccccd;
  switch((int)romwright_f2u((float)(param_1[0xe]))) {
  case 0x1:
    if (((unsigned int)param_1[0x193] & 0x20000000) != 0) {
      param_1[0xe] = 2.8026e-45f;
      param_1[0xf] = 0.0f;
      *(unsigned char *)(temp_v3 + 8) = 1;
      break;
    }
    if (((unsigned int)param_1[0x193] & 1) != 0) {
      FUN_004f18e8(param_1,param_1[0x195]);
      temp_v0 = (float)((int)param_1[0x195] + 1);
      param_1[0x195] = temp_v0;
      if ((int)param_1[0x194] < (int)temp_v0) {
        *pfVar6 = (float)((unsigned int)param_1[0x193] & 0xfffffffe);
      }
    }
    temp_v0 = 0.0f;
    temp_v48 = param_1 + 0x1ab;
    if (((unsigned int)param_1[0x193] & 2) != 0) {
      if (param_1[0x1ae] == 0.0f) {
        temp_v2 = 0.2f;
      }
      else {
        temp_v2 = temp_v0;
        if (param_1[0x1ae] == 1.4013e-45f) {
          temp_v2 = temp_v10;
        }
      }
      temp_v1 = FUN_00184964(0xffffff9c,100);
      in_s0 = 0.01f;
      temp_v4 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v5 = temp_v2 * temp_v4 * 0.01f;
      temp_v1 = FUN_00184964(0xffffff9c,100);
      temp_v4 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v7 = temp_v2 * temp_v4 * in_s0;
      temp_v1 = FUN_00184964(0xffffff9c,100);
      temp_v4 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
      in_s0 = temp_v2 * temp_v4 * in_s0;
      param_1[0x1ad] = in_s0;
      param_1[0x1ab] = temp_v5;
      param_1[0x1ac] = temp_v7;
      temp_v2 = param_1[0x1b0];
      param_1[0x1b0] = (float)((int)temp_v2 + 1);
      if ((int)param_1[0x1af] < (int)temp_v2 + 1) {
        *pfVar6 = (float)((unsigned int)param_1[0x193] & 0xfffffffd);
        temp_v48[2] = temp_v0;
        temp_v48[1] = temp_v0;
        *temp_v48 = temp_v0;
      }
    }
    pfVar4 = param_1 + 0x171;
    if (((unsigned int)param_1[0x193] & 4) != 0) {
      in_s0 = *pfVar4;
      temp_v2 = in_s0 - param_1[0x160];
      FUN_003d4dd4(param_1[0x1b6],param_1[0x1b4],param_1[0x1b5]);
      in_s0 = in_s0 * temp_v2;
      param_1[0x1b1] = in_s0;
      temp_v2 = (float)((int)param_1[0x1b5] + 1);
      param_1[0x1b5] = temp_v2;
      if ((int)param_1[0x1b4] < (int)temp_v2) {
        *pfVar6 = (float)((unsigned int)param_1[0x193] & 0xfffffffb);
      }
    }
    if (((unsigned int)param_1[0x193] & 8) != 0) {
      in_s0 = param_1[0x17d];
      temp_v2 = in_s0 - param_1[0x16c];
      FUN_003d4dd4(param_1[0x1ba],param_1[0x1b8],param_1[0x1b9]);
      in_s0 = in_s0 * temp_v2;
      param_1[0x1b7] = in_s0;
      temp_v2 = (float)((int)param_1[0x1b9] + 1);
      param_1[0x1b9] = temp_v2;
      if ((int)param_1[0x1b8] < (int)temp_v2) {
        *pfVar6 = (float)((unsigned int)param_1[0x193] & 0xfffffff7);
      }
    }
    if (((unsigned int)param_1[0x193] & 0x10) != 0) {
      FUN_004f0c80(param_1,param_1[0x1bc]);
      temp_v2 = (float)((int)param_1[0x1bc] + 1);
      param_1[0x1bc] = temp_v2;
      if ((int)param_1[0x1bb] < (int)temp_v2) {
        *pfVar6 = (float)((unsigned int)param_1[0x193] & 0xffffffef);
      }
    }
    if (((unsigned int)param_1[0x193] & 0x20) != 0) {
      temp_v2 = (float)VectorSignedToFloat(param_1[0x1c0],(unsigned char)(in_fpscr >> 0x16) & 3);
      in_s0 = temp_v2 * DAT_00571510 * 40.743664f;
      FUN_001a1ee0();
      in_s0 = in_s0 * DAT_0057150c;
      param_1[0x1be] = in_s0;
      param_1[0x1c0] = (float)((int)param_1[0x1c0] + 1);
    }
    if (((unsigned int)param_1[0x193] & 0x80000) != 0) {
      in_s0 = param_1[7];
      temp_v4 = param_1[10] - in_s0;
      temp_v5 = param_1[0xb] - param_1[8];
      temp_v7 = param_1[0xc] - param_1[9];
      FUN_003d4dd4(0,param_1[0x1e6],param_1[0x1e5]);
      temp_v2 = param_1[0x1e5];
      param_1[0x1e5] = (float)((int)temp_v2 + 1);
      param_1[2] = param_1[9] + temp_v7 * in_s0;
      *param_1 = param_1[7] + temp_v4 * in_s0;
      param_1[1] = param_1[8] + temp_v5 * in_s0;
      if ((int)param_1[0x1e6] < (int)temp_v2 + 1) {
        *param_1 = param_1[10];
        param_1[1] = param_1[0xb];
        param_1[2] = param_1[0xc];
        *pfVar6 = (float)((unsigned int)param_1[0x193] & 0xfff7ffff);
      }
    }
    if (((unsigned int)param_1[0x193] & 0x800000) != 0) {
      FUN_004f1f78(param_1);
    }
    temp_v50 = param_1 + 0x215;
    temp_v49 = param_1 + 0x221;
    pfVar8 = param_1 + 0x169;
    pfVar7 = param_1 + 0x200;
    temp_v36 = param_1 + 0x22b;
    temp_v37[0] = param_1 + 0x213;
    temp_v40 = param_1 + 0x20a;
    temp_v20 = param_1 + 0x21f;
    temp_v41 = param_1 + 0x204;
    if (((unsigned int)param_1[0x193] & 0x100) == 0) {
      if (((unsigned int)param_1[0x193] & 0x200) != 0) {
        FUN_003d4dd4(param_1[0x1c4],param_1[0x1c2],param_1[0x1c3]);
        in_s0 = in_s0 * param_1[0x17d];
        param_1[0x1c1] = in_s0;
        temp_v2 = (float)((int)param_1[0x1c3] + 1);
        param_1[0x1c3] = temp_v2;
        if ((int)param_1[0x1c2] < (int)temp_v2) {
          *pfVar6 = (float)((unsigned int)param_1[0x193] & 0xfffffdff);
        }
      }
      if (((unsigned int)param_1[0x193] & 0x400) != 0) {
        if (((unsigned int)param_1[0x193] & 0x200000) != 0) {
          in_s0 = param_1[0x181];
          temp_v2 = in_s0 - param_1[0x192];
          FUN_003d4dd4(param_1[0x1c8],param_1[0x1c6],param_1[0x1c7]);
          param_1[0x1c5] = param_1[0x192] + temp_v2 * in_s0;
        }
        else {
          FUN_003d4dd4(param_1[0x1c8],param_1[0x1c6],param_1[0x1c7]);
          in_s0 = in_s0 * param_1[0x181];
          param_1[0x1c5] = in_s0;
        }
        temp_v2 = param_1[0x1c7];
        param_1[0x1c7] = (float)((int)temp_v2 + 1);
        if ((int)param_1[0x1c6] < (int)temp_v2 + 1) {
          *pfVar6 = (float)((unsigned int)param_1[0x193] & 0xffdffbff);
        }
      }
      if (((unsigned int)param_1[0x193] & 0x800) != 0) {
        in_s0 = param_1[0x180];
        temp_v2 = in_s0 - param_1[0x191];
        FUN_003d4dd4(param_1[0x1cc],param_1[0x1ca],param_1[0x1cb]);
        in_s0 = in_s0 * temp_v2;
        param_1[0x16f] = in_s0;
        temp_v2 = (float)((int)param_1[0x1cb] + 1);
        param_1[0x1cb] = temp_v2;
        if ((int)param_1[0x1ca] < (int)temp_v2) {
          *pfVar6 = (float)((unsigned int)param_1[0x193] & 0xfffff7ff);
        }
      }
      pfVar10 = param_1 + 0x1d2;
      if (((unsigned int)param_1[0x193] & 0x1000) != 0) {
        temp_v2 = *pfVar4;
        in_s0 = temp_v2 - param_1[0x160];
        FUN_003d4dd4(param_1[0x1d3],param_1[0x1d1],param_1[0x1d2]);
        in_s0 = in_s0 * temp_v2;
        param_1[0x1ce] = in_s0;
        temp_v2 = *pfVar10;
        *pfVar10 = (float)((int)temp_v2 + 1);
        if ((int)param_1[0x1d1] < (int)temp_v2 + 1) {
          *pfVar6 = (float)((unsigned int)param_1[0x193] & 0xffffefff);
        }
      }
      temp_v52 = param_1 + 0x177;
      temp_v51 = param_1 + 0x1d7;
      pfVar9 = param_1 + 0x1d8;
      if (((unsigned int)param_1[0x193] & 0x2000) != 0) {
        temp_v2 = param_1[0x16b] - param_1[0x1d6];
        temp_v5 = *temp_v52 - (*pfVar8 - param_1[0x1d4]);
        temp_v4 = param_1[0x178] - (param_1[0x16a] - param_1[0x1d5]);
        in_s0 = param_1[0x179] - temp_v2;
        FUN_003d4dd4(param_1[0x1d9],param_1[0x1d7],param_1[0x1d8]);
        in_s0 = in_s0 * temp_v2;
        param_1[0x1d6] = in_s0;
        param_1[0x1d4] = temp_v5 * temp_v2;
        param_1[0x1d5] = temp_v4 * temp_v2;
        temp_v2 = *pfVar9;
        *pfVar9 = (float)((int)temp_v2 + 1);
        if ((int)*temp_v51 < (int)temp_v2 + 1) {
          *pfVar6 = (float)((unsigned int)param_1[0x193] & 0xffffdfff);
        }
      }
      if (((unsigned int)param_1[0x193] & 0x8000) != 0) {
        temp_v2 = temp_v52[2];
        temp_v4 = *temp_v52 - DAT_005e1530;
        temp_v5 = temp_v52[1] - DAT_005e1534;
        temp_v7 = temp_v2 - DAT_005e1538;
        FUN_003d4dd4(param_1[0x1d9],param_1[0x1d7],param_1[0x1d8]);
        param_1[0x1d4] = DAT_005e1530 + temp_v4 * temp_v2;
        param_1[0x1d5] = DAT_005e1534 + temp_v5 * temp_v2;
        in_s0 = DAT_005e1538 + temp_v7 * temp_v2;
        param_1[0x1d6] = in_s0;
        temp_v2 = *pfVar9;
        *pfVar9 = (float)((int)temp_v2 + 1);
        if ((int)*temp_v51 < (int)temp_v2 + 1) {
          *pfVar6 = (float)((unsigned int)param_1[0x193] & 0xffff7fff);
        }
      }
      if (((unsigned int)param_1[0x193] & 0x10000) != 0) {
        FUN_004f1708(param_1);
        temp_v2 = param_1[0x1e1];
        param_1[0x1e1] = (float)((int)temp_v2 + 1);
        if ((int)param_1[0x1e0] < (int)temp_v2 + 1) {
          *pfVar6 = (float)((unsigned int)param_1[0x193] & 0xfffeffff);
        }
      }
      if (((unsigned int)param_1[0x193] & 0x20000) != 0) {
        FUN_004f2548(param_1);
        temp_v2 = param_1[0x1d2];
        *pfVar10 = (float)((int)temp_v2 + 1);
        if ((int)param_1[0x1d1] < (int)temp_v2 + 1) {
          *pfVar6 = (float)((unsigned int)param_1[0x193] & 0xfffdffff);
        }
      }
      if (((unsigned int)param_1[0x193] & 0x100) != 0) goto LAB_004f33d8;
      *pfVar7 = temp_v0;
      param_1[0x206] = temp_v0;
      param_1[0x20f] = temp_v0;
      param_1[0x20c] = temp_v0;
      temp_v50[2] = temp_v0;
      temp_v50[1] = temp_v0;
      *temp_v50 = temp_v0;
      temp_v49[2] = temp_v0;
      temp_v49[1] = temp_v0;
      *temp_v49 = temp_v0;
      param_1[0x204] = 0.0f;
      param_1[0x20a] = 0.0f;
      param_1[0x213] = 0.0f;
      param_1[0x21f] = 0.0f;
      param_1[0x22b] = 0.0f;
    }
    else {
LAB_004f33d8:
      if (((unsigned int)param_1[0x193] & 0x200) != 0) {
        temp_v2 = fRam0057151c;
        FUN_003d4dd4(DAT_00571518,DAT_00571514,param_1[0x204]);
        in_s0 = in_s0 * temp_v2;
        *pfVar7 = in_s0;
        temp_v2 = *temp_v41;
        *temp_v41 = (float)((int)temp_v2 + 1);
        if (DAT_00571514 < (int)temp_v2 + 1) {
          *pfVar6 = (float)((unsigned int)param_1[0x193] & 0xfffffdff);
        }
      }
      if (((unsigned int)param_1[0x193] & 0x400) != 0) {
        temp_v2 = param_1[0x181];
        FUN_003d4dd4(param_1[0x20b],param_1[0x209],param_1[0x20a]);
        param_1[0x206] = in_s0 * temp_v2;
        temp_v2 = *temp_v40;
        *temp_v40 = (float)((int)temp_v2 + 1);
        if (DAT_00571520 < (int)temp_v2 + 1) {
          *pfVar6 = (float)((unsigned int)param_1[0x193] & 0xfffffbff);
        }
      }
      if (((unsigned int)param_1[0x193] & 0x800) != 0) {
        temp_v2 = param_1[0x180];
        temp_v4 = temp_v2 - param_1[0x191];
        FUN_003d4dd4(param_1[0x214],param_1[0x212],param_1[0x213]);
        param_1[0x20c] = temp_v2 * temp_v4;
        temp_v2 = *temp_v37[0];
        *temp_v37[0] = (float)((int)temp_v2 + 1);
        if (DAT_00571524 < (int)temp_v2 + 1) {
          *pfVar6 = (float)((unsigned int)param_1[0x193] & 0xfffff7ff);
        }
      }
      if (((unsigned int)param_1[0x193] & 0x1000) != 0) {
        temp_v2 = *pfVar4;
        temp_v4 = temp_v2 - param_1[0x160];
        FUN_003d4dd4(param_1[0x220],param_1[0x21e],param_1[0x21f]);
        param_1[0x215] = temp_v2 * temp_v4;
        temp_v2 = *temp_v20;
        *temp_v20 = (float)((int)temp_v2 + 1);
        if (DAT_00571528 < (int)temp_v2 + 1) {
          *pfVar6 = (float)((unsigned int)param_1[0x193] & 0xffffefff);
        }
      }
      if (((unsigned int)param_1[0x193] & 0x2000) != 0) {
        FUN_004f2094(param_1);
        temp_v2 = param_1[0x22b];
        *temp_v36 = (float)((int)temp_v2 + 1);
        if (DAT_0057152c < (int)temp_v2 + 1) {
          *pfVar6 = (float)((unsigned int)param_1[0x193] & 0xffffdfff);
        }
      }
    }
    temp_v38 = temp_v0;
    temp_v39 = temp_v0;
    if (((unsigned int)param_1[0x193] & 0x4000) != 0) {
      FUN_00203a5c();
      FUN_003d8f24();
      FUN_00203a5c();
      pfVar4 = (float *)FUN_00208bfc();
      temp_v38 = *pfVar4;
      temp_v39 = pfVar4[1];
    }
    if (((unsigned int)param_1[0x193] & 0x40000) != 0) {
      FUN_003d8f24(param_1 + 0x11);
      FUN_003d37bc(param_1 + 0x11,&temp_v38,&temp_v39);
      temp_v3 = FUN_0022a00c(param_1 + 0x11);
      if (temp_v3 != 0) {
        param_1[0x11] = 0.0f;
        param_1[0x12] = 0.0f;
        param_1[0x13] = 0.0f;
        param_1[0x14] = 0.0f;
        param_1[0x15] = 0.0f;
        *pfVar6 = (float)((unsigned int)param_1[0x193] & 0xfffbffff);
      }
    }
    temp_v42 = temp_v0;
    temp_v43 = temp_v0;
    if (((unsigned int)param_1[0x193] & 0x400000) != 0) {
      FUN_003d8f24(param_1 + 0x16);
      FUN_003d37bc(param_1 + 0x16,&temp_v42,&temp_v43);
      temp_v3 = FUN_0022a00c(param_1 + 0x16);
      if (temp_v3 != 0) {
        param_1[0x16] = 0.0f;
        param_1[0x17] = 0.0f;
        param_1[0x18] = 0.0f;
        param_1[0x19] = 0.0f;
        param_1[0x1a] = 0.0f;
        *pfVar6 = (float)((unsigned int)param_1[0x193] & 0xffbfffff);
      }
    }
    temp_v33 = temp_v0;
    temp_v34 = temp_v10;
    temp_v35 = temp_v0;
    FUN_001aff14(&temp_v21,1);
    temp_v5 = param_1[0x166];
    temp_v4 = param_1[0x167];
    temp_v2 = param_1[0x168];
    temp_v8 = temp_v21 * temp_v5 + temp_v22 * temp_v4 + temp_v23 * temp_v2;
    temp_v7 = temp_v25 * temp_v5 + temp_v26 * temp_v4 + temp_v27 * temp_v2;
    temp_v2 = temp_v29 * temp_v5 + temp_v30 * temp_v4 + temp_v31 * temp_v2;
    FUN_0018a924(temp_v37,&temp_v51);
    temp_v4 = temp_v10 - romwright_u2f((unsigned int)(temp_v51));
    temp_v10 = temp_v10 / romwright_sqrt_4(temp_v8 * temp_v8 + temp_v7 * temp_v7 + temp_v2 * temp_v2);
    temp_v8 = temp_v8 * temp_v10;
    temp_v7 = temp_v7 * temp_v10;
    temp_v2 = temp_v2 * temp_v10;
    temp_v23 = temp_v4 * temp_v8 * temp_v2;
    temp_v22 = temp_v4 * temp_v8 * temp_v7;
    temp_v30 = temp_v4 * temp_v7 * temp_v2;
    temp_v21 = romwright_u2f((unsigned int)(temp_v51)) + temp_v4 * temp_v8 * temp_v8;
    temp_v31 = romwright_u2f((unsigned int)(temp_v51)) + temp_v4 * temp_v2 * temp_v2;
    temp_v26 = romwright_u2f((unsigned int)(temp_v51)) + temp_v4 * temp_v7 * temp_v7;
    temp_v25 = temp_v22 + romwright_u2f((unsigned int)(temp_v37[0])) * temp_v2;
    temp_v29 = temp_v23 - romwright_u2f((unsigned int)(temp_v37[0])) * temp_v7;
    temp_v23 = temp_v23 + romwright_u2f((unsigned int)(temp_v37[0])) * temp_v7;
    temp_v22 = temp_v22 - romwright_u2f((unsigned int)(temp_v37[0])) * temp_v2;
    temp_v27 = temp_v30 - romwright_u2f((unsigned int)(temp_v37[0])) * temp_v8;
    temp_v30 = temp_v30 + romwright_u2f((unsigned int)(temp_v37[0])) * temp_v8;
    temp_v10 = param_1[0x166];
    temp_v5 = param_1[0x167];
    temp_v2 = param_1[0x168];
    temp_v14 = param_1[0x160] + param_1[0x1b1] + *temp_v50 + param_1[0x1ce];
    temp_v15 = param_1[0x161] + param_1[0x1b2] + temp_v50[1] + param_1[0x1cf];
    temp_v16 = param_1[0x162] + param_1[0x1b3] + temp_v50[2] + param_1[0x1d0] + param_1[0x1b7] +
                *pfVar7 + param_1[0x1c1];
    temp_v4 = param_1[0x16c];
    temp_v17 = (temp_v21 * temp_v10 + temp_v22 * temp_v5 + temp_v23 * temp_v2) * temp_v4 + temp_v14 +
               *temp_v49 + param_1[0x1d4] + *temp_v48;
    temp_v18 = (temp_v25 * temp_v10 + temp_v26 * temp_v5 + temp_v27 * temp_v2) * temp_v4 + temp_v15 +
               temp_v49[1] + param_1[0x1d5] + temp_v48[1];
    temp_v19 = (temp_v29 * temp_v10 + temp_v30 * temp_v5 + temp_v31 * temp_v2) * temp_v4 + temp_v16 +
               temp_v49[2] + param_1[0x1d6] + temp_v48[2];
    if (((unsigned int)param_1[0x193] & 0x40) != 0) {
      temp_v17 = temp_v17 + param_1[0x1bd];
      temp_v18 = temp_v18 + param_1[0x1be];
      temp_v19 = temp_v19 + param_1[0x1bf];
    }
    if (((unsigned int)param_1[0x193] & 0x80) != 0) {
      temp_v14 = temp_v14 + param_1[0x1bd];
      temp_v15 = temp_v15 + param_1[0x1be];
      temp_v16 = temp_v16 + param_1[0x1bf];
    }
    temp_v17 = temp_v17 + temp_v38 + temp_v42 + param_1[500] + *param_1;
    temp_v18 = temp_v18 + temp_v39 + temp_v43 + param_1[0x1f5] + param_1[1];
    temp_v19 = temp_v19 + param_1[0x1f6] + param_1[2];
    temp_v14 = temp_v14 + temp_v38 + temp_v42 + *param_1 + param_1[0x1e9];
    temp_v15 = temp_v15 + temp_v39 + temp_v43 + param_1[1] + param_1[0x1ea];
    temp_v16 = temp_v16 + param_1[2] + param_1[0x1eb];
    temp_v24 = temp_v0;
    temp_v28 = temp_v0;
    temp_v32 = temp_v0;
    if (((unsigned int)param_1[0x193] & 0xc000000) != 0) {
      FUN_001418fc(param_1 + 0x1b);
    }
    else {
      FUN_001418fc(param_1 + 0x1b);
    }
    temp_v47 = param_1[0x16f] + param_1[0x20c];
    pfStack_11c = &temp_v45;
    temp_v13 = &temp_v33;
    temp_v45 = temp_v0;
    temp_v46 = temp_v0;
    FUN_004f112c(param_1,param_1 + 0x1b,&temp_v14,&temp_v17);
    temp_v9 = romwright_piece_4_4(temp_v12,temp_v11);
    temp_v6 = CONCAT44(temp_v0,param_1[0x170] + param_1[0x206] + param_1[0x1c5] + param_1[3]);
    FUN_00280070(param_1 + 0x1b,0);
    temp_v3 = FUN_00283214();
    if (temp_v3 != 0) {
      FUN_002e5104(&temp_v14);
      FUN_002e512c(&temp_v17);
      FUN_0031b91c();
    }
    param_1[0x163] = temp_v14;
    param_1[0x164] = temp_v15;
    param_1[0x165] = temp_v16;
    *pfVar8 = temp_v17;
    param_1[0x16a] = temp_v18;
    param_1[0x16b] = temp_v19;
    *pfVar8 = *pfVar8 - param_1[500];
    param_1[0x16a] = temp_v18 - param_1[0x1f5];
    param_1[0x16b] = temp_v19 - param_1[0x1f6];
    param_1[0x1fa] = temp_v14 - param_1[0x1e9];
    param_1[0x1fb] = temp_v15 - param_1[0x1ea];
    param_1[0x1fc] = temp_v16 - param_1[0x1eb];
    param_1[0x1fd] = temp_v17 - param_1[500];
    param_1[0x1fe] = temp_v18 - param_1[0x1f5];
    param_1[0x1ff] = temp_v19 - param_1[0x1f6];
    param_1[0x198] = temp_v14;
    param_1[0x199] = temp_v15;
    param_1[0x19a] = temp_v16;
    param_1[0x19b] = temp_v17;
    param_1[0x19c] = temp_v18;
    param_1[0x19d] = temp_v19;
    *temp_v44 = temp_v33;
    temp_v44[1] = temp_v34;
    temp_v44[2] = temp_v35;
    param_1[0x1a1] = (float)temp_v6;
    param_1[0x1a2] = (float)((unsigned long long)temp_v9 >> 0x20);
    param_1[0x1a3] = (float)temp_v9;
    param_1[0x1a4] = 1.6666666f;
    temp_v10 = (float)((unsigned long long)temp_v6 >> 0x20);
    param_1[0x1a5] = temp_v10;
    param_1[0x1a6] = temp_v10;
    param_1[0x1a7] = temp_v10;
    param_1[0x1a8] = temp_v10;
    break;
  case 0x2:
    if (((unsigned int)param_1[0x193] & 0x20000000) == 0) {
      param_1[0xf] = 0.0f;
      param_1[0xe] = 1.4013e-45f;
      *(unsigned char *)(temp_v3 + 8) = 0;
    }
    break;
  case 0x3:
    temp_v10 = param_1[0x196];
    FUN_003f9c6c(temp_v10,param_1 + 0x198,param_1[0x1a9]);
    if (temp_v10 == 0.0f) {
      if (*(char *)(param_1 + 0x1aa) == '\0') {
        param_1[0xf] = 0.0f;
        param_1[0xe] = 1.4013e-45f;
      }
      else {
        param_1[0xf] = 0.0f;
        param_1[0xe] = 5.60519e-45f;
        *(unsigned char *)(param_1 + 0x1aa) = 0;
      }
      break;
    }
  case 0x4:
    temp_v13 = (float *)romwright_f2u((float)(param_1[0x198]));
    pfStack_11c = (float *)romwright_f2u((float)(param_1[0x199]));
    temp_v14 = param_1[0x19a];
    temp_v15 = param_1[0x19b];
    temp_v16 = param_1[0x19c];
    fStack_10c = param_1[0x19d];
    FUN_0014f0dc(param_1 + 0x1b,&temp_v13,&temp_v15,temp_v44);
    FUN_00280070(param_1 + 0x1b,0);
    FUN_003d9174(param_1 + 0x11);
    FUN_003d9174(param_1 + 0x16);
    FUN_00203a5c();
    FUN_003d9174();
    break;
  case 0x5:
    return 0xffffffff;
  }
  temp_v10 = param_1[0xf];
  param_1[0xf] = (float)((int)temp_v10 + 1);
  if ((int)temp_v10 + 1 >= 0xffff) {
    param_1[0xf] = 9.18341e-41f;
  }
  return 0;
}
