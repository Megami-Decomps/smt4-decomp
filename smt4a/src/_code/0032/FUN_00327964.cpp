/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00327964` (_code @ 0x327964, 0x584 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int mathVec3Dot(void);

int sysPlaySe(int);
int FUN_001bbf0c(void);
int FUN_001bc124(void);
int mapIfSetMode1(void);
int FUN_00233e10(int, unsigned int);
int FUN_002342b8(void);
int FUN_0025ef68(int, int, int);
int distSpatial(void);
int FUN_002b7f58(void);
int FUN_002dae68(void);
int FUN_002e364c(int);
int FUN_00303460(int);
int FUN_00313648(unsigned int);
int FUN_003250ac(...);
int mapIfReleaseRequestObject(void);
int mathPositionHeadingDegrees(void);
int mapIfReleaseSlot1(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int g_lmapView; /* 0x5806a4 */
extern int g_lmapScene; /* 0x581288 */
extern unsigned char DAT_005f162f; /* 0x5f162f */
extern unsigned char DAT_005f1631; /* 0x5f1631 */
extern unsigned int DAT_005f16ac; /* 0x5f16ac */
extern unsigned int DAT_005f16b0; /* 0x5f16b0 */
extern unsigned int DAT_005f16b4; /* 0x5f16b4 */
extern unsigned int DAT_005f16b8; /* 0x5f16b8 */
extern unsigned char DAT_005f185a; /* 0x5f185a */
extern int DAT_006160dc; /* 0x6160dc */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern int padButtonIsPressed(unsigned int);
/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: FUN_001bbf0c. */
/* Supplied declaration required: FUN_001bc124. */
/* Supplied declaration required: mapIfSetMode1. */
/* Supplied declaration required: FUN_00233e10. */
/* Supplied declaration required: FUN_002342b8. */
/* Supplied declaration required: FUN_0025ef68. */
extern int mapIfHasSelection(void);
/* Supplied declaration required: distSpatial. */
/* Supplied declaration required: FUN_002b7f58. */
/* Supplied declaration required: FUN_002dae68. */
/* Supplied declaration required: FUN_002e364c. */
/* Supplied declaration required: FUN_00303460. */
/* Supplied declaration required: FUN_00313648. */
/* Supplied declaration required: mathVec3Dot. */
/* Supplied declaration required: FUN_003250ac. */
/* Supplied declaration required: mapIfReleaseRequestObject. */
/* Supplied declaration required: mathPositionHeadingDegrees. */
/* Supplied declaration required: mapIfReleaseSlot1. */
extern int inputIsQuestMenuPressed(void);
extern int FUN_004d0584(void);


void FUN_00327964(void)

{
/* irregular: 2 goto(s); irregular input(s): in_d10, in_d11, in_d8, in_d9; 22 native warning(s); review required */
  float *pfVar1;
  unsigned char temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  float temp_v7;
  float temp_v8;
  unsigned long long in_d8;
  unsigned long long temp_v9;
  unsigned long long temp_v10;
  unsigned int temp_v11;
  unsigned long long in_d9;
  unsigned int temp_v12;
  float temp_v13;
  unsigned long long in_d10;
  float temp_v14;
  unsigned long long temp_v15;
  unsigned int temp_v16;
  unsigned long long in_d11;
  unsigned long long temp_v17;
  unsigned char temp_v18 [12];
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  unsigned int uStack_24;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  
  uStack_38 = (unsigned int)in_d8;
  uStack_34 = (unsigned int)((unsigned long long)in_d8 >> 0x20);
  uStack_30 = (unsigned int)in_d9;
  uStack_2c = (unsigned int)((unsigned long long)in_d9 >> 0x20);
  uStack_28 = (unsigned int)in_d10;
  uStack_24 = (unsigned int)((unsigned long long)in_d10 >> 0x20);
  uStack_20 = (unsigned int)in_d11;
  uStack_1c = (unsigned int)((unsigned long long)in_d11 >> 0x20);
  temp_v9 = *(unsigned long long *)(g_lmapScene + 0x28);
  temp_v11 = *(unsigned int *)(g_lmapScene + 0x30);
  FUN_002dae68();
  temp_v3 = g_lmapScene;
  temp_v7 = *(float *)(g_lmapScene + 0x1c) +
          (*(float *)(g_lmapScene + 0x28) - *(float *)(g_lmapScene + 0x1c)) * 0.33333334f;
  *(float *)(g_lmapScene + 0x1c) = temp_v7;
  *(float *)(temp_v3 + 0x20) =
       *(float *)(temp_v3 + 0x20) + (*(float *)(temp_v3 + 0x2c) - *(float *)(temp_v3 + 0x20)) * 0.16666667f
  ;
  *(float *)(temp_v3 + 0x24) =
       *(float *)(temp_v3 + 0x24) + (*(float *)(temp_v3 + 0x30) - *(float *)(temp_v3 + 0x24)) * 0.33333334f
  ;
  temp_v4 = *(int *)(temp_v3 + 4);
  if (temp_v4 != 0xc) {
    if (temp_v4 < 0xc) {
      temp_v12 = 0x40a00000;
      if (temp_v4 != 2) {
        if (temp_v4 < 2) {
          if (temp_v4 != 0) {
            if (temp_v4 == 1) {
              *(int *)(temp_v3 + 8) = *(int *)(temp_v3 + 8) + 1;
              FUN_00233e10(1,DAT_005f16ac);
              temp_v3 = g_lmapScene;
              if (*(int *)(g_lmapScene + 8) >= 3) {
                temp_v4 = *(int *)(g_lmapScene + 4);
                *(unsigned int *)(g_lmapScene + 0x54) = 0x1d;
                *(unsigned int *)(temp_v3 + 0x58) = 0x40000000;
                *(int *)(temp_v3 + 4) = temp_v4 + 1;
                *(unsigned int *)(temp_v3 + 8) = 0;
              }
            }
          }
          else {
            *(unsigned int *)(temp_v3 + 0x54) = 0;
            *(unsigned int *)(temp_v3 + 0x58) = 0x40400000;
            *(unsigned char *)(temp_v3 + 0x6c) = 0;
            distSpatial();
            temp_v5 = DAT_005f16b8;
            temp_v12 = DAT_005f16b4;
            temp_v3 = g_lmapScene;
            temp_v8 = 0.017453292f;
            temp_v14 = 100.0f;
            temp_v16 = 0x41f00000;
            temp_v13 = 180.0f;
            *(unsigned int *)(g_lmapScene + 0x118) = DAT_005f16b0;
            *(unsigned int *)(temp_v3 + 0x11c) = temp_v12;
            *(unsigned int *)(temp_v3 + 0x120) = temp_v5;
            if ((int)temp_v7 < 0x42700000) {
              temp_v7 = (*(float *)(temp_v3 + 0x4c) + 180.0f) * 0.017453292f;
              FUN_001bc124();
              temp_v3 = g_lmapScene;
              *(float *)(g_lmapScene + 0x118) = *(float *)(g_lmapScene + 0x118) + temp_v7 * temp_v14;
              temp_v8 = (*(float *)(temp_v3 + 0x4c) + temp_v13) * temp_v8;
              FUN_001bbf0c();
              temp_v3 = g_lmapScene + 0x124;
              *(float *)(g_lmapScene + 0x120) = *(float *)(g_lmapScene + 0x120) + temp_v8 * temp_v14;
              FUN_003250ac(temp_v3);
              temp_v3 = g_lmapScene;
              *(unsigned int *)(g_lmapScene + 0x130) = temp_v16;
              *(unsigned char *)(temp_v3 + 0x115) = 1;
              temp_v12 = *(unsigned int *)(temp_v3 + 0x28);
              mathPositionHeadingDegrees();
              *(unsigned int *)(g_lmapScene + 0x50) = temp_v12;
            }
            else {
              temp_v7 = (*(float *)(temp_v3 + 0x50) + 180.0f) * 0.017453292f;
              FUN_001bc124();
              temp_v3 = g_lmapScene;
              *(float *)(g_lmapScene + 0x118) = *(float *)(g_lmapScene + 0x118) + temp_v7 * temp_v14;
              temp_v8 = (*(float *)(temp_v3 + 0x50) + temp_v13) * temp_v8;
              FUN_001bbf0c();
              temp_v3 = g_lmapScene + 0x124;
              *(float *)(g_lmapScene + 0x120) = *(float *)(g_lmapScene + 0x120) + temp_v8 * temp_v14;
              FUN_003250ac(temp_v3);
              temp_v3 = g_lmapScene;
              *(unsigned int *)(g_lmapScene + 0x130) = temp_v16;
              *(unsigned char *)(temp_v3 + 0x115) = 1;
              temp_v12 = *(unsigned int *)(temp_v3 + 0x28);
              mathPositionHeadingDegrees();
              *(unsigned int *)(g_lmapScene + 0x50) = temp_v12;
            }
            FUN_00303460(10);
            *(unsigned int *)(g_lmapView + 0xb0) = 0xffffffff;
            sysPlaySe(0xdd);
            FUN_00233e10(1,DAT_005f16ac);
            FUN_002b7f58();
            temp_v3 = g_lmapScene;
            temp_v4 = *(int *)(temp_v3 + 4);
            *(int *)(temp_v3 + 4) = temp_v4 + 1;
            *(unsigned int *)(temp_v3 + 8) = 0;
          }
        }
        else if (temp_v4 != 10) {
          if ((temp_v4 == 0xb) &&
             (temp_v4 = *(int *)(temp_v3 + 8) + 1, *(int *)(temp_v3 + 8) = temp_v4, temp_v4 == 0x14)) {
            FUN_002342b8();
            temp_v4 = *(int *)(g_lmapScene + 4);
            temp_v3 = g_lmapScene;
            *(int *)(temp_v3 + 4) = temp_v4 + 1;
            *(unsigned int *)(temp_v3 + 8) = 0;
          }
        }
        else {
          DAT_005f185a = 0;
          *(unsigned int *)(temp_v3 + 0x54) = 8;
          *(unsigned int *)(temp_v3 + 0x58) = 0x40a00000;
          temp_v4 = *(int *)(temp_v3 + 4);
          *(int *)(temp_v3 + 4) = temp_v4 + 1;
          *(unsigned int *)(temp_v3 + 8) = 0;
        }
      }
      else {
        *(int *)(temp_v3 + 8) = *(int *)(temp_v3 + 8) + 1;
        FUN_00233e10(1,DAT_005f16ac);
        temp_v4 = FUN_004d0584();
        temp_v3 = g_lmapScene;
        if (temp_v4 != 0) {
          *(unsigned int *)(g_lmapScene + 4) = 10;
          *(unsigned int *)(temp_v3 + 8) = 0;
        }
        else {
          temp_v3 = padButtonIsPressed(5);
          if ((temp_v3 != 0) || (temp_v3 = inputIsQuestMenuPressed(), temp_v3 != 0)) {
            temp_v3 = g_lmapView;
            *(unsigned int *)(g_lmapView + 0x18) = *(unsigned int *)(g_lmapScene + 0x50);
            *(unsigned int *)(temp_v3 + 0xb0) = 0;
            FUN_00303460(0);
            temp_v3 = g_lmapScene;
            *(unsigned int *)(g_lmapScene + 0x54) = 0;
            *(unsigned int *)(temp_v3 + 0x58) = temp_v12;
            FUN_00233e10(0,DAT_005f16ac);
            mapIfReleaseSlot1();
            temp_v3 = g_lmapScene;
            *(unsigned int *)(g_lmapScene + 4) = 0x5a;
            *(unsigned int *)(temp_v3 + 8) = 0;
          }
        }
      }
    }
    else if (temp_v4 != 0xd) {
      if (temp_v4 != 0x5a) {
        if (temp_v4 != 0x5b) {
          if ((temp_v4 != 0x5c) ||
             (temp_v4 = *(int *)(temp_v3 + 8) + 1, *(int *)(temp_v3 + 8) = temp_v4, temp_v4 < 4))
          goto LAB_00327dc8;
          temp_v12 = 1;
          FUN_00313648(temp_v12);
        }
        else {
          mapIfReleaseRequestObject();
          temp_v4 = *(int *)(g_lmapScene + 4);
          temp_v3 = g_lmapScene;
          *(int *)(temp_v3 + 4) = temp_v4 + 1;
          *(unsigned int *)(temp_v3 + 8) = 0;
        }
      }
      else {
        *(int *)(temp_v3 + 4) = temp_v4 + 1;
        *(unsigned int *)(temp_v3 + 8) = 0;
      }
    }
    else {
      temp_v4 = *(int *)(temp_v3 + 8) + 1;
      *(int *)(temp_v3 + 8) = temp_v4;
      if (temp_v4 == 0x14) {
        mapIfReleaseRequestObject();
        mapIfSetMode1();
        temp_v12 = 8;
        FUN_00313648(temp_v12);
      }
    }
  }
  else {
    temp_v3 = mapIfHasSelection();
    if (temp_v3 == 0) {
      mapIfReleaseSlot1();
      temp_v3 = g_lmapView;
      *(unsigned int *)(g_lmapView + 0x18) = *(unsigned int *)(g_lmapScene + 0x50);
      *(unsigned int *)(temp_v3 + 0xb0) = 0;
      FUN_00303460(0);
      temp_v4 = *(int *)(g_lmapScene + 4);
      temp_v3 = g_lmapScene;
      *(int *)(temp_v3 + 4) = temp_v4 + 1;
      *(unsigned int *)(temp_v3 + 8) = 0;
    }
  }
LAB_00327dc8:
  if (*(char *)(g_lmapScene + 0x115) != '\0') {
    temp_v7 = *(float *)(g_lmapScene + 0x28);
    distSpatial();
    temp_v3 = g_lmapScene;
    temp_v8 = *(float *)(g_lmapScene + 0x130);
    if (temp_v8 >= temp_v7) {
      temp_v12 = *(unsigned int *)(g_lmapScene + 0x11c);
      temp_v5 = *(unsigned int *)(g_lmapScene + 0x120);
      *(unsigned int *)(g_lmapScene + 0x28) = *(unsigned int *)(g_lmapScene + 0x118);
      *(unsigned char *)(temp_v3 + 0x115) = 0;
      *(unsigned int *)(temp_v3 + 0x2c) = temp_v12;
      *(unsigned int *)(temp_v3 + 0x30) = temp_v5;
    }
    else {
      pfVar1 = (float *)(g_lmapScene + 0x128);
      temp_v7 = *(float *)(g_lmapScene + 300);
      *(float *)(g_lmapScene + 0x28) =
           *(float *)(g_lmapScene + 0x28) + *(float *)(g_lmapScene + 0x124) * temp_v8;
      *(float *)(temp_v3 + 0x2c) = *(float *)(temp_v3 + 0x2c) + *pfVar1 * temp_v8;
      *(float *)(temp_v3 + 0x30) = *(float *)(temp_v3 + 0x30) + temp_v7 * temp_v8;
    }
    temp_v3 = g_lmapScene;
    temp_v4 = g_lmapScene + 0x34;
    *(int *)(g_lmapScene + 0x34) = (int)temp_v9;
    *(int *)(temp_v3 + 0x38) = (int)((unsigned long long)temp_v9 >> 0x20);
    *(unsigned int *)(temp_v3 + 0x3c) = temp_v11;
    temp_v3 = temp_v3 + 0x28;
    FUN_0025ef68(temp_v3,temp_v4,0);
    if (temp_v3 != 0) {
      *(unsigned char *)(g_lmapScene + 0x115) = 0;
    }
  }
  FUN_002e364c(g_lmapScene + 0x28);
  temp_v1 = uStack_24;
  temp_v10 = romwright_piece_4_4(uStack_34,uStack_38);
  temp_v3 = 0;
  uStack_3c = uStack_38;
  uStack_38 = uStack_34;
  uStack_34 = uStack_30;
  uStack_30 = uStack_2c;
  uStack_2c = uStack_28;
  uStack_28 = uStack_24;
  uStack_24 = uStack_20;
  uStack_20 = uStack_1c;
  temp_v15 = (unsigned long long)temp_v1;
  DAT_005f162f = 0xff;
  DAT_005f1631 = 0xff;
  if (0 < DAT_006160dc) {
    temp_v15 = 0;
  }
  temp_v15 = temp_v15 << 0x20;
  if (0 < DAT_006160dc) {
    do {
      temp_v17 = temp_v15 >> 0x20;
      temp_v6 = 0;
      temp_v4 = temp_v3 * 0x7c;
      do {
        if (temp_v6 != 0) {
          if (temp_v6 != 1) {
            if (temp_v6 != 2) {
              if (temp_v6 == 3) {
                temp_v10 = (unsigned long long)*(unsigned int *)(temp_v4 + 0x614dec);
                FUN_003250ac(temp_v18);
              }
            }
            else {
              temp_v10 = (unsigned long long)*(unsigned int *)(temp_v4 + 0x614dd4);
              FUN_003250ac(temp_v18);
            }
          }
          else {
            temp_v10 = (unsigned long long)*(unsigned int *)(temp_v4 + 0x614dbc);
            FUN_003250ac(temp_v18);
          }
        }
        else {
          temp_v10 = (unsigned long long)*(unsigned int *)(temp_v4 + 0x614da4);
          FUN_003250ac(temp_v18);
        }
        temp_v7 = (float)temp_v10;
        mathVec3Dot();
        temp_v2 = DAT_005f162f;
        if (temp_v7 < (float)temp_v17) goto LAB_00328050;
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < 4);
      temp_v0 = (unsigned char)*(unsigned short *)(temp_v4 + 0x614d96);
      temp_v2 = temp_v0;
      if (*(short *)(temp_v4 + 0x614d94) != 0) {
        temp_v2 = DAT_005f162f;
        DAT_005f1631 = temp_v0;
      }
LAB_00328050:
      DAT_005f162f = temp_v2;
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < DAT_006160dc);
  }
  return;
}

} /* extern "C" */
