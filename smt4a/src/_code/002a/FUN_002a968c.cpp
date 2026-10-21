/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a968c` (_code @ 0x2a968c, 0x998 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(...);
int FUN_00162790(...);
int FUN_00164b5c(int, int, int, int, int, int);
int efctSetSpeed(void);
int FUN_00180310(...);
int FUN_0018152c(...);
int FUN_001834a4(...);
int FUN_001835b4(...);
int FUN_00184310(void);
int FUN_00185e84(...);
int FUN_0020caec(...);
int unitRecordBuild(...);
int FUN_00344cd0(...);
int FUN_0037c988(...);
int drawInteractiveEightRowList(...);
int FUN_004bcaa8(...);
int getUnlockedSlotCount(...);
int VectorSignedToFloat(...);

/* stack frame of param_7: 15 slot(s), 60 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp1DC; /* 0x1dc: local_1dc */
    unsigned int sp1E0; /* 0x1e0: local_1e0 */
    unsigned int sp1E4; /* 0x1e4: local_1e4 */
    unsigned int sp1EC; /* 0x1ec: local_1ec */
    unsigned int sp1F0; /* 0x1f0: local_1f0 */
    unsigned int sp1F4; /* 0x1f4: local_1f4 */
    unsigned int sp1F8; /* 0x1f8: local_1f8 */
    unsigned int sp1FC; /* 0x1fc: local_1fc */
    unsigned int sp200; /* 0x200: local_200 */
} param_7_stack;

extern unsigned char LAB_002a9994; /* 0x2a9994 */
extern unsigned char LAB_002a99ac; /* 0x2a99ac */
extern unsigned char LAB_002a99b4; /* 0x2a99b4 */
extern unsigned char LAB_002a9de8; /* 0x2a9de8 */
extern unsigned char LAB_002a9e00; /* 0x2a9e00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: textFormatBuffer. */
extern unsigned int FUN_0014bf3c(short, unsigned int);
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: FUN_00164b5c. */
/* Supplied declaration required: efctSetSpeed. */
extern unsigned int FUN_00180114(short);
/* Supplied declaration required: FUN_00180310. */
/* Supplied declaration required: FUN_0018152c. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: FUN_00185e84. */
/* Supplied declaration required: FUN_0020caec. */
extern int FUN_0022e9b8(void);
/* Supplied declaration required: unitRecordBuild. */
/* Supplied declaration required: FUN_00344cd0. */
extern int uiSearchPrimary(int);
/* Supplied declaration required: FUN_0037c988. */
/* Supplied declaration required: drawInteractiveEightRowList. */
/* Supplied declaration required: FUN_004bcaa8. */
/* Supplied declaration required: getUnlockedSlotCount. */


void FUN_002a968c(int param_1,int param_2,unsigned int param_3,int param_4,unsigned int param_5,
                 int param_6,int param_7)

{
/* irregular: irregular input(s): in_fpscr; 18 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  short *psVar3;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int in_fpscr;
  unsigned char temp_v6 [304];
  unsigned char temp_v7 [64];
  short temp_v8 [22];
  int iStack_34;
  int iStack_30;
  unsigned int temp_v9;
  int temp_v10;
  
  iStack_34 = param_1;
  iStack_30 = param_2;
  temp_v9 = param_3;
  temp_v10 = param_4;
  temp_v0 = FUN_0022e9b8();
  if (temp_v0 != 0) {
    efctSetSpeed();
    FUN_00164b5c(2,0x1a,1,param_1,param_2,0x65);
    FUN_001835b4(2,0x1a,0x163,param_1,param_2,0x6a);
    FUN_001835b4(2,0x1a,0x164,param_1,param_2,0x6a);
    FUN_001835b4(2,0x1a,0x165,param_1,param_2,0x6f);
    FUN_001835b4(2,0x1a,0x166,param_1,param_2,0x6a);
    FUN_001835b4(2,0x1a,0x167,param_1,param_2,0x6f);
    FUN_001835b4(2,0x1a,0x16a,param_1,param_2,0x6a);
    FUN_001835b4(2,0x1a,0x16b,param_1,param_2,0x6f);
    FUN_001835b4(2,0x1a,0x16c,param_1,param_2,0x74);
    temp_v1 = FUN_001834a4(0x1a,0x168);
    textFormatBuffer(temp_v7,&LAB_002a99ac,&LAB_002a9994);
    VectorSignedToFloat(*(short *)(temp_v1 + 10) + param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(*(short *)(temp_v1 + 8) + param_1,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_00162790(3,0xff,temp_v7);
    temp_v1 = FUN_001834a4(0x1a,0x169);
    textFormatBuffer(temp_v7,&LAB_002a99ac,&LAB_002a99b4);
    VectorSignedToFloat(*(short *)(temp_v1 + 10) + param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(*(short *)(temp_v1 + 8) + param_1,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_00162790(3,0xff,temp_v7);
    FUN_001835b4(2,0x1a,0x16d,
                 param_1 - ((int)(*(int *)(temp_v0 + 0x3fc) +
                                 ((unsigned int)(*(int *)(temp_v0 + 0x3fc) >> 0x1f) >> 0x1e)) >> 2) % 3,
                 param_2,0x6f);
    efctSetSpeed();
    FUN_001835b4(2,0x1a,0x16e,
                 param_1 - ((int)(*(int *)(temp_v0 + 0x3fc) +
                                 ((unsigned int)(*(int *)(temp_v0 + 0x3fc) >> 0x1f) >> 0x1e)) >> 2) % 3,
                 param_2,0x74);
    efctSetSpeed();
    FUN_001835b4(2,0x1a,0x4f,param_1,param_2,0x6a);
    if (temp_v10 != 0) {
      psVar3 = (short *)(unsigned int)*(unsigned short *)(temp_v0 + 0x5238);
      FUN_00184310();
    }
    else if (param_6 != 0) {
      psVar3 = (short *)((*(unsigned int *)(temp_v0 + 0x13bc) & 0x1ffff) >> 2);
      FUN_00184310();
    }
    else if (param_7 != 0) {
      psVar3 = (short *)((*(unsigned int *)(temp_v0 + 0x13bc) & 0x1ffff) >> 2);
      FUN_00184310();
    }
    else {
      psVar3 = (short *)((*(unsigned int *)(temp_v0 + (unsigned int)*(unsigned short *)(temp_v0 + 0x6832) * 8 + 0x13bc) &
                         0x1ffff) >> 2);
      FUN_00184310();
    }
    temp_v1 = FUN_001834a4(0x1a,0x4d);
    temp_v2 = FUN_00180114(*psVar3);
    textFormatBuffer(temp_v7,&LAB_002a99ac,temp_v2);
    VectorSignedToFloat(*(short *)(temp_v1 + 10) + param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(*(short *)(temp_v1 + 8) + param_1,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_00162790(2,0xffffffff,temp_v7);
    temp_v1 = FUN_001834a4(0x1a,0x4e);
    temp_v2 = FUN_0014bf3c(*psVar3,0);
    textFormatBuffer(temp_v7,&LAB_002a99ac,temp_v2);
    VectorSignedToFloat(*(short *)(temp_v1 + 10) + param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(*(short *)(temp_v1 + 8) + param_1,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_00162790(2,0x57d8ffff,temp_v7);
    if ((unsigned short)psVar3[3] >= 100) {
      temp_v1 = FUN_001834a4(0x1a,0x265);
      FUN_00180310(0,*(short *)(temp_v1 + 8) + param_1,*(short *)(temp_v1 + 10) + param_2,1,3,0x8d,
                   &LAB_002a9de8,psVar3[3]);
    }
    else {
      temp_v1 = FUN_001834a4(0x1a,0x51);
      FUN_00180310(0,*(short *)(temp_v1 + 8) + param_1,*(short *)(temp_v1 + 10) + param_2,1,2,0x8d,
                   &LAB_002a9de8,psVar3[3]);
    }
    temp_v5 = 0;
    temp_v1 = uiSearchPrimary(temp_v0 + 0x8db0);
    if (0 < temp_v1) {
      do {
        if (*(short *)(temp_v0 + temp_v5 * 2 + 0x8b60) == 0) break;
        temp_v5 = temp_v5 + 1;
        temp_v1 = uiSearchPrimary(temp_v0 + 0x8db0);
      } while (temp_v5 < temp_v1);
    }
    temp_v1 = FUN_001834a4(0x1a,0x1ed);
    FUN_0018152c((int)*psVar3,*(short *)(temp_v1 + 8) + param_1,*(short *)(temp_v1 + 10) + param_2,0x8d,
                 0);
    FUN_0020caec(*psVar3,*(short *)(temp_v1 + 8) + param_1,*(short *)(temp_v1 + 10) + param_2,0x92);
    unitRecordBuild(*psVar3,temp_v6);
    getUnlockedSlotCount(temp_v6);
    FUN_0037c988(temp_v0,temp_v6,param_5,temp_v9,temp_v5,param_1,param_2);
    temp_v8[2] = 0;
    temp_v8[3] = 0;
    temp_v8[0] = 0;
    temp_v8[1] = 0;
    temp_v8[4] = 0;
    temp_v8[5] = 0;
    temp_v8[6] = 0;
    temp_v8[7] = 0;
    FUN_004bcaa8(*psVar3,psVar3[3],temp_v0 + 0x8b60,temp_v8,0);
    temp_v1 = 0;
    do {
      if (temp_v8[temp_v1] == 0) break;
      if (temp_v8[temp_v1 + 1] == 0) {
        temp_v1 = temp_v1 + 1;
        break;
      }
      temp_v1 = temp_v1 + 2;
    } while (temp_v1 < 8);
    if (temp_v1 >= 1) {
      temp_v5 = 0;
      do {
        temp_v3 = FUN_001834a4(0x1a,temp_v5 + 0x193);
        FUN_001835b4(2,0x1a,0x18e,*(short *)(temp_v3 + 8) + param_1,*(short *)(temp_v3 + 10) + param_2,
                     0x65);
        FUN_001835b4(2,0x1a,399,*(short *)(temp_v3 + 8) + param_1,*(short *)(temp_v3 + 10) + param_2,
                     0x65);
        FUN_001835b4(2,0x1a,0x277,*(short *)(temp_v3 + 8) + param_1,*(short *)(temp_v3 + 10) + param_2,
                     0x65);
        FUN_001835b4(2,0x1a,0x278,*(short *)(temp_v3 + 8) + param_1,*(short *)(temp_v3 + 10) + param_2,
                     0x65);
        FUN_001835b4(2,0x1a,400,*(short *)(temp_v3 + 8) + param_1,*(short *)(temp_v3 + 10) + param_2,
                     0x65);
        FUN_001835b4(2,0x1a,0x191,*(short *)(temp_v3 + 8) + param_1,*(short *)(temp_v3 + 10) + param_2,
                     0x6a);
        temp_v4 = FUN_001834a4(0x1a,0x192);
        FUN_00185e84((int)temp_v8[temp_v5],
                     (int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v4 + 8) + param_1,
                     (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v4 + 10) + param_2,0x6f,0,0);
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < temp_v1);
    }
    else {
      temp_v1 = FUN_001834a4(0x1a,0x197);
      FUN_001835b4(2,0x1a,0x16f,*(short *)(temp_v1 + 8) + param_1,*(short *)(temp_v1 + 10) + param_2,
                   0x65);
      FUN_001835b4(2,0x1a,0x170,*(short *)(temp_v1 + 8) + param_1,*(short *)(temp_v1 + 10) + param_2,
                   0x65);
      FUN_001835b4(2,0x1a,0x26f,*(short *)(temp_v1 + 8) + param_1,*(short *)(temp_v1 + 10) + param_2,
                   0x65);
      FUN_001835b4(2,0x1a,0x270,*(short *)(temp_v1 + 8) + param_1,*(short *)(temp_v1 + 10) + param_2,
                   0x65);
      FUN_001835b4(2,0x1a,0x171,*(short *)(temp_v1 + 8) + param_1,*(short *)(temp_v1 + 10) + param_2,
                   0x65);
      temp_v5 = FUN_001834a4(0x1a,0x178);
      textFormatBuffer(temp_v7,&LAB_002a9e00);
      VectorSignedToFloat((int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v5 + 10) + param_2,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat((int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v5 + 8) + param_1,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_00162790(2,0xf4f4f4ff,temp_v7,(int)*(short *)(temp_v5 + 8));
    }
    drawInteractiveEightRowList(temp_v0,temp_v6,param_5,param_1,param_2);
    efctSetSpeed();
    FUN_001835b4(2,0x1a,0x273,param_1,param_2,0x97);
    FUN_00344cd0(temp_v0 + 0x8e14,param_1,param_2,0x1a,0x2a,0x2b,0x2c,0x26,0x28,0x27,0x29,
                 (int)*(short *)(temp_v0 + 0x476),(int)*(short *)(temp_v0 + 0x472),
                 (int)*(short *)(temp_v0 + 0x474),0x97,0);
    efctSetSpeed();
  }
  return;
}

} /* extern "C" */
