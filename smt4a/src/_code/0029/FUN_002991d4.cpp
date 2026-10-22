/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002991d4` (_code @ 0x2991d4, 0x15bc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdTMTexTableReleaseNode(...);
int dataTableFree(...);
int panelSetMode3(...);
int mapPlaceSet(...);
int panelSetTarget(...);
int partyAddMoneyClamped(...);

int FUN_001628c0(...);
int FUN_00163aa4(...);
int uiSpriteSetKeyframe(...);
int FUN_00234528(...);
int popupStateClose(void);
int gameDataAddCappedPoints(...);
int FUN_002e5c2c(...);
int FUN_00312714(...);
int mapJobIsDone(void);
int mapMainStartEntry(...);
int messageBannerRestartOrClear(void);
int mapIfRequestById(...);
int FUN_00359974(...);
int messageCounterBeginTransition(...);
int gameFlagsBitSet(...);
int FUN_003689d0(void);
int FUN_00377158(...);
int messageDismissNumericBanner(...);
int scrCommResetPanel(void);
int FUN_003d2158(...);
int FUN_00408184(...);
int FUN_004808c0(...);
int flagValueAdd(...);

int FUN_0014afd0(int);
int FUN_001681c4(void);
int jyoucyuGetTableEntry(int);
int asdMemFree(...);
int scrScriptProcessDestroy(...);
int asdTMTexLoadMainHeap(int, int);
int asdLoadFileSyncDefault(void);
int mapPopupReset(void);
int FUN_00246128(void);
int FUN_00275bc8(...);
int scrScriptProcessStartEntry(...);
int messageSlotSet(int);
int FUN_00295108(...);
int FUN_002b5e08(int, int *, unsigned char *, unsigned int *);
int blockResetAxis(...);
int FUN_00313648(...);
int FUN_0033ab1c(int, int);
int FUN_003774e8(int, unsigned char *, unsigned char *, unsigned int *);
int FUN_003799d0(void);
int FUN_0037c8e4(...);
int FUN_00398258(...);
int FUN_003a6b10(...);
int FUN_003ca244(void);
int sysPlayVoice(...);
int loadSlotEnsureLoaded(int);
int gameFlagSetValue(int, int);
int FUN_00480a54(void);

/* stack frame of void: 12 slot(s), 48 byte(s) */
typedef struct {
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
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
} void_stack;

extern unsigned char LAB_0029985c; /* 0x29985c */
extern unsigned char LAB_0029986c; /* 0x29986c */
extern unsigned char LAB_00299cdc; /* 0x299cdc */
extern unsigned char LAB_00299cf0; /* 0x299cf0 */
extern unsigned char LAB_00299d04; /* 0x299d04 */
extern unsigned char LAB_0029a23c; /* 0x29a23c */
extern unsigned char LAB_0029a5c4; /* 0x29a5c4 */
extern unsigned char LAB_0029a5dc; /* 0x29a5dc */
extern int g_lmapView; /* 0x5806a4 */
extern int g_mapDepart; /* 0x5806c4 */
extern int DAT_005806c8; /* 0x5806c8 */
extern int g_gameState; /* 0x5f15fc */
extern unsigned char DAT_005f1614; /* 0x5f1614 */
extern int DAT_005f16d0; /* 0x5f16d0 */
extern int DAT_005f16d4; /* 0x5f16d4 */
extern unsigned char DAT_005f1859; /* 0x5f1859 */
extern unsigned char DAT_005f19eb; /* 0x5f19eb */
extern unsigned char DAT_005f1c92; /* 0x5f1c92 */
extern int DAT_005f1cbc; /* 0x5f1cbc */
extern unsigned char DAT_005f1cfc; /* 0x5f1cfc */
extern unsigned int DAT_005f1d0c; /* 0x5f1d0c */
extern unsigned char DAT_005f1d10; /* 0x5f1d10 */
extern short DAT_005f1d70; /* 0x5f1d70 */
extern short DAT_005f1d72; /* 0x5f1d72 */
extern unsigned char DAT_005f1d74; /* 0x5f1d74 */
extern unsigned char DAT_005f1db4; /* 0x5f1db4 */
extern unsigned int DAT_005f1dc4; /* 0x5f1dc4 */
extern short DAT_005f1e18; /* 0x5f1e18 */
extern short DAT_005f1e1a; /* 0x5f1e1a */

extern unsigned int FUN_0014af98(void);
/* Supplied declaration required: FUN_0014afd0. */
extern int randRange(unsigned int);
extern unsigned int FUN_00152f44(void);
extern int asdTMTexTableGetHeaderValue(unsigned int);
/* Supplied declaration required: FUN_001628c0. */
extern int infoWinHasValue(void);
/* Supplied declaration required: FUN_00163aa4. */
/* Supplied declaration required: FUN_001681c4. */
/* Supplied declaration required: jyoucyuGetTableEntry. */
extern int asdTMTexTableNodeIsLoaded(unsigned int, unsigned int);
/* Supplied declaration required: uiSpriteSetKeyframe. */
extern int gameFlagIsSet(unsigned int, int, int);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: asdTMTexTableReleaseNode. */
/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: asdTMTexLoadMainHeap. */
/* Supplied declaration required: dataTableFree. */
/* Supplied declaration required: asdLoadFileSyncDefault. */
/* Supplied declaration required: mapPopupReset. */
extern int scrRunOpcodesStub(unsigned int);
/* Supplied declaration required: FUN_00234528. */
/* Supplied declaration required: FUN_00246128. */
/* Supplied declaration required: popupStateClose. */
extern int messageMainIsIdle(void);
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: scrScriptProcessStartEntry. */
/* Supplied declaration required: messageSlotSet. */
/* Supplied declaration required: FUN_00295108. */
extern int messageMainGetValue(void);
extern int messageGetChoiceResult(void);
/* Supplied declaration required: FUN_002b5e08. */
extern int popupIsActive(void);
/* Supplied declaration required: gameDataAddCappedPoints. */
/* Supplied declaration required: FUN_002e5c2c. */
extern int FUN_002e5db4(void);
extern int FUN_002ffa9c(int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: blockResetAxis. */
/* Supplied declaration required: FUN_00312714. */
/* Supplied declaration required: mapJobIsDone. */
/* Supplied declaration required: mapMainStartEntry. */
/* Supplied declaration required: FUN_00313648. */
/* Supplied declaration required: panelSetMode3. */
/* Supplied declaration required: mapPlaceSet. */
/* Supplied declaration required: FUN_0033ab1c. */
/* Supplied declaration required: messageBannerRestartOrClear. */
/* Supplied declaration required: mapIfRequestById. */
extern unsigned int tableGroupFindEntryIndex(unsigned int, unsigned char *);
/* Supplied declaration required: FUN_00359974. */
/* Supplied declaration required: messageCounterBeginTransition. */
/* Supplied declaration required: gameFlagsBitSet. */
/* Supplied declaration required: FUN_003689d0. */
/* Supplied declaration required: FUN_00377158. */
/* Supplied declaration required: FUN_003774e8. */
/* Supplied declaration required: FUN_003799d0. */
extern int panelStateIs0(void);
/* Supplied declaration required: panelSetTarget. */
/* Supplied declaration required: FUN_0037c8e4. */
/* Supplied declaration required: messageDismissNumericBanner. */
/* Supplied declaration required: FUN_00398258. */
extern int dataTable20FindAddonRecord(unsigned short);
extern unsigned short *dataTable20GetEntry(int);
/* Supplied declaration required: FUN_003a6b10. */
/* Supplied declaration required: scrCommResetPanel. */
/* Supplied declaration required: FUN_003ca244. */
/* Supplied declaration required: sysPlayVoice. */
/* Supplied declaration required: FUN_003d2158. */
/* Supplied declaration required: loadSlotEnsureLoaded. */
/* Supplied declaration required: gameFlagSetValue. */
/* Supplied declaration required: FUN_00408184. */
/* Supplied declaration required: FUN_004808c0. */
/* Supplied declaration required: FUN_00480a54. */
/* Supplied declaration required: flagValueAdd. */
/* Supplied declaration required: partyAddMoneyClamped. */
extern int inputIsQuestMenuPressed(void);
extern int FUN_004d0584(void);


unsigned int FUN_002991d4(void)

{
/* irregular: 5 goto(s); 56 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  char temp_v2;
  short temp_v3;
  int temp_v4;
  unsigned short *puVar6;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  short *psVar10;
  short *psVar11;
  int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned char *puVar15;
  int temp_v11;
  unsigned int *puVar17;
  unsigned int temp_v12;
  unsigned short *puVar19;
  int temp_v13;
  unsigned char *pbVar21;
  unsigned char *puVar22;
  int temp_v14;
  short temp_v15;
  unsigned int *puVar25;
  unsigned char temp_v16;
  short temp_v17 [16];
  int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  unsigned int temp_v21;
  
  temp_v4 = g_mapDepart;
  switch(*(unsigned int *)(g_mapDepart + 0x48)) {
  case 0:
    FUN_0014afd0(4);
    temp_v11 = asdTMTexTableGetHeaderValue(4);
    *(int *)(temp_v4 + 0x124) = temp_v11;
    *(unsigned int *)(temp_v11 + 0x3c) = 1;
    *(unsigned int *)(*(int *)(temp_v4 + 0x124) + 0x40) = 1;
    *(unsigned int *)(*(int *)(temp_v4 + 0x124) + 0x38) = 0;
    if (*(int *)(temp_v4 + 0xc) != 0) {
      *(unsigned int *)(temp_v4 + 0x48) = 1;
      DAT_005f1859 = 0;
      *(unsigned int *)(temp_v4 + 0x4c) = 0;
      if (*(int *)(temp_v4 + 0xc) != 3) {
        return 0;
      }
      FUN_00313648(0x28);
      return 0;
    }
    loadSlotEnsureLoaded(0x21);
    *(unsigned int *)(temp_v4 + 0x4c) = 0;
    switch(DAT_005f16d0) {
    default:
      temp_v12 = 0x12;
      break;
    case 1:
    case 2:
    case 3:
      temp_v12 = 0x10;
      break;
    case 4:
      temp_v12 = 5;
      break;
    case 5:
      temp_v12 = 7;
    }
    *(unsigned int *)(temp_v4 + 0x48) = temp_v12;
    break;
  case 1:
    temp_v11 = *(int *)(g_mapDepart + 0x4c) + 1;
    *(int *)(g_mapDepart + 0x4c) = temp_v11;
    if (temp_v11 < 0x1f) {
      return 0;
    }
    if (*(int *)(temp_v4 + 0xc) != 4) {
      if (*(int *)(temp_v4 + 0xc) == 5) {
        temp_v12 = 0xe;
      }
      else {
        temp_v12 = 5;
      }
    }
    else {
      asdTMTexLoadMainHeap(0x1d,0);
      FUN_0033ab1c((int)(short)*(unsigned int *)(temp_v4 + 0xb4),1);
      temp_v12 = 9;
    }
    *(unsigned int *)(temp_v4 + 0x48) = temp_v12;
    *(unsigned int *)(temp_v4 + 0x4c) = 0;
    break;
  case 4:
    if (*(int *)(g_mapDepart + 0x4c) != 0) {
      temp_v11 = scrRunOpcodesStub(*(unsigned int *)(g_mapDepart + 0x108));
      if (temp_v11 == 2) {
        if (*(int *)(temp_v4 + 0x10c) != 0) {
          gameFlagSetValue(*(int *)(temp_v4 + 0x10c),1);
        }
        messageSlotSet(0);
        scrScriptProcessDestroy(*(unsigned int *)(temp_v4 + 0x108));
        asdMemFree(*(unsigned int *)(temp_v4 + 0x100));
        asdMemFree(*(unsigned int *)(temp_v4 + 0x104));
        *(unsigned int *)(temp_v4 + 0x108) = 0;
        *(unsigned int *)(temp_v4 + 0x100) = 0;
        temp_v12 = 5;
        *(unsigned int *)(temp_v4 + 0x104) = 0;
        *(unsigned int *)(temp_v4 + 0x48) = temp_v12;
        *(unsigned int *)(temp_v4 + 0x4c) = 0;
        break;
      }
    }
    else {
      FUN_001681c4();
      puVar15 = &LAB_00299cdc;
      asdLoadFileSyncDefault();
      *(unsigned char **)(temp_v4 + 0x100) = puVar15;
      puVar15 = &LAB_00299cf0;
      asdLoadFileSyncDefault();
      *(unsigned char **)(temp_v4 + 0x104) = puVar15;
      temp_v11 = *(int *)(temp_v4 + 0x100);
      FUN_00275bc8(temp_v11,puVar15);
      *(int *)(temp_v4 + 0x108) = temp_v11;
      *(unsigned int *)(temp_v11 + 0x108) = 2;
      *(unsigned int *)(temp_v4 + 0x10c) = 0;
      temp_v12 = tableGroupFindEntryIndex(*(unsigned int *)(temp_v4 + 0x100),&LAB_00299d04);
      scrScriptProcessStartEntry(*(unsigned int *)(temp_v4 + 0x108),temp_v12);
      mapPopupReset();
    }
    temp_v11 = *(int *)(temp_v4 + 0x4c);
    *(int *)(temp_v4 + 0x4c) = temp_v11 + 1;
    break;
  case 5:
    temp_v11 = *(int *)(g_mapDepart + 0x4c) + 1;
    *(int *)(g_mapDepart + 0x4c) = temp_v11;
    if (temp_v11 == 1) {
      if (*(int *)(temp_v4 + 0xc) != 0) {
        temp_v11 = *(int *)(temp_v4 + 0x14);
        if (temp_v11 != 0) {
          DAT_005f1d10 = (unsigned char)*(unsigned int *)(temp_v4 + 0x24);
          DAT_005f1cfc = (unsigned char)*(unsigned int *)(temp_v4 + 0x34);
          DAT_005f1cbc = temp_v11;
        }
        temp_v7 = (unsigned int)(temp_v11 != 0);
        temp_v6 = temp_v7;
        if (*(int *)(temp_v4 + 0x18) != 0) {
          (&DAT_005f1cbc)[temp_v7] = *(int *)(temp_v4 + 0x18);
          temp_v6 = temp_v7 + 1;
          (&DAT_005f1d10)[temp_v7] = (char)*(unsigned int *)(temp_v4 + 0x28);
          (&DAT_005f1cfc)[temp_v7] = (char)*(unsigned int *)(temp_v4 + 0x38);
        }
        temp_v7 = temp_v6;
        if (*(int *)(temp_v4 + 0x1c) != 0) {
          (&DAT_005f1cbc)[temp_v6] = *(int *)(temp_v4 + 0x1c);
          temp_v7 = temp_v6 + 1;
          (&DAT_005f1d10)[temp_v6] = (char)*(unsigned int *)(temp_v4 + 0x2c);
          (&DAT_005f1cfc)[temp_v6] = (char)*(unsigned int *)(temp_v4 + 0x3c);
        }
        temp_v6 = temp_v7;
        if (*(int *)(temp_v4 + 0x20) != 0) {
          (&DAT_005f1cbc)[temp_v7] = *(int *)(temp_v4 + 0x20);
          temp_v6 = temp_v7 + 1;
          (&DAT_005f1d10)[temp_v7] = (char)*(unsigned int *)(temp_v4 + 0x30);
          (&DAT_005f1cfc)[temp_v7] = (char)*(unsigned int *)(temp_v4 + 0x40);
        }
        DAT_005f1d70 = 0;
        DAT_005f1d0c = temp_v6;
        if (temp_v6 != 0) {
          puVar17 = (unsigned int *)&DAT_005f1cbc;
          puVar19 = (unsigned short *)0x5f1d50;
          pbVar21 = &DAT_005f1d10;
          puVar15 = (unsigned char *)0x5f1d40;
          puVar22 = &DAT_005f1cfc;
          puVar6 = (unsigned short *)0x5f1d20;
          do {
            temp_v0 = *puVar22;
            temp_v1 = *pbVar21;
            *puVar6 = (short)*puVar17;
            *puVar15 = temp_v0;
            temp_v6 = temp_v6 - 1;
            *puVar19 = (unsigned short)temp_v1;
            puVar17 = puVar17 + 1;
            puVar19 = puVar19 + 1;
            pbVar21 = pbVar21 + 1;
            puVar15 = puVar15 + 1;
            puVar22 = puVar22 + 1;
            puVar6 = puVar6 + 1;
          } while (temp_v6 != 0);
          DAT_005f1d70 = (short)DAT_005f1d0c;
        }
      }
      else {
        temp_v11 = DAT_005f16d4;
        FUN_003799d0();
        FUN_002b5e08((int)*(short *)(temp_v11 + 0x24),&DAT_005f1cbc,&DAT_005f1cfc,&DAT_005f1d0c);
        temp_v11 = g_mapDepart;
        temp_v17[0] = 0;
        temp_v17[1] = 0;
        temp_v17[2] = 0;
        temp_v17[3] = 0;
        temp_v17[4] = 0;
        temp_v17[5] = 0;
        temp_v17[6] = 0;
        temp_v17[7] = 0;
        temp_v17[8] = 0;
        temp_v17[9] = 0;
        temp_v17[10] = 0;
        temp_v17[0xb] = 0;
        temp_v17[0xc] = 0;
        temp_v17[0xd] = 0;
        temp_v17[0xe] = 0;
        temp_v17[0xf] = 0;
        temp_v18 = 0;
        temp_v19 = 0;
        temp_v20 = 0;
        temp_v21 = 0;
        if (0 < (int)DAT_005f1d0c) {
          psVar10 = temp_v17;
          temp_v6 = DAT_005f1d0c;
          puVar15 = &DAT_005f1cfc;
          puVar17 = (unsigned int *)&temp_v18;
          puVar25 = (unsigned int *)&DAT_005f1cbc;
          do {
            temp_v0 = *puVar15;
            temp_v6 = temp_v6 - 1;
            *psVar10 = (short)*puVar25;
            *(unsigned char *)puVar17 = temp_v0;
            psVar10 = psVar10 + 1;
            puVar15 = puVar15 + 1;
            puVar17 = (unsigned int *)((int)puVar17 + 1);
            puVar25 = puVar25 + 1;
          } while (temp_v6 != 0);
        }
        temp_v14 = 0;
        temp_v8 = 0;
        if (temp_v8 < (int)DAT_005f1d0c) {
          do {
            psVar10 = temp_v17 + temp_v8;
            temp_v3 = *psVar10;
            if (temp_v3 != 0) {
              temp_v15 = 1;
              if (0 < (int)((DAT_005f1d0c - temp_v8) - 1)) {
                puVar15 = (unsigned char *)((int)&temp_v18 + temp_v8 + 1);
                temp_v13 = (DAT_005f1d0c - temp_v8) - 1;
                psVar11 = psVar10;
                temp_v15 = 1;
                do {
                  psVar11 = psVar11 + 1;
                  if ((*psVar11 != 0) && (*psVar11 == temp_v3)) {
                    *psVar11 = 0;
                    temp_v15 = temp_v15 + 1;
                    *puVar15 = 0;
                  }
                  temp_v13 = temp_v13 - 1;
                  puVar15 = puVar15 + 1;
                } while (temp_v13 != 0);
              }
              temp_v13 = temp_v14 * 2;
              *(short *)(temp_v13 + 0x5f1d20) = *psVar10;
              *(unsigned char *)(temp_v14 + 0x5f1d40) = *(unsigned char *)((int)&temp_v18 + temp_v8);
              *(short *)(temp_v13 + 0x5f1d50) = temp_v15;
              temp_v13 = (int)*(short *)(temp_v13 + 0x5f1d20);
              FUN_00480a54();
              if (temp_v13 != 0) {
                *(int *)(temp_v11 + 0xd0) = *(int *)(temp_v11 + 0xd0) + 1;
              }
              temp_v14 = temp_v14 + 1;
            }
            temp_v8 = temp_v8 + 1;
          } while (temp_v8 < (int)DAT_005f1d0c);
        }
        DAT_005f1d70 = (short)temp_v14;
        temp_v11 = 0;
        if (temp_v11 < DAT_005f1d70) {
          do {
            jyoucyuGetTableEntry(0);
            temp_v11 = temp_v11 + 1;
          } while (temp_v11 < DAT_005f1d70);
        }
      }
      if (*(unsigned int *)(temp_v4 + 0xc) < 2) {
        temp_v11 = *(int *)(temp_v4 + 0xb0);
        FUN_003774e8(temp_v11,&DAT_005f1d74,&DAT_005f1db4,&DAT_005f1dc4);
        if (temp_v11 != 0) {
          if (temp_v11 == 1) {
            *(unsigned char *)(temp_v4 + 0x8c) = 1;
            FUN_003ca244();
          }
          else if (temp_v11 == 2) {
            *(unsigned char *)(temp_v4 + 0x8c) = 1;
            *(unsigned char *)(temp_v4 + 0x8d) = 1;
            FUN_003ca244();
          }
        }
      }
    }
    if (*(int *)(temp_v4 + 0x4c) == 6) {
      *(unsigned char *)(temp_v4 + 0x70) = 1;
      sysPlayVoice(0x10000c7);
    }
    if (*(int *)(temp_v4 + 0x4c) == 7) {
      if ((*(int *)(temp_v4 + 0xc) == 0) && (*(int *)(g_lmapView + 0xb0) == 0)) {
        blockResetAxis(0xb);
        goto LAB_00299da8;
      }
    }
    else {
LAB_00299da8:
      if (*(int *)(temp_v4 + 0x4c) == 9) {
        if ((*(unsigned int *)(temp_v4 + 0xc) >= 2) && (*(char *)(temp_v4 + 0x4c8) != '\x01')) goto LAB_00299e1c;
        FUN_0037c8e4(1,0);
        FUN_003a6b10(*(unsigned int *)(temp_v4 + 0xb8));
      }
      if (*(int *)(temp_v4 + 0x4c) == 0xd) {
        *(unsigned char *)(temp_v4 + 0x50) = 1;
        temp_v11 = infoWinHasValue();
        if (temp_v11 != 0) {
          mapPopupReset();
        }
      }
      if (*(int *)(temp_v4 + 0x4c) == 0x12) {
        *(unsigned char *)(temp_v4 + 0x61) = 1;
      }
    }
LAB_00299e1c:
    if (*(char *)(temp_v4 + 0x50) != '\0') {
      if (*(char *)(temp_v4 + 0xa0) != '\0') goto LAB_0029a094;
      temp_v11 = *(int *)(temp_v4 + 0x54) + 1;
      *(int *)(temp_v4 + 0x54) = temp_v11;
      if (temp_v11 >= 7) {
        if (*(int *)(temp_v4 + 0x5c) % 6 == 0) {
          temp_v11 = (int)DAT_005f1d70;
          if (DAT_005f1d72 < temp_v11) {
            temp_v11 = DAT_005f1d72 * 2;
            temp_v8 = (int)*(short *)(temp_v11 + 0x5f1d20);
            temp_v3 = *(short *)(temp_v11 + 0x5f1d50);
            FUN_00480a54();
            if (temp_v8 != 0) {
              temp_v11 = temp_v4 + temp_v8 * 4;
              *(unsigned int *)(temp_v11 + 0xd0) = 1;
              *(int *)(temp_v11 + 0xe4) = *(int *)(temp_v11 + 0xe4) + (int)temp_v3;
            }
            DAT_005f1d72 = DAT_005f1d72 + 1;
          }
          else if (*(char *)(temp_v4 + 0x8c) != '\0') {
            *(unsigned char *)(temp_v4 + 0xa0) = 1;
          }
          else if (*(unsigned int *)(temp_v4 + 0xc) != 3) {
            if ((*(char *)(temp_v4 + 0x60) == '\0') && (*(unsigned int *)(temp_v4 + 0xc) < 2)) {
              FUN_00295108(0);
              FUN_00246128();
              temp_v11 = popupIsActive();
              *(unsigned char *)(temp_v4 + 0x8e) = temp_v11 != 0;
            }
            *(unsigned char *)(temp_v4 + 0x60) = 1;
          }
          else {
            temp_v8 = *(int *)(temp_v4 + 0x58) + 1;
            *(int *)(temp_v4 + 0x58) = temp_v8;
            if (temp_v8 == 6) {
              temp_v11 = gameFlagIsSet(0x4c9,temp_v11,*(int *)(temp_v4 + 0x5c) * 0x2aaaaaab);
              if (temp_v11 != 0) {
                temp_v11 = FUN_002e5db4();
                if (temp_v11 != 0) {
                  temp_v17[0] = 1;
                  temp_v17[1] = 0;
                  FUN_00398258(0xaf,&LAB_0029a23c,0);
                  temp_v12 = FUN_00152f44();
                  temp_v11 = randRange(99);
                  if (temp_v11 < 0x21) {
                    temp_v9 = FUN_0014af98();
                    temp_v10 = 0x29a268;
                  }
                  else if (0x41 >= temp_v11) {
                    temp_v9 = FUN_0014af98();
                    temp_v10 = 0x29a270;
                  }
                  else {
                    temp_v9 = FUN_0014af98();
                    temp_v10 = 0x29a278;
                  }
                  FUN_001628c0(temp_v10,temp_v9,temp_v12,1);
                }
              }
              else {
                temp_v17[0] = 1;
                temp_v17[1] = 0;
                FUN_00398258(0xaf,&LAB_0029a23c,0);
                temp_v12 = FUN_00152f44();
                temp_v11 = randRange(99);
                if (temp_v11 < 0x21) {
                  temp_v9 = FUN_0014af98();
                  temp_v10 = 0x29a268;
                }
                else if (temp_v11 < 0x42) {
                  temp_v9 = FUN_0014af98();
                  temp_v10 = 0x29a270;
                }
                else {
                  temp_v9 = FUN_0014af98();
                  temp_v10 = 0x29a278;
                }
                FUN_001628c0(temp_v10,temp_v9,temp_v12,1);
              }
            }
            if (*(int *)(temp_v4 + 0x58) >= 9) {
              *(unsigned char *)(temp_v4 + 0x60) = 1;
            }
          }
        }
        *(int *)(temp_v4 + 0x5c) = *(int *)(temp_v4 + 0x5c) + 1;
        goto LAB_0029a088;
      }
    }
    else {
LAB_0029a088:
      if (*(char *)(temp_v4 + 0xa0) != '\0') {
LAB_0029a094:
        if (*(int *)(temp_v4 + 0x98) % 6 == 0) {
          if ((int)DAT_005f1e1a < (int)DAT_005f1e18) {
            temp_v11 = DAT_005f1e1a * 2;
            temp_v6 = (unsigned int)*(short *)(temp_v11 + 0x5f1dc8);
            temp_v11 = (int)*(short *)(temp_v11 + 0x5f1df8);
            FUN_00480a54();
            if (temp_v6 != 0) {
              FUN_004808c0(temp_v6 & 0xff,temp_v11);
              temp_v8 = temp_v4 + temp_v6 * 4;
              *(unsigned int *)(temp_v8 + 0xd0) = 1;
              *(int *)(temp_v8 + 0xe4) = *(int *)(temp_v8 + 0xe4) + temp_v11;
            }
            DAT_005f1e1a = DAT_005f1e1a + 1;
          }
          else {
            if (((*(char *)(temp_v4 + 0x60) == '\0') && (*(char *)(temp_v4 + 0x8d) != '\0')) &&
               (*(char *)(temp_v4 + 0xa1) == '\0')) {
              FUN_00295108(0,(int)DAT_005f1e18,*(int *)(temp_v4 + 0x98) * 0x2aaaaaab);
              FUN_00246128();
              FUN_00234528(*(unsigned int *)(temp_v4 + 0xa4),*(unsigned int *)(temp_v4 + 0xa8));
            }
            *(unsigned char *)(temp_v4 + 0xa1) = 1;
          }
        }
        *(int *)(temp_v4 + 0x98) = *(int *)(temp_v4 + 0x98) + 1;
      }
    }
    if (*(char *)(temp_v4 + 0xa1) != '\0') {
      temp_v11 = *(int *)(temp_v4 + 0x90) + 1;
      *(int *)(temp_v4 + 0x90) = temp_v11;
      if (temp_v11 >= 6) {
        if ((temp_v11 >= 0x33) && (*(char *)(temp_v4 + 0x8d) != '\0')) {
          popupStateClose();
          *(unsigned char *)(temp_v4 + 0x8d) = 0;
        }
        *(unsigned char *)(temp_v4 + 0x60) = 1;
      }
    }
    if (((*(char *)(temp_v4 + 0x70) != '\0') &&
        (temp_v11 = *(int *)(temp_v4 + 0x74) + 1, *(int *)(temp_v4 + 0x74) = temp_v11, temp_v11 >= 7)) &&
       (temp_v11 = *(int *)(temp_v4 + 0x78) + 1, *(int *)(temp_v4 + 0x78) = temp_v11, temp_v11 >= 0x1f)) {
      *(unsigned int *)(temp_v4 + 0x78) = 0;
    }
    if (*(char *)(temp_v4 + 0x61) != '\0') {
      temp_v11 = *(int *)(temp_v4 + 100) + 1;
      *(int *)(temp_v4 + 100) = temp_v11;
      if (temp_v11 >= 6) {
        *(int *)(temp_v4 + 0x6c) = *(int *)(temp_v4 + 0x6c) + 1;
      }
      if (*(char *)(temp_v4 + 0x60) == '\0') {
        return 0;
      }
      *(unsigned char *)(temp_v4 + 0x68) = 1;
    }
    else if (*(char *)(temp_v4 + 0x60) == '\0') {
      return 0;
    }
    temp_v11 = *(int *)(temp_v4 + 0xfc);
    if (temp_v11 != 0) {
      if (temp_v11 != 1) {
        if (temp_v11 == 2) {
          temp_v11 = 0;
          do {
            if (*(int *)(temp_v4 + temp_v11 * 4 + 0xd4) == 1) {
              FUN_00163aa4(temp_v4 + temp_v11 * 0x8c + 0x1d4);
            }
            temp_v11 = temp_v11 + 1;
          } while (temp_v11 < 5);
          temp_v11 = 0;
          do {
            if ((*(int *)(temp_v4 + temp_v11 * 4 + 0xd4) == 1) &&
               (*(char *)(temp_v4 + temp_v11 * 0x8c + 0x25e) == '\0')) break;
            temp_v11 = temp_v11 + 1;
          } while (temp_v11 < 5);
          if (*(char *)(temp_v4 + 0x60) == '\0') {
            return 0;
          }
        }
        temp_v11 = FUN_004d0584();
        if ((temp_v11 == 0) && (temp_v11 = inputIsQuestMenuPressed(), temp_v11 == 0)) {
          return 0;
        }
        temp_v2 = *(char *)(temp_v4 + 0x8d);
        temp_v16 = temp_v2 == '\0';
        if (temp_v16) {
          temp_v2 = *(char *)(temp_v4 + 0x8e);
        }
        if (!temp_v16 || temp_v2 != '\0') {
          popupStateClose();
        }
        if ((*(unsigned int *)(temp_v4 + 0xc) < 2) || (*(char *)(temp_v4 + 0x4c8) == '\x01')) {
          messageDismissNumericBanner(1);
          scrCommResetPanel();
        }
        *(unsigned char *)(temp_v4 + 0xac) = 0;
        blockResetAxis(0xffffffff);
        *(unsigned char *)(temp_v4 + 0x50) = 0;
        *(unsigned char *)(temp_v4 + 0x61) = 0;
        *(unsigned char *)(temp_v4 + 0x70) = 0;
        *(unsigned char *)(temp_v4 + 0x8c) = 0;
        *(unsigned char *)(temp_v4 + 0x8d) = 0;
        *(unsigned int *)(temp_v4 + 0x9c) = 0;
        *(unsigned int *)(temp_v4 + 0x94) = 0;
        *(unsigned char *)(temp_v4 + 0xa0) = 0;
        *(unsigned char *)(temp_v4 + 0xa1) = 0;
        *(unsigned int *)(temp_v4 + 0x58) = 0;
        if (*(int *)(temp_v4 + 0xc) == 0) {
          mapIfRequestById(*(unsigned int *)(temp_v4 + 0x10));
          FUN_00312714(*(unsigned int *)(temp_v4 + 0x10),5,0);
          FUN_00408184(0x13,1);
        }
        if (*(int *)(temp_v4 + 0xc) == 3) {
          if (*(int *)(temp_v4 + 0x14) != 0) {
            flagValueAdd(*(int *)(temp_v4 + 0x14),*(unsigned int *)(temp_v4 + 0x24));
          }
          if (*(int *)(temp_v4 + 0x18) != 0) {
            flagValueAdd(*(int *)(temp_v4 + 0x18),*(unsigned int *)(temp_v4 + 0x28));
          }
          popupStateClose();
          DAT_005f1859 = 1;
        }
        if (DAT_005f16d0 != 0) {
          temp_v11 = DAT_005f16d4;
          FUN_003799d0();
          FUN_00377158((int)*(short *)(temp_v11 + 0x24),0);
        }
        *(unsigned int *)(temp_v4 + 0x48) = 6;
        *(unsigned int *)(temp_v4 + 0x4c) = 0;
        return 0;
      }
      temp_v11 = 0;
      do {
        temp_v8 = temp_v4 + temp_v11 * 4;
        if (*(int *)(temp_v8 + 0xd4) == 1) {
          FUN_00163aa4(temp_v4 + temp_v11 * 0x8c + 0x1d4);
        }
        if (*(int *)(temp_v8 + 0xe8) != 0) {
          *(int *)(temp_v8 + 0xbc) = *(int *)(temp_v8 + 0xe8) + *(int *)(temp_v8 + 0xbc);
          *(unsigned int *)(temp_v8 + 0xe8) = 0;
        }
        temp_v11 = temp_v11 + 1;
      } while (temp_v11 < 5);
      temp_v12 = 2;
    }
    else {
      messageCounterBeginTransition(0x14,1);
      temp_v12 = 1;
    }
    *(unsigned int *)(temp_v4 + 0xfc) = temp_v12;
    break;
  case 6:
    temp_v11 = *(int *)(g_mapDepart + 0x4c);
    *(unsigned int *)(g_mapDepart + 0x48) = 0x12;
    *(int *)(temp_v4 + 0x4c) = temp_v11 + 1;
    break;
  case 7:
    FUN_001681c4();
    puVar15 = &LAB_0029a5c4;
    asdLoadFileSyncDefault();
    *(unsigned char **)(temp_v4 + 0x100) = puVar15;
    puVar15 = &LAB_0029a5dc;
    asdLoadFileSyncDefault();
    *(unsigned char **)(temp_v4 + 0x104) = puVar15;
    temp_v11 = *(int *)(temp_v4 + 0x100);
    FUN_00275bc8(temp_v11,puVar15);
    *(int *)(temp_v4 + 0x108) = temp_v11;
    *(unsigned int *)(temp_v11 + 0x108) = 3;
    scrScriptProcessStartEntry(*(unsigned int *)(temp_v4 + 0x108),1);
    mapPopupReset();
    *(int *)(temp_v4 + 0x48) = *(int *)(temp_v4 + 0x48) + 1;
    *(unsigned int *)(temp_v4 + 0x4c) = 0;
    break;
  case 8:
    temp_v11 = scrRunOpcodesStub(*(unsigned int *)(g_mapDepart + 0x108));
    if (temp_v11 != 2) {
      return 0;
    }
    DAT_005f1c92 = 1;
    scrScriptProcessDestroy(*(unsigned int *)(temp_v4 + 0x108));
    asdMemFree(*(unsigned int *)(temp_v4 + 0x100));
    asdMemFree(*(unsigned int *)(temp_v4 + 0x104));
    *(unsigned int *)(temp_v4 + 0x108) = 0;
    *(unsigned int *)(temp_v4 + 0x100) = 0;
    temp_v12 = 0x12;
    *(unsigned int *)(temp_v4 + 0x104) = 0;
    *(unsigned int *)(temp_v4 + 0x48) = temp_v12;
    *(unsigned int *)(temp_v4 + 0x4c) = 0;
    break;
  case 9:
    *(unsigned char *)(g_mapDepart + 0x70) = 1;
    *(unsigned int *)(temp_v4 + 0x74) = 1;
    *(unsigned int *)(temp_v4 + 0x78) = 0;
    mapMainStartEntry(&LAB_0029985c);
    temp_v12 = 10;
    *(unsigned int *)(temp_v4 + 0x48) = temp_v12;
    break;
  case 10:
    temp_v11 = mapJobIsDone();
    if (temp_v11 != 0) {
      messageBannerRestartOrClear();
      temp_v11 = messageMainGetValue();
      if (temp_v11 == 0) {
        gameFlagsBitSet((int)(short)*(unsigned int *)(temp_v4 + 0xb4),1);
        mapMainStartEntry(&LAB_0029986c);
        temp_v12 = 0xb;
        *(unsigned int *)(temp_v4 + 0x48) = temp_v12;
        break;
      }
      *(unsigned int *)(temp_v4 + 0x48) = 0xc;
    }
    if (*(char *)(temp_v4 + 0x70) == '\0') {
      return 0;
    }
    temp_v11 = *(int *)(temp_v4 + 0x74) + 1;
    *(int *)(temp_v4 + 0x74) = temp_v11;
    if (temp_v11 < 7) {
      return 0;
    }
    temp_v11 = *(int *)(temp_v4 + 0x78) + 1;
    *(int *)(temp_v4 + 0x78) = temp_v11;
    if (temp_v11 < 0x1f) {
      return 0;
    }
    *(unsigned int *)(temp_v4 + 0x78) = 0;
    break;
  case 0xb:
    temp_v11 = asdTMTexTableNodeIsLoaded(0x1d,0);
    if (temp_v11 != 0) {
      switch(*(unsigned int *)(temp_v4 + 0x490)) {
      case 0:
        temp_v11 = *(int *)(temp_v4 + 0xb4);
        FUN_003689d0();
        puVar6 = (unsigned short *)dataTable20GetEntry((int)*(short *)(temp_v11 + 0x14));
        temp_v11 = dataTable20FindAddonRecord(*puVar6);
        FUN_00359974(0x18,(int)*(char *)(temp_v11 + 7),0xffffffff,0);
        uiSpriteSetKeyframe(temp_v4 + 0x148,0);
        *(unsigned int *)(temp_v4 + 0x490) = 1;
        temp_v12 = FUN_002e5c2c();
        *(unsigned int *)(temp_v4 + 0x498) = temp_v12;
        gameDataAddCappedPoints((int)*(char *)(temp_v11 + 7));
        *(int *)(temp_v4 + 0x494) = *(int *)(temp_v4 + 0x498) << 0xc;
        *(unsigned int *)(temp_v4 + 0x49c) = 0;
        break;
      case 1:
        FUN_00163aa4(temp_v4 + 0x148);
        if (*(char *)(temp_v4 + 0x1d2) != '\0') {
          *(unsigned int *)(temp_v4 + 0x490) = 2;
          temp_v12 = sysPlayVoice(0x100021d);
          *(unsigned int *)(temp_v4 + 0x49c) = temp_v12;
        }
        break;
      case 2:
        temp_v6 = FUN_002e5c2c();
        temp_v7 = *(unsigned int *)(temp_v4 + 0x498);
        temp_v11 = FUN_002ffa9c((temp_v6 - temp_v7) * 0x1000,
                              ((temp_v6 - temp_v7) >> 0x14) |
                              ((((int)temp_v7 >> 0x1f) + (unsigned int)(temp_v6 < temp_v7)) * -0x1000),0x14,0);
        *(int *)(temp_v4 + 0x494) = temp_v11 + *(int *)(temp_v4 + 0x494);
        temp_v5 = FUN_002e5c2c();
        temp_v7 = *(unsigned int *)(temp_v4 + 0x494);
        temp_v6 = temp_v5 >> 0x14;
        temp_v16 = temp_v5 << 0xc <= temp_v7;
        temp_v7 = (int)temp_v7 >> 0x1f;
        if (temp_v6 < temp_v7 || temp_v7 - temp_v6 < (unsigned int)temp_v16) {
          temp_v11 = FUN_002e5c2c(temp_v7 - (temp_v6 + !temp_v16));
          *(int *)(temp_v4 + 0x494) = temp_v11 << 0xc;
          FUN_003d2158(*(unsigned int *)(temp_v4 + 0x49c),0);
        }
        temp_v11 = messageMainIsIdle();
        if (temp_v11 != 0) {
          FUN_003d2158(*(unsigned int *)(temp_v4 + 0x49c),0);
          temp_v11 = FUN_002e5c2c();
          *(int *)(temp_v4 + 0x494) = temp_v11 << 0xc;
          FUN_003d2158(*(unsigned int *)(temp_v4 + 0x49c),0);
          uiSpriteSetKeyframe(temp_v4 + 0x148,1,0);
          *(unsigned int *)(temp_v4 + 0x490) = 3;
        }
        break;
      case 3:
        temp_v11 = FUN_00163aa4(temp_v4 + 0x148);
        if (temp_v11 != 0) {
          *(unsigned int *)(temp_v4 + 0x490) = 4;
          FUN_003d2158(*(unsigned int *)(temp_v4 + 0x49c),0);
        }
        break;
      case 4:
        temp_v11 = mapJobIsDone();
        if (temp_v11 != 0) {
          *(unsigned int *)(temp_v4 + 0x48) = 0xd;
        }
      }
      mapJobIsDone();
    }
    if (*(char *)(temp_v4 + 0x70) == '\0') {
      return 0;
    }
    temp_v11 = *(int *)(temp_v4 + 0x74) + 1;
    *(int *)(temp_v4 + 0x74) = temp_v11;
    if (temp_v11 < 7) {
      return 0;
    }
    temp_v11 = *(int *)(temp_v4 + 0x78) + 1;
    *(int *)(temp_v4 + 0x78) = temp_v11;
    if (temp_v11 >= 0x1f) {
      *(unsigned int *)(temp_v4 + 0x78) = 0;
    }
    break;
  case 0xc:
    asdTMTexTableReleaseNode(0x1d,0);
    *(unsigned char *)(temp_v4 + 0x70) = 0;
    *(unsigned int *)(temp_v4 + 0x74) = 0;
    temp_v12 = 6;
    *(unsigned int *)(temp_v4 + 0x78) = 0;
    *(unsigned int *)(temp_v4 + 0x48) = temp_v12;
    *(unsigned int *)(temp_v4 + 0x4c) = 0;
    break;
  case 0xd:
    temp_v11 = mapJobIsDone();
    if (temp_v11 != 0) {
      *(unsigned int *)(temp_v4 + 0x48) = 0xc;
    }
    if (*(char *)(temp_v4 + 0x70) == '\0') {
      return 0;
    }
    temp_v11 = *(int *)(temp_v4 + 0x74) + 1;
    *(int *)(temp_v4 + 0x74) = temp_v11;
    if (temp_v11 < 7) {
      return 0;
    }
    temp_v11 = *(int *)(temp_v4 + 0x78) + 1;
    *(int *)(temp_v4 + 0x78) = temp_v11;
    if (temp_v11 >= 0x1f) {
      *(unsigned int *)(temp_v4 + 0x78) = 0;
    }
    break;
  case 0xe:
    temp_v11 = *(int *)(g_mapDepart + 0x4c) + 1;
    *(int *)(g_mapDepart + 0x4c) = temp_v11;
    if (temp_v11 == 6) {
      *(unsigned char *)(temp_v4 + 0x70) = 1;
      sysPlayVoice(0x10000c7);
    }
    if (*(int *)(temp_v4 + 0x4c) == 7) {
      if ((*(int *)(temp_v4 + 0xc) == 0) && (*(int *)(g_lmapView + 0xb0) == 0)) {
        blockResetAxis(0xb);
        goto LAB_002993c0;
      }
    }
    else {
LAB_002993c0:
      if (*(int *)(temp_v4 + 0x4c) == 9) {
        FUN_0037c8e4(1,0);
      }
      if (*(int *)(temp_v4 + 0x4c) == 0xd) {
        *(unsigned char *)(temp_v4 + 0x50) = 1;
        temp_v11 = infoWinHasValue();
        if (temp_v11 != 0) {
          mapPopupReset();
        }
      }
    }
    if (((*(char *)(temp_v4 + 0x50) != '\0') &&
        (temp_v11 = *(int *)(temp_v4 + 0x54) + 1, *(int *)(temp_v4 + 0x54) = temp_v11, temp_v11 >= 6)) &&
       (*(char *)(temp_v4 + 0x60) == '\0')) {
      *(unsigned char *)(temp_v4 + 0x60) = 1;
      panelSetTarget(*(unsigned int *)(temp_v4 + 0x44),1);
    }
    if (((*(char *)(temp_v4 + 0x70) != '\0') &&
        (temp_v11 = *(int *)(temp_v4 + 0x74) + 1, *(int *)(temp_v4 + 0x74) = temp_v11, temp_v11 >= 7)) &&
       (temp_v11 = *(int *)(temp_v4 + 0x78) + 1, *(int *)(temp_v4 + 0x78) = temp_v11, temp_v11 >= 0x1f)) {
      *(unsigned int *)(temp_v4 + 0x78) = 0;
    }
    if (*(char *)(temp_v4 + 0x60) == '\0') {
      return 0;
    }
    temp_v11 = FUN_004d0584();
    if ((temp_v11 == 0) && (temp_v11 = inputIsQuestMenuPressed(), temp_v11 == 0)) {
      return 0;
    }
    panelSetMode3(*(unsigned int *)(temp_v4 + 0x44),0);
    temp_v12 = 0xf;
    *(unsigned int *)(temp_v4 + 0x48) = temp_v12;
    break;
  case 0xf:
    temp_v11 = panelStateIs0();
    if (temp_v11 == 1) {
      messageDismissNumericBanner(1);
      partyAddMoneyClamped(*(unsigned int *)(temp_v4 + 0x44));
      *(unsigned char *)(temp_v4 + 0xac) = 0;
      blockResetAxis(0xffffffff);
      *(unsigned char *)(temp_v4 + 0x50) = 0;
      *(unsigned char *)(temp_v4 + 0x61) = 0;
      *(unsigned char *)(temp_v4 + 0x70) = 0;
      *(unsigned char *)(temp_v4 + 0x8c) = 0;
      *(unsigned char *)(temp_v4 + 0x8d) = 0;
      *(unsigned int *)(temp_v4 + 0x9c) = 0;
      *(unsigned int *)(temp_v4 + 0x94) = 0;
      *(unsigned char *)(temp_v4 + 0xa0) = 0;
      *(unsigned char *)(temp_v4 + 0xa1) = 0;
      *(unsigned int *)(temp_v4 + 0x58) = 0;
      *(unsigned int *)(temp_v4 + 0x48) = 6;
      *(unsigned int *)(temp_v4 + 0x4c) = 0;
    }
    break;
  case 0x10:
    if (*(int *)(g_lmapView + 0xb0) == 0) {
      blockResetAxis(0xb);
    }
    FUN_001681c4();
    puVar15 = &LAB_0029a5c4;
    asdLoadFileSyncDefault();
    *(unsigned char **)(temp_v4 + 0x100) = puVar15;
    puVar15 = &LAB_0029a5dc;
    asdLoadFileSyncDefault();
    *(unsigned char **)(temp_v4 + 0x104) = puVar15;
    temp_v11 = *(int *)(temp_v4 + 0x100);
    FUN_00275bc8(temp_v11,puVar15);
    *(int *)(temp_v4 + 0x108) = temp_v11;
    *(unsigned int *)(temp_v11 + 0x108) = 3;
    if (g_gameState < 100) {
      temp_v12 = 2;
    }
    else {
      temp_v12 = 3;
    }
    scrScriptProcessStartEntry(*(unsigned int *)(temp_v4 + 0x108),temp_v12);
    mapPopupReset();
    *(int *)(temp_v4 + 0x48) = *(int *)(temp_v4 + 0x48) + 1;
    *(unsigned int *)(temp_v4 + 0x4c) = 0;
    break;
  case 0x11:
    temp_v11 = scrRunOpcodesStub(*(unsigned int *)(g_mapDepart + 0x108));
    if (temp_v11 == 2) {
      scrScriptProcessDestroy(*(unsigned int *)(temp_v4 + 0x108));
      asdMemFree(*(unsigned int *)(temp_v4 + 0x100));
      asdMemFree(*(unsigned int *)(temp_v4 + 0x104));
      *(unsigned int *)(temp_v4 + 0x108) = 0;
      *(unsigned int *)(temp_v4 + 0x100) = 0;
      *(unsigned int *)(temp_v4 + 0x104) = 0;
      temp_v11 = messageGetChoiceResult();
      if (temp_v11 != 0) {
        blockResetAxis(0xffffffff);
      }
      else {
        mapPlaceSet(0x18,1,0);
        FUN_00408184(0x1b,1);
      }
      *(unsigned int *)(temp_v4 + 0x48) = 0x12;
      *(unsigned int *)(temp_v4 + 0x4c) = 0;
    }
    break;
  case 0x12:
    if (*(int *)(g_mapDepart + 0xc) == 3) {
      DAT_005f1614 = 0;
      DAT_005f19eb = 0;
      FUN_00313648(1);
    }
    dataTableFree(0x21);
    asdTMTexTableReleaseNode(4);
    DAT_005806c8 = (DAT_005806c8 + 1) % 3;
    return 0xffffffff;
  }
  return 0;
}

} /* extern "C" */
