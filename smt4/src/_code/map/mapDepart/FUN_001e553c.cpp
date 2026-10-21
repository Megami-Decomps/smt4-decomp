/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e553c` (_code @ 0x1e553c, 0x910 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int mapDepartSetTarget(...);
int fileSlotFree(...);
int asdTMTexTableReleaseNode(...);

int FUN_001f8da8(int, unsigned int *, unsigned char *, int *);
int FUN_0021dea8(unsigned int, int, int);
int FUN_0025b670(void);
int FUN_00273358(...);
int navigationResetTimer(void);
int gameFlagSetValue(int, int);
int FUN_002897f0(int, unsigned char *);
int messageSlotSet(int);
int FUN_00291e40(int);
int scrScriptProcessStartEntry(...);
int FUN_00297060(...);
int fileSlotLoad(int);
int FUN_0029be5c(...);
int scrScriptProcessDestroy(...);
int buttonHelpSetPresetDefault(void);
int asdMemFree(...);
int jyoucyuGetTableEntry(int);
int FUN_002c58c8(int, int);
int FUN_002dfe08(unsigned int);
int FUN_002f364c(...);

/* stack frame of void: 12 slot(s), 48 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} void_stack;

extern unsigned char LAB_001e5990; /* 0x1e5990 */
extern unsigned char LAB_001e59a4; /* 0x1e59a4 */
extern unsigned char LAB_001e59b8; /* 0x1e59b8 */
extern unsigned char LAB_001e5d3c; /* 0x1e5d3c */
extern unsigned char LAB_001e5d54; /* 0x1e5d54 */
extern int DAT_004474f4; /* 0x4474f4 */
extern int g_mapDepart; /* 0x4475b8 */
extern int DAT_004475bc; /* 0x4475bc */
extern int g_gameState; /* 0x49f91c */
extern unsigned int DAT_0049f9c0; /* 0x49f9c0 */
extern int DAT_0049f9c4; /* 0x49f9c4 */
extern unsigned int DAT_0049fd38; /* 0x49fd38 */
extern unsigned char DAT_0049fd78; /* 0x49fd78 */
extern int DAT_0049fd88; /* 0x49fd88 */
extern short DAT_0049fddc; /* 0x49fddc */
extern short DAT_0049fdde; /* 0x49fdde */

extern int FUN_0019e0c0(unsigned int);
/* Supplied declaration required: FUN_001f8da8. */
/* Supplied declaration required: FUN_0021dea8. */
/* Supplied declaration required: FUN_0025b670. */
extern int FUN_0025b6e8(unsigned int);
/* Supplied declaration required: FUN_00273358. */
/* Supplied declaration required: navigationResetTimer. */
extern int inputIsQuestMenuPressed(void);
/* Supplied declaration required: mapDepartSetTarget. */
extern int FUN_0027ee9c(void);
/* Supplied declaration required: gameFlagSetValue. */
/* Supplied declaration required: FUN_002897f0. */
/* Supplied declaration required: messageSlotSet. */
extern unsigned int tableGroupFindEntryIndex(unsigned int, unsigned char *);
/* Supplied declaration required: FUN_00291e40. */
/* Supplied declaration required: scrScriptProcessStartEntry. */
/* Supplied declaration required: FUN_00297060. */
extern int FUN_002973d8(void);
/* Supplied declaration required: fileSlotLoad. */
/* Supplied declaration required: FUN_0029be5c. */
/* Supplied declaration required: fileSlotFree. */
/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: asdTMTexTableReleaseNode. */
/* Supplied declaration required: buttonHelpSetPresetDefault. */
extern int gameFlagIsSet(unsigned int);
extern int FUN_002c1c0c(unsigned int, unsigned int);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: jyoucyuGetTableEntry. */
/* Supplied declaration required: FUN_002c58c8. */
extern unsigned int FUN_002c5c04(unsigned char *);
/* Supplied declaration required: FUN_002dfe08. */
/* Supplied declaration required: FUN_002f364c. */


unsigned int FUN_001e553c(void)

{
/* irregular: 1 goto(s); 23 native warning(s); review required */
  unsigned char temp_v0;
  short temp_v1;
  int temp_v2;
  short *psVar4;
  unsigned int temp_v3;
  int temp_v4;
  short *psVar7;
  int temp_v5;
  unsigned int *puVar9;
  int temp_v6;
  short temp_v7;
  unsigned int *puVar12;
  unsigned char *puVar13;
  short temp_v8 [16];
  int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  
  temp_v2 = g_mapDepart;
  switch(*(unsigned int *)(g_mapDepart + 0x18)) {
  case 0:
    FUN_002c58c8(10,4);
    temp_v4 = FUN_002c1c0c(10,4);
    *(int *)(temp_v2 + 0x7c) = temp_v4;
    *(unsigned int *)(temp_v4 + 0x3c) = 1;
    *(unsigned int *)(*(int *)(temp_v2 + 0x7c) + 0x40) = 1;
    *(unsigned int *)(*(int *)(temp_v2 + 0x7c) + 0x38) = 0;
    if (*(int *)(temp_v2 + 0xc) != 0) {
      *(unsigned int *)(temp_v2 + 0x18) = 1;
      *(unsigned int *)(temp_v2 + 0x1c) = 0;
    }
    else {
      fileSlotLoad(0x21);
      *(unsigned int *)(temp_v2 + 0x1c) = 0;
      switch(DAT_0049f9c0) {
      default:
        *(unsigned int *)(temp_v2 + 0x18) = 0xb;
        return 0;
      case 1:
      case 2:
      case 3:
        temp_v3 = 9;
        break;
      case 4:
        temp_v4 = gameFlagIsSet(99);
        if (temp_v4 == 0) {
          temp_v3 = 4;
        }
        else {
          temp_v3 = 5;
        }
        break;
      case 5:
        temp_v3 = 7;
      }
      *(unsigned int *)(temp_v2 + 0x18) = temp_v3;
    }
    break;
  case 1:
    temp_v4 = *(int *)(g_mapDepart + 0x1c) + 1;
    *(int *)(g_mapDepart + 0x1c) = temp_v4;
    if (temp_v4 < 0xb) {
      return 0;
    }
    temp_v4 = 5;
    *(int *)(temp_v2 + 0x18) = temp_v4;
    *(unsigned int *)(temp_v2 + 0x1c) = 0;
    break;
  case 4:
    if (*(int *)(g_mapDepart + 0x1c) != 0) {
      temp_v4 = FUN_0019e0c0(*(unsigned int *)(g_mapDepart + 0x60));
      if (temp_v4 == 2) {
        if (*(int *)(temp_v2 + 100) != 0) {
          gameFlagSetValue(*(int *)(temp_v2 + 100),1);
        }
        messageSlotSet(0);
        scrScriptProcessDestroy(*(unsigned int *)(temp_v2 + 0x60));
        asdMemFree(*(unsigned int *)(temp_v2 + 0x58));
        asdMemFree(*(unsigned int *)(temp_v2 + 0x5c));
        *(unsigned int *)(temp_v2 + 0x60) = 0;
        *(unsigned int *)(temp_v2 + 0x58) = 0;
        temp_v4 = 5;
        *(unsigned int *)(temp_v2 + 0x5c) = 0;
        *(int *)(temp_v2 + 0x18) = temp_v4;
        *(unsigned int *)(temp_v2 + 0x1c) = 0;
        break;
      }
    }
    else {
      buttonHelpSetPresetDefault();
      temp_v3 = FUN_002c5c04(&LAB_001e5990);
      *(unsigned int *)(temp_v2 + 0x58) = temp_v3;
      temp_v3 = FUN_002c5c04(&LAB_001e59a4);
      *(unsigned int *)(temp_v2 + 0x5c) = temp_v3;
      temp_v4 = *(int *)(temp_v2 + 0x58);
      FUN_00297060(temp_v4,temp_v3);
      *(int *)(temp_v2 + 0x60) = temp_v4;
      *(unsigned int *)(temp_v4 + 0x108) = 2;
      temp_v3 = 0x47;
      FUN_002897f0(0x47,&LAB_001e59b8);
      *(unsigned int *)(temp_v2 + 100) = temp_v3;
      temp_v3 = tableGroupFindEntryIndex(*(unsigned int *)(temp_v2 + 0x58),&LAB_001e59b8);
      scrScriptProcessStartEntry(*(unsigned int *)(temp_v2 + 0x60),temp_v3);
      navigationResetTimer();
    }
    temp_v4 = *(int *)(temp_v2 + 0x1c);
    *(int *)(temp_v2 + 0x1c) = temp_v4 + 1;
    break;
  case 5:
    temp_v4 = *(int *)(g_mapDepart + 0x1c) + 1;
    *(int *)(g_mapDepart + 0x1c) = temp_v4;
    if (temp_v4 == 1) {
      if (*(int *)(temp_v2 + 0xc) != 0) {
        DAT_0049fd38 = *(unsigned int *)(temp_v2 + 0x14);
        temp_v4 = FUN_0025b6e8(*(unsigned int *)(temp_v2 + 0x14));
        DAT_0049fd78 = temp_v4 == 0;
        DAT_0049fd88 = 1;
      }
      else {
        temp_v4 = DAT_0049f9c4;
        FUN_0025b670();
        FUN_001f8da8((int)*(short *)(temp_v4 + 0x24),&DAT_0049fd38,&DAT_0049fd78,&DAT_0049fd88);
      }
      temp_v8[0] = 0;
      temp_v8[1] = 0;
      temp_v8[2] = 0;
      temp_v8[3] = 0;
      temp_v8[4] = 0;
      temp_v8[5] = 0;
      temp_v8[6] = 0;
      temp_v8[7] = 0;
      temp_v8[8] = 0;
      temp_v8[9] = 0;
      temp_v8[10] = 0;
      temp_v8[0xb] = 0;
      temp_v8[0xc] = 0;
      temp_v8[0xd] = 0;
      temp_v8[0xe] = 0;
      temp_v8[0xf] = 0;
      temp_v9 = 0;
      temp_v10 = 0;
      temp_v11 = 0;
      temp_v12 = 0;
      if (0 < DAT_0049fd88) {
        temp_v4 = DAT_0049fd88;
        psVar7 = temp_v8;
        puVar9 = (unsigned int *)&temp_v9;
        puVar12 = &DAT_0049fd38;
        puVar13 = &DAT_0049fd78;
        do {
          temp_v0 = *puVar13;
          temp_v4 = temp_v4 - 1;
          *psVar7 = (short)*puVar12;
          *(unsigned char *)puVar9 = temp_v0;
          psVar7 = psVar7 + 1;
          puVar9 = (unsigned int *)((int)puVar9 + 1);
          puVar12 = puVar12 + 1;
          puVar13 = puVar13 + 1;
        } while (temp_v4 != 0);
      }
      temp_v6 = 0;
      temp_v5 = 0;
      temp_v4 = temp_v6;
      if (0 < DAT_0049fd88) {
        do {
          psVar7 = temp_v8 + temp_v5;
          temp_v1 = *psVar7;
          temp_v4 = temp_v6;
          if (temp_v1 != 0) {
            temp_v7 = 1;
            if (0 < (DAT_0049fd88 - temp_v5) - 1) {
              puVar13 = (unsigned char *)((int)&temp_v9 + temp_v5);
              temp_v4 = (DAT_0049fd88 - temp_v5) - 1;
              psVar4 = psVar7;
              temp_v7 = 1;
              do {
                puVar13 = puVar13 + 1;
                psVar4 = psVar4 + 1;
                if ((*psVar4 != 0) && (*psVar4 == temp_v1)) {
                  *psVar4 = 0;
                  temp_v7 = temp_v7 + 1;
                  *puVar13 = 0;
                }
                temp_v4 = temp_v4 - 1;
              } while (temp_v4 != 0);
            }
            *(short *)(temp_v6 * 2 + 0x49fd8c) = *psVar7;
            temp_v4 = temp_v6 + 1;
            *(unsigned char *)(temp_v6 + 0x49fdac) = *(unsigned char *)((int)&temp_v9 + temp_v5);
            *(short *)(temp_v6 * 2 + 0x49fdbc) = temp_v7;
          }
          temp_v5 = temp_v5 + 1;
          temp_v6 = temp_v4;
        } while (temp_v5 < DAT_0049fd88);
      }
      DAT_0049fddc = (short)temp_v4;
      temp_v4 = 0;
      if (temp_v4 < DAT_0049fddc) {
        do {
          jyoucyuGetTableEntry(0);
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < DAT_0049fddc);
      }
    }
    if (*(int *)(temp_v2 + 0x1c) == 6) {
      *(unsigned char *)(temp_v2 + 0x3c) = 1;
      if (g_gameState < 100) {
        FUN_00291e40(0x1000200);
      }
      else {
        FUN_00291e40(0x1000200);
      }
    }
    if (*(int *)(temp_v2 + 0x1c) == 7) {
      if ((*(int *)(temp_v2 + 0xc) == 0) && (*(int *)(DAT_004474f4 + 0xac) == 0)) {
        FUN_00273358(1);
        goto LAB_001e5a1c;
      }
    }
    else {
LAB_001e5a1c:
      if (*(int *)(temp_v2 + 0x1c) == 0xd) {
        *(unsigned char *)(temp_v2 + 0x20) = 1;
        navigationResetTimer();
      }
      if (*(int *)(temp_v2 + 0x1c) == 0x12) {
        *(unsigned char *)(temp_v2 + 0x2d) = 1;
      }
    }
    if ((*(char *)(temp_v2 + 0x20) != '\0') &&
       (temp_v4 = *(int *)(temp_v2 + 0x24) + 1, *(int *)(temp_v2 + 0x24) = temp_v4, temp_v4 >= 0x15)) {
      if (*(int *)(temp_v2 + 0x28) % 0xd == 0) {
        if (DAT_0049fdde < DAT_0049fddc) {
          DAT_0049fdde = DAT_0049fdde + 1;
        }
        else {
          *(unsigned char *)(temp_v2 + 0x2c) = 1;
        }
      }
      *(int *)(temp_v2 + 0x28) = *(int *)(temp_v2 + 0x28) + 1;
    }
    if (((*(char *)(temp_v2 + 0x3c) != '\0') &&
        (temp_v4 = *(int *)(temp_v2 + 0x40) + 1, *(int *)(temp_v2 + 0x40) = temp_v4, temp_v4 >= 7)) &&
       (temp_v4 = *(int *)(temp_v2 + 0x44) + 1, *(int *)(temp_v2 + 0x44) = temp_v4, temp_v4 >= 0x1f)) {
      *(unsigned int *)(temp_v2 + 0x44) = 0;
    }
    if (*(char *)(temp_v2 + 0x2d) != '\0') {
      temp_v4 = *(int *)(temp_v2 + 0x30) + 1;
      *(int *)(temp_v2 + 0x30) = temp_v4;
      if (temp_v4 >= 6) {
        *(int *)(temp_v2 + 0x38) = *(int *)(temp_v2 + 0x38) + 1;
      }
      if (*(char *)(temp_v2 + 0x2c) == '\0') {
        return 0;
      }
      *(unsigned char *)(temp_v2 + 0x34) = 1;
    }
    else if (*(char *)(temp_v2 + 0x2c) == '\0') {
      return 0;
    }
    temp_v4 = FUN_0027ee9c();
    if ((temp_v4 != 0) || (temp_v4 = inputIsQuestMenuPressed(), temp_v4 != 0)) {
      FUN_00273358(0xffffffff);
      *(unsigned char *)(temp_v2 + 0x20) = 0;
      *(unsigned char *)(temp_v2 + 0x2d) = 0;
      *(unsigned char *)(temp_v2 + 0x3c) = 0;
      if (*(int *)(temp_v2 + 0xc) == 0) {
        FUN_002dfe08(*(unsigned int *)(temp_v2 + 0x10));
        FUN_0021dea8(*(unsigned int *)(temp_v2 + 0x10),5,0);
        FUN_0029be5c(0x13,1);
      }
      temp_v4 = DAT_0049f9c4;
      FUN_0025b670();
      FUN_002f364c((int)*(short *)(temp_v4 + 0x24),0);
      *(unsigned int *)(temp_v2 + 0x18) = 6;
      *(unsigned int *)(temp_v2 + 0x1c) = 0;
    }
    break;
  case 6:
    temp_v4 = *(int *)(g_mapDepart + 0x1c);
    *(unsigned int *)(g_mapDepart + 0x18) = 0xb;
    *(int *)(temp_v2 + 0x1c) = temp_v4 + 1;
    break;
  case 7:
    buttonHelpSetPresetDefault();
    temp_v3 = FUN_002c5c04(&LAB_001e5d3c);
    *(unsigned int *)(temp_v2 + 0x58) = temp_v3;
    temp_v3 = FUN_002c5c04(&LAB_001e5d54);
    *(unsigned int *)(temp_v2 + 0x5c) = temp_v3;
    temp_v4 = *(int *)(temp_v2 + 0x58);
    FUN_00297060(temp_v4,temp_v3);
    *(int *)(temp_v2 + 0x60) = temp_v4;
    *(unsigned int *)(temp_v4 + 0x108) = 3;
    scrScriptProcessStartEntry(*(unsigned int *)(temp_v2 + 0x60),1);
    navigationResetTimer();
    temp_v4 = *(int *)(temp_v2 + 0x18) + 1;
    *(int *)(temp_v2 + 0x18) = temp_v4;
    *(unsigned int *)(temp_v2 + 0x1c) = 0;
    break;
  case 8:
    temp_v4 = FUN_0019e0c0(*(unsigned int *)(g_mapDepart + 0x60));
    if (temp_v4 != 2) {
      return 0;
    }
    scrScriptProcessDestroy(*(unsigned int *)(temp_v2 + 0x60));
    asdMemFree(*(unsigned int *)(temp_v2 + 0x58));
    asdMemFree(*(unsigned int *)(temp_v2 + 0x5c));
    *(unsigned int *)(temp_v2 + 0x60) = 0;
    *(unsigned int *)(temp_v2 + 0x58) = 0;
    temp_v4 = 0xb;
    *(unsigned int *)(temp_v2 + 0x5c) = 0;
    *(int *)(temp_v2 + 0x18) = temp_v4;
    *(unsigned int *)(temp_v2 + 0x1c) = 0;
    break;
  case 9:
    if (*(int *)(DAT_004474f4 + 0xac) == 0) {
      FUN_00273358(1);
    }
    buttonHelpSetPresetDefault();
    temp_v3 = FUN_002c5c04(&LAB_001e5d3c);
    *(unsigned int *)(temp_v2 + 0x58) = temp_v3;
    temp_v3 = FUN_002c5c04(&LAB_001e5d54);
    *(unsigned int *)(temp_v2 + 0x5c) = temp_v3;
    temp_v4 = *(int *)(temp_v2 + 0x58);
    FUN_00297060(temp_v4,temp_v3);
    *(int *)(temp_v2 + 0x60) = temp_v4;
    *(unsigned int *)(temp_v4 + 0x108) = 3;
    if (g_gameState < 100) {
      temp_v3 = 2;
    }
    else {
      temp_v3 = 3;
    }
    scrScriptProcessStartEntry(*(unsigned int *)(temp_v2 + 0x60),temp_v3);
    navigationResetTimer();
    *(int *)(temp_v2 + 0x18) = *(int *)(temp_v2 + 0x18) + 1;
    *(unsigned int *)(temp_v2 + 0x1c) = 0;
    break;
  case 10:
    temp_v4 = FUN_0019e0c0(*(unsigned int *)(g_mapDepart + 0x60));
    if (temp_v4 == 2) {
      scrScriptProcessDestroy(*(unsigned int *)(temp_v2 + 0x60));
      asdMemFree(*(unsigned int *)(temp_v2 + 0x58));
      asdMemFree(*(unsigned int *)(temp_v2 + 0x5c));
      *(unsigned int *)(temp_v2 + 0x60) = 0;
      *(unsigned int *)(temp_v2 + 0x58) = 0;
      *(unsigned int *)(temp_v2 + 0x5c) = 0;
      temp_v4 = FUN_002973d8();
      if (temp_v4 != 0) {
        FUN_00273358(0xffffffff);
      }
      else {
        mapDepartSetTarget(0x18,1,0);
        FUN_0029be5c(0x1b,1);
      }
      *(unsigned int *)(temp_v2 + 0x18) = 0xb;
      *(unsigned int *)(temp_v2 + 0x1c) = 0;
    }
    break;
  case 0xb:
    fileSlotFree(0x21);
    asdTMTexTableReleaseNode(10,4);
    DAT_004475bc = (DAT_004475bc + 1) % 3;
    return 0xffffffff;
  }
  return 0;
}

} /* extern "C" */
