/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d7630` (_code @ 0x3d7630, 0x1088 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 40 slot(s), 160 byte(s) */
typedef struct {
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
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
    unsigned int spEC; /* 0xec: local_ec */
    unsigned int spF0; /* 0xf0: local_f0 */
    unsigned int spF4; /* 0xf4: local_f4 */
    unsigned int spF8; /* 0xf8: local_f8 */
    unsigned int spFC; /* 0xfc: local_fc */
    unsigned int sp100; /* 0x100: local_100 */
    unsigned int sp108; /* 0x108: local_108 */
} param_1_stack;

extern float DAT_004342cc; /* 0x4342cc */
extern float DAT_004342d0; /* 0x4342d0 */
extern int DAT_004342d4; /* 0x4342d4 */
extern unsigned int DAT_004342d8; /* 0x4342d8 */
extern float fRam004342dc; /* 0x4342dc */
extern int DAT_004342e0; /* 0x4342e0 */
extern int DAT_004342e4; /* 0x4342e4 */
extern int DAT_004342e8; /* 0x4342e8 */
extern int DAT_004342ec; /* 0x4342ec */
extern float DAT_00493530; /* 0x493530 */
extern float DAT_00493534; /* 0x493534 */
extern float DAT_00493538; /* 0x493538 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
extern float *FUN_0018f554(void);
/* Supplied declaration required: FUN_001db28c. */
/* Supplied declaration required: FUN_00211b44. */
/* Supplied declaration required: FUN_00211b6c. */
/* Supplied declaration required: FUN_00221a60. */
extern int FUN_002273f0(float *);
/* Supplied declaration required: FUN_00227414. */
/* Supplied declaration required: FUN_0023abc0. */
/* Supplied declaration required: FUN_002580a8. */
/* Supplied declaration required: FUN_002582e8. */
/* Supplied declaration required: FUN_00292c7c. */
extern unsigned int FUN_00297004(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002ad5a0. */
/* Supplied declaration required: FUN_002b740c. */
/* Supplied declaration required: FUN_002c1774. */
/* Supplied declaration required: FUN_003d58c4. */
/* Supplied declaration required: FUN_003d5d1c. */
/* Supplied declaration required: FUN_003d6300. */
/* Supplied declaration required: FUN_003d64cc. */
/* Supplied declaration required: FUN_003d6a48. */
/* Supplied declaration required: FUN_003d6b64. */
/* Supplied declaration required: FUN_003d704c. */


unsigned int FUN_003d7630(float *param_1)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr, in_s0; 20 native warning(s); review required */
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
  float temp_v6;
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
  float temp_v23;
  float temp_v24;
  float temp_v25;
  float temp_v26;
  float temp_v27;
  float temp_v28;
  float *temp_v29;
  float *temp_v30;
  float *temp_v31;
  float *temp_v32;
  float *temp_v33;
  float temp_v34;
  float temp_v35;
  float temp_v36;
  float temp_v37;
  float temp_v38;
  float temp_v39;
  float temp_v40;
  float temp_v41;
  float *temp_v42;
  float *temp_v43;
  float *temp_v44;
  float *temp_v45;
  float *temp_v46;
  float *temp_v47;
  
  temp_v0 = param_1[10];
  if (temp_v0 == 0.0f) {
    return 0;
  }
  if (temp_v0 != 1.4013e-45f) {
    if (temp_v0 != 2.8026e-45f) {
      return 0;
    }
    return 0xffffffff;
  }
  pfVar6 = param_1 + 0x18d;
  if (((unsigned int)param_1[0x18d] & 1) != 0) {
    FUN_003d64cc(param_1,param_1[399]);
    temp_v0 = (float)((int)param_1[399] + 1);
    param_1[399] = temp_v0;
    if ((int)param_1[0x18e] < (int)temp_v0) {
      *pfVar6 = (float)((unsigned int)param_1[0x18d] & 0xfffffffe);
    }
  }
  temp_v0 = 1.0f;
  temp_v8 = 0.0f;
  if (((unsigned int)param_1[0x18d] & 2) != 0) {
    if (param_1[0x193] == 0.0f) {
      temp_v2 = 0.2f;
    }
    else {
      temp_v2 = temp_v8;
      if (param_1[0x193] == 1.4013e-45f) {
        temp_v2 = temp_v0;
      }
    }
    temp_v1 = FUN_00297004(0xffffff9c,100);
    in_s0 = 0.01f;
    temp_v4 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v5 = temp_v2 * temp_v4 * 0.01f;
    temp_v1 = FUN_00297004(0xffffff9c,100);
    temp_v4 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v4 = temp_v2 * temp_v4 * in_s0;
    temp_v1 = FUN_00297004(0xffffff9c,100);
    param_1[400] = temp_v5;
    param_1[0x191] = temp_v4;
    temp_v4 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
    in_s0 = temp_v2 * temp_v4 * in_s0;
    param_1[0x192] = in_s0;
    temp_v2 = (float)((int)param_1[0x195] + 1);
    param_1[0x195] = temp_v2;
    if ((int)param_1[0x194] < (int)temp_v2) {
      *pfVar6 = (float)((unsigned int)param_1[0x18d] & 0xfffffffd);
      param_1[0x192] = temp_v8;
      param_1[0x191] = temp_v8;
      param_1[400] = temp_v8;
    }
  }
  pfVar4 = param_1 + 0x16b;
  pfVar10 = param_1 + 0x15a;
  if (((unsigned int)param_1[0x18d] & 4) != 0) {
    in_s0 = *pfVar4;
    temp_v2 = in_s0 - *pfVar10;
    FUN_00227414(param_1[0x19b],param_1[0x199],param_1[0x19a]);
    in_s0 = in_s0 * temp_v2;
    param_1[0x196] = in_s0;
    temp_v2 = (float)((int)param_1[0x19a] + 1);
    param_1[0x19a] = temp_v2;
    if ((int)param_1[0x199] < (int)temp_v2) {
      *pfVar6 = (float)((unsigned int)param_1[0x18d] & 0xfffffffb);
    }
  }
  if (((unsigned int)param_1[0x18d] & 8) != 0) {
    in_s0 = param_1[0x177];
    temp_v2 = in_s0 - param_1[0x166];
    FUN_00227414(param_1[0x19f],param_1[0x19d],param_1[0x19e]);
    in_s0 = in_s0 * temp_v2;
    param_1[0x19c] = in_s0;
    temp_v2 = (float)((int)param_1[0x19e] + 1);
    param_1[0x19e] = temp_v2;
    if ((int)param_1[0x19d] < (int)temp_v2) {
      *pfVar6 = (float)((unsigned int)param_1[0x18d] & 0xfffffff7);
    }
  }
  if (((unsigned int)param_1[0x18d] & 0x10) != 0) {
    FUN_003d58c4(param_1,param_1[0x1a1]);
    temp_v2 = (float)((int)param_1[0x1a1] + 1);
    param_1[0x1a1] = temp_v2;
    if ((int)param_1[0x1a0] < (int)temp_v2) {
      *pfVar6 = (float)((unsigned int)param_1[0x18d] & 0xffffffef);
    }
  }
  if (((unsigned int)param_1[0x18d] & 0x20) != 0) {
    temp_v2 = (float)VectorSignedToFloat(param_1[0x1a5],(unsigned char)(in_fpscr >> 0x16) & 3);
    in_s0 = temp_v2 * DAT_004342d0 * 40.743664f;
    FUN_002b740c();
    in_s0 = in_s0 * DAT_004342cc;
    param_1[0x1a3] = in_s0;
    param_1[0x1a5] = (float)((int)param_1[0x1a5] + 1);
  }
  if (((unsigned int)param_1[0x18d] & 0x80000) != 0) {
    in_s0 = param_1[3];
    temp_v4 = param_1[6] - in_s0;
    temp_v5 = param_1[7] - param_1[4];
    temp_v6 = param_1[8] - param_1[5];
    FUN_00227414(0,param_1[0x1cb],param_1[0x1ca]);
    temp_v2 = param_1[0x1ca];
    param_1[0x1ca] = (float)((int)temp_v2 + 1);
    param_1[2] = param_1[5] + temp_v6 * in_s0;
    *param_1 = param_1[3] + temp_v4 * in_s0;
    param_1[1] = param_1[4] + temp_v5 * in_s0;
    if ((int)param_1[0x1cb] < (int)temp_v2 + 1) {
      *param_1 = param_1[6];
      param_1[1] = param_1[7];
      param_1[2] = param_1[8];
      *pfVar6 = (float)((unsigned int)param_1[0x18d] & 0xfff7ffff);
    }
  }
  if (((unsigned int)param_1[0x18d] & 0x800000) != 0) {
    FUN_003d6a48(param_1);
  }
  temp_v43 = param_1 + 0x1fa;
  temp_v42 = param_1 + 0x206;
  temp_v31 = param_1 + 0x210;
  temp_v30 = param_1 + 0x204;
  temp_v32 = param_1 + 0x1f8;
  temp_v33 = param_1 + 0x1ef;
  temp_v44 = param_1 + 0x1e9;
  pfVar9 = param_1 + 0x1b9;
  pfVar7 = param_1 + 0x163;
  if (((unsigned int)param_1[0x18d] & 0x100) == 0) {
    if (((unsigned int)param_1[0x18d] & 0x200) != 0) {
      temp_v29 = param_1 + 0x1a7;
      FUN_00227414(param_1[0x1a9],param_1[0x1a7],param_1[0x1a8]);
      in_s0 = in_s0 * param_1[0x177];
      param_1[0x1a6] = in_s0;
      temp_v2 = (float)((int)param_1[0x1a8] + 1);
      param_1[0x1a8] = temp_v2;
      if ((int)*temp_v29 < (int)temp_v2) {
        *pfVar6 = (float)((unsigned int)param_1[0x18d] & 0xfffffdff);
      }
    }
    if (((unsigned int)param_1[0x18d] & 0x400) != 0) {
      if (((unsigned int)param_1[0x18d] & 0x200000) != 0) {
        in_s0 = param_1[0x17b];
        temp_v2 = in_s0 - param_1[0x18c];
        FUN_00227414(param_1[0x1ad],param_1[0x1ab],param_1[0x1ac]);
        param_1[0x1aa] = param_1[0x18c] + temp_v2 * in_s0;
      }
      else {
        FUN_00227414(param_1[0x1ad],param_1[0x1ab],param_1[0x1ac]);
        in_s0 = in_s0 * param_1[0x17b];
        param_1[0x1aa] = in_s0;
      }
      temp_v2 = param_1[0x1ac];
      param_1[0x1ac] = (float)((int)temp_v2 + 1);
      if ((int)param_1[0x1ab] < (int)temp_v2 + 1) {
        *pfVar6 = (float)((unsigned int)param_1[0x18d] & 0xffdffbff);
      }
    }
    if (((unsigned int)param_1[0x18d] & 0x800) != 0) {
      in_s0 = param_1[0x17a];
      temp_v2 = in_s0 - param_1[0x18b];
      temp_v45 = param_1 + 0x1af;
      FUN_00227414(param_1[0x1b1],param_1[0x1af],param_1[0x1b0]);
      in_s0 = in_s0 * temp_v2;
      param_1[0x169] = in_s0;
      temp_v2 = (float)((int)param_1[0x1b0] + 1);
      param_1[0x1b0] = temp_v2;
      if ((int)*temp_v45 < (int)temp_v2) {
        *pfVar6 = (float)((unsigned int)param_1[0x18d] & 0xfffff7ff);
      }
    }
    temp_v45 = param_1 + 0x1b7;
    if (((unsigned int)param_1[0x18d] & 0x1000) != 0) {
      temp_v2 = *pfVar4;
      in_s0 = temp_v2 - *pfVar10;
      FUN_00227414(param_1[0x1b8],param_1[0x1b6],param_1[0x1b7]);
      in_s0 = in_s0 * temp_v2;
      param_1[0x1b3] = in_s0;
      temp_v2 = *temp_v45;
      *temp_v45 = (float)((int)temp_v2 + 1);
      if ((int)param_1[0x1b6] < (int)temp_v2 + 1) {
        *pfVar6 = (float)((unsigned int)param_1[0x18d] & 0xffffefff);
      }
    }
    temp_v47 = param_1 + 0x171;
    temp_v46 = param_1 + 0x1bc;
    pfVar8 = param_1 + 0x1bd;
    if (((unsigned int)param_1[0x18d] & 0x2000) != 0) {
      temp_v2 = param_1[0x165] - param_1[0x1bb];
      temp_v5 = *temp_v47 - (*pfVar7 - *pfVar9);
      temp_v4 = param_1[0x172] - (param_1[0x164] - param_1[0x1ba]);
      in_s0 = param_1[0x173] - temp_v2;
      FUN_00227414(param_1[0x1be],param_1[0x1bc],param_1[0x1bd]);
      in_s0 = in_s0 * temp_v2;
      param_1[0x1bb] = in_s0;
      param_1[0x1b9] = temp_v5 * temp_v2;
      param_1[0x1ba] = temp_v4 * temp_v2;
      temp_v2 = *pfVar8;
      *pfVar8 = (float)((int)temp_v2 + 1);
      if ((int)*temp_v46 < (int)temp_v2 + 1) {
        *pfVar6 = (float)((unsigned int)param_1[0x18d] & 0xffffdfff);
      }
    }
    if (((unsigned int)param_1[0x18d] & 0x8000) != 0) {
      temp_v2 = temp_v47[2];
      temp_v4 = *temp_v47 - DAT_00493530;
      temp_v5 = temp_v47[1] - DAT_00493534;
      temp_v6 = temp_v2 - DAT_00493538;
      FUN_00227414(param_1[0x1be],param_1[0x1bc],param_1[0x1bd]);
      *pfVar9 = DAT_00493530 + temp_v4 * temp_v2;
      param_1[0x1ba] = DAT_00493534 + temp_v5 * temp_v2;
      in_s0 = DAT_00493538 + temp_v6 * temp_v2;
      param_1[0x1bb] = in_s0;
      temp_v2 = *pfVar8;
      *pfVar8 = (float)((int)temp_v2 + 1);
      if ((int)*temp_v46 < (int)temp_v2 + 1) {
        *pfVar6 = (float)((unsigned int)param_1[0x18d] & 0xffff7fff);
      }
    }
    if (((unsigned int)param_1[0x18d] & 0x10000) != 0) {
      FUN_003d6300(param_1);
      temp_v2 = param_1[0x1c6];
      param_1[0x1c6] = (float)((int)temp_v2 + 1);
      if ((int)param_1[0x1c5] < (int)temp_v2 + 1) {
        *pfVar6 = (float)((unsigned int)param_1[0x18d] & 0xfffeffff);
      }
    }
    if (((unsigned int)param_1[0x18d] & 0x20000) != 0) {
      FUN_003d704c(param_1);
      temp_v2 = param_1[0x1b7];
      *temp_v45 = (float)((int)temp_v2 + 1);
      if ((int)param_1[0x1b6] < (int)temp_v2 + 1) {
        *pfVar6 = (float)((unsigned int)param_1[0x18d] & 0xfffdffff);
      }
    }
    if (((unsigned int)param_1[0x18d] & 0x100) == 0) {
      param_1[0x1e5] = temp_v8;
      param_1[0x1eb] = temp_v8;
      param_1[500] = temp_v8;
      param_1[0x1f1] = temp_v8;
      temp_v43[2] = temp_v8;
      temp_v43[1] = temp_v8;
      *temp_v43 = temp_v8;
      temp_v42[2] = temp_v8;
      temp_v42[1] = temp_v8;
      *temp_v42 = temp_v8;
      param_1[0x1e9] = 0.0f;
      param_1[0x1ef] = 0.0f;
      param_1[0x1f8] = 0.0f;
      param_1[0x204] = 0.0f;
      param_1[0x210] = 0.0f;
      goto LAB_003d7fbc;
    }
  }
  if (((unsigned int)param_1[0x18d] & 0x200) != 0) {
    temp_v2 = fRam004342dc;
    FUN_00227414(DAT_004342d8,DAT_004342d4,param_1[0x1e9]);
    in_s0 = in_s0 * temp_v2;
    param_1[0x1e5] = in_s0;
    temp_v2 = *temp_v44;
    *temp_v44 = (float)((int)temp_v2 + 1);
    if (DAT_004342d4 < (int)temp_v2 + 1) {
      *pfVar6 = (float)((unsigned int)param_1[0x18d] & 0xfffffdff);
    }
  }
  if (((unsigned int)param_1[0x18d] & 0x400) != 0) {
    temp_v2 = param_1[0x17b];
    FUN_00227414(param_1[0x1f0],param_1[0x1ee],param_1[0x1ef]);
    param_1[0x1eb] = in_s0 * temp_v2;
    temp_v2 = *temp_v33;
    *temp_v33 = (float)((int)temp_v2 + 1);
    if (DAT_004342e0 < (int)temp_v2 + 1) {
      *pfVar6 = (float)((unsigned int)param_1[0x18d] & 0xfffffbff);
    }
  }
  if (((unsigned int)param_1[0x18d] & 0x800) != 0) {
    temp_v2 = param_1[0x17a];
    temp_v4 = temp_v2 - param_1[0x18b];
    FUN_00227414(param_1[0x1f9],param_1[0x1f7],param_1[0x1f8]);
    param_1[0x1f1] = temp_v2 * temp_v4;
    temp_v2 = *temp_v32;
    *temp_v32 = (float)((int)temp_v2 + 1);
    if (DAT_004342e4 < (int)temp_v2 + 1) {
      *pfVar6 = (float)((unsigned int)param_1[0x18d] & 0xfffff7ff);
    }
  }
  if (((unsigned int)param_1[0x18d] & 0x1000) != 0) {
    temp_v2 = *pfVar4;
    temp_v4 = temp_v2 - *pfVar10;
    FUN_00227414(param_1[0x205],param_1[0x203],param_1[0x204]);
    param_1[0x1fa] = temp_v2 * temp_v4;
    temp_v2 = *temp_v30;
    *temp_v30 = (float)((int)temp_v2 + 1);
    if (DAT_004342e8 < (int)temp_v2 + 1) {
      *pfVar6 = (float)((unsigned int)param_1[0x18d] & 0xffffefff);
    }
  }
  if (((unsigned int)param_1[0x18d] & 0x2000) != 0) {
    FUN_003d6b64(param_1);
    temp_v2 = param_1[0x210];
    *temp_v31 = (float)((int)temp_v2 + 1);
    if (DAT_004342ec < (int)temp_v2 + 1) {
      *pfVar6 = (float)((unsigned int)param_1[0x18d] & 0xffffdfff);
    }
  }
LAB_003d7fbc:
  temp_v27 = temp_v8;
  temp_v28 = temp_v8;
  if (((unsigned int)param_1[0x18d] & 0x4000) != 0) {
    FUN_002582e8();
    FUN_002580a8();
    FUN_002582e8();
    pfVar4 = (float *)FUN_0018f554();
    temp_v27 = *pfVar4;
    temp_v28 = pfVar4[1];
  }
  if (((unsigned int)param_1[0x18d] & 0x40000) != 0) {
    FUN_002580a8(param_1 + 0xc);
    FUN_0023abc0(param_1 + 0xc,&temp_v27,&temp_v28);
    temp_v3 = FUN_002273f0(param_1 + 0xc);
    if (temp_v3 != 0) {
      param_1[0xc] = 0.0f;
      param_1[0xd] = 0.0f;
      param_1[0xe] = 0.0f;
      param_1[0xf] = 0.0f;
      param_1[0x10] = 0.0f;
      *pfVar6 = (float)((unsigned int)param_1[0x18d] & 0xfffbffff);
    }
  }
  temp_v34 = temp_v8;
  temp_v35 = temp_v8;
  if (((unsigned int)param_1[0x18d] & 0x400000) != 0) {
    FUN_002580a8(param_1 + 0x11);
    FUN_0023abc0(param_1 + 0x11,&temp_v34,&temp_v35);
    temp_v3 = FUN_002273f0(param_1 + 0x11);
    if (temp_v3 != 0) {
      param_1[0x11] = 0.0f;
      param_1[0x12] = 0.0f;
      param_1[0x13] = 0.0f;
      param_1[0x14] = 0.0f;
      param_1[0x15] = 0.0f;
      *pfVar6 = (float)((unsigned int)param_1[0x18d] & 0xffbfffff);
    }
  }
  temp_v36 = temp_v8;
  temp_v37 = temp_v0;
  temp_v38 = temp_v8;
  FUN_00292c7c(&temp_v15,1);
  temp_v5 = param_1[0x160];
  temp_v4 = param_1[0x161];
  temp_v2 = param_1[0x162];
  temp_v7 = temp_v15 * temp_v5 + temp_v16 * temp_v4 + temp_v17 * temp_v2;
  temp_v6 = temp_v19 * temp_v5 + temp_v20 * temp_v4 + temp_v21 * temp_v2;
  temp_v2 = temp_v23 * temp_v5 + temp_v24 * temp_v4 + temp_v25 * temp_v2;
  FUN_002ad5a0(&temp_v31,&temp_v44);
  temp_v4 = temp_v0 - (float)temp_v44;
  temp_v0 = temp_v0 / romwright_sqrt_4(temp_v7 * temp_v7 + temp_v6 * temp_v6 + temp_v2 * temp_v2);
  temp_v7 = temp_v7 * temp_v0;
  temp_v6 = temp_v6 * temp_v0;
  temp_v2 = temp_v2 * temp_v0;
  temp_v16 = temp_v4 * temp_v7 * temp_v6;
  temp_v17 = temp_v4 * temp_v7 * temp_v2;
  temp_v21 = temp_v4 * temp_v6 * temp_v2;
  temp_v15 = (float)temp_v44 + temp_v4 * temp_v7 * temp_v7;
  temp_v25 = (float)temp_v44 + temp_v4 * temp_v2 * temp_v2;
  temp_v20 = (float)temp_v44 + temp_v4 * temp_v6 * temp_v6;
  temp_v19 = temp_v16 + (float)temp_v31 * temp_v2;
  temp_v23 = temp_v17 - (float)temp_v31 * temp_v6;
  temp_v24 = temp_v21 + (float)temp_v31 * temp_v7;
  temp_v16 = temp_v16 - (float)temp_v31 * temp_v2;
  temp_v17 = temp_v17 + (float)temp_v31 * temp_v6;
  temp_v21 = temp_v21 - (float)temp_v31 * temp_v7;
  temp_v0 = param_1[0x160];
  temp_v5 = param_1[0x161];
  temp_v2 = param_1[0x162];
  temp_v12 = param_1[0x15a] + param_1[0x196] + *temp_v43 + param_1[0x1b3];
  temp_v13 = param_1[0x15b] + param_1[0x197] + temp_v43[1] + param_1[0x1b4];
  temp_v14 = param_1[0x15c] + param_1[0x198] + temp_v43[2] + param_1[0x1b5] + param_1[0x19c] +
             param_1[0x1e5] + param_1[0x1a6];
  temp_v4 = param_1[0x166];
  temp_v9 = (temp_v15 * temp_v0 + temp_v16 * temp_v5 + temp_v17 * temp_v2) * temp_v4 + temp_v12 +
              *temp_v42 + *pfVar9 + param_1[400];
  temp_v10 = (temp_v19 * temp_v0 + temp_v20 * temp_v5 + temp_v21 * temp_v2) * temp_v4 + temp_v13 +
             temp_v42[1] + param_1[0x1ba] + param_1[0x191];
  temp_v11 = (temp_v23 * temp_v0 + temp_v24 * temp_v5 + temp_v25 * temp_v2) * temp_v4 + temp_v14 +
             temp_v42[2] + param_1[0x1bb] + param_1[0x192];
  if (((unsigned int)param_1[0x18d] & 0x40) != 0) {
    temp_v9 = temp_v9 + param_1[0x1a2];
    temp_v10 = temp_v10 + param_1[0x1a3];
    temp_v11 = temp_v11 + param_1[0x1a4];
  }
  if (((unsigned int)param_1[0x18d] & 0x80) != 0) {
    temp_v12 = temp_v12 + param_1[0x1a2];
    temp_v13 = temp_v13 + param_1[0x1a3];
    temp_v14 = temp_v14 + param_1[0x1a4];
  }
  pfVar6 = param_1 + 0x1d9;
  temp_v9 = temp_v9 + temp_v27 + temp_v34 + *pfVar6 + *param_1;
  temp_v10 = temp_v10 + temp_v28 + temp_v35 + param_1[0x1da] + param_1[1];
  temp_v11 = temp_v11 + param_1[0x1db] + param_1[2];
  temp_v12 = temp_v12 + temp_v27 + temp_v34 + *param_1 + param_1[0x1ce];
  temp_v13 = temp_v13 + temp_v28 + temp_v35 + param_1[1] + param_1[0x1cf];
  temp_v14 = temp_v14 + param_1[2] + param_1[0x1d0];
  temp_v18 = temp_v8;
  temp_v22 = temp_v8;
  temp_v26 = temp_v8;
  if (((unsigned int)param_1[0x18d] & 0xc000000) != 0) {
    FUN_002c1774(param_1 + 0x16);
  }
  else {
    FUN_002c1774(param_1 + 0x16);
  }
  temp_v41 = param_1[0x169] + param_1[0x1f1];
  temp_v39 = temp_v8;
  temp_v40 = temp_v8;
  FUN_003d5d1c(param_1,param_1 + 0x16,&temp_v12,&temp_v9,&temp_v36,&temp_v39);
  FUN_001db28c(param_1 + 0x16,0);
  FUN_00211b44(&temp_v12);
  FUN_00211b6c(&temp_v9);
  FUN_00221a60();
  param_1[0x15d] = temp_v12;
  param_1[0x15e] = temp_v13;
  param_1[0x15f] = temp_v14;
  *pfVar7 = temp_v9;
  param_1[0x164] = temp_v10;
  param_1[0x165] = temp_v11;
  *pfVar7 = temp_v9 - *pfVar6;
  param_1[0x164] = temp_v10 - param_1[0x1da];
  param_1[0x165] = temp_v11 - param_1[0x1db];
  param_1[0x1df] = temp_v12 - param_1[0x1ce];
  param_1[0x1e0] = temp_v13 - param_1[0x1cf];
  param_1[0x1e1] = temp_v14 - param_1[0x1d0];
  param_1[0x1e2] = temp_v9 - *pfVar6;
  param_1[0x1e3] = temp_v10 - param_1[0x1da];
  param_1[0x1e4] = temp_v11 - param_1[0x1db];
  return 0;
}
