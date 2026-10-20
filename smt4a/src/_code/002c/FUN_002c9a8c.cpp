/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c9a8c` (_code @ 0x2c9a8c, 0xc80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019ea64(...);
int dialogClose(...);
int FUN_0020b490(...);
int FUN_00333dc8(...);

int FUN_001517b4(...);
int FUN_00163aa4(...);
int eventQueueAddUniqueIfValid(...);
int sysPlaySe(...);
int gameGetPlayerData(void);
int FUN_001834a4(int, int);
int uiSpriteSetKeyframe(...);
int FUN_0019de98(...);
int dialogOpen(...);
int FUN_00228b04(...);
int scrScriptProcessStartEntry(...);
int ifTouchRegionAdd(int, int, int, int);
int FUN_002a4894(...);
int FUN_002a49e4(...);
int FUN_002c2d5c(...);
int flaggedEntrySetValueA(...);
int FUN_003450d4(...);
int FUN_00359974(int, int, unsigned int, int);
int FUN_00372100(...);
int FUN_003df7c4(...);
int FUN_003e40b8(...);
int SBORROW4(...);

/* stack frame of param_1: 9 slot(s), 33 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned char sp44; /* 0x44: local_44 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_001517b4. */
extern int FUN_001632fc(void);
/* Supplied declaration required: FUN_00163aa4. */
/* Supplied declaration required: eventQueueAddUniqueIfValid. */
extern unsigned short FUN_001643b4(unsigned int, int);
/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: gameGetPlayerData. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: uiSpriteSetKeyframe. */
extern unsigned int dataTableGet(unsigned int, unsigned int);
extern int gameFlagIsSet(unsigned int);
extern unsigned int dataTableGetCount(unsigned int);
extern int dataTableGetEntries(void);
/* Supplied declaration required: FUN_0019de98. */
/* Supplied declaration required: FUN_0019ea64. */
/* Supplied declaration required: dialogOpen. */
/* Supplied declaration required: dialogClose. */
/* Supplied declaration required: FUN_0020b490. */
extern int FUN_00224880(unsigned int);
/* Supplied declaration required: FUN_00228b04. */
extern int FUN_0022e750(void);
extern int dialogIsActive(void);
/* Supplied declaration required: scrScriptProcessStartEntry. */
extern int FUN_00284140(int);
/* Supplied declaration required: ifTouchRegionAdd. */
/* Supplied declaration required: FUN_002a4894. */
/* Supplied declaration required: FUN_002a49e4. */
extern int FUN_002a4b74(void);
/* Supplied declaration required: FUN_002c2d5c. */
/* Supplied declaration required: flaggedEntrySetValueA. */
extern int FUN_0031f6ac(int);
/* Supplied declaration required: FUN_00333dc8. */
/* Supplied declaration required: FUN_003450d4. */
/* Supplied declaration required: FUN_00359974. */
/* Supplied declaration required: FUN_00372100. */
/* Supplied declaration required: FUN_003df7c4. */
/* Supplied declaration required: FUN_003e40b8. */
extern int NaviMain_GetPosY(void);


void FUN_002c9a8c(int param_1)

{
/* irregular: 9 goto(s); 26 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  short temp_v2;
  short temp_v3;
  short temp_v4;
  short temp_v5;
  short temp_v6;
  short temp_v7;
  short temp_v8;
  short temp_v9;
  unsigned char temp_v10;
  unsigned short temp_v11;
  int temp_v12;
  int temp_v13;
  int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  int temp_v19;
  int temp_v20;
  int temp_v21;
  int *piVar23;
  short *psVar24;
  int *piVar25;
  short *psVar26;
  unsigned char temp_v22;
  unsigned char temp_v23 [8];
  int temp_v24;
  
  FUN_00163aa4(param_1 + 0x50c);
  temp_v19 = param_1 + 0x624;
  temp_v20 = param_1 + 0x7560;
  piVar25 = (int *)(param_1 + 0x74c0);
  piVar23 = (int *)(param_1 + 0x7558);
  switch(*(unsigned int *)(param_1 + 0x436c)) {
  case 0:
    temp_v20 = gameGetPlayerData();
    temp_v20 = (unsigned int)*(unsigned short *)(temp_v20 + 0x62) -
             (unsigned int)*(unsigned short *)(param_1 + *piVar25 * 0x150 + 0x4492);
    *(int *)(param_1 + 0x7538) = temp_v20;
    FUN_00359974(0x18,temp_v20,0xffffffff,0);
    uiSpriteSetKeyframe(temp_v19,0);
    temp_v20 = 0;
    do {
      temp_v11 = FUN_001643b4(0x1d,temp_v20 + 0xba);
      *(unsigned short *)(param_1 + temp_v20 * 2 + 0x43b6) = temp_v11;
      temp_v14 = FUN_001834a4(0x1d,temp_v20 + 0xba);
      temp_v13 = FUN_001834a4(0x1d,0x117);
      temp_v0 = **(short **)(temp_v13 + 0xc);
      temp_v12 = (int)(short)(*(short *)(temp_v14 + 8) + *(short *)(temp_v13 + 8) + temp_v0 * -2);
      ifTouchRegionAdd(temp_v12,(int)(short)(*(short *)(temp_v14 + 10) + *(short *)(temp_v13 + 10)),
                   (int)(short)(temp_v0 * 3),(int)(*(short **)(temp_v13 + 0xc))[1]);
      temp_v21 = param_1 + temp_v20 * 4;
      *(short *)(temp_v21 + 0x43d8) = (short)temp_v12;
      temp_v14 = FUN_001834a4(0x1d,temp_v20 + 0xba);
      temp_v13 = FUN_001834a4(0x1d,0x116);
      temp_v12 = (int)(short)(*(short *)(temp_v14 + 8) + *(short *)(temp_v13 + 8));
      ifTouchRegionAdd(temp_v12,(int)(short)(*(short *)(temp_v14 + 10) + *(short *)(temp_v13 + 10)),
                   (int)(short)(**(short **)(temp_v13 + 0xc) * 3),(int)(*(short **)(temp_v13 + 0xc))[1])
      ;
      *(short *)(temp_v21 + 0x43da) = (short)temp_v12;
      temp_v20 = temp_v20 + 1;
      *(short *)(param_1 + 0x43b4) = *(short *)(param_1 + 0x43b4) + 3;
    } while (temp_v20 < 5);
    *(int *)(param_1 + 0x436c) = *(int *)(param_1 + 0x436c) + 1;
  case 1:
    if (*(char *)(param_1 + 0x7f50) != '\0') {
      FUN_003e40b8(param_1 + 0x7f40,0);
    }
    FUN_00163aa4(temp_v19);
    temp_v20 = gameFlagIsSet(0x45f);
    if (temp_v20 != 0) {
      temp_v20 = FUN_0022e750();
      if ((temp_v20 != 0) && (*(char *)(temp_v19 + 0x8a) != '\0')) {
        FUN_002a49e4(*(unsigned int *)(param_1 + 0x43a4),0xcc);
        dialogOpen(1);
        FUN_002c2d5c(0x3c);
        *(int *)(param_1 + 0x436c) = *(int *)(param_1 + 0x436c) + 1;
      }
      break;
    }
    temp_v20 = FUN_0022e750();
    if (((temp_v20 == 0) || (*(char *)(temp_v19 + 0x8a) == '\0')) ||
       (temp_v19 = scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0x43a0),0), temp_v19 == 0)) break;
    temp_v19 = 6;
    *(int *)(param_1 + 0x436c) = temp_v19;
    break;
  case 2:
    sysPlaySe(0x65);
    temp_v15 = FUN_002a4894(temp_v20);
    temp_v16 = dataTableGet(0x25,1);
    temp_v19 = dataTableGetEntries();
    temp_v17 = dataTableGetCount(temp_v16);
    temp_v18 = 0;
    if (temp_v17 != 0) {
      do {
        if (temp_v18 == temp_v15) goto LAB_002c9da8;
        temp_v18 = temp_v18 + 1;
        temp_v19 = temp_v19 + 0x50;
      } while (temp_v18 < temp_v17);
    }
    temp_v19 = 0;
LAB_002c9da8:
    FUN_0019de98(temp_v19,0xf4f4f4ff);
    *(int *)(param_1 + 0x436c) = *(int *)(param_1 + 0x436c) + 1;
    break;
  case 3:
    temp_v10 = 0;
    temp_v22 = 0;
    temp_v23[0] = 0;
    temp_v24 = FUN_002a4894(temp_v20);
    psVar24 = (short *)0x0;
    psVar26 = (short *)0x0;
    temp_v16 = FUN_002a4894(temp_v20);
    switch(temp_v16) {
    case 0:
      temp_v19 = gameGetPlayerData();
      psVar24 = (short *)(temp_v19 + 0x12);
      psVar26 = (short *)(param_1 + *piVar25 * 0x150 + 0x4442);
      break;
    case 1:
      temp_v19 = gameGetPlayerData();
      psVar24 = (short *)(temp_v19 + 0x14);
      psVar26 = (short *)(param_1 + *piVar25 * 0x150 + 0x4444);
      break;
    case 2:
      temp_v19 = gameGetPlayerData();
      psVar24 = (short *)(temp_v19 + 0x16);
      psVar26 = (short *)(param_1 + *piVar25 * 0x150 + 0x4446);
      break;
    case 3:
      temp_v19 = gameGetPlayerData();
      psVar24 = (short *)(temp_v19 + 0x18);
      psVar26 = (short *)(param_1 + *piVar25 * 0x150 + 0x4448);
      break;
    case 4:
      temp_v19 = gameGetPlayerData();
      psVar24 = (short *)(temp_v19 + 0x1a);
      psVar26 = (short *)(param_1 + *piVar25 * 0x150 + 0x444a);
    }
    temp_v19 = 0;
    do {
      temp_v14 = param_1 + temp_v19 * 4;
      temp_v13 = FUN_00284140((int)*(short *)(temp_v14 + 0x43d8));
      if (temp_v13 == 1 || temp_v13 == 2) {
        flaggedEntrySetValueA(temp_v20,temp_v19);
        break;
      }
      if (temp_v13 == 6) {
        flaggedEntrySetValueA(temp_v20,temp_v19);
        temp_v10 = 1;
        break;
      }
      temp_v14 = FUN_00284140((int)*(short *)(temp_v14 + 0x43da));
      if (temp_v14 == 1 || temp_v14 == 2) {
        flaggedEntrySetValueA(temp_v20,temp_v19);
        break;
      }
      if (temp_v14 == 6) {
        flaggedEntrySetValueA(temp_v20,temp_v19);
        temp_v22 = 1;
        break;
      }
      temp_v19 = temp_v19 + 1;
    } while (temp_v19 < 5);
    if ((temp_v22 || temp_v10) || (temp_v19 = FUN_002a4894(temp_v20), temp_v19 != temp_v24)) {
      temp_v15 = FUN_002a4894(temp_v20);
      temp_v16 = dataTableGet(0x25,1);
      temp_v19 = dataTableGetEntries();
      temp_v17 = dataTableGetCount(temp_v16);
      temp_v18 = 0;
      if (temp_v18 < temp_v17) {
        do {
          if (temp_v18 == temp_v15) goto LAB_002ca008;
          temp_v18 = temp_v18 + 1;
          temp_v19 = temp_v19 + 0x50;
        } while (temp_v18 < temp_v17);
      }
      temp_v19 = 0;
LAB_002ca008:
      FUN_0019de98(temp_v19,0xf4f4f4ff);
    }
    temp_v19 = FUN_002a4894(temp_v20);
    if (temp_v19 != temp_v24) {
      eventQueueAddUniqueIfValid(0x100020d);
    }
    temp_v19 = temp_v20;
    FUN_003450d4(temp_v20,0,param_1 + 0x43b6,0xffffffff,0xffffffff,0xffffffff,temp_v23,0,1);
    if ((temp_v19 != 0) || (temp_v19 = temp_v20, FUN_00228b04(temp_v20,0), temp_v19 != 0)) {
      temp_v15 = FUN_002a4894(temp_v20);
      temp_v16 = dataTableGet(0x25,1);
      temp_v19 = dataTableGetEntries();
      temp_v17 = dataTableGetCount(temp_v16);
      temp_v18 = 0;
      if (temp_v18 < temp_v17) {
        do {
          if (temp_v18 == temp_v15) goto LAB_002ca0e0;
          temp_v18 = temp_v18 + 1;
          temp_v19 = temp_v19 + 0x50;
        } while (temp_v18 < temp_v17);
      }
      temp_v19 = 0;
LAB_002ca0e0:
      FUN_0019de98(temp_v19,0xf4f4f4ff);
      temp_v19 = FUN_002a4894(temp_v20);
      if (temp_v19 != temp_v24) {
        eventQueueAddUniqueIfValid(0x100020d);
      }
LAB_002ca3c0:
      temp_v19 = gameGetPlayerData();
      temp_v19 = FUN_0031f6ac(temp_v19 + 0xe);
      if (temp_v19 != 0) {
        FUN_003df7c4(0);
        temp_v16 = gameGetPlayerData();
        FUN_00372100(temp_v16,0);
      }
    }
    else {
      temp_v19 = 4;
      FUN_001517b4(4,0);
      if (!(temp_v19 == 0 && !temp_v10)) {
        if (*psVar24 <= *psVar26) goto LAB_002ca3c0;
        *psVar24 = *psVar24 - 1;
        *piVar23 = *piVar23 + 1;
        eventQueueAddUniqueIfValid(0x100020d);
      }
      else {
        temp_v19 = 3;
        FUN_001517b4(3,0);
        temp_v16 = 0x100020f;
        if (!(temp_v19 == 0 && !temp_v22)) {
          if ((*piVar23 < 1) || (temp_v16 = 0x100020d, *psVar24 >= 0x3e7)) {
LAB_002ca1c0:
            eventQueueAddUniqueIfValid(temp_v16);
            goto LAB_002ca3c0;
          }
          *psVar24 = *psVar24 + 1;
          *piVar23 = *piVar23 - 1;
        }
        else {
          temp_v19 = 1;
          FUN_001517b4();
          if (temp_v19 == 0) {
            temp_v19 = 9;
            FUN_001517b4(9,1);
            if (temp_v19 == 0) {
              temp_v19 = 0;
              FUN_001517b4(0,1);
              if (temp_v19 != 0) {
                temp_v14 = *piVar23;
                temp_v16 = 0x100020e;
                temp_v22 = temp_v14 == 0;
                temp_v19 = temp_v14;
                temp_v20 = temp_v14;
                if (0 < temp_v14) {
                  temp_v20 = (int)*psVar24;
                  temp_v19 = 999 - temp_v20;
                  temp_v22 = temp_v20 == 999;
                }
                if (temp_v22 || temp_v19 < 0 != (0 < temp_v14 && SBORROW4(999,temp_v20))) goto LAB_002ca1c0;
                *psVar24 = (short)temp_v20 + 1;
                *piVar23 = *piVar23 - 1;
                goto LAB_002ca354;
              }
            }
            goto LAB_002ca3c0;
          }
          temp_v19 = gameGetPlayerData();
          temp_v0 = *(short *)(temp_v19 + 0x12);
          temp_v1 = *(short *)(param_1 + *piVar25 * 0x150 + 0x4442);
          temp_v19 = gameGetPlayerData();
          *(unsigned short *)(temp_v19 + 0x12) = *(unsigned short *)(param_1 + *piVar25 * 0x150 + 0x4442);
          temp_v19 = gameGetPlayerData();
          temp_v2 = *(short *)(temp_v19 + 0x14);
          temp_v3 = *(short *)(param_1 + *piVar25 * 0x150 + 0x4444);
          temp_v19 = gameGetPlayerData();
          *(unsigned short *)(temp_v19 + 0x14) = *(unsigned short *)(param_1 + *piVar25 * 0x150 + 0x4444);
          temp_v19 = gameGetPlayerData();
          temp_v4 = *(short *)(temp_v19 + 0x16);
          temp_v5 = *(short *)(param_1 + *piVar25 * 0x150 + 0x4446);
          temp_v19 = gameGetPlayerData();
          *(unsigned short *)(temp_v19 + 0x16) = *(unsigned short *)(param_1 + *piVar25 * 0x150 + 0x4446);
          temp_v19 = gameGetPlayerData();
          temp_v6 = *(short *)(temp_v19 + 0x18);
          temp_v7 = *(short *)(param_1 + *piVar25 * 0x150 + 0x4448);
          temp_v19 = gameGetPlayerData();
          *(unsigned short *)(temp_v19 + 0x18) = *(unsigned short *)(param_1 + *piVar25 * 0x150 + 0x4448);
          temp_v19 = gameGetPlayerData();
          temp_v8 = *(short *)(temp_v19 + 0x1a);
          temp_v9 = *(short *)(param_1 + *piVar25 * 0x150 + 0x444a);
          temp_v19 = gameGetPlayerData();
          *(unsigned short *)(temp_v19 + 0x1a) = *(unsigned short *)(param_1 + *piVar25 * 0x150 + 0x444a);
          *piVar23 = *piVar23 +
                     ((int)temp_v0 - (int)temp_v1) + ((int)temp_v2 - (int)temp_v3) +
                     ((int)temp_v4 - (int)temp_v5) + ((int)temp_v6 - (int)temp_v7) +
                     ((int)temp_v8 - (int)temp_v9);
        }
LAB_002ca354:
        eventQueueAddUniqueIfValid(temp_v16);
      }
      FUN_003df7c4(0);
      temp_v16 = gameGetPlayerData();
      FUN_00372100(temp_v16,0);
    }
    if (*piVar23 != 0) {
      temp_v19 = gameGetPlayerData();
      temp_v19 = FUN_0031f6ac(temp_v19 + 0xe);
      if (temp_v19 == 0) break;
    }
    FUN_0019ea64(0);
    sysPlaySe(0x9c);
    scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0x43a0),0xb);
    temp_v19 = FUN_001632fc();
    if (temp_v19 != 0) {
      dialogClose(0);
    }
    temp_v19 = *(int *)(param_1 + 0x436c) + 1;
    *(int *)(param_1 + 0x436c) = temp_v19;
    break;
  case 4:
    temp_v14 = FUN_00224880(*(unsigned int *)(param_1 + 0x43a0));
    if (temp_v14 != 2) break;
    FUN_0019ea64(1);
    FUN_00333dc8(0);
    temp_v14 = FUN_002a4b74();
    if (temp_v14 != 0) {
      *(unsigned int *)(param_1 + 0x436c) = 3;
      scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0x43a0),0);
      sysPlaySe(0x65);
      temp_v15 = FUN_002a4894(temp_v20);
      temp_v16 = dataTableGet(0x25,1);
      temp_v19 = dataTableGetEntries();
      temp_v17 = dataTableGetCount(temp_v16);
      temp_v18 = 0;
      if (temp_v18 < temp_v17) {
        do {
          if (temp_v18 == temp_v15) goto LAB_002ca524;
          temp_v18 = temp_v18 + 1;
          temp_v19 = temp_v19 + 0x50;
        } while (temp_v18 < temp_v17);
      }
      temp_v19 = 0;
LAB_002ca524:
      FUN_0019de98(temp_v19,0xf4f4f4ff);
      psVar24 = (short *)0x0;
      temp_v16 = FUN_002a4894(temp_v20);
      switch(temp_v16) {
      case 0:
        temp_v19 = gameGetPlayerData();
        psVar24 = (short *)(temp_v19 + 0x12);
        break;
      case 1:
        temp_v19 = gameGetPlayerData();
        psVar24 = (short *)(temp_v19 + 0x14);
        break;
      case 2:
        temp_v19 = gameGetPlayerData();
        psVar24 = (short *)(temp_v19 + 0x16);
        break;
      case 3:
        temp_v19 = gameGetPlayerData();
        psVar24 = (short *)(temp_v19 + 0x18);
        break;
      case 4:
        temp_v19 = gameGetPlayerData();
        psVar24 = (short *)(temp_v19 + 0x1a);
      }
      *psVar24 = *psVar24 - 1;
      FUN_003df7c4(0);
      temp_v16 = gameGetPlayerData();
      FUN_00372100(temp_v16,0);
      *piVar23 = *piVar23 + 1;
      break;
    }
    uiSpriteSetKeyframe(temp_v19,1,0);
    temp_v19 = *(int *)(param_1 + 0x436c) + 1;
    *(int *)(param_1 + 0x436c) = temp_v19;
    break;
  case 5:
    if (*(char *)(param_1 + 0x7f50) != '\0') {
      FUN_003e40b8(param_1 + 0x7f40,0);
    }
    temp_v19 = FUN_00163aa4(temp_v19);
    if (temp_v19 != 0) {
      FUN_0019de98(0,0xf4f4f4ff);
      temp_v19 = FUN_001632fc();
      if (temp_v19 != 0) {
        dialogClose(1);
      }
      FUN_0020b490(param_1,0x13);
    }
    break;
  case 6:
    temp_v19 = FUN_00224880(*(unsigned int *)(param_1 + 0x43a0));
    if (temp_v19 != 2) break;
    FUN_002a49e4(*(unsigned int *)(param_1 + 0x43a4),0xcc);
    dialogOpen(1);
    FUN_002c2d5c(0x3c);
    temp_v19 = 2;
    *(int *)(param_1 + 0x436c) = temp_v19;
    break;
  default:
  }
  temp_v19 = dialogIsActive();
  if ((temp_v19 != 0) && (temp_v19 = NaviMain_GetPosY(), temp_v19 < 0)) {
    dialogClose(1);
    return;
  }
  return;
}

} /* extern "C" */
