/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014c01c` (_code @ 0x14c01c, 0x2168 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001624b8(...);
int mathInterpolateTimed(...);
int msgBoxFlagsSetBit7(...);
int FUN_00167400(void);
int FUN_00168980(...);
int FUN_00169548(...);
int FUN_00169704(void);

int FUN_001517b4(...);
int uiApplyIndexedPanelSpriteSizes(...);
int ifTouchRegionRemove(void);
int workCommandRefreshActiveSlots(void);
int FUN_00165088(...);
int msgBoxFlagsClearBit7(...);
int ifTouchGetButtonHelpValue(void);
int sysPlaySe(...);
int FUN_00183f58(...);
int pairSetFirstResetSecond(...);

int FUN_0014afd0(int, int);
int objFlagsSetBits(unsigned int, int);
int gameDataCounterSpend(int);
int FUN_00163aa4(...);
int eventQueueAddUniqueIfValid(...);
int msgBoxFlagsClear(...);
int FUN_00167458(...);
int eventQueueAddUnique(...);
int itemGetStackLimit(unsigned int);
int asdTMTexTableReleaseNode(int, int);
int VectorFloatToUnsigned(double, int);
int VectorSignedToFloat(unsigned int, int);
int VectorUnsignedToFloat(int, int);
int __aeabi_idivmod(...);

/* stack frame of void: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} void_stack;

extern signed char g_messageMain; /* 0x57f588 */
extern int DAT_0057f58c; /* 0x57f58c */
extern int DAT_0057f590; /* 0x57f590 */
extern int DAT_005e2040; /* 0x5e2040 */
extern int iRam005e2044; /* 0x5e2044 */
extern float DAT_005e2048; /* 0x5e2048 */
extern signed char DAT_005e204c; /* 0x5e204c */
extern signed char DAT_005e204d; /* 0x5e204d */
extern signed char DAT_005e204e; /* 0x5e204e */
extern int iRam005e2050; /* 0x5e2050 */
extern float DAT_005e2054; /* 0x5e2054 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_0014afd0. */
/* Supplied declaration required: objFlagsSetBits. */
/* Supplied declaration required: FUN_001517b4. */
/* Supplied declaration required: FUN_001624b8. */
/* Supplied declaration required: gameDataCounterSpend. */
/* Supplied declaration required: mathInterpolateTimed. */
extern int campIsState85(void);
extern int engineCleanupIsDone(void);
/* Supplied declaration required: uiApplyIndexedPanelSpriteSizes. */
extern int querySlotHasHandle(void);
/* Supplied declaration required: FUN_00163aa4. */
extern int FUN_00163e84(unsigned int);
extern int FUN_00163fd4(unsigned int);
/* Supplied declaration required: eventQueueAddUniqueIfValid. */
/* Supplied declaration required: ifTouchRegionRemove. */
/* Supplied declaration required: workCommandRefreshActiveSlots. */
extern int msgBoxFlagsTestAny(unsigned int, unsigned int);
/* Supplied declaration required: msgBoxFlagsSetBit7. */
extern int ifTouchGetSelectionMode(void);
extern unsigned short FUN_001643b4(unsigned int, unsigned int);
extern int lmapMainIsRunning(void);
extern int jobGetWork(void);
extern int padButtonRepeat(unsigned int);
/* Supplied declaration required: msgBoxFlagsClear. */
extern int ifTouchGetSelectedRegion(void);
/* Supplied declaration required: FUN_00165088. */
/* Supplied declaration required: msgBoxFlagsClearBit7. */
/* Supplied declaration required: FUN_00167400. */
/* Supplied declaration required: FUN_00167458. */
extern int aocJobIsValid(void);
/* Supplied declaration required: ifTouchGetButtonHelpValue. */
/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: FUN_00168980. */
extern int msgBoxIsState2(unsigned int);
/* Supplied declaration required: FUN_00169548. */
/* Supplied declaration required: FUN_00169704. */
/* Supplied declaration required: eventQueueAddUnique. */
/* Supplied declaration required: itemGetStackLimit. */
extern int asdTMTexTableNodeIsLoaded(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00183f58. */
/* Supplied declaration required: pairSetFirstResetSecond. */
/* Supplied declaration required: asdTMTexTableReleaseNode. */
extern int mapMainIsBusy(void);
extern int QuestCenterMode_IsBusy(void);
/* Supplied declaration required: __aeabi_idivmod. */


unsigned int FUN_0014c01c(void)

{
/* irregular: 34 goto(s); irregular input(s): in_fpscr; 32 native warning(s); review required */
  short temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  char temp_v6;
  int *piVar8;
  int temp_v7;
  int temp_v8;
  unsigned char *puVar10;
  int *piVar11;
  int temp_v9;
  unsigned char *puVar13;
  int *piVar14;
  int temp_v10;
  unsigned char temp_v11;
  unsigned char temp_v12;
  unsigned char temp_v13;
  int *piVar19;
  unsigned int in_fpscr;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  unsigned char temp_v19 [4];
  int temp_v20;
  int temp_v21;
  int temp_v22;
  unsigned int uStack_44;
  int temp_v23 [7];
  
  temp_v2 = jobGetWork();
  temp_v17 = 0.0f;
  temp_v15 = 1.0f;
  if (DAT_0057f590 == temp_v2) {
    temp_v6 = *(char *)(temp_v2 + 0x8e);
    temp_v11 = temp_v6 == '\0';
    if (temp_v11) {
      temp_v6 = *(char *)(temp_v2 + 0x8f);
    }
    temp_v12 = temp_v11 && temp_v6 == '\0';
    if (temp_v11 && temp_v6 == '\0') {
      temp_v12 = *(char *)(temp_v2 + 0x90) == '\0';
    }
    if ((!temp_v12) || (*(char *)(temp_v2 + 0x192) != '\0')) {
      if (*(char *)(temp_v2 + 0x94) != '\x01') {
        if (*(char *)(temp_v2 + 0x94) == '\x02') {
          temp_v8 = FUN_00163aa4(temp_v2 + 0xb8c);
          if (temp_v8 != 0) {
            *(unsigned char *)(temp_v2 + 0x94) = 3;
          }
        }
      }
      else {
        temp_v8 = FUN_00163aa4(temp_v2 + 0xb8c);
        if (temp_v8 != 0) {
          *(unsigned char *)(temp_v2 + 0x94) = 3;
        }
      }
      if ((*(char *)(DAT_0057f590 + 0x16c) == '\x01') && (*(char *)(DAT_0057f590 + 0xb8a) != '\0'))
      {
        *(unsigned char *)(DAT_0057f590 + 0x16c) = 2;
      }
      temp_v8 = DAT_0057f590;
      if (*(char *)(DAT_0057f590 + 0x17d) != '\0') {
        switch(*(unsigned char *)(DAT_0057f590 + 0x17c)) {
        case 1:
          if (*(char *)(DAT_0057f590 + 0xb8a) != '\0') {
            *(unsigned char *)(temp_v8 + 0x17c) = 2;
          }
          break;
        case 3:
          if (*(int *)(DAT_0057f590 + 0x170) >= 1) {
            temp_v3 = __aeabi_idivmod(*(unsigned int *)(DAT_0057f590 + 0x188),
                                  *(unsigned int *)(DAT_0057f590 + 0x174));
            temp_v14 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v14 = temp_v14 + *(float *)(temp_v8 + 0x184);
            *(float *)(temp_v8 + 0x184) = temp_v14;
            *(int *)(temp_v8 + 0x170) = *(int *)(temp_v8 + 0x170) - 1;
            *(int *)(temp_v8 + 0x178) = (int)temp_v14;
          }
          else {
            piVar14 = (int *)(DAT_0057f590 + 0x180);
            piVar8 = (int *)(DAT_0057f590 + 0x188);
            *(unsigned char *)(DAT_0057f590 + 0x17c) = 0;
            temp_v9 = *piVar14 + *piVar8;
            *(int *)(temp_v8 + 0x180) = temp_v9;
            *(int *)(temp_v8 + 0x178) = temp_v9;
          }
          break;
        case 4:
          temp_v9 = FUN_00163aa4(DAT_0057f590 + 0xb00);
          if (temp_v9 != 0) {
            *(unsigned char *)(temp_v8 + 0x17c) = 2;
          }
        }
      }
      switch(*(unsigned char *)(temp_v2 + 0x8d)) {
      case 1:
        if (*(char *)(DAT_0057f58c + 0x6d) == '\0') {
          if (*(char *)(temp_v2 + 0x90) != '\0') {
            temp_v8 = FUN_00163aa4(temp_v2 + 0xb00);
            if (temp_v8 != 0) {
              *(unsigned char *)(temp_v2 + 0x8d) = 2;
              *(unsigned int *)(temp_v2 + 0x98) = 0;
            }
          }
          else {
            temp_v8 = FUN_00167458(temp_v2 + 0xb00,0);
            if (temp_v8 != 0) {
              *(unsigned char *)(temp_v2 + 0x8d) = 2;
            }
          }
        }
        break;
      case 2:
        if (*(char *)(temp_v2 + 0x90) == '\0') goto LAB_0014c48c;
        *(int *)(temp_v2 + 0x98) = *(int *)(temp_v2 + 0x98) + 1;
        goto LAB_0014c404;
      case 3:
        if (*(char *)(temp_v2 + 0x8e) != '\0') {
          temp_v8 = *(int *)(temp_v2 + 0x80);
          if (temp_v8 != 0) {
            temp_v9 = *(int *)(temp_v2 + 0x74);
            if (temp_v9 < 0xb) {
              temp_v10 = temp_v8 / 10 + *(int *)(temp_v2 + 0x7c);
              temp_v4 = *(int *)(temp_v2 + 0x84) - temp_v8 / 10;
              *(unsigned int *)(temp_v2 + 0x84) = temp_v4;
              *(int *)(temp_v2 + 0x7c) = temp_v10;
              if (temp_v9 == 0) {
                temp_v4 = (unsigned int)*(unsigned char *)(temp_v2 + 0x93);
              }
              if (temp_v9 == 0 && temp_v4 == 0) {
                eventQueueAddUnique(0x1000211,temp_v10,temp_v8 * 0x66666667);
              }
              temp_v8 = *(int *)(temp_v2 + 0x7c);
              if (temp_v8 < 1) {
                temp_v8 = 0;
              }
              *(int *)(temp_v2 + 0x7c) = temp_v8;
              if (temp_v8 >= 1000000000) {
                temp_v8 = 999999999;
              }
              *(int *)(temp_v2 + 0x7c) = temp_v8;
              if (*(int *)(temp_v2 + 0x74) != 10) {
                if (*(int *)(temp_v2 + 0x74) >= 0x14) {
                  *(unsigned char *)(temp_v2 + 0x8d) = 0;
                  *(unsigned int *)(temp_v2 + 0x88) = *(unsigned int *)(temp_v2 + 0x7c);
                }
              }
              else {
                temp_v8 = *(int *)(temp_v2 + 0x88) + *(int *)(temp_v2 + 0x80);
                *(int *)(temp_v2 + 0x7c) = temp_v8;
                if (temp_v8 < 1) {
                  temp_v8 = 0;
                }
                *(unsigned int *)(temp_v2 + 0x84) = 0;
                temp_v9 = 999999999;
                if (temp_v8 < 1000000000) {
                  temp_v9 = temp_v8;
                }
                *(int *)(temp_v2 + 0x7c) = temp_v8;
                *(int *)(temp_v2 + 0x7c) = temp_v9;
              }
            }
            else if (*(int *)(temp_v2 + 0x74) >= 0x14) {
              *(unsigned char *)(temp_v2 + 0x8d) = 0;
              *(unsigned int *)(temp_v2 + 0x88) = *(unsigned int *)(temp_v2 + 0x7c);
            }
          }
          else {
            *(unsigned char *)(temp_v2 + 0x8d) = 0;
            *(unsigned int *)(temp_v2 + 0x88) = *(unsigned int *)(temp_v2 + 0x7c);
          }
        }
        if (*(char *)(temp_v2 + 0x8f) != '\0') {
          if (*(int *)(temp_v2 + 0x80) != 0) {
            if (*(int *)(temp_v2 + 0x74) == 0) {
              temp_v8 = *(int *)(temp_v2 + 0x80) + *(int *)(temp_v2 + 0x88);
              *(int *)(temp_v2 + 0x7c) = temp_v8;
              if (temp_v8 < 1) {
                temp_v8 = 0;
              }
              *(unsigned int *)(temp_v2 + 0x84) = 0;
              *(int *)(temp_v2 + 0x7c) = temp_v8;
              temp_v8 = itemGetStackLimit(*(unsigned int *)(temp_v2 + 0x78));
              if (temp_v8 < *(int *)(temp_v2 + 0x7c)) {
                temp_v3 = itemGetStackLimit(*(unsigned int *)(temp_v2 + 0x78));
                *(unsigned int *)(temp_v2 + 0x7c) = temp_v3;
              }
            }
            if (*(int *)(temp_v2 + 0x74) < 10) {
              *(int *)(temp_v2 + 0x74) = *(int *)(temp_v2 + 0x74) + 1;
              break;
            }
          }
          *(unsigned char *)(temp_v2 + 0x8d) = 0;
          *(unsigned int *)(temp_v2 + 0x88) = *(unsigned int *)(temp_v2 + 0x7c);
        }
        *(int *)(temp_v2 + 0x74) = *(int *)(temp_v2 + 0x74) + 1;
        break;
      case 4:
        temp_v8 = FUN_00163aa4(temp_v2 + 0xb00);
        if (temp_v8 != 0) {
          *(unsigned char *)(temp_v2 + 0x8e) = 0;
          *(unsigned char *)(temp_v2 + 0x8f) = 0;
          *(unsigned char *)(temp_v2 + 0x90) = 0;
          *(unsigned char *)(temp_v2 + 0x192) = 0;
          goto LAB_0014c48c;
        }
      }
      if (*(char *)(temp_v2 + 0x90) != '\0') {
LAB_0014c404:
        temp_v8 = 0;
        do {
          temp_v9 = temp_v2 + temp_v8;
          temp_v6 = *(char *)(temp_v9 + 0xa0);
          if (temp_v6 != '\0') {
            if (temp_v6 != '\x01') {
              if (((temp_v6 != '\x02') && (temp_v6 == '\x04')) &&
                 (temp_v10 = FUN_00163aa4(temp_v2 + temp_v8 * 0x8c + 0xdbc), temp_v10 != 0)) {
                *(unsigned char *)(temp_v9 + 0xa0) = 0;
              }
            }
            else {
              temp_v10 = FUN_00163aa4(temp_v2 + temp_v8 * 0x8c + 0xdbc);
              if (temp_v10 != 0) {
                *(unsigned char *)(temp_v9 + 0xa0) = 2;
              }
            }
          }
          temp_v8 = temp_v8 + 1;
        } while (temp_v8 < 0xc);
      }
    }
LAB_0014c48c:
    temp_v8 = DAT_0057f590;
    switch(*(unsigned char *)(DAT_0057f590 + 0x154)) {
    case 1:
      if ((*(char *)(DAT_0057f58c + 0x6d) == '\0') &&
         (FUN_00167458(DAT_0057f590 + 0xd30,0), *(char *)(DAT_0057f590 + 0xdba) != '\0')) {
        *(unsigned char *)(temp_v8 + 0x154) = 2;
      }
      break;
    case 3:
      if (*(int *)(DAT_0057f590 + 0x150) >= 1) {
        if (*(int *)(DAT_0057f590 + 0x150) == 10) {
          eventQueueAddUnique(0x1000211);
        }
        temp_v14 = (float)VectorUnsignedToFloat
                                  (*(unsigned short *)(temp_v8 + 0x164) / 10,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v14 = *(float *)(temp_v8 + 0x160) - temp_v14;
        *(float *)(temp_v8 + 0x160) = temp_v14;
        temp_v3 = VectorFloatToUnsigned(temp_v14,3);
        *(short *)(temp_v8 + 0x15c) = (short)temp_v3;
        *(int *)(temp_v8 + 0x150) = *(int *)(temp_v8 + 0x150) - 1;
      }
      else {
        *(short *)(DAT_0057f590 + 0x15c) =
             *(short *)(DAT_0057f590 + 0x15e) - *(short *)(DAT_0057f590 + 0x164);
        *(unsigned char *)(temp_v8 + 0x154) = 0;
        gameDataCounterSpend(*(unsigned short *)(temp_v8 + 0x164));
      }
      break;
    case 4:
      temp_v9 = FUN_00163aa4(DAT_0057f590 + 0xd30);
      if (temp_v9 != 0) {
        *(unsigned char *)(temp_v8 + 0x154) = 2;
      }
    }
    temp_v8 = DAT_0057f590;
    temp_v11 = *(char *)(DAT_0057f590 + 0x191) != '\0';
    temp_v6 = '\0';
    if (temp_v11) {
      temp_v6 = *(char *)(DAT_0057f590 + 400);
    }
    if (temp_v11 && temp_v6 != '\0') {
      if (temp_v6 != '\x01') {
        if (((temp_v6 != '\x02') && (temp_v6 == '\x03')) &&
           (temp_v9 = FUN_00163aa4(DAT_0057f590 + 0x1820), temp_v9 != 0)) {
          *(unsigned char *)(temp_v8 + 400) = 2;
          *(unsigned char *)(temp_v8 + 0x191) = 0;
          *(unsigned char *)(temp_v8 + 0x192) = 0;
        }
      }
      else {
        temp_v9 = FUN_00163aa4(DAT_0057f590 + 0x1820);
        if (temp_v9 != 0) {
          *(unsigned char *)(temp_v8 + 400) = 2;
        }
      }
    }
    temp_v8 = DAT_0057f590;
    if (*(char *)(DAT_0057f590 + 0x19f2) != '\0') {
      puVar13 = (unsigned char *)(DAT_0057f590 + 0x19f0);
      switch(*puVar13) {
      case 1:
        temp_v9 = asdTMTexTableNodeIsLoaded(4,0x2c);
        if (temp_v9 == 0) {
          *(unsigned char *)(temp_v8 + 0x19f8) = 1;
          FUN_0014afd0(4,0x2c);
        }
        *puVar13 = 2;
      case 2:
        temp_v9 = FUN_00163aa4(temp_v8 + 0x144c);
        if (temp_v9 != 0) {
          puVar10 = (unsigned char *)(temp_v8 + 0x19f1);
          *puVar13 = 3;
          *puVar10 = 0;
        }
        break;
      case 4:
        temp_v9 = FUN_00163aa4(DAT_0057f590 + 0x144c);
        if (temp_v9 != 0) {
          *puVar13 = 5;
          goto LAB_0014c6d4;
        }
        break;
      case 5:
LAB_0014c6d4:
        if (*(char *)(temp_v8 + 0x19f8) != '\0') {
          asdTMTexTableReleaseNode(4,0x2c);
          *(unsigned char *)(temp_v8 + 0x19f8) = 0;
        }
        *puVar13 = 6;
      case 6:
        puVar10 = (unsigned char *)(temp_v8 + 0x19f2);
        *(unsigned char *)(temp_v8 + 0x19f1) = 0;
        *puVar10 = 0;
      }
    }
    temp_v8 = DAT_0057f590;
    if (*(char *)(DAT_0057f590 + 0x19fb) != '\0') {
      puVar13 = (unsigned char *)(DAT_0057f590 + 0x19f9);
      switch(*puVar13) {
      case 1:
        temp_v9 = asdTMTexTableNodeIsLoaded(4,0x2c);
        if (temp_v9 == 0) {
          *(unsigned char *)(temp_v8 + 0x1a00) = 1;
          FUN_0014afd0(4,0x2c);
        }
        *puVar13 = 2;
      case 2:
        FUN_00163aa4(temp_v8 + 0x15f0);
        FUN_00163aa4(temp_v8 + 0x167c);
        FUN_00163aa4();
        if (*(char *)(temp_v8 + 0x181e) != '\0') {
          *puVar13 = 3;
          *(unsigned char *)(temp_v8 + 0x19fa) = 0;
          temp_v8 = DAT_0057f590;
          FUN_00163aa4(DAT_0057f590 + 0x14d8);
          FUN_00163aa4(temp_v8 + 0x1564);
          FUN_00163aa4(temp_v8 + 0x1708);
        }
        break;
      case 3:
        temp_v8 = DAT_0057f590;
        FUN_00163aa4(DAT_0057f590 + 0x14d8);
        FUN_00163aa4(temp_v8 + 0x1564);
        FUN_00163aa4(temp_v8 + 0x1708);
        break;
      case 4:
        FUN_00163aa4(DAT_0057f590 + 0x15f0);
        FUN_00163aa4(temp_v8 + 0x167c);
        FUN_00163aa4();
        if (*(char *)(temp_v8 + 0x181e) != '\0') {
          *puVar13 = 5;
          goto LAB_0014c87c;
        }
        break;
      case 5:
LAB_0014c87c:
        if (*(char *)(temp_v8 + 0x1a00) != '\0') {
          asdTMTexTableReleaseNode(4,0x2c);
          *(char *)(temp_v8 + 0x1a00) = '\0';
        }
        *(unsigned char *)(temp_v8 + 0x19fa) = 0;
        *puVar13 = 6;
      case 6:
        *(unsigned char *)(temp_v8 + 0x19fb) = 0;
      }
    }
    if (*(char *)(temp_v2 + 0x1a10) != '\0') {
      piVar14 = (int *)(temp_v2 + 0x1a18);
      *piVar14 = *piVar14 + 1;
      temp_v20 = 2;
      temp_v21 = 9;
      temp_v22 = 5;
      uStack_44 = 0xd;
      temp_v23[0] = 0;
      temp_v4 = 0;
      temp_v23[1] = 0;
      temp_v23[2] = 0;
      temp_v23[3] = 0;
      do {
        temp_v8 = temp_v23[temp_v4];
        piVar8 = (int *)temp_v19;
        if ((temp_v4 & 1) == 0) {
          temp_v8 = temp_v8 + 2;
          piVar8 = &temp_v20;
        }
        temp_v10 = 0;
        for (temp_v9 = (int)(temp_v4 + 1) >> 1; temp_v9 != 0; temp_v9 = temp_v9 - 1) {
          piVar11 = (int *)((int)piVar8 + 4);
          piVar19 = (int *)((int)piVar8 + 8);
          piVar8 = (int *)((int)piVar8 + 8);
          temp_v8 = temp_v8 + *piVar11;
          temp_v10 = temp_v10 + *piVar19;
        }
        temp_v23[temp_v4] = temp_v8 + temp_v10;
        temp_v5 = temp_v4;
        do {
          temp_v4 = temp_v5 + 1;
          if ((int)temp_v4 >= 4) {
            temp_v8 = 0;
            if (temp_v23[3] < *piVar14) {
              *piVar14 = 0;
            }
            goto LAB_0014c97c;
          }
          temp_v8 = temp_v5 + 2;
          temp_v5 = temp_v4;
        } while (temp_v8 < 1);
      } while( 1 );
    }
  }
LAB_0014c9fc:
  temp_v4 = (unsigned int)*(unsigned char *)(temp_v2 + 8);
  switch(temp_v4) {
  case 1:
    msgBoxFlagsClear(*(unsigned int *)(temp_v2 + 4),8);
    if (*(char *)(temp_v2 + 9) != '\f') {
      if (*(char *)(temp_v2 + 9) != '\r') {
        if (*(char *)(temp_v2 + 0x36) != '\0') {
          objFlagsSetBits(*(unsigned int *)(temp_v2 + 4),0x20);
        }
        temp_v6 = *(char *)(temp_v2 + 9);
        if ((((!(temp_v6 == '\x01' || temp_v6 == '\x02')) && (!(temp_v6 == '\x03' || temp_v6 == '\x04'))) &&
            ((!(temp_v6 == '\x05' || temp_v6 == '\x11') &&
             ((!(temp_v6 == '\x12' || temp_v6 == '\x13') && (!(temp_v6 == '\x06' || temp_v6 == '\a')))))))
           && (!(temp_v6 == '\b' || temp_v6 == '\t'))) {
          temp_v12 = 0;
          temp_v20 = 0;
          temp_v21 = *(int *)(temp_v2 + 0x18);
          temp_v11 = 0;
          if (temp_v6 == '\v') {
            FUN_00163aa4(temp_v2 + 0x470);
            FUN_00163aa4(temp_v2 + 0x18ac);
            if (0 < *(int *)(temp_v2 + 0x70)) {
              *(int *)(temp_v2 + 0x70) = *(int *)(temp_v2 + 0x70) - 1;
            }
            if (*(char *)(temp_v2 + 0x95) == '\0') {
              temp_v10 = *(int *)(temp_v2 + 0x20);
              temp_v9 = ifTouchGetSelectedRegion();
              temp_v8 = ifTouchGetSelectionMode();
              if ((temp_v8 != 1) && (temp_v8 = ifTouchGetSelectionMode(), temp_v8 != 2)) {
                temp_v8 = ifTouchGetSelectionMode();
                if (((temp_v8 == 6) && (*(short *)(temp_v2 + 100) <= temp_v9)) &&
                   (temp_v9 <= *(short *)(temp_v2 + temp_v10 * 2 + 0x62))) {
                  temp_v11 = 1;
                  *(int *)(temp_v2 + 0x18) = temp_v9 - *(short *)(temp_v2 + 100);
                }
              }
              else if ((*(short *)(temp_v2 + 100) <= temp_v9) &&
                      ((temp_v9 <= *(short *)(temp_v2 + temp_v10 * 2 + 0x62) &&
                       (temp_v9 = temp_v9 - *(short *)(temp_v2 + 100), *(int *)(temp_v2 + 0x18) = temp_v9,
                       temp_v9 != temp_v21)))) {
                eventQueueAddUniqueIfValid(0x100020d);
              }
              temp_v8 = padButtonRepeat(5);
              if (temp_v8 == 0) {
                temp_v8 = padButtonRepeat(6);
                if (temp_v8 == 0) {
                  temp_v8 = padButtonRepeat(0xe);
                  if (((temp_v8 == 0) || (temp_v8 = FUN_00163fd4(5), temp_v8 != 0)) ||
                     (temp_v8 = FUN_00163fd4(6), temp_v8 != 0)) {
                    temp_v8 = padButtonRepeat(0xf);
                    if (((temp_v8 == 0) || (temp_v8 = FUN_00163fd4(6), temp_v8 != 0)) ||
                       (temp_v8 = FUN_00163fd4(5), temp_v8 != 0)) {
                      if (*(char *)(temp_v2 + 0x95) == '\0') {
                        temp_v8 = 0;
                        FUN_001517b4(0,1);
                        if ((temp_v8 == 0 && !temp_v11) || (0 < *(int *)(temp_v2 + 0x70)))
                        goto LAB_0014d034;
                        *(unsigned char *)(temp_v2 + 0x30) = 0;
                        *(unsigned char *)(temp_v2 + 0x31) = 0;
                        eventQueueAddUniqueIfValid(0x1000227);
                        temp_v8 = 0;
                        if (temp_v8 < temp_v10) {
                          do {
                            ifTouchRegionRemove();
                            temp_v8 = temp_v8 + 1;
                          } while (temp_v8 < temp_v10);
                        }
                        if (*(char *)(temp_v2 + 0x2f) == '\0') {
                          temp_v6 = *(char *)(temp_v2 + 0x8e);
                          temp_v12 = temp_v6 == '\0';
                          if (temp_v12) {
                            temp_v6 = *(char *)(temp_v2 + 0x8f);
                          }
                          temp_v13 = temp_v12 && temp_v6 == '\0';
                          if (temp_v12 && temp_v6 == '\0') {
                            temp_v13 = *(char *)(temp_v2 + 0x90) == '\0';
                          }
                          if (((!temp_v13) || (*(char *)(temp_v2 + 0x192) != '\0')) &&
                             (temp_v4 = *(unsigned int *)(temp_v2 + 0xc), (temp_v4 & 8) != 0)) {
                            *(unsigned char *)(temp_v2 + 8) = 5;
                            *(unsigned int *)(temp_v2 + 0xc) = temp_v4 & 0xfffffff7;
                          }
                        }
                        temp_v12 = 1;
                        *(unsigned char *)(temp_v2 + 0x2f) = 0;
                      }
                      else {
LAB_0014d034:
                        if (*(char *)(temp_v2 + 0x30) != '\0') {
                          temp_v8 = 1;
                          FUN_001517b4();
                          if (temp_v8 != 0) {
                            if (*(char *)(temp_v2 + 0x31) == '\0') {
                              temp_v20 = 1;
                            }
                            else {
                              *(int *)(temp_v2 + 0x18) = temp_v10 - 1;
                              uiApplyIndexedPanelSpriteSizes(temp_v2);
                            }
                            *(unsigned char *)(temp_v2 + 0x30) = 0;
                            *(unsigned char *)(temp_v2 + 0x31) = 0;
                            eventQueueAddUniqueIfValid(0x100020f);
                            temp_v8 = 0;
                            if (temp_v8 < temp_v10) {
                              do {
                                ifTouchRegionRemove();
                                temp_v8 = temp_v8 + 1;
                              } while (temp_v8 < temp_v10);
                            }
                            if (*(char *)(temp_v2 + 0x2f) == '\0') {
                              temp_v6 = *(char *)(temp_v2 + 0x8e);
                              temp_v12 = temp_v6 == '\0';
                              if (temp_v12) {
                                temp_v6 = *(char *)(temp_v2 + 0x8f);
                              }
                              temp_v13 = temp_v12 && temp_v6 == '\0';
                              if (temp_v12 && temp_v6 == '\0') {
                                temp_v13 = *(char *)(temp_v2 + 0x90) == '\0';
                              }
                              if (((!temp_v13) || (*(char *)(temp_v2 + 0x192) != '\0')) &&
                                 (temp_v4 = *(unsigned int *)(temp_v2 + 0xc), (temp_v4 & 8) != 0)) {
                                *(unsigned char *)(temp_v2 + 8) = 5;
                                *(unsigned int *)(temp_v2 + 0xc) = temp_v4 & 0xfffffff7;
                              }
                            }
                            temp_v12 = 1;
                            *(unsigned char *)(temp_v2 + 0x2f) = 0;
                          }
                        }
                      }
                    }
                    else {
                      *(int *)(temp_v2 + 0x18) = *(int *)(temp_v2 + 0x18) + 1;
                      eventQueueAddUniqueIfValid(0x100020d);
                      *(unsigned int *)(temp_v2 + 0x70) = 0;
                    }
                  }
                  else {
                    *(int *)(temp_v2 + 0x18) = *(int *)(temp_v2 + 0x18) - 1;
                    eventQueueAddUniqueIfValid(0x100020d);
                    *(unsigned int *)(temp_v2 + 0x70) = 0;
                  }
                }
                else {
                  *(int *)(temp_v2 + 0x18) = *(int *)(temp_v2 + 0x18) + 1;
                  eventQueueAddUniqueIfValid(0x100020d);
                  *(unsigned int *)(temp_v2 + 0x70) = 0;
                }
              }
              else {
                *(int *)(temp_v2 + 0x18) = *(int *)(temp_v2 + 0x18) - 1;
                eventQueueAddUniqueIfValid(0x100020d);
                *(unsigned int *)(temp_v2 + 0x70) = 0;
              }
              temp_v8 = *(int *)(temp_v2 + 0x18);
              if (temp_v8 < 0) {
                temp_v8 = temp_v10 - 1;
                *(int *)(temp_v2 + 0x18) = temp_v8;
              }
              if (temp_v10 <= temp_v8) {
                *(unsigned int *)(temp_v2 + 0x18) = 0;
              }
            }
          }
          if (*(char *)(temp_v2 + 9) == '\x14') {
            temp_v10 = *(int *)(temp_v2 + 0x20);
            temp_v8 = ifTouchGetSelectedRegion();
            temp_v9 = ifTouchGetSelectionMode();
            if ((temp_v9 != 1) && (temp_v9 = ifTouchGetSelectionMode(), temp_v9 != 2)) {
              temp_v9 = ifTouchGetSelectionMode();
              if (((temp_v9 != 6) || (temp_v8 < *(short *)(temp_v2 + 100))) ||
                 (*(short *)(temp_v2 + temp_v10 * 2 + 0x62) < temp_v8)) goto LAB_0014d1a4;
              *(int *)(temp_v2 + 0x18) = temp_v8 - *(short *)(temp_v2 + 100);
            }
            else {
              if ((*(short *)(temp_v2 + 100) <= temp_v8) &&
                 (temp_v8 <= *(short *)(temp_v2 + temp_v10 * 2 + 0x62))) {
                *(int *)(temp_v2 + 0x18) = temp_v8 - *(short *)(temp_v2 + 100);
              }
LAB_0014d1a4:
              if (!temp_v11) goto LAB_0014d1e0;
            }
            *(unsigned char *)(temp_v2 + 0x30) = 0;
            *(unsigned char *)(temp_v2 + 0x31) = 0;
            eventQueueAddUniqueIfValid(0x1000227);
            temp_v8 = 0;
            if (temp_v8 < temp_v10) {
              do {
                ifTouchRegionRemove();
                temp_v8 = temp_v8 + 1;
              } while (temp_v8 < temp_v10);
            }
          }
          else {
LAB_0014d1e0:
            if (!temp_v12) {
              if (*(int *)(temp_v2 + 0x18) != temp_v21) {
                uiApplyIndexedPanelSpriteSizes(temp_v2);
              }
              break;
            }
          }
          if (temp_v20 != 0) {
            temp_v3 = 0xffffffff;
            *(unsigned int *)(temp_v2 + 0x18) = 0xffffffff;
          }
          else {
            temp_v3 = *(unsigned int *)(temp_v2 + 0x18);
          }
          *(unsigned int *)(temp_v2 + 0x1c) = temp_v3;
          temp_v8 = querySlotHasHandle();
          if (temp_v8 != 0) {
            workCommandRefreshActiveSlots();
          }
          temp_v4 = *(unsigned int *)(temp_v2 + 0xc);
          if ((temp_v4 & 8) != 0) {
            if (temp_v2 != 0) {
              temp_v4 = (unsigned int)*(unsigned char *)(temp_v2 + 8);
            }
            if (temp_v2 != 0 && temp_v4 != 0) {
              FUN_00165088(temp_v2,*(unsigned char *)(temp_v2 + 9));
              *(unsigned char *)(temp_v2 + 8) = 3;
              *(unsigned char *)(temp_v2 + 0x35) = 0;
            }
            temp_v8 = DAT_0057f58c;
            if ((*(char *)(DAT_0057f58c + 8) != '\x01' && DAT_0057f58c != 0) &&
                *(char *)(DAT_0057f58c + 8) != '\0') {
              FUN_00165088(DAT_0057f58c,*(unsigned char *)(DAT_0057f58c + 9));
              *(unsigned char *)(temp_v8 + 8) = 3;
              *(unsigned char *)(temp_v8 + 0x35) = 0;
            }
          }
        }
        else {
          FUN_00163aa4(temp_v2 + 0x3e4);
          temp_v8 = msgBoxFlagsTestAny(*(unsigned int *)(temp_v2 + 4),0x20);
          if ((temp_v8 != 0) && (temp_v8 = msgBoxFlagsTestAny(*(unsigned int *)(temp_v2 + 4),0x40), temp_v8 != 0)) {
            *(unsigned char *)(temp_v2 + 8) = 4;
            goto LAB_0014dec8;
          }
          if ((*(char *)(temp_v2 + 0x2c) != '\0') ||
             (temp_v8 = msgBoxFlagsTestAny(*(unsigned int *)(temp_v2 + 4),0x10), temp_v8 != 0)) {
            *(unsigned int *)(temp_v2 + 0x1c) = 0;
            if ((*(unsigned int *)(temp_v2 + 0xc) & 8) != 0) {
              if (temp_v2 != 0) {
                temp_v6 = *(char *)(temp_v2 + 8);
                goto joined_r0x0014cce4;
              }
            }
            else {
              *(unsigned char *)(temp_v2 + 0x35) = 1;
              *(unsigned char *)(temp_v2 + 8) = 0;
              msgBoxFlagsClear(*(unsigned int *)(temp_v2 + 4),0x20);
              msgBoxFlagsClear(*(unsigned int *)(temp_v2 + 4),0x40);
              msgBoxFlagsClearBit7(*(unsigned int *)(temp_v2 + 4));
            }
          }
        }
      }
      else if (*(char *)(temp_v2 + 0x5c) != '\0') {
        temp_v6 = *(char *)(temp_v2 + 0x5d) + '\x01';
        *(char *)(temp_v2 + 0x5d) = temp_v6;
        if ('\x05' < temp_v6) {
          *(unsigned char *)(temp_v2 + 0x5d) = 0;
        }
        pairSetFirstResetSecond(temp_v2 + *(short *)(temp_v2 + 0x56) * 0x8c + 0x844,
                     (int)*(char *)(temp_v2 + 0x5d) / 2 + 0x8b);
        temp_v0 = *(short *)(temp_v2 + 0x62);
        *(short *)(temp_v2 + 0x62) = temp_v0 + 1;
        if ((((unsigned char)((temp_v0 >= 0x1f) & ~(*(char *)(temp_v2 + 0x95) != '\0'))) || (DAT_005e204d != '\0')
            ) && ((*(unsigned int *)(temp_v2 + 0xc) & 8) != 0)) {
          if (DAT_005e204d != '\0') {
            DAT_005e204d = '\0';
            DAT_005e2040 = 0;
            DAT_005e204e = '\0';
          }
          if (temp_v2 != 0) {
            temp_v6 = *(char *)(temp_v2 + 8);
joined_r0x0014cce4:
            if (temp_v6 != '\0') goto LAB_0014dd84;
            goto LAB_0014dfb0;
          }
        }
      }
    }
    else {
      temp_v8 = 0;
      if (temp_v8 < *(int *)(temp_v2 + 0x24)) {
        do {
          temp_v9 = temp_v2 + temp_v8;
          if (*(char *)(temp_v9 + 0x37) != '\0') {
            temp_v6 = *(char *)(temp_v9 + 0x41) + '\x01';
            *(char *)(temp_v9 + 0x41) = temp_v6;
            if ('\x05' < temp_v6) {
              *(unsigned char *)(temp_v9 + 0x41) = 0;
            }
            pairSetFirstResetSecond(temp_v2 + temp_v8 * 0x8c + 0x588,(int)*(char *)(temp_v9 + 0x41) / 2 + 0x8b);
          }
          temp_v8 = temp_v8 + 1;
        } while (temp_v8 < *(int *)(temp_v2 + 0x24));
      }
      if (*(char *)(temp_v2 + 0x95) == '\0') {
        temp_v8 = 0;
        FUN_001517b4(0,1);
        if (temp_v8 == 0) {
          if (*(char *)(temp_v2 + 0x95) == '\0') {
            temp_v8 = 9;
            FUN_001517b4(9,2);
            if ((temp_v8 != 0) ||
               ((*(char *)(temp_v2 + 0x95) == '\0' && (temp_v8 = FUN_00163fd4(6), temp_v8 != 0))))
            goto LAB_0014cbbc;
          }
          goto LAB_0014cbac;
        }
      }
      else {
LAB_0014cbac:
        if (DAT_005e204d == '\0') break;
      }
LAB_0014cbbc:
      if ((*(unsigned int *)(temp_v2 + 0xc) & 8) != 0) {
        if (DAT_005e204d != '\0') {
          DAT_005e204d = '\0';
          DAT_005e2040 = 0;
          DAT_005e204e = '\0';
        }
        else {
          eventQueueAddUniqueIfValid(0x1000226);
        }
        if (temp_v2 != 0) {
          if (*(char *)(temp_v2 + 8) != '\0') {
            FUN_00165088(temp_v2,*(unsigned char *)(temp_v2 + 9));
            *(unsigned char *)(temp_v2 + 8) = 3;
            goto LAB_0014dd98;
          }
          goto LAB_0014dfb0;
        }
      }
    }
    break;
  case 2:
    temp_v6 = *(char *)(temp_v2 + 9);
    if (temp_v6 != '\f') {
      if (temp_v6 != '\r') {
        if (temp_v6 != '\v') {
          if (((!(temp_v6 == '\x02' || temp_v6 == '\x03')) && (!(temp_v6 == '\x04' || temp_v6 == '\x05')))
             && (!((temp_v6 == '\x11' || temp_v6 == '\x12') || temp_v6 == '\x13'))) {
            if (temp_v6 != '\x14') {
              if ((temp_v6 == '\a' || temp_v6 == '\b') || temp_v6 == '\t') {
                FUN_00163aa4(temp_v2 + 0x4fc);
              }
              temp_v8 = FUN_00163aa4(temp_v2 + 0x1b4);
              if (temp_v8 != 0) goto LAB_0014d428;
            }
            else {
              FUN_00167458(temp_v2 + 0x1b4,0);
              if (*(char *)(temp_v2 + 0x23e) != '\0') {
                *(unsigned char *)(temp_v2 + 8) = 1;
                temp_v1 = FUN_001643b4(0x2f,0x98);
                *(unsigned short *)(temp_v2 + 100) = temp_v1;
                temp_v1 = FUN_001643b4(0x2f,0x99);
                *(unsigned short *)(temp_v2 + 0x66) = temp_v1;
                *(unsigned int *)(temp_v2 + 0x70) = 0;
              }
            }
          }
          else {
            FUN_00163aa4(temp_v2 + 0x2cc);
            temp_v8 = FUN_00163aa4(temp_v2 + 0x1b4);
            if ((temp_v8 != 0) && (temp_v8 = FUN_00163aa4(temp_v2 + 0x240), temp_v8 != 0)) {
              temp_v6 = *(char *)(temp_v2 + 0x356);
              goto joined_r0x0014dea8;
            }
          }
          break;
        }
        FUN_00163aa4(DAT_0057f58c + 0x3e4);
        temp_v8 = 0;
        FUN_001517b4(0,1);
        if (temp_v8 == 0) {
          temp_v8 = 9;
          FUN_001517b4(9,2);
          if (((temp_v8 != 0) || (temp_v8 = FUN_00163fd4(6), temp_v8 != 0)) || (DAT_005e204c != '\0'))
          goto LAB_0014d584;
LAB_0014d5b8:
          if (*(char *)(temp_v2 + 0x6d) == '\0') goto LAB_0014d5c4;
        }
        else {
LAB_0014d584:
          if (*(char *)(temp_v2 + 0x6d) != '\0') {
            *(unsigned char *)(temp_v2 + 0x6d) = 0;
            *(unsigned char *)(DAT_0057f58c + 0x6d) = 0;
            temp_v1 = ifTouchGetButtonHelpValue();
            *(unsigned short *)(temp_v2 + 0x19c6) = temp_v1;
            if (*(char *)(temp_v2 + 9) == '\v') {
              eventQueueAddUniqueIfValid(0x1000221);
            }
            goto LAB_0014d5b8;
          }
LAB_0014d5c4:
          FUN_00167458(temp_v2 + 0x1b4,0);
          FUN_00167458(temp_v2 + 0x358,0);
          if (*(char *)(temp_v2 + 9) == '\v') {
            temp_v0 = *(short *)(temp_v2 + 0x19c6);
            if (temp_v0 != 0xdf) {
              if (temp_v0 != 0x92) {
                if (temp_v0 == 0xa2) {
                  temp_v3 = 0xa3;
                  sysPlaySe(temp_v3);
                }
                else if (temp_v0 != 0xab) {
                  if (!((temp_v0 == 0xcb || temp_v0 == 0xcc) || temp_v0 == 0xcd)) {
                    if (*(char *)(temp_v2 + 0x30) != '\0') {
                      if (*(char *)(temp_v2 + 0x31) != '\0') {
                        if (*(char *)(temp_v2 + 0x32) != '\0') {
                          temp_v3 = 0x9f;
                        }
                        else {
                          temp_v3 = 0x9c;
                        }
                      }
                      else if (*(char *)(temp_v2 + 0x33) == '\0') {
                        temp_v3 = 0x9e;
                      }
                      else {
                        temp_v3 = 0xcf;
                      }
                    }
                    else {
                      temp_v8 = aocJobIsValid();
                      if (((((temp_v8 == 0) && (temp_v8 = lmapMainIsRunning(), temp_v8 == 0)) &&
                           (temp_v8 = mapMainIsBusy(), temp_v8 == 0)) &&
                          (temp_v8 = QuestCenterMode_IsBusy(), temp_v8 == 0)) ||
                         ((temp_v8 = campIsState85(), temp_v8 != 0 ||
                          (temp_v8 = engineCleanupIsDone(), temp_v8 == 0)))) {
                        temp_v3 = 0x9d;
                      }
                      else {
                        temp_v3 = 0xd4;
                      }
                    }
                    sysPlaySe(temp_v3);
                  }
                }
                else {
                  if (*(char *)(temp_v2 + 0x30) == '\0') {
                    temp_v3 = 0xad;
                  }
                  else {
                    temp_v3 = 0xac;
                  }
                  sysPlaySe(temp_v3);
                }
              }
              else {
                if (*(char *)(temp_v2 + 0x30) == '\0') {
                  temp_v3 = 0x94;
                }
                else if (*(char *)(temp_v2 + 0x31) == '\0') {
                  temp_v3 = 0x95;
                }
                else {
                  temp_v3 = 0x93;
                }
                sysPlaySe(temp_v3);
              }
            }
            else if (*(char *)(temp_v2 + 0x30) != '\0') {
              if (*(char *)(temp_v2 + 0x31) == '\0') {
                temp_v3 = 0x9e;
              }
              else {
                temp_v3 = 0x9f;
              }
              sysPlaySe(temp_v3);
            }
            else {
              sysPlaySe(0x9d);
            }
          }
        }
        if ((*(char *)(temp_v2 + 0x23e) != '\0') && (*(char *)(temp_v2 + 0x3e2) != '\0')) {
          *(unsigned char *)(temp_v2 + 8) = 1;
          if (*(char *)(temp_v2 + 0x6c) == '\0') {
            *(unsigned int *)(temp_v2 + 0x70) = 0;
          }
          else {
            *(unsigned int *)(temp_v2 + 0x70) = 10;
          }
          temp_v8 = *(int *)(temp_v2 + 0x20);
          if (temp_v8 != 2) {
            if (temp_v8 != 3) {
              if (temp_v8 != 4) goto LAB_0014dec8;
              temp_v1 = FUN_001643b4(8,0xb8);
              *(unsigned short *)(temp_v2 + 100) = temp_v1;
              temp_v1 = FUN_001643b4(8,0xb9);
              *(unsigned short *)(temp_v2 + 0x66) = temp_v1;
              temp_v1 = FUN_001643b4(8,0xba);
              *(unsigned short *)(temp_v2 + 0x68) = temp_v1;
              temp_v1 = FUN_001643b4(8,0xbb);
              *(unsigned short *)(temp_v2 + 0x6a) = temp_v1;
            }
            else {
              temp_v1 = FUN_001643b4(8,0xa2);
              *(unsigned short *)(temp_v2 + 100) = temp_v1;
              temp_v1 = FUN_001643b4(8,0xa3);
              *(unsigned short *)(temp_v2 + 0x66) = temp_v1;
              temp_v1 = FUN_001643b4(8,0xa4);
              *(unsigned short *)(temp_v2 + 0x68) = temp_v1;
            }
          }
          else {
            temp_v1 = FUN_001643b4(8,0xac);
            *(unsigned short *)(temp_v2 + 100) = temp_v1;
            temp_v1 = FUN_001643b4(8,0xad);
            *(unsigned short *)(temp_v2 + 0x66) = temp_v1;
          }
        }
        break;
      }
      if (*(short *)(temp_v2 + 0x58) < 0xffff) {
        *(short *)(temp_v2 + 0x58) = *(short *)(temp_v2 + 0x58) + 1;
      }
      if ((*(char *)(temp_v2 + 0x5c) == '\0') &&
         ((int)*(char *)(temp_v2 + 0x5e) <= (int)*(short *)(temp_v2 + 0x58))) {
        *(unsigned char *)(temp_v2 + 0x5c) = 1;
      }
      if (*(char *)(temp_v2 + 0x5c) != '\0') {
        temp_v8 = temp_v2 + *(short *)(temp_v2 + 0x56) * 0x8c;
        FUN_00163aa4(temp_v8 + 0x844);
        if ((*(unsigned char *)(temp_v8 + 0x8cc) & *(unsigned char *)(temp_v8 + 0x8cb)) != 0) {
          temp_v6 = *(char *)(temp_v2 + 0x5d) + '\x01';
          *(char *)(temp_v2 + 0x5d) = temp_v6;
          if ('\x05' < temp_v6) {
            *(unsigned char *)(temp_v2 + 0x5d) = 0;
          }
          pairSetFirstResetSecond(temp_v8 + 0x844,(int)*(char *)(temp_v2 + 0x5d) / 2 + 0x8b);
          goto LAB_0014d428;
        }
        break;
      }
    }
    else {
      if (*(int *)(temp_v2 + 0x28) < 0xffff) {
        *(int *)(temp_v2 + 0x28) = *(int *)(temp_v2 + 0x28) + 1;
      }
      temp_v8 = *(int *)(temp_v2 + 0x24);
      if (0 < temp_v8) {
        temp_v9 = 0;
        do {
          temp_v10 = temp_v2 + temp_v9;
          if ((*(char *)(temp_v10 + 0x37) == '\0') &&
             ((int)*(char *)(temp_v10 + 0x46) <= *(int *)(temp_v2 + 0x28))) {
            *(unsigned char *)(temp_v10 + 0x37) = 1;
          }
          temp_v8 = temp_v8 - 1;
          temp_v9 = temp_v9 + 1;
        } while (temp_v8 != 0);
      }
      temp_v11 = 1;
      temp_v8 = 0;
      if (0 < *(int *)(temp_v2 + 0x24)) {
        do {
          temp_v9 = temp_v2 + temp_v8;
          if (*(char *)(temp_v9 + 0x37) != '\0') {
            temp_v10 = temp_v2 + temp_v8 * 0x8c;
            temp_v20 = temp_v10 + 0x588;
            temp_v21 = temp_v20;
            FUN_00163aa4();
            if ((*(unsigned char *)(temp_v20 + 0x88) & *(unsigned char *)(temp_v10 + 0x60f)) != 0) {
              temp_v6 = *(char *)(temp_v9 + 0x41) + '\x01';
              *(char *)(temp_v9 + 0x41) = temp_v6;
              if ('\x05' < temp_v6) {
                *(unsigned char *)(temp_v9 + 0x41) = 0;
              }
              pairSetFirstResetSecond(temp_v21,(int)*(char *)(temp_v9 + 0x41) / 2 + 0x8b);
            }
            else {
              temp_v11 = 0;
            }
          }
          else {
            temp_v11 = 0;
          }
          temp_v8 = temp_v8 + 1;
        } while (temp_v8 < *(int *)(temp_v2 + 0x24));
        if (!temp_v11) break;
      }
LAB_0014d428:
      *(unsigned char *)(temp_v2 + 8) = 1;
    }
    goto LAB_0014dec8;
  case 3:
    temp_v6 = *(char *)(temp_v2 + 9);
    if (temp_v6 != '\f') {
      if (temp_v6 != '\r') {
        if (temp_v6 != '\v') {
          if (temp_v6 != '\x14') {
            if (((!(temp_v6 == '\x02' || temp_v6 == '\x03')) && (!(temp_v6 == '\x04' || temp_v6 == '\x05')))
               && (!((temp_v6 == '\x11' || temp_v6 == '\x12') || temp_v6 == '\x13'))) {
              if (((temp_v6 == '\a' || temp_v6 == '\b') || temp_v6 == '\t') &&
                 (FUN_00163aa4(temp_v2 + 0x4fc), *(short *)(temp_v2 + 0x19c6) != 0)) {
                if (*(char *)(temp_v2 + 0x19da) != '\0') {
                  sysPlaySe();
                  temp_v4 = 0;
                  do {
                    FUN_00183f58(temp_v4 & 0xff,*(unsigned char *)(temp_v2 + temp_v4 + 0x19c8),
                                 *(unsigned short *)(temp_v2 + temp_v4 * 2 + 0x19ce),1);
                    temp_v4 = temp_v4 + 1;
                  } while ((int)temp_v4 < 6);
                  *(unsigned char *)(temp_v2 + 0x19da) = 0;
                }
                *(unsigned short *)(temp_v2 + 0x19c6) = 0;
              }
              temp_v8 = FUN_00163aa4(temp_v2 + 0x1b4);
              if (temp_v8 != 0) {
                *(unsigned char *)(temp_v2 + 8) = 0;
                msgBoxFlagsClearBit7(*(unsigned int *)(temp_v2 + 4));
                msgBoxFlagsClear(*(unsigned int *)(temp_v2 + 4),0x20);
                msgBoxFlagsClear(*(unsigned int *)(temp_v2 + 4),0x40);
              }
            }
            else {
              FUN_00163aa4(temp_v2 + 0x1b4);
              FUN_00163aa4(temp_v2 + 0x2cc);
              if ((*(char *)(temp_v2 + 0x23e) != '\0') && (*(char *)(temp_v2 + 0x356) != '\0')) {
                *(unsigned char *)(temp_v2 + 8) = 0;
                msgBoxFlagsClearBit7(*(unsigned int *)(temp_v2 + 4));
                msgBoxFlagsClear(*(unsigned int *)(temp_v2 + 4),0x20);
                msgBoxFlagsClear(*(unsigned int *)(temp_v2 + 4),0x40);
              }
            }
          }
          else {
            FUN_00163aa4(temp_v2 + 0x1b4);
            if (*(char *)(temp_v2 + 0x23e) != '\0') {
              *(unsigned char *)(temp_v2 + 8) = 0;
              msgBoxFlagsClearBit7(*(unsigned int *)(temp_v2 + 4));
              *(unsigned short *)(temp_v2 + 0x19c6) = 0;
              FUN_00169548(0);
            }
          }
        }
        else {
          FUN_00163aa4(temp_v2 + 0x1b4);
          FUN_00163aa4(temp_v2 + 0x358);
          if ((*(char *)(temp_v2 + 0x23e) != '\0') && (*(char *)(temp_v2 + 0x3e2) != '\0')) {
            *(unsigned char *)(temp_v2 + 8) = 0;
            msgBoxFlagsClearBit7(*(unsigned int *)(temp_v2 + 4));
            if (*(short *)(temp_v2 + 0x19c6) != 0) {
              if (*(char *)(temp_v2 + 0x19da) != '\0') {
                if (*(short *)(temp_v2 + 0x19c6) != 0xa2) {
                  sysPlaySe();
                  temp_v4 = 0;
                  do {
                    FUN_00183f58(temp_v4 & 0xff,*(unsigned char *)(temp_v2 + temp_v4 + 0x19c8),
                                 *(unsigned short *)(temp_v2 + temp_v4 * 2 + 0x19ce),1);
                    temp_v4 = temp_v4 + 1;
                  } while ((int)temp_v4 < 6);
                }
                else {
                  FUN_00168980(0xa2);
                }
              }
              *(unsigned short *)(temp_v2 + 0x19c6) = 0;
            }
          }
        }
      }
      else {
        temp_v8 = temp_v2 + *(short *)(temp_v2 + 0x56) * 0x8c;
        FUN_00163aa4(temp_v8 + 0x844);
        if (*(char *)(temp_v8 + 0x8cb) != '\0') {
          *(unsigned char *)(temp_v2 + 0x5c) = 0;
          *(unsigned char *)(temp_v2 + 8) = 0;
          msgBoxFlagsClearBit7(*(unsigned int *)(temp_v2 + 4));
        }
      }
    }
    else {
      temp_v11 = 1;
      temp_v8 = 0;
      if (0 < *(int *)(temp_v2 + 0x24)) {
        do {
          temp_v9 = temp_v2 + temp_v8 * 0x8c;
          FUN_00163aa4(temp_v9 + 0x588);
          if (*(char *)(temp_v9 + 0x60f) != '\0') {
            *(unsigned char *)(temp_v2 + temp_v8 + 0x37) = 0;
          }
          else {
            temp_v11 = 0;
          }
          temp_v8 = temp_v8 + 1;
        } while (temp_v8 < *(int *)(temp_v2 + 0x24));
        if (!temp_v11) break;
      }
      *(unsigned char *)(temp_v2 + 8) = 0;
      msgBoxFlagsClearBit7(*(unsigned int *)(temp_v2 + 4));
    }
    break;
  case 4:
    temp_v14 = *(float *)(temp_v2 + 0x19e0) + temp_v15;
    *(float *)(temp_v2 + 0x19e0) = temp_v14;
    if ((int)temp_v14 < 0x41200000) {
      temp_v18 = temp_v17;
      mathInterpolateTimed(10,(int)temp_v14);
      *(float *)(temp_v2 + 0x19dc) = temp_v17;
      temp_v16 = temp_v15;
      temp_v17 = temp_v18;
    }
    else {
      temp_v16 = temp_v15;
      if ((int)temp_v14 >= 0x41a00001) {
        *(float *)(temp_v2 + 0x19e0) = temp_v17;
      }
      else {
        mathInterpolateTimed(10,(int)(temp_v14 - 10.0f));
        *(float *)(temp_v2 + 0x19dc) = temp_v15;
      }
    }
    temp_v3 = 0xc0000000;
    temp_v8 = (int)*(float *)(temp_v2 + 0x19e0) % 10;
    if (temp_v8 < 5) {
      temp_v14 = temp_v17;
      mathInterpolateTimed(5);
      *(float *)(temp_v2 + 0x19e4) = temp_v17;
      temp_v15 = temp_v16;
      temp_v17 = temp_v14;
    }
    else if (temp_v8 >= 10) {
      *(float *)(temp_v2 + 0x19e4) = temp_v17;
      temp_v15 = temp_v16;
    }
    else {
      mathInterpolateTimed(5,temp_v8 - 5);
      *(unsigned int *)(temp_v2 + 0x19e4) = temp_v3;
      temp_v15 = temp_v16;
    }
    if ((DAT_0057f590 == 0) || (*(char *)(DAT_0057f590 + 8) != '\x03')) break;
    *(float *)(temp_v2 + 0x19dc) = temp_v17;
    *(float *)(temp_v2 + 0x19e0) = temp_v17;
    *(float *)(temp_v2 + 0x19e4) = temp_v17;
    *(unsigned int *)(temp_v2 + 0x1c) = 0;
    if ((*(unsigned int *)(temp_v2 + 0xc) & 8) == 0) {
      *(unsigned char *)(temp_v2 + 0x35) = 1;
      *(unsigned char *)(temp_v2 + 8) = 0;
      msgBoxFlagsClearBit7(*(unsigned int *)(temp_v2 + 4));
      msgBoxFlagsClear(*(unsigned int *)(temp_v2 + 4),0x20);
      msgBoxFlagsClear(*(unsigned int *)(temp_v2 + 4),0x40);
      break;
    }
    if (temp_v2 == 0) break;
    if (*(char *)(temp_v2 + 8) == '\0') goto LAB_0014dfb0;
LAB_0014dd84:
    FUN_00165088(temp_v2,*(unsigned char *)(temp_v2 + 9));
    *(unsigned char *)(temp_v2 + 8) = 3;
LAB_0014dd98:
    *(unsigned char *)(temp_v2 + 0x35) = 0;
    goto LAB_0014dec8;
  case 6:
    FUN_00169704();
    if ((temp_v4 != 0) && (temp_v8 = FUN_00163e84(0), temp_v8 != 0)) {
LAB_0014d2c4:
      *(unsigned char *)(temp_v2 + 8) = 2;
      goto LAB_0014dec8;
    }
    break;
  case 7:
    if ((*(char *)(temp_v2 + 9) == '\v') && (*(char *)(DAT_0057f590 + 0x6d) == '\0')) {
      FUN_00163aa4(temp_v2 + 0x1b4);
      FUN_00163aa4(temp_v2 + 0x358);
      FUN_00163aa4(temp_v2 + 0x470);
      FUN_00163aa4(temp_v2 + 0x18ac);
      break;
    }
    goto LAB_0014dfb0;
  case 8:
    if (*(char *)(temp_v2 + 9) != '\v') goto LAB_0014dfb0;
    if (*(char *)(DAT_0057f590 + 0x6d) != '\0') goto LAB_0014d2c4;
    FUN_00167458(temp_v2 + 0x1b4,0);
    FUN_00167458(temp_v2 + 0x358,0);
    FUN_00167458(temp_v2 + 0x470,0);
    FUN_00167458(temp_v2 + 0x18ac,0);
    if (((*(char *)(temp_v2 + 0x23e) != '\0') && (*(char *)(temp_v2 + 0x3e2) != '\0')) &&
       (*(char *)(temp_v2 + 0x1936) != '\0')) {
      temp_v6 = *(char *)(temp_v2 + 0x4fa);
joined_r0x0014dea8:
      if (temp_v6 != '\0') goto LAB_0014d428;
    }
  }
  temp_v6 = *(char *)(temp_v2 + 8);
  if ((temp_v6 == '\x01' || temp_v6 == '\x04') || (temp_v6 == '\x02' || temp_v6 == '\x03')) {
LAB_0014dec8:
    if (*(char *)(temp_v2 + 0x95) != '\0') {
      temp_v8 = 7;
      FUN_001517b4(7,2);
      if (temp_v8 == 0) {
        *(unsigned char *)(temp_v2 + 0x95) = 0;
        if ((*(unsigned int *)(temp_v2 + 0xc) & 0x20) != 0) goto LAB_0014dfd4;
        msgBoxFlagsClearBit7(*(unsigned int *)(temp_v2 + 4));
      }
    }
    else {
      temp_v8 = ifTouchGetButtonHelpValue();
      if ((temp_v8 != 0x53) && (g_messageMain != '\0')) {
        temp_v8 = 7;
        FUN_001517b4(7,2);
        if (temp_v8 != 0) {
          temp_v8 = msgBoxIsState2(*(unsigned int *)(temp_v2 + 4));
          if (temp_v8 != 0) {
            *(unsigned char *)(temp_v2 + 0x95) = 2;
            msgBoxFlagsSetBit7(*(unsigned int *)(temp_v2 + 4));
          }
          else {
            *(unsigned char *)(temp_v2 + 0x95) = 1;
            msgBoxFlagsSetBit7(*(unsigned int *)(temp_v2 + 4));
          }
        }
      }
    }
  }
LAB_0014dfb0:
  if ((*(char *)(temp_v2 + 0x95) != '\0') &&
     (temp_v8 = msgBoxFlagsTestAny(*(unsigned int *)(temp_v2 + 4),0x80), temp_v8 == 0)) {
    msgBoxFlagsSetBit7(*(unsigned int *)(temp_v2 + 4));
  }
LAB_0014dfd4:
  if (temp_v2 == 0) {
    return 0;
  }
  if (*(char *)(temp_v2 + 8) != '\x01') {
    return 0;
  }
  FUN_001624b8(*(unsigned int *)(temp_v2 + 4));
  if (*(int *)(temp_v2 + 4) != 0) {
    if (DAT_005e204e == '\0') {
      FUN_00167400();
    }
    if (*(char *)(temp_v2 + 0x95) != '\0') {
      DAT_005e204d = '\0';
      DAT_005e2040 = 0;
      DAT_005e204e = '\0';
    }
    if ((DAT_005e204c == '\0') || (*(char *)(*(int *)(temp_v2 + 4) + 0x44) != '\x02')) {
      DAT_005e204d = '\0';
      DAT_005e2040 = 0;
      DAT_005e204e = '\0';
    }
    else {
      temp_v8 = querySlotHasHandle();
      if (temp_v8 == 0) {
        if (DAT_005e204e == '\0') {
          temp_v8 = 0x69;
        }
        else {
          temp_v8 = 8;
        }
        if (DAT_005e2040 < temp_v8) {
          DAT_005e2040 = DAT_005e2040 + 1;
        }
        else {
          temp_v6 = *(char *)(temp_v2 + 9);
          if ((temp_v6 != '\a' && temp_v6 != '\b') && (temp_v6 != '\t')) {
            DAT_005e204d = '\x01';
            DAT_005e2040 = 0;
            DAT_005e204e = '\0';
          }
        }
      }
    }
  }
  if (DAT_005e204c == '\0') {
    iRam005e2044 = 0;
    DAT_005e2048 = temp_v17;
    iRam005e2050 = 0;
    DAT_005e2054 = temp_v17;
    return 0;
  }
  temp_v14 = temp_v15;
  if (iRam005e2050 >= 0x1f) {
    DAT_005e2054 = 0.3f;
  }
  else {
    mathInterpolateTimed(0x1e);
    DAT_005e2054 = temp_v15;
  }
  iRam005e2050 = iRam005e2050 + 1;
  if (iRam005e2044 < 0x29) {
    mathInterpolateTimed(0x28);
    DAT_005e2048 = temp_v14;
  }
  else {
    if (iRam005e2044 >= 0x3d) {
      iRam005e2044 = 0;
      return 0;
    }
    mathInterpolateTimed(0x14,iRam005e2044 - 0x29);
    DAT_005e2048 = temp_v17;
  }
  if (iRam005e2044 >= 0x3c) {
    iRam005e2044 = 0;
    return 0;
  }
  iRam005e2044 = iRam005e2044 + 1;
  return 0;
LAB_0014c97c:
  do {
    temp_v9 = temp_v8 * -3 + *piVar14;
    if (temp_v9 < 0) {
      temp_v9 = 0;
    }
    __aeabi_idivmod(temp_v9,temp_v23[3]);
    temp_v9 = temp_v20;
    temp_v10 = temp_v7;
    temp_v14 = temp_v17;
    if (temp_v7 >= temp_v23[0]) {
      temp_v14 = temp_v15;
      if ((temp_v23[1] <= temp_v7) && (temp_v14 = temp_v17, temp_v7 < temp_v23[2])) {
        temp_v10 = temp_v7 - temp_v23[1];
        temp_v9 = temp_v22;
        temp_v14 = temp_v15;
        mathInterpolateTimed(temp_v9,temp_v10);
      }
    }
    else {
      mathInterpolateTimed(temp_v9,temp_v10);
    }
    temp_v9 = temp_v8 * 4;
    temp_v8 = temp_v8 + 1;
    *(float *)(temp_v2 + temp_v9 + 0x1a1c) = temp_v14;
  } while (temp_v8 < 3);
  goto LAB_0014c9fc;
}

} /* extern "C" */
