/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f4cc0` (_code @ 0x3f4cc0, 0x544 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(...);
int FUN_00162790(...);
int efctSetSpeed(void);
int gameGetPlayerData(...);
int FUN_00180310(int, int, int, int);
int FUN_0018152c(...);
int FUN_001834a4(...);
int FUN_001835b4(...);
int FUN_0018408c(int *, int);
int drawSetColorFromRGBA8(...);
int VectorSignedToFloat(...);

/* stack frame of param_4: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} param_4_stack;

extern unsigned char LAB_003f5208; /* 0x3f5208 */
extern unsigned char LAB_003f5218; /* 0x3f5218 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00100388. */
extern unsigned int FUN_0015687c(void);
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: efctSetSpeed. */
extern unsigned int FUN_00180114(unsigned short);
/* Supplied declaration required: gameGetPlayerData. */
/* Supplied declaration required: FUN_00180310. */
/* Supplied declaration required: FUN_0018152c. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_0018408c. */
/* Supplied declaration required: drawSetColorFromRGBA8. */
extern unsigned int FUN_0019e130(int);
extern int gameGetSlotRecord(void);
extern int btlMainGetUnk14(void);


void FUN_003f4cc0(int param_1,int param_2,int param_3,int param_4)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr; 11 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int *piVar5;
  int temp_v4;
  int temp_v5;
  char temp_v6;
  unsigned short temp_v7;
  unsigned int temp_v8;
  unsigned char temp_v9;
  unsigned int in_fpscr;
  int temp_v10;
  unsigned int temp_v11;
  unsigned char *temp_v12;
  unsigned char temp_v13 [56];
  
  piVar5 = &temp_v10;
  param_3 = *(int *)(param_1 + 0x2c) + param_3;
  param_4 = *(int *)(param_1 + 0x30) + param_4;
  efctSetSpeed();
  if (*(char *)(param_1 + 0x22) != '\0') {
    efctSetSpeed();
    return;
  }
  if (param_2 != 0) {
    if (param_2 != 1) {
      if (param_2 != 2) {
        if (param_2 != 3) {
          if ((param_2 != 4) || (*(char *)(param_1 + 0x20) != '\0')) {
            efctSetSpeed();
            return;
          }
          temp_v12 = temp_v13;
          if (*(int *)(param_1 + 0x34) != -1) {
            if (*(int *)(param_1 + 0x34) != -2) {
              temp_v5 = gameGetSlotRecord();
            }
            else {
              temp_v5 = btlMainGetUnk14();
            }
            if (temp_v5 != 0) {
              temp_v7 = *(unsigned short *)(temp_v5 + 100);
              goto LAB_003f510c;
            }
            FUN_00100388(temp_v13,&LAB_003f5218,0);
          }
          else {
            temp_v5 = gameGetPlayerData();
            temp_v7 = *(unsigned short *)(temp_v5 + 0x62);
LAB_003f510c:
            FUN_00100388(temp_v13,&LAB_003f5218,temp_v7);
            if (temp_v7 >= 100) {
              temp_v11 = 0x6f;
              temp_v10 = param_4;
              FUN_001835b4(2,0x11,0x7a,param_3);
              temp_v5 = FUN_001834a4(0x11,0x7d);
              temp_v10 = 3;
              temp_v11 = 0x79;
              FUN_00180310(0,*(short *)(temp_v5 + 8) + param_3,*(short *)(temp_v5 + 10) + param_4,1);
              efctSetSpeed();
              return;
            }
          }
          temp_v11 = 0x6f;
          temp_v10 = param_4;
          FUN_001835b4(2,0x11,3,param_3);
          temp_v5 = FUN_001834a4(0x11,0x15);
          temp_v10 = 2;
          temp_v11 = 0x79;
          FUN_00180310(0,*(short *)(temp_v5 + 8) + param_3,*(short *)(temp_v5 + 10) + param_4,1);
        }
        else if (*(char *)(param_1 + 0x20) == '\0') {
          if (*(int *)(param_1 + 0x34) != -1) {
            if (*(int *)(param_1 + 0x34) != -2) {
              temp_v5 = gameGetSlotRecord();
            }
            else {
              temp_v5 = btlMainGetUnk14();
            }
            if (temp_v5 != 0) {
              temp_v3 = FUN_00180114(*(unsigned short *)(temp_v5 + 0x62));
              FUN_00100388(&temp_v10,&LAB_003f5208,temp_v3);
            }
          }
          else {
            gameGetPlayerData();
            temp_v3 = FUN_0015687c();
            FUN_00100388(&temp_v10,&LAB_003f5208,temp_v3);
          }
          temp_v5 = FUN_001834a4(0x11);
          FUN_0018408c(&temp_v10,1);
          temp_v0 = *(short *)(temp_v5 + 8);
          temp_v3 = 0xffffffff;
          temp_v1 = **(short **)(temp_v5 + 0xc);
          temp_v4 = *(int *)(param_1 + 0x34);
          temp_v7 = 0;
          if (temp_v4 != -1) {
            if (temp_v4 != -2) {
              if (-1 < temp_v4) {
                temp_v4 = gameGetSlotRecord();
                temp_v7 = *(unsigned short *)(temp_v4 + 0x60);
              }
            }
            else {
              temp_v4 = btlMainGetUnk14();
              if (temp_v4 != 0) {
                temp_v7 = *(unsigned short *)(temp_v4 + 0x60);
              }
            }
          }
          else {
            temp_v4 = gameGetPlayerData(0xffffffff,(int)temp_v0,(int)temp_v1);
            temp_v7 = *(unsigned short *)(temp_v4 + 0x5e);
          }
          if ((temp_v7 & 2) != 0) {
            temp_v3 = 0xdc0f14ff;
          }
          VectorSignedToFloat(param_3 + (int)temp_v0 + ((int)temp_v1 - (int)piVar5) / 2,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat(*(short *)(temp_v5 + 10) + param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_00162790(1,temp_v3,&temp_v10);
        }
      }
      else {
        temp_v5 = 0;
        if (*(char *)(param_1 + 0x20) == '\0') {
          if (*(int *)(param_1 + 0x34) != -1) {
            if (*(int *)(param_1 + 0x34) != -2) {
              temp_v4 = gameGetSlotRecord();
            }
            else {
              temp_v4 = btlMainGetUnk14();
            }
            if (temp_v4 != 0) {
              temp_v5 = (int)*(short *)(temp_v4 + 0x62);
            }
          }
          else {
            gameGetPlayerData();
            temp_v5 = -1;
          }
          temp_v8 = 0;
          temp_v3 = 0xffffffff;
          if (*(char *)(param_1 + 0x23) == '\0') {
            temp_v4 = *(int *)(param_1 + 0x34);
            if (temp_v4 != -1) {
              if (temp_v4 != -2) {
                if (-1 < temp_v4) {
                  temp_v4 = gameGetSlotRecord();
                  temp_v8 = (unsigned int)*(unsigned short *)(temp_v4 + 0x60);
                }
              }
              else {
                temp_v4 = btlMainGetUnk14();
                if (temp_v4 != 0) {
                  temp_v8 = (unsigned int)*(unsigned short *)(temp_v4 + 0x60);
                }
              }
            }
            else {
              temp_v4 = gameGetPlayerData();
              temp_v8 = (unsigned int)*(unsigned short *)(temp_v4 + 0x5e);
            }
            temp_v2 = 1;
            temp_v4 = 0;
            do {
              if ((temp_v8 & (1 << (temp_v2 & 0xff))) != 0) {
                if (*(int *)(param_1 + 0x1c) == temp_v4) {
                  temp_v3 = FUN_0019e130((int)(short)temp_v2);
                  break;
                }
                temp_v4 = temp_v4 + 1;
              }
              temp_v2 = temp_v2 + 1;
              if ((int)temp_v2 >= 0xe) break;
              while (temp_v2 == 2) {
                temp_v2 = 3;
              }
            } while( 1 );
          }
          drawSetColorFromRGBA8(temp_v3);
          if (*(char *)(param_1 + 0x23) != '\0') {
            efctSetSpeed();
          }
          temp_v4 = FUN_001834a4(0x11,0x13);
          temp_v10 = 0;
          FUN_0018152c(temp_v5,*(short *)(temp_v4 + 8) + param_3,*(short *)(temp_v4 + 10) + param_4,0x6a);
          if (*(char *)(param_1 + 0x23) != '\0') {
            efctSetSpeed();
          }
        }
      }
    }
    else {
      if (*(char *)(param_1 + 0x20) != '\0') {
        if (*(char *)(param_1 + 0x21) == '\0') {
          efctSetSpeed();
          return;
        }
        temp_v3 = 0xe;
        temp_v11 = 0x6f;
      }
      else {
        temp_v3 = 2;
        temp_v11 = 0x65;
      }
      temp_v10 = param_4;
      FUN_001835b4(2,0x11,temp_v3,param_3);
    }
  }
  else {
    temp_v6 = *(char *)(param_1 + 0x25);
    temp_v9 = temp_v6 == '\0';
    if (temp_v9) {
      temp_v6 = *(char *)(param_1 + 0x27);
    }
    temp_v11 = 0x65;
    if (!(temp_v9 && temp_v6 == '\0')) {
      temp_v10 = param_4;
      FUN_001835b4(2,0x11,1,param_3);
    }
    else {
      temp_v10 = param_4;
      FUN_001835b4(2,0x11,0,param_3);
    }
  }
  efctSetSpeed();
  return;
}

} /* extern "C" */
