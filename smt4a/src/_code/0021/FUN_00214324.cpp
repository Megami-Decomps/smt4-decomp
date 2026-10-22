/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00214324` (_code @ 0x214324, 0xa70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int npcRoomDestroy(void);
int buttonHelpSetSelectedId(...);
int gameFlagSetValue(...);

int textFormatBuffer(...);
int asdSequenceRequest(...);
int jobStop(unsigned int, int);
int jobSetIntensity(...);
int sysPlaySe(...);
int FUN_00168980(...);
int gameFlagIsSet(...);
int asdMemFree(...);
int asdTMTexTableReleaseNode(int, int);
int scrScriptProcessDestroy(...);
int dataTableFree(int);
int slotSetRequest(...);
int asdLoadFileSyncDefault(void);
int bgmFadeOut(int);
int scrRunOpcodesStub(...);
int FUN_00275bc8(void);
int scrScriptProcessStartEntry(...);
int obj04Finish(void);
int campCommonBgRelease(void);
int campButtonHelpRelease(void);
int FUN_003c3e14(void);
int eventTexAddHandle(...);
int soundChannelStopAll(int);
int FUN_003d54f8(...);

/* stack frame of void: 6 slot(s), 22 byte(s) */
typedef struct {
    unsigned short sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp68; /* 0x68: local_68 */
} void_stack;

extern unsigned char LAB_00214b8c; /* 0x214b8c */
extern unsigned char LAB_00214ba8; /* 0x214ba8 */
extern unsigned int *g_npcRoom; /* 0x588124 */
extern int DAT_005f1610; /* 0x5f1610 */
extern signed char DAT_005f1b70; /* 0x5f1b70 */
extern unsigned int DAT_005f1b74; /* 0x5f1b74 */
extern unsigned int DAT_005f1b78; /* 0x5f1b78 */

#ifndef ROMWRIGHT_PIECE_2_2_DEFINED
#define ROMWRIGHT_PIECE_2_2_DEFINED
#define romwright_piece_2_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned short)(upper) << 16) | (unsigned short)(lower)))
#endif
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: asdSequenceRequest. */
/* Supplied declaration required: jobStop. */
/* Supplied declaration required: jobSetIntensity. */
/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: FUN_00168980. */
extern int FUN_001801b8(unsigned short, unsigned char);
extern int asdTMTexTableNodeIsLoaded(unsigned int, unsigned short);
extern unsigned int dataTableGet(unsigned int, unsigned int);
/* Supplied declaration required: gameFlagIsSet. */
extern unsigned int dataTableGetCount(unsigned int);
extern short *dataTableGetEntries(void);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: asdTMTexTableReleaseNode. */
/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: dataTableFree. */
/* Supplied declaration required: slotSetRequest. */
/* Supplied declaration required: asdLoadFileSyncDefault. */
extern int slotIsReady(unsigned int);
/* Supplied declaration required: bgmFadeOut. */
/* Supplied declaration required: scrRunOpcodesStub. */
/* Supplied declaration required: npcRoomDestroy. */
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: scrScriptProcessStartEntry. */
extern int messageMainGetValue(void);
extern int messageGetChoiceResult(void);
extern int messageWindowIsState1(void);
extern int panelIsMissingOrFlagClear(void);
/* Supplied declaration required: buttonHelpSetSelectedId. */
/* Supplied declaration required: obj04Finish. */
extern unsigned int tableGroupFindEntryIndex(unsigned int, int);
/* Supplied declaration required: campCommonBgRelease. */
/* Supplied declaration required: campButtonHelpRelease. */
/* Supplied declaration required: FUN_003c3e14. */
/* Supplied declaration required: eventTexAddHandle. */
/* Supplied declaration required: soundChannelStopAll. */
/* Supplied declaration required: FUN_003d54f8. */
/* Supplied declaration required: gameFlagSetValue. */


unsigned int FUN_00214324(void)

{
/* irregular: 7 goto(s); 27 native warning(s); review required */
  short temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int temp_v2;
  short *psVar7;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned short *puVar10;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned int uStack_64;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned short temp_v13;
  
  puVar2 = g_npcRoom;
  puVar4 = &temp_v8;
  puVar5 = &temp_v8;
  switch(g_npcRoom[0x3c]) {
  case 0:
    temp_v7 = asdTMTexTableNodeIsLoaded(0,*(unsigned short *)((int)g_npcRoom + 0x102));
    if (temp_v7 != 0) {
      FUN_003d54f8(0,1);
      FUN_003d54f8(1);
      temp_v7 = 0;
      do {
        if (((*(short *)(puVar2[9] + temp_v7 * 0x18 + 0x24) != 0) &&
            (temp_v5 = gameFlagIsSet(), temp_v5 != 0)) &&
           ((*(short *)(puVar2[9] + temp_v7 * 0x18 + 0x26) == 0 ||
            (temp_v5 = gameFlagIsSet(), temp_v5 == 0)))) {
          temp_v8 = (unsigned int)*(unsigned short *)(puVar2[9] + temp_v7 * 0x18 + 0x28);
          uStack_64 = 0xffffffff;
          puVar2 = (unsigned int *)(temp_v7 * 0x18 + 0x2a + puVar2[9]);
          temp_v9 = *puVar2;
          temp_v10 = puVar2[1];
          temp_v11 = puVar2[2];
          temp_v12 = puVar2[3];
          temp_v13 = *(unsigned short *)(puVar2 + 4);
          asdSequenceRequest(4,&temp_v8,0x20);
          puVar2 = g_npcRoom;
          if (g_npcRoom != (unsigned int *)0x0) {
            FUN_003c3e14();
            if (*(short *)(puVar2 + 0x40) == 0x22) {
              soundChannelStopAll(0xf);
              bgmFadeOut(0x3c);
            }
            asdTMTexTableReleaseNode(0,*(unsigned short *)((int)puVar2 + 0x102));
            temp_v7 = 0;
            do {
              if (puVar2[temp_v7 + 10] != 0) {
                jobStop(puVar2[temp_v7 + 1],0);
              }
              temp_v7 = temp_v7 + 1;
            } while (temp_v7 < 8);
            scrScriptProcessDestroy(puVar2[0x14]);
            scrScriptProcessDestroy(puVar2[0x15]);
            asdMemFree(puVar2[0x13]);
            asdMemFree(puVar2[0x12]);
            jobStop(*puVar2,0);
            asdMemFree(puVar2);
            g_npcRoom = (unsigned int *)0x0;
            dataTableFree(0x1a);
            campButtonHelpRelease();
            campCommonBgRelease();
          }
          return 0xffffffff;
        }
        temp_v7 = temp_v7 + 1;
      } while (temp_v7 < 3);
      puVar2[0x41] = 0;
      temp_v7 = 0;
      if (temp_v7 < (int)puVar2[0x39]) {
        do {
          temp_v5 = 0;
          do {
            temp_v6 = (int)*(short *)((int)puVar2 + temp_v5 * 2 + temp_v7 * 0x10 + 100);
            if (-1 < temp_v6) {
              jobSetIntensity(puVar2[temp_v6 + 1],0);
            }
            temp_v5 = temp_v5 + 1;
          } while (temp_v5 < 8);
          temp_v7 = temp_v7 + 1;
        } while (temp_v7 < (int)puVar2[0x39]);
      }
      temp_v5 = 8;
      temp_v7 = 0;
      do {
        temp_v5 = temp_v5 - 1;
        puVar2[temp_v7 * 3 + 0x42] = 0;
        puVar2[temp_v7 * 3 + 0x43] = 0;
        puVar2[temp_v7 * 3 + 0x44] = 5;
        temp_v7 = temp_v7 + 1;
      } while (temp_v5 != 0);
      puVar2[0x5a] = 0;
      puVar4 = g_npcRoom;
      g_npcRoom[0x3b] = 0;
      puVar4[0x3c] = 1;
    }
    break;
  case 1:
    temp_v7 = slotIsReady(0);
    if (temp_v7 != 0) break;
    temp_v7 = puVar2[0x3d];
    if (temp_v7 < 1) {
      temp_v7 = scrScriptProcessStartEntry(puVar2[0x14],2);
      if (temp_v7 != 0) {
        sysPlaySe(0xa4);
        puVar4 = g_npcRoom;
        g_npcRoom[0x3b] = 0;
        puVar4[0x3c] = 5;
      }
      break;
    }
    if (temp_v7 != 1) {
      if (temp_v7 != 2) {
        if (temp_v7 == 3) {
          temp_v7 = puVar2[0x39];
          goto joined_r0x002146ac;
        }
        if (temp_v7 == 4) {
          temp_v7 = puVar2[0x39];
          goto joined_r0x002146ac;
        }
        if (temp_v7 < 2) break;
      }
      else {
        temp_v7 = puVar2[0x39];
joined_r0x002146ac:
        if (temp_v7 == 1) goto LAB_002146c0;
      }
      temp_v7 = scrScriptProcessStartEntry(puVar2[0x14],0);
      if (temp_v7 != 0) {
        scrScriptProcessStartEntry(puVar2[0x15],1);
        puVar4 = g_npcRoom;
        g_npcRoom[0x3b] = 0;
        puVar4[0x3c] = 2;
      }
    }
    else {
LAB_002146c0:
      puVar2[0x3e] = 0;
      puVar2[0x3f] = 0;
      puVar4 = g_npcRoom;
      g_npcRoom[0x3b] = 0;
      puVar4[0x3c] = 3;
    }
    break;
  case 2:
    temp_v7 = messageWindowIsState1();
    if ((temp_v7 != 0) && (temp_v7 = 0, 0 < (int)puVar2[0x39])) {
      do {
        temp_v5 = messageMainGetValue();
        temp_v6 = 0;
        do {
          temp_v1 = (int)*(short *)((int)puVar2 + temp_v6 * 2 + temp_v7 * 0x10 + 100);
          if (-1 < temp_v1) {
            jobSetIntensity(puVar2[temp_v1 + 1],temp_v5 == temp_v7);
          }
          temp_v6 = temp_v6 + 1;
        } while (temp_v6 < 8);
        temp_v7 = temp_v7 + 1;
      } while (temp_v7 < (int)puVar2[0x39]);
    }
    scrRunOpcodesStub(puVar2[0x14]);
    scrRunOpcodesStub(puVar2[0x15]);
    temp_v7 = panelIsMissingOrFlagClear();
    if (temp_v7 == 0) break;
    obj04Finish();
    temp_v7 = messageGetChoiceResult();
    if (-1 < temp_v7) {
      temp_v7 = messageGetChoiceResult();
      puVar2[0x3f] = temp_v7;
      puVar2[0x3e] = (int)*(short *)(puVar2 + temp_v7 * 4 + 0x19);
      puVar4 = g_npcRoom;
      g_npcRoom[0x3b] = 0;
      puVar4[0x3c] = 3;
      puVar2[0x41] = puVar2[0x3f];
      break;
    }
    slotSetRequest(0,10,0xff);
    slotSetRequest(1,10,0xff);
    puVar4 = g_npcRoom;
    g_npcRoom[0x3b] = 0;
    puVar4[0x3c] = 6;
    break;
  case 3:
    temp_v7 = 0;
    do {
      temp_v5 = (int)*(short *)((int)puVar2 + temp_v7 * 2 + puVar2[0x3f] * 0x10 + 100);
      if (-1 < temp_v5) {
        eventTexAddHandle(puVar2[temp_v5 + 1]);
      }
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < 8);
    temp_v7 = 0;
    if (0 < (int)puVar2[0x39]) {
      do {
        temp_v5 = messageMainGetValue();
        temp_v6 = 0;
        do {
          temp_v1 = (int)*(short *)((int)puVar2 + temp_v6 * 2 + temp_v7 * 0x10 + 100);
          if (-1 < temp_v1) {
            jobSetIntensity(puVar2[temp_v1 + 1],temp_v5 == temp_v7);
          }
          temp_v6 = temp_v6 + 1;
        } while (temp_v6 < 8);
        temp_v7 = temp_v7 + 1;
      } while (temp_v7 < (int)puVar2[0x39]);
    }
    textFormatBuffer(&temp_v8,&LAB_00214b8c,*(unsigned short *)puVar2[puVar2[0x3e] + 10],
                 *(unsigned short *)puVar2[puVar2[0x3e] + 10]);
    asdLoadFileSyncDefault();
    puVar2[0x16] = (unsigned int)puVar4;
    textFormatBuffer(&temp_v8,&LAB_00214ba8,*(unsigned short *)puVar2[puVar2[0x3e] + 10],
                 *(unsigned short *)puVar2[puVar2[0x3e] + 10]);
    asdLoadFileSyncDefault();
    puVar2[0x17] = (unsigned int)puVar5;
    FUN_00275bc8();
    puVar2[0x18] = (unsigned int)puVar5;
    temp_v2 = tableGroupFindEntryIndex(puVar2[0x17],puVar2[puVar2[0x3e] + 10] + 0x16);
    scrScriptProcessStartEntry(puVar2[0x18],temp_v2);
    puVar4 = g_npcRoom;
    g_npcRoom[0x3b] = 0;
    puVar4[0x3c] = 4;
    FUN_00168980(0xa4);
    sysPlaySe(0xa4);
    break;
  case 4:
    temp_v7 = scrRunOpcodesStub(g_npcRoom[0x18]);
    if (temp_v7 != 2) break;
    scrScriptProcessDestroy(puVar2[0x18]);
    asdMemFree(puVar2[0x17]);
    asdMemFree(puVar2[0x16]);
    puVar4 = g_npcRoom;
    temp_v0 = *(short *)(puVar2 + 0x40);
    g_npcRoom[9] = 0;
    temp_v2 = dataTableGet(0x35,0);
    psVar7 = (short *)dataTableGetEntries();
    temp_v3 = dataTableGetCount(temp_v2);
    temp_v4 = 0;
    if (temp_v3 != 0) {
      do {
        if (*psVar7 == temp_v0) {
          puVar4[9] = (unsigned int)psVar7;
          break;
        }
        temp_v4 = temp_v4 + 1;
        psVar7 = psVar7 + 0x36;
      } while (temp_v4 < temp_v3);
    }
    puVar4 = g_npcRoom;
    temp_v0 = *(short *)(puVar2 + 0x40);
    g_npcRoom[10] = 0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    temp_v2 = dataTableGet(0x35,1);
    psVar7 = (short *)dataTableGetEntries();
    temp_v3 = dataTableGetCount(temp_v2);
    temp_v4 = 0;
    puVar4[0x3d] = 0;
    if (temp_v3 != 0) {
      do {
        if ((((*psVar7 == temp_v0) && ((psVar7[7] == 0 || (temp_v7 = gameFlagIsSet(), temp_v7 != 0)))) &&
            ((psVar7[8] == 0 || (temp_v7 = gameFlagIsSet(), temp_v7 != 0)))) &&
           (((psVar7[9] == 0 || (temp_v7 = gameFlagIsSet(), temp_v7 == 0)) &&
            ((psVar7[10] == 0 || (temp_v7 = gameFlagIsSet(), temp_v7 == 0)))))) {
          puVar4[puVar4[0x3d] + 10] = (unsigned int)psVar7;
          temp_v7 = puVar4[0x3d];
          puVar4[0x3d] = temp_v7 + 1;
          if (temp_v7 + 1 >= 8) break;
        }
        temp_v4 = temp_v4 + 1;
        psVar7 = psVar7 + 0x2a;
      } while (temp_v4 < temp_v3);
    }
    puVar4 = g_npcRoom;
    temp_v7 = puVar2[0x3d];
    if (temp_v7 < 2) goto LAB_00214b50;
    if (temp_v7 != 2) {
      if (temp_v7 == 3) {
        temp_v7 = puVar2[0x39];
        goto joined_r0x00214af8;
      }
      if (temp_v7 == 4) {
        temp_v7 = puVar2[0x39];
        goto joined_r0x00214af8;
      }
    }
    else {
      temp_v7 = puVar2[0x39];
joined_r0x00214af8:
      if (temp_v7 == 1) goto LAB_00214b50;
    }
    g_npcRoom[0x3b] = 0;
    puVar4[0x3c] = 1;
    FUN_00168980(0xa2);
    buttonHelpSetSelectedId(0xa2);
    break;
  case 5:
    temp_v7 = scrRunOpcodesStub(g_npcRoom[0x14]);
    if (temp_v7 != 2) break;
LAB_00214b50:
    slotSetRequest(0,10,0xff);
    slotSetRequest(1,10,0xff);
    puVar4 = g_npcRoom;
    g_npcRoom[0x3b] = 0;
    puVar4[0x3c] = 6;
    break;
  case 6:
    temp_v7 = slotIsReady(0);
    puVar4 = g_npcRoom;
    if (temp_v7 == 0) {
      g_npcRoom[0x3b] = 0;
      puVar4[0x3c] = 7;
    }
    break;
  case 7:
    if (DAT_005f1b70 != '\0') {
      if (DAT_005f1610 == 1) {
        asdSequenceRequest(6,0);
      }
      if (DAT_005f1610 == 3) {
        temp_v8 = romwright_piece_2_2((short)DAT_005f1b78,(short)DAT_005f1b74 - 200);
        asdSequenceRequest(0xe,&temp_v8,4);
      }
    }
    else {
      FUN_003d54f8(0,1);
      FUN_003d54f8(1);
    }
    temp_v7 = gameFlagIsSet(0x295);
    if ((temp_v7 != 0) && (temp_v7 = gameFlagIsSet(0x296), temp_v7 == 0)) {
      gameFlagSetValue(0x296,1);
    }
    temp_v7 = gameFlagIsSet(0x297);
    if ((temp_v7 != 0) && (temp_v7 = gameFlagIsSet(0x298), temp_v7 == 0)) {
      gameFlagSetValue(0x298,1);
    }
    npcRoomDestroy();
    return 0xffffffff;
  }
  if (puVar2[0x3c] != 0) {
    temp_v7 = 0;
    do {
      puVar10 = (unsigned short *)puVar2[temp_v7 + 10];
      if ((puVar10 != (unsigned short *)0x0) &&
         (temp_v5 = FUN_001801b8(*puVar10,*(unsigned char *)(puVar10 + 0x29)), temp_v5 == 0)) {
        if ((int)puVar2[temp_v7 * 3 + 0x42] < (int)puVar2[temp_v7 * 3 + 0x43]) {
          puVar2[temp_v7 * 3 + 0x42] = puVar2[temp_v7 * 3 + 0x42] + 1;
        }
        else if ((int)puVar2[temp_v7 * 3 + 0x44] < 5) {
          puVar2[temp_v7 * 3 + 0x44] = puVar2[temp_v7 * 3 + 0x44] + 1;
        }
      }
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < 8);
  }
  puVar2[0x3b] = puVar2[0x3b] + 1;
  puVar2[0x5a] = puVar2[0x5a] + 1;
  return 0;
}

} /* extern "C" */
