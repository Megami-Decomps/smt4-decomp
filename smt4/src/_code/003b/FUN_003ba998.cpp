/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ba998` (_code @ 0x3ba998, 0x6e4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/W6_W6Match3_NodeEnable.h"
#include "font/PlaceWin.h"
#include "shard/W6_W6Match2_EntrySequence.h"
#include "battle/btlHelp.h"

struct Mover;
extern "C" {

int FUN_0022afb0(...);
int FUN_0022afc4(...);
int objBlockInitAndMark(int);
int buttonHelpSelectByProgress(int);
int modelSetVisible(...);
int FUN_0022b6c4(int);
int FUN_00234cd8(...);
void nodeOwnerSetEnabled(NodeEnableOwner* owner, int enabled);
int FUN_00234f5c(...);
void FUN_00235250(Mover *mover);
int frameTexApplyMode(...);
int FUN_00275dec(void);
int dialogOpen(...);
int infoWinSetMessage(...);
int FUN_002a03d8(int, int);
int objModelCreateFromSource(...);
int eventQueueAddUnique(...);
int textFormatBuffer(...);
int asdOperatorNew(void);
int dataTable33GetEntries(void);

int FUN_0022b29c(int, int, unsigned int);
int FUN_0022b778(void);
int listScrollToId(int, int);
int FUN_002305e8(...);
int FUN_00233808(int);
int FUN_002636b0(void);
int FUN_0026faa4(void);
int FUN_0026fe0c(void);
int FUN_0026ff54(void);
int FUN_00273c54(void);
int FUN_00273d34(void);
int FUN_00273f5c(void);
int campGetState(void);
int FUN_00275be8(int);
int FUN_00275dc4(void);
int mapClearPendingEntries(void);
int naviClearObjectBlock(void);
int FUN_00287c34(int);
int FUN_00289880(void);
int FUN_0028a420(int);
int infoWinStartTimer(int);
int messageMainFinishWindow(void);
int slotSetRequest(int, int, int);
int FUN_002a4bac(unsigned int);
int asdMemFreeNonNull(int);
int dataTable1bOr1cGetRecord(void);
int asdMemFree(void);
int commonBgStopChildAndReset(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
} param_1_stack;

extern unsigned char LAB_003bb08c; /* 0x3bb08c */
extern unsigned char LAB_003bb098; /* 0x3bb098 */
extern signed char DAT_0049f950; /* 0x49f950 */
extern unsigned short DAT_0049fa80; /* 0x49fa80 */
extern unsigned short DAT_0049fa82; /* 0x49fa82 */
extern unsigned char DAT_0049fa84; /* 0x49fa84 */
extern unsigned short DAT_0049fa94; /* 0x49fa94 */
extern unsigned short DAT_0049fa96; /* 0x49fa96 */
extern int DAT_0049fd14; /* 0x49fd14 */

/* Supplied declaration required: FUN_0022af9c. */
/* Supplied declaration required: FUN_0022afb0. */
/* Supplied declaration required: FUN_0022afc4. */
/* Supplied declaration required: objBlockInitAndMark. */
/* Supplied declaration required: buttonHelpSelectByProgress. */
extern int listUpdateRevealTransition(int);
/* Supplied declaration required: modelSetVisible. */
/* Supplied declaration required: FUN_0022b29c. */
/* Supplied declaration required: FUN_0022b6c4. */
/* Supplied declaration required: FUN_0022b778. */
extern int FUN_0022b8c0(int);
/* Supplied declaration required: listScrollToId. */
/* Supplied declaration required: FUN_002305e8. */
extern unsigned short flaggedValueHolderGetTotal(int);
/* Supplied declaration required: FUN_00233808. */
/* Supplied declaration required: FUN_00234cd8. */
/* Supplied declaration required: nodeOwnerSetEnabled. */
/* Supplied declaration required: FUN_00234f5c. */
/* Supplied declaration required: FUN_00235250. */
/* Supplied declaration required: FUN_002636b0. */
/* Supplied declaration required: placeWinStartText. */
/* Supplied declaration required: FUN_0026faa4. */
/* Supplied declaration required: FUN_0026fe0c. */
/* Supplied declaration required: FUN_0026ff54. */
/* Supplied declaration required: frameTexApplyMode. */
/* Supplied declaration required: FUN_00273c54. */
/* Supplied declaration required: FUN_00273d34. */
/* Supplied declaration required: FUN_00273f5c. */
/* Supplied declaration required: campGetState. */
/* Supplied declaration required: FUN_00275be8. */
/* Supplied declaration required: FUN_00275dc4. */
/* Supplied declaration required: FUN_00275dec. */
/* Supplied declaration required: mapClearPendingEntries. */
/* Supplied declaration required: naviClearObjectBlock. */
/* Supplied declaration required: dialogOpen. */
/* Supplied declaration required: infoWinSetMessage. */
extern int screenFadeIsBusy(void);
/* Supplied declaration required: FUN_00287c34. */
/* Supplied declaration required: FUN_00289880. */
/* Supplied declaration required: FUN_0028a420. */
/* Supplied declaration required: infoWinStartTimer. */
/* Supplied declaration required: messageMainFinishWindow. */
/* Supplied declaration required: slotSetRequest. */
/* Supplied declaration required: FUN_002a03d8. */
/* Supplied declaration required: objModelCreateFromSource. */
/* Supplied declaration required: FUN_002a4bac. */
/* Supplied declaration required: asdMemFreeNonNull. */
/* Supplied declaration required: dataTable1bOr1cGetRecord. */
extern int FUN_002b8694(void);
/* Supplied declaration required: eventQueueAddUnique. */
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: libc_strcpy. */
extern int gameDataBlocksGetSaveData(void);
extern int gameFlagIsSet(void);
extern int _ZN10FloatStateC1Ev(int);
/* Supplied declaration required: asdOperatorNew. */
extern int gameGetMapBlock(void);
extern unsigned int fileLoadSync(unsigned char *, int, unsigned int);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: commonBgStopChildAndReset. */
/* Supplied declaration required: dataTable33GetEntries. */


void FUN_003ba998(int param_1)

{
/* irregular: 51 native warning(s); review required */
  unsigned char temp_v0;
  char temp_v1;
  unsigned short temp_v2;
  char *pcVar4;
  unsigned int temp_v3;
  int temp_v4;
  unsigned char *puVar7;
  unsigned int temp_v5;
  int temp_v6;
  unsigned char *puVar10;
  int temp_v7;
  int *piVar12;
  unsigned char temp_v8;
  unsigned char temp_v9 [128];
  unsigned char temp_v10 [128];
  unsigned char temp_v11 [4];
  
  FUN_0022b778();
  piVar12 = (int *)(param_1 + 0xe5c);
  switch(*(unsigned int *)(param_1 + 0x2c)) {
  case 0:
    FUN_002305e8(0);
    FUN_0022af9c(0);
    FUN_00275dc4();
    FUN_00275be8(1);
    if ((*(unsigned int *)(param_1 + 0x20) & 0x40) != 0) {
      *(unsigned int *)(param_1 + 0x20) = *(unsigned int *)(param_1 + 0x20) & 0xffffffbf;
      messageMainFinishWindow();
    }
    *(unsigned char *)(param_1 + 0xdac) = 0;
    temp_v6 = *(int *)(param_1 + 0x2c) + 1;
    *(int *)(param_1 + 0x2c) = temp_v6;
    break;
  case 1:
    infoWinStartTimer(0);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    *(unsigned int *)(param_1 + 0x30) = 0;
    commonBgStopChildAndReset();
    if (*(char *)(param_1 + 0xe58) != '\0') {
      FUN_002a4bac(*(unsigned int *)(param_1 + 0xe5c));
      if (*piVar12 != 0) {
        asdMemFreeNonNull(*piVar12);
      }
      temp_v6 = 0;
      *(unsigned int *)(param_1 + 0xe5c) = 0;
      do {
        piVar12 = (int *)(param_1 + temp_v6 * 4 + 0xe60);
        if (*piVar12 != 0) {
          asdMemFree();
          *piVar12 = 0;
        }
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < 10);
    }
    FUN_002636b0();
    return;
  case 2:
    temp_v6 = *(int *)(param_1 + 0x30) + 1;
    *(int *)(param_1 + 0x30) = temp_v6;
    if (temp_v6 < 10) {
      return;
    }
    FUN_00233808(param_1 + 0x9c);
    FUN_0028a420(0);
    *(unsigned char *)(param_1 + 0x6cc) = 1;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  case 3:
    temp_v6 = FUN_0017fb54();
    if ((temp_v6 != 0) || (temp_v6 = FUN_002b8694(), temp_v6 == 0)) {
      if (DAT_0049f950 == '\0') {
        slotSetRequest(1,10,0xff);
      }
      temp_v6 = *(int *)(param_1 + 0x2c) + 1;
      *(int *)(param_1 + 0x2c) = temp_v6;
    }
    break;
  case 4:
    temp_v6 = FUN_002b8694();
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
        dataTable1bOr1cGetRecord();
        DAT_0049fa82 = *(unsigned short *)(temp_v3 + 2);
        libc_strcpy(reinterpret_cast<unsigned int *>(&DAT_0049fa84), reinterpret_cast<unsigned int *>(temp_v3 + 0x138));
        DAT_0049fa80 = 1;
      }
      else if (pcVar4[3] != '\0') {
        DAT_0049fa96 = 1;
      }
      temp_v6 = gameGetMapBlock();
      *(unsigned short *)(temp_v6 + 0x22) = 0;
      FUN_00273f5c();
      naviClearObjectBlock();
      mapClearPendingEntries();
      if (pcVar4[2] != '\0') {
        DAT_0049fa94 = 1;
      }
      if (*pcVar4 != '\0') {
        *(unsigned char *)(param_1 + 0xdac) = 1;
      }
      else {
        temp_v6 = gameGetMapBlock();
        *(unsigned short *)(temp_v6 + 0x1e) = *(unsigned short *)(pcVar4 + 6);
        FUN_00273d34();
        FUN_00273c54();
      }
    }
    if (DAT_0049f950 == '\0') {
      temp_v6 = *(int *)(param_1 + 0x2c) + 1;
    }
    else {
      FUN_0026ff54();
      FUN_00287c34(1);
      FUN_00275be8(0);
      temp_v6 = gameDataBlocksGetSaveData();
      if (*(unsigned char *)(temp_v6 + 2) >= 2) {
        if (*(unsigned char *)(temp_v6 + 2) == 2) {
          *(unsigned char *)(param_1 + 0x4b) = 1;
        }
      }
      else {
        FUN_0026fe0c();
        FUN_0026faa4();
        if (DAT_0049fd14 >= 200) {
          *(unsigned char *)(param_1 + 0x4a) = 1;
        }
        else if (DAT_0049fd14 >= 100) {
          *(unsigned char *)(param_1 + 0x48) = 1;
        }
        else {
          *(unsigned char *)(param_1 + 0x49) = 1;
        }
      }
      temp_v6 = 8;
    }
    *(int *)(param_1 + 0x2c) = temp_v6;
    break;
  case 5:
    temp_v6 = campGetState();
    if (*(char *)(temp_v6 + 4) != '\0') {
      temp_v6 = FUN_0022b8c0(param_1 + 0x9c);
      temp_v0 = *(unsigned char *)(temp_v6 + 0x20);
      FUN_0022b29c(param_1,(int)*(short *)(param_1 + 0x3c),*(unsigned int *)(param_1 + 0xd64));
      listScrollToId(param_1 + 0x9c,temp_v0);
      temp_v2 = flaggedValueHolderGetTotal(param_1 + 0x9c);
      *(unsigned short *)(param_1 + 0x4c) = temp_v2;
    }
    FUN_00275be8(0);
    FUN_00289880();
    objBlockInitAndMark(param_1 + 0x9c);
    FUN_0022b6c4(param_1 + 0x9c);
    *(unsigned char *)(param_1 + 0x6cc) = 0;
    buttonHelpSelectByProgress(param_1);
    temp_v6 = campGetState();
    temp_v1 = *(char *)(temp_v6 + 10);
    temp_v8 = temp_v1 == '\0';
    if (temp_v8) {
      temp_v1 = *(char *)(param_1 + 0xdac);
    }
    if (temp_v8 && temp_v1 == '\0') {
      FUN_002a03d8(1,10);
    }
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    if (*(char *)(param_1 + 0xe58) != '\0') {
      temp_v4 = 0x17f0;
      asdOperatorNew();
      temp_v6 = 0;
      if (temp_v4 != 0) {
        temp_v6 = _ZN10FloatStateC1Ev(temp_v4 + 0x4cc);
        temp_v6 = temp_v6 - 0x4cc;
      }
      *(int *)(param_1 + 0xe5c) = temp_v6;
      FUN_00235250(reinterpret_cast<Mover *>(temp_v6));
      textFormatBuffer(temp_v9,&LAB_003bb08c,*(int *)(param_1 + 0xd5c) + 0x40);
      if (((*(short *)(*(int *)(param_1 + 0xd5c) + 100) != 0) &&
          (temp_v6 = gameFlagIsSet(), temp_v6 != 0)) ||
         ((*(short *)(*(int *)(param_1 + 0xd5c) + 0x66) != 0 && (temp_v6 = gameFlagIsSet(), temp_v6 != 0)
          ))) {
        textFormatBuffer(temp_v10,&LAB_003bb08c,*(int *)(param_1 + 0xd5c) + 0x68);
        FUN_00234f5c(*(unsigned int *)(param_1 + 0xe5c),temp_v9,temp_v10);
      }
      else {
        FUN_00234f5c(*(unsigned int *)(param_1 + 0xe5c),temp_v9,0);
      }
      temp_v6 = FUN_0022b8c0(param_1 + 0x9c);
      FUN_0022afc4(*(unsigned int *)(param_1 + 0xe5c),0,0xffffffff);
      FUN_00234cd8(*piVar12,(int)*(short *)(temp_v6 + 0x28),1);
      if (-1 < *(int *)(*(int *)(param_1 + 0xd5c) + 0x60)) {
        puVar10 = temp_v11;
        dataTable33GetEntries();
        if (puVar10 != (unsigned char *)0x0) {
          temp_v4 = 0;
          puVar7 = temp_v11;
          FUN_0022afb0(puVar7,*(unsigned int *)(*(int *)(param_1 + 0xd5c) + 0x60));
          if (0 < (int)puVar7) {
            do {
              textFormatBuffer(temp_v9,&LAB_003bb098,puVar10);
              temp_v7 = param_1 + temp_v4 * 4;
              temp_v5 = fileLoadSync(temp_v9,temp_v7 + 0xe88,1);
              *(unsigned int *)(temp_v7 + 0xe60) = temp_v5;
              puVar10 = puVar10 + 0x20;
              temp_v4 = temp_v4 + 1;
              puVar7 = temp_v11;
              FUN_0022afb0(puVar7,*(unsigned int *)(*(int *)(param_1 + 0xd5c) + 0x60));
            } while (temp_v4 < (int)puVar7);
          }
          temp_v4 = param_1 + *(char *)(temp_v6 + 0x2b) * 4;
          objModelCreateFromSource(*(unsigned int *)(param_1 + 0xe5c),*(unsigned int *)(temp_v4 + 0xe60),
                       *(unsigned int *)(temp_v4 + 0xe88));
        }
      }
      if ((!(*(short *)(param_1 + 0x3c) == 4 || *(short *)(param_1 + 0x3c) == 3)) ||
         (!(*(short *)(temp_v6 + 0x28) == 0 || *(short *)(temp_v6 + 0x28) == 6))) {
        modelSetVisible(*(unsigned int *)(param_1 + 0xe5c),0);
        temp_v6 = *piVar12;
        temp_v5 = 1;
      }
      else {
        modelSetVisible(*(unsigned int *)(param_1 + 0xe5c),1);
        temp_v6 = *piVar12;
        temp_v5 = 0;
      }
      nodeOwnerSetEnabled((NodeEnableOwner*)temp_v6,temp_v5);
    }
    if (*(char *)(param_1 + 0xdac) == '\0') {
      dialogOpen(0);
      infoWinSetMessage(*(unsigned int *)(param_1 + 0xd80),
                   *(unsigned char *)(*(int *)(param_1 + 0xd5c) + 0x3f));
      placeWinStartText(reinterpret_cast<const u8 *>(*(int *)(param_1 + 0xd5c) + 2));
      FUN_002305e8(1);
      FUN_0022af9c(1);
      return;
    }
    break;
  case 6:
    temp_v6 = listUpdateRevealTransition(param_1 + 0x9c);
    if ((temp_v6 != 0) && (temp_v6 = screenFadeIsBusy(), temp_v6 == 0)) {
      if (*(char *)(param_1 + 0xdac) == '\0') {
        temp_v6 = 5;
        piVar12 = (int *)(param_1 + 0x28);
      }
      else {
        eventQueueAddUnique(0x1000184);
        FUN_00275dec();
        piVar12 = (int *)(param_1 + 0x2c);
        temp_v6 = *piVar12 + 1;
      }
      *piVar12 = temp_v6;
      piVar12[1] = 0;
      return;
    }
    break;
  case 7:
    temp_v6 = *(int *)(param_1 + 0x30) + 1;
    *(int *)(param_1 + 0x30) = temp_v6;
    if (temp_v6 == 1) {
      frameTexApplyMode(4);
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
