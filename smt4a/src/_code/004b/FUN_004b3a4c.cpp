/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004b3a4c` (_code @ 0x4b3a4c, 0x694 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int efctSetSpeed(void);
int FUN_00180310(...);
int FUN_0018152c(...);
int FUN_001834a4(...);
int FUN_001835b4(...);
int drawSetColorFromRGBA8(...);
int FUN_00185dd4(...);
int gameGetSlotRecord(...);
int FUN_004b42b0(...);
int SBORROW4(...);
int VectorSignedToFloat(...);

/* stack frame of param_10: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_10_stack;

extern unsigned char LAB_004b40ec; /* 0x4b40ec */
extern unsigned int DAT_00588c4c; /* 0x588c4c */
extern int DAT_00588c50; /* 0x588c50 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: efctSetSpeed. */
extern int gameGetPlayerData(void);
/* Supplied declaration required: FUN_00180310. */
/* Supplied declaration required: FUN_0018152c. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: drawSetColorFromRGBA8. */
/* Supplied declaration required: FUN_00185dd4. */
extern int FUN_0019e130(int);
/* Supplied declaration required: gameGetSlotRecord. */
/* Supplied declaration required: FUN_004b42b0. */


void FUN_004b3a4c(int param_1,unsigned int param_2,int param_3,int param_4,int param_5,int param_6,
                 unsigned int param_7,int param_8,int param_9,unsigned int param_10)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr; 11 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned char temp_v8;
  unsigned int in_fpscr;
  unsigned long long temp_v9;
  
  temp_v1 = gameGetSlotRecord(param_3);
  temp_v9 = FUN_001834a4(0x1d,param_4 + 0x68);
  temp_v4 = (unsigned int)((unsigned long long)temp_v9 >> 0x20);
  temp_v2 = (int)temp_v9;
  switch(param_2) {
  case 0:
    FUN_001835b4(2,0x1d,0x56,*(short *)(temp_v2 + 8) + param_5,*(short *)(temp_v2 + 10) + param_6,0x65);
    break;
  case 1:
    temp_v8 = param_9 == 0;
    temp_v6 = param_9;
    if (param_9 < 1) {
      temp_v4 = (unsigned int)*(unsigned short *)(temp_v1 + 100);
      temp_v6 = temp_v4 - param_10;
      temp_v8 = temp_v4 == param_10;
    }
    if (!(temp_v8 || temp_v6 < 0 != (param_9 < 1 && SBORROW4(temp_v4,param_10)))) {
      if ((int)((unsigned int)*(unsigned short *)(temp_v1 + 100) + param_9) >= 100) {
        FUN_001835b4(2,0x1d,0x58,*(short *)(temp_v2 + 8) + param_5,*(short *)(temp_v2 + 10) + param_6,
                     0x6a);
        FUN_001835b4(2,0x1d,0x174,*(short *)(temp_v2 + 8) + param_5,*(short *)(temp_v2 + 10) + param_6,
                     0x6f);
        return;
      }
      if (param_9 < 1) goto LAB_004b3b88;
      if ((int)((unsigned int)*(unsigned short *)(temp_v1 + 100) + param_9) < 100) {
        FUN_001835b4(2,0x1d,0x58,*(short *)(temp_v2 + 8) + param_5,*(short *)(temp_v2 + 10) + param_6,
                     0x6a);
        FUN_001835b4(2,0x1d,0x5a,*(short *)(temp_v2 + 8) + param_5,*(short *)(temp_v2 + 10) + param_6,
                     0x6f);
        return;
      }
    }
    else {
LAB_004b3b88:
      if ((int)param_10 < (int)(unsigned int)*(unsigned short *)(temp_v1 + 100)) {
        if ((int)((unsigned int)*(unsigned short *)(temp_v1 + 100) + param_9) < 100) {
          FUN_001835b4(2,0x1d,0x58,*(short *)(temp_v2 + 8) + param_5,*(short *)(temp_v2 + 10) + param_6,
                       0x6a);
          FUN_001835b4(2,0x1d,0x5a,*(short *)(temp_v2 + 8) + param_5,*(short *)(temp_v2 + 10) + param_6,
                       0x6f);
          return;
        }
      }
      else if ((int)((unsigned int)*(unsigned short *)(temp_v1 + 100) + param_9) < 100) {
        FUN_001835b4(2,0x1d,0x57,*(short *)(temp_v2 + 8) + param_5,*(short *)(temp_v2 + 10) + param_6,
                     0x6a);
        FUN_001835b4(2,0x1d,0x59,*(short *)(temp_v2 + 8) + param_5,*(short *)(temp_v2 + 10) + param_6,
                     0x6f);
        return;
      }
    }
    FUN_001835b4(2,0x1d,0x57,*(short *)(temp_v2 + 8) + param_5,*(short *)(temp_v2 + 10) + param_6,0x6a);
    FUN_001835b4(2,0x1d,0x173,*(short *)(temp_v2 + 8) + param_5,*(short *)(temp_v2 + 10) + param_6,0x6f)
    ;
    break;
  case 2:
    temp_v6 = -1;
    temp_v5 = *(int *)(param_1 + param_3 * 4 + 0x7ecc);
    if (param_3 < 0) {
      temp_v3 = gameGetPlayerData();
      temp_v0 = *(unsigned short *)(temp_v3 + 0x5e);
    }
    else {
      temp_v3 = gameGetSlotRecord();
      temp_v0 = *(unsigned short *)(temp_v3 + 0x60);
    }
    temp_v4 = 1;
    temp_v3 = 0;
    do {
      if (((unsigned int)temp_v0 & (1 << (temp_v4 & 0xff))) != 0) {
        if (temp_v3 == temp_v5) {
          temp_v6 = FUN_0019e130((int)(short)temp_v4);
          if (DAT_00588c50 != temp_v6) {
            drawSetColorFromRGBA8(temp_v6);
            DAT_00588c50 = temp_v6;
          }
          FUN_0018152c((int)*(short *)(temp_v1 + 0x62),
                       (int)*(short *)(temp_v2 + 8) + (int)*(short *)(DAT_00588c4c + 8) + param_5,
                       (int)*(short *)(DAT_00588c4c + 10) + (int)*(short *)(temp_v2 + 10) + param_6,
                       0x6a,0);
          return;
        }
        temp_v3 = temp_v3 + 1;
      }
      temp_v4 = temp_v4 + 1;
      if ((int)temp_v4 >= 0xe) {
        if (DAT_00588c50 != temp_v6) {
          drawSetColorFromRGBA8(temp_v6);
          DAT_00588c50 = temp_v6;
        }
        FUN_0018152c((int)*(short *)(temp_v1 + 0x62),
                     (int)*(short *)(temp_v2 + 8) + (int)*(short *)(DAT_00588c4c + 8) + param_5,
                     (int)*(short *)(DAT_00588c4c + 10) + (int)*(short *)(temp_v2 + 10) + param_6,0x6a
                     ,0);
        return;
      }
      while (temp_v4 == 2) {
        temp_v4 = 3;
      }
    } while( 1 );
  case 3:
    FUN_001835b4(2,0x1d,0x5b,*(short *)(temp_v2 + 8) + param_5,*(short *)(temp_v2 + 10) + param_6,0x6f);
    FUN_001835b4(2,0x1d,0x5c,*(short *)(temp_v2 + 8) + param_5,*(short *)(temp_v2 + 10) + param_6,0x6f);
    FUN_001835b4(2,0x1d,0x5d,*(short *)(temp_v2 + 8) + param_5,*(short *)(temp_v2 + 10) + param_6,0x74);
    FUN_001835b4(2,0x1d,0x5e,*(short *)(temp_v2 + 8) + param_5,*(short *)(temp_v2 + 10) + param_6,0x79);
    FUN_001835b4(2,0x1d,0x81,*(short *)(temp_v2 + 8) + param_5,*(short *)(temp_v2 + 10) + param_6,0x7a);
    FUN_001835b4(2,0x1d,0x14f,*(short *)(temp_v2 + 8) + param_5,*(short *)(temp_v2 + 10) + param_6,0x65)
    ;
    FUN_001835b4(2,0x1d,0x150,*(short *)(temp_v2 + 8) + param_5,*(short *)(temp_v2 + 10) + param_6,0x65)
    ;
    FUN_001835b4(2,0x1d,0x151,*(short *)(temp_v2 + 8) + param_5,*(short *)(temp_v2 + 10) + param_6,0x65)
    ;
    break;
  case 4:
    temp_v7 = 2;
    if ((int)((unsigned int)*(unsigned short *)(temp_v1 + 100) + param_9) >= 100) {
      DAT_00588c4c = FUN_001834a4(0x1d,0x177);
      temp_v7 = 3;
    }
    else {
      DAT_00588c4c = FUN_001834a4(0x1d,0x66);
    }
    temp_v8 = param_9 == 0;
    temp_v6 = param_9;
    temp_v4 = DAT_00588c4c;
    if (param_9 < 1) {
      temp_v4 = (unsigned int)*(unsigned short *)(temp_v1 + 100);
      temp_v6 = temp_v4 - param_10;
      temp_v8 = temp_v4 == param_10;
    }
    if (temp_v8 || temp_v6 < 0 != (param_9 < 1 && SBORROW4(temp_v4,param_10))) {
      temp_v6 = -1;
    }
    else {
      temp_v6 = 0xff;
    }
    if (DAT_00588c50 != temp_v6) {
      drawSetColorFromRGBA8(temp_v6);
      DAT_00588c50 = temp_v6;
    }
    FUN_00180310(0,(int)*(short *)(DAT_00588c4c + 8) + (int)*(short *)(temp_v2 + 8) + param_5,
                 (int)*(short *)(temp_v2 + 10) + (int)*(short *)(DAT_00588c4c + 10) + param_6,1,temp_v7,
                 0x7e,&LAB_004b40ec,(unsigned int)*(unsigned short *)(temp_v1 + 100) + param_9);
    break;
  case 5:
    FUN_004b42b0(param_1,param_3,*(short *)(temp_v2 + 8) + param_5,*(short *)(temp_v2 + 10) + param_6);
    return;
  case 6:
    if (param_8 != 0) {
      FUN_001835b4(2,0x1d,0x60,*(short *)(temp_v2 + 8) + param_5,*(short *)(temp_v2 + 10) + param_6,0x83
                  );
    }
    else {
      FUN_00185dd4(2,0x1d,0x5f,*(short *)(temp_v2 + 8) + param_5,*(short *)(temp_v2 + 10) + param_6,
                   param_7,(int)*(short *)(*(int *)(DAT_00588c4c + 0xc) + 2),0x83);
    }
    break;
  case 7:
    if (param_8 != 0) {
      if (param_9 < 8) {
        VectorSignedToFloat(param_9,(unsigned char)(in_fpscr >> 0x16) & 3);
        efctSetSpeed();
      }
      FUN_001835b4(2,0x1d,0x61,*(short *)(temp_v2 + 8) + param_5,*(short *)(temp_v2 + 10) + param_6,0x88
                  );
      FUN_001835b4(2,0x1d,0x61,*(short *)(temp_v2 + 8) + param_5,*(short *)(temp_v2 + 10) + param_6,0x89
                  );
    }
  }
  return;
}

} /* extern "C" */
