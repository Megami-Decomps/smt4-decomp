/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00352568` (_code @ 0x352568, 0x4a0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int gameFlagsGetBlock(void);
int FUN_0030250c(void);
int FUN_0033abb4(void);
int SBORROW4(int, int);
int VectorSignedToFloat(unsigned int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern unsigned int DAT_005806a4; /* 0x5806a4 */
extern signed char DAT_005f1614; /* 0x5f1614 */
extern unsigned int DAT_005f1618; /* 0x5f1618 */
extern signed char DAT_005f161d; /* 0x5f161d */
extern signed char DAT_005f1a5e; /* 0x5f1a5e */
extern signed char DAT_005f1bc4; /* 0x5f1bc4 */
extern int DAT_005f1bec; /* 0x5f1bec */
extern signed char DAT_005f1c48; /* 0x5f1c48 */
extern signed char DAT_005f1c70; /* 0x5f1c70 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Supplied declaration required: gameFlagsGetBlock. */
extern int FUN_00163fd4(unsigned int);
extern int padButtonIsPressed(unsigned int);
extern unsigned int FUN_0029202c(void);
/* Supplied declaration required: FUN_0030250c. */
extern int sub68OwnerCall1(void);
/* Supplied declaration required: FUN_0033abb4. */
extern int inputIsQuestMenuPressed(void);


void FUN_00352568(void)

{
/* irregular: irregular input(s): in_fpscr; 6 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4;
  unsigned char temp_v5;
  unsigned char temp_v6;
  unsigned char temp_v7;
  unsigned int in_fpscr;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  
  temp_v5 = 0;
  temp_v4 = 0;
  gameFlagsGetBlock();
  temp_v0 = DAT_005806a4;
  temp_v10 = 1.0f;
  temp_v12 = 0.0f;
  if (*(char *)(DAT_005806a4 + 0xa8) != '\0') {
    *(unsigned char *)(DAT_005806a4 + 0xb4) = 0;
    *(unsigned char *)(temp_v0 + 0xb5) = 0;
    *(unsigned short *)(temp_v0 + 0xb6) = 10;
    *(unsigned short *)(temp_v0 + 0xb8) = 0;
    *(unsigned int *)(temp_v0 + 0xbc) = 0;
    *(unsigned int *)(temp_v0 + 0xc0) = 0;
    *(unsigned int *)(temp_v0 + 0xc4) = 0x3f800000;
  }
  if (DAT_005f1bc4 != '\0') {
    return;
  }
  if (0 < *(short *)(temp_v0 + 0xb6)) {
    *(short *)(temp_v0 + 0xb6) = *(short *)(temp_v0 + 0xb6) - 1;
  }
  if (DAT_005f1bec != 1) {
    if (DAT_005f1614 == '\0') {
      temp_v3 = DAT_005f1618;
      if (DAT_005f1618 == 0) {
        temp_v3 = (unsigned int)*(unsigned char *)(temp_v0 + 0xb4);
      }
      if (DAT_005f1618 == 0 && temp_v3 == 0) {
        if (((*(char *)(temp_v0 + 0xb5) != '\0') && (temp_v1 = FUN_00163fd4(8), temp_v1 == 0)) &&
           (temp_v1 = FUN_00163fd4(7), temp_v1 == 0)) {
          *(unsigned char *)(DAT_005806a4 + 0xb5) = 0;
        }
        if (*(short *)(DAT_005806a4 + 0xb6) < 7) {
          temp_v1 = FUN_00163fd4(8);
          temp_v5 = temp_v1 != 0;
          temp_v1 = FUN_00163fd4(7);
          if (temp_v1 != 0) {
            temp_v4 = 1;
          }
        }
        temp_v6 = *(int *)(DAT_005806a4 + 0xac) == 0;
        temp_v0 = DAT_005806a4;
        if (temp_v6) {
          temp_v0 = (unsigned int)*(unsigned short *)(DAT_005806a4 + 0xb6);
        }
        if ((temp_v6 && temp_v0 == 0) &&
           ((temp_v1 = inputIsQuestMenuPressed(), temp_v1 != 0 ||
            (((temp_v1 = FUN_00163fd4(8), temp_v1 != 0 && (temp_v1 = FUN_00163fd4(7), temp_v1 != 0)) &&
             ((temp_v1 = padButtonIsPressed(8), temp_v1 == 0 &&
              ((temp_v1 = padButtonIsPressed(7), temp_v1 == 0 && (*(char *)(DAT_005806a4 + 0xb5) == '\0'))))))
            )))) {
          temp_v5 = 0;
          temp_v4 = 0;
        }
      }
    }
  }
  else {
    temp_v1 = FUN_00163fd4(8);
    temp_v5 = temp_v1 != 0;
    temp_v1 = FUN_00163fd4(7);
    temp_v4 = temp_v1 != 0;
  }
  if (((DAT_005f161d != '\0') && (DAT_005f1a5e != '\0')) && (temp_v1 = sub68OwnerCall1(), temp_v1 != 0)) {
    temp_v4 = 0;
    temp_v5 = temp_v4;
  }
  temp_v9 = 7.0f;
  temp_v11 = 3.0f;
  if (DAT_005f1c70 != '\0') {
    temp_v9 = 3.5f;
    temp_v11 = 1.5f;
    temp_v10 = 0.5f;
  }
  temp_v2 = FUN_0029202c();
  temp_v0 = DAT_005806a4;
  temp_v8 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v8 = temp_v8 * 0.01f;
  temp_v7 = SBORROW4((int)temp_v8,0x40000000);
  temp_v1 = (int)temp_v8 - 0x40000000;
  temp_v6 = temp_v8 == 2.0f;
  if ((int)temp_v8 >= 0x40000001) {
    temp_v8 = 2.0f;
  }
  else {
    temp_v7 = SBORROW4((int)temp_v8,0x3f800000);
    temp_v1 = (int)temp_v8 - 0x3f800000;
    temp_v6 = temp_v8 == 1.0f;
  }
  if (!temp_v6 && temp_v1 < 0 == temp_v7) {
    temp_v9 = temp_v9 * temp_v8;
    temp_v10 = temp_v10 * temp_v8;
    temp_v11 = temp_v11 * temp_v8;
  }
  if (*(char *)(DAT_005806a4 + 0xb4) != '\0') {
    temp_v9 = 12.0f;
    temp_v10 = *(float *)(DAT_005806a4 + 0x18);
    FUN_0033abb4();
    temp_v0 = DAT_005806a4;
    if (12.5f >= temp_v10) {
      *(unsigned int *)(DAT_005806a4 + 0x18) = *(unsigned int *)(DAT_005806a4 + 0xc0);
      *(unsigned char *)(temp_v0 + 0xb4) = 0;
      *(unsigned short *)(temp_v0 + 0xb6) = 10;
      *(unsigned char *)(temp_v0 + 0xb5) = 1;
    }
    else {
      if (temp_v12 <= *(float *)(DAT_005806a4 + 0xc4)) {
        temp_v9 = *(float *)(DAT_005806a4 + 0x18) + temp_v9;
      }
      else {
        temp_v9 = *(float *)(DAT_005806a4 + 0x18) - temp_v9;
      }
      *(float *)(DAT_005806a4 + 0x18) = temp_v9;
    }
    if (*(char *)(DAT_005806a4 + 0xb4) != '\0') {
      if (DAT_005f1c48 != '\0') {
        return;
      }
      FUN_0030250c();
      return;
    }
  }
  else if (temp_v5) {
    temp_v8 = *(float *)(DAT_005806a4 + 0x210);
    *(float *)(DAT_005806a4 + 0x214) = temp_v9;
    if (!((temp_v9 != temp_v9) || (temp_v8 != temp_v8))) {
      temp_v8 = temp_v8 + temp_v10;
      *(float *)(temp_v0 + 0x210) = temp_v8;
      if (temp_v9 <= temp_v8) {
        temp_v8 = temp_v9;
      }
    }
    else {
      temp_v8 = temp_v8 - temp_v10;
      *(float *)(temp_v0 + 0x210) = temp_v8;
      if (temp_v8 < temp_v9) {
        temp_v8 = temp_v9;
      }
    }
    *(float *)(temp_v0 + 0x210) = temp_v8;
    *(float *)(temp_v0 + 0x18) = *(float *)(temp_v0 + 0x18) + *(float *)(temp_v0 + 0x210);
  }
  else if (temp_v4) {
    temp_v8 = -temp_v9;
    temp_v9 = *(float *)(DAT_005806a4 + 0x210);
    *(float *)(DAT_005806a4 + 0x214) = temp_v8;
    if (!((temp_v8 != temp_v8) || (temp_v9 != temp_v9))) {
      temp_v9 = temp_v9 + temp_v10;
      *(float *)(temp_v0 + 0x210) = temp_v9;
      if (temp_v9 < temp_v8) {
        temp_v8 = temp_v9;
      }
    }
    else {
      temp_v9 = temp_v9 - temp_v10;
      *(float *)(temp_v0 + 0x210) = temp_v9;
      if (temp_v8 <= temp_v9) {
        temp_v8 = temp_v9;
      }
    }
    *(float *)(temp_v0 + 0x210) = temp_v8;
    *(float *)(temp_v0 + 0x18) = *(float *)(temp_v0 + 0x18) + *(float *)(temp_v0 + 0x210);
  }
  else {
    temp_v8 = *(float *)(DAT_005806a4 + 0x210);
    if (((int)temp_v8 >= 0x3dccccce) || ((unsigned int)temp_v8 >= 0xbdccccce)) {
      *(float *)(DAT_005806a4 + 0x214) = temp_v12;
      if (!((temp_v12 != temp_v12) || (temp_v8 != temp_v8))) {
        temp_v8 = temp_v8 + temp_v11;
        *(float *)(temp_v0 + 0x210) = temp_v8;
        if (temp_v12 <= temp_v8) {
          temp_v8 = temp_v12;
        }
      }
      else {
        temp_v8 = temp_v8 - temp_v11;
        *(float *)(temp_v0 + 0x210) = temp_v8;
        if (temp_v8 < temp_v12) {
          temp_v8 = temp_v12;
        }
      }
      *(float *)(temp_v0 + 0x210) = temp_v8;
      *(float *)(temp_v0 + 0x18) = *(float *)(temp_v0 + 0x18) + *(float *)(temp_v0 + 0x210);
    }
  }
  temp_v0 = DAT_005806a4;
  temp_v10 = *(float *)(DAT_005806a4 + 0x18);
  if (temp_v10 < temp_v12) {
    temp_v10 = temp_v10 + 360.0f;
    *(float *)(DAT_005806a4 + 0x18) = temp_v10;
  }
  if ((int)temp_v10 >= 0x43b40000) {
    *(float *)(temp_v0 + 0x18) = temp_v10 - 360.0f;
  }
  if (DAT_005f1c48 != '\0') {
    return;
  }
  FUN_0030250c();
  return;
}

} /* extern "C" */
