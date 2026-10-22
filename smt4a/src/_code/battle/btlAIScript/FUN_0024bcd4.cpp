/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024bcd4` (_code @ 0x24bcd4, 0x1ca4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00137ed0(void);
int asdSequenceRequest(...);
int lookupNameEntry(...);
int FUN_002ba998(void);
int FUN_002d2000(void);
int tmnlResetSelection(void);
int sequenceRequestFlushDeferred(void);
int FUN_003848a4(void);
int FUN_003d54f8(...);
int FUN_003e785c(...);
int FUN_003ebad4(...);
int FUN_003fda64(...);
int FUN_0047dc50(void);
int FUN_0047dd4c(...);
int callJyoucyuGetTableEntry1(void);
int callOnHandleField4B(...);
int callOnHandleField4C(...);
int callOnHandleField4D(...);
int FUN_0050d7ac(void);
int FUN_0050d8e4(void);
int nn_math_ARMv6_MTX34CopyAsm(...);

int dialogClose(...);
int FUN_00215978(...);
int FUN_00275bc8(...);
int FUN_002c2610(void);
int holderStopJob(...);
int FUN_00331410(void);
int FUN_00339270(void);
int sysClearCachedFlag(void);
int soundChannelStopAll(...);
int btlActionPrepareFromSource(...);
int FUN_003ee734(...);
int FUN_003ef1e4(...);
int gameFlagSetValue(...);
int FUN_0040a244(void);
int btlHelpFreeEntries(void);
int FUN_004c8e30(...);
int mathVectorClear(...);
int motionClearVectors(...);
int obj4FSlotsReset(...);
int obj4FSlots28Reset(...);
int FUN_004f8fa0(...);
int FUN_004fa01c(...);
int rt_memcpy(...);
int rt_memcpy_w(...);

int sysPlaySe(int);
int asdMemFree(void);
int dataTable04FindById(void);
int scrScriptProcessStartEntry(...);
int sysMemClear(...);
int FUN_003756c8(void);
int stateAtCIs4(...);
int FUN_003eaf20(void);
int FUN_003ebca0(void);
int FUN_003eebf4(unsigned int, int);
int FUN_003f034c(...);
int FUN_003f26d4(unsigned int);
int chainCountIdUnflagged(...);
int jyoucyuEnsureResidentEntry(void);
int FUN_004a9d1c(...);
int FUN_004aa2e0(unsigned int, int);
int FUN_004ac0bc(...);
int FUN_004c5da4(int, int);
void FUN_004c8bb8(int alternate, unsigned int argument);
int FUN_004d7a70(...);
int FUN_004d7fe4(void);
int state4DStart(int);
int hasFlag80Or1000(...);
int btlUnitGet(...);
int FUN_004fb798(...);

/* stack frame of void: 12 slot(s), 48 byte(s) */
typedef struct {
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
} void_stack;

extern unsigned char LAB_0024d9a4; /* 0x24d9a4 */
extern int g_aocMain; /* 0x570260 */
extern unsigned int g_btlAiScript; /* 0x571130 */
extern unsigned int g_btlScriptUnit; /* 0x57113c */
extern unsigned int g_btlActionReflect; /* 0x5712f0 */
extern unsigned int g_btlCamera; /* 0x571508 */
extern unsigned int g_btlAux; /* 0x573808 */
extern int g_btlEvent; /* 0x573898 */
extern unsigned int g_btlMain; /* 0x573920 */
extern int DAT_00573924; /* 0x573924 */
extern int DAT_00573928; /* 0x573928 */
extern unsigned int DAT_00573940; /* 0x573940 */
extern unsigned int DAT_00573978; /* 0x573978 */
extern unsigned int DAT_0057397c; /* 0x57397c */
extern unsigned int DAT_005739a0; /* 0x5739a0 */
extern unsigned int DAT_005739a4; /* 0x5739a4 */
extern unsigned int DAT_005739e8; /* 0x5739e8 */
extern unsigned int DAT_005739ec; /* 0x5739ec */
extern unsigned int DAT_005739f0; /* 0x5739f0 */
extern unsigned int DAT_005739f4; /* 0x5739f4 */
extern unsigned int DAT_005739f8; /* 0x5739f8 */
extern unsigned int DAT_005739fc; /* 0x5739fc */
extern unsigned int DAT_00573a00; /* 0x573a00 */
extern unsigned int DAT_00573a04; /* 0x573a04 */
extern unsigned int DAT_00573a08; /* 0x573a08 */
extern unsigned int DAT_00573a0c; /* 0x573a0c */
extern unsigned int DAT_00573a18; /* 0x573a18 */
extern unsigned int DAT_00573a1c; /* 0x573a1c */
extern unsigned int DAT_00573a28; /* 0x573a28 */
extern unsigned int DAT_00573a2c; /* 0x573a2c */
extern unsigned int DAT_00573a40; /* 0x573a40 */
extern unsigned int DAT_00573a44; /* 0x573a44 */
extern unsigned int DAT_00573a48; /* 0x573a48 */
extern unsigned int DAT_00573a4c; /* 0x573a4c */
extern unsigned int DAT_00573a50; /* 0x573a50 */
extern unsigned int DAT_00573a54; /* 0x573a54 */
extern unsigned int uRam00573a68; /* 0x573a68 */
extern unsigned int uRam00573a6c; /* 0x573a6c */
extern unsigned int uRam00573a80; /* 0x573a80 */
extern unsigned int uRam00573a84; /* 0x573a84 */
extern unsigned int uRam00573a90; /* 0x573a90 */
extern unsigned int uRam00573a94; /* 0x573a94 */
extern unsigned int uRam00573a98; /* 0x573a98 */
extern unsigned int uRam00573a9c; /* 0x573a9c */
extern unsigned int DAT_00573aa0; /* 0x573aa0 */
extern unsigned int DAT_00573aa4; /* 0x573aa4 */
extern unsigned int DAT_00573aa8; /* 0x573aa8 */
extern unsigned int DAT_00573aac; /* 0x573aac */
extern unsigned int DAT_00573ad8; /* 0x573ad8 */
extern unsigned int DAT_00573adc; /* 0x573adc */
extern unsigned int DAT_00573ae0; /* 0x573ae0 */
extern unsigned int DAT_00573ae4; /* 0x573ae4 */
extern unsigned int DAT_00573ae8; /* 0x573ae8 */
extern unsigned int DAT_00573aec; /* 0x573aec */
extern unsigned int DAT_00573af8; /* 0x573af8 */
extern unsigned int DAT_00573afc; /* 0x573afc */
extern unsigned int DAT_00573b08; /* 0x573b08 */
extern unsigned int DAT_00573b0c; /* 0x573b0c */
extern unsigned int DAT_00573b78; /* 0x573b78 */
extern unsigned int DAT_00573b7c; /* 0x573b7c */
extern unsigned int g_btlPartnerAttack; /* 0x573c50 */
extern int g_btlStageModel; /* 0x57a4f8 */
extern unsigned int g_btlUiBlock; /* 0x57a9c8 */
extern unsigned int DAT_005c4c2c; /* 0x5c4c2c */
extern int DAT_005f1b74; /* 0x5f1b74 */
extern unsigned int DAT_0064c054; /* 0x64c054 */
extern unsigned int DAT_0064c058; /* 0x64c058 */
extern unsigned int DAT_0064c05c; /* 0x64c05c */
extern unsigned int DAT_0064c060; /* 0x64c060 */
extern unsigned int DAT_0064c064; /* 0x64c064 */
extern unsigned int DAT_0064c068; /* 0x64c068 */
extern unsigned int DAT_0064c06c; /* 0x64c06c */
extern unsigned int DAT_0064c070; /* 0x64c070 */
extern unsigned int DAT_0064c074; /* 0x64c074 */
extern unsigned int DAT_0064c078; /* 0x64c078 */
extern unsigned int DAT_0064c07c; /* 0x64c07c */
extern unsigned int DAT_0064c080; /* 0x64c080 */

/* Supplied declaration required: FUN_00137ed0. */
/* Supplied declaration required: asdSequenceRequest. */
extern int gameDataBlocksGetSaveData(void);
extern int jobIsValid(unsigned int);
/* Supplied declaration required: sysPlaySe. */
extern int dataTableGetCount(unsigned int);
extern int dataTableGetEntries(void);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: lookupNameEntry. */
extern unsigned int dataTableFileGetTable(int, unsigned int);
extern unsigned int gameGetSlotTable(void);
/* Supplied declaration required: dataTable04FindById. */
extern unsigned int flagValueGetStorage(void);
/* Supplied declaration required: dialogClose. */
/* Supplied declaration required: FUN_00215978. */
extern int scrRunOpcodesStub(unsigned int);
extern int tmnlHasSelection(void);
extern int dialogIsActive(void);
extern int messageMainIsIdle(void);
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: scrScriptProcessStartEntry. */
/* Supplied declaration required: FUN_002ba998. */
/* Supplied declaration required: FUN_002c2610. */
extern int FUN_002cf854(void);
extern int lmapMainGetUnk74(void);
/* Supplied declaration required: FUN_002d2000. */
extern int FUN_002e07f4(void);
/* Supplied declaration required: sysMemClear. */
extern int __cxa_guard_acquire(unsigned int *);
/* Supplied declaration required: holderStopJob. */
/* Supplied declaration required: tmnlResetSelection. */
extern int gameStateIsFlagSetAndLarge(void);
extern int btlEncountCheck(unsigned int);
/* Supplied declaration required: FUN_00331410. */
/* Supplied declaration required: FUN_00339270. */
/* Supplied declaration required: FUN_003756c8. */
/* Supplied declaration required: sequenceRequestFlushDeferred. */
extern int sequenceRequestIsPending(void);
/* Supplied declaration required: FUN_003848a4. */
/* Supplied declaration required: sysClearCachedFlag. */
/* Supplied declaration required: soundChannelStopAll. */
/* Supplied declaration required: FUN_003d54f8. */
/* Supplied declaration required: stateAtCIs4. */
/* Supplied declaration required: FUN_003e785c. */
extern int FUN_003e9964(unsigned int);
/* Supplied declaration required: btlActionPrepareFromSource. */
/* Supplied declaration required: FUN_003eaf20. */
/* Supplied declaration required: FUN_003ebad4. */
/* Supplied declaration required: FUN_003ebca0. */
extern int FUN_003ed878(unsigned int);
/* Supplied declaration required: FUN_003ee734. */
/* Supplied declaration required: FUN_003eebf4. */
/* Supplied declaration required: FUN_003ef1e4. */
/* Supplied declaration required: FUN_003f034c. */
/* Supplied declaration required: FUN_003f26d4. */
/* Supplied declaration required: gameFlagSetValue. */
/* Supplied declaration required: FUN_003fda64. */
/* Supplied declaration required: FUN_0040a244. */
/* Supplied declaration required: chainCountIdUnflagged. */
extern int isZero(unsigned int);
/* Supplied declaration required: FUN_0047dc50. */
/* Supplied declaration required: FUN_0047dd4c. */
/* Supplied declaration required: jyoucyuEnsureResidentEntry. */
/* Supplied declaration required: callJyoucyuGetTableEntry1. */
/* Supplied declaration required: FUN_004a9d1c. */
/* Supplied declaration required: FUN_004aa2e0. */
extern int FUN_004aaa4c(unsigned int);
extern int FUN_004aaf94(unsigned int);
extern int btlUiIsIdle(unsigned int);
extern int btlUiIsIdleB(unsigned int);
extern int FUN_004ab6dc(unsigned int);
extern int FUN_004ab8a4(unsigned int);
extern int FUN_004abac8(unsigned int);
extern int btlUiIsMenuReady(unsigned int);
/* Supplied declaration required: FUN_004ac0bc. */
extern int flagGroupsCDAtLeast11(void);
/* Supplied declaration required: FUN_004c5da4. */
extern int FUN_004c662c(void);
/* Supplied declaration required: btlHelpFreeEntries. */
/* Supplied declaration required: FUN_004c8bb8. */
/* Supplied declaration required: FUN_004c8e30. */
/* Supplied declaration required: FUN_004d7a70. */
/* Supplied declaration required: FUN_004d7fe4. */
extern int isEntryUsable(int);
/* Supplied declaration required: callOnHandleField4B. */
/* Supplied declaration required: callOnHandleField4C. */
/* Supplied declaration required: callOnHandleField4D. */
/* Supplied declaration required: state4DStart. */
/* Supplied declaration required: hasFlag80Or1000. */
/* Supplied declaration required: btlUnitGet. */
/* Supplied declaration required: mathVectorClear. */
/* Supplied declaration required: motionClearVectors. */
/* Supplied declaration required: obj4FSlotsReset. */
/* Supplied declaration required: obj4FSlots28Reset. */
/* Supplied declaration required: FUN_004f8fa0. */
/* Supplied declaration required: FUN_004fa01c. */
/* Supplied declaration required: FUN_004fb798. */
/* Supplied declaration required: FUN_0050d7ac. */
/* Supplied declaration required: FUN_0050d8e4. */
/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */
/* Supplied declaration required: rt_memcpy. */
/* Supplied declaration required: rt_memcpy_w. */


/* WARNING: Type propagation algorithm not settling */

unsigned int FUN_0024bcd4(void)

{
/* irregular: 54 goto(s); 71 native warning(s); review required */
  short temp_v0;
  char temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  short *psVar5;
  unsigned short *puVar6;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  int temp_v10;
  unsigned int temp_v11;
  int *piVar15;
  unsigned int *puVar16;
  unsigned int temp_v12;
  unsigned char temp_v13;
  float temp_v14;
  float temp_v15;
  unsigned long long temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  int temp_v21;
  int temp_v22;
  int temp_v23;
  unsigned int temp_v24;
  float temp_v25;
  unsigned int temp_v26;
  unsigned int uStack_48;
  float temp_v27;
  float temp_v28;
  
  temp_v2 = g_btlMain;
  temp_v10 = 0;
  *(unsigned int *)(g_btlMain + 0x45b0) = 0;
  *(unsigned int *)(temp_v2 + 0x45b4) = 0;
  temp_v7 = uRam00573a6c;
  temp_v5 = uRam00573a68;
  temp_v3 = *(int *)(temp_v2 + 0x88);
  switch(temp_v3) {
  case 0:
    temp_v5 = (unsigned int)*(unsigned short *)(temp_v2 + 0x4d08);
    temp_v13 = (*(unsigned short *)(temp_v2 + 0x4d08) & 1) != 0;
    if (temp_v13) {
      temp_v5 = 2;
    }
    if (temp_v13 && temp_v2 != 0) {
      *(unsigned int *)(temp_v2 + 0x8c) = temp_v5;
    }
    goto LAB_0024d75c;
  case 1:
    if (((*(unsigned short *)(temp_v2 + 0x4d08) & 1) == 0) ||
       (temp_v3 = jobIsValid(*(unsigned int *)(temp_v2 + 0x80)), temp_v3 != 0)) goto LAB_0024d75c;
    temp_v6 = 2;
    if (*(int *)(temp_v2 + 0xac) == 2) {
      *(unsigned int *)(temp_v2 + 0xb4) = 2;
    }
    goto joined_r0x0024c078;
  case 2:
    if (*(int *)(temp_v2 + 0x9c) == 0) {
      temp_v3 = flagGroupsCDAtLeast11();
      if (((temp_v3 != 0) && (jyoucyuEnsureResidentEntry(), temp_v3 != 0)) && (*(int *)(temp_v2 + 0x2288) != 0)) {
        state4DStart(g_btlStageModel);
        *(unsigned int *)(temp_v2 + 0x9c) = 1;
      }
      goto LAB_0024d75c;
    }
    if (((*(int *)(temp_v2 + 0x9c) != 1) || (*(int *)(g_btlStageModel + 0xa0) != 4)) ||
       (temp_v6 = 4, temp_v2 == 0)) goto LAB_0024d75c;
    goto LAB_0024c6f0;
  case 3:
    if (*(int *)(g_btlStageModel + 0xa0) != 4) goto LAB_0024d75c;
    temp_v6 = 4;
    goto joined_r0x0024c6ec;
  case 4:
    temp_v3 = btlEncountCheck(temp_v2);
    if (temp_v3 == 0) goto LAB_0024d75c;
    temp_v3 = FUN_004c662c();
    *(unsigned char *)(temp_v2 + 0x45bc) = temp_v3 != 0;
    puVar16 = (unsigned int *)(temp_v2 + 0x45a0);
    if (((DAT_00573adc & *(unsigned int *)(temp_v2 + 0x45a4)) == 0 && (DAT_00573ad8 & *puVar16) == 0) &&
       (temp_v5 = temp_v2, FUN_003eaf20(), temp_v5 != 0)) {
      temp_v3 = (int)*(short *)(temp_v5 + 8);
      FUN_004c5da4(temp_v3,1);
      if ((temp_v3 != 0) && (temp_v10 = temp_v3, dataTable04FindById(), temp_v5 = DAT_00573ad8, temp_v10 != 0)) {
        temp_v7 = *(unsigned int *)(temp_v2 + 0x45a4) | DAT_00573adc;
        *(unsigned int *)(temp_v2 + 0x45a4) = temp_v7;
        if (0 < temp_v3) {
          temp_v7 = temp_v2;
        }
        *puVar16 = temp_v5 | *puVar16;
        if (0 < temp_v3) {
          FUN_003f26d4(temp_v7);
        }
      }
    }
    if (!((*(unsigned int *)(temp_v2 + 0x45ac) & DAT_00573b7c) == 0 &&
         (*(unsigned int *)(temp_v2 + 0x45a8) & DAT_00573b78) == 0)) {
      *(unsigned int *)(temp_v2 + 0xa8) = 2;
      temp_v6 = 0x1c;
    }
    else {
      if (*(char *)(temp_v2 + 0x188) == '\x01') {
        temp_v6 = 5;
        break;
      }
      temp_v5 = temp_v2;
      FUN_003eebf4(temp_v2,1);
      if (((int)temp_v5 >= 0) &&
         (!((*(unsigned int *)(temp_v2 + 0x45a4) & DAT_005739ec) != 0 || (DAT_005739e8 & *puVar16) != 0))) {
        temp_v5 = temp_v2;
        FUN_003eebf4(temp_v2,1);
        temp_v0 = *(short *)(*(int *)(temp_v2 + 0x1ffc) + temp_v5 * 0x408 + 0x166);
        if (*(int *)(temp_v2 + 0x2284) != 0) {
          temp_v6 = dataTableFileGetTable(*(int *)(temp_v2 + 0x2284),0);
          temp_v3 = dataTableGetEntries();
          temp_v10 = dataTableGetCount(temp_v6);
          temp_v9 = 0;
          if (temp_v9 < temp_v10) {
            do {
              psVar5 = (short *)(temp_v3 + temp_v9 * 0xc);
              if (*psVar5 == temp_v0) {
                if (psVar5 != (short *)0x0) {
                  temp_v6 = 7;
                  goto joined_r0x0024c078;
                }
                break;
              }
              temp_v9 = temp_v9 + 1;
            } while (temp_v9 < temp_v10);
          }
        }
        temp_v6 = 8;
      }
      else {
        if ((*(unsigned int *)(temp_v2 + 0x45a4) & DAT_00573aac) == 0 && (DAT_00573aa8 & *puVar16) == 0) {
          temp_v6 = 8;
          break;
        }
        temp_v6 = 6;
      }
    }
joined_r0x0024c078:
    if (g_btlMain == 0) goto LAB_0024d75c;
    goto LAB_0024d758;
  case 5:
    chainCountIdUnflagged(g_btlActionReflect,0);
    temp_v5 = temp_v2;
    FUN_003eebf4(temp_v2,1);
    if ((-1 < (int)temp_v5) &&
       ((*(unsigned int *)(temp_v2 + 0x45a4) & DAT_005739ec) == 0 &&
        (DAT_005739e8 & *(unsigned int *)(temp_v2 + 0x45a0)) == 0)) {
      temp_v5 = temp_v2;
      FUN_003eebf4(temp_v2,1);
      temp_v0 = *(short *)(*(int *)(temp_v2 + 0x1ffc) + temp_v5 * 0x408 + 0x166);
      if (*(int *)(temp_v2 + 0x2284) != 0) {
        temp_v6 = dataTableFileGetTable(*(int *)(temp_v2 + 0x2284),0);
        temp_v3 = dataTableGetEntries();
        temp_v10 = dataTableGetCount(temp_v6);
        temp_v9 = 0;
        if (temp_v9 < temp_v10) {
          do {
            psVar5 = (short *)(temp_v3 + temp_v9 * 0xc);
            if (*psVar5 == temp_v0) {
              if (psVar5 != (short *)0x0) {
                temp_v6 = 7;
                goto joined_r0x0024c1d4;
              }
              break;
            }
            temp_v9 = temp_v9 + 1;
          } while (temp_v9 < temp_v10);
        }
      }
    }
    temp_v6 = 8;
    break;
  case 6:
    temp_v3 = chainCountIdUnflagged(g_btlActionReflect,0);
    temp_v5 = DAT_005739e8;
    if (temp_v3 != 0) goto LAB_0024d75c;
    temp_v7 = ~DAT_005739f0;
    *(unsigned int *)(temp_v2 + 0x45a4) = *(unsigned int *)(temp_v2 + 0x45a4) & ~DAT_005739f4 & ~DAT_005739ec;
    *(unsigned int *)(temp_v2 + 0x45a0) = *(unsigned int *)(temp_v2 + 0x45a0) & temp_v7 & ~temp_v5;
    FUN_003f26d4(temp_v2);
    FUN_004aa2e0(g_btlUiBlock,0);
    temp_v6 = 8;
    break;
  case 7:
    if (((*(int *)(temp_v2 + 0x94) == 0x1e) && (temp_v5 = temp_v2, FUN_003eebf4(temp_v2,1), -1 < (int)temp_v5)
        ) && ((*(unsigned int *)(temp_v2 + 0x45a4) & DAT_005739ec) == 0 &&
              (DAT_005739e8 & *(unsigned int *)(temp_v2 + 0x45a0)) == 0)) {
      if (*(char *)(temp_v2 + 0x188) == '\x01') {
        temp_v6 = 3;
      }
      else {
        temp_v6 = 0;
      }
      scrScriptProcessStartEntry(*(unsigned int *)(temp_v2 + 0x228c),temp_v6);
      sysPlaySe(0x123);
    }
    if (((*(int *)(temp_v2 + 0x94) < 0x1f) || (temp_v5 = temp_v2, FUN_003eebf4(temp_v2,1), (int)temp_v5 < 0))
       || (((*(unsigned int *)(temp_v2 + 0x45a4) & DAT_005739ec) != 0 ||
            (DAT_005739e8 & *(unsigned int *)(temp_v2 + 0x45a0)) != 0 ||
           (temp_v3 = scrRunOpcodesStub(*(unsigned int *)(temp_v2 + 0x228c)), temp_v3 != 2)))) goto LAB_0024d75c;
    temp_v3 = g_btlEvent;
    FUN_004d7a70(g_btlEvent,0,0xffffffff);
    if (temp_v3 == 0) {
      FUN_003756c8();
    }
    temp_v6 = 8;
    break;
  case 8:
    temp_v3 = isEntryUsable(g_btlEvent);
    if (temp_v3 != 0) goto LAB_0024d75c;
    temp_v3 = g_btlEvent;
    FUN_004d7a70(g_btlEvent,0,0xffffffff);
    if (temp_v3 != 0) {
      FUN_004d7fe4();
    }
    temp_v6 = 9;
    break;
  case 9:
    temp_v3 = isEntryUsable(g_btlEvent);
    if ((((temp_v3 != 0) || (temp_v3 = FUN_004aaa4c(g_btlUiBlock), temp_v3 == 0)) ||
        ((temp_v3 = FUN_004abac8(g_btlUiBlock), temp_v3 == 0 ||
         ((temp_v3 = FUN_004aaf94(g_btlUiBlock), temp_v3 == 0 ||
          (temp_v3 = btlUiIsMenuReady(g_btlUiBlock), temp_v3 == 0)))))) ||
       (temp_v3 = FUN_004ab8a4(g_btlUiBlock), temp_v3 == 0)) goto LAB_0024d75c;
    switch(*(unsigned int *)(temp_v2 + 0xa8)) {
    default:
      temp_v6 = 10;
      break;
    case 1:
    case 3:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
      temp_v6 = 0x1b;
      break;
    case 8:
      temp_v6 = 0xc;
    }
    break;
  case 10:
    puVar16 = (unsigned int *)(temp_v2 + 0x45a0);
    temp_v5 = *(unsigned int *)(temp_v2 + 0x45a4);
    temp_v7 = *puVar16;
    if (((DAT_005739f4 & temp_v5) == 0 && (DAT_005739f0 & temp_v7) == 0) ||
       ((temp_v5 & DAT_00573adc) != 0 || (temp_v7 & DAT_00573ad8) != 0)) {
      temp_v3 = btlUiIsIdle(g_btlUiBlock);
      if (temp_v3 == 0) goto LAB_0024d75c;
    }
    else if (((temp_v5 & DAT_00573a04) != 0 || (temp_v7 & DAT_00573a00) != 0) &&
            (*(int *)(temp_v2 + 0x94) < 2)) goto LAB_0024d75c;
    if (g_btlMain != 0) {
      *(unsigned int *)(g_btlMain + 0x8c) = 0xb;
    }
    temp_v8 = *puVar16;
    temp_v7 = *(unsigned int *)(temp_v2 + 0x45a4) & ~DAT_00573a4c;
    temp_v5 = ~DAT_00573a48;
    *(unsigned int *)(temp_v2 + 0x45a4) = temp_v7;
    *puVar16 = temp_v8 & temp_v5;
    if ((temp_v7 & DAT_00573a44) != 0 || (temp_v8 & temp_v5 & DAT_00573a40) != 0) {
      do {
        puVar16 = (unsigned int *)(*(int *)(temp_v2 + 0x1ffc) + temp_v10 * 0x408);
        if ((((DAT_00573978 & *puVar16) != 0 || (DAT_0057397c & puVar16[1]) != 0) &&
            ((puVar16[1] & DAT_005739a4) == 0 && (*puVar16 & DAT_005739a0) == 0)) &&
           (-1 < (short)puVar16[2])) {
          temp_v18 = puVar16[0x97];
          temp_v24 = 9;
          temp_v25 = 1.4013e-45f;
          temp_v20 = 0xffffffff;
          temp_v26 = 0;
          uStack_48 = 1;
          temp_v22 = temp_v10 * 5;
          if (temp_v18 == 0) {
            temp_v18 = 0xffffffff;
          }
          temp_v21 = 0;
          temp_v17 = 0;
          temp_v19 = 0xffffffff;
          temp_v23 = temp_v22;
          FUN_004fb798(0,0,0,*(int *)(temp_v2 + 0x1ed4) + (short)puVar16[2] * 0x1d0);
        }
        temp_v10 = temp_v10 + 1;
      } while (temp_v10 < 4);
    }
    goto LAB_0024d75c;
  case 0xb:
    temp_v3 = isEntryUsable(g_btlEvent);
    if (temp_v3 != 0) goto LAB_0024d75c;
    temp_v6 = 0xc;
    break;
  case 0xc:
    temp_v6 = 0xd;
joined_r0x0024c6ec:
    if (temp_v2 != 0) {
LAB_0024c6f0:
      *(unsigned int *)(temp_v2 + 0x8c) = temp_v6;
    }
    goto LAB_0024d75c;
  case 0xd:
    if ((*(int *)(temp_v2 + 0xa8) != 8) ||
       (temp_v3 = jobIsValid(*(unsigned int *)(temp_v2 + *(int *)(temp_v2 + 0xa4) * 4 + 0xc)), temp_v3 != 0)
       ) {
      temp_v3 = jobIsValid(*(unsigned int *)(temp_v2 + *(int *)(temp_v2 + 0xa4) * 4 + 0xc));
      if (temp_v3 != 0) {
        temp_v3 = btlUnitGet(g_btlScriptUnit);
        temp_v1 = *(char *)(temp_v3 + 4);
        if (temp_v1 >= '$') {
          if (temp_v1 != '$') {
            if (g_btlMain != 0) {
              *(unsigned int *)(g_btlMain + 0x8c) = 0x16;
            }
            goto LAB_0024c770;
          }
        }
        else {
LAB_0024c770:
          if ((temp_v1 == '\x01') &&
             ((temp_v3 = btlUnitGet(g_btlScriptUnit), temp_v3 == 0 ||
              (temp_v3 = hasFlag80Or1000(g_btlScriptUnit,temp_v3), temp_v3 == 0)))) goto LAB_0024d75c;
        }
        temp_v3 = btlUnitGet(g_btlScriptUnit);
        if (((temp_v3 == 0) || (temp_v3 = hasFlag80Or1000(g_btlScriptUnit), temp_v3 == 0)) && (temp_v1 == '\x02'))
        {
          stateAtCIs4(g_btlAiScript);
        }
        goto LAB_0024d75c;
      }
      temp_v6 = 0x16;
    }
    else {
      temp_v6 = 9;
    }
    break;
  default:
    goto LAB_0024d75c;
  case 0xf:
    temp_v3 = isZero(g_btlPartnerAttack);
    if (temp_v3 == 0) goto LAB_0024d75c;
    if (g_btlMain != 0) {
      *(unsigned int *)(g_btlMain + 0x8c) = 0x10;
    }
    if (!((*(unsigned int *)(temp_v2 + 0x45a4) & DAT_00573a0c) != 0 ||
         (*(unsigned int *)(temp_v2 + 0x45a0) & DAT_00573a08) != 0)) {
      if ((*(unsigned int *)(temp_v2 + 0x45a0) & DAT_00573a18) == 0 &&
          (*(unsigned int *)(temp_v2 + 0x45a4) & DAT_00573a1c) == 0) goto LAB_0024d75c;
      temp_v6 = 1;
    }
    else {
      temp_v6 = 0;
    }
    goto LAB_0024c88c;
  case 0x11:
    temp_v3 = chainCountIdUnflagged(g_btlActionReflect,0);
    if (0 < temp_v3) goto LAB_0024d75c;
    temp_v6 = 0x12;
    break;
  case 0x12:
    temp_v3 = chainCountIdUnflagged(g_btlActionReflect,0);
    if (0 < temp_v3) goto LAB_0024d75c;
    temp_v6 = 0x13;
    break;
  case 0x13:
    temp_v3 = isZero(g_btlPartnerAttack);
    if (temp_v3 != 0) {
      if (g_btlMain != 0) {
        *(unsigned int *)(g_btlMain + 0x8c) = 0x14;
      }
      if (!((*(unsigned int *)(temp_v2 + 0x45a4) & DAT_00573a0c) == 0 &&
           (*(unsigned int *)(temp_v2 + 0x45a0) & DAT_00573a08) == 0)) {
        temp_v6 = 0;
LAB_0024c88c:
        FUN_004c8bb8(temp_v6,0);
      }
      else if (!((DAT_00573a1c & *(unsigned int *)(temp_v2 + 0x45a4)) == 0 &&
                (*(unsigned int *)(temp_v2 + 0x45a0) & DAT_00573a18) == 0)) {
        temp_v6 = 1;
        FUN_004c8bb8(temp_v6,0);
      }
    }
    goto LAB_0024d75c;
  case 0x14:
    temp_v3 = isEntryUsable(g_btlEvent);
    if (temp_v3 != 0) goto LAB_0024d75c;
    temp_v6 = 0x16;
    break;
  case 0x15:
    temp_v3 = chainCountIdUnflagged(g_btlActionReflect,0);
    if ((temp_v3 < 1) && (temp_v3 = FUN_003ed878(temp_v2), temp_v3 == 0)) {
      FUN_003f034c(temp_v2);
    }
    goto LAB_0024d75c;
  case 0x16:
    if (((((*(int *)(temp_v2 + 0x94) < 0) || (temp_v3 = FUN_004aaa4c(g_btlUiBlock), temp_v3 == 0)) ||
         (temp_v3 = FUN_004abac8(g_btlUiBlock), temp_v3 == 0)) ||
        ((temp_v3 = FUN_004aaf94(g_btlUiBlock), temp_v3 == 0 ||
         (temp_v3 = btlUiIsMenuReady(g_btlUiBlock), temp_v3 == 0)))) ||
       (temp_v3 = FUN_004ab8a4(g_btlUiBlock), temp_v3 == 0)) goto LAB_0024d75c;
    temp_v5 = temp_v2;
    FUN_003ebca0();
    if (temp_v5 != 0) {
      temp_v6 = 0x17;
    }
    else {
      temp_v3 = *(int *)(temp_v2 + 0xa8);
      if (temp_v3 != 0) {
        if (temp_v3 != 2) {
          if (temp_v3 != 6) {
            if (temp_v3 == 8) goto LAB_0024d75c;
            temp_v6 = 0x1b;
          }
          else {
            temp_v6 = 0x1a;
          }
        }
        else {
          puVar16 = (unsigned int *)(temp_v2 + 0x45a0);
          if ((DAT_00573ae8 & *puVar16) == 0 && (*(unsigned int *)(temp_v2 + 0x45a4) & DAT_00573aec) == 0) {
            temp_v6 = 0x1b;
            goto joined_r0x0024cba8;
          }
          *(unsigned int *)(temp_v2 + 0xa8) = 0;
          FUN_003f034c(temp_v2);
          temp_v5 = *(unsigned int *)(temp_v2 + 0x45a4) | DAT_00573afc;
          *puVar16 = *puVar16 | DAT_00573af8;
          *(unsigned int *)(temp_v2 + 0x45a4) = temp_v5;
          temp_v6 = 0x19;
        }
      }
      else {
        temp_v6 = 0x17;
      }
    }
    break;
  case 0x18:
    temp_v3 = btlUiIsIdleB(g_btlUiBlock);
    if (temp_v3 == 0) goto LAB_0024d75c;
    temp_v3 = FUN_003e9964(temp_v2);
    if (temp_v3 != 0) {
      temp_v6 = 0x19;
joined_r0x0024cba8:
      if (g_btlMain != 0) {
        *(unsigned int *)(g_btlMain + 0x8c) = temp_v6;
      }
      goto LAB_0024d75c;
    }
    temp_v6 = 9;
    break;
  case 0x19:
    temp_v3 = FUN_004ab6dc(g_btlUiBlock);
    if (temp_v3 == 0) goto LAB_0024d75c;
    temp_v6 = 9;
    break;
  case 0x1a:
    puVar16 = (unsigned int *)(temp_v2 + 0x45a0);
    temp_v3 = 0;
    if ((*(unsigned int *)(temp_v2 + 0x45a4) & uRam00573a6c) == 0 && (*puVar16 & uRam00573a68) == 0) {
      do {
        temp_v10 = jobIsValid(*(unsigned int *)(temp_v2 + temp_v3 * 4 + 0xc));
        if (temp_v10 != 0) goto LAB_0024d75c;
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < 0xc);
      FUN_004ac0bc(g_btlUiBlock);
      FUN_004a9d1c(g_btlUiBlock);
      if (*(int *)(temp_v2 + 0x1ec4) != 0) {
        asdMemFree();
        *(int *)(temp_v2 + 0x1ec4) = 0;
      }
      if (*(int *)(temp_v2 + 0x1ff8) != 0) {
        temp_v3 = 0;
        do {
          temp_v10 = temp_v3 + 1;
          puVar6 = (unsigned short *)(*(int *)(temp_v2 + 0x1ff8) + temp_v3 * 0x18);
          *puVar6 = 0xffff;
          puVar6[1] = 0xffff;
          puVar6[2] = 0;
          *(unsigned int *)(puVar6 + 4) = 0xffffffff;
          *(unsigned int *)(puVar6 + 6) = 0;
          *(unsigned int *)(puVar6 + 8) = 0;
          *(unsigned int *)(puVar6 + 10) = 0;
          temp_v3 = temp_v10;
        } while (temp_v10 < 0x32);
      }
      temp_v3 = 0;
      temp_v10 = 0x2a;
      do {
        temp_v9 = temp_v2 + temp_v3 * 8;
        temp_v10 = temp_v10 - 1;
        *(unsigned int *)(temp_v9 + 0x201c) = 0;
        temp_v3 = temp_v3 + 1;
        *(unsigned int *)(temp_v9 + 0x2020) = 0xffffffff;
      } while (temp_v10 != 0);
      sysMemClear(temp_v2 + 0x2214,0x54);
      sysMemClear(temp_v2 + 0x10b0,0xe10);
      sysMemClear(temp_v2 + 0x1ec8,10);
      temp_v10 = 0;
      temp_v3 = 0x6d;
      do {
        temp_v3 = temp_v3 - 1;
        temp_v9 = temp_v2 + temp_v10 * 0x1c;
        *(unsigned int *)(temp_v9 + 0x2418) = 0xffffffff;
        *(unsigned int *)(temp_v9 + 0x241c) = 0xffffffff;
        temp_v10 = temp_v10 + 1;
        *(unsigned int *)(temp_v9 + 0x2430) = 0xffffffff;
      } while (temp_v3 != 0);
      temp_v3 = 0;
      do {
        temp_v10 = temp_v2 + temp_v3 * 4;
        if (*(int *)(temp_v10 + 0x216c) != 0) {
          FUN_0040a244();
          *(unsigned int *)(temp_v10 + 0x216c) = 0;
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < 0x2a);
      FUN_004fa01c(g_btlAux);
      FUN_004f8fa0(g_btlAux);
      obj4FSlots28Reset(g_btlAux);
      obj4FSlotsReset(g_btlAux);
      mathVectorClear(g_btlCamera);
      motionClearVectors(g_btlCamera);
      temp_v5 = ~DAT_00573a00;
      temp_v12 = ~DAT_00573a08;
      temp_v20 = ~DAT_00573a1c;
      temp_v7 = ~DAT_00573a28;
      temp_v18 = ~DAT_005739f8;
      temp_v17 = ~DAT_005739fc;
      temp_v4 = ~DAT_00573a18;
      temp_v19 = ~uRam00573a80;
      temp_v11 = ~DAT_00573ad8;
      temp_v8 = ~DAT_00573ae0;
      *(unsigned int *)(temp_v2 + 0x45a4) =
           temp_v17 &
           temp_v20 & *(unsigned int *)(temp_v2 + 0x45a4) & ~DAT_00573a04 & ~DAT_00573a2c & ~DAT_00573a0c &
           ~uRam00573a84 & ~DAT_00573adc & ~DAT_00573ae4;
      *puVar16 = temp_v19 & temp_v18 & temp_v4 & *puVar16 & temp_v5 & temp_v7 & temp_v12 & temp_v11 & temp_v8;
      btlHelpFreeEntries();
      temp_v3 = dialogIsActive();
      if (temp_v3 != 0) {
        dialogClose(1);
      }
      *(unsigned char *)(temp_v2 + 0x1ed9) = 0;
      *(unsigned char *)(temp_v2 + 0x188) = 0;
      *(unsigned char *)(temp_v2 + 0x45bc) = 0;
      sysMemClear((unsigned int *)(temp_v2 + 0xf4),0x84);
      *(unsigned int *)(temp_v2 + 0xf4) = 0;
      *(unsigned int *)(temp_v2 + 0xf8) = 0;
      *(unsigned int *)(temp_v2 + 0xfc) = 0;
      *(unsigned int *)(temp_v2 + 0x100) = 0;
      *(unsigned int *)(temp_v2 + 0x104) = 0;
      *(unsigned int *)(temp_v2 + 0x108) = 0;
      *(unsigned int *)(temp_v2 + 0x124) = 0x3f800000;
      *(unsigned int *)(temp_v2 + 0x128) = 0x3f800000;
      btlActionPrepareFromSource(temp_v2,temp_v2 + 0xf4,0);
      FUN_003ef1e4(temp_v2,1);
      if ((*(unsigned int *)(temp_v2 + 0x110) & 8) == 0) {
        FUN_004c8e30(3,0,1);
      }
      temp_v16 = btlUnitGet(g_btlScriptUnit);
      temp_v3 = (int)((unsigned long long)temp_v16 >> 0x20);
      temp_v10 = (int)temp_v16;
      if (temp_v10 != 0) {
        temp_v3 = *(int *)(temp_v10 + 0x28);
      }
      if (temp_v10 != 0 && temp_v3 != 0) {
        *(unsigned short *)(temp_v3 + 0x1be) = 0;
        *(unsigned short *)(*(int *)(temp_v10 + 0x28) + 0x1c0) = 0;
        *(unsigned int *)(*(int *)(temp_v10 + 0x20) + 0x150) = 0;
        *(unsigned int *)(temp_v10 + 0x124c) = 0;
      }
      temp_v3 = 0;
      do {
        temp_v10 = *(int *)(temp_v2 + 0x1ffc) + temp_v3 * 0x408;
        if (temp_v10 != -0x164) {
          *(unsigned short *)(temp_v10 + 0x332) = 0;
          *(unsigned short *)(temp_v10 + 0x334) = 0;
          *(unsigned short *)(temp_v10 + 0x336) = 0;
          *(unsigned short *)(temp_v10 + 0x338) = 0;
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < 0x6d);
      gameFlagSetValue(0x590,0,1);
      gameFlagSetValue(0x591,0);
      holderStopJob(temp_v2);
      temp_v5 = *(unsigned int *)(temp_v2 + 0x45a4) | uRam00573a6c;
      *puVar16 = uRam00573a68 | *puVar16;
      *(unsigned int *)(temp_v2 + 0x45a4) = temp_v5;
    }
    else {
      if (*(int *)(temp_v2 + 0xec) < 0) {
        temp_v9 = (int)*(char *)(temp_v2 + 0x114);
        temp_v3 = temp_v9;
        temp_v10 = temp_v2 + 0x100;
        if (0 < temp_v9) {
          temp_v3 = (int)*(char *)(temp_v2 + 0x115);
          temp_v10 = temp_v3;
        }
        if (temp_v3 >= 1) {
          temp_v13 = *(int *)(g_btlStageModel + 0xa4) == temp_v9;
          if (temp_v13) {
            temp_v9 = *(int *)(g_btlStageModel + 0xa8);
          }
          if (temp_v13 && temp_v9 == temp_v10) {
            temp_v6 = 4;
          }
          else {
            temp_v6 = 3;
          }
        }
        else {
          temp_v6 = 4;
        }
      }
      else {
        temp_v6 = 4;
      }
      if (temp_v2 != 0) {
        *(unsigned int *)(temp_v2 + 0x8c) = temp_v6;
      }
      *(unsigned int *)(temp_v2 + 0x45a4) = *(unsigned int *)(temp_v2 + 0x45a4) & ~temp_v7;
      *puVar16 = *puVar16 & ~temp_v5;
    }
    goto LAB_0024d75c;
  case 0x1b:
    temp_v3 = isEntryUsable(g_btlEvent);
    if ((temp_v3 != 0) || ((*(int *)(temp_v2 + 0xa8) == 3 && (temp_v3 = messageMainIsIdle(), temp_v3 == 0))))
    goto LAB_0024d75c;
    temp_v6 = 0x1c;
    break;
  case 0x1c:
    temp_v3 = jobIsValid(*(unsigned int *)(temp_v2 + 0x4c));
    if (temp_v3 != 0) goto LAB_0024d75c;
    temp_v6 = 0x1d;
    break;
  case 0x1d:
    FUN_00339270();
    if ((temp_v3 == 0) || (temp_v3 = jobIsValid(*(unsigned int *)(temp_v2 + 4)), temp_v3 != 0))
    goto LAB_0024d75c;
    temp_v6 = 0x1e;
    break;
  case 0x1e:
    temp_v3 = 1;
    switch(*(unsigned char *)(temp_v2 + 0x123)) {
    case 1:
      if (*(int *)(temp_v2 + 0xa8) != 1) break;
      piVar15 = (int *)(temp_v2 + 0x4d58);
      temp_v3 = *piVar15;
      if (temp_v3 == 0) goto LAB_0024d75c;
      if (temp_v3 == 1) {
        temp_v3 = *(int *)(temp_v2 + 0x4d50);
        if (temp_v3 != 0) {
          FUN_00275bc8(temp_v3,0);
          *(int *)(temp_v2 + 0x4d54) = temp_v3;
          *(unsigned int *)(temp_v3 + 0x108) = 1;
          scrScriptProcessStartEntry(*(int *)(temp_v2 + 0x4d54),0);
          *piVar15 = *piVar15 + 1;
        }
        goto LAB_0024d75c;
      }
      if ((temp_v3 != 2) || (temp_v3 = scrRunOpcodesStub(*(unsigned int *)(temp_v2 + 0x4d54)), temp_v3 != 2))
      goto LAB_0024d75c;
      goto LAB_0024d284;
    case 3:
      goto LAB_0024d278;
    case 4:
      if (*(int *)(temp_v2 + 0xa8) != 2) goto LAB_0024d284;
    }
    temp_v3 = FUN_002e07f4();
LAB_0024d278:
    if (temp_v3 == 0) goto LAB_0024d75c;
LAB_0024d284:
    FUN_002c2610();
    temp_v5 = *(unsigned int *)(temp_v2 + 0x110);
    temp_v13 = (temp_v5 & 2) == 0;
    if (!temp_v13) {
      temp_v5 = *(unsigned int *)(temp_v2 + 0xa8);
    }
    if (!(temp_v13 || temp_v5 == 2)) {
      DAT_00573940 = *(unsigned int *)(temp_v2 + 0x4ce4);
    }
    else {
      soundChannelStopAll(0xf);
    }
    puVar16 = (unsigned int *)(temp_v2 + 0x45a0);
    if ((*puVar16 & DAT_00573a50) != 0 || (*(unsigned int *)(temp_v2 + 0x45a4) & DAT_00573a54) != 0) {
      if (DAT_00573924 != 0) {
        temp_v6 = gameGetSlotTable();
        rt_memcpy_w(temp_v6,DAT_00573924,0x2d30);
      }
      if (DAT_00573928 != 0) {
        temp_v6 = flagValueGetStorage();
        rt_memcpy(temp_v6,DAT_00573928,0x10b8);
      }
    }
    if (((DAT_00573aa4 & *(unsigned int *)(temp_v2 + 0x45a4)) != 0 || (*puVar16 & DAT_00573aa0) != 0) &&
       (*(int *)(temp_v2 + 0xa8) == 2)) {
      if (DAT_00573924 != 0) {
        temp_v6 = gameGetSlotTable();
        rt_memcpy_w(temp_v6,DAT_00573924,0x2d30);
      }
      if (DAT_00573928 != 0) {
        temp_v6 = flagValueGetStorage();
        rt_memcpy(temp_v6,DAT_00573928,0x10b8);
      }
    }
    FUN_003ee734(temp_v2);
    if (((*puVar16 & DAT_00573a50) != 0 || (DAT_00573a54 & *(unsigned int *)(temp_v2 + 0x45a4)) != 0) &&
       (*(int *)(temp_v2 + 0xa8) == 2 || *(int *)(temp_v2 + 0xa8) == 4)) {
      *(unsigned int *)(temp_v2 + 0xa8) = 0xd;
    }
    temp_v3 = gameDataBlocksGetSaveData();
    if (*(unsigned char *)(temp_v3 + 0x27e3e) < 6) {
      temp_v3 = gameDataBlocksGetSaveData();
      *(char *)(temp_v3 + 0x27e3e) = *(char *)(temp_v3 + 0x27e3e) + '\x01';
    }
    FUN_00331410();
    if (*(int *)(temp_v2 + 0xa8) == 3) {
      sysClearCachedFlag();
    }
    if ((!((DAT_00573aa0 & *puVar16) == 0 && (DAT_00573aa4 & *(unsigned int *)(temp_v2 + 0x45a4)) == 0)) &&
       (*(int *)(temp_v2 + 0xa8) == 2)) {
      *(unsigned int *)(temp_v2 + 0xa8) = 0xe;
    }
    else if (*(int *)(temp_v2 + 0xa8) == 4) {
      sysClearCachedFlag();
    }
    if ((*(unsigned int *)(temp_v2 + 0x45ac) & DAT_00573b0c) == 0 &&
        (DAT_00573b08 & *(unsigned int *)(temp_v2 + 0x45a8)) == 0) {
      temp_v3 = *(int *)(temp_v2 + 0xa8);
      if (temp_v3 == 5) {
        temp_v6 = 3;
        FUN_00215978(temp_v6);
      }
      else if (temp_v3 < 6) {
        if (temp_v3 != 2) {
          if (temp_v3 == 4) {
            temp_v6 = 2;
            FUN_00215978(temp_v6);
          }
        }
        else {
          if (((uRam00573a90 & *puVar16) == 0 && (uRam00573a94 & *(unsigned int *)(temp_v2 + 0x45a4)) == 0) &&
             ((*(unsigned int *)(temp_v2 + 0x45a4) & uRam00573a9c) == 0 && (*puVar16 & uRam00573a98) == 0)) {
            temp_v6 = 1;
          }
          else {
            temp_v6 = 5;
          }
          FUN_00215978(temp_v6);
        }
      }
      else if (temp_v3 == 0xd) {
        temp_v6 = 4;
        FUN_00215978(temp_v6);
      }
      else if (temp_v3 == 0xe) {
        temp_v6 = 6;
        FUN_00215978(temp_v6);
      }
    }
    if ((DAT_00573b08 & *(unsigned int *)(temp_v2 + 0x45a8)) == 0 &&
        (*(unsigned int *)(temp_v2 + 0x45ac) & DAT_00573b0c) == 0) {
      FUN_002d2000();
      if (*(int *)(temp_v2 + 0xa8) != 2) {
        if (*(int *)(temp_v2 + 0xa8) != 0xe) {
          temp_v3 = sequenceRequestIsPending();
          if (temp_v3 != 0) {
            sequenceRequestFlushDeferred();
          }
          else {
            temp_v3 = gameStateIsFlagSetAndLarge();
            if (temp_v3 != 0) {
              temp_v17 = DAT_005f1b74 - 200;
              asdSequenceRequest(0xe,&temp_v17,4);
            }
            else {
              temp_v3 = FUN_002cf854();
              if (temp_v3 != 0) {
                temp_v6 = 8;
              }
              else {
                temp_v3 = lmapMainGetUnk74();
                if (temp_v3 == 0) {
                  temp_v3 = tmnlHasSelection();
                  if (temp_v3 != 0) {
                    tmnlResetSelection();
                  }
                  callJyoucyuGetTableEntry1();
                  return 0xffffffff;
                }
                temp_v6 = 6;
              }
              asdSequenceRequest(temp_v6,0);
            }
          }
        }
        else {
          temp_v3 = g_aocMain + 0xa8;
          FUN_0047dc50();
          if (temp_v3 == 0) {
            FUN_0047dd4c(g_aocMain + 0xa8);
          }
        }
      }
      else if (*(int *)(temp_v2 + 0x4c80) != 1) {
        if (*(int *)(temp_v2 + 0x4c80) == 0) {
          sysClearCachedFlag();
          FUN_00137ed0();
        }
      }
      else {
        sysClearCachedFlag();
        FUN_003848a4();
      }
    }
    else {
      if ((*(int *)(temp_v2 + 0xa8) == 2) && (*(int *)(temp_v2 + 0x4c80) == 1)) {
        if (DAT_00573924 != 0) {
          temp_v6 = gameGetSlotTable();
          rt_memcpy_w(temp_v6,DAT_00573924,0x2d30);
        }
        if (DAT_00573928 != 0) {
          temp_v6 = flagValueGetStorage();
          rt_memcpy(temp_v6,DAT_00573928,0x10b8);
        }
      }
      FUN_003d54f8(0,10);
      FUN_003d54f8(1,10);
    }
    callJyoucyuGetTableEntry1();
    return 0xffffffff;
  case 0x1f:
    temp_v3 = jobIsValid(*(unsigned int *)(temp_v2 + 0x80));
    goto joined_r0x0024d740;
  case 0x20:
    temp_v3 = jobIsValid(*(unsigned int *)(temp_v2 + 0x7c));
joined_r0x0024d740:
    if (temp_v3 != 0) goto LAB_0024d75c;
    temp_v6 = 0xc;
  }
joined_r0x0024c1d4:
  if (g_btlMain != 0) {
LAB_0024d758:
    *(unsigned int *)(g_btlMain + 0x8c) = temp_v6;
  }
LAB_0024d75c:
  if (*(int *)(temp_v2 + 0x94) < 0xffff) {
    *(int *)(temp_v2 + 0x94) = *(int *)(temp_v2 + 0x94) + 1;
  }
  *(int *)(temp_v2 + 0x98) = *(int *)(temp_v2 + 0x98) + 1;
  if (*(char *)(temp_v2 + 0x22b4) != '\0') {
    if (*(int *)(temp_v2 + 0x22b8) != 0) {
      temp_v3 = 4;
      do {
        temp_v10 = *(int *)(temp_v2 + 0x1ffc) + temp_v3 * 0x408;
        if (*(char *)(temp_v10 + 0x23a) != '\0') {
          temp_v3 = *(int *)(temp_v2 + 0x1ed4) + *(short *)(temp_v10 + 8) * 0x1d0;
          if (temp_v3 != 0) {
            lookupNameEntry(*(unsigned int *)(**(int **)(temp_v3 + 0x1bc) + 4),&LAB_0024d9a4,&temp_v17);
            *(unsigned int *)(temp_v2 + 0x229c) = temp_v17;
            *(unsigned int *)(temp_v2 + 0x22a0) = temp_v18;
            *(unsigned int *)(temp_v2 + 0x22a4) = temp_v19;
            if (((DAT_005c4c2c & 1) == 0) && (temp_v10 = __cxa_guard_acquire(&DAT_005c4c2c), temp_v10 != 0)) {
              DAT_0064c054 = 0x3f800000;
              DAT_0064c058 = 0;
              DAT_0064c05c = 0;
              DAT_0064c060 = 0;
              DAT_0064c064 = 0;
              DAT_0064c068 = 0x3f800000;
              DAT_0064c06c = 0;
              DAT_0064c070 = 0;
              DAT_0064c074 = 0;
              DAT_0064c078 = 0;
              DAT_0064c07c = 0x3f800000;
              DAT_0064c080 = 0;
            }
            nn_math_ARMv6_MTX34CopyAsm(&temp_v21,&DAT_0064c054);
            FUN_003fda64(*(unsigned int *)(**(int **)(temp_v3 + 0x1bc) + 4),&LAB_0024d9a4,&temp_v21);
            FUN_0050d8e4();
            temp_v15 = 57.295776f;
            *(float *)(temp_v2 + 0x22a8) = temp_v28 * 57.295776f;
            temp_v14 = -temp_v27;
            FUN_0050d7ac();
            *(float *)(temp_v2 + 0x22ac) = temp_v14 * temp_v15;
            temp_v14 = temp_v25;
            FUN_0050d8e4();
            *(float *)(temp_v2 + 0x22b0) = temp_v14 * temp_v15;
            callOnHandleField4D(*(unsigned int *)(temp_v2 + 0x2298));
            callOnHandleField4B(*(unsigned int *)(temp_v2 + 0x2298));
            callOnHandleField4C(*(unsigned int *)(temp_v2 + 0x2298));
          }
          break;
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < 0x36);
    }
    else {
      callOnHandleField4C(*(unsigned int *)(temp_v2 + 0x2298));
      callOnHandleField4B(*(unsigned int *)(temp_v2 + 0x2298));
    }
  }
  FUN_003ebad4(temp_v2);
  if (-1 < *(int *)(temp_v2 + 0x8c)) {
    FUN_002ba998();
  }
  FUN_003e785c(temp_v2,0);
  FUN_003e785c(temp_v2,1);
  return 0;
}

} /* extern "C" */
