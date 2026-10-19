/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029212c` (_code @ 0x29212c, 0x6d0 bytes) from smt4_v1.2.0.cxi.
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

extern unsigned char LAB_00292624; /* 0x292624 */
extern unsigned char LAB_0029263c; /* 0x29263c */
extern unsigned char LAB_0029264c; /* 0x29264c */
extern unsigned char LAB_00292650; /* 0x292650 */
extern unsigned char LAB_00292654; /* 0x292654 */
extern unsigned char LAB_00292660; /* 0x292660 */
extern unsigned char LAB_00292668; /* 0x292668 */
extern unsigned char LAB_00292678; /* 0x292678 */
extern unsigned char LAB_00292684; /* 0x292684 */
extern unsigned char LAB_00292690; /* 0x292690 */
extern unsigned char LAB_0029269c; /* 0x29269c */
extern unsigned char LAB_002926a8; /* 0x2926a8 */
extern unsigned char LAB_002926b0; /* 0x2926b0 */
extern unsigned char LAB_002926b8; /* 0x2926b8 */
extern unsigned char LAB_002926c0; /* 0x2926c0 */
extern unsigned char LAB_002926c4; /* 0x2926c4 */
extern unsigned char LAB_002927fc; /* 0x2927fc */
extern unsigned char LAB_0029280c; /* 0x29280c */
extern unsigned char LAB_0029281c; /* 0x29281c */
extern unsigned char LAB_00292828; /* 0x292828 */
extern unsigned char LAB_00292838; /* 0x292838 */
extern int DAT_0043da2c; /* 0x43da2c */

/* Supplied declaration required: FUN_0024bc98. */
/* Supplied declaration required: FUN_0024bda8. */
/* Supplied declaration required: FUN_002907c4. */
/* Supplied declaration required: FUN_00295660. */
extern int FUN_00295cec(void);
/* Supplied declaration required: FUN_00296ae8. */
/* Supplied declaration required: FUN_0029ede8. */
/* Supplied declaration required: FUN_002ae164. */
extern unsigned int FUN_002ae3c4(int);
/* Supplied declaration required: FUN_002b45e8. */
/* Supplied declaration required: FUN_002b4670. */
extern unsigned int FUN_002b8dc0(int);
extern unsigned int FUN_002bce00(void);
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: FUN_002c4938. */
extern unsigned int FUN_00394fd0(void);


void FUN_0029212c(int param_1)

{
/* irregular: 11 native warning(s); review required */
  unsigned char temp_v0;
  char temp_v1;
  char temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
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
  temp_v17 = FUN_00394fd0();
  temp_v5 = temp_v19;
  temp_v4 = FUN_002ae3c4(temp_v19);
  switch(temp_v4) {
  default:
    temp_v12 = 3;
    uStack_124 = temp_v17;
    iStack_120 = temp_v19;
    FUN_00296ae8(*(unsigned int *)(temp_v16 + 0x558),3,0xffffffff,0);
    return;
  case 1:
    temp_v8 = temp_v5;
    FUN_002b4670();
    if (*(short *)(temp_v8 + 0x76) != 0) {
      temp_v5 = FUN_00295cec();
      FUN_0029ede8(0x24,temp_v5,0xffffffff,0);
      temp_v5 = (unsigned int)*(unsigned short *)(temp_v8 + 0x76) + temp_v5;
      if (temp_v5 >= 10000) {
        temp_v5 = 9999;
      }
      FUN_0029ede8(0x25,temp_v5,0xffffffff,0);
    }
    else {
      temp_v6 = (unsigned int)*(unsigned short *)(temp_v8 + 0x62);
      if (temp_v6 != 0) {
        FUN_002ae164();
        FUN_0024bc98(&temp_v12,(*(unsigned int *)(temp_v6 + 0x28) & 0x1ff) >> 5);
      }
      else if ((*(unsigned char *)(temp_v8 + 0x6a) & 0x80) != 0) {
        FUN_002be624(&temp_v12,&LAB_00292624);
      }
      else {
        FUN_002be624(&temp_v12,&LAB_0029263c);
      }
      FUN_00295660(0x24,&temp_v12);
      temp_v4 = FUN_002b8dc0(temp_v5);
      FUN_0029ede8(0x25,temp_v4,0xffffffff,0);
    }
    temp_v12 = 3;
    uStack_124 = temp_v17;
    iStack_120 = temp_v19;
    FUN_00296ae8(*(unsigned int *)(temp_v16 + 0x558),3,0xffffffff,0);
    return;
  case 2:
  case 3:
  case 8:
    FUN_002b45e8();
    FUN_0029ede8(0x24,*(unsigned int *)(temp_v5 + 0x54) & 0x3ff,0xffffffff,0);
    temp_v0 = *(unsigned char *)(temp_v5 + 0x58);
    if ((temp_v0 & 0xf) == temp_v0 >> 4) {
      FUN_0029ede8(0x25,temp_v0 & 0xf,0xffffffff,0);
    }
    else {
      FUN_002907c4(temp_v13,temp_v0 & 0xf);
      FUN_002907c4(temp_v14,*(unsigned char *)(temp_v5 + 0x58) >> 4);
      FUN_002be624(&temp_v12,&LAB_0029264c,temp_v13,temp_v14);
      FUN_00295660(0x25,&temp_v12);
    }
    FUN_0024bda8(&temp_v12,*(unsigned int *)(temp_v5 + 0x54) >> 0x14);
    FUN_00295660(0x26,&temp_v12);
    FUN_0024bc98(&temp_v12,*(unsigned char *)(temp_v5 + 0x59));
    FUN_00295660(0x27,&temp_v12);
    if (*(char *)(temp_v5 + 0x5b) == '\0') {
      FUN_002be624(&temp_v12,&LAB_00292654);
    }
    if (*(char *)(temp_v5 + 0x5b) == '\x01') {
      FUN_002be624(&temp_v12,&LAB_00292660);
    }
    if (*(char *)(temp_v5 + 0x5b) == '\x05') {
      FUN_002be624(&temp_v12,&LAB_00292668);
    }
    if (*(char *)(temp_v5 + 0x5b) == '\x06') {
      FUN_002be624(&temp_v12,&LAB_00292678);
    }
    if (*(char *)(temp_v5 + 0x5b) == '\a') {
      FUN_002be624(&temp_v12,&LAB_00292684);
    }
    if (*(char *)(temp_v5 + 0x5b) == '\b') {
      FUN_002be624(&temp_v12,&LAB_00292690);
    }
    if (*(char *)(temp_v5 + 0x5b) == '\t') {
      FUN_002be624(&temp_v12,&LAB_0029269c);
    }
    temp_v4 = 0x28;
    break;
  case 4:
  case 5:
  case 6:
  case 7:
    FUN_002b45e8();
    temp_v8 = 0;
    do {
      temp_v10 = (int)*(char *)(temp_v5 + temp_v8 + 0x61);
      temp_v11 = temp_v10;
      if (temp_v10 < 0) {
        temp_v11 = -temp_v10;
      }
      FUN_002907c4(temp_v18,temp_v11);
      if (temp_v10 != 0) {
        if (temp_v10 >= 1) {
          FUN_002be624(&temp_v12,&LAB_002926a8);
        }
        else {
          FUN_002be624(&temp_v12,&LAB_002926b8);
        }
      }
      else {
        FUN_002be624(&temp_v12,&LAB_002926b0);
      }
      FUN_00295660(temp_v8 + 0x24,&temp_v12);
      temp_v8 = temp_v8 + 1;
    } while (temp_v8 < 5);
    FUN_002c4938(acStack_c8,0x5c);
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
          FUN_002be624(temp_v9,&LAB_002926c0);
          temp_v8 = temp_v8 + temp_v9;
        }
        temp_v9 = 0;
        if ('\0' < temp_v15[temp_v11]) {
          temp_v3 = temp_v11 * 0x12 - 200;
          do {
            temp_v7 = FUN_0024bda8((int)&temp_v12 + temp_v8,(int)acStack_c8[temp_v9 + temp_v3 + 200]);
            temp_v8 = temp_v8 + temp_v7;
            if ((temp_v9 < 0x11) && ('\0' < acStack_c8[temp_v9 + temp_v3 + 0xc9])) {
              temp_v7 = (int)&temp_v12 + temp_v8;
              FUN_002be624(temp_v7,&LAB_002926c4);
              temp_v8 = temp_v8 + temp_v7;
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
                  FUN_002be624(temp_v9,&LAB_00292838);
                  temp_v8 = temp_v8 + temp_v9;
                }
              }
              else {
                temp_v9 = (int)&temp_v12 + temp_v8;
                FUN_002be624(temp_v9,&LAB_00292828);
                temp_v8 = temp_v8 + temp_v9;
              }
            }
            else {
              temp_v9 = (int)&temp_v12 + temp_v8;
              FUN_002be624(temp_v9,&LAB_0029281c);
              temp_v8 = temp_v8 + temp_v9;
            }
          }
          else {
            temp_v9 = (int)&temp_v12 + temp_v8;
            FUN_002be624(temp_v9,&LAB_0029280c);
            temp_v8 = temp_v8 + temp_v9;
          }
        }
        else {
          temp_v9 = (int)&temp_v12 + temp_v8;
          FUN_002be624(temp_v9,&LAB_002927fc);
          temp_v8 = temp_v8 + temp_v9;
        }
        temp_v10 = temp_v10 + 1;
      }
      temp_v11 = temp_v11 + 1;
    } while (temp_v11 < 5);
    FUN_00295660(0x29,&temp_v12);
    if (*(short *)(temp_v5 + 0x6a) != 0) {
      temp_v4 = FUN_002bce00();
      FUN_002be624(&temp_v12,&LAB_00292650,temp_v4);
    }
    else {
      FUN_002be624(&temp_v12,&LAB_00292654);
    }
    temp_v4 = 0x2a;
  }
  FUN_00295660(temp_v4,&temp_v12);
  temp_v12 = 3;
  uStack_124 = temp_v17;
  iStack_120 = temp_v19;
  FUN_00296ae8(*(unsigned int *)(temp_v16 + 0x558),3,0xffffffff,0);
  return;
}
