/* NON_MATCHING: switch relocations are now recognized, but the draft still has incorrect scalar/float callee prototypes and unrecovered vector/stack values; retail has 782 disassembly rows versus 566 built. */
#include "common.h"
extern "C" {

int FUN_001f87d4(void);
int FUN_00208504(void);
int FUN_0021b0f0(void);
int FUN_0021b2ec(void);
int FUN_00282228(int *);
int calcHeadingRoundedToCardinalDirection(void);
int FUN_00282390(void);
int FUN_0028250c(void);
int FUN_00287b0c(void);
int FUN_002d1e4c(void);

/* stack frame of void: 24 slot(s), 96 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp98; /* 0x98: local_98 */
} void_stack;

extern int *DAT_004474f4; /* 0x4474f4 */
extern int g_lmapScene; /* 0x447e88 */
extern int g_gameState; /* 0x49f91c */
extern int DAT_0049f9e0; /* 0x49f9e0 */
extern int DAT_0049f9e4; /* 0x49f9e4 */
extern int DAT_0049f9e8; /* 0x49f9e8 */
extern int DAT_0049f9ec; /* 0x49f9ec */
extern int DAT_0049f9f0; /* 0x49f9f0 */
extern int DAT_0049f9f4; /* 0x49f9f4 */
extern int DAT_0049f9f8; /* 0x49f9f8 */
extern int DAT_0049f9fc; /* 0x49f9fc */
extern int DAT_0049fa00; /* 0x49fa00 */
extern int DAT_0049fa04; /* 0x49fa04 */
extern int DAT_0049fa08; /* 0x49fa08 */
extern int DAT_0049fa0c; /* 0x49fa0c */
extern int DAT_0049fa10; /* 0x49fa10 */

/* Supplied declaration required: FUN_001f87d4. */
/* Supplied declaration required: FUN_00208504. */
/* Supplied declaration required: FUN_0021b0f0. */
/* Supplied declaration required: FUN_0021b2ec. */
extern int vectorPairTransitionStep(void);
/* Supplied declaration required: FUN_00282228. */
/* Supplied declaration required: calcHeadingRoundedToCardinalDirection. */
/* Supplied declaration required: FUN_00282390. */
/* Supplied declaration required: FUN_0028250c. */
/* Supplied declaration required: FUN_00287b0c. */
/* Supplied declaration required: FUN_002c5be8. */
/* Supplied declaration required: FUN_002d1e4c. */
/* Supplied declaration required: entryOwnerSetPosition. */
/* Supplied declaration required: nn_math_ARMv6_VEC3TransformAsm_2AD44C. */



void FUN_0030860c(void);

void FUN_003079b4(void)
{
/* irregular: irregular input(s): in_d10, in_d8, in_d9, in_fpscr; 24 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar7;
  int temp_v6;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  int *piVar13;
  unsigned int in_fpscr;
  float temp_v14;
  float temp_v15;
  float temp_v24;
  unsigned long long in_d8;
  float temp_v25;
  float temp_v26;
  unsigned long long in_d9;
  unsigned long long temp_v27;
  float temp_v28;
  float temp_v29;
  unsigned long long in_d10;
  float temp_v30;
  int temp_v31;
  int iStack_94;
  int iStack_90;
  int temp_v32;
  int iStack_88;
  int temp_v33;
  float temp_v34;
  float temp_v35;
  float temp_v36;
  float temp_v37;
  float temp_v38;
  float temp_v39;
  float temp_v46;
  float temp_v47;
  unsigned long long uStack_30;
  unsigned long long uStack_28;
  unsigned long long uStack_20;
  unsigned long long uStack_18;
  
  temp_v5 = DAT_0049fa04;
  temp_v4 = DAT_0049fa00;
  temp_v3 = DAT_0049f9e8;
  temp_v11 = DAT_0049f9e4;
  temp_v6 = g_lmapScene;
  piVar7 = DAT_004474f4;
  uStack_28 = in_d8;
  uStack_20 = in_d9;
  uStack_18 = in_d10;
  switch(*DAT_004474f4) {
  case 0:
    FUN_002d1e4c();
    break;
  case 1:
    temp_v25 = (float)DAT_004474f4[6];
    FUN_00287b0c();
    temp_v0 = in_fpscr & 0xfffffff;
    temp_v24 = temp_v25;
    if (temp_v25 < 0.0f) {
      temp_v24 = -temp_v25;
    }
    temp_v26 = temp_v24 * 0.2f;
    in_fpscr = temp_v0 | ((unsigned int)(temp_v26 <= temp_v24) << 0x1d);
    if (!(u8)(in_fpscr >> 0x1d)) {
      DAT_004474f4[6] = *(int *)(g_lmapScene + 0x50);
    }
    else {
      in_fpscr = temp_v0 | ((unsigned int)(0.0f <= temp_v25) << 0x1d);
      if (!(u8)(in_fpscr >> 0x1d)) {
        temp_v26 = (float)DAT_004474f4[6] - temp_v26;
      }
      else {
        temp_v26 = (float)DAT_004474f4[6] + temp_v26;
      }
      DAT_004474f4[6] = (int)temp_v26;
    }
    break;
  case 2:
    DAT_004474f4[6] = *(int *)(g_lmapScene + 0x50);
    break;
  case 3:
    DAT_004474f4[0x1c] = DAT_0049f9e0;
    piVar7[0x1d] = temp_v11;
    piVar7[0x1e] = temp_v3;
    temp_v11 = DAT_0049f9f4;
    temp_v6 = DAT_0049f9f0;
    piVar7[0x19] = DAT_0049f9ec;
    piVar7[0x1a] = temp_v6;
    piVar7[0x1b] = temp_v11;
    piVar7[0x1f] = DAT_0049f9f8;
    break;
  case 4:
    DAT_004474f4[0x23] = DAT_0049f9fc;
    piVar7[0x24] = temp_v4;
    piVar7[0x25] = temp_v5;
    temp_v11 = DAT_0049fa10;
    temp_v6 = DAT_0049fa0c;
    piVar7[0x20] = DAT_0049fa08;
    piVar7[0x21] = temp_v6;
    piVar7[0x22] = temp_v11;
    break;
  case 5:
    FUN_00208504();
    break;
  case 6:
    temp_v25 = 0.017453292f;
    temp_v24 = *(float *)(g_lmapScene + 0x20);
    temp_v11 = *(int *)(g_lmapScene + 0x24);
    DAT_004474f4[0x16] = *(int *)(g_lmapScene + 0x1c);
    piVar7[0x17] = (int)temp_v24;
    piVar7[0x18] = temp_v11;
    piVar7[0x17] = (int)(temp_v24 + 150.0f);
    temp_v24 = *(float *)(temp_v6 + 0x2c);
    temp_v11 = *(int *)(temp_v6 + 0x30);
    piVar7[0x13] = *(int *)(temp_v6 + 0x28);
    piVar7[0x14] = (int)temp_v24;
    piVar7[0x15] = temp_v11;
    piVar7[0x14] = (int)(temp_v24 + 150.0f);
    temp_v24 = *(float *)(temp_v6 + 0x50) * 0.017453292f;
    FUN_0028250c();
    temp_v26 = 600.0f;
    DAT_004474f4[0x13] = (int)((float)DAT_004474f4[0x13] + temp_v24 * 600.0f);
    temp_v25 = *(float *)(g_lmapScene + 0x50) * temp_v25;
    FUN_00282390();
    DAT_004474f4[0x15] = (int)((float)DAT_004474f4[0x15] + temp_v25 * temp_v26);
    break;
  case 7:
    temp_v24 = *(float *)(g_lmapScene + 0x4c);
    calcHeadingRoundedToCardinalDirection();
    temp_v11 = (int)temp_v24;
    temp_v24 = 0.017453292f;
    temp_v6 = temp_v8;
    if (temp_v11 != 0x5a) {
      temp_v6 = temp_v11 - 0x100;
    }
    temp_v25 = (float)DAT_004474f4[0xa4] * 0.017453292f;
    if (!(temp_v11 != 0x5a && temp_v6 != 0xe)) {
      FUN_0028250c();
      piVar7 = DAT_004474f4;
      DAT_004474f4[0xc] = (int)temp_v25;
      temp_v24 = (float)piVar7[0xa4] * temp_v24;
      FUN_00282390();
      piVar7 = DAT_004474f4;
      DAT_004474f4[0xb] = (int)temp_v24;
      piVar7[10] = 0;
    }
    else {
      FUN_0028250c();
      piVar7 = DAT_004474f4;
      DAT_004474f4[10] = (int)temp_v25;
      temp_v24 = (float)piVar7[0xa4] * temp_v24;
      FUN_00282390();
      piVar7 = DAT_004474f4;
      DAT_004474f4[0xb] = (int)temp_v24;
      piVar7[0xc] = 0;
    }
    piVar7 = DAT_004474f4;
    temp_v24 = (float)DAT_004474f4[0xa4] + 10.0f;
    DAT_004474f4[0xa4] = (int)temp_v24;
    if ((int)temp_v24 >= 0x43340001) {
      temp_v24 = 180.0f;
    }
    piVar7[0xa4] = (int)temp_v24;
    break;
  case 8:
    temp_v24 = *(float *)(g_lmapScene + 0x4c);
    calcHeadingRoundedToCardinalDirection();
    temp_v11 = (int)temp_v24;
    temp_v24 = 0.017453292f;
    temp_v6 = temp_v9;
    if (temp_v11 != 0x5a) {
      temp_v6 = temp_v11 - 0x100;
    }
    temp_v25 = (float)DAT_004474f4[0xa4] * 0.017453292f;
    if (!(temp_v11 != 0x5a && temp_v6 != 0xe)) {
      FUN_0028250c();
      piVar7 = DAT_004474f4;
      DAT_004474f4[0xc] = (int)temp_v25;
      temp_v24 = (float)piVar7[0xa4] * temp_v24;
      FUN_00282390();
      piVar7 = DAT_004474f4;
      DAT_004474f4[0xb] = (int)temp_v24;
      piVar7[10] = 0;
    }
    else {
      FUN_0028250c();
      piVar7 = DAT_004474f4;
      DAT_004474f4[10] = (int)temp_v25;
      temp_v24 = (float)piVar7[0xa4] * temp_v24;
      FUN_00282390();
      piVar7 = DAT_004474f4;
      DAT_004474f4[0xb] = (int)temp_v24;
      piVar7[0xc] = 0;
    }
    temp_v24 = (float)DAT_004474f4[0xa4];
    temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v24 < 0.0f) << 0x1f) |
            ((unsigned int)(temp_v24 == 0.0f) << 0x1e);
    in_fpscr = temp_v0 | ((unsigned int)(temp_v24 != temp_v24) << 0x1c);
    temp_v2 = (unsigned char)(temp_v0 >> 0x18);
    piVar7 = DAT_004474f4;
    if ((unsigned char)((temp_v2 >> 6) & 1) || temp_v2 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
      temp_v24 = 0.0f;
    }
    piVar7[0xa4] = (int)temp_v24;
    break;
  case 9:
    temp_v24 = *(float *)(g_lmapScene + 0x4c);
    calcHeadingRoundedToCardinalDirection();
    temp_v11 = (int)temp_v24;
    temp_v24 = 0.017453292f;
    temp_v6 = temp_v10;
    if (temp_v11 != 0x5a) {
      temp_v6 = temp_v11 - 0x100;
    }
    temp_v25 = (float)DAT_004474f4[0xa4] * 0.017453292f;
    if (!(temp_v11 != 0x5a && temp_v6 != 0xe)) {
      FUN_0028250c();
      piVar7 = DAT_004474f4;
      DAT_004474f4[0xc] = (int)temp_v25;
      temp_v24 = (float)piVar7[0xa4] * temp_v24;
      FUN_00282390();
      piVar7 = DAT_004474f4;
      DAT_004474f4[0xb] = (int)temp_v24;
      piVar7[10] = 0;
    }
    else {
      FUN_0028250c();
      piVar7 = DAT_004474f4;
      DAT_004474f4[10] = (int)temp_v25;
      temp_v24 = (float)piVar7[0xa4] * temp_v24;
      FUN_00282390();
      piVar7 = DAT_004474f4;
      DAT_004474f4[0xb] = (int)temp_v24;
      piVar7[0xc] = 0;
    }
    piVar7 = DAT_004474f4;
    temp_v24 = (float)DAT_004474f4[0xa4] - 10.0f;
    DAT_004474f4[0xa4] = (int)temp_v24;
    temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v24 < 0.0f) << 0x1f) |
            ((unsigned int)(temp_v24 == 0.0f) << 0x1e);
    in_fpscr = temp_v0 | ((unsigned int)(temp_v24 != temp_v24) << 0x1c);
    temp_v2 = (unsigned char)(temp_v0 >> 0x18);
    if ((unsigned char)((temp_v2 >> 6) & 1) || temp_v2 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
      temp_v24 = 0.0f;
    }
    piVar7[0xa4] = (int)temp_v24;
    break;
  case 10:
    temp_v6 = DAT_004474f4[1];
    piVar7 = DAT_004474f4 + 0x88;
    if (temp_v6 == 0) {
      temp_v31 = DAT_004474f4[0x16];
      iStack_94 = DAT_004474f4[0x17];
      iStack_90 = DAT_004474f4[0x18];
      temp_v25 = 0.017453292f;
      temp_v33 = DAT_004474f4[0x15];
      temp_v32 = DAT_004474f4[0x13];
      iStack_88 = DAT_004474f4[0x14];
      temp_v26 = *(float *)(g_lmapScene + 0x28);
      temp_v30 = *(float *)(g_lmapScene + 0x2c);
      temp_v24 = *(float *)(g_lmapScene + 0x50) * 0.017453292f;
      temp_v28 = *(float *)(g_lmapScene + 0x30);
      FUN_0028250c();
      temp_v29 = 90.0f;
      temp_v26 = temp_v26 + temp_v24 * 90.0f;
      temp_v30 = temp_v30 + 75.0f;
      temp_v24 = *(float *)(g_lmapScene + 0x50) * temp_v25;
      FUN_00282390();
      temp_v36 = temp_v28 + temp_v24 * temp_v29;
      temp_v15 = 110.0f;
      temp_v28 = *(float *)(g_lmapScene + 0x28);
      temp_v14 = *(float *)(g_lmapScene + 0x2c);
      temp_v29 = *(float *)(g_lmapScene + 0x30);
      temp_v24 = (*(float *)(g_lmapScene + 0x50) - 110.0f) * temp_v25;
      temp_v34 = temp_v26;
      temp_v35 = temp_v30;
      FUN_0028250c();
      temp_v26 = 120.0f;
      temp_v28 = temp_v28 + temp_v24 * 120.0f;
      temp_v14 = temp_v14 + 210.0f;
      temp_v25 = (*(float *)(g_lmapScene + 0x50) - temp_v15) * temp_v25;
      FUN_00282390();
      temp_v39 = temp_v29 + temp_v25 * temp_v26;
      temp_v47 = 1.12104e-44f;
      temp_v46 = 0.0f;
      uStack_30 = (unsigned long long)(unsigned int)uStack_30;
      temp_v37 = temp_v28;
      temp_v38 = temp_v14;
      FUN_00282228(&temp_v31);
      piVar7 = DAT_004474f4;
      *(unsigned char *)(DAT_004474f4 + 0x87) = 1;
      piVar13 = piVar7 + 1;
      *piVar13 = *piVar13 + 1;
      piVar7[2] = 0;
      break;
    }
    if (temp_v6 == 1) {
      temp_v6 = vectorPairTransitionStep();
      if (temp_v6 != 0) {
        temp_v31 = piVar7[0xc];
        iStack_94 = piVar7[0xd];
        iStack_90 = piVar7[0xe];
        temp_v25 = 0.017453292f;
        temp_v32 = piVar7[0xf];
        iStack_88 = piVar7[0x10];
        temp_v33 = piVar7[0x11];
        temp_v26 = *(float *)(g_lmapScene + 0x30);
        temp_v24 = *(float *)(g_lmapScene + 0x50) * 0.017453292f;
        temp_v27 = *(unsigned long long *)(g_lmapScene + 0x28);
        FUN_0028250c();
        temp_v30 = 90.0f;
        temp_v28 = (float)temp_v27 + temp_v24 * 90.0f;
        temp_v29 = (float)((unsigned long long)temp_v27 >> 0x20) + 65.0f;
        temp_v24 = *(float *)(g_lmapScene + 0x50) * temp_v25;
        FUN_00282390();
        temp_v36 = temp_v26 + temp_v24 * temp_v30;
        temp_v30 = 110.0f;
        temp_v26 = *(float *)(g_lmapScene + 0x30);
        temp_v27 = *(unsigned long long *)(g_lmapScene + 0x28);
        temp_v24 = (*(float *)(g_lmapScene + 0x50) - 110.0f) * temp_v25;
        temp_v34 = temp_v28;
        temp_v35 = temp_v29;
        FUN_0028250c();
        temp_v29 = 120.0f;
        temp_v24 = (float)temp_v27 + temp_v24 * 120.0f;
        temp_v28 = (float)((unsigned long long)temp_v27 >> 0x20) + 250.0f;
        temp_v25 = (*(float *)(g_lmapScene + 0x50) - temp_v30) * temp_v25;
        FUN_00282390();
        temp_v39 = temp_v26 + temp_v25 * temp_v29;
        temp_v47 = 4.2039e-43f;
        temp_v46 = 0.0f;
        uStack_30 = (unsigned long long)(unsigned int)uStack_30;
        temp_v37 = temp_v24;
        temp_v38 = temp_v28;
        FUN_00282228(&temp_v31);
        piVar7 = DAT_004474f4;
        DAT_004474f4[1] = DAT_004474f4[1] + 1;
        piVar7[2] = 0;
      }
      break;
    }
    if ((temp_v6 != 2) || (temp_v6 = vectorPairTransitionStep(), temp_v6 == 0)) break;
    piVar7 = DAT_004474f4;
    DAT_004474f4[1] = DAT_004474f4[1] + 1;
    piVar7[2] = 0;
    break;
  case 0xb:
    temp_v6 = DAT_004474f4[1];
    piVar13 = DAT_004474f4 + 0x88;
    if (temp_v6 == 0) {
      piVar13 = DAT_004474f4 + 0x16;
      DAT_004474f4[3] = 0;
      temp_v31 = *piVar13;
      iStack_94 = piVar7[0x17];
      iStack_90 = piVar7[0x18];
      temp_v25 = 0.017453292f;
      temp_v33 = piVar7[0x15];
      temp_v32 = piVar7[0x13];
      iStack_88 = piVar7[0x14];
      temp_v26 = *(float *)(g_lmapScene + 0x30);
      temp_v24 = *(float *)(g_lmapScene + 0x50) * 0.017453292f;
      temp_v29 = *(float *)(g_lmapScene + 0x28);
      temp_v14 = *(float *)(g_lmapScene + 0x2c);
      FUN_0028250c();
      temp_v28 = 120.0f;
      temp_v29 = temp_v29 + temp_v24 * 120.0f;
      temp_v14 = temp_v14 + 70.0f;
      temp_v24 = *(float *)(g_lmapScene + 0x50) * temp_v25;
      FUN_00282390();
      temp_v36 = temp_v26 + temp_v24 * temp_v28;
      temp_v26 = *(float *)(g_lmapScene + 0x30);
      temp_v30 = *(float *)(g_lmapScene + 0x28);
      temp_v15 = *(float *)(g_lmapScene + 0x2c);
      temp_v24 = (*(float *)(g_lmapScene + 0x50) - temp_v28) * temp_v25;
      temp_v34 = temp_v29;
      temp_v35 = temp_v14;
      FUN_0028250c();
      temp_v29 = 140.0f;
      temp_v30 = temp_v30 + temp_v24 * 140.0f;
      temp_v15 = temp_v15 + 200.0f;
      temp_v25 = (*(float *)(g_lmapScene + 0x50) - temp_v28) * temp_v25;
      FUN_00282390();
      temp_v39 = temp_v26 + temp_v25 * temp_v29;
      temp_v47 = 1.12104e-44f;
      temp_v46 = 0.0f;
      uStack_30 = (unsigned long long)(unsigned int)uStack_30;
      temp_v37 = temp_v30;
      temp_v38 = temp_v15;
      FUN_00282228(&temp_v31);
      piVar7 = DAT_004474f4;
      *(unsigned char *)(DAT_004474f4 + 0x87) = 1;
      piVar13 = piVar7 + 1;
      *piVar13 = *piVar13 + 1;
      piVar7[2] = 0;
      break;
    }
    if (temp_v6 == 1) {
      temp_v6 = vectorPairTransitionStep();
      if (temp_v6 != 0) {
        temp_v31 = piVar13[0xc];
        iStack_94 = piVar13[0xd];
        iStack_90 = piVar13[0xe];
        temp_v25 = 0.017453292f;
        temp_v32 = piVar13[0xf];
        iStack_88 = piVar13[0x10];
        temp_v33 = piVar13[0x11];
        temp_v26 = *(float *)(g_lmapScene + 0x28);
        temp_v14 = *(float *)(g_lmapScene + 0x2c);
        temp_v24 = *(float *)(g_lmapScene + 0x50) * 0.017453292f;
        temp_v28 = *(float *)(g_lmapScene + 0x30);
        FUN_0028250c();
        temp_v29 = 120.0f;
        temp_v26 = temp_v26 + temp_v24 * 120.0f;
        temp_v14 = temp_v14 + 70.0f;
        temp_v24 = *(float *)(g_lmapScene + 0x50) * temp_v25;
        FUN_00282390();
        temp_v36 = temp_v28 + temp_v24 * temp_v29;
        temp_v28 = *(float *)(g_lmapScene + 0x28);
        temp_v15 = *(float *)(g_lmapScene + 0x2c);
        temp_v30 = *(float *)(g_lmapScene + 0x30);
        temp_v24 = (*(float *)(g_lmapScene + 0x50) - temp_v29) * temp_v25;
        temp_v34 = temp_v26;
        temp_v35 = temp_v14;
        FUN_0028250c();
        temp_v26 = 140.0f;
        temp_v37 = temp_v28 + temp_v24 * 140.0f;
        temp_v15 = temp_v15 + 200.0f;
        temp_v25 = (*(float *)(g_lmapScene + 0x50) - temp_v29) * temp_v25;
        FUN_00282390();
        temp_v39 = temp_v30 + temp_v25 * temp_v26;
        temp_v47 = 4.2039e-43f;
        temp_v46 = 0.0f;
        uStack_30 = (unsigned long long)(unsigned int)uStack_30;
        temp_v38 = temp_v15;
        FUN_00282228(&temp_v31);
        piVar7 = DAT_004474f4;
        DAT_004474f4[1] = DAT_004474f4[1] + 1;
        piVar7[2] = 0;
      }
      break;
    }
    if (temp_v6 != 2) break;
    temp_v6 = vectorPairTransitionStep();
    if (temp_v6 != 0) {
      piVar7 = DAT_004474f4;
      DAT_004474f4[1] = DAT_004474f4[1] + 1;
      piVar7[2] = 0;
    }
    break;
  case 0xc:
    FUN_0021b2ec();
    break;
  case 0xd:
    FUN_001f87d4();
    break;
  case 0xe:
    temp_v6 = DAT_004474f4[1];
    piVar7 = DAT_004474f4 + 0x88;
    if (temp_v6 == 0) {
      temp_v31 = DAT_004474f4[0x16];
      iStack_94 = DAT_004474f4[0x17];
      iStack_90 = DAT_004474f4[0x18];
      temp_v25 = 0.017453292f;
      temp_v33 = DAT_004474f4[0x15];
      temp_v32 = DAT_004474f4[0x13];
      iStack_88 = DAT_004474f4[0x14];
      temp_v29 = *(float *)(g_lmapScene + 0x28);
      temp_v28 = *(float *)(g_lmapScene + 0x2c);
      temp_v24 = *(float *)(g_lmapScene + 0x50) * 0.017453292f;
      temp_v26 = *(float *)(g_lmapScene + 0x30);
      FUN_0028250c();
      temp_v30 = 40.0f;
      temp_v35 = temp_v28 + 20.0f;
      temp_v34 = temp_v29 + temp_v24 * 40.0f;
      if (g_gameState == 0x16) {
        temp_v35 = temp_v35 + 20.0f;
      }
      temp_v24 = *(float *)(g_lmapScene + 0x50) * temp_v25;
      FUN_00282390();
      temp_v36 = temp_v26 + temp_v24 * temp_v30;
      temp_v29 = 160.0f;
      temp_v26 = *(float *)(g_lmapScene + 0x28);
      temp_v27 = *(unsigned long long *)(g_lmapScene + 0x2c);
      temp_v24 = (*(float *)(g_lmapScene + 0x50) - 160.0f) * temp_v25;
      FUN_0028250c();
      temp_v28 = 180.0f;
      temp_v37 = temp_v26 + temp_v24 * 180.0f;
      temp_v26 = (float)((unsigned long long)temp_v27 >> 0x20);
      temp_v24 = (float)temp_v27 + 220.0f;
      temp_v25 = (*(float *)(g_lmapScene + 0x50) - temp_v29) * temp_v25;
      FUN_00282390();
      temp_v39 = temp_v26 + temp_v25 * temp_v28;
      if (g_gameState == 0x16) {
        temp_v24 = temp_v24 + 80.0f;
      }
      temp_v47 = 8.40779e-44f;
      temp_v46 = 0.0f;
      uStack_30 = (unsigned long long)(unsigned int)uStack_30;
      temp_v38 = temp_v24;
      FUN_00282228(&temp_v31);
      piVar7 = DAT_004474f4;
      *(unsigned char *)(DAT_004474f4 + 0x87) = 1;
      piVar13 = piVar7 + 1;
      *piVar13 = *piVar13 + 1;
      piVar7[2] = 0;
      break;
    }
    if (temp_v6 == 1) {
      temp_v6 = vectorPairTransitionStep();
      if (temp_v6 != 0) {
        temp_v31 = piVar7[0xc];
        iStack_94 = piVar7[0xd];
        iStack_90 = piVar7[0xe];
        temp_v25 = 0.017453292f;
        temp_v32 = piVar7[0xf];
        iStack_88 = piVar7[0x10];
        temp_v33 = piVar7[0x11];
        temp_v24 = *(float *)(g_lmapScene + 0x50) * 0.017453292f;
        temp_v26 = *(float *)(g_lmapScene + 0x28);
        temp_v27 = *(unsigned long long *)(g_lmapScene + 0x2c);
        FUN_0028250c();
        temp_v28 = 40.0f;
        temp_v36 = (float)((unsigned long long)temp_v27 >> 0x20);
        temp_v35 = (float)temp_v27 + 20.0f;
        temp_v34 = temp_v26 + temp_v24 * 40.0f;
        if (g_gameState == 0x16) {
          temp_v35 = temp_v35 + 20.0f;
        }
        temp_v24 = *(float *)(g_lmapScene + 0x50) * temp_v25;
        FUN_00282390();
        temp_v36 = temp_v36 + temp_v24 * temp_v28;
        temp_v30 = 170.0f;
        temp_v26 = *(float *)(g_lmapScene + 0x28);
        temp_v27 = *(unsigned long long *)(g_lmapScene + 0x2c);
        temp_v24 = (*(float *)(g_lmapScene + 0x50) - 170.0f) * temp_v25;
        FUN_0028250c();
        temp_v29 = 180.0f;
        temp_v26 = temp_v26 + temp_v24 * 180.0f;
        temp_v28 = (float)((unsigned long long)temp_v27 >> 0x20);
        temp_v24 = (float)temp_v27 + 221.0f;
        temp_v25 = (*(float *)(g_lmapScene + 0x50) - temp_v30) * temp_v25;
        FUN_00282390();
        temp_v39 = temp_v28 + temp_v25 * temp_v29;
        if (g_gameState == 0x16) {
          temp_v24 = temp_v24 + 80.0f;
        }
        temp_v47 = 6.30584e-43f;
        temp_v46 = 0.0f;
        uStack_30 = (unsigned long long)(unsigned int)uStack_30;
        temp_v37 = temp_v26;
        temp_v38 = temp_v24;
        FUN_00282228(&temp_v31);
        piVar7 = DAT_004474f4;
        DAT_004474f4[1] = DAT_004474f4[1] + 1;
        piVar7[2] = 0;
      }
      break;
    }
    if (temp_v6 != 2) break;
    temp_v6 = vectorPairTransitionStep();
    if (temp_v6 != 0) {
      piVar7 = DAT_004474f4;
      DAT_004474f4[1] = DAT_004474f4[1] + 1;
      piVar7[2] = 0;
    }
    break;
  case 0xf:
    FUN_0021b0f0();
  }
  FUN_0030860c();
}

} /* extern "C" */
