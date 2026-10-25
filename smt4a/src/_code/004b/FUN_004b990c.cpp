/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004b990c` (_code @ 0x4b990c, 0x6c0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "event/2dEvent/EventEffect.h"
#include "shard/FUN_003b61ec.h"

extern "C" {

int textFormatBuffer(...);
int asdOperatorNew(void);
int eventQueueAddUnique(...);
int dialogOpen(...);
int placeWinStartText(...);
int FUN_002e5924(...);
int frameTexInitActive(void);
int moveCameraCtrlCreateEntry(...);
int linkSlotSetFlag1C(...);
int linkSlotSetFlag20(...);
int listSelectItem(...);
int soundResetSpatialState(void);
int FUN_00407ab0(...);
int FUN_00407eb0(...);
int FUN_004080bc(...);
int dataTable33Entries(void);
int dataTable33TypeCount(...);

int asdMemFree(void);
int FUN_0019f548(unsigned int);
int FUN_001ad9b4(void);
int slotSetRequest(int, int, int);
int dialogClose(int);
int FUN_00214da4(void);
int infoWinSetValue(...);
int campGetState(void);
int placeWinSetValue(...);
void frameTransitionSetMode(int);
int FUN_002c3398(int);
int asdOperatorDelete(int);
int libc_strcpy(unsigned char *, unsigned int);
int objectE0ResetFlags1040(void);
int obj04Finish(void);
int sub68OwnerCall4(void);
int commonBgStopChildAndReset(void);
int FUN_00363c58(int);
int clearFlags310To31F(void);
int FUN_003b5064(void);
int FUN_003c91e8(void);
int FUN_003d54f8(int, int);
int FUN_004b6bc4(int, int, unsigned int);
int FUN_004b75d0(void);
int FUN_004b7d88(int);
int menu4CClearFlag84(int);
int menu4CScrollToKind(int, int);
int menu4CReset(int);
int menu4CStartBlock74(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
} param_1_stack;

extern unsigned char LAB_004b9fdc; /* 0x4b9fdc */
extern unsigned char LAB_004b9fe4; /* 0x4b9fe4 */
extern signed char DAT_005f1634; /* 0x5f1634 */
extern unsigned short DAT_005f1794; /* 0x5f1794 */
extern unsigned short DAT_005f1796; /* 0x5f1796 */
extern unsigned char DAT_005f1798; /* 0x5f1798 */
extern unsigned short DAT_005f17a8; /* 0x5f17a8 */
extern unsigned short DAT_005f17aa; /* 0x5f17aa */
extern int g_mapSelection; /* 0x5f1c98 */

/* Supplied declaration required: textFormatBuffer. */
extern int gameDataBlocksGetSaveData(void);
extern int _ZN10FloatStateC1Ev(int);
/* Supplied declaration required: asdOperatorNew. */
extern int campIsState85(void);
extern int gameFlagsGetBlock(void);
/* Supplied declaration required: eventQueueAddUnique. */
extern int gameFlagIsSet(void);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_0019f548. */
/* Supplied declaration required: FUN_001ad9b4. */
/* Supplied declaration required: slotSetRequest. */
extern int campIsState51(void);
/* Supplied declaration required: dialogOpen. */
/* Supplied declaration required: dialogClose. */
/* Supplied declaration required: placeWinStartText. */
/* Supplied declaration required: FUN_00214da4. */
/* Supplied declaration required: infoWinSetValue. */
extern int screenFadeIsBusy(void);
/* Supplied declaration required: campGetState. */
/* Supplied declaration required: placeWinSetValue. */
/* Supplied declaration required: infoWinSetText. */
/* Supplied declaration required: FUN_002c3398. */
/* Supplied declaration required: asdOperatorDelete. */
/* Supplied declaration required: libc_strcpy. */
/* Supplied declaration required: FUN_002e5924. */
/* Supplied declaration required: objectE0ResetFlags1040. */
/* Supplied declaration required: obj04Finish. */
/* Supplied declaration required: sub68OwnerCall4. */
/* Supplied declaration required: commonBgStopChildAndReset. */
/* Supplied declaration required: frameTexInitActive. */
/* Supplied declaration required: FUN_00363c58. */
/* Supplied declaration required: clearFlags310To31F. */
/* Supplied declaration required: FUN_003b5064. */
/* Supplied declaration required: FUN_003b61ec. */
/* Supplied declaration required: FUN_003c91e8. */
/* Supplied declaration required: FUN_003d54f8. */
/* Supplied declaration required: moveCameraCtrlCreateEntry. */
/* Supplied declaration required: linkSlotSetFlag1C. */
/* Supplied declaration required: linkSlotSetFlag20. */
/* Supplied declaration required: listSelectItem. */
/* Supplied declaration required: soundResetSpatialState. */
/* Supplied declaration required: FUN_00407ab0. */
/* Supplied declaration required: FUN_00407eb0. */
/* Supplied declaration required: FUN_004080bc. */
/* Supplied declaration required: FUN_004b6bc4. */
/* Supplied declaration required: FUN_004b75d0. */
/* Supplied declaration required: FUN_004b7d88. */
/* Supplied declaration required: menu4CClearFlag84. */
extern int FUN_004ba698(int);
extern int menu4CGetCurrentEntry(int);
/* Supplied declaration required: menu4CScrollToKind. */
/* Supplied declaration required: menu4CReset. */
/* Supplied declaration required: menu4CStartBlock74. */
/* Supplied declaration required: dataTable33Entries. */
/* Supplied declaration required: dataTable33TypeCount. */
extern unsigned short flaggedValueHolderGetTotal(int);


void FUN_004b990c(int param_1)

{
/* irregular: 48 native warning(s); review required */
  unsigned char temp_v0;
  char temp_v1;
  unsigned short temp_v2;
  char *pcVar4;
  unsigned int temp_v3;
  int temp_v4;
  unsigned char *puVar7;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int *piVar11;
  unsigned char *puVar12;
  unsigned char temp_v8;
  unsigned char temp_v9 [128];
  unsigned char temp_v10 [128];
  unsigned char temp_v11 [4];
  
  FUN_004b75d0();
  switch(*(unsigned int *)(param_1 + 0x2c)) {
  case 0:
    placeWinSetValue(0);
    infoWinSetValue(0);
    objectE0ResetFlags1040();
    frameTransitionSetMode(1);
    if ((*(unsigned int *)(param_1 + 0x20) & 0x40) != 0) {
      *(unsigned int *)(param_1 + 0x20) = *(unsigned int *)(param_1 + 0x20) & 0xffffffbf;
      obj04Finish();
    }
    *(unsigned char *)(param_1 + 0x1168) = 0;
    temp_v6 = *(int *)(param_1 + 0x2c) + 1;
    *(int *)(param_1 + 0x2c) = temp_v6;
    break;
  case 1:
    dialogClose(0);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    *(unsigned int *)(param_1 + 0x30) = 0;
    commonBgStopChildAndReset();
    if (*(char *)(param_1 + 0x1214) != '\0') {
      FUN_0019f548(*(unsigned int *)(param_1 + 0x1218));
      if (*(int *)(param_1 + 0x1218) != 0) {
        asdOperatorDelete(*(int *)(param_1 + 0x1218));
      }
      *(unsigned int *)(param_1 + 0x1218) = 0;
      temp_v6 = 0;
      do {
        temp_v4 = param_1 + temp_v6 * 4;
        if (*(int *)(temp_v4 + 0x121c) != 0) {
          asdMemFree();
          *(unsigned int *)(temp_v4 + 0x121c) = 0;
        }
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < 10);
    }
    FUN_00214da4();
    return;
  case 2:
    temp_v6 = *(int *)(param_1 + 0x30) + 1;
    *(int *)(param_1 + 0x30) = temp_v6;
    if (temp_v6 < 10) {
      return;
    }
    menu4CClearFlag84(param_1 + 0x9c);
    FUN_002c3398(0);
    *(unsigned char *)(param_1 + 0xa88) = 1;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  case 3:
    temp_v6 = campIsState51();
    if ((temp_v6 != 0) || (temp_v6 = campIsState85(), temp_v6 == 0)) {
      if (DAT_005f1634 == '\0') {
        slotSetRequest(1,10,0xff);
      }
      temp_v6 = *(int *)(param_1 + 0x2c) + 1;
      *(int *)(param_1 + 0x2c) = temp_v6;
    }
    break;
  case 4:
    temp_v6 = campIsState85();
    if (temp_v6 != 0) {
      return;
    }
    temp_v6 = screenFadeIsBusy();
    if (temp_v6 != 0) {
      return;
    }
    pcVar4 = (char *)campGetState();
    if (pcVar4[4] != '\0') {
      if (pcVar4[1] != '\0') {
        temp_v3 = (unsigned int)*(unsigned short *)(pcVar4 + 8);
        FUN_001ad9b4();
        DAT_005f1796 = *(unsigned short *)(temp_v3 + 2);
        libc_strcpy(&DAT_005f1798,temp_v3 + 0xc4);
        DAT_005f1794 = 1;
      }
      else if (pcVar4[3] != '\0') {
        DAT_005f17aa = 1;
      }
      temp_v6 = gameFlagsGetBlock();
      *(unsigned short *)(temp_v6 + 0x22) = 0;
      clearFlags310To31F();
      sub68OwnerCall4();
      if (pcVar4[2] != '\0') {
        DAT_005f17a8 = 1;
      }
      if (*pcVar4 != '\0') {
        *(unsigned char *)(param_1 + 0x1168) = 1;
      }
      else {
        temp_v6 = gameFlagsGetBlock();
        *(unsigned short *)(temp_v6 + 0x1e) = *(unsigned short *)(pcVar4 + 6);
      }
    }
    if (DAT_005f1634 == '\0') {
      temp_v6 = *(int *)(param_1 + 0x2c) + 1;
      *(int *)(param_1 + 0x2c) = temp_v6;
      break;
    }
    FUN_003c91e8();
    FUN_00363c58(1);
    frameTransitionSetMode(0);
    temp_v6 = gameDataBlocksGetSaveData();
    if (*(unsigned char *)(temp_v6 + 2) >= 2) {
      if (*(unsigned char *)(temp_v6 + 2) == 2) {
        *(unsigned char *)(param_1 + 0x4b) = 1;
      }
    }
    else {
      FUN_003b5064();
      if (g_mapSelection >= 200) {
        *(unsigned char *)(param_1 + 0x4a) = 1;
      }
      else if (g_mapSelection >= 100) {
        *(unsigned char *)(param_1 + 0x48) = 1;
      }
      else {
        *(unsigned char *)(param_1 + 0x49) = 1;
      }
    }
    temp_v6 = 8;
    *(int *)(param_1 + 0x2c) = temp_v6;
    break;
  case 5:
    temp_v6 = campGetState();
    if (*(char *)(temp_v6 + 4) != '\0') {
      temp_v6 = menu4CGetCurrentEntry(param_1 + 0x9c);
      temp_v0 = *(unsigned char *)(temp_v6 + 0x20);
      FUN_004b6bc4(param_1,(int)*(short *)(param_1 + 0x3c),*(unsigned int *)(param_1 + 0x1120));
      menu4CScrollToKind(param_1 + 0x9c,temp_v0);
      temp_v2 = flaggedValueHolderGetTotal(param_1 + 0x9c);
      *(unsigned short *)(param_1 + 0x4c) = temp_v2;
    }
    frameTransitionSetMode(0);
    FUN_003b61ec();
    menu4CStartBlock74(param_1 + 0x9c);
    menu4CReset(param_1 + 0x9c);
    *(unsigned char *)(param_1 + 0xa88) = 0;
    FUN_004b7d88(param_1);
    temp_v6 = campGetState();
    temp_v1 = *(char *)(temp_v6 + 10);
    temp_v8 = temp_v1 == '\0';
    if (temp_v8) {
      temp_v1 = *(char *)(param_1 + 0x1168);
    }
    if (temp_v8 && temp_v1 == '\0') {
      FUN_003d54f8(1,10);
    }
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    if (*(char *)(param_1 + 0x1214) != '\0') {
      temp_v4 = 0x7a0;
      asdOperatorNew();
      temp_v6 = 0;
      if (temp_v4 != 0) {
        temp_v6 = _ZN10FloatStateC1Ev(temp_v4 + 0x4f0);
        temp_v6 = temp_v6 - 0x4f0;
      }
      *(int *)(param_1 + 0x1218) = temp_v6;
      soundResetSpatialState();
      textFormatBuffer(temp_v9,&LAB_004b9fdc,"mikado/",*(int *)(param_1 + 0x1118) + 0x40);
      if (((*(short *)(*(int *)(param_1 + 0x1118) + 100) != 0) &&
          (temp_v6 = gameFlagIsSet(), temp_v6 != 0)) ||
         ((*(short *)(*(int *)(param_1 + 0x1118) + 0x66) != 0 &&
          (temp_v6 = gameFlagIsSet(), temp_v6 != 0)))) {
        textFormatBuffer(temp_v10,&LAB_004b9fdc,"mikado/",*(int *)(param_1 + 0x1118) + 0x68);
        FUN_00407ab0(*(unsigned int *)(param_1 + 0x1218),temp_v9,temp_v10);
      }
      else {
        FUN_00407ab0(*(unsigned int *)(param_1 + 0x1218),temp_v9,0);
      }
      temp_v6 = menu4CGetCurrentEntry(param_1 + 0x9c);
      FUN_004080bc(*(unsigned int *)(param_1 + 0x1218),0,0xffffffff);
      FUN_00407eb0(*(unsigned int *)(param_1 + 0x1218),(int)*(short *)(temp_v6 + 0x28),1);
      if (-1 < *(int *)(*(int *)(param_1 + 0x1118) + 0x60)) {
        puVar12 = temp_v11;
        dataTable33Entries();
        if (puVar12 != (unsigned char *)0x0) {
          temp_v4 = 0;
          puVar7 = temp_v11;
          dataTable33TypeCount(puVar7,*(unsigned int *)(*(int *)(param_1 + 0x1118) + 0x60));
          if (0 < (int)puVar7) {
            do {
              textFormatBuffer(temp_v9,&LAB_004b9fe4,"mikado/",puVar12);
              moveCameraCtrlCreateEntry(*(unsigned int *)(param_1 + 0x1218),temp_v9,temp_v4);
              puVar12 = puVar12 + 0x20;
              temp_v4 = temp_v4 + 1;
              puVar7 = temp_v11;
              dataTable33TypeCount(puVar7,*(unsigned int *)(*(int *)(param_1 + 0x1118) + 0x60));
            } while (temp_v4 < (int)puVar7);
          }
          listSelectItem(*(unsigned int *)(param_1 + 0x1218),(int)*(char *)(temp_v6 + 0x2b));
        }
      }
      if ((!(*(short *)(param_1 + 0x3c) == 4 || *(short *)(param_1 + 0x3c) == 3)) ||
         (!(*(short *)(temp_v6 + 0x28) == 0 || *(short *)(temp_v6 + 0x28) == 6))) {
        linkSlotSetFlag20(*(unsigned int *)(param_1 + 0x1218),0);
        temp_v5 = *(unsigned int *)(param_1 + 0x1218);
        temp_v7 = 1;
      }
      else {
        linkSlotSetFlag20(*(unsigned int *)(param_1 + 0x1218),1);
        temp_v5 = *(unsigned int *)(param_1 + 0x1218);
        temp_v7 = 0;
      }
      linkSlotSetFlag1C(temp_v5,temp_v7);
    }
    if (*(char *)(param_1 + 0x1168) == '\0') {
      dialogOpen(0);
      infoWinSetText(reinterpret_cast<const char *>(*(unsigned int *)(param_1 + 0x113c)), *(unsigned char *)(*(int *)(param_1 + 0x1118) + 0x3f));
      placeWinStartText(*(int *)(param_1 + 0x1118) + 2);
      placeWinSetValue(1);
      infoWinSetValue(1);
      return;
    }
    break;
  case 6:
    temp_v6 = FUN_004ba698(param_1 + 0x9c);
    if ((temp_v6 != 0) && (temp_v6 = screenFadeIsBusy(), temp_v6 == 0)) {
      if (*(char *)(param_1 + 0x1168) == '\0') {
        temp_v6 = 5;
        piVar11 = (int *)(param_1 + 0x28);
      }
      else {
        eventQueueAddUnique(0x1000222);
        frameTexInitActive();
        piVar11 = (int *)(param_1 + 0x2c);
        temp_v6 = *piVar11 + 1;
      }
      *piVar11 = temp_v6;
      piVar11[1] = 0;
      return;
    }
    break;
  case 7:
    temp_v6 = *(int *)(param_1 + 0x30) + 1;
    *(int *)(param_1 + 0x30) = temp_v6;
    if (temp_v6 == 1) {
      FUN_002e5924(4);
    }
    if (*(int *)(param_1 + 0x30) >= 4) {
      *(unsigned int *)(param_1 + 0x28) = 0x11;
      *(unsigned int *)(param_1 + 0x2c) = 0;
      return;
    }
    break;
  case 8:
    *(unsigned int *)(param_1 + 0x28) = 0x11;
    *(unsigned int *)(param_1 + 0x2c) = 0;
    return;
  }
  return;
}

} /* extern "C" */
