/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00202ea4` (_code @ 0x202ea4, 0xaa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysPlaySe(...);
int FUN_003180c4(...);
int obj04Finish(void);

int FUN_0014e188(...);
int FUN_001517b4(...);
int FUN_00163aa4(...);
int eventQueueAddUniqueIfValid(...);
int ifTouchRegionRemove(void);
int eventQueueAddUnique(...);
int FUN_001834a4(int, int);
int uiSpriteSetKeyframe(...);
int uiSpriteSetImageKeyframe(...);
int dataTableGet(...);
int FUN_0019de98(...);
int gameDataBlocksGetTableFlag(void);
int stateModeDispatch(...);
int scrRunOpcodesStub(...);
int FUN_00228b04(int, int);
int FUN_00275bc8(void);
int scrScriptProcessStartEntry(...);
int ifTouchRegionAdd(int, int, int, int);
int FUN_003450d4(...);
int messageMainSetFlag(...);
int fillThreeWordsWithByte(int, unsigned int);

/* stack frame of void: 4 slot(s), 13 byte(s) */
typedef struct {
    unsigned char sp34; /* 0x34: local_34 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} void_stack;

extern int g_config; /* 0x57f230 */
extern int g_gameState; /* 0x5f15fc */

/* Supplied declaration required: FUN_0014e188. */
/* Supplied declaration required: FUN_001517b4. */
/* Supplied declaration required: FUN_00163aa4. */
/* Supplied declaration required: eventQueueAddUniqueIfValid. */
/* Supplied declaration required: ifTouchRegionRemove. */
extern int FUN_001643a0(void);
/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: eventQueueAddUnique. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: uiSpriteSetKeyframe. */
/* Supplied declaration required: uiSpriteSetImageKeyframe. */
/* Supplied declaration required: dataTableGet. */
extern unsigned int dataTableGetCount(unsigned int);
extern int dataTableGetEntries(void);
/* Supplied declaration required: FUN_0019de98. */
/* Supplied declaration required: gameDataBlocksGetTableFlag. */
/* Supplied declaration required: stateModeDispatch. */
/* Supplied declaration required: scrRunOpcodesStub. */
/* Supplied declaration required: FUN_00228b04. */
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: scrScriptProcessStartEntry. */
/* Supplied declaration required: ifTouchRegionAdd. */
extern int FUN_002a4894(int);
extern int messageGetChoiceResult(void);
/* Supplied declaration required: FUN_003180c4. */
/* Supplied declaration required: FUN_003450d4. */
extern int uiSearchPrimary(int);
/* Supplied declaration required: obj04Finish. */
/* Supplied declaration required: messageMainSetFlag. */
extern int FUN_003d21dc(void);
extern int loadSlotIsLoaded(unsigned int);
/* Supplied declaration required: fillThreeWordsWithByte. */


void FUN_00202ea4(void)

{
/* irregular: 1 goto(s); 25 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  char *pcVar10;
  unsigned int temp_v10;
  char *pcVar12;
  char *pcVar13;
  int temp_v11;
  unsigned char temp_v12 [16];
  
  temp_v7 = g_config;
  FUN_00163aa4(g_config + 0x430);
  temp_v6 = g_config;
  temp_v11 = 0;
  switch(*(unsigned int *)(temp_v7 + 100)) {
  case 0:
    temp_v11 = *(int *)(temp_v7 + 0x7c);
    temp_v6 = temp_v8;
    if (temp_v11 != 0) {
      temp_v6 = *(int *)(temp_v7 + 0x80);
    }
    if (temp_v11 != 0 && temp_v6 != 0) {
      *(unsigned int *)(temp_v7 + 0x84) = 0;
      FUN_00275bc8();
      *(int *)(temp_v7 + 0x84) = temp_v11;
      messageMainSetFlag(0);
      temp_v6 = gameDataBlocksGetTableFlag();
      if ((temp_v6 == 4) && (*(char *)(temp_v7 + 0xc0) != '\0')) {
        scrScriptProcessStartEntry(*(unsigned int *)(temp_v7 + 0x84),1);
      }
      else {
        temp_v6 = FUN_003d21dc();
        if ((temp_v6 == 0) && (g_gameState != 0x2a)) {
          temp_v4 = *(unsigned int *)(temp_v7 + 0x84);
          temp_v9 = 0;
        }
        else {
          temp_v4 = *(unsigned int *)(temp_v7 + 0x84);
          temp_v9 = 2;
        }
        scrScriptProcessStartEntry(temp_v4,temp_v9);
      }
      temp_v4 = gameDataBlocksGetTableFlag();
      *(unsigned int *)(temp_v7 + 0x4c4) = temp_v4;
      temp_v7 = g_config;
      temp_v6 = 0;
      if (0 < *(short *)(g_config + 0x78)) {
        do {
          ifTouchRegionRemove();
          temp_v6 = temp_v6 + 1;
        } while (temp_v6 < *(short *)(temp_v7 + 0x78));
      }
      fillThreeWordsWithByte(temp_v7 + 0x6c,0xffffffff);
      temp_v3 = *(int *)(temp_v7 + 0x8c);
      *(unsigned short *)(temp_v7 + 0x78) = 0;
      temp_v6 = uiSearchPrimary(temp_v7);
      temp_v11 = 0;
      if (temp_v11 < temp_v6) {
        do {
          temp_v1 = FUN_001834a4(0x24,temp_v3 + temp_v11);
          temp_v2 = (int)*(short *)(temp_v1 + 8);
          ifTouchRegionAdd(temp_v2,(int)*(short *)(temp_v1 + 10),(int)**(short **)(temp_v1 + 0xc),
                       (int)(*(short **)(temp_v1 + 0xc))[1]);
          temp_v1 = temp_v11 * 2;
          temp_v11 = temp_v11 + 1;
          *(short *)(temp_v7 + temp_v1 + 0x6e) = (short)temp_v2;
          *(short *)(temp_v7 + 0x78) = *(short *)(temp_v7 + 0x78) + 1;
        } while (temp_v11 < temp_v6);
      }
      temp_v7 = g_config;
      *(unsigned int *)(g_config + 100) = 1;
      *(unsigned int *)(temp_v7 + 0x68) = 0;
    }
    break;
  case 1:
    FUN_00163aa4(temp_v7 + 0xe8);
    temp_v6 = uiSearchPrimary(temp_v7);
    temp_v11 = 0;
    if (0 < temp_v6) {
      do {
        FUN_00163aa4(temp_v7 + temp_v11 * 0x8c + 0x174);
        temp_v11 = temp_v11 + 1;
      } while (temp_v11 < temp_v6);
    }
    temp_v0 = *(char *)(temp_v7 + temp_v6 * 0x8c + 0x172);
    *(int *)(temp_v7 + 0x4bc) = *(int *)(temp_v7 + 0x4bc) + 1;
    if (temp_v0 != '\0') {
      temp_v10 = *(unsigned int *)(temp_v7 + *(int *)(temp_v7 + 0x88) * 8 + 0x98);
      temp_v4 = dataTableGet(0x36,1);
      temp_v7 = dataTableGetEntries();
      temp_v5 = dataTableGetCount(temp_v4);
      if (temp_v10 >= temp_v5) {
        temp_v7 = 0;
      }
      else {
        temp_v7 = temp_v7 + temp_v10 * 0x44;
      }
      FUN_0019de98(temp_v7,0xf4f4f4ff);
      temp_v7 = g_config;
      *(unsigned int *)(g_config + 100) = 2;
      *(unsigned int *)(temp_v7 + 0x68) = 0;
      return;
    }
    break;
  case 2:
    temp_v12[0] = 0;
    FUN_001834a4(0x24,0x59);
    scrRunOpcodesStub(*(unsigned int *)(temp_v7 + 0x84));
    temp_v3 = FUN_001643a0();
    temp_v6 = temp_v7;
    FUN_00228b04(temp_v7,1);
    if ((temp_v6 != 0) ||
       (temp_v6 = temp_v7,
       FUN_003450d4(temp_v7,0,temp_v7 + 0x6e,0xffffffff,0xffffffff,0xffffffff,temp_v12,0,1), temp_v6 != 0)
       ) {
      temp_v6 = FUN_002a4894(temp_v7);
      *(int *)(temp_v7 + 0x88) = temp_v6;
      temp_v10 = *(unsigned int *)(temp_v7 + temp_v6 * 8 + 0x98);
      temp_v4 = dataTableGet(0x36,1);
      temp_v7 = dataTableGetEntries();
      temp_v5 = dataTableGetCount(temp_v4);
      if (temp_v10 < temp_v5) {
        temp_v11 = temp_v7 + temp_v10 * 0x44;
      }
      FUN_0019de98(temp_v11,0xf4f4f4ff);
      return;
    }
    temp_v6 = 0;
    FUN_001517b4(0,1);
    if ((temp_v6 == 0) && (temp_v3 != 6)) {
      temp_v6 = 1;
      FUN_001517b4();
      if (temp_v6 != 0) {
        eventQueueAddUniqueIfValid(0x100020f);
        messageMainSetFlag(1);
        FUN_0019de98(0,0xf4f4f4ff);
        uiSpriteSetKeyframe(temp_v7 + 0xe8,1,0);
        uiSpriteSetImageKeyframe(temp_v7 + 0xe8,1,0);
        temp_v6 = 0;
        do {
          temp_v11 = temp_v7 + temp_v6 * 0x8c;
          FUN_0014e188(temp_v11 + 0x174,0x24,0x57,temp_v7 + 200,1);
          uiSpriteSetKeyframe(temp_v11 + 0x174,1,0);
          uiSpriteSetImageKeyframe(temp_v11 + 0x174,1,0);
          temp_v6 = temp_v6 + 1;
        } while (temp_v6 < 5);
        *(unsigned int *)(temp_v7 + 0x4bc) = 0;
        temp_v7 = g_config;
        *(unsigned int *)(g_config + 100) = 4;
        *(unsigned int *)(temp_v7 + 0x68) = 0;
        return;
      }
    }
    else if ((*(char *)(temp_v7 + 0xc0) == '\0') ||
            (temp_v6 = gameDataBlocksGetTableFlag(), temp_v6 != *(int *)(temp_v7 + *(int *)(temp_v7 + 0x88) * 8 + 0x94)))
    {
      temp_v7 = g_config;
      if (*(char *)(g_config + 0xc0) != '\0') {
        gameDataBlocksGetTableFlag();
        temp_v6 = gameDataBlocksGetTableFlag();
        if (((temp_v6 == 4) || (temp_v6 = FUN_003d21dc(), temp_v6 != 0)) || (g_gameState == 0x2a)) {
          eventQueueAddUnique(0x100020f);
          temp_v7 = g_config;
          *(unsigned int *)(g_config + 100) = 2;
          *(unsigned int *)(temp_v7 + 0x68) = 0;
          return;
        }
        *(unsigned int *)(temp_v7 + 0xc4) = *(unsigned int *)(temp_v7 + 0xbc);
        temp_v4 = gameDataBlocksGetTableFlag();
        *(unsigned int *)(temp_v7 + 0x4c4) = temp_v4;
        *(unsigned int *)(temp_v7 + 0x4c8) = *(unsigned int *)(temp_v7 + *(int *)(temp_v7 + 0x88) * 8 + 0x94);
        stateModeDispatch();
        temp_v4 = *(unsigned int *)(temp_v7 + 0x84);
        temp_v9 = 9;
      }
      else {
        temp_v4 = gameDataBlocksGetTableFlag();
        *(unsigned int *)(temp_v7 + 0xc4) = temp_v4;
        stateModeDispatch(*(unsigned int *)(temp_v7 + *(int *)(temp_v7 + 0x88) * 8 + 0x94));
        temp_v4 = *(unsigned int *)(temp_v7 + 0x84);
        temp_v9 = 7;
      }
      scrScriptProcessStartEntry(temp_v4,temp_v9);
      eventQueueAddUnique(0x100020e);
      obj04Finish();
      messageMainSetFlag(1);
      sysPlaySe(0xa0);
      temp_v7 = g_config;
      *(unsigned int *)(g_config + 100) = 3;
      *(unsigned int *)(temp_v7 + 0x68) = 0;
      return;
    }
    break;
  case 3:
    pcVar12 = "NoTableLoaded";
    pcVar13 = "NoName";
    switch(*(unsigned int *)(g_config + 0x68)) {
    case 0:
      if (*(char *)(g_config + 0xc0) != '\0') {
        temp_v4 = 6;
        *(unsigned int *)(temp_v6 + 0x68) = temp_v4;
        return;
      }
      *(unsigned int *)(g_config + 0x68) = 1;
      break;
    case 1:
      temp_v7 = scrRunOpcodesStub(*(unsigned int *)(g_config + 0x84));
      if (temp_v7 == 2) {
        temp_v7 = messageGetChoiceResult();
        if (temp_v7 != 0) {
          stateModeDispatch(*(unsigned int *)(temp_v6 + 0xc4));
          sysPlaySe(5);
          *(unsigned int *)(temp_v6 + 0x68) = 5;
          return;
        }
        if (*(char *)(temp_v6 + 0xc0) == '\0') {
          *(unsigned int *)(temp_v6 + 0xbc) = *(unsigned int *)(temp_v6 + *(int *)(temp_v6 + 0x88) * 8 + 0x94)
          ;
          stateModeDispatch();
          temp_v4 = gameDataBlocksGetTableFlag();
          *(unsigned int *)(temp_v6 + 0x4c4) = temp_v4;
          messageMainSetFlag(1);
          scrScriptProcessStartEntry(*(unsigned int *)(temp_v6 + 0x84),8);
          sysPlaySe(5);
          temp_v7 = g_config;
          *(unsigned int *)(g_config + 100) = 5;
          *(unsigned int *)(temp_v7 + 0x68) = 0;
          return;
        }
        *(unsigned int *)(temp_v6 + 0xbc) = *(unsigned int *)(temp_v6 + *(int *)(temp_v6 + 0x88) * 8 + 0x94);
        stateModeDispatch();
        temp_v4 = gameDataBlocksGetTableFlag();
        *(unsigned int *)(temp_v6 + 0x68) = 3;
        *(unsigned int *)(temp_v6 + 0x4c4) = temp_v4;
        return;
      }
      break;
    case 2:
      temp_v7 = scrRunOpcodesStub(*(unsigned int *)(g_config + 0x84));
      if (temp_v7 == 2) {
        temp_v7 = messageGetChoiceResult();
        if (temp_v7 != 0) {
          stateModeDispatch(*(unsigned int *)(temp_v6 + 0xc4));
          sysPlaySe(5);
          *(unsigned int *)(temp_v6 + 0x68) = 5;
          return;
        }
        *(unsigned int *)(temp_v6 + 0xbc) = *(unsigned int *)(temp_v6 + *(int *)(temp_v6 + 0x88) * 8 + 0x94);
        stateModeDispatch();
        temp_v4 = gameDataBlocksGetTableFlag();
        *(unsigned int *)(temp_v6 + 0x68) = 3;
        *(unsigned int *)(temp_v6 + 0x4c4) = temp_v4;
        return;
      }
      break;
    case 3:
      temp_v11 = *(int *)(g_config + 0xbc);
      temp_v7 = loadSlotIsLoaded(0x36);
      if ((temp_v7 != 0) && (pcVar12 = pcVar13, temp_v11 < 5)) {
        switch((short)temp_v11) {
        case 0:
          temp_v7 = 2;
          break;
        case 1:
          temp_v7 = 1;
          break;
        case 2:
          temp_v7 = 3;
          break;
        case 3:
          temp_v7 = 0;
          break;
        case 4:
          temp_v7 = 4;
          break;
        default:
          temp_v7 = -1;
        }
        dataTableGet(0x36,0);
        temp_v11 = dataTableGetEntries();
        pcVar12 = (char *)(temp_v11 + temp_v7 * 0xc + 0x1e);
      }
      FUN_003180c4(0,pcVar12);
      scrScriptProcessStartEntry(*(unsigned int *)(temp_v6 + 0x84),5);
      temp_v4 = 4;
      *(unsigned int *)(temp_v6 + 0x68) = temp_v4;
      return;
    case 4:
      temp_v7 = scrRunOpcodesStub(*(unsigned int *)(g_config + 0x84));
      if (temp_v7 == 2) {
        sysPlaySe(5);
        *(unsigned int *)(temp_v6 + 0x68) = 5;
        goto LAB_00203688;
      }
      break;
    case 5:
LAB_00203688:
      temp_v7 = gameDataBlocksGetTableFlag();
      if ((temp_v7 == 4) && (*(char *)(temp_v6 + 0xc0) != '\0')) {
        scrScriptProcessStartEntry(*(unsigned int *)(temp_v6 + 0x84),1);
      }
      else {
        temp_v7 = FUN_003d21dc();
        if ((temp_v7 == 0) && (g_gameState != 0x2a)) {
          temp_v4 = *(unsigned int *)(temp_v6 + 0x84);
          temp_v9 = 0;
        }
        else {
          temp_v4 = *(unsigned int *)(temp_v6 + 0x84);
          temp_v9 = 2;
        }
        scrScriptProcessStartEntry(temp_v4,temp_v9);
      }
      messageMainSetFlag(0);
      temp_v7 = g_config;
      *(unsigned int *)(g_config + 100) = 2;
      *(unsigned int *)(temp_v7 + 0x68) = 0;
      return;
    case 6:
      temp_v7 = scrRunOpcodesStub(*(unsigned int *)(g_config + 0x84));
      if (temp_v7 == 2) {
        stateModeDispatch(*(unsigned int *)(temp_v6 + 0x4c4));
        temp_v7 = gameDataBlocksGetTableFlag();
        temp_v11 = loadSlotIsLoaded(0x36);
        pcVar10 = pcVar12;
        if ((temp_v11 != 0) && (pcVar10 = pcVar13, temp_v7 < 5)) {
          switch((short)temp_v7) {
          case 0:
            temp_v7 = 2;
            break;
          case 1:
            temp_v7 = 1;
            break;
          case 2:
            temp_v7 = 3;
            break;
          case 3:
            temp_v7 = 0;
            break;
          case 4:
            temp_v7 = 4;
            break;
          default:
            temp_v7 = -1;
          }
          dataTableGet(0x36,0);
          temp_v11 = dataTableGetEntries();
          pcVar10 = (char *)(temp_v11 + temp_v7 * 0xc + 0x1e);
        }
        FUN_003180c4(0,pcVar10);
        temp_v11 = *(int *)(temp_v6 + *(int *)(temp_v6 + 0x88) * 8 + 0x94);
        temp_v7 = loadSlotIsLoaded(0x36);
        if ((temp_v7 != 0) && (pcVar12 = pcVar13, temp_v11 < 5)) {
          switch((short)temp_v11) {
          case 0:
            temp_v7 = 2;
            break;
          case 1:
            temp_v7 = 1;
            break;
          case 2:
            temp_v7 = 3;
            break;
          case 3:
            temp_v7 = 0;
            break;
          case 4:
            temp_v7 = 4;
            break;
          default:
            temp_v7 = -1;
          }
          dataTableGet(0x36,0);
          temp_v11 = dataTableGetEntries();
          pcVar12 = (char *)(temp_v11 + temp_v7 * 0xc + 0x1e);
        }
        FUN_003180c4(1,pcVar12);
        scrScriptProcessStartEntry(*(unsigned int *)(temp_v6 + 0x84),3);
        *(unsigned int *)(temp_v6 + 0x68) = 1;
        return;
      }
    }
    break;
  case 4:
    FUN_00163aa4(temp_v7 + 0xe8);
    temp_v6 = uiSearchPrimary(temp_v7);
    temp_v11 = 0;
    if (0 < temp_v6) {
      do {
        FUN_00163aa4(temp_v7 + temp_v11 * 0x8c + 0x174);
        temp_v11 = temp_v11 + 1;
      } while (temp_v11 < temp_v6);
    }
    if (*(char *)(temp_v7 + temp_v6 * 0x8c + 0x172) != '\0') {
      temp_v7 = g_config;
      *(unsigned int *)(g_config + 100) = 6;
      *(unsigned int *)(temp_v7 + 0x68) = 0;
      return;
    }
    break;
  case 5:
    temp_v7 = scrRunOpcodesStub(*(unsigned int *)(temp_v7 + 0x84));
    if (temp_v7 == 2) {
      temp_v7 = g_config;
      *(unsigned int *)(g_config + 100) = 6;
      *(unsigned int *)(temp_v7 + 0x68) = 0;
      return;
    }
  }
  return;
}

} /* extern "C" */
