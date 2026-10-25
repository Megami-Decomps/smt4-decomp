/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a5200` (_code @ 0x3a5200, 0xe58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(...);
int FUN_00275bc8(void);
int asdLoadFileAsyncSimple(...);
int messageDismissNumericBanner(void);
int messageMainStartMenuAnimationIfEnabled(void);

int FUN_00184310(void);
int FUN_00184964(...);
int __aeabi_memset4(...);
int FUN_00280250(void);
int FUN_002a17d4(...);
int gameDataGetRecordValue(void);
int FUN_002bf520(void);
int libc_strcpy(...);
int FUN_002e59f8(void);
int FUN_003180c4(...);
int cecProcessCall1(void);
int FUN_0031cf00(...);
int FUN_0032e25c(...);
int playerSummaryFill(void);
int FUN_00330b7c(void);
int FUN_00333474(...);
int FUN_00359974(...);
int dataTable4ACount(void);
int FUN_0036d41c(void);
int gameDataAddMoneySaturating(...);
int FUN_0037be64(void);
int gameDataBlocksGetWord27E90(void);
int dataTable4AType2Count(void);
int dataTable4AType1Count(void);
int SBORROW4(...);
int __aeabi_idivmod(...);

int gameDataFlagsClearBits(...);
int gameDataBlocksReleaseHold(...);
int sysPlaySe(...);
int messageSetMode(int);
int runWinClose(void);
int scrRunOpcodesStub(...);
int gameDataBlocksAddFlags(int);
int scrScriptProcessStartEntry(...);
int gameDataAddHomeButtonHold(...);
int dataStoreGetValue50(void);
int FUN_0031d5e8(int);
int dataStoreGetProgress(void);
int cecProcessCall3(void);
int dataStoreShutdown(void);
int maskToCode(...);
int campCecSetValue(int);
int __aeabi_memcpy4(int, unsigned int, int);

/* stack frame of param_2: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp184; /* 0x184: local_184 */
    unsigned int sp188; /* 0x188: local_188 */
    unsigned int sp1A8; /* 0x1a8: local_1a8 */
} param_2_stack;

extern unsigned char LAB_003a6070; /* 0x3a6070 */
extern unsigned char LAB_003a6090; /* 0x3a6090 */
extern unsigned char DAT_0052c758; /* 0x52c758 */
extern int g_campCecRecv; /* 0x57f128 */

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: gameDataFlagsClearBits. */
/* Supplied declaration required: gameDataBlocksReleaseHold. */
/* Supplied declaration required: sysPlaySe. */
extern int itemGetStackLimit(short);
/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: FUN_00184964. */
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: messageSetMode. */
extern int gameGetSlotTable(void);
/* Supplied declaration required: __aeabi_memset4. */
extern int FUN_001ba3d4(short);
/* Supplied declaration required: runWinClose. */
/* Supplied declaration required: scrRunOpcodesStub. */
/* Supplied declaration required: gameDataBlocksAddFlags. */
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: scrScriptProcessStartEntry. */
/* Supplied declaration required: FUN_00280250. */
/* Supplied declaration required: asdLoadFileAsyncSimple. */
/* Supplied declaration required: FUN_002a17d4. */
extern unsigned int dataStoreGetEntry(int);
/* Supplied declaration required: gameDataGetRecordValue. */
extern int messageGetChoiceResult(void);
/* Supplied declaration required: FUN_002bf520. */
/* Supplied declaration required: gameDataAddHomeButtonHold. */
/* Supplied declaration required: libc_strcpy. */
/* Supplied declaration required: FUN_002e59f8. */
extern int asdCecInboxGetMessageCount(void);
/* Supplied declaration required: FUN_003180c4. */
extern short *dataTable4AGetEntry(int);
/* Supplied declaration required: cecProcessCall1. */
/* Supplied declaration required: dataStoreGetValue50. */
extern int FUN_0031cee0(void);
/* Supplied declaration required: FUN_0031cf00. */
/* Supplied declaration required: FUN_0031d5e8. */
/* Supplied declaration required: FUN_0032e25c. */
/* Supplied declaration required: playerSummaryFill. */
extern int cecProcessGetEntry(int);
extern int FUN_0033004c(void);
/* Supplied declaration required: dataStoreGetProgress. */
/* Supplied declaration required: FUN_00330b7c. */
extern int FUN_003316b4(int);
/* Supplied declaration required: FUN_00333474. */
extern int gameDataTestFlags(unsigned int);
extern int dataStoreIsReady(void);
/* Supplied declaration required: FUN_00359974. */
extern int playerSummaryIsIncomplete(int);
/* Supplied declaration required: dataTable4ACount. */
/* Supplied declaration required: cecProcessCall3. */
/* Supplied declaration required: dataStoreShutdown. */
/* Supplied declaration required: FUN_0036d41c. */
/* Supplied declaration required: gameDataAddMoneySaturating. */
/* Supplied declaration required: FUN_0037be64. */
/* Supplied declaration required: gameDataBlocksGetWord27E90. */
/* Supplied declaration required: maskToCode. */
extern short *dataTable4AGetEntry8(int);
/* Supplied declaration required: campCecSetValue. */
/* Supplied declaration required: messageDismissNumericBanner. */
extern short *dataTable4AType1GetEntry8(short *);
/* Supplied declaration required: messageMainStartMenuAnimationIfEnabled. */
extern int dataStoreIsFinished(void);
extern int dataStoreIsIdle(void);
/* Supplied declaration required: dataTable4AType2Count. */
/* Supplied declaration required: dataTable4AType1Count. */
extern int gameStockContainsEntry(unsigned short);
/* Supplied declaration required: __aeabi_idivmod. */
/* Supplied declaration required: __aeabi_memcpy4. */


unsigned int FUN_003a5200(int param_1,int param_2)

{
/* irregular: 17 unstructured edge(s); 3 goto(s); 49 native warning(s); review required */
  char temp_v0;
  unsigned short temp_v1;
  short temp_v2;
  int temp_v3;
  short *psVar5;
  unsigned int temp_v4;
  short *psVar7;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  unsigned short *puVar13;
  int temp_v11;
  unsigned short *puVar15;
  int temp_v12;
  unsigned int temp_v13;
  unsigned char temp_v14;
  unsigned int temp_v15 [7];
  short asStack_194 [6];
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  int temp_v19;
  
  temp_v18 = 3;
  switch(*(unsigned int *)(param_1 + 0xa0)) {
  case 0:
    scrRunOpcodesStub(*(unsigned int *)(param_1 + 0x360));
    temp_v8 = dataStoreGetProgress();
    if (temp_v8 - 1U < 3) {
      FUN_0031d5e8(0x7d);
      temp_v9 = 1;
    }
    else {
joined_r0x003a52e4:
      if (temp_v8 != 5) {
        return temp_v18;
      }
      temp_v9 = 5;
    }
    *(unsigned int *)(param_1 + 0xa0) = temp_v9;
    break;
  case 1:
    scrRunOpcodesStub(*(unsigned int *)(param_1 + 0x360));
    temp_v8 = dataStoreGetProgress();
    if (temp_v8 - 2U >= 2) goto joined_r0x003a52e4;
    FUN_0031d5e8(0x7f);
    temp_v9 = 2;
    *(unsigned int *)(param_1 + 0xa0) = temp_v9;
    break;
  case 2:
    scrRunOpcodesStub(*(unsigned int *)(param_1 + 0x360));
    dataStoreGetProgress();
    temp_v8 = dataStoreIsIdle();
    if ((temp_v8 != 0) && (temp_v8 = dataStoreIsReady(), temp_v8 != 0)) {
      runWinClose();
      gameDataBlocksReleaseHold(2);
      gameDataFlagsClearBits(2);
      scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0x360),0x2b);
      sysPlaySe(0x92);
      temp_v9 = 3;
      *(unsigned int *)(param_1 + 0xa0) = temp_v9;
      break;
    }
    temp_v8 = dataStoreIsIdle();
    if (temp_v8 == 0) {
      temp_v9 = 5;
      *(unsigned int *)(param_1 + 0xa0) = temp_v9;
      break;
    }
    return temp_v18;
  case 3:
    temp_v8 = scrRunOpcodesStub(*(unsigned int *)(param_1 + 0x360));
    if (temp_v8 != 2) {
      return temp_v18;
    }
    temp_v9 = dataStoreGetValue50();
    temp_v8 = 0;
    *(unsigned int *)(param_1 + 0x9c) = temp_v9;
    do {
      if (*(int *)(param_1 + 0x9c) <= temp_v8) break;
      temp_v9 = dataStoreGetEntry(temp_v8);
      __aeabi_memcpy4(param_1 + temp_v8 * 100 + 0x3ec,temp_v9,100);
      temp_v8 = temp_v8 + 1;
    } while (temp_v8 < 10);
    temp_v8 = dataStoreIsFinished();
    if (temp_v8 == 0) {
      return 3;
    }
    dataStoreShutdown();
    temp_v9 = 0xb;
    *(unsigned int *)(param_1 + 0xa0) = temp_v9;
    break;
  case 5:
    temp_v8 = dataStoreIsFinished();
    if (temp_v8 != 0) {
      dataStoreShutdown();
      gameDataBlocksReleaseHold(2);
      gameDataFlagsClearBits(2);
      runWinClose();
      scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0x360),0x2c);
      messageSetMode(1);
      sysPlaySe(0x92);
      temp_v9 = 6;
      *(unsigned int *)(param_1 + 0xa0) = temp_v9;
      break;
    }
    return temp_v18;
  case 6:
    temp_v8 = scrRunOpcodesStub(*(unsigned int *)(param_1 + 0x360));
    if (temp_v8 == 2) {
      temp_v8 = messageGetChoiceResult();
      if (temp_v8 == 0) {
        campCecSetValue(1);
      }
      temp_v9 = maskToCode(*(unsigned int *)(param_1 + 0x3dc));
      *(unsigned int *)(param_1 + 0x3b0) = temp_v9;
      messageSetMode(0);
      return temp_v18;
    }
    return temp_v18;
  case 8:
    if (*(char *)(param_1 + 0x7d5) != '\x01') {
      if ((*(char *)(param_1 + 0x3e4) != '\0') && (temp_v8 = gameDataTestFlags(0x20), temp_v8 != 0)) {
        cecProcessCall3();
        temp_v9 = 9;
        *(unsigned int *)(param_1 + 0xa0) = temp_v9;
        break;
      }
      *(unsigned int *)(param_1 + 0x3b0) = 9;
      runWinClose();
      return temp_v18;
    }
    temp_v8 = dataStoreIsIdle();
    if ((temp_v8 == 0) || (temp_v8 = dataStoreIsReady(), temp_v8 == 0)) {
      temp_v8 = dataStoreIsIdle();
      if (temp_v8 == 0) {
        gameDataBlocksReleaseHold(2);
        gameDataFlagsClearBits(2);
        *(unsigned int *)(param_1 + 0x3dc) = *(unsigned int *)(param_1 + 0x3dc) | 0x20;
        temp_v9 = maskToCode();
        *(unsigned int *)(param_1 + 0x3b0) = temp_v9;
        return temp_v18;
      }
      gameDataAddHomeButtonHold();
      gameDataBlocksAddFlags(2);
      return temp_v18;
    }
    gameDataBlocksReleaseHold(2);
    gameDataFlagsClearBits(2);
    temp_v8 = dataStoreGetValue50();
    *(int *)(param_1 + 0x9c) = temp_v8;
    if (temp_v8 < 1) {
      temp_v9 = maskToCode(*(unsigned int *)(param_1 + 0x3dc));
      *(unsigned int *)(param_1 + 0x3b0) = temp_v9;
      return temp_v18;
    }
    temp_v9 = 0xb;
    *(unsigned int *)(param_1 + 0xa0) = temp_v9;
    break;
  case 9:
    gameDataAddHomeButtonHold(2);
    gameDataBlocksAddFlags(2);
    FUN_00280250();
    temp_v8 = asdCecInboxGetMessageCount();
    *(int *)(param_1 + 0x9c) = temp_v8;
    if (temp_v8 >= 1) {
      temp_v9 = 10;
      *(unsigned int *)(param_1 + 0xa0) = temp_v9;
      break;
    }
    FUN_0036d41c();
    gameDataBlocksReleaseHold(2);
    gameDataFlagsClearBits(2);
    runWinClose();
    scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0x360),0x24);
    temp_v9 = 0xc;
    *(unsigned int *)(param_1 + 0xa0) = temp_v9;
    break;
  case 10:
    temp_v8 = FUN_0033004c();
    if (temp_v8 != 0) {
      FUN_0036d41c();
      cecProcessCall1();
      gameDataBlocksReleaseHold(2);
      gameDataFlagsClearBits(2);
      temp_v9 = 0xb;
      *(unsigned int *)(param_1 + 0xa0) = temp_v9;
      break;
    }
    return temp_v18;
  case 0xb:
    temp_v9 = gameDataBlocksGetWord27E90();
    *(unsigned int *)(param_1 + 0x3d8) = temp_v9;
    temp_v11 = 0;
    temp_v8 = 0;
    if (0 < *(int *)(param_1 + 0x9c)) {
      do {
        temp_v0 = *(char *)(param_1 + 0x7d5);
        if ((temp_v0 != '\0') && ((temp_v8 >= 10 || (temp_v0 != '\x01')))) break;
        if (temp_v0 != '\0') {
          temp_v3 = param_1 + temp_v8 * 100 + 0x3ec;
        }
        else {
          temp_v3 = cecProcessGetEntry(temp_v8);
        }
        if (*(short *)(temp_v3 + 0x60) == 0) {
          FUN_0032e25c(temp_v3,0);
        }
        temp_v12 = playerSummaryIsIncomplete(temp_v3);
        if (temp_v12 == 0) {
          temp_v11 = temp_v11 + 1;
          *(unsigned short *)(temp_v3 + 0x34) = *(unsigned short *)(temp_v3 + 0x60);
          FUN_00333474(temp_v3);
          FUN_002a17d4(temp_v3);
          gameDataAddMoneySaturating(1);
          temp_v3 = gameDataBlocksGetWord27E90();
          if ((temp_v3 % 100 == 0) && (0 < temp_v3)) {
            FUN_0037be64();
            FUN_00330b7c();
            temp_v3 = gameFlagIsSet(0x45b);
            if (temp_v3 != 0) {
              *(unsigned int *)(param_1 + 0x3dc) = *(unsigned int *)(param_1 + 0x3dc) | 0x10;
            }
          }
        }
        temp_v12 = *(int *)(param_1 + 0x9c);
        temp_v6 = temp_v8 + 1;
        temp_v14 = SBORROW4(temp_v6,temp_v12);
        temp_v3 = temp_v6 - temp_v12;
        if (temp_v6 < temp_v12) {
          temp_v14 = SBORROW4(temp_v6,0x20);
          temp_v3 = temp_v8 - 0x1f;
        }
        temp_v8 = temp_v6;
      } while (temp_v3 < 0 != temp_v14);
    }
    *(int *)(param_1 + 0x9c) = temp_v11;
    if (temp_v11 != 0) {
      FUN_00359974(0,temp_v11,0xffffffff);
      scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0x360),0x23);
      *(unsigned int *)(param_1 + 0xa0) = 0xd;
      runWinClose();
      return temp_v18;
    }
    scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0x360),0x24);
    *(unsigned int *)(param_1 + 0xa0) = 0xc;
    runWinClose();
    return temp_v18;
  case 0xc:
    temp_v8 = scrRunOpcodesStub(*(unsigned int *)(param_1 + 0x360));
    if (temp_v8 != 2) {
      return temp_v18;
    }
    temp_v9 = 9;
    *(unsigned int *)(param_1 + 0x3b0) = temp_v9;
    break;
  case 0xd:
    temp_v8 = scrRunOpcodesStub(*(unsigned int *)(param_1 + 0x360));
    if (temp_v8 != 2) {
      return 3;
    }
    FUN_002bf520();
    playerSummaryFill();
    temp_v8 = gameFlagIsSet(0x551);
    if (temp_v8 == 0) {
      temp_v11 = 0x20;
      temp_v8 = 0;
      if (*(char *)(param_1 + 0x7d5) == '\x01') {
        temp_v11 = 10;
      }
      do {
        if (*(char *)(param_1 + 0x7d5) != '\0') {
          temp_v3 = param_1 + temp_v8 * 100 + 0x3ec;
        }
        else {
          temp_v3 = cecProcessGetEntry(temp_v8);
        }
        if ((temp_v3 != 0) && ((*(unsigned char *)(temp_v3 + 0x20) & 4) != 0)) {
          libc_strcpy(temp_v15,temp_v3 + 0xe);
          FUN_003180c4(0,temp_v15);
          scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0x360),0x12);
          *(unsigned int *)(param_1 + 0x3dc) = *(unsigned int *)(param_1 + 0x3dc) | 8;
          break;
        }
        temp_v8 = temp_v8 + 1;
      } while (temp_v8 < temp_v11);
    }
    temp_v8 = gameDataGetRecordValue();
    if (temp_v8 != 0) {
      temp_v8 = FUN_0031cee0();
      if (temp_v8 == 0) {
        temp_v8 = gameDataBlocksGetWord27E90();
        psVar5 = (short *)0x0;
        *(unsigned int *)(param_1 + 0x3cc) = 0;
        temp_v8 = temp_v8 - *(int *)(param_1 + 0x3d8);
        *(unsigned int *)(param_1 + 0x3d0) = 0;
        if (0 < temp_v8) {
          dataTable4AType1Count();
          psVar7 = psVar5;
joined_r0x003a5980:
          psVar7 = (short *)((int)psVar7 - 1);
          if ((int)psVar7 >= 0) {
            psVar5 = (short *)dataTable4AType1GetEntry8(psVar7);
            if ((psVar5 == (short *)0x0) || (temp_v8 < *psVar5)) goto joined_r0x003a5980;
            *(int *)(param_1 + 0x3d0) = (int)psVar5[1];
            psVar5 = (short *)(int)psVar5[2];
            *(short **)(param_1 + 0x3cc) = psVar5;
          }
          dataTable4AType2Count();
          temp_v13 = *(int *)(param_1 + 0x3d8) + 1;
          temp_v4 = gameDataBlocksGetWord27E90();
          if (temp_v13 <= temp_v4) {
            do {
              temp_v8 = 0;
              if (temp_v8 < (int)psVar5) {
                do {
                  psVar7 = (short *)dataTable4AGetEntry8(temp_v8);
                  if ((psVar7 != (short *)0x0) &&
                     (__aeabi_idivmod(temp_v13,(int)*psVar7), temp_v10 == 0)) {
                    temp_v11 = FUN_00184964((int)psVar7[2],(int)psVar7[3]);
                    if (psVar7[1] != 1) {
                      if (psVar7[1] == 0) {
                        *(int *)(param_1 + 0x3cc) = temp_v11 + *(int *)(param_1 + 0x3cc);
                      }
                    }
                    else {
                      *(int *)(param_1 + 0x3d0) = temp_v11 + *(int *)(param_1 + 0x3d0);
                    }
                  }
                  temp_v8 = temp_v8 + 1;
                } while (temp_v8 < (int)psVar5);
              }
              temp_v13 = temp_v13 + 1;
              temp_v4 = gameDataBlocksGetWord27E90();
            } while (temp_v13 <= temp_v4);
          }
          temp_v8 = *(int *)(param_1 + 0x3cc);
          if (temp_v8 < 1) {
            temp_v8 = *(int *)(param_1 + 0x3d0);
          }
          if (0 < temp_v8) {
            *(unsigned int *)(param_1 + 0x3dc) = *(unsigned int *)(param_1 + 0x3dc) | 2;
          }
        }
      }
      temp_v8 = FUN_0031cee0();
      if (temp_v8 == 1) {
        FUN_0031cf00();
        FUN_002e59f8();
        temp_v8 = gameGetSlotTable();
        temp_v19 = temp_v8;
        FUN_0031cf00();
        if (temp_v8 != 0) {
          temp_v8 = 0;
          *(unsigned int *)(param_1 + 0x344) = 0;
          __aeabi_memset4(temp_v15,0x168,0xffffffff);
          temp_v4 = 0;
          puVar15 = (unsigned short *)(*(int *)(g_campCecRecv + 0x34c) + temp_v4 * 0xc);
          while( 1 ) {
            temp_v13 = gameDataBlocksGetWord27E90();
            if ((((unsigned int)(int)(short)puVar15[1] <= temp_v13) &&
                ((int)(short)*puVar15 != (unsigned int)*(unsigned short *)(param_1 + 0x14e))) &&
               (temp_v11 = gameStockContainsEntry(*puVar15), temp_v11 == 0)) {
              temp_v13 = (unsigned int)*puVar15;
              FUN_00184310();
              if ((unsigned int)*(unsigned short *)(temp_v13 + 6) <= *(unsigned short *)(temp_v19 + 0x66) + 1) {
                temp_v15[temp_v8] = temp_v4;
                temp_v8 = temp_v8 + 1;
              }
            }
            temp_v4 = temp_v4 + 1;
            if ((int)temp_v4 >= 0x5a) break;
            puVar15 = (unsigned short *)0x0;
            if (temp_v4 < 0x5a) {
              puVar15 = (unsigned short *)(*(int *)(g_campCecRecv + 0x34c) + temp_v4 * 0xc);
            }
          }
          temp_v11 = 0;
          if (temp_v8 != 0) {
            do {
              do {
                if (temp_v8 >= 2) {
                  temp_v11 = FUN_00184964(0,temp_v8 - 1);
                }
                temp_v4 = temp_v15[temp_v11];
              } while (temp_v4 == 0xffffffff);
              puVar13 = (unsigned short *)0x0;
              if (temp_v4 < 0x5a) {
                puVar13 = (unsigned short *)(*(int *)(g_campCecRecv + 0x34c) + temp_v4 * 0xc);
              }
              temp_v3 = gameStockContainsEntry(*puVar13);
            } while (temp_v3 != 0);
            *(unsigned short **)(param_1 + 0x344) = puVar13;
          }
          *(unsigned int *)(param_1 + 0x3dc) = *(unsigned int *)(param_1 + 0x3dc) | 1;
        }
      }
      temp_v8 = FUN_0031cee0();
      if (temp_v8 == 0) {
        temp_v8 = gameDataBlocksGetWord27E90();
        temp_v11 = temp_v8 - *(int *)(param_1 + 0x3d8);
        dataTable4ACount();
        do {
          temp_v8 = temp_v8 - 1;
          if (temp_v8 < 0) goto LAB_003a5cfc;
          psVar5 = (short *)dataTable4AGetEntry(temp_v8);
        } while ((psVar5 == (short *)0x0) || (temp_v11 < *psVar5));
        temp_v2 = psVar5[1];
        temp_v8 = 0;
        if (temp_v8 < temp_v2) {
          do {
            temp_v9 = FUN_00184964(0,4);
            switch(temp_v9) {
            case 0:
              *(short *)(param_1 + 0xe0) = *(short *)(param_1 + 0xe0) + 1;
              break;
            case 1:
              *(short *)(param_1 + 0xe2) = *(short *)(param_1 + 0xe2) + 1;
              break;
            case 2:
              *(short *)(param_1 + 0xe4) = *(short *)(param_1 + 0xe4) + 1;
              break;
            case 3:
              *(short *)(param_1 + 0xe6) = *(short *)(param_1 + 0xe6) + 1;
              break;
            case 4:
              *(short *)(param_1 + 0xe8) = *(short *)(param_1 + 0xe8) + 1;
            }
            temp_v8 = temp_v8 + 1;
          } while (temp_v8 < temp_v2);
        }
      }
LAB_003a5cfc:
      *(unsigned int *)(param_1 + 0x3dc) = *(unsigned int *)(param_1 + 0x3dc) | 4;
      *(unsigned int *)(param_1 + 0x368) = 0;
      *(unsigned int *)(param_1 + 0x36c) = 0;
      *(unsigned int *)(param_1 + 0x370) = 0;
      *(unsigned int *)(param_1 + 0x374) = 0;
      *(unsigned int *)(param_1 + 0x378) = 0;
      *(unsigned int *)(param_1 + 0x37c) = 0;
      *(unsigned int *)(param_1 + 0x380) = 0;
      *(unsigned int *)(param_1 + 900) = 0;
      *(unsigned int *)(param_1 + 0x388) = 0;
      *(unsigned int *)(param_1 + 0x38c) = 0;
      *(unsigned int *)(param_1 + 0x390) = 0;
      *(unsigned int *)(param_1 + 0x394) = 0;
      *(unsigned int *)(param_1 + 0x398) = 0;
      *(unsigned int *)(param_1 + 0x39c) = 0;
      *(unsigned int *)(param_1 + 0x3a0) = 0;
      *(unsigned int *)(param_1 + 0x3a4) = 0;
      *(unsigned int *)(param_1 + 0x3c0) = 0;
      temp_v8 = gameDataBlocksGetWord27E90();
      temp_v15[2] = temp_v8 - *(unsigned int *)(param_1 + 0x3d8);
      if (0 < (int)temp_v15[2]) {
        temp_v16 = (unsigned int)(0 < *(int *)(param_1 + 0x3cc));
        if (0 < *(int *)(param_1 + 0x3d0)) {
          temp_v16 = temp_v16 + 1;
        }
        temp_v8 = 0;
        temp_v17 = (*(unsigned int *)(param_1 + 0x3d8) / 5) % 10;
        do {
          if ((int)(temp_v16 + *(int *)(param_1 + 0x3c0)) >= 10) break;
          temp_v4 = *(int *)(param_1 + 0x3d8) + temp_v8 + 1;
          if (temp_v4 % 5 == 0) {
            if ((int)temp_v17 >= 10) {
              temp_v17 = 0;
            }
            temp_v13 = *(unsigned int *)(&DAT_0052c758 + temp_v17 * 4);
            if (temp_v13 == 9) {
              temp_v5 = temp_v17;
              FUN_0031cf00(temp_v17,&DAT_0052c758,temp_v4 * -0x33333333);
              if ((temp_v5 != 0) && (temp_v1 = *(unsigned short *)(temp_v5 + 100), temp_v1 >= 0x15)) {
                if (temp_v1 < 0x29) {
                  temp_v13 = 10;
                }
                else if (temp_v1 < 0x3d) {
                  temp_v13 = 0xb;
                }
                else if (temp_v1 < 0x51) {
                  temp_v13 = 0xc;
                }
                else {
                  temp_v13 = 0xd;
                }
              }
            }
            temp_v11 = *(int *)(g_campCecRecv + 0x348);
            if ((temp_v11 != 0) && (temp_v13 < 0xe)) {
              temp_v12 = 0;
              temp_v3 = 0;
              do {
                psVar5 = (short *)(temp_v11 + temp_v13 * 10 + temp_v3 * 2);
                temp_v6 = itemGetStackLimit(*psVar5);
                temp_v7 = FUN_001ba3d4(*psVar5);
                if (temp_v7 < temp_v6) {
                  psVar7 = asStack_194 + temp_v12;
                  temp_v12 = temp_v12 + 1;
                  *psVar7 = *psVar5;
                }
                temp_v3 = temp_v3 + 1;
              } while (temp_v3 < 5);
              if (temp_v12 != 0) {
                temp_v3 = FUN_00184964(0,temp_v12 - 1);
                temp_v11 = g_campCecRecv;
                if (asStack_194[temp_v3] != 0) {
                  *(short *)(g_campCecRecv + *(int *)(g_campCecRecv + 0x3c0) * 2 + 0x368) =
                       asStack_194[temp_v3];
                  *(int *)(temp_v11 + 0x3c0) = *(int *)(temp_v11 + 0x3c0) + 1;
                }
              }
            }
            temp_v17 = temp_v17 + 1;
          }
          temp_v8 = temp_v8 + 1;
        } while (temp_v8 < (int)temp_v15[2]);
        if (0 < *(int *)(param_1 + 0x3c0)) {
          *(unsigned int *)(param_1 + 0x3dc) = *(unsigned int *)(param_1 + 0x3dc) | 2;
        }
      }
      *(unsigned char *)(param_1 + 0x7d4) = 0;
    }
    if (!(*(unsigned int *)(param_1 + 0x3dc) == 0 || (*(unsigned int *)(param_1 + 0x3dc) & 7) == 0)) {
      asdLoadFileAsyncSimple(&LAB_003a6070,param_1 + 0x358,0);
      puVar15 = (unsigned short *)gameDataGetRecordValue();
      temp_v4 = (unsigned int)puVar15 & 0xffff;
      temp_v14 = (*(unsigned int *)(param_1 + 0x3dc) & 1) != 0;
      if (temp_v14) {
        puVar15 = *(unsigned short **)(param_1 + 0x344);
      }
      if (temp_v14 && puVar15 != (unsigned short *)0x0) {
        temp_v4 = (unsigned int)*puVar15;
      }
      FUN_00184310();
      temp_v8 = FUN_003316b4((int)*(char *)(temp_v4 + 0x38));
      textFormatBuffer(temp_v15,&LAB_003a6090,temp_v8 + 1);
      asdLoadFileAsyncSimple(temp_v15,param_1 + 0x35c,0);
      *(unsigned char *)(param_1 + 999) = 1;
      messageDismissNumericBanner();
      messageMainStartMenuAnimationIfEnabled();
      sysPlaySe(0x3e);
      temp_v9 = 0xe;
      *(unsigned int *)(param_1 + 0xa0) = temp_v9;
      break;
    }
    temp_v9 = maskToCode();
    *(unsigned int *)(param_1 + 0x3b0) = temp_v9;
    return 3;
  case 0xe:
    temp_v8 = *(int *)(param_1 + 0x358);
    if (temp_v8 != 0) {
      param_2 = *(int *)(param_1 + 0x35c);
    }
    if (!(temp_v8 == 0 || param_2 == 0)) {
      FUN_00275bc8();
      *(int *)(param_1 + 0x364) = temp_v8;
      *(unsigned int *)(temp_v8 + 0x108) = 2;
      temp_v9 = maskToCode(*(unsigned int *)(param_1 + 0x3dc));
      *(unsigned int *)(param_1 + 0x3b0) = temp_v9;
      break;
    }
    return 3;
  }
  return temp_v18;
}

} /* extern "C" */
