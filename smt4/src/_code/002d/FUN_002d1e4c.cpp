/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d1e4c` (_code @ 0x2d1e4c, 0xa58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0021b0f0(void);
int FUN_0027eee0(void);
int FUN_00282390(void);
int FUN_0028250c(void);
int FUN_00287b0c(void);
int SBORROW4(int, int);
int VectorSignedToFloat(unsigned int, int);

/* stack frame of void: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
} void_stack;

extern signed char DAT_004474f0; /* 0x4474f0 */
extern unsigned int DAT_004474f4; /* 0x4474f4 */
extern float DAT_004474f8; /* 0x4474f8 */
extern float DAT_004474fc; /* 0x4474fc */
extern int g_lmapScene; /* 0x447e88 */
extern signed char DAT_0049f934; /* 0x49f934 */
extern unsigned int DAT_0049f938; /* 0x49f938 */
extern unsigned int DAT_0049fc1c; /* 0x49fc1c */
extern signed char DAT_0049fc64; /* 0x49fc64 */
extern int DAT_0049fc8c; /* 0x49fc8c */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Supplied declaration required: FUN_0021b0f0. */
extern unsigned int FUN_00256540(void);
extern int FUN_0025b4b0(float *, unsigned int *, unsigned int);
extern int FUN_002762e0(void);
extern int lmapSceneGetUnk0(void);
/* Supplied declaration required: FUN_0027eee0. */
/* Supplied declaration required: FUN_00282390. */
/* Supplied declaration required: FUN_0028250c. */
/* Supplied declaration required: FUN_00287b0c. */
extern int padIsButtonPressed(unsigned int);
extern int FUN_002c15fc(unsigned int);
extern int gameGetMapBlock(void);


void FUN_002d1e4c(void)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr; 8 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  char temp_v5;
  unsigned int temp_v6;
  unsigned char temp_v7;
  unsigned char temp_v8;
  unsigned char temp_v9;
  unsigned char temp_v10;
  unsigned char temp_v11;
  unsigned char temp_v12;
  unsigned int in_fpscr;
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
  int temp_v25;
  float temp_v26;
  unsigned int uStack_4c;
  unsigned int *temp_v27;
  
  temp_v7 = 0;
  temp_v8 = 0;
  temp_v9 = 0;
  temp_v11 = 0;
  temp_v0 = 0;
  temp_v1 = gameGetMapBlock();
  temp_v2 = DAT_004474f4;
  temp_v20 = 0.0f;
  temp_v18 = 1.0f;
  if (*(char *)(DAT_004474f4 + 0xa4) != '\0') {
    *(unsigned char *)(DAT_004474f4 + 0xb0) = 0;
    *(unsigned char *)(temp_v2 + 0xb1) = 0;
    *(unsigned short *)(temp_v2 + 0xb2) = 10;
    *(unsigned short *)(temp_v2 + 0xb4) = 0;
    *(unsigned int *)(temp_v2 + 0xb8) = 0;
    *(unsigned int *)(temp_v2 + 0xbc) = 0;
    *(unsigned int *)(temp_v2 + 0xc0) = 0x3f800000;
  }
  temp_v27 = &DAT_0049fc1c;
  if (DAT_0049fc64 != '\0') {
    return;
  }
  if (0 < *(short *)(temp_v2 + 0xb2)) {
    *(short *)(temp_v2 + 0xb2) = *(short *)(temp_v2 + 0xb2) - 1;
  }
  if (DAT_0049fc8c != 1) {
    if (DAT_0049f934 == '\0') {
      temp_v6 = DAT_0049f938;
      if (DAT_0049f938 == 0) {
        temp_v6 = (unsigned int)*(unsigned char *)(temp_v2 + 0xb0);
      }
      if (DAT_0049f938 == 0 && temp_v6 == 0) {
        if (((*(char *)(temp_v2 + 0xb1) != '\0') && (temp_v4 = FUN_002c15fc(8), temp_v4 == 0)) &&
           (temp_v4 = FUN_002c15fc(7), temp_v4 == 0)) {
          *(unsigned char *)(DAT_004474f4 + 0xb1) = 0;
        }
        if (*(short *)(DAT_004474f4 + 0xb2) < 7) {
          temp_v4 = FUN_002c15fc(8);
          temp_v7 = temp_v4 != 0;
          temp_v4 = FUN_002c15fc(7);
          temp_v8 = temp_v4 != 0;
          temp_v4 = padIsButtonPressed(4);
          temp_v9 = temp_v4 != 0;
          temp_v4 = padIsButtonPressed(3);
          if (temp_v4 != 0) {
            temp_v0 = 1;
          }
        }
        temp_v10 = *(int *)(DAT_004474f4 + 0xa8) == 0;
        temp_v2 = DAT_004474f4;
        if (temp_v10) {
          temp_v2 = (unsigned int)*(unsigned short *)(DAT_004474f4 + 0xb2);
        }
        if (((temp_v10 && temp_v2 == 0) && (temp_v4 = lmapSceneGetUnk0(), temp_v4 == 1)) &&
           ((temp_v4 = FUN_002762e0(), temp_v4 != 0 ||
            (((temp_v4 = FUN_002c15fc(8), temp_v4 != 0 && (temp_v4 = FUN_002c15fc(7), temp_v4 != 0)) &&
             ((temp_v4 = padIsButtonPressed(8), temp_v4 == 0 &&
              ((temp_v4 = padIsButtonPressed(7), temp_v4 == 0 && (*(char *)(DAT_004474f4 + 0xb1) == '\0'))))))
            )))) {
          temp_v7 = 0;
          temp_v8 = 0;
          temp_v9 = 0;
          temp_v0 = 0;
          temp_v11 = 1;
        }
      }
    }
  }
  else {
    temp_v4 = FUN_002c15fc(8);
    temp_v7 = temp_v4 != 0;
    temp_v4 = FUN_002c15fc(7);
    temp_v8 = temp_v4 != 0;
  }
  temp_v15 = 7.0f;
  temp_v17 = 3.0f;
  temp_v16 = temp_v18;
  if (*(char *)(temp_v27 + 0x3d) != '\0') {
    temp_v15 = 3.5f;
    temp_v17 = 1.5f;
    temp_v16 = 0.5f;
  }
  temp_v3 = FUN_00256540();
  temp_v2 = DAT_004474f4;
  temp_v19 = 2.0f;
  temp_v13 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v13 = temp_v13 * 0.01f;
  temp_v12 = SBORROW4((int)temp_v13,0x40000000);
  temp_v4 = (int)temp_v13 - 0x40000000;
  temp_v10 = temp_v13 == 2.0f;
  temp_v14 = temp_v19;
  if ((int)temp_v13 < 0x40000001) {
    temp_v12 = SBORROW4((int)temp_v13,0x3f800000);
    temp_v4 = (int)temp_v13 - 0x3f800000;
    temp_v10 = temp_v13 == 1.0f;
    temp_v14 = temp_v13;
  }
  if (!temp_v10 && temp_v4 < 0 == temp_v12) {
    temp_v15 = temp_v15 * temp_v14;
    temp_v16 = temp_v16 * temp_v14;
    temp_v17 = temp_v17 * temp_v14;
  }
  if (*(char *)(DAT_004474f4 + 0xb0) == '\0') {
    if (temp_v11) {
      *(unsigned char *)(DAT_004474f4 + 0xb0) = 1;
      temp_v13 = *(float *)(temp_v2 + 0x18);
      *(float *)(temp_v2 + 0xb8) = temp_v13;
      *(unsigned int *)(temp_v2 + 0xbc) = *(unsigned int *)(g_lmapScene + 0x50);
      *(float *)(temp_v2 + 0x20c) = temp_v20;
      *(float *)(temp_v2 + 0x210) = temp_v20;
      FUN_00287b0c();
      temp_v2 = DAT_004474f4;
      temp_v14 = temp_v13;
      if (temp_v13 < temp_v20) {
        temp_v14 = -temp_v13;
      }
      if ((int)temp_v14 < 0x42c80000) {
        *(unsigned short *)(DAT_004474f4 + 0xb4) = 0;
        if (temp_v13 < temp_v20) {
          *(unsigned int *)(temp_v2 + 0xc0) = 0xbf800000;
        }
        else {
          *(float *)(temp_v2 + 0xc0) = temp_v18;
        }
      }
      else {
        *(unsigned short *)(DAT_004474f4 + 0xb4) = 1;
        if (temp_v13 < temp_v20) {
          *(unsigned int *)(temp_v2 + 0xc0) = 0xbf800000;
          temp_v14 = *(float *)(temp_v2 + 0xbc) + 45.0f;
        }
        else {
          *(float *)(temp_v2 + 0xc0) = temp_v18;
          temp_v14 = *(float *)(temp_v2 + 0xbc) - 45.0f;
        }
        *(float *)(temp_v2 + 0xb8) = temp_v14;
        *(float *)(temp_v2 + 0x18) = temp_v14;
        *(unsigned char *)(temp_v2 + 0xa4) = 1;
      }
      if (*(char *)(DAT_004474f4 + 0xb0) != '\0') goto LAB_002d21d0;
    }
    if ((!temp_v7) || (temp_v4 = lmapSceneGetUnk0(), temp_v2 = DAT_004474f4, temp_v4 != 1)) {
      if ((!temp_v8) || (temp_v4 = lmapSceneGetUnk0(), temp_v2 = DAT_004474f4, temp_v4 != 1)) {
        temp_v2 = DAT_004474f4;
        temp_v14 = *(float *)(DAT_004474f4 + 0x20c);
        if (((int)temp_v14 >= 0x3dccccce) || ((unsigned int)temp_v14 >= 0xbdccccce)) {
          *(float *)(DAT_004474f4 + 0x210) = temp_v20;
          if (!((temp_v20 != temp_v20) || (temp_v14 != temp_v14))) {
            temp_v14 = temp_v14 + temp_v17;
            *(float *)(temp_v2 + 0x20c) = temp_v14;
            if (temp_v20 <= temp_v14) {
              temp_v14 = temp_v20;
            }
          }
          else {
            temp_v14 = temp_v14 - temp_v17;
            *(float *)(temp_v2 + 0x20c) = temp_v14;
            if (temp_v14 < temp_v20) {
              temp_v14 = temp_v20;
            }
          }
          *(float *)(temp_v2 + 0x20c) = temp_v14;
          *(float *)(temp_v2 + 0x18) = *(float *)(temp_v2 + 0x18) + *(float *)(temp_v2 + 0x20c);
        }
      }
      else {
        temp_v14 = -temp_v15;
        *(float *)(DAT_004474f4 + 0x210) = temp_v14;
        temp_v15 = *(float *)(temp_v2 + 0x20c);
        if (!((temp_v14 != temp_v14) || (temp_v15 != temp_v15))) {
          temp_v15 = temp_v15 + temp_v16;
          *(float *)(temp_v2 + 0x20c) = temp_v15;
          if (temp_v15 < temp_v14) {
            temp_v14 = temp_v15;
          }
        }
        else {
          temp_v15 = temp_v15 - temp_v16;
          *(float *)(temp_v2 + 0x20c) = temp_v15;
          if (temp_v14 <= temp_v15) {
            temp_v14 = temp_v15;
          }
        }
        *(float *)(temp_v2 + 0x20c) = temp_v14;
        *(float *)(temp_v2 + 0x18) = *(float *)(temp_v2 + 0x18) + *(float *)(temp_v2 + 0x20c);
      }
    }
    else {
      *(float *)(DAT_004474f4 + 0x210) = temp_v15;
      temp_v14 = *(float *)(temp_v2 + 0x20c);
      if (!((temp_v15 != temp_v15) || (temp_v14 != temp_v14))) {
        temp_v14 = temp_v14 + temp_v16;
        *(float *)(temp_v2 + 0x20c) = temp_v14;
        if (temp_v15 <= temp_v14) {
          temp_v14 = temp_v15;
        }
      }
      else {
        temp_v14 = temp_v14 - temp_v16;
        *(float *)(temp_v2 + 0x20c) = temp_v14;
        if (temp_v14 < temp_v15) {
          temp_v14 = temp_v15;
        }
      }
      *(float *)(temp_v2 + 0x20c) = temp_v14;
      *(float *)(temp_v2 + 0x18) = *(float *)(temp_v2 + 0x18) + *(float *)(temp_v2 + 0x20c);
    }
  }
  else {
LAB_002d21d0:
    temp_v15 = 12.0f;
    temp_v16 = *(float *)(DAT_004474f4 + 0x18);
    FUN_0027eee0();
    temp_v2 = DAT_004474f4;
    if (12.5f >= temp_v16) {
      *(unsigned int *)(DAT_004474f4 + 0x18) = *(unsigned int *)(DAT_004474f4 + 0xbc);
      *(unsigned char *)(temp_v2 + 0xb0) = 0;
      *(unsigned short *)(temp_v2 + 0xb2) = 10;
      *(unsigned char *)(temp_v2 + 0xb1) = 1;
    }
    else {
      if (temp_v20 <= *(float *)(DAT_004474f4 + 0xc0)) {
        temp_v15 = *(float *)(DAT_004474f4 + 0x18) + temp_v15;
      }
      else {
        temp_v15 = *(float *)(DAT_004474f4 + 0x18) - temp_v15;
      }
      *(float *)(DAT_004474f4 + 0x18) = temp_v15;
    }
  }
  temp_v2 = DAT_004474f4;
  if (*(char *)(DAT_004474f4 + 0xb0) == '\0') {
    temp_v16 = *(float *)(DAT_004474f4 + 0x18);
    if (temp_v16 < temp_v20) {
      temp_v16 = temp_v16 + 360.0f;
      *(float *)(DAT_004474f4 + 0x18) = temp_v16;
    }
    if ((int)temp_v16 >= 0x43b40000) {
      *(float *)(temp_v2 + 0x18) = temp_v16 - 360.0f;
    }
  }
  temp_v6 = (unsigned int)*(unsigned char *)(temp_v2 + 0x2b8);
  temp_v11 = temp_v6 == 0;
  if (temp_v11) {
    temp_v6 = *(unsigned int *)(temp_v2 + 0xac);
  }
  if (temp_v11 && temp_v6 == 0) {
    if (temp_v9) {
      if (*(char *)(temp_v1 + 0x1d) != '\0') {
        temp_v5 = *(char *)(temp_v1 + 0x1d) - '\x01';
      }
      else {
        temp_v5 = '\x02';
      }
      *(char *)(temp_v1 + 0x1d) = temp_v5;
      *(unsigned char *)(temp_v2 + 0xa4) = 1;
    }
    else if (temp_v0) {
      if (*(unsigned char *)(temp_v1 + 0x1d) < 2) {
        *(unsigned char *)(temp_v1 + 0x1d) = *(unsigned char *)(temp_v1 + 0x1d) + 1;
      }
      else {
        *(unsigned char *)(temp_v1 + 0x1d) = 0;
      }
      *(unsigned char *)(temp_v2 + 0xa4) = 1;
    }
  }
  if (*(char *)(temp_v27 + 0x33) != '\0') {
    return;
  }
  if ((*(char *)(temp_v2 + 0xb0) == '\0') && (*(char *)(g_lmapScene + 0x6c) != '\0')) {
    temp_v16 = *(float *)(temp_v2 + 0x18);
    FUN_00287b0c();
    if (temp_v16 < temp_v20) {
      temp_v16 = -temp_v16;
    }
    if ((int)temp_v16 >= 0x432a0001) {
      DAT_004474f0 = '\0';
    }
    else if ((int)temp_v16 >= 0x41a00001) {
      DAT_004474f0 = '\x01';
    }
  }
  else {
    DAT_004474f0 = '\0';
  }
  if (DAT_004474f0 == '\0') {
    DAT_004474f8 = temp_v20;
    FUN_0021b0f0();
    return;
  }
  DAT_004474fc = *(float *)(g_lmapScene + 0x50);
  temp_v15 = *(float *)(DAT_004474f4 + 0x18);
  FUN_00287b0c();
  temp_v22 = *(float *)(g_lmapScene + 0x1c);
  temp_v23 = *(float *)(g_lmapScene + 0x20);
  temp_v24 = *(float *)(g_lmapScene + 0x24);
  temp_v17 = 0.017453292f;
  temp_v16 = temp_v15;
  if (temp_v15 < temp_v20) {
    temp_v16 = -temp_v15;
  }
  temp_v14 = DAT_004474fc * 0.017453292f;
  FUN_0028250c();
  temp_v21 = 80.0f;
  temp_v22 = temp_v22 + temp_v14 * 80.0f;
  temp_v14 = DAT_004474fc * temp_v17;
  FUN_00282390();
  temp_v13 = 150.0f;
  temp_v24 = temp_v24 + temp_v14 * temp_v21;
  temp_v23 = temp_v23 + 150.0f;
  temp_v25 = *(unsigned int *)(DAT_004474f4 + 0x4c);
  temp_v26 = *(float *)(DAT_004474f4 + 0x50);
  uStack_4c = *(unsigned int *)(DAT_004474f4 + 0x54);
  temp_v1 = FUN_0025b4b0(&temp_v22,(unsigned int *)&temp_v25,0);
  temp_v22 = *(float *)(g_lmapScene + 0x1c);
  temp_v23 = *(float *)(g_lmapScene + 0x20);
  temp_v24 = *(float *)(g_lmapScene + 0x24);
  temp_v14 = DAT_004474fc * temp_v17;
  FUN_0028250c();
  temp_v21 = 300.0f;
  temp_v22 = temp_v22 + temp_v14 * 300.0f;
  temp_v17 = DAT_004474fc * temp_v17;
  FUN_00282390();
  temp_v24 = temp_v24 + temp_v17 * temp_v21;
  temp_v23 = temp_v23 + temp_v13;
  temp_v25 = *(unsigned int *)(g_lmapScene + 0x1c);
  uStack_4c = *(unsigned int *)(g_lmapScene + 0x24);
  temp_v26 = *(float *)(g_lmapScene + 0x20) + temp_v13;
  temp_v4 = FUN_0025b4b0(&temp_v22,(unsigned int *)&temp_v25,0);
  if (temp_v1 != -1) {
    temp_v17 = 6.0f;
    if (temp_v4 != -1) {
      if ((int)temp_v16 < 0x42700000) {
        temp_v14 = temp_v16 * 0.033333335f;
      }
      else if ((int)temp_v16 < 0x42f00000) {
        temp_v14 = temp_v16 * 0.05f;
      }
      else {
        temp_v14 = (120.0f - (temp_v16 - 120.0f) * temp_v19) * 0.05f;
      }
      if (((int)temp_v14 < 0x40c00001) && (temp_v17 = temp_v14, (int)temp_v14 < 0x3f800000)) {
        temp_v17 = temp_v18;
      }
      if (!((temp_v17 != temp_v17) || (DAT_004474f8 != DAT_004474f8))) {
        DAT_004474f8 = DAT_004474f8 + 0.3f;
        if (temp_v17 < DAT_004474f8) {
          DAT_004474f8 = temp_v17;
        }
      }
      else {
        DAT_004474f8 = DAT_004474f8 - 0.3f;
        if (DAT_004474f8 < temp_v17) {
          DAT_004474f8 = temp_v17;
        }
      }
    }
    else {
      if ((int)temp_v16 < 0x42700000) {
        temp_v14 = temp_v16 * 0.033333335f;
      }
      else if ((int)temp_v16 < 0x42f00000) {
        temp_v14 = temp_v16 * 0.05f;
      }
      else {
        temp_v14 = (120.0f - (temp_v16 - 120.0f) * temp_v19) * 0.05f;
      }
      if (((int)temp_v14 < 0x40c00001) && (temp_v17 = temp_v14, (int)temp_v14 < 0x3f800000)) {
        temp_v17 = temp_v18;
      }
      if (!((temp_v17 != temp_v17) || (DAT_004474f8 != DAT_004474f8))) {
        DAT_004474f8 = DAT_004474f8 + temp_v18;
        if (temp_v17 < DAT_004474f8) {
          DAT_004474f8 = temp_v17;
        }
      }
      else {
        DAT_004474f8 = DAT_004474f8 - 0.3f;
        if (DAT_004474f8 < temp_v17) {
          DAT_004474f8 = temp_v17;
        }
      }
    }
  }
  else {
    if ((int)temp_v16 < 0x42700000) {
      temp_v18 = temp_v16 * 0.033333335f;
    }
    else {
      temp_v18 = temp_v16;
      if ((int)temp_v16 >= 0x42f00000) {
        temp_v18 = 120.0f - (temp_v16 - 120.0f) * temp_v19;
      }
      temp_v18 = temp_v18 * 0.05f;
    }
    if ((int)temp_v18 >= 0x40a00001) {
      temp_v18 = 5.0f;
    }
    else if ((int)temp_v18 < 0x3dcccccd) {
      temp_v18 = 0.1f;
    }
    if (!((temp_v18 != temp_v18) || (DAT_004474f8 != DAT_004474f8))) {
      DAT_004474f8 = DAT_004474f8 + 0.15f;
      if (temp_v18 < DAT_004474f8) {
        DAT_004474f8 = temp_v18;
      }
    }
    else {
      DAT_004474f8 = DAT_004474f8 - 0.3f;
      if (DAT_004474f8 < temp_v18) {
        DAT_004474f8 = temp_v18;
      }
    }
  }
  if (DAT_004474f8 > temp_v16) {
    DAT_004474f0 = '\0';
    DAT_004474f8 = temp_v20;
    *(float *)(DAT_004474f4 + 0x18) = DAT_004474fc;
    temp_v20 = DAT_004474f8;
  }
  else {
    if (temp_v15 < temp_v20) {
      temp_v20 = *(float *)(DAT_004474f4 + 0x18) - DAT_004474f8;
    }
    else {
      temp_v20 = *(float *)(DAT_004474f4 + 0x18) + DAT_004474f8;
    }
    *(float *)(DAT_004474f4 + 0x18) = temp_v20;
    temp_v20 = DAT_004474f8;
  }
  DAT_004474f8 = temp_v20;
  FUN_0021b0f0();
  return;
}

} /* extern "C" */
