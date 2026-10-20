/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002af63c` (_code @ 0x2af63c, 0x8a8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a8a58(float *, unsigned int);
int FUN_002a8ac4(...);
int FUN_002b1fc4(...);
int FUN_002b7064(void);
int FUN_002b70cc(void);
int FUN_002b76d0(...);
int cameraSetViewMatrix(...);
int FUN_002ba12c(...);
int FUN_002bf538(void);
int FUN_002c1b64(...);
int FUN_002c5d5c(...);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of param_3: 29 slot(s), 116 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spE8; /* 0xe8: local_e8 */
    unsigned int spEC; /* 0xec: local_ec */
    unsigned int spF8; /* 0xf8: local_f8 */
    unsigned int spFC; /* 0xfc: local_fc */
    unsigned int sp108; /* 0x108: local_108 */
    unsigned int sp10C; /* 0x10c: local_10c */
    unsigned int sp118; /* 0x118: local_118 */
    unsigned int sp120; /* 0x120: local_120 */
    unsigned int sp128; /* 0x128: local_128 */
    unsigned int sp138; /* 0x138: local_138 */
    unsigned int sp148; /* 0x148: local_148 */
    unsigned int sp158; /* 0x158: local_158 */
    unsigned int sp15C; /* 0x15c: local_15c */
    unsigned int sp168; /* 0x168: local_168 */
    unsigned int sp170; /* 0x170: local_170 */
    unsigned int sp174; /* 0x174: local_174 */
    unsigned int sp178; /* 0x178: local_178 */
} param_3_stack;

extern unsigned char LAB_00141adc; /* 0x141adc */
extern int g_titleScene; /* 0x44ea00 */
extern unsigned int DAT_004d46ac; /* 0x4d46ac */
extern unsigned int DAT_004d46b0; /* 0x4d46b0 */
extern unsigned int DAT_004d46b4; /* 0x4d46b4 */
extern unsigned int DAT_004d46b8; /* 0x4d46b8 */
extern unsigned int DAT_004d46bc; /* 0x4d46bc */
extern unsigned int DAT_004d46cc; /* 0x4d46cc */
extern unsigned int DAT_004d46dc; /* 0x4d46dc */
extern unsigned char DAT_004d46ec; /* 0x4d46ec */
extern float DAT_004d4704; /* 0x4d4704 */
extern unsigned char g_asdSoundOptions; /* 0x4d4880 */
extern signed char DAT_004d4912; /* 0x4d4912 */
extern signed char DAT_004d4913; /* 0x4d4913 */
extern unsigned int DAT_004d4914; /* 0x4d4914 */

#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002a8a58. */
/* Supplied declaration required: FUN_002a8ac4. */
/* Supplied declaration required: FUN_002b1fc4. */
/* Supplied declaration required: FUN_002b7064. */
/* Supplied declaration required: FUN_002b70cc. */
/* Supplied declaration required: FUN_002b76d0. */
/* Supplied declaration required: cameraSetViewMatrix. */
/* Supplied declaration required: FUN_002ba12c. */
/* Supplied declaration required: FUN_002bf538. */
/* Supplied declaration required: FUN_002c1b64. */
/* Supplied declaration required: FUN_002c5d5c. */


int FUN_002af63c(unsigned int param_1,int param_2,unsigned int *param_3)

{
/* irregular: 3 goto(s); irregular input(s): in_fpscr; 13 native warning(s); review required */
  unsigned char temp_v0;
  short temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  unsigned char temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  int temp_v11;
  unsigned int temp_v12;
  int temp_v13;
  int *piVar15;
  unsigned char temp_v14;
  unsigned int in_fpscr;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  float temp_v21;
  unsigned int uStack_16c;
  unsigned int temp_v22;
  float fStack_164;
  unsigned int temp_v23;
  float temp_v24 [35];
  float fStack_cc;
  float temp_v25;
  unsigned int uStack_c4;
  unsigned int uStack_c0;
  float fStack_bc;
  float temp_v26;
  unsigned int uStack_b4;
  unsigned int uStack_b0;
  float fStack_ac;
  float temp_v27;
  unsigned int uStack_a4;
  unsigned int uStack_a0;
  float fStack_9c;
  unsigned char *temp_v28;
  unsigned int temp_v29;
  float temp_v30;
  unsigned int uStack_84;
  unsigned int uStack_80;
  float fStack_7c;
  float temp_v31;
  unsigned int uStack_74;
  unsigned int uStack_70;
  float fStack_6c;
  float temp_v32;
  unsigned int uStack_64;
  unsigned int uStack_60;
  float fStack_5c;
  float temp_v33;
  unsigned int uStack_54;
  unsigned int uStack_50;
  float fStack_4c;
  unsigned int temp_v34;
  int iStack_2c;
  unsigned int *puStack_28;
  
  temp_v4 = 0;
  temp_v3 = 0;
  temp_v5 = 0;
  temp_v13 = *(int *)(param_2 + 0xc);
  temp_v34 = param_1;
  iStack_2c = param_2;
  puStack_28 = param_3;
  temp_v15 = DAT_004d4704;
  FUN_002c5d5c(temp_v24 + 0x10,&LAB_00141adc,0x10,4);
  FUN_002c5d5c(temp_v24,&LAB_00141adc,0x10,4);
  temp_v28 = &g_asdSoundOptions;
  temp_v23 = 0;
  if (DAT_004d4912 != '\0') {
    temp_v6 = param_3[3] + (unsigned int)*(unsigned char *)(param_2 + 0x10);
    if ((int)temp_v6 >= 0x100) {
      temp_v6 = 0xff;
    }
    param_3[3] = temp_v6;
  }
  temp_v9 = g_titleScene;
  temp_v8 = 0;
  do {
    temp_v24[temp_v8 * 4 + 0x10] = 1.0f;
    temp_v24[temp_v8 * 4 + 0x11] = 1.0f;
    temp_v24[temp_v8 * 4 + 0x12] = 1.0f;
    temp_v24[temp_v8 * 4 + 0x13] = temp_v15;
    temp_v16 = (float)(&DAT_004d46b0)[temp_v8 * 4];
    temp_v17 = (float)(&DAT_004d46b4)[temp_v8 * 4];
    temp_v18 = (float)(&DAT_004d46b8)[temp_v8 * 4];
    temp_v7 = temp_v8 + 1;
    temp_v24[temp_v8 * 4] = (float)(&DAT_004d46ac)[temp_v8 * 4];
    temp_v24[temp_v8 * 4 + 1] = temp_v16;
    temp_v24[temp_v8 * 4 + 2] = temp_v17;
    temp_v24[temp_v8 * 4 + 3] = temp_v18;
    temp_v8 = temp_v7;
  } while (temp_v7 < 4);
  temp_v29 = (unsigned int)DAT_004d46ec;
  if (temp_v13 != 0) {
    temp_v0 = *(unsigned char *)(temp_v13 + 0xc);
    temp_v16 = 0.0f;
    if (((((temp_v0 & 2) != 0) && ((*param_3 & 8) == 0)) ||
        ((temp_v17 = temp_v15, (temp_v0 & 4) != 0 && ((*param_3 & 4) == 0)))) &&
       (temp_v18 = *(float *)(temp_v13 + 8), temp_v17 = temp_v18, temp_v15 != 1.0f)) {
      temp_v6 = in_fpscr & 0xfffffff;
      if (temp_v15 != 0.0f) {
        temp_v17 = temp_v18 * temp_v15;
        in_fpscr = temp_v6 | ((unsigned int)(temp_v17 == 0.0f) << 0x1e);
        if ((romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0)) &&
           (in_fpscr = temp_v6 | ((unsigned int)(temp_v18 == 0.0f) << 0x1e), !romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0))) {
          temp_v17 = 0.003921569f;
        }
        goto LAB_002af7a0;
      }
      in_fpscr = temp_v6 | ((unsigned int)(temp_v18 == 0.0f) << 0x1e);
      if (romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0)) goto LAB_002af7a0;
    }
    else {
LAB_002af7a0:
      if (DAT_004d4913 != '\0') {
        temp_v8 = (&DAT_004d4914)[temp_v0 >> 6];
        piVar15 = (int *)(g_titleScene + 0x12ac);
        temp_v7 = *piVar15;
        temp_v11 = piVar15[temp_v7 + 2];
        *piVar15 = temp_v7 + 1;
        piVar15[temp_v7 + 3] = temp_v8;
        if (*(char *)(temp_v9 + 0x12c4) != '\0' || temp_v11 != temp_v8) {
          (**(romwright_code **)(temp_v9 + 0x12c8))();
          *(unsigned char *)(temp_v9 + 0x12c4) = 0;
        }
        temp_v5 = 1;
      }
      temp_v9 = g_titleScene;
      if (((*(unsigned char *)(temp_v13 + 0xc) & 4) != 0) && (temp_v8 = 0, (*param_3 & 4) == 0)) {
        do {
          if (temp_v8 == 2) {
            temp_v7 = 3;
          }
          else {
            temp_v7 = temp_v8;
            if (temp_v8 == 3) {
              temp_v7 = 2;
            }
          }
          temp_v7 = temp_v13 + temp_v7 * 0x10;
          temp_v15 = *(float *)(temp_v7 + 0x10);
          temp_v18 = *(float *)(temp_v7 + 0x14);
          if (temp_v24[temp_v8 * 4] != 1.0f) {
            temp_v15 = temp_v15 * temp_v24[temp_v8 * 4];
          }
          if (temp_v24[temp_v8 * 4 + 1] != 1.0f) {
            temp_v18 = temp_v18 * temp_v24[temp_v8 * 4 + 1];
          }
          temp_v19 = *(float *)(temp_v7 + 0x18);
          temp_v20 = *(float *)(temp_v7 + 0x1c);
          temp_v7 = temp_v8 + 1;
          if (temp_v24[temp_v8 * 4 + 2] != 1.0f) {
            temp_v19 = temp_v19 * temp_v24[temp_v8 * 4 + 2];
          }
          temp_v24[temp_v8 * 4 + 0x11] = temp_v18;
          temp_v24[temp_v8 * 4 + 0x10] = temp_v15;
          temp_v24[temp_v8 * 4 + 0x12] = temp_v19;
          temp_v24[temp_v8 * 4 + 0x13] = temp_v20;
          temp_v8 = temp_v7;
        } while (temp_v7 < 4);
      }
      temp_v12 = 1;
      if (*(short *)(temp_v13 + 4) == 0) {
        if (((*(unsigned char *)(temp_v13 + 0xc) & 2) != 0) && ((*param_3 & 8) == 0)) {
          temp_v3 = 1;
          FUN_002bf538();
        }
        if (((*(unsigned char *)(temp_v13 + 0xc) & 4) != 0) && ((*param_3 & 4) == 0)) {
          temp_v24[0x13] = temp_v24[0x13] * temp_v17;
          temp_v4 = 1;
          temp_v3 = 1;
          temp_v24[0x17] = temp_v24[0x17] * temp_v17;
          temp_v24[0x1b] = temp_v24[0x1b] * temp_v17;
          temp_v24[0x1f] = temp_v24[0x1f] * temp_v17;
          temp_v24[0x20] = temp_v24[0x1c];
          temp_v24[0x21] = temp_v24[0x1d];
          temp_v24[0x22] = temp_v24[0x1e];
          temp_v25 = temp_v24[0x18];
          uStack_c4 = temp_v24[0x19];
          uStack_c0 = temp_v24[0x1a];
          temp_v26 = temp_v24[0x14];
          uStack_b4 = temp_v24[0x15];
          uStack_b0 = temp_v24[0x16];
          temp_v27 = temp_v24[0x10];
          uStack_a4 = temp_v24[0x11];
          uStack_a0 = temp_v24[0x12];
          fStack_cc = temp_v24[0x1f];
          fStack_bc = temp_v24[0x1b];
          fStack_ac = temp_v24[0x17];
          fStack_9c = temp_v24[0x13];
          FUN_002b1fc4(&temp_v27,&temp_v26,&temp_v25,temp_v24 + 0x20,temp_v23,temp_v12);
        }
        goto LAB_002af9f0;
      }
      if (*(short *)(temp_v13 + 4) == 1) {
        if ((*param_3 & 2) != 0) {
          param_3[1] = param_3[1] + (int)*(short *)(param_2 + 8);
          param_3[2] = param_3[2] + (int)*(short *)(param_2 + 10);
        }
        if (((*(unsigned char *)(temp_v13 + 0xc) & 2) != 0) && ((*param_3 & 8) == 0)) {
          temp_v3 = 1;
          FUN_002bf538();
        }
        if (((*(unsigned char *)(temp_v13 + 0xc) & 4) != 0) && ((*param_3 & 4) == 0)) {
          temp_v24[0x13] = temp_v24[0x13] * temp_v17;
          temp_v4 = 1;
          temp_v3 = 1;
          temp_v24[0x17] = temp_v24[0x17] * temp_v17;
          temp_v24[0x1b] = temp_v24[0x1b] * temp_v17;
          temp_v24[0x1f] = temp_v24[0x1f] * temp_v17;
          temp_v30 = temp_v24[0x1c];
          uStack_84 = temp_v24[0x1d];
          uStack_80 = temp_v24[0x1e];
          temp_v31 = temp_v24[0x18];
          uStack_74 = temp_v24[0x19];
          uStack_70 = temp_v24[0x1a];
          temp_v32 = temp_v24[0x14];
          uStack_64 = temp_v24[0x15];
          uStack_60 = temp_v24[0x16];
          temp_v33 = temp_v24[0x10];
          uStack_54 = temp_v24[0x11];
          uStack_50 = temp_v24[0x12];
          fStack_7c = temp_v24[0x1f];
          fStack_6c = temp_v24[0x1b];
          fStack_5c = temp_v24[0x17];
          fStack_4c = temp_v24[0x13];
          FUN_002b1fc4(&temp_v33,&temp_v32,&temp_v31,&temp_v30,temp_v23,temp_v12);
        }
        temp_v17 = 0.00390625f;
        temp_v14 = (*param_3 & 0x10) == 0;
        temp_v2 = 0;
        temp_v15 = (float)VectorSignedToFloat(0x100 - param_3[3],(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v15 = temp_v15 * 0.00390625f;
        if (!temp_v14) {
          in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)((float)param_3[0xc] == temp_v16) << 0x1e);
          temp_v14 = romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0);
        }
        temp_v18 = temp_v16;
        if (!temp_v14) {
          temp_v1 = (short)param_3[0xd];
          temp_v6 = param_3[1];
          temp_v10 = param_3[2];
          if (temp_v1 == 1) {
            temp_v6 = temp_v6 + (param_3[5] >> 1);
          }
          else if (temp_v1 == 2) {
            temp_v6 = temp_v6 + param_3[5];
          }
          else if (temp_v1 == 3) {
            temp_v6 = (unsigned int)(short)param_3[0xe];
          }
          temp_v1 = *(short *)((int)param_3 + 0x36);
          if (temp_v1 == 1) {
            temp_v10 = temp_v10 + (param_3[6] >> 1);
          }
          else if (temp_v1 == 2) {
            temp_v10 = temp_v10 + param_3[6];
          }
          else if (temp_v1 == 3) {
            temp_v10 = (unsigned int)*(short *)((int)param_3 + 0x3a);
          }
          VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_002a8a58(temp_v24 + 0x20,temp_v10);
          temp_v16 = (float)param_3[0xc];
          temp_v2 = 1;
        }
        if (temp_v28[0x90] != '\0') {
          temp_v6 = *param_3 & 0x400000;
          if ((*param_3 & 0x800000) != 0) {
            temp_v10 = param_3[4];
            if (temp_v6 != 0) {
              temp_v10 = temp_v10 + *(unsigned char *)(param_2 + 0x11);
            }
            if ((int)temp_v10 >= 0x101) {
              temp_v10 = 0x100;
            }
          }
          else {
            temp_v10 = param_3[3];
            if (temp_v6 != 0) {
              temp_v10 = (unsigned int)*(unsigned char *)(param_2 + 0x11);
            }
          }
          if (param_3[3] != temp_v10) {
            temp_v15 = (float)VectorSignedToFloat(0x100 - temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v15 = temp_v15 * temp_v17;
          }
          FUN_002ba12c(g_titleScene);
          in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v16 == temp_v18) << 0x1e);
          if (temp_v28[0x91] != '\0') {
            temp_v15 = (float)VectorSignedToFloat((int)temp_v15,(unsigned char)(in_fpscr >> 0x16) & 3);
          }
          if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0)) {
            temp_v17 = temp_v16 * 2.0f * -3.1415927f * temp_v17 * 40.743664f;
            temp_v16 = temp_v17;
            FUN_002b70cc();
            temp_v18 = (float)VectorSignedToFloat(param_3[2],(unsigned char)(in_fpscr >> 0x16) & 3);
            param_3[2] = (int)(temp_v18 - temp_v17 * temp_v15);
            FUN_002b7064();
            temp_v15 = temp_v16 * temp_v15;
          }
          temp_v16 = (float)VectorSignedToFloat(param_3[1],(unsigned char)(in_fpscr >> 0x16) & 3);
          param_3[1] = (int)(temp_v16 + temp_v15);
        }
        FUN_002c1b64(g_titleScene,0);
        VectorUnsignedToFloat(param_3[6],(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorUnsignedToFloat(param_3[5],(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(param_3[2],(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(param_3[1],(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_002b76d0(&DAT_004d46ac,&DAT_004d46bc,&DAT_004d46cc,&DAT_004d46dc);
        if (temp_v2) {
          cameraSetViewMatrix(g_titleScene,temp_v24 + 0x20);
        }
        if (temp_v3) {
          FUN_002bf538();
        }
        if (temp_v4) {
          temp_v22 = temp_v24[0xe];
          fStack_164 = temp_v24[0xf];
          temp_v21 = temp_v24[0xc];
          uStack_16c = temp_v24[0xd];
          temp_v30 = temp_v24[8];
          uStack_84 = temp_v24[9];
          uStack_80 = temp_v24[10];
          fStack_7c = temp_v24[0xb];
          temp_v31 = temp_v24[4];
          uStack_74 = temp_v24[5];
          uStack_70 = temp_v24[6];
          fStack_6c = temp_v24[7];
          temp_v32 = temp_v24[0];
          uStack_64 = temp_v24[1];
          uStack_60 = temp_v24[2];
          fStack_5c = temp_v24[3];
          FUN_002b1fc4(&temp_v32,&temp_v31,&temp_v30,&temp_v21,temp_v29,0);
        }
        temp_v13 = g_titleScene;
        if (temp_v5) {
          piVar15 = (int *)(g_titleScene + 0x12ac);
          temp_v9 = *piVar15;
          temp_v8 = piVar15[temp_v9 + 2];
          *piVar15 = temp_v9 - 1;
          if (*(char *)(temp_v13 + 0x12c4) != '\0' || temp_v8 != piVar15[temp_v9 + 1]) {
            (**(romwright_code **)(temp_v13 + 0x12c8))();
            *(unsigned char *)(temp_v13 + 0x12c4) = 0;
          }
        }
        return 1;
      }
      if (temp_v5) {
        piVar15 = (int *)(g_titleScene + 0x12ac);
        temp_v13 = *piVar15;
        temp_v8 = piVar15[temp_v13 + 2];
        *piVar15 = temp_v13 - 1;
        if (*(char *)(temp_v9 + 0x12c4) != '\0' || temp_v8 != piVar15[temp_v13 + 1]) {
          (**(romwright_code **)(temp_v9 + 0x12c8))();
          *(unsigned char *)(temp_v9 + 0x12c4) = 0;
        }
      }
    }
    param_2 = 0;
  }
  else {
LAB_002af9f0:
    FUN_002a8ac4(param_2,param_3,temp_v34);
    if (temp_v3) {
      FUN_002bf538();
    }
    if (temp_v4) {
      temp_v24[0x20] = temp_v24[0xc];
      temp_v24[0x21] = temp_v24[0xd];
      temp_v24[0x22] = temp_v24[0xe];
      fStack_cc = temp_v24[0xf];
      temp_v25 = temp_v24[8];
      uStack_c4 = temp_v24[9];
      uStack_c0 = temp_v24[10];
      fStack_bc = temp_v24[0xb];
      temp_v26 = temp_v24[4];
      uStack_b4 = temp_v24[5];
      uStack_b0 = temp_v24[6];
      fStack_ac = temp_v24[7];
      temp_v27 = temp_v24[0];
      uStack_a4 = temp_v24[1];
      uStack_a0 = temp_v24[2];
      fStack_9c = temp_v24[3];
      FUN_002b1fc4(&temp_v27,&temp_v26,&temp_v25,temp_v24 + 0x20,temp_v29,0);
    }
    temp_v13 = g_titleScene;
    if (temp_v5) {
      piVar15 = (int *)(g_titleScene + 0x12ac);
      temp_v9 = *piVar15;
      temp_v8 = piVar15[temp_v9 + 2];
      *piVar15 = temp_v9 - 1;
      if (*(char *)(temp_v13 + 0x12c4) != '\0' || temp_v8 != piVar15[temp_v9 + 1]) {
        (**(romwright_code **)(temp_v13 + 0x12c8))(piVar15[temp_v9 + 1]);
        *(unsigned char *)(temp_v13 + 0x12c4) = 0;
      }
    }
  }
  return param_2;
}

} /* extern "C" */
