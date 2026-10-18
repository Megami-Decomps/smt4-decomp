/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00231dec` (_code @ 0x231dec, 0x768 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
} param_1_stack;

extern unsigned char LAB_00232470; /* 0x232470 */
extern int DAT_0044cdd8; /* 0x44cdd8 */
extern unsigned int DAT_0044ea00; /* 0x44ea00 */
extern int DAT_0049f91c; /* 0x49f91c */
extern int DAT_0049f920; /* 0x49f920 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00231bb8. */
/* Supplied declaration required: FUN_00231bcc. */
/* Supplied declaration required: FUN_00232658. */
extern unsigned int FUN_0023342c(int, unsigned int);
/* Supplied declaration required: FUN_0025090c. */
/* Supplied declaration required: FUN_00288f78. */
/* Supplied declaration required: FUN_002be5a4. */
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: FUN_002bed3c. */
extern unsigned int FUN_002bed98(int);
extern unsigned int FUN_002beda4(int);
/* Supplied declaration required: FUN_002bedb0. */
/* Supplied declaration required: FUN_002bee04. */
/* Supplied declaration required: FUN_002bf380. */
extern int FUN_002bf4f8(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bf538. */
/* Supplied declaration required: FUN_002bf694. */
extern int FUN_002c09d0(unsigned int);
extern int FUN_002c2950(void);
extern unsigned int FUN_002c5d80(unsigned int, unsigned int);
extern unsigned int FUN_002c5da8(unsigned int, unsigned int, unsigned int);
extern unsigned int FUN_002e039c(int);
/* Supplied declaration required: FUN_0039f63c. */
/* Supplied declaration required: FUN_0039fb38. */
/* Supplied declaration required: NaviMain_GetCurrentMap. */
extern unsigned int NaviMain_GetPosX(void);
/* Supplied declaration required: NaviMain_GetPosY. */


void FUN_00231dec(int param_1)

{
/* irregular: 10 goto(s); irregular input(s): in_fpscr; 18 native warning(s); review required */
  char temp_v0;
  short temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  unsigned int in_fpscr;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  unsigned char temp_v15 [128];
  float temp_v16;
  float temp_v17;
  int temp_v18;
  
  temp_v2 = FUN_002c2950();
  temp_v3 = FUN_002c5d80(5,1);
  FUN_002bee04(DAT_0044ea00,3,temp_v3);
  temp_v18 = param_1 + 0x162;
  VectorSignedToFloat(0x100 - DAT_0044cdd8,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v3 = NaviMain_GetPosX();
  temp_v1 = NaviMain_GetPosY(temp_v18);
  FUN_00232658(temp_v18);
  temp_v17 = 0.0f;
  temp_v16 = 0.0f;
  if ((*(unsigned int *)(param_1 + 0x10) & 0x1000000) != 0) {
    FUN_00231bb8(param_1 + 0x164,&temp_v16);
  }
  FUN_002bf538();
  FUN_002bed3c();
  FUN_002bf380(2,0x1c,8,(int)temp_v16,(int)temp_v17,DAT_0044cdd8);
  temp_v9 = param_1 + 0x12268;
  if ((*(unsigned int *)(param_1 + 0x10) & 0x20) == 0) {
    if (*(char *)(param_1 + 0xc) != '\0') {
      temp_v3 = NaviMain_GetCurrentMap(temp_v18);
      temp_v4 = NaviMain_GetPosY(temp_v18);
      FUN_0025090c(temp_v3,temp_v4,1,temp_v15);
      FUN_002bf694(temp_v9,temp_v15);
    }
    else {
      temp_v5 = FUN_002c09d0(0x529);
      if ((temp_v5 != 0) && (temp_v5 = FUN_00288f78(temp_v3), temp_v5 != 3)) {
        temp_v3 = FUN_002e039c((int)temp_v1);
        FUN_002bf694(temp_v9,temp_v3);
      }
      else {
        FUN_002be624(temp_v15,&LAB_00232470);
        FUN_002bf694(temp_v9,temp_v15);
      }
    }
  }
  if (*(char *)(param_1 + 0x12268) != '\0') {
    temp_v3 = FUN_0023342c(temp_v9,2);
    temp_v14 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v5 = FUN_002bf4f8(0x1c,0xfb4);
    temp_v12 = (float)VectorSignedToFloat((int)*(short *)(temp_v5 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v13 = (float)VectorSignedToFloat((int)*(short *)(temp_v5 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v12 = (float)VectorSignedToFloat((int)(temp_v12 + temp_v16) +
                                        (int)**(short **)(temp_v5 + 0xc) / 2,
                                        (unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)(temp_v12 - temp_v14 * 0.5f),(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)(temp_v13 + temp_v17),(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be5a4(2,0xffffffff,temp_v9);
  }
  temp_v3 = FUN_002c5da8(6,1,0);
  FUN_002bee04(DAT_0044ea00,6,temp_v3);
  FUN_00231bcc(param_1 + 0x164,4000,0,0,DAT_0044cdd8,1);
  FUN_00231bcc(param_1 + 0x164,0xfa1,0,0,DAT_0044cdd8,1);
  FUN_00231bcc(param_1 + 0x164,0xfa2,0,0,DAT_0044cdd8,1);
  FUN_00231bcc(param_1 + 0x164,0xfa3,0,0,DAT_0044cdd8,1);
  FUN_002bedb0(DAT_0044ea00,6);
  temp_v9 = 0xfa5;
  do {
    FUN_00231bcc(param_1 + 0x164,temp_v9,0,0,DAT_0044cdd8,1);
    temp_v9 = temp_v9 + 1;
  } while (temp_v9 < 0xfa9);
  temp_v9 = 0xfa9;
  do {
    FUN_00231bcc(param_1 + 0x164,temp_v9,0,0,DAT_0044cdd8,1);
    temp_v9 = temp_v9 + 1;
  } while (temp_v9 < 0xfad);
  if (((DAT_0049f91c != 0x13) || ((DAT_0049f920 != 6 && DAT_0049f920 != 7) && DAT_0049f920 != 8)) &&
     ((*(unsigned int *)(param_1 + 0x10) & 0x1000) == 0)) {
    if (*(char *)(param_1 + 0xc) != '\0') {
      NaviMain_GetCurrentMap(temp_v18);
      temp_v9 = FUN_00288f78();
      if (temp_v9 != 2 && temp_v9 != 3) {
        temp_v18 = param_1 + 0x12000;
        temp_v9 = 0;
LAB_00232208:
        do {
          temp_v5 = param_1 + temp_v9;
          temp_v0 = *(char *)(temp_v5 + 0x56);
          if (temp_v0 == '\0') {
            if (temp_v9 != 1) {
              if ((temp_v9 == 3) &&
                 ((*(char *)(temp_v2 + 0xd5a) == '\x06' || ('\0' < *(char *)(param_1 + 0x57))))) {
                temp_v9 = 4;
                goto LAB_00232208;
              }
            }
            else if ((*(char *)(temp_v2 + 0xd5a) == '\f') || ('\0' < *(char *)(param_1 + 0x59))) {
              temp_v9 = 2;
              goto LAB_00232208;
            }
          }
          temp_v10 = temp_v9 + 0xfb5;
          if ('\0' < temp_v0) {
            temp_v10 = temp_v9 + 0xfba;
            *(char *)(temp_v5 + 0x56) = temp_v0 - '\x01';
          }
          temp_v11 = param_1 + temp_v9 * 0x8c + 0x618;
          temp_v3 = FUN_002beda4(temp_v11);
          temp_v12 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v12 = temp_v12 + temp_v16;
          temp_v3 = FUN_002bed98(temp_v11);
          temp_v6 = *(unsigned int *)(param_1 + 0x10);
          temp_v13 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
          if ((temp_v6 & 0x20) == 0) {
            if (temp_v9 != 0) {
              if (temp_v9 == 4) {
                temp_v6 = (unsigned int)*(unsigned char *)(param_1 + 0x5a);
              }
              if (temp_v9 == 4 && temp_v6 == 0) {
                temp_v7 = *(int *)(temp_v18 + 0x264);
                temp_v11 = 0;
                if (0 < temp_v7) {
LAB_00232494:
                  temp_v8 = param_1 + temp_v11 * 4;
                  if ((*(short *)(temp_v8 + 0x121e4) == 0) ||
                     ((int)*(short *)(temp_v8 + 0x121e6) != (int)*(char *)(param_1 + 0x60)))
                  goto LAB_002324e4;
                  if (temp_v11 + 1 < temp_v7) {
                    temp_v1 = *(short *)(param_1 + temp_v11 * 4 + 0x121ea);
joined_r0x00232458:
                    if (temp_v1 == 0) goto LAB_002324f0;
                    goto LAB_002323c4;
                  }
                }
LAB_002324f0:
                *(unsigned char *)(temp_v5 + 0x122e8) = 0;
                goto LAB_002323cc;
              }
            }
            else if (*(char *)(param_1 + 0x56) == '\0') {
              temp_v11 = 0;
              if (temp_v11 < *(int *)(temp_v18 + 0x264)) {
                do {
                  temp_v7 = param_1 + temp_v11 * 4;
                  if ((*(short *)(temp_v7 + 0x121e4) != 0) &&
                     ((int)*(short *)(temp_v7 + 0x121e6) == (int)*(char *)(param_1 + 0x60))) {
                    if (-1 < temp_v11 - 1) {
                      temp_v1 = *(short *)(param_1 + temp_v11 * 4 + 0x121e2);
                      goto joined_r0x00232458;
                    }
                    break;
                  }
                  temp_v11 = temp_v11 + 1;
                } while (temp_v11 < *(int *)(temp_v18 + 0x264));
              }
              goto LAB_002324f0;
            }
LAB_002323c4:
            *(unsigned char *)(temp_v5 + 0x122e8) = 1;
          }
LAB_002323cc:
          if (*(char *)(temp_v5 + 0x122e8) != '\0') {
            FUN_0039fb38(temp_v10,(int)temp_v12,(int)(temp_v13 + temp_v17),DAT_0044cdd8,1);
          }
          else {
            FUN_0039f63c(temp_v10,(int)temp_v12,(int)(temp_v13 + temp_v17),DAT_0044cdd8,0x80,1);
          }
          temp_v9 = temp_v9 + 1;
        } while (temp_v9 < 5);
      }
    }
    else {
      temp_v2 = FUN_002c09d0(0x529);
      if (temp_v2 != 0) {
        NaviMain_GetCurrentMap(temp_v18);
        temp_v2 = FUN_00288f78();
        if (temp_v2 != 2 && temp_v2 != 3) {
          temp_v3 = 0xfb7;
          if ('\0' < *(char *)(param_1 + 0x58)) {
            temp_v3 = 0xfbc;
            *(char *)(param_1 + 0x58) = *(char *)(param_1 + 0x58) - '\x01';
          }
          temp_v4 = FUN_002beda4(param_1 + 0x730);
          temp_v12 = (float)VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v12 = temp_v12 + temp_v16;
          temp_v4 = FUN_002bed98(param_1 + 0x730);
          temp_v13 = (float)VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_0039fb38(temp_v3,(int)temp_v12,(int)(temp_v13 + temp_v17),DAT_0044cdd8,1);
        }
      }
    }
  }
  FUN_002bedb0(DAT_0044ea00,3);
  return;
LAB_002324e4:
  temp_v11 = temp_v11 + 1;
  if (temp_v7 <= temp_v11) goto LAB_002324f0;
  goto LAB_00232494;
}
