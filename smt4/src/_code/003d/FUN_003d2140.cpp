/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d2140` (_code @ 0x3d2140, 0x76c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
struct BattleActionHistoryState;

extern "C" {

int eventCommandDispatchPendingCleanup(void);
int FUN_002276f8(...);
int battleResetCounterAndFlag(void);
int modelSetResetSlots(...);
int modelManagerReleaseSlots(...);
int asdSoundSelectSlotB(...);
int btlUiRecountParty(...);
int objDestroyChild(...);
int nw_snd_SoundHeap_LoadState(...);

int btlAiScriptCall(unsigned int *);
int FUN_001d2710(...);
int btlEntryValuesCopy(...);
int FUN_00227b14(int *, int, int, int);
int FUN_00229098(int *);
int frameRangeExtend(...);
int FUN_00229c5c(int *, int, int);
int FUN_00244fb0(...);
int FUN_00246454(int, unsigned int *, unsigned int *);
int FUN_00256898(...);
int FUN_002569ac(...);
int FUN_0026beb4(...);
int btlEventSelectTrigger(...);
void battleSelectButtonHelpPreset(int);
int gameGetSlotTable(void);
int buttonHelpSetPreset(...);
int memClear(int, int);
void FUN_0033a780(BattleActionHistoryState *state);
int btlUiRouteSelectedAction(int *);
int FUN_003ca32c(...);
int battleResolveEscapeAttempt(...);
int FUN_003ca6c4(int *, unsigned int *);
int btlResolveCommandEvent(...);
int FUN_003d3944(int *, unsigned int *);
int FUN_003d3ba8(...);
struct BtlMainState;
void btlResetTransitionProgress(BtlMainState *state);

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern int g_btlScriptUnit; /* 0x43427c */
extern int g_btlMain; /* 0x4342c8 */
extern int DAT_00435d18; /* 0x435d18 */
extern unsigned int *g_btlEvent; /* 0x435d48 */
extern int *g_btlUiBlock; /* 0x439ca8 */
extern int DAT_004e316c; /* 0x4e316c */

/* Supplied declaration required: btlAiScriptCall. */
/* Supplied declaration required: FUN_001d2710. */
/* Supplied declaration required: eventCommandDispatchPendingCleanup. */
/* Supplied declaration required: FUN_002276f8. */
/* Supplied declaration required: btlEntryValuesCopy. */
/* Supplied declaration required: FUN_00227b14. */
/* Supplied declaration required: FUN_00229098. */
/* Supplied declaration required: frameRangeExtend. */
/* Supplied declaration required: FUN_00229c5c. */
/* Supplied declaration required: battleResetCounterAndFlag. */
extern int *gameSlotFindByCategory(void);
/* Supplied declaration required: FUN_00244fb0. */
/* Supplied declaration required: FUN_00246454. */
extern unsigned int saveResolvePartySlot(int);
/* Supplied declaration required: FUN_00256898. */
/* Supplied declaration required: FUN_002569ac. */
/* Supplied declaration required: FUN_0026beb4. */
/* Supplied declaration required: modelSetResetSlots. */
/* Supplied declaration required: modelManagerReleaseSlots. */
extern int *FUN_0027e3b8(unsigned int *);
/* Supplied declaration required: btlEventSelectTrigger. */
extern int *FUN_00293230(int);
/* Supplied declaration required: gameGetSlotTable. */
/* Supplied declaration required: buttonHelpSetPreset. */
extern int buttonHelpGetStatus(void);
/* Supplied declaration required: asdSoundSelectSlotB. */
/* Supplied declaration required: memClear. */
extern int *jyoucyuGetTableEntry(unsigned int);
extern int FUN_002e14e4(unsigned int);
/* Supplied declaration required: FUN_0033a780. */
/* Supplied declaration required: btlUiRouteSelectedAction. */
/* Supplied declaration required: btlUiRecountParty. */
extern int questGetCurrentRecordHalf4(void);
/* Supplied declaration required: FUN_003ca32c. */
/* Supplied declaration required: battleResolveEscapeAttempt. */
/* Supplied declaration required: FUN_003ca6c4. */
/* Supplied declaration required: btlResolveCommandEvent. */
/* Supplied declaration required: FUN_003d3944. */
/* Supplied declaration required: FUN_003d3ba8. */
/* Supplied declaration required: objDestroyChild. */
extern int *FUN_003dbb40(int);
extern int *btlReflectCreateKind10(unsigned int, unsigned int *, int, unsigned int);
/* Supplied declaration required: nw_snd_SoundHeap_LoadState. */


int * FUN_003d2140(int *param_1,unsigned int param_2)

{
/* irregular: 3 goto(s); 35 native warning(s); review required */
  short temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  unsigned int *puVar4;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int *puVar8;
  unsigned int *puVar9;
  int temp_v5;
  int *piVar11;
  
  piVar11 = (int *)*param_1;
  piVar2 = (int *)piVar11[0x21];
  temp_v2 = g_btlScriptUnit + (int)piVar2 * 0xf1c;
  puVar8 = (unsigned int *)(temp_v2 + 4);
  switch(param_2) {
  case 1:
    if ((piVar11[0x1128] & 0x40U) != 0) {
      temp_v3 = *puVar8 | 0x80;
      *puVar8 = temp_v3;
    }
    else {
      temp_v3 = *puVar8;
      if ((piVar11[0x1128] & 0x100U) != 0) {
        temp_v3 = temp_v3 | 0x1000;
        *puVar8 = temp_v3;
      }
    }
    if ((temp_v3 & 0x800) == 0) {
      piVar2 = g_btlUiBlock;
      FUN_00229c5c(g_btlUiBlock,*(unsigned short *)(temp_v2 + 0x30),1);
      return piVar2;
    }
    FUN_00227b14(g_btlUiBlock,*(unsigned short *)(temp_v2 + 0x30),
                 (int)*(short *)(*(int *)(temp_v2 + 0x2c) + 0x14c),1);
    piVar2 = (int *)0x0;
    *puVar8 = *puVar8 & 0xfffff7ff;
    *(unsigned short *)(*(int *)(temp_v2 + 0x2c) + 0x14c) = 0;
    *(unsigned short *)(*(int *)(temp_v2 + 0x2c) + 0x14e) = 0;
    break;
  case 2:
    btlAiScriptCall(puVar8);
    memClear(temp_v2 + 0x3c,0x85);
    FUN_00229098(param_1);
    temp_v2 = buttonHelpGetStatus();
    piVar2 = (int *)FUN_00293230(*param_1);
    if (piVar2 != (int *)0x0) {
      if (temp_v2 != 0x3d) {
        piVar2 = (int *)0x3d;
        buttonHelpSetPreset(0x3d);
        return piVar2;
      }
    }
    else if ((temp_v2 != 0xb3) && (temp_v2 != 0xb4)) {
      piVar2 = (int *)0x0;
      battleSelectButtonHelpPreset(0);
      return piVar2;
    }
    break;
  case 3:
  case 0x11:
    memClear(temp_v2 + 0x3c,0x85);
    FUN_00229098(param_1);
    return param_1;
  case 5:
    FUN_003ca6c4(param_1,puVar8);
    return param_1;
  case 7:
    btlUiRouteSelectedAction(g_btlUiBlock);
    memClear(temp_v2 + 0x3c,0x85);
    piVar2 = (int *)gameGetSlotTable();
    return piVar2;
  case 8:
    temp_v2 = gameGetSlotTable();
    temp_v4 = 0;
    do {
      puVar9 = (unsigned int *)(*(int *)(*param_1 + 0x1fc0) + temp_v4 * 0x288);
      piVar2 = (int *)*puVar9;
      if (((unsigned int)piVar2 & 1) != 0 && ((unsigned int)piVar2 & 8) != 0) {
        temp_v5 = 0;
        do {
          if ((-1 < *(char *)(temp_v2 + temp_v5 + 0x9108)) &&
             (temp_v3 = saveResolvePartySlot(temp_v5),
             *(short *)(temp_v3 + 0x46) == *(short *)((int)puVar9 + 0xce))) {
            puVar9[0x9f] = temp_v3;
            piVar2 = (int *)gameSlotFindByCategory();
            *(short *)(puVar9 + 0x35) = (short)(int)piVar2;
            goto LAB_003d243c;
          }
          temp_v5 = temp_v5 + 1;
        } while (temp_v5 < 3);
        piVar2 = (int *)0x0;
        FUN_00246454(0,puVar8,puVar9);
      }
LAB_003d243c:
      temp_v4 = temp_v4 + 1;
      if (temp_v4 >= 4) {
        return piVar2;
      }
    } while( 1 );
  case 0xb:
    FUN_003d3944(param_1,puVar8);
    return param_1;
  case 0xc:
    FUN_00244fb0(piVar11,0,1,10,0xff);
    return piVar11;
  case 0xd:
    FUN_0033a780(reinterpret_cast<BattleActionHistoryState *>(piVar11));
    btlResetTransitionProgress((BtlMainState *)g_btlMain);
    *(unsigned int *)(temp_v2 + 0x10) = 0;
    FUN_00256898(0,0);
    piVar2 = (int *)0xed;
    buttonHelpSetPreset(0xed);
    return piVar2;
  case 0xe:
    FUN_003d3ba8(param_1,puVar8);
    return param_1;
  case 0xf:
    temp_v4 = -1;
    temp_v2 = 0;
    if ((piVar11[0x1128] & 0x200U) != 0) {
      do {
        puVar9 = (unsigned int *)(piVar11[0x7f0] + temp_v2 * 0x288);
        temp_v3 = *puVar9;
        if (((((temp_v3 & 1) != 0) && ((temp_v3 & 0x40) == 0)) && (-1 < (short)puVar9[2])) &&
           ((temp_v3 & 0x10) != 0)) {
          temp_v4 = (int)(short)puVar9[2];
          break;
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 0x6d);
    }
    else {
      do {
        temp_v5 = (int)*(short *)(piVar11[0x7a6] + temp_v2 * 0x114 + 0x60);
        if ((-1 < temp_v5) && (*(char *)((int)puVar8 + temp_v5 + 0x38) != '\0')) {
          temp_v4 = (int)*(short *)(piVar11[0x7a6] + temp_v2 * 0x114 + 0x62);
          break;
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 0x6d);
    }
    FUN_001d2710(piVar11,puVar8,0,temp_v4);
    return piVar11;
  case 0x10:
    btlResolveCommandEvent(param_1,puVar8);
    return param_1;
  case 0x12:
    if ((*puVar8 & 0x1080) == 0) {
      temp_v1 = 0x32;
    }
    else {
      temp_v1 = 0;
    }
    FUN_0026beb4(temp_v1,puVar8,0,0,1);
    temp_v2 = questGetCurrentRecordHalf4();
    piVar2 = (int *)0x0;
    if (temp_v2 != 0) {
      piVar2 = (int *)btlReflectCreateKind10(0,puVar8,temp_v2,0xffffffff);
      return piVar2;
    }
    break;
  case 0x13:
    temp_v0 = *(short *)(*(int *)(temp_v2 + 0x2c) + 0x14c);
    if ((*puVar8 & 0x1080) == 0) {
      piVar2 = (int *)0x32;
    }
    else {
      piVar2 = (int *)0x0;
    }
    if (temp_v0 == 6) {
      FUN_0026beb4(0,puVar8,1,*(unsigned int *)(temp_v2 + 0x28),1);
      frameRangeExtend(param_1,puVar8,(int)*(short *)(*(int *)(temp_v2 + 0x28) + 0x62),0,5,5);
      return param_1;
    }
    if (temp_v0 == 0xf) {
      FUN_0026beb4(piVar2,puVar8,0,*(unsigned int *)(temp_v2 + 0x28),1);
      frameRangeExtend(param_1,puVar8,(int)*(short *)(*(int *)(temp_v2 + 0x28) + 0x62),0,5,5);
      return param_1;
    }
    break;
  case 0x14:
    battleResolveEscapeAttempt(param_1,puVar8);
    return param_1;
  case 0x18:
    piVar2 = (int *)FUN_0027e3b8(g_btlEvent);
    if (piVar2 == (int *)0x0) {
      temp_v4 = (int)*(short *)(*(int *)(temp_v2 + 0x24) + 0x6e);
      if (*(short *)(*(int *)(temp_v2 + 0x2c) + 0x14c) != 0xb) {
        puVar4 = g_btlEvent;
        btlEventSelectTrigger(g_btlEvent,3,temp_v4,0);
        if (puVar4 == (unsigned int *)0x0) {
          return (int *)0x0;
        }
      }
      else {
        puVar4 = g_btlEvent;
        btlEventSelectTrigger(g_btlEvent,7,temp_v4,0);
        if (puVar4 == (unsigned int *)0x0) {
          return (int *)0x0;
        }
      }
code_r0x0027e38c:
      puVar4 = g_btlEvent;
      *g_btlEvent = 9;
      *(unsigned char *)(puVar4 + 0xb) = 0;
      piVar2 = (int *)(DAT_00435d18 + 0x2f98);
      *piVar2 = 0;
      return piVar2;
    }
    break;
  case 0x1c:
    FUN_002569ac(param_1,piVar2);
    btlEntryValuesCopy(param_1,puVar8);
    piVar2 = (int *)FUN_0027e3b8(g_btlEvent);
    if (piVar2 == (int *)0x0) goto code_r0x0027e38c;
    break;
  case 0x1f:
    piVar2 = (int *)FUN_003dbb40(DAT_00435d18);
    return piVar2;
  case 0x20:
    FUN_003ca32c(param_1,puVar8);
    return param_1;
  case 0x21:
    if ((*puVar8 & 0x10000) != 0) {
      if ((short)piVar11[0x7f1] < 1) {
        return (int *)(int)(short)piVar11[0x7f1];
      }
    }
    else {
      piVar2 = (int *)**(unsigned int **)(temp_v2 + 0x24);
      if (((unsigned int)piVar2 & 1) == 0) {
        return piVar2;
      }
      if (((unsigned int)piVar2 & 0x40) != 0) {
        return piVar2;
      }
    }
    piVar2 = (int *)FUN_0027e3b8(g_btlEvent);
    if (piVar2 == (int *)0x0) {
      puVar4 = g_btlEvent;
      btlEventSelectTrigger(g_btlEvent,4,(int)*(short *)(*(int *)(temp_v2 + 0x24) + 0x6e),0);
      piVar2 = (int *)0x0;
      if (puVar4 != (unsigned int *)0x0) goto code_r0x0027e38c;
    }
    break;
  case 0x23:
    temp_v4 = g_btlScriptUnit;
    if ((**(unsigned int **)(temp_v2 + 0x24) & 0x10) == 0) {
      btlUiRecountParty(g_btlUiBlock);
    }
    objDestroyChild(DAT_00435d18);
    FUN_002276f8(DAT_00435d18);
    *(unsigned int *)(DAT_00435d18 + 0x3028) = *(unsigned int *)(DAT_00435d18 + 0x3028) & 0xffff7fff;
    battleResetCounterAndFlag();
    modelManagerReleaseSlots(DAT_00435d18);
    modelSetResetSlots(DAT_00435d18);
    *(unsigned int *)(g_btlMain + 0x634) = *(unsigned int *)(g_btlMain + 0x634) & 0xffffbfff;
    eventCommandDispatchPendingCleanup();
    piVar2 = (int *)jyoucyuGetTableEntry(1);
    if (piVar2 == (int *)0x0) {
      asdSoundSelectSlotB(2);
      temp_v2 = FUN_002e14e4(2);
      piVar2 = (int *)0x0;
      if (DAT_004e316c != 0) {
        temp_v4 = *(int *)(DAT_004e316c + 0x10);
      }
      if (DAT_004e316c != 0 && temp_v4 != 0) {
        if (*(int *)(DAT_004e316c + 0x44) < temp_v2) {
          temp_v2 = *(int *)(DAT_004e316c + 0x44);
        }
        nw_snd_SoundHeap_LoadState(DAT_004e316c,temp_v2);
        piVar2 = (int *)0x1;
      }
      return piVar2;
    }
    return piVar2;
  }
  return piVar2;
}

} /* extern "C" */
