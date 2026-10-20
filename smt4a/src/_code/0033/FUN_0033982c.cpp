/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033982c` (_code @ 0x33982c, 0xb38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001bbf0c(void);
int FUN_001bc124(void);
int FUN_002b5cd4(void);
int FUN_002d86e8(...);
int FUN_0030250c(void);
int FUN_0033abb4(void);
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

extern signed char DAT_005806a0; /* 0x5806a0 */
extern unsigned int DAT_005806a4; /* 0x5806a4 */
extern float DAT_005806a8; /* 0x5806a8 */
extern float DAT_005806ac; /* 0x5806ac */
extern int DAT_00581288; /* 0x581288 */
extern signed char DAT_005f1614; /* 0x5f1614 */
extern unsigned int DAT_005f1618; /* 0x5f1618 */
extern signed char DAT_005f1bc4; /* 0x5f1bc4 */
extern int DAT_005f1bec; /* 0x5f1bec */
extern unsigned int DAT_005f1bfc; /* 0x5f1bfc */
extern signed char DAT_005f1c70; /* 0x5f1c70 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
extern int FUN_00162e8c(void);
extern int FUN_00163fd4(unsigned int);
extern int FUN_001656a0(unsigned int);
/* Supplied declaration required: FUN_001bbf0c. */
/* Supplied declaration required: FUN_001bc124. */
extern unsigned int FUN_0029202c(void);
/* Supplied declaration required: FUN_002b5cd4. */
/* Supplied declaration required: FUN_002d86e8. */
/* Supplied declaration required: FUN_0030250c. */
extern int FUN_003135a8(void);
/* Supplied declaration required: FUN_0033abb4. */
extern int FUN_0036d984(float *, unsigned int *, unsigned int);
extern int FUN_004d0554(void);


void FUN_0033982c(void)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr; 9 native warning(s); review required */
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
  temp_v1 = FUN_00162e8c();
  temp_v2 = DAT_005806a4;
  temp_v20 = 0.0f;
  temp_v18 = 1.0f;
  if (*(char *)(DAT_005806a4 + 0xa8) != '\0') {
    *(unsigned char *)(DAT_005806a4 + 0xb4) = 0;
    *(unsigned char *)(temp_v2 + 0xb5) = 0;
    *(unsigned short *)(temp_v2 + 0xb6) = 10;
    *(unsigned short *)(temp_v2 + 0xb8) = 0;
    *(unsigned int *)(temp_v2 + 0xbc) = 0;
    *(unsigned int *)(temp_v2 + 0xc0) = 0;
    *(unsigned int *)(temp_v2 + 0xc4) = 0x3f800000;
  }
  if (DAT_005f1bc4 != '\0') {
    return;
  }
  if (0 < *(short *)(temp_v2 + 0xb6)) {
    *(short *)(temp_v2 + 0xb6) = *(short *)(temp_v2 + 0xb6) - 1;
  }
  if (DAT_005f1bec != 1) {
    if (DAT_005f1614 == '\0') {
      temp_v6 = DAT_005f1618;
      if (DAT_005f1618 == 0) {
        temp_v6 = (unsigned int)*(unsigned char *)(temp_v2 + 0xb4);
      }
      if (DAT_005f1618 == 0 && temp_v6 == 0) {
        if (((*(char *)(temp_v2 + 0xb5) != '\0') && (temp_v4 = FUN_00163fd4(8), temp_v4 == 0)) &&
           (temp_v4 = FUN_00163fd4(7), temp_v4 == 0)) {
          *(unsigned char *)(DAT_005806a4 + 0xb5) = 0;
        }
        if (*(short *)(DAT_005806a4 + 0xb6) < 7) {
          temp_v4 = FUN_00163fd4(8);
          temp_v7 = temp_v4 != 0;
          temp_v4 = FUN_00163fd4(7);
          temp_v8 = temp_v4 != 0;
          temp_v4 = FUN_001656a0(4);
          temp_v9 = temp_v4 != 0;
          temp_v4 = FUN_001656a0(3);
          if (temp_v4 != 0) {
            temp_v0 = 1;
          }
        }
        temp_v10 = *(int *)(DAT_005806a4 + 0xac) == 0;
        temp_v2 = DAT_005806a4;
        if (temp_v10) {
          temp_v2 = (unsigned int)*(unsigned short *)(DAT_005806a4 + 0xb6);
        }
        if (((temp_v10 && temp_v2 == 0) && (temp_v4 = FUN_003135a8(), temp_v4 == 1)) &&
           ((temp_v4 = FUN_004d0554(), temp_v4 != 0 ||
            (((temp_v4 = FUN_00163fd4(8), temp_v4 != 0 && (temp_v4 = FUN_00163fd4(7), temp_v4 != 0)) &&
             ((temp_v4 = FUN_001656a0(8), temp_v4 == 0 &&
              ((temp_v4 = FUN_001656a0(7), temp_v4 == 0 && (*(char *)(DAT_005806a4 + 0xb5) == '\0'))))))
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
    temp_v4 = FUN_00163fd4(8);
    temp_v7 = temp_v4 != 0;
    temp_v4 = FUN_00163fd4(7);
    temp_v8 = temp_v4 != 0;
  }
  temp_v27 = &DAT_005f1bfc;
  temp_v15 = 7.0f;
  temp_v17 = 3.0f;
  temp_v16 = temp_v18;
  if (DAT_005f1c70 != '\0') {
    temp_v15 = 3.5f;
    temp_v17 = 1.5f;
    temp_v16 = 0.5f;
  }
  temp_v3 = FUN_0029202c();
  temp_v2 = DAT_005806a4;
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
  if (*(char *)(DAT_005806a4 + 0xb4) == '\0') {
    if (temp_v11) {
      *(unsigned char *)(DAT_005806a4 + 0xb4) = 1;
      temp_v13 = *(float *)(temp_v2 + 0x18);
      *(float *)(temp_v2 + 0xbc) = temp_v13;
      *(unsigned int *)(temp_v2 + 0xc0) = *(unsigned int *)(DAT_00581288 + 0x50);
      *(float *)(temp_v2 + 0x210) = temp_v20;
      *(float *)(temp_v2 + 0x214) = temp_v20;
      FUN_002b5cd4();
      temp_v2 = DAT_005806a4;
      temp_v14 = temp_v13;
      if (temp_v13 < temp_v20) {
        temp_v14 = -temp_v13;
      }
      if ((int)temp_v14 < 0x42c80000) {
        *(unsigned short *)(DAT_005806a4 + 0xb8) = 0;
        if (temp_v13 < temp_v20) {
          *(unsigned int *)(temp_v2 + 0xc4) = 0xbf800000;
        }
        else {
          *(float *)(temp_v2 + 0xc4) = temp_v18;
        }
      }
      else {
        *(unsigned short *)(DAT_005806a4 + 0xb8) = 1;
        if (temp_v13 < temp_v20) {
          *(unsigned int *)(temp_v2 + 0xc4) = 0xbf800000;
          temp_v14 = *(float *)(temp_v2 + 0xc0) + 45.0f;
        }
        else {
          *(float *)(temp_v2 + 0xc4) = temp_v18;
          temp_v14 = *(float *)(temp_v2 + 0xc0) - 45.0f;
        }
        *(float *)(temp_v2 + 0xbc) = temp_v14;
        *(float *)(temp_v2 + 0x18) = temp_v14;
        *(unsigned char *)(temp_v2 + 0xa8) = 1;
      }
      if (*(char *)(DAT_005806a4 + 0xb4) != '\0') goto LAB_00339bb4;
    }
    if ((!temp_v7) || (temp_v4 = FUN_003135a8(), temp_v2 = DAT_005806a4, temp_v4 != 1)) {
      if ((!temp_v8) || (temp_v4 = FUN_003135a8(), temp_v2 = DAT_005806a4, temp_v4 != 1)) {
        temp_v2 = DAT_005806a4;
        temp_v14 = *(float *)(DAT_005806a4 + 0x210);
        if (((int)temp_v14 >= 0x3dccccce) || ((unsigned int)temp_v14 >= 0xbdccccce)) {
          *(float *)(DAT_005806a4 + 0x214) = temp_v20;
          if (!((temp_v20 != temp_v20) || (temp_v14 != temp_v14))) {
            temp_v14 = temp_v14 + temp_v17;
            *(float *)(temp_v2 + 0x210) = temp_v14;
            if (temp_v20 <= temp_v14) {
              temp_v14 = temp_v20;
            }
          }
          else {
            temp_v14 = temp_v14 - temp_v17;
            *(float *)(temp_v2 + 0x210) = temp_v14;
            if (temp_v14 < temp_v20) {
              temp_v14 = temp_v20;
            }
          }
          *(float *)(temp_v2 + 0x210) = temp_v14;
          *(float *)(temp_v2 + 0x18) = *(float *)(temp_v2 + 0x18) + *(float *)(temp_v2 + 0x210);
        }
      }
      else {
        temp_v14 = -temp_v15;
        *(float *)(DAT_005806a4 + 0x214) = temp_v14;
        temp_v15 = *(float *)(temp_v2 + 0x210);
        if (!((temp_v14 != temp_v14) || (temp_v15 != temp_v15))) {
          temp_v15 = temp_v15 + temp_v16;
          *(float *)(temp_v2 + 0x210) = temp_v15;
          if (temp_v15 < temp_v14) {
            temp_v14 = temp_v15;
          }
        }
        else {
          temp_v15 = temp_v15 - temp_v16;
          *(float *)(temp_v2 + 0x210) = temp_v15;
          if (temp_v14 <= temp_v15) {
            temp_v14 = temp_v15;
          }
        }
        *(float *)(temp_v2 + 0x210) = temp_v14;
        *(float *)(temp_v2 + 0x18) = *(float *)(temp_v2 + 0x18) + *(float *)(temp_v2 + 0x210);
      }
    }
    else {
      *(float *)(DAT_005806a4 + 0x214) = temp_v15;
      temp_v14 = *(float *)(temp_v2 + 0x210);
      if (!((temp_v15 != temp_v15) || (temp_v14 != temp_v14))) {
        temp_v14 = temp_v14 + temp_v16;
        *(float *)(temp_v2 + 0x210) = temp_v14;
        if (temp_v15 <= temp_v14) {
          temp_v14 = temp_v15;
        }
      }
      else {
        temp_v14 = temp_v14 - temp_v16;
        *(float *)(temp_v2 + 0x210) = temp_v14;
        if (temp_v14 < temp_v15) {
          temp_v14 = temp_v15;
        }
      }
      *(float *)(temp_v2 + 0x210) = temp_v14;
      *(float *)(temp_v2 + 0x18) = *(float *)(temp_v2 + 0x18) + *(float *)(temp_v2 + 0x210);
    }
  }
  else {
LAB_00339bb4:
    temp_v15 = 12.0f;
    temp_v16 = *(float *)(DAT_005806a4 + 0x18);
    FUN_0033abb4();
    temp_v2 = DAT_005806a4;
    if (12.5f >= temp_v16) {
      *(unsigned int *)(DAT_005806a4 + 0x18) = *(unsigned int *)(DAT_005806a4 + 0xc0);
      *(unsigned char *)(temp_v2 + 0xb4) = 0;
      *(unsigned short *)(temp_v2 + 0xb6) = 10;
      *(unsigned char *)(temp_v2 + 0xb5) = 1;
    }
    else {
      if (temp_v20 <= *(float *)(DAT_005806a4 + 0xc4)) {
        temp_v15 = *(float *)(DAT_005806a4 + 0x18) + temp_v15;
      }
      else {
        temp_v15 = *(float *)(DAT_005806a4 + 0x18) - temp_v15;
      }
      *(float *)(DAT_005806a4 + 0x18) = temp_v15;
    }
  }
  temp_v2 = DAT_005806a4;
  if (*(char *)(DAT_005806a4 + 0xb4) == '\0') {
    temp_v16 = *(float *)(DAT_005806a4 + 0x18);
    if (temp_v16 < temp_v20) {
      temp_v16 = temp_v16 + 360.0f;
      *(float *)(DAT_005806a4 + 0x18) = temp_v16;
    }
    if ((int)temp_v16 >= 0x43b40000) {
      *(float *)(temp_v2 + 0x18) = temp_v16 - 360.0f;
    }
  }
  temp_v6 = (unsigned int)*(unsigned char *)(temp_v2 + 0x305);
  temp_v11 = temp_v6 == 0;
  if (temp_v11) {
    temp_v6 = *(unsigned int *)(temp_v2 + 0xb0);
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
      *(unsigned char *)(temp_v2 + 0xa8) = 1;
      temp_v5 = *(char *)(temp_v1 + 0x1d);
      if (temp_v5 != '\0') {
        if (temp_v5 != '\x01') {
          if (temp_v5 == '\x02') {
            FUN_002d86e8(0x339e8c);
          }
        }
        else {
          temp_v3 = 0x33a1c8;
          FUN_002d86e8(temp_v3);
        }
      }
      else {
        temp_v3 = 0x33a19c;
        FUN_002d86e8(temp_v3);
      }
    }
    else if (temp_v0) {
      if (*(unsigned char *)(temp_v1 + 0x1d) < 2) {
        *(unsigned char *)(temp_v1 + 0x1d) = *(unsigned char *)(temp_v1 + 0x1d) + 1;
      }
      else {
        *(unsigned char *)(temp_v1 + 0x1d) = 0;
      }
      *(unsigned char *)(temp_v2 + 0xa8) = 1;
      temp_v5 = *(char *)(temp_v1 + 0x1d);
      if (temp_v5 != '\0') {
        if (temp_v5 != '\x01') {
          if (temp_v5 == '\x02') {
            temp_v3 = 0x339e8c;
            FUN_002d86e8(temp_v3);
          }
        }
        else {
          temp_v3 = 0x33a1c8;
          FUN_002d86e8(temp_v3);
        }
      }
      else {
        temp_v3 = 0x33a19c;
        FUN_002d86e8(temp_v3);
      }
    }
  }
  if (*(char *)(temp_v27 + 0x13) != '\0') {
    return;
  }
  if ((*(char *)(DAT_005806a4 + 0xb4) == '\0') && (*(char *)(DAT_00581288 + 0x6c) != '\0')) {
    temp_v16 = *(float *)(DAT_005806a4 + 0x18);
    FUN_002b5cd4();
    if (temp_v16 < temp_v20) {
      temp_v16 = -temp_v16;
    }
    if ((int)temp_v16 >= 0x432a0001) {
      DAT_005806a0 = '\0';
    }
    else if ((int)temp_v16 >= 0x41a00001) {
      DAT_005806a0 = '\x01';
    }
  }
  else {
    DAT_005806a0 = '\0';
  }
  if (DAT_005806a0 == '\0') {
    DAT_005806a8 = temp_v20;
    FUN_0030250c();
    return;
  }
  DAT_005806ac = *(float *)(DAT_00581288 + 0x50);
  temp_v15 = *(float *)(DAT_005806a4 + 0x18);
  FUN_002b5cd4();
  temp_v22 = *(float *)(DAT_00581288 + 0x1c);
  temp_v23 = *(float *)(DAT_00581288 + 0x20);
  temp_v24 = *(float *)(DAT_00581288 + 0x24);
  temp_v17 = 0.017453292f;
  temp_v16 = temp_v15;
  if (temp_v15 < temp_v20) {
    temp_v16 = -temp_v15;
  }
  temp_v14 = DAT_005806ac * 0.017453292f;
  FUN_001bc124();
  temp_v21 = 80.0f;
  temp_v22 = temp_v22 + temp_v14 * 80.0f;
  temp_v14 = DAT_005806ac * temp_v17;
  FUN_001bbf0c();
  temp_v13 = 150.0f;
  temp_v24 = temp_v24 + temp_v14 * temp_v21;
  temp_v23 = temp_v23 + 150.0f;
  temp_v25 = *(unsigned int *)(DAT_005806a4 + 0x50);
  temp_v26 = *(float *)(DAT_005806a4 + 0x54);
  uStack_4c = *(unsigned int *)(DAT_005806a4 + 0x58);
  temp_v1 = FUN_0036d984(&temp_v22,(unsigned int *)&temp_v25,0);
  temp_v22 = *(float *)(DAT_00581288 + 0x1c);
  temp_v23 = *(float *)(DAT_00581288 + 0x20);
  temp_v24 = *(float *)(DAT_00581288 + 0x24);
  temp_v14 = DAT_005806ac * temp_v17;
  FUN_001bc124();
  temp_v21 = 300.0f;
  temp_v22 = temp_v22 + temp_v14 * 300.0f;
  temp_v17 = DAT_005806ac * temp_v17;
  FUN_001bbf0c();
  temp_v24 = temp_v24 + temp_v17 * temp_v21;
  temp_v23 = temp_v23 + temp_v13;
  temp_v25 = *(unsigned int *)(DAT_00581288 + 0x1c);
  uStack_4c = *(unsigned int *)(DAT_00581288 + 0x24);
  temp_v26 = *(float *)(DAT_00581288 + 0x20) + temp_v13;
  temp_v4 = FUN_0036d984(&temp_v22,(unsigned int *)&temp_v25,0);
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
      if (!((temp_v17 != temp_v17) || (DAT_005806a8 != DAT_005806a8))) {
        DAT_005806a8 = DAT_005806a8 + 0.3f;
        if (temp_v17 < DAT_005806a8) {
          DAT_005806a8 = temp_v17;
        }
      }
      else {
        DAT_005806a8 = DAT_005806a8 - 0.3f;
        if (DAT_005806a8 < temp_v17) {
          DAT_005806a8 = temp_v17;
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
      if (!((temp_v17 != temp_v17) || (DAT_005806a8 != DAT_005806a8))) {
        DAT_005806a8 = DAT_005806a8 + temp_v18;
        if (temp_v17 < DAT_005806a8) {
          DAT_005806a8 = temp_v17;
        }
      }
      else {
        DAT_005806a8 = DAT_005806a8 - 0.3f;
        if (DAT_005806a8 < temp_v17) {
          DAT_005806a8 = temp_v17;
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
    if (!((temp_v18 != temp_v18) || (DAT_005806a8 != DAT_005806a8))) {
      DAT_005806a8 = DAT_005806a8 + 0.15f;
      if (temp_v18 < DAT_005806a8) {
        DAT_005806a8 = temp_v18;
      }
    }
    else {
      DAT_005806a8 = DAT_005806a8 - 0.3f;
      if (DAT_005806a8 < temp_v18) {
        DAT_005806a8 = temp_v18;
      }
    }
  }
  if (DAT_005806a8 > temp_v16) {
    DAT_005806a0 = '\0';
    DAT_005806a8 = temp_v20;
    *(float *)(DAT_005806a4 + 0x18) = DAT_005806ac;
    temp_v20 = DAT_005806a8;
  }
  else {
    if (temp_v15 < temp_v20) {
      temp_v20 = *(float *)(DAT_005806a4 + 0x18) - DAT_005806a8;
    }
    else {
      temp_v20 = *(float *)(DAT_005806a4 + 0x18) + DAT_005806a8;
    }
    *(float *)(DAT_005806a4 + 0x18) = temp_v20;
    temp_v20 = DAT_005806a8;
  }
  DAT_005806a8 = temp_v20;
  FUN_0030250c();
  return;
}

} /* extern "C" */
