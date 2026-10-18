/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002923d0` (_code @ 0x2923d0, 0x6d0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp128; /* 0x128: local_128 */
} param_1_stack;

extern unsigned char LAB_002928c8; /* 0x2928c8 */
extern unsigned char LAB_002928e0; /* 0x2928e0 */
extern unsigned char LAB_002928f0; /* 0x2928f0 */
extern unsigned char LAB_002928f4; /* 0x2928f4 */
extern unsigned char LAB_002928f8; /* 0x2928f8 */
extern unsigned char LAB_00292904; /* 0x292904 */
extern unsigned char LAB_0029290c; /* 0x29290c */
extern unsigned char LAB_0029291c; /* 0x29291c */
extern unsigned char LAB_00292928; /* 0x292928 */
extern unsigned char LAB_00292934; /* 0x292934 */
extern unsigned char LAB_00292940; /* 0x292940 */
extern unsigned char LAB_0029294c; /* 0x29294c */
extern unsigned char LAB_00292954; /* 0x292954 */
extern unsigned char LAB_0029295c; /* 0x29295c */
extern unsigned char LAB_00292964; /* 0x292964 */
extern unsigned char LAB_00292968; /* 0x292968 */
extern unsigned char LAB_00292aa0; /* 0x292aa0 */
extern unsigned char LAB_00292ab0; /* 0x292ab0 */
extern unsigned char LAB_00292ac0; /* 0x292ac0 */
extern unsigned char LAB_00292acc; /* 0x292acc */
extern unsigned char LAB_00292adc; /* 0x292adc */
extern int DAT_0043da2c; /* 0x43da2c */

/* Supplied declaration required: FUN_0024beac. */
/* Supplied declaration required: FUN_0024bfbc. */
/* Supplied declaration required: FUN_00290a68. */
/* Supplied declaration required: FUN_00295904. */
extern int FUN_00295f90(void);
/* Supplied declaration required: FUN_00296d8c. */
/* Supplied declaration required: FUN_0029f088. */
/* Supplied declaration required: FUN_002ae3f0. */
extern unsigned int FUN_002ae650(int);
extern int FUN_002b47cc(int);
/* Supplied declaration required: FUN_002b4854. */
extern unsigned int FUN_002b9100(int);
/* Supplied declaration required: FUN_002bcff0. */
/* Supplied declaration required: FUN_002be7fc. */
/* Supplied declaration required: FUN_002c4b30. */
extern unsigned int FUN_003951ec(void);


void FUN_002923d0(int param_1)

{
/* irregular: 11 native warning(s); review required */
  unsigned char temp_v0;
  char temp_v1;
  char temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  int temp_v12;
  unsigned int uStack_124;
  int iStack_120;
  char acStack_c8 [8];
  unsigned char temp_v13 [8];
  unsigned char temp_v14 [2];
  char acStack_b6 [18];
  char acStack_a4 [18];
  char acStack_92 [18];
  char acStack_80 [28];
  char temp_v15 [24];
  int temp_v16;
  unsigned int temp_v17;
  unsigned char temp_v18 [16];
  int temp_v19;
  
  temp_v5 = DAT_0043da2c;
  temp_v16 = DAT_0043da2c;
  if (param_1 == 0) {
    *(unsigned char *)(DAT_0043da2c + 0x4cb) = 0;
    return;
  }
  *(unsigned char *)(DAT_0043da2c + 0x55c) = 1;
  *(unsigned char *)(temp_v5 + 0x4cb) = 1;
  temp_v19 = param_1;
  temp_v17 = FUN_003951ec();
  temp_v5 = temp_v19;
  temp_v4 = FUN_002ae650(temp_v19);
  switch(temp_v4) {
  default:
    temp_v12 = 3;
    uStack_124 = temp_v17;
    iStack_120 = temp_v19;
    FUN_00296d8c(*(unsigned int *)(temp_v16 + 0x558),3,0xffffffff,0);
    return;
  case 1:
    temp_v8 = temp_v5;
    FUN_002b4854();
    if (*(short *)(temp_v8 + 0x76) != 0) {
      temp_v5 = FUN_00295f90();
      FUN_0029f088(0x24,temp_v5,0xffffffff,0);
      temp_v5 = (unsigned int)*(unsigned short *)(temp_v8 + 0x76) + temp_v5;
      if (temp_v5 >= 10000) {
        temp_v5 = 9999;
      }
      FUN_0029f088(0x25,temp_v5,0xffffffff,0);
    }
    else {
      temp_v7 = (unsigned int)*(unsigned short *)(temp_v8 + 0x62);
      if (temp_v7 != 0) {
        FUN_002ae3f0();
        FUN_0024beac(&temp_v12,(*(unsigned int *)(temp_v7 + 0x28) & 0x1ff) >> 5);
      }
      else if ((*(unsigned char *)(temp_v8 + 0x6a) & 0x80) != 0) {
        FUN_002be7fc(&temp_v12,&LAB_002928c8);
      }
      else {
        FUN_002be7fc(&temp_v12,&LAB_002928e0);
      }
      FUN_00295904(0x24,&temp_v12);
      temp_v4 = FUN_002b9100(temp_v5);
      FUN_0029f088(0x25,temp_v4,0xffffffff,0);
    }
    temp_v12 = 3;
    uStack_124 = temp_v17;
    iStack_120 = temp_v19;
    FUN_00296d8c(*(unsigned int *)(temp_v16 + 0x558),3,0xffffffff,0);
    return;
  case 2:
  case 3:
  case 8:
    temp_v5 = FUN_002b47cc(temp_v5);
    FUN_0029f088(0x24,*(unsigned int *)(temp_v5 + 0x54) & 0x3ff,0xffffffff,0);
    temp_v0 = *(unsigned char *)(temp_v5 + 0x58);
    if ((temp_v0 & 0xf) == temp_v0 >> 4) {
      FUN_0029f088(0x25,temp_v0 & 0xf,0xffffffff,0);
    }
    else {
      FUN_00290a68(temp_v13,temp_v0 & 0xf);
      FUN_00290a68(temp_v14,*(unsigned char *)(temp_v5 + 0x58) >> 4);
      FUN_002be7fc(&temp_v12,&LAB_002928f0,temp_v13,temp_v14);
      FUN_00295904(0x25,&temp_v12);
    }
    FUN_0024bfbc(&temp_v12,*(unsigned int *)(temp_v5 + 0x54) >> 0x14);
    FUN_00295904(0x26,&temp_v12);
    FUN_0024beac(&temp_v12,*(unsigned char *)(temp_v5 + 0x59));
    FUN_00295904(0x27,&temp_v12);
    if (*(char *)(temp_v5 + 0x5b) == '\0') {
      FUN_002be7fc(&temp_v12,&LAB_002928f8);
    }
    if (*(char *)(temp_v5 + 0x5b) == '\x01') {
      FUN_002be7fc(&temp_v12,&LAB_00292904);
    }
    if (*(char *)(temp_v5 + 0x5b) == '\x05') {
      FUN_002be7fc(&temp_v12,&LAB_0029290c);
    }
    if (*(char *)(temp_v5 + 0x5b) == '\x06') {
      FUN_002be7fc(&temp_v12,&LAB_0029291c);
    }
    if (*(char *)(temp_v5 + 0x5b) == '\a') {
      FUN_002be7fc(&temp_v12,&LAB_00292928);
    }
    if (*(char *)(temp_v5 + 0x5b) == '\b') {
      FUN_002be7fc(&temp_v12,&LAB_00292934);
    }
    if (*(char *)(temp_v5 + 0x5b) == '\t') {
      FUN_002be7fc(&temp_v12,&LAB_00292940);
    }
    temp_v4 = 0x28;
    break;
  case 4:
  case 5:
  case 6:
  case 7:
    temp_v5 = FUN_002b47cc(temp_v5);
    temp_v8 = 0;
    do {
      temp_v10 = (int)*(char *)(temp_v5 + temp_v8 + 0x61);
      temp_v11 = temp_v10;
      if (temp_v10 < 0) {
        temp_v11 = -temp_v10;
      }
      FUN_00290a68(temp_v18,temp_v11);
      if (temp_v10 != 0) {
        if (temp_v10 >= 1) {
          FUN_002be7fc(&temp_v12,&LAB_0029294c);
        }
        else {
          FUN_002be7fc(&temp_v12,&LAB_0029295c);
        }
      }
      else {
        FUN_002be7fc(&temp_v12,&LAB_00292954);
      }
      FUN_00295904(temp_v8 + 0x24,&temp_v12);
      temp_v8 = temp_v8 + 1;
    } while (temp_v8 < 5);
    FUN_002c4b30(acStack_c8,0x5c);
    temp_v8 = 0;
    temp_v15[0] = '\0';
    temp_v15[1] = '\0';
    temp_v15[2] = '\0';
    temp_v15[3] = '\0';
    temp_v15[4] = '\0';
    temp_v15[5] = '\0';
    temp_v15[6] = '\0';
    temp_v15[7] = '\0';
    do {
      temp_v11 = temp_v5 + temp_v8 * 2;
      temp_v1 = (char)temp_v8;
      if (*(short *)(temp_v11 + 0x74) >> 10 == 4) {
        temp_v2 = temp_v15[0] + '\x01';
        acStack_c8[temp_v15[0]] = temp_v1;
        temp_v15[0] = temp_v2;
      }
      if (*(short *)(temp_v11 + 0x74) >> 10 == 3) {
        temp_v2 = temp_v15[1] + '\x01';
        acStack_b6[temp_v15[1]] = temp_v1;
        temp_v15[1] = temp_v2;
      }
      if (*(short *)(temp_v11 + 0x74) >> 10 == 1) {
        temp_v2 = temp_v15[2] + '\x01';
        acStack_a4[temp_v15[2]] = temp_v1;
        temp_v15[2] = temp_v2;
      }
      if (*(short *)(temp_v11 + 0x74) >> 10 == 5) {
        temp_v2 = temp_v15[3] + '\x01';
        acStack_92[temp_v15[3]] = temp_v1;
        temp_v15[3] = temp_v2;
      }
      if (*(short *)(temp_v11 + 0x74) >> 10 == 2) {
        temp_v2 = temp_v15[4] + '\x01';
        acStack_80[temp_v15[4]] = temp_v1;
        temp_v15[4] = temp_v2;
      }
      temp_v8 = temp_v8 + 1;
    } while (temp_v8 < 0x12);
    temp_v10 = 0;
    temp_v8 = 0;
    temp_v11 = 0;
    do {
      if ('\0' < temp_v15[temp_v11]) {
        if (0 < temp_v10) {
          temp_v9 = (int)&temp_v12 + temp_v8;
          FUN_002be7fc(temp_v9,&LAB_00292964);
          temp_v8 = temp_v8 + temp_v9;
        }
        temp_v9 = 0;
        if ('\0' < temp_v15[temp_v11]) {
          temp_v3 = temp_v11 * 0x12 - 200;
          do {
            temp_v6 = FUN_0024bfbc((int)&temp_v12 + temp_v8,(int)acStack_c8[temp_v9 + temp_v3 + 200]);
            temp_v8 = temp_v8 + temp_v6;
            if ((temp_v9 < 0x11) && ('\0' < acStack_c8[temp_v9 + temp_v3 + 0xc9])) {
              temp_v6 = (int)&temp_v12 + temp_v8;
              FUN_002be7fc(temp_v6,&LAB_00292968);
              temp_v8 = temp_v8 + temp_v6;
            }
            temp_v9 = temp_v9 + 1;
          } while (temp_v9 < temp_v15[temp_v11]);
        }
        if (temp_v11 != 0) {
          if (temp_v11 != 1) {
            if (temp_v11 != 2) {
              if (temp_v11 != 3) {
                if (temp_v11 == 4) {
                  temp_v9 = (int)&temp_v12 + temp_v8;
                  FUN_002be7fc(temp_v9,&LAB_00292adc);
                  temp_v8 = temp_v8 + temp_v9;
                }
              }
              else {
                temp_v9 = (int)&temp_v12 + temp_v8;
                FUN_002be7fc(temp_v9,&LAB_00292acc);
                temp_v8 = temp_v8 + temp_v9;
              }
            }
            else {
              temp_v9 = (int)&temp_v12 + temp_v8;
              FUN_002be7fc(temp_v9,&LAB_00292ac0);
              temp_v8 = temp_v8 + temp_v9;
            }
          }
          else {
            temp_v9 = (int)&temp_v12 + temp_v8;
            FUN_002be7fc(temp_v9,&LAB_00292ab0);
            temp_v8 = temp_v8 + temp_v9;
          }
        }
        else {
          temp_v9 = (int)&temp_v12 + temp_v8;
          FUN_002be7fc(temp_v9,&LAB_00292aa0);
          temp_v8 = temp_v8 + temp_v9;
        }
        temp_v10 = temp_v10 + 1;
      }
      temp_v11 = temp_v11 + 1;
    } while (temp_v11 < 5);
    FUN_00295904(0x29,&temp_v12);
    temp_v7 = (unsigned int)*(unsigned short *)(temp_v5 + 0x6a);
    if (temp_v7 != 0) {
      FUN_002bcff0();
      FUN_002be7fc(&temp_v12,&LAB_002928f4,temp_v7);
    }
    else {
      FUN_002be7fc(&temp_v12,&LAB_002928f8);
    }
    temp_v4 = 0x2a;
  }
  FUN_00295904(temp_v4,&temp_v12);
  temp_v12 = 3;
  uStack_124 = temp_v17;
  iStack_120 = temp_v19;
  FUN_00296d8c(*(unsigned int *)(temp_v16 + 0x558),3,0xffffffff,0);
  return;
}
