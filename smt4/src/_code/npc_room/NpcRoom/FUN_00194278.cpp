/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00194278` (_code @ 0x194278, 0x898 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int npcRoomDestroy(void);
int FUN_00290d5c(...);

int FUN_0019e0c0(...);
int FUN_00290ed8(int);
int bgmFadeOut(int);
int buttonHelpRelease(void);
int uiFadeRelease(void);
int FUN_00296e90(void);
int scrScriptProcessStartEntry(...);
int FUN_00297060(...);
int soundChannelStopAll(int);
int FUN_0029c3c0(...);
int soundChannelRequestIfEnabled(int, int, int);
int FUN_002a03d8(...);
int fileSlotFree(int);
int scrScriptProcessDestroy(...);
int asdTMTexTableReleaseNode(int, int);
int FUN_002b71d0(unsigned int, int);
int FUN_002b827c(...);
int buttonHelpSetPreset(...);
int FUN_002be624(...);
int asdMemFree(...);
int jobStop(unsigned int, int);
int asdSequenceRequest(...);
int FUN_00323f40(void);
int eventTexAddHandle(...);

/* stack frame of void: 6 slot(s), 22 byte(s) */
typedef struct {
    unsigned short sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp68; /* 0x68: local_68 */
} void_stack;

extern unsigned char LAB_00194a44; /* 0x194a44 */
extern unsigned char LAB_00194a60; /* 0x194a60 */
extern unsigned int *g_npcRoom; /* 0x44d198 */
extern int DAT_0049f930; /* 0x49f930 */
extern signed char DAT_0049fc14; /* 0x49fc14 */
extern unsigned int DAT_0049fc18; /* 0x49fc18 */
extern unsigned int DAT_0049fc1c; /* 0x49fc1c */

#ifndef ROMWRIGHT_PIECE_2_2_DEFINED
#define ROMWRIGHT_PIECE_2_2_DEFINED
#define romwright_piece_2_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned short)(upper) << 16) | (unsigned short)(lower)))
#endif
extern int FUN_00192654(unsigned int);
/* Supplied declaration required: FUN_0019e0c0. */
/* Supplied declaration required: npcRoomDestroy. */
/* Supplied declaration required: FUN_00290d5c. */
extern unsigned int tableGroupFindEntryIndex(unsigned int, int);
extern int FUN_00290e78(void);
extern int FUN_00290e9c(void);
extern int FUN_00290eb0(void);
/* Supplied declaration required: FUN_00290ed8. */
/* Supplied declaration required: bgmFadeOut. */
/* Supplied declaration required: buttonHelpRelease. */
/* Supplied declaration required: uiFadeRelease. */
/* Supplied declaration required: FUN_00296e90. */
/* Supplied declaration required: scrScriptProcessStartEntry. */
/* Supplied declaration required: FUN_00297060. */
extern int FUN_002973d8(void);
/* Supplied declaration required: soundChannelStopAll. */
/* Supplied declaration required: FUN_0029c3c0. */
/* Supplied declaration required: soundChannelRequestIfEnabled. */
/* Supplied declaration required: FUN_002a03d8. */
/* Supplied declaration required: fileSlotFree. */
extern int asdTMTexTableNodeIsLoaded(unsigned int, unsigned short);
/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: asdTMTexTableReleaseNode. */
/* Supplied declaration required: FUN_002b71d0. */
/* Supplied declaration required: FUN_002b827c. */
/* Supplied declaration required: buttonHelpSetPreset. */
/* Supplied declaration required: FUN_002be624. */
extern int gameFlagIsSet(void);
extern unsigned int dataTableGetCount(unsigned int);
extern short *dataTableGetEntries(void);
extern unsigned int dataTableGet(unsigned int, unsigned int);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: jobStop. */
/* Supplied declaration required: asdSequenceRequest. */
extern unsigned int FUN_002c5c04(unsigned int *);
/* Supplied declaration required: FUN_00323f40. */
/* Supplied declaration required: eventTexAddHandle. */


unsigned int FUN_00194278(void)

{
/* irregular: 1 goto(s); 26 native warning(s); review required */
  short temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  short *psVar7;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned char temp_v8;
  unsigned int temp_v9;
  unsigned int uStack_64;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned short temp_v14;
  
  puVar3 = g_npcRoom;
  switch(g_npcRoom[0x3c]) {
  case 0:
    psVar7 = (short *)(g_npcRoom + 0x40);
    temp_v5 = asdTMTexTableNodeIsLoaded(2,*(unsigned short *)((int)g_npcRoom + 0x102));
    if (temp_v5 != 0) {
      FUN_002a03d8(0,1);
      FUN_002a03d8(1);
      temp_v5 = 0;
      do {
        if (((*(short *)(puVar3[9] + temp_v5 * 0x18 + 0x24) != 0) &&
            (temp_v2 = gameFlagIsSet(), temp_v2 != 0)) &&
           ((*(short *)(puVar3[9] + temp_v5 * 0x18 + 0x26) == 0 ||
            (temp_v2 = gameFlagIsSet(), temp_v2 == 0)))) {
          temp_v9 = (unsigned int)*(unsigned short *)(puVar3[9] + temp_v5 * 0x18 + 0x28);
          uStack_64 = 0xffffffff;
          puVar3 = (unsigned int *)(temp_v5 * 0x18 + 0x2a + puVar3[9]);
          temp_v10 = *puVar3;
          temp_v11 = puVar3[1];
          temp_v12 = puVar3[2];
          temp_v13 = puVar3[3];
          temp_v14 = *(unsigned short *)(puVar3 + 4);
          asdSequenceRequest(4,&temp_v9,0x20);
          puVar3 = g_npcRoom;
          if (g_npcRoom != (unsigned int *)0x0) {
            FUN_00323f40();
            if (*(short *)(puVar3 + 0x40) == 0x22) {
              soundChannelStopAll(0xf);
              bgmFadeOut(0x3c);
            }
            asdTMTexTableReleaseNode(2,*(unsigned short *)((int)puVar3 + 0x102));
            temp_v5 = 0;
            do {
              if (puVar3[temp_v5 + 10] != 0) {
                jobStop(puVar3[temp_v5 + 1],0);
              }
              temp_v5 = temp_v5 + 1;
            } while (temp_v5 < 8);
            scrScriptProcessDestroy(puVar3[0x14]);
            scrScriptProcessDestroy(puVar3[0x15]);
            asdMemFree(puVar3[0x13]);
            asdMemFree(puVar3[0x12]);
            jobStop(*puVar3,0);
            asdMemFree(puVar3);
            g_npcRoom = (unsigned int *)0x0;
            fileSlotFree(0x35);
            fileSlotFree(0x1a);
            buttonHelpRelease();
            uiFadeRelease();
          }
          return 0xffffffff;
        }
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < 3);
      if (*psVar7 == 0x22) {
        FUN_00290ed8(0x1e);
        soundChannelRequestIfEnabled(0x100005e,0,0x3c);
      }
      puVar3[0x41] = 0;
      temp_v5 = 0;
      if (temp_v5 < (int)puVar3[0x39]) {
        do {
          temp_v2 = 0;
          do {
            temp_v7 = (int)*(short *)((int)puVar3 + temp_v2 * 2 + temp_v5 * 0x10 + 100);
            if (-1 < temp_v7) {
              FUN_002b71d0(puVar3[temp_v7 + 1],0);
            }
            temp_v2 = temp_v2 + 1;
          } while (temp_v2 < 8);
          temp_v5 = temp_v5 + 1;
        } while (temp_v5 < (int)puVar3[0x39]);
      }
      puVar2 = g_npcRoom;
      g_npcRoom[0x3b] = 0;
      puVar2[0x3c] = 1;
    }
    break;
  case 1:
    temp_v5 = FUN_00192654(0);
    if (temp_v5 != 0) break;
    temp_v5 = puVar3[0x3d];
    if (temp_v5 < 1) {
      temp_v5 = scrScriptProcessStartEntry(puVar3[0x14],2);
      if (temp_v5 != 0) {
        buttonHelpSetPreset(0xa2);
        puVar2 = g_npcRoom;
        g_npcRoom[0x3b] = 0;
        puVar2[0x3c] = 5;
      }
      break;
    }
    if (temp_v5 != 1) {
      if (temp_v5 != 2) {
        if (temp_v5 < 2) break;
      }
      else if (puVar3[0x39] == 1) goto LAB_001945e8;
      temp_v5 = scrScriptProcessStartEntry(puVar3[0x14],0);
      if (temp_v5 != 0) {
        scrScriptProcessStartEntry(puVar3[0x15],1);
        puVar2 = g_npcRoom;
        g_npcRoom[0x3b] = 0;
        puVar2[0x3c] = 2;
      }
    }
    else {
LAB_001945e8:
      puVar3[0x3e] = 0;
      puVar3[0x3f] = 0;
      puVar2 = g_npcRoom;
      g_npcRoom[0x3b] = 0;
      puVar2[0x3c] = 3;
    }
    break;
  case 2:
    temp_v5 = FUN_00290eb0();
    if ((temp_v5 != 0) && (temp_v5 = 0, 0 < (int)puVar3[0x39])) {
      do {
        temp_v2 = FUN_00290e9c();
        temp_v7 = 0;
        do {
          temp_v1 = (int)*(short *)((int)puVar3 + temp_v7 * 2 + temp_v5 * 0x10 + 100);
          if (-1 < temp_v1) {
            FUN_002b71d0(puVar3[temp_v1 + 1],temp_v2 == temp_v5);
          }
          temp_v7 = temp_v7 + 1;
        } while (temp_v7 < 8);
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < (int)puVar3[0x39]);
    }
    FUN_0019e0c0(puVar3[0x14]);
    FUN_0019e0c0(puVar3[0x15]);
    temp_v5 = FUN_00290e78();
    if (temp_v5 == 0) break;
    FUN_00296e90();
    temp_v5 = FUN_002973d8();
    if (-1 < temp_v5) {
      temp_v5 = FUN_002973d8();
      puVar3[0x3f] = temp_v5;
      puVar3[0x3e] = (int)*(short *)(puVar3 + temp_v5 * 4 + 0x19);
      puVar2 = g_npcRoom;
      g_npcRoom[0x3b] = 0;
      puVar2[0x3c] = 3;
      puVar3[0x41] = puVar3[0x3f];
      break;
    }
    FUN_0029c3c0(0,10,0xff);
    puVar2 = g_npcRoom;
    g_npcRoom[0x3b] = 0;
    puVar2[0x3c] = 6;
    break;
  case 3:
    temp_v5 = 0;
    do {
      temp_v2 = (int)*(short *)((int)puVar3 + temp_v5 * 2 + puVar3[0x3f] * 0x10 + 100);
      if (-1 < temp_v2) {
        eventTexAddHandle(puVar3[temp_v2 + 1]);
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 8);
    FUN_002be624(&temp_v9,&LAB_00194a44,*(unsigned short *)puVar3[puVar3[0x3e] + 10],
                 *(unsigned short *)puVar3[puVar3[0x3e] + 10]);
    temp_v3 = FUN_002c5c04(&temp_v9);
    puVar3[0x16] = temp_v3;
    FUN_002be624(&temp_v9,&LAB_00194a60,*(unsigned short *)puVar3[puVar3[0x3e] + 10],
                 *(unsigned short *)puVar3[puVar3[0x3e] + 10]);
    temp_v3 = FUN_002c5c04(&temp_v9);
    puVar3[0x17] = temp_v3;
    FUN_00297060(temp_v3,puVar3[0x16]);
    puVar3[0x18] = temp_v3;
    temp_v3 = tableGroupFindEntryIndex(puVar3[0x17],puVar3[puVar3[0x3e] + 10] + 0x16);
    scrScriptProcessStartEntry(puVar3[0x18],temp_v3);
    puVar2 = g_npcRoom;
    g_npcRoom[0x3b] = 0;
    puVar2[0x3c] = 4;
    FUN_002b827c(0xa2);
    buttonHelpSetPreset(0xa2);
    break;
  case 4:
    temp_v5 = FUN_0019e0c0(g_npcRoom[0x18]);
    if (temp_v5 != 2) break;
    scrScriptProcessDestroy(puVar3[0x18]);
    asdMemFree(puVar3[0x17]);
    asdMemFree(puVar3[0x16]);
    puVar2 = g_npcRoom;
    temp_v0 = *(short *)(puVar3 + 0x40);
    g_npcRoom[9] = 0;
    temp_v3 = dataTableGet(0x35,0);
    psVar7 = (short *)dataTableGetEntries();
    temp_v4 = dataTableGetCount(temp_v3);
    temp_v6 = 0;
    if (temp_v4 != 0) {
      do {
        if (*psVar7 == temp_v0) {
          puVar2[9] = (unsigned int)psVar7;
          break;
        }
        temp_v6 = temp_v6 + 1;
        psVar7 = psVar7 + 0x36;
      } while (temp_v6 < temp_v4);
    }
    puVar2 = g_npcRoom;
    temp_v0 = *(short *)(puVar3 + 0x40);
    g_npcRoom[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    temp_v3 = dataTableGet(0x35,1);
    psVar7 = (short *)dataTableGetEntries();
    temp_v4 = dataTableGetCount(temp_v3);
    temp_v6 = 0;
    puVar2[0x3d] = 0;
    if (temp_v4 != 0) {
      do {
        if ((((*psVar7 == temp_v0) && ((psVar7[7] == 0 || (temp_v5 = gameFlagIsSet(), temp_v5 != 0)))) &&
            ((psVar7[8] == 0 || (temp_v5 = gameFlagIsSet(), temp_v5 != 0)))) &&
           (((psVar7[9] == 0 || (temp_v5 = gameFlagIsSet(), temp_v5 == 0)) &&
            ((psVar7[10] == 0 || (temp_v5 = gameFlagIsSet(), temp_v5 == 0)))))) {
          puVar2[puVar2[0x3d] + 10] = (unsigned int)psVar7;
          temp_v5 = puVar2[0x3d];
          puVar2[0x3d] = temp_v5 + 1;
          if (temp_v5 + 1 >= 8) break;
        }
        temp_v6 = temp_v6 + 1;
        psVar7 = psVar7 + 0x6a;
      } while (temp_v6 < temp_v4);
    }
    puVar2 = g_npcRoom;
    temp_v5 = puVar3[0x3d];
    if (temp_v5 >= 2) {
      temp_v8 = temp_v5 == 2;
      if (temp_v8) {
        temp_v5 = puVar3[0x39];
      }
      if (!temp_v8 || temp_v5 != 1) {
        g_npcRoom[0x3b] = 0;
        puVar2[0x3c] = 1;
        FUN_002b827c(0xa0);
        FUN_00290d5c(0xa0);
        break;
      }
    }
    FUN_0029c3c0(0,10,0xff);
    puVar2 = g_npcRoom;
    g_npcRoom[0x3b] = 0;
    puVar2[0x3c] = 6;
    break;
  case 5:
    temp_v5 = FUN_0019e0c0(g_npcRoom[0x14]);
    if (temp_v5 != 2) break;
    FUN_0029c3c0(0,10,0xff);
    puVar2 = g_npcRoom;
    g_npcRoom[0x3b] = 0;
    puVar2[0x3c] = 6;
    break;
  case 6:
    temp_v5 = FUN_00192654(0);
    puVar2 = g_npcRoom;
    if (temp_v5 == 0) {
      g_npcRoom[0x3b] = 0;
      puVar2[0x3c] = 7;
    }
    break;
  case 7:
    if (DAT_0049fc14 != '\0') {
      if (DAT_0049f930 == 1) {
        asdSequenceRequest(6,0);
      }
      if (DAT_0049f930 == 3) {
        temp_v9 = romwright_piece_2_2((short)DAT_0049fc1c,(short)DAT_0049fc18 - 200);
        asdSequenceRequest(0xe,&temp_v9,4);
      }
    }
    else {
      FUN_002a03d8(0,1);
      FUN_002a03d8(1);
    }
    npcRoomDestroy();
    return 0xffffffff;
  }
  puVar3[0x3b] = puVar3[0x3b] + 1;
  return 0;
}

} /* extern "C" */
