/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001fc6e8` (_code @ 0x1fc6e8, 0x130c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "battle/btlTargetSelect.h"
#include "shard/W6_W6Match8_BattleDebug.h"
#include "battle/BattleUnitSlot.h"

extern "C" {

int gameDataSlotSetFlag(...);
int FUN_001f7d50(...);
int FUN_001f7fac(...);
int FUN_001f8290(...);
int btlGameOverCreateTasks(...);
int gameDataEntrySetLevel(...);
int messageForwardDefaultMode(...);
int FUN_002903f0(void);
int textEncodeFontSlot(...);
int infoWinStartTimer(...);
int asdLoadFileAsyncSimple(...);
int soundChannelStopAll(...);
int slotSetRequest(...);
int scrScriptProcessDestroy(void);
int buttonHelpSetPreset(...);
int devilGetRecord(void);
int FUN_002bd06c(...);
int libc_strcpy(...);
int asdMemFree(void);
int jobStop(...);
int FUN_00308d5c(...);
int FUN_0033a670(...);
int FUN_0033b3c4(...);
int FUN_00348c10(...);
int btlHelpFreeEntries(void);
int FUN_003d9be4(...);

int FUN_001d2628(...);
int btlEventTaskStart(...);
int btlEffectCreate(...);
int FUN_00207f68(...);
int FUN_0021ae40(...);
int btlUiRefreshSlotRanks(...);
int pickerAdvance(...);
int FUN_00254f58(...);
int btlAdjustPropertyClamped(...);
int battleGetEntryHalfword(...);
int FUN_00255180(...);
int FUN_002551ac(...);
int bgmStopNoForce(...);
int FUN_0027dbc8(...);
int FUN_0027de98(void);
int btlEventSelectTrigger(...);
int FUN_0027e760(...);
void bgmRequestSelectedChannelFade(unsigned int frames);
int btlTalkBustUpCreate(void);
int gameCounterAddSaturating(...);
int soundChannelRequestIfEnabled(...);
int FUN_002bff50(void);
int battleInitializeEnemyFormation(...);
int FUN_003ae134(...);
int FUN_003c7c84(...);
int FUN_003c7f20(...);

int btlUiCreateTasks(...);
int btlAutoCalcTaskCreate(...);
int btlUnitInitializeDrawJobs(...);
int FUN_001e2350(...);
int btlCameraCreateDrawTaskAndInitializeStorage(...);
int FUN_00255e38(...);
int FUN_002560a4(int);
int FUN_00256124(void);
int FUN_00256194(void);
int FUN_0027dc24(int, int, int);
int gameOptionsEnableAndReset(void);
int memClear(...);
int FUN_002f34cc(...);
int FUN_003370ac(int);
int FUN_00337cfc(...);
int FUN_00338cfc(int, int);
int FUN_003ad754(...);
int partyStockUpdateCounters(void);
int FUN_003bef90(void);
int FUN_003c8428(int);
int FUN_003c86bc(void);

/* stack frame of param_1: 20 slot(s), 80 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp264; /* 0x264: local_264 */
    unsigned int sp26C; /* 0x26c: local_26c */
    unsigned int sp270; /* 0x270: local_270 */
    unsigned int sp274; /* 0x274: local_274 */
    unsigned int sp278; /* 0x278: local_278 */
    unsigned int sp280; /* 0x280: local_280 */
    unsigned int sp284; /* 0x284: local_284 */
    unsigned int sp288; /* 0x288: local_288 */
    unsigned int sp28C; /* 0x28c: local_28c */
    unsigned int sp290; /* 0x290: local_290 */
    unsigned int sp298; /* 0x298: local_298 */
    unsigned int sp29C; /* 0x29c: local_29c */
    unsigned int sp2A0; /* 0x2a0: local_2a0 */
    unsigned int sp2A4; /* 0x2a4: local_2a4 */
    unsigned int sp2A8; /* 0x2a8: local_2a8 */
    unsigned int sp2AC; /* 0x2ac: local_2ac */
    unsigned int sp2B0; /* 0x2b0: local_2b0 */
    unsigned int sp2B4; /* 0x2b4: local_2b4 */
    unsigned int sp2B8; /* 0x2b8: local_2b8 */
} param_1_stack;

extern unsigned int g_btlScriptUnit; /* 0x43427c */
extern int DAT_00435d18; /* 0x435d18 */
extern unsigned int *g_btlEvent; /* 0x435d48 */
extern int g_btlMainState; /* 0x435d90 */
extern unsigned int DAT_004398d4; /* 0x4398d4 */
extern int g_btlUiBlock; /* 0x439ca8 */
extern int g_mapDepartWork; /* 0x4474d8 */
extern int DAT_0049fb9c; /* 0x49fb9c */

/* Supplied declaration required: btlUiCreateTasks. */
/* Supplied declaration required: btlAutoCalcTaskCreate. */
/* Supplied declaration required: FUN_001d2628. */
/* Supplied declaration required: btlUnitInitializeDrawJobs. */
/* Supplied declaration required: gameDataSlotSetFlag. */
/* Supplied declaration required: btlEventTaskStart. */
/* Supplied declaration required: FUN_001e2350. */
/* Supplied declaration required: FUN_001f7d50. */
/* Supplied declaration required: btlCameraCreateDrawTaskAndInitializeStorage. */
/* Supplied declaration required: FUN_001f7fac. */
/* Supplied declaration required: btlEffectCreate. */
/* Supplied declaration required: FUN_001f8290. */
/* Supplied declaration required: FUN_00207f68. */
/* Supplied declaration required: FUN_0021ae40. */
/* Supplied declaration required: btlGameOverCreateTasks. */
extern int gameDataEntryGetLevel(short);
/* Supplied declaration required: gameDataEntrySetLevel. */
/* Supplied declaration required: messageForwardDefaultMode. */
/* Supplied declaration required: btlUiRefreshSlotRanks. */
/* Supplied declaration required: pickerAdvance. */
/* Supplied declaration required: FUN_00254f58. */
/* Supplied declaration required: btlAdjustPropertyClamped. */
/* Supplied declaration required: battleGetEntryHalfword. */
/* Supplied declaration required: FUN_00255180. */
/* Supplied declaration required: FUN_002551ac. */
extern int FUN_00255de0(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00255e38. */
/* Supplied declaration required: FUN_002560a4. */
/* Supplied declaration required: FUN_00256124. */
/* Supplied declaration required: FUN_00256194. */
/* Supplied declaration required: bgmStopNoForce. */
/* Supplied declaration required: FUN_0027dbc8. */
/* Supplied declaration required: FUN_0027dc24. */
/* Supplied declaration required: FUN_0027de98. */
extern int FUN_0027e3b8(unsigned int *);
/* Supplied declaration required: btlEventSelectTrigger. */
/* Supplied declaration required: FUN_0027e760. */
extern int table1bOr1cGetRecordValue(void);
/* Supplied declaration required: gameOptionsEnableAndReset. */
extern int FUN_0029022c(void);
/* Supplied declaration required: FUN_002903f0. */
/* Supplied declaration required: textEncodeFontSlot. */
/* Supplied declaration required: btlTalkBustUpCreate. */
/* Supplied declaration required: infoWinStartTimer. */
extern int dialogIsActive(void);
/* Supplied declaration required: asdLoadFileAsyncSimple. */
/* Supplied declaration required: gameCounterAddSaturating. */
/* Supplied declaration required: soundChannelStopAll. */
/* Supplied declaration required: slotSetRequest. */
/* Supplied declaration required: soundChannelRequestIfEnabled. */
/* Supplied declaration required: scrScriptProcessDestroy. */
extern int gameGetSlotTable(void);
extern int gameGetSupportUnitData(void);
extern int gameGetOptionProgressStatus(void);
/* Supplied declaration required: buttonHelpSetPreset. */
/* Supplied declaration required: devilGetRecord. */
/* Supplied declaration required: FUN_002bd06c. */
extern int jobIsValid(unsigned int);
/* Supplied declaration required: libc_strcpy. */
/* Supplied declaration required: FUN_002bff50. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: jobStop. */
/* Supplied declaration required: memClear. */
/* Supplied declaration required: FUN_002f34cc. */
/* Supplied declaration required: FUN_00308d5c. */
/* Supplied declaration required: battleInitializeEnemyFormation. */
/* Supplied declaration required: FUN_003370ac. */
/* Supplied declaration required: FUN_00337cfc. */
/* Supplied declaration required: FUN_00338cfc. */
/* Supplied declaration required: FUN_0033a670. */
/* Supplied declaration required: FUN_0033b3c4. */
/* Supplied declaration required: FUN_00348c10. */
/* Supplied declaration required: FUN_003ad754. */
/* Supplied declaration required: FUN_003ae134. */
/* Supplied declaration required: partyStockUpdateCounters. */
/* Supplied declaration required: FUN_003bef90. */
extern int FUN_003bf0a4(void);
/* Supplied declaration required: btlHelpFreeEntries. */
/* Supplied declaration required: FUN_003c7c84. */
/* Supplied declaration required: FUN_003c7f20. */
/* Supplied declaration required: FUN_003c8428. */
/* Supplied declaration required: FUN_003c86bc. */
/* Supplied declaration required: FUN_003d9be4. */


void FUN_001fc6e8(unsigned int param_1)

{
/* irregular: 1 goto(s); 75 native warning(s); review required */
  unsigned short temp_v0;
  unsigned short temp_v1;
  short temp_v2;
  int temp_v3;
  unsigned int *puVar5;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int *puVar9;
  short temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  int temp_v11;
  int *piVar15;
  unsigned int *puVar16;
  int temp_v12;
  short *psVar18;
  int *piVar19;
  int unaff_r9;
  int temp_v13;
  unsigned char temp_v14;
  unsigned char temp_v15;
  int temp_v16;
  int temp_v17;
  int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  unsigned int temp_v21;
  unsigned int temp_v22;
  unsigned int uStack_294;
  unsigned int temp_v23;
  unsigned int temp_v24;
  unsigned int temp_v25;
  unsigned int temp_v26;
  unsigned int temp_v27;
  unsigned int uStack_27c;
  unsigned int temp_v28;
  unsigned int temp_v29;
  unsigned int temp_v30;
  unsigned int temp_v31;
  unsigned int uStack_268;
  int temp_v32;
  unsigned char temp_v33 [448];
  
  temp_v4 = g_btlMainState;
  if (g_btlMainState == 0) {
    return;
  }
  temp_v8 = *(unsigned int *)(g_btlMainState + 100);
  *(unsigned int *)(g_btlMainState + 100) = param_1;
  *(unsigned int *)(temp_v4 + 0x70) = 0;
  *(unsigned int *)(temp_v4 + 0x6c) = temp_v8;
  *(unsigned int *)(temp_v4 + 0x68) = 0xffffffff;
  *(unsigned int *)(temp_v4 + 0x78) = 0;
  switch(*(unsigned int *)(temp_v4 + 100)) {
  case 1:
    btlDebugOpen((BtlMainState *)temp_v4,0);
    return;
  case 2:
    if (*(int *)(temp_v4 + 0xc4) >= 1) {
      *(unsigned int *)(temp_v4 + 0x44a0) = *(unsigned int *)(temp_v4 + 0x44a0) | 1;
    }
    else {
      *(unsigned int *)(temp_v4 + 0x44a0) = *(unsigned int *)(temp_v4 + 0x44a0) & 0xfffffffe;
    }
    memClear((unsigned int *)(temp_v4 + 200),0x74);
    *(unsigned int *)(temp_v4 + 200) = 0;
    *(unsigned int *)(temp_v4 + 0xcc) = 0;
    *(unsigned int *)(temp_v4 + 0xd0) = 0;
    *(unsigned int *)(temp_v4 + 0xd4) = 0;
    *(unsigned int *)(temp_v4 + 0xd8) = 0;
    *(unsigned int *)(temp_v4 + 0xdc) = 0;
    *(unsigned int *)(temp_v4 + 0xf8) = 0x3f800000;
    *(unsigned int *)(temp_v4 + 0xfc) = 0x3f800000;
    FUN_0027dc24(temp_v4,temp_v4 + 200,0);
    partyStockUpdateCounters();
    FUN_003bef90();
    FUN_00338cfc(temp_v4,0);
    FUN_003370ac(temp_v4);
    if ((*(unsigned int *)(temp_v4 + 0x44a0) & 0x40000) == 0) {
      if (*(short *)(temp_v4 + 0x11c) != 0) {
        FUN_003c8428((int)*(short *)(temp_v4 + 0x11c));
        temp_v3 = gameGetSlotTable();
        if (*(short *)(temp_v3 + 0x9152) != 0) {
          FUN_00337cfc(temp_v4,temp_v33);
          FUN_00255e38(temp_v4,temp_v33,2,0x36,0);
        }
      }
      else {
        temp_v3 = gameGetOptionProgressStatus();
        if (*(int *)(temp_v4 + 0x2f28) >= 1) {
          if (temp_v3 != 1) {
            if (temp_v3 == 2) {
              FUN_00256124();
              gameOptionsEnableAndReset();
            }
          }
          else {
            FUN_00256194();
            gameOptionsEnableAndReset();
          }
          FUN_002560a4(*(int *)(temp_v4 + 0x2f28));
          temp_v3 = gameGetSlotTable();
          if (*(short *)(temp_v3 + 0x9152) != 0) {
            FUN_00337cfc(temp_v4,temp_v33);
            FUN_00255e38(temp_v4,temp_v33,2,0x36,0);
          }
        }
        else if (temp_v3 != 0) {
          if (temp_v3 != 1) {
            if (temp_v3 == 2) {
              temp_v3 = gameGetSlotTable();
              if (*(short *)(temp_v3 + 0x9152) != 0) {
                FUN_00337cfc(temp_v4,temp_v33);
                FUN_00255e38(temp_v4,temp_v33,2,0x36,0);
              }
            }
          }
          else {
            FUN_003c86bc();
            temp_v3 = gameGetSlotTable();
            if (*(short *)(temp_v3 + 0x9152) != 0) {
              FUN_00337cfc(temp_v4,temp_v33);
              FUN_00255e38(temp_v4,temp_v33,2,0x36,0);
            }
          }
        }
      }
    }
    FUN_002f34cc(temp_v4);
    btlCameraCreateDrawTaskAndInitializeStorage(temp_v4);
    btlAutoCalcTaskCreate(temp_v4);
    temp_v3 = jobIsValid(*(unsigned int *)(temp_v4 + 0x54));
    if (temp_v3 == 0) {
      btlUiCreateTasks(temp_v4);
    }
    if ((*(unsigned int *)(temp_v4 + 0x7c) & 1) != 0) {
      FUN_003ad754(g_btlUiBlock,1);
    }
    else {
      FUN_003ad754(g_btlUiBlock,0);
    }
    btlUnitInitializeDrawJobs(temp_v4);
    FUN_001e2350(temp_v4);
    btlEffectCreate(temp_v4);
    FUN_0021ae40(temp_v4);
    FUN_001d2628(temp_v4);
    btlTalkBustUpCreate();
    FUN_002bff50();
    bgmRequestSelectedChannelFade(0x1e);
    temp_v3 = *(int *)(temp_v4 + 0xec);
    *(int *)(temp_v4 + 0x49dc) = temp_v3;
    temp_v6 = *(unsigned int *)(temp_v4 + 0x44a0);
    if ((temp_v6 & 1) != 0) {
      if ((*(unsigned int *)(temp_v4 + 0xe0) & 0x40000000) != 0) {
        temp_v12 = *(int *)(temp_v4 + 0x49d8);
        if (temp_v12 == 0x100003a) {
          return;
        }
        temp_v3 = 0x100003a;
      }
      else {
        if (temp_v3 < 0) {
          return;
        }
        temp_v12 = *(int *)(temp_v4 + 0x49d8);
        if (temp_v12 == temp_v3) {
          return;
        }
      }
    }
    else if (((temp_v6 & 2) == 0) && ((*(unsigned int *)(temp_v4 + 0xe0) & 0x40000000) != 0)) {
      temp_v12 = *(int *)(temp_v4 + 0x49d8);
      if (temp_v12 == 0x100003a) {
        return;
      }
      temp_v3 = 0x100003a;
    }
    else {
      if (temp_v3 < 0) {
        return;
      }
      temp_v12 = *(int *)(temp_v4 + 0x49d8);
      if (temp_v12 == temp_v3) {
        return;
      }
    }
    if (temp_v12 != -1) {
      bgmStopNoForce(temp_v12,0);
    }
    soundChannelRequestIfEnabled(temp_v3,0,10);
    *(int *)(temp_v4 + 0x49d8) = temp_v3;
    break;
  case 3:
    *(unsigned int *)(temp_v4 + 0x13c) = 0xffffffff;
    *(unsigned int *)(temp_v4 + 0x140) = 0xffffffff;
    FUN_003c7f20(DAT_004398d4,temp_v4);
    FUN_003c7c84(DAT_004398d4,temp_v4);
    FUN_0027e760(DAT_004398d4);
    return;
  case 4:
    *(unsigned char *)(temp_v4 + 0x44b4) = 0;
    *(unsigned char *)(temp_v4 + 0x44b5) = 0;
    *(unsigned int *)(temp_v4 + 0x2314) = 0;
    battleInitializeEnemyFormation(temp_v4);
    temp_v3 = jobIsValid(*(unsigned int *)(temp_v4 + 0x50));
    if (temp_v3 == 0) {
      btlEventTaskStart(temp_v4);
    }
    FUN_00207f68(temp_v4);
    return;
  case 5:
    if ((*(unsigned int *)(temp_v4 + 0x44a0) & 0x200) == 0) {
      temp_v3 = 4;
      do {
        puVar9 = (unsigned int *)(*(int *)(temp_v4 + 0x1fc0) + temp_v3 * 0x288);
        temp_v6 = *puVar9;
        if ((((temp_v6 & 1) != 0) && ((temp_v6 & 0x40) == 0)) && ((temp_v6 & 0x10) != 0)) {
          temp_v32 = *(int *)(temp_v4 + 0x1e98) + (short)puVar9[2] * 0x114;
          temp_v12 = FUN_00255de0(5,0xf);
          temp_v18 = (int)*(short *)((int)puVar9 + 0x1b6);
          temp_v29 = 1;
          temp_v30 = 1;
          temp_v31 = 0;
          uStack_268 = 1;
          temp_v26 = 0;
          temp_v27 = 0;
          uStack_27c = 1;
          temp_v28 = 0;
          temp_v23 = 0;
          temp_v24 = 0;
          temp_v25 = 0;
          temp_v19 = 0;
          temp_v20 = 0;
          temp_v21 = 0;
          temp_v22 = 0;
          uStack_294 = 1;
          temp_v17 = (int)(short)puVar9[0x6d];
          temp_v16 = 0xffffffff;
          FUN_002551ac(0,0,temp_v32,0,(temp_v18 * temp_v12) / 100,0xffffffff);
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < 0x36);
      FUN_0027dbc8(8,1);
      if ((*(unsigned int *)(temp_v4 + 0x44a0) & 8) != 0) {
        gameCounterAddSaturating(3,1);
        return;
      }
    }
    break;
  case 10:
    puVar9 = (unsigned int *)(temp_v4 + 0x44a0);
    if ((*puVar9 & 4) != 0) {
      temp_v6 = 4;
      temp_v3 = 0x32;
    }
    else {
      temp_v6 = 0;
      temp_v3 = 4;
    }
    temp_v10 = temp_v6 + temp_v3;
    *(unsigned short *)(temp_v4 + 0x4968) = 0;
    if (temp_v6 < temp_v10) {
      do {
        temp_v9 = *(unsigned int *)(*(int *)(temp_v4 + 0x1fc0) + temp_v6 * 0x288);
        if (((temp_v9 & 1) != 0) && ((temp_v9 & 0x40) == 0)) {
          if ((temp_v9 & 0xe) != 0) {
            temp_v7 = *(short *)(temp_v4 + 0x4968) + 1;
          }
          else {
            temp_v7 = 0;
            temp_v3 = *(int *)(*(int *)(temp_v4 + 0x1fc0) + temp_v6 * 0x288 + 0x284);
            if (temp_v3 != 0) {
              temp_v7 = *(short *)(temp_v3 + 0x22);
            }
            temp_v7 = *(short *)(temp_v4 + 0x4968) + temp_v7;
          }
          *(short *)(temp_v4 + 0x4968) = temp_v7;
        }
        temp_v6 = temp_v6 + 1;
      } while ((int)temp_v6 < (int)temp_v10);
    }
    temp_v1 = *(unsigned short *)(temp_v4 + 0x4968);
    *(unsigned short *)(temp_v4 + 0x496c) = temp_v1;
    *(unsigned short *)(temp_v4 + 0x496a) = temp_v1;
    *(unsigned short *)(temp_v4 + 0x496e) = temp_v1;
    if (((*(unsigned int *)(temp_v4 + 0x7c) & 1) != 0) && ((*puVar9 & 4) == 0)) {
      *(unsigned short *)(temp_v4 + 0x496c) = temp_v1;
      *(unsigned short *)(temp_v4 + 0x496a) = temp_v1;
      *(unsigned short *)(temp_v4 + 0x496e) = temp_v1;
    }
    *(unsigned short *)(temp_v4 + 0x4970) = temp_v1;
    *(unsigned short *)(temp_v4 + 0x4972) = *(unsigned short *)(temp_v4 + 0x496c);
    if ((*puVar9 & 4) != 0) {
      temp_v6 = 4;
      temp_v3 = 0x32;
    }
    else {
      temp_v6 = 0;
      temp_v3 = 4;
    }
    temp_v9 = temp_v6 + temp_v3;
    temp_v10 = temp_v6;
    if (temp_v6 < temp_v9) {
      do {
        FUN_00255180(temp_v10,0x12,0);
        FUN_00255180(temp_v10,0x13,0);
        temp_v3 = battleGetEntryHalfword(temp_v10,0x1b);
        if (0 < temp_v3) {
          btlAdjustPropertyClamped(temp_v10,0x1b,0xffffffff,0);
        }
        temp_v3 = battleGetEntryHalfword(temp_v10,0x1c);
        if (0 < temp_v3) {
          btlAdjustPropertyClamped(temp_v10,0x1c,0xffffffff,0);
        }
        temp_v10 = temp_v10 + 1;
      } while ((int)temp_v10 < (int)temp_v9);
    }
    if (temp_v6 < temp_v9) {
      do {
        puVar16 = (unsigned int *)(*(int *)(temp_v4 + 0x1fc0) + temp_v6 * 0x288);
        if (((((*puVar16 & 1) != 0) && ((*puVar16 & 0x40) == 0)) && (-1 < (short)puVar16[2])) &&
           (temp_v3 = battleGetEntryHalfword((int)(short)puVar16[2],0xd), 0 < temp_v3)) {
          btlAdjustPropertyClamped((int)(short)puVar16[2],0xd,0xffffffff,0);
        }
        temp_v6 = temp_v6 + 1;
      } while ((int)temp_v6 < (int)temp_v9);
    }
    *(unsigned int *)(temp_v4 + 0x88) = 0;
    if ((*puVar9 & 0x200000) != 0) {
      *puVar9 = *puVar9 & 0xffdfffff;
    }
    else {
      FUN_00254f58(temp_v4);
    }
    temp_v10 = *puVar9;
    temp_v8 = 0;
    temp_v6 = (temp_v10 & 4) >> 2;
    if (((temp_v10 & 2) != 0) && (*(char *)(temp_v4 + 0x44b4) == '\0')) {
      temp_v8 = 1;
    }
    FUN_003ae134(g_btlUiBlock,temp_v6,(int)(char)*(unsigned short *)(temp_v4 + 0x4968),0,temp_v8,
                 (temp_v10 & 0x10) >> 4);
    temp_v10 = *puVar9;
    *puVar9 = temp_v10 | 0x10;
    if (((temp_v10 & 0x4000) != 0) && (temp_v6 == 0)) {
      *puVar9 = (temp_v10 & 0xffffbfff) | 0x8010;
      *(unsigned char *)(g_btlUiBlock + 0x54e0) = 1;
      return;
    }
    break;
  case 0xb:
    temp_v3 = FUN_0027e3b8(g_btlEvent);
    if (temp_v3 == 0) {
      if ((*(unsigned int *)(temp_v4 + 0x44a0) & 4) != 0) {
        puVar5 = g_btlEvent;
        btlEventSelectTrigger(g_btlEvent,2,0xffffffff,0);
        if (puVar5 == (unsigned int *)0x0) {
          return;
        }
      }
      else {
        puVar5 = g_btlEvent;
        btlEventSelectTrigger(g_btlEvent,1,0xffffffff,0);
        if (puVar5 == (unsigned int *)0x0) {
          return;
        }
      }
      puVar5 = g_btlEvent;
      *g_btlEvent = 9;
      *(unsigned char *)(puVar5 + 0xb) = 0;
      *(unsigned int *)(DAT_00435d18 + 0x2f98) = 0;
      return;
    }
    break;
  case 0xc:
    *(unsigned int *)(temp_v4 + 0x49c0) = 0xff;
    *(unsigned int *)(temp_v4 + 0x44a0) = *(unsigned int *)(temp_v4 + 0x44a0) & 0xfeffffff;
    temp_v3 = temp_v4;
    FUN_0027de98();
    if (temp_v3 == 0) {
      if ((*(short *)(temp_v4 + 0x2f1e) < 0) ||
         (*(short *)(temp_v4 + *(short *)(temp_v4 + 0x2f1e) * 2 + 0x2f06) < 0)) {
        temp_v3 = 0;
        temp_v12 = 0xc;
        do {
          temp_v5 = temp_v4 + temp_v3 * 2;
          temp_v11 = (int)*(short *)(temp_v5 + 0x2f06);
          if ((-1 < temp_v11) &&
             ((temp_v6 = *(unsigned int *)(*(int *)(temp_v4 + 0x1fc0) + temp_v11 * 0x288), (temp_v6 & 1) == 0 ||
              ((temp_v6 & 0x40) != 0)))) {
            *(unsigned short *)(temp_v5 + 0x2f06) = 0xffff;
          }
          temp_v12 = temp_v12 - 1;
          temp_v3 = temp_v3 + 1;
        } while (temp_v12 != 0);
        pickerAdvance(temp_v4);
        btlUiRefreshSlotRanks(g_btlUiBlock);
      }
      temp_v7 = *(short *)(temp_v4 + *(short *)(temp_v4 + 0x2f1e) * 2 + 0x2f06);
      *(unsigned int *)(*(int *)(temp_v4 + 0x2310) + *(int *)(temp_v4 + 0x2314) * 0x10) = 0;
      *(int *)(*(int *)(temp_v4 + 0x2310) + *(int *)(temp_v4 + 0x2314) * 0x10 + 4) = (int)temp_v7;
      *(unsigned int *)(*(int *)(temp_v4 + 0x2310) + *(int *)(temp_v4 + 0x2314) * 0x10 + 8) = 0;
      *(unsigned int *)(*(int *)(temp_v4 + 0x2310) + *(int *)(temp_v4 + 0x2314) * 0x10 + 0xc) = 0;
      *(int *)(temp_v4 + 0x2314) = *(int *)(temp_v4 + 0x2314) + 1;
      return;
    }
    break;
  case 0xd:
    FUN_0033b3c4(temp_v4,&temp_v16);
    FUN_001f7d50(temp_v4,temp_v16,temp_v17,temp_v18,temp_v19);
    temp_v3 = jobIsValid(*(unsigned int *)(temp_v4 + 0x1c));
    if (temp_v3 == 0) {
      btlTargetSelectCreate(reinterpret_cast<BtlMainState *>(temp_v4));
    }
    return;
  case 0xe:
    *(unsigned int *)(temp_v4 + 0x88) = 0;
    FUN_00254f58(temp_v4);
    if (g_btlMainState != 0) {
      *(unsigned int *)(g_btlMainState + 0x68) = 0xc;
    }
    return;
  case 0xf:
    if (*(int *)(temp_v4 + 0x88) == 0) {
      temp_v3 = FUN_0029022c();
      if (temp_v3 != 0) {
        FUN_002903f0();
        temp_v3 = table1bOr1cGetRecordValue();
        if (temp_v3 != 0 && temp_v3 != 3) {
          temp_v3 = gameGetSupportUnitData();
          temp_v0 = *(unsigned short *)(temp_v3 + 0x608);
          temp_v14 = (temp_v0 & 1) != 0;
          if (temp_v14) {
            temp_v0 = *(unsigned short *)(temp_v3 + 0x46);
          }
          if ((temp_v14 && temp_v0 != 0) &&
             (((*(unsigned short *)(temp_v3 + 0x44) & 2) != 0 || (*(short *)(temp_v3 + 0x2a) == 0)))) {
            *(unsigned int *)(temp_v4 + 0x88) = 3;
            goto LAB_001fd348;
          }
        }
      }
      if (*(short *)(temp_v4 + 0x1fc6) == 0) {
        if ((*(unsigned int *)(temp_v4 + 0x44a0) & 0x10000) == 0) {
          temp_v8 = 1;
        }
        else {
          temp_v8 = 5;
        }
        *(unsigned int *)(temp_v4 + 0x88) = temp_v8;
      }
    }
LAB_001fd348:
    puVar9 = *(unsigned int **)(temp_v4 + 0x1fc0);
    if (((((((*puVar9 & 1) == 0) || ((*puVar9 & 0x40) != 0)) || ((short)puVar9[0x6d] < 1)) &&
         ((((puVar9[0xa2] & 1) == 0 || ((puVar9[0xa2] & 0x40) != 0)) || ((short)puVar9[0x10f] < 1)))
         ) && ((((puVar9[0x144] & 1) == 0 || ((puVar9[0x144] & 0x40) != 0)) ||
               ((short)puVar9[0x1b1] < 1)))) &&
       ((((puVar9[0x1e6] & 1) == 0 || ((puVar9[0x1e6] & 0x40) != 0)) || ((short)puVar9[0x253] < 1)))
       ) {
      *(unsigned int *)(temp_v4 + 0x88) = 2;
    }
    temp_v3 = temp_v4;
    FUN_0027de98();
    if (temp_v3 == 0) {
      if (0 < *(int *)(temp_v4 + 0xbc)) {
        temp_v6 = temp_v4 + 0x4900;
        temp_v14 = *(short *)(temp_v4 + 0x496c) == 0;
        if (temp_v14) {
          temp_v6 = (unsigned int)*(unsigned short *)(temp_v4 + 0x496e);
        }
        temp_v15 = temp_v14 && temp_v6 == 0;
        if (temp_v14 && temp_v6 == 0) {
          temp_v15 = *(int *)(temp_v4 + 0xb8) == 0;
        }
        if (((temp_v15) && (0 < *(short *)(temp_v4 + 0x1fc6))) &&
           (*(int *)(temp_v4 + 0xbc) - 1 <= (int)(unsigned int)*(unsigned char *)(temp_v4 + 0x44b5))) {
          *(unsigned int *)(temp_v4 + 0x88) = 0xd;
        }
      }
      temp_v3 = *(int *)(temp_v4 + 0x88);
      if (((temp_v3 == 1 || temp_v3 == 5) || temp_v3 == 10) && (temp_v3 = FUN_003bf0a4(), temp_v3 != 0)) {
        *(char *)(temp_v4 + 0x44b7) = *(char *)(temp_v4 + 0x44b7) + '\x01';
        *(unsigned int *)(temp_v4 + 0x88) = 6;
        return;
      }
    }
    break;
  case 0x10:
    FUN_00308d5c(temp_v4);
    return;
  case 0x13:
    switch(*(unsigned int *)(temp_v4 + 0x88)) {
    case 0:
    case 2:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      break;
    default:
      temp_v4 = FUN_0027e3b8(g_btlEvent);
      if ((temp_v4 == 0) &&
         (puVar5 = g_btlEvent, btlEventSelectTrigger(g_btlEvent,8,0xffffffff,0),
         puVar5 != (unsigned int *)0x0)) {
        puVar5 = g_btlEvent;
        *g_btlEvent = 9;
        *(unsigned char *)(puVar5 + 0xb) = 0;
        *(unsigned int *)(DAT_00435d18 + 0x2f98) = 0;
        return;
      }
      break;
    case 3:
      temp_v3 = gameGetSupportUnitData();
      temp_v6 = (unsigned int)*(unsigned short *)(temp_v3 + 0x46);
      if ((temp_v6 != 0) && (temp_v10 = temp_v6, devilGetRecord(), temp_v10 != 0)) {
        memClear(&temp_v16,0x60);
        FUN_002bd06c(temp_v6);
        libc_strcpy(&temp_v16,temp_v6);
        textEncodeFontSlot(0xd,&temp_v16);
        FUN_002bff50();
        messageForwardDefaultMode(*(unsigned int *)(temp_v4 + 0x2230),0,0,6,0);
        *(unsigned int *)(temp_v4 + 0x44a0) = *(unsigned int *)(temp_v4 + 0x44a0) | 0x100000;
        buttonHelpSetPreset(0x90);
        return;
      }
    }
    break;
  case 0x14:
    soundChannelStopAll(0xf);
    FUN_003d9be4(DAT_00435d18,temp_v4);
    temp_v3 = dialogIsActive();
    if (temp_v3 != 0) {
      infoWinStartTimer(1);
    }
    temp_v3 = jobIsValid(*(unsigned int *)(temp_v4 + 0x24));
    if (temp_v3 != 0) {
      jobStop(*(unsigned int *)(temp_v4 + 0x24),0);
    }
    btlGameOverCreateTasks(temp_v4);
    return;
  case 0x15:
    temp_v3 = 0;
    do {
      puVar9 = (unsigned int *)(*(int *)(temp_v4 + 0x1fc0) + temp_v3 * 0x288);
      if (((*puVar9 & 1) != 0) && ((*puVar9 & 0x40) == 0)) {
        if (puVar9[0x9e] != 0) {
          temp_v7 = *(short *)(puVar9[0x9e] + 0x1c);
          *(short *)((int)puVar9 + 0x1b6) = temp_v7;
          temp_v2 = *(short *)(puVar9[0x9e] + 0x2a);
          if (temp_v2 <= temp_v7) {
            temp_v7 = temp_v2;
          }
          *(short *)(puVar9[0x9e] + 0x2a) = temp_v7;
        }
        else if (puVar9[0x9f] != 0) {
          temp_v7 = *(short *)(puVar9[0x9f] + 0xe);
          *(short *)((int)puVar9 + 0x1b6) = temp_v7;
          temp_v2 = *(short *)(puVar9[0x9f] + 0x2a);
          if (temp_v2 <= temp_v7) {
            temp_v7 = temp_v2;
          }
          *(short *)(puVar9[0x9f] + 0x2a) = temp_v7;
        }
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x6d);
    if ((*(unsigned int *)(temp_v4 + 0x44a0) & 0x40000) == 0) {
      FUN_0033a670(temp_v4);
    }
    temp_v3 = 0;
    do {
      temp_v12 = temp_v4 + temp_v3 * 4;
      psVar18 = (short *)(temp_v12 + 0x445c);
      if ((0 < *psVar18) && (*(short *)(temp_v12 + 0x445e) != 0)) {
        temp_v5 = gameDataEntryGetLevel(*psVar18);
        gameDataEntrySetLevel(*psVar18,temp_v5 + (unsigned int)*(unsigned short *)(temp_v12 + 0x445e));
        FUN_00348c10(*psVar18,*(unsigned short *)(temp_v12 + 0x445e));
        gameDataSlotSetFlag(*psVar18,1);
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x10);
    if ((*(unsigned int *)(temp_v4 + 0x44a8) & 0x10000000) != 0) {
      *(unsigned int *)(temp_v4 + 0x1a8) = 0;
      *(unsigned int *)(temp_v4 + 0x1ac) = 0;
      *(unsigned int *)(temp_v4 + 0x1b4) = 0;
      *(unsigned int *)(temp_v4 + 0x1b8) = 0;
    }
    if ((*(unsigned int *)(temp_v4 + 0x44ac) & 8) != 0) {
      *(unsigned char *)(temp_v4 + 0x1b0) = 1;
    }
    if ((*(unsigned int *)(temp_v4 + 0x44ac) & 0x10) != 0) {
      *(unsigned char *)(temp_v4 + 0x1b1) = 1;
    }
    *(unsigned int *)(temp_v4 + 0x1b8) = *(unsigned int *)(temp_v4 + 0x226c);
    *(int *)(temp_v4 + 0x1a4) = *(int *)(temp_v4 + 0x1a4) + *(int *)(temp_v4 + 0x22a4);
    temp_v3 = *(int *)(temp_v4 + 0x22a0);
    do {
      temp_v12 = temp_v4 + temp_v3 * 4;
      if (*(int *)(temp_v12 + 0x2270) != 0) {
        temp_v14 = 1;
        temp_v5 = 0;
        do {
          temp_v11 = temp_v4 + temp_v5 * 4;
          temp_v13 = *(int *)(temp_v11 + 0x174);
          if (temp_v13 != 0) {
            unaff_r9 = *(int *)(temp_v12 + 0x2270);
          }
          if (temp_v13 == 0 || temp_v13 == unaff_r9) {
            temp_v14 = 0;
            *(unsigned int *)(temp_v11 + 0x174) = *(unsigned int *)(temp_v12 + 0x2270);
            unaff_r9 = *(int *)(temp_v12 + 0x2288);
            *(int *)(temp_v11 + 0x18c) = *(int *)(temp_v11 + 0x18c) + unaff_r9;
            *(unsigned int *)(temp_v12 + 0x2270) = 0;
            *(unsigned int *)(temp_v12 + 0x2288) = 0;
          }
          temp_v5 = temp_v5 + 1;
        } while (temp_v5 < 6);
        if (temp_v14) break;
      }
      temp_v3 = temp_v3 - 1;
      if (temp_v3 < 0) {
        temp_v3 = 5;
      }
    } while (*(int *)(temp_v4 + 0x22a0) != temp_v3);
    if ((*(unsigned int *)(temp_v4 + 0x44a0) & 0x40000) == 0) {
      switch(*(unsigned int *)(temp_v4 + 0x88)) {
      case 1:
      case 3:
      case 4:
      case 5:
      case 10:
      case 0xb:
        if ((*(unsigned int *)(temp_v4 + 0xe0) & 0x800000) == 0) {
          btlHelpFreeEntries();
          FUN_001f8290(temp_v4);
          temp_v4 = g_mapDepartWork;
          if (DAT_0049fb9c != 1) {
            *(unsigned short *)(g_mapDepartWork + 0x14) = 0;
          }
          else {
            *(unsigned short *)(g_mapDepartWork + 0x14) = 1;
            *(unsigned int *)(temp_v4 + 0x20) = 0;
            *(unsigned int *)(temp_v4 + 0x24) = 0;
            *(unsigned int *)(temp_v4 + 0x28) = 0;
            *(unsigned int *)(temp_v4 + 0x2c) = 0;
          }
          return;
        }
      }
    }
    break;
  case 0x16:
    switch(*(unsigned char *)(temp_v4 + 0xf7)) {
    case 1:
      if (*(int *)(temp_v4 + 0x88) == 1) {
        piVar19 = (int *)(temp_v4 + 0x4a44);
        if (*piVar19 != 0) {
          asdMemFree();
          *piVar19 = 0;
        }
        if (*(int *)(temp_v4 + 0x4a48) != 0) {
          scrScriptProcessDestroy();
          *(int *)(temp_v4 + 0x4a48) = 0;
        }
        piVar15 = (int *)(temp_v4 + 0x4a4c);
        *piVar15 = 0;
        asdLoadFileAsyncSimple("battle/Common/btlfade.bf",piVar19,0);
        *piVar15 = *piVar15 + 1;
        return;
      }
    default:
      slotSetRequest(0,10,0xff);
      slotSetRequest(1,10,0xff);
      return;
    case 2:
      slotSetRequest(0,10,0xffffffff);
      slotSetRequest(1,10,0xffffffff);
      return;
    case 3:
      break;
    case 4:
      if (*(int *)(temp_v4 + 0x88) == 2) {
        slotSetRequest(0,10,0xff);
        slotSetRequest(1,10,0xff);
        return;
      }
    }
    break;
  case 0x17:
    temp_v3 = jobIsValid(*(unsigned int *)(temp_v4 + *(int *)(temp_v4 + 0x84) * 4 + 0xc));
    if (temp_v3 != 0) {
      jobStop(*(unsigned int *)(temp_v4 + *(int *)(temp_v4 + 0x84) * 4 + 0xc),0);
    }
    *(unsigned int *)(temp_v4 + 0x84) = 0;
    puVar5 = reinterpret_cast<unsigned int *>(btlUnitGet(reinterpret_cast<BtlMainState *const *>(g_btlScriptUnit)));
    *puVar5 = 0;
    btlDebugOpen((BtlMainState *)temp_v4,1);
    return;
  case 0x18:
    temp_v3 = jobIsValid(*(unsigned int *)(temp_v4 + *(int *)(temp_v4 + 0x84) * 4 + 0xc));
    if (temp_v3 != 0) {
      jobStop(*(unsigned int *)(temp_v4 + *(int *)(temp_v4 + 0x84) * 4 + 0xc),0);
    }
    *(unsigned int *)(temp_v4 + 0x84) = 0;
    puVar5 = reinterpret_cast<unsigned int *>(btlUnitGet(reinterpret_cast<BtlMainState *const *>(g_btlScriptUnit)));
    *puVar5 = 0;
    FUN_001f7fac(temp_v4);
    return;
  }
  return;
}

} /* extern "C" */
