/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d99c0` (_code @ 0x1d99c0, 0x16f0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "font/PlaceWin.h"
extern "C" int FUN_0020ffe8(...);

extern "C" {

int asdModelSlotSetColor(...);
int asdModelSlotSetTint(...);
int FUN_0026e70c(...);
int FUN_00297684(void);
int FUN_002b827c(...);
int VectorSignedToFloat(...);

int asdMdlManagerMarkDestroy(void);
int gameStateClearFlag(void);
int gfxObjectDestroy(...);
int FUN_002636b0(void);
int FUN_002636d0(...);
int mapDepartSetTarget(...);
void mdlPartsRelease(void *model);
int touchMenuClose(void);
int buttonHelpRelease(void);
int uiFadeRelease(void);
int FUN_0029ae60(...);
int gameCounterAddSaturating(...);
void FUN_0029c2cc(...);
int soundChannelStopAll(...);
int asdWorkAreaReset(void);
int messageStatesSetFirst(...);
int scrScriptProcessDestroy(void);
int asdModelSlotRelease(...);
int asdMdlManagerDestroy(...);
int placeWinRelease(void);
int FUN_002bf810(...);
int FUN_002bff50(void);
int resourceListDestroy(void);
int asdMemFree(void);
int jobStop(...);
int asdSequenceRequest(...);
int useCounterSelectMode2(void);

int scrRunOpcodesStub(...);
int tmnlFindSlotForItem(...);
int FUN_0027f94c(...);
int FUN_00282bfc(...);
int FUN_00287030(...);
int scrScriptProcessStartEntry(...);
int FUN_00297060(...);
int FUN_0029b8ec(...);
int FUN_0029bb08(...);
int slotSetRequest(...);
int useCounterRelease(void);
int useCounterStart(void);
int FUN_0029e328(...);
int sortMenuCreate(...);
int FUN_002a03d8(...);
int FUN_002a5704(...);
int resOwnerRunNodeHandlers(...);
int buttonHelpSetPreset(...);
int textFormatBuffer(...);
int FUN_002c1658(...);
int FUN_002c29d8(...);
int FUN_002cf570(...);
int FUN_002fc008(...);

int FUN_002637c8(void);
int FUN_00263988(...);
int FUN_00281bb0(unsigned int);
int gameDataGetPlayerName(void);
int FUN_002898e4(void);
int buttonHelpCreate(void);
int playerModelLoadPart(unsigned int, unsigned int, int);
int playerModelListCreate(void);
int textEncodeFontSlot(...);
int FUN_00298d50(...);
int asdMdlManagerCreateLoaded(unsigned char *, int);
int soundChannelRequestIfEnabled(...);
int FUN_002a0428(...);
int FUN_002a04f0(int);
int FUN_002a09b4(unsigned char *, int);
int FUN_002a3ab0(void);
int FUN_002a4e98(void);
int cameraExportParameters(short [6], unsigned int);
int FUN_002c159c(unsigned int *);
int FUN_002c1e30(...);
int FUN_002c1edc(...);
int FUN_002c2044(unsigned int *, int);
int asdOperatorNew(void);
int FUN_002e2948(...);

typedef int romwright_code(...);
/* stack frame of void: 7 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned short spC6; /* 0xc6: local_c6 */
    unsigned short spC8; /* 0xc8: local_c8 */
} void_stack;

extern unsigned char LAB_001d9d8c; /* 0x1d9d8c */
extern unsigned char LAB_001d9da4; /* 0x1d9da4 */
extern unsigned char LAB_001d9dbc; /* 0x1d9dbc */
extern unsigned char LAB_001d9dd8; /* 0x1d9dd8 */
extern unsigned char LAB_001d9df4; /* 0x1d9df4 */
extern unsigned char LAB_001d9e0c; /* 0x1d9e0c */
extern unsigned char LAB_001d9e28; /* 0x1d9e28 */
extern unsigned char LAB_001d9e44; /* 0x1d9e44 */
extern unsigned char LAB_001d9e60; /* 0x1d9e60 */
extern unsigned char LAB_001da26c; /* 0x1da26c */
extern unsigned char LAB_001da298; /* 0x1da298 */
extern unsigned char LAB_001da2b0; /* 0x1da2b0 */
extern unsigned char LAB_001da2c8; /* 0x1da2c8 */
extern unsigned char DAT_003ff040; /* 0x3ff040 */
extern unsigned char DAT_004207d8; /* 0x4207d8 */
extern unsigned int *g_tmnl; /* 0x432ce0 */
extern unsigned short g_tmnlEntries; /* 0x432cf8 */
extern char s_Mikado_00432cfe[7]; /* 0x432cfe */
extern unsigned int g_gameState; /* 0x49f91c */
extern unsigned int DAT_0049f920; /* 0x49f920 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: asdMdlManagerMarkDestroy. */
/* Supplied declaration required: scrRunOpcodesStub. */
/* Supplied declaration required: tmnlFindSlotForItem. */
/* Supplied declaration required: gameStateClearFlag. */
/* Supplied declaration required: FUN_0020ffe8. */
extern int FUN_0025a030(unsigned int);
/* Supplied declaration required: gfxObjectDestroy. */
/* Supplied declaration required: asdModelSlotSetColor. */
/* Supplied declaration required: asdModelSlotSetTint. */
/* Supplied declaration required: FUN_002636b0. */
/* Supplied declaration required: FUN_002636d0. */
extern int effectAreAllCompletionChecksReady(unsigned int);
extern int effTimelineIsDone(unsigned int);
/* Supplied declaration required: FUN_002637c8. */
/* Supplied declaration required: FUN_00263988. */
extern unsigned int asdCameraLoadFromFile(unsigned char *);
/* Supplied declaration required: FUN_0026e70c. */
/* Supplied declaration required: mapDepartSetTarget. */
/* Supplied declaration required: FUN_0027f94c. */
/* Supplied declaration required: FUN_00281bb0. */
extern int screenFadeIsBusy(void);
/* Supplied declaration required: FUN_00282bfc. */
/* Supplied declaration required: FUN_00287030. */
extern int bgmGetStateById(unsigned int);
/* Supplied declaration required: gameDataGetPlayerName. */
/* Supplied declaration required: FUN_002898e4. */
/* Supplied declaration required: touchMenuClose. */
/* Supplied declaration required: buttonHelpCreate. */
/* Supplied declaration required: buttonHelpRelease. */
/* Supplied declaration required: uiFadeRelease. */
extern int objSlotsAllEmpty(unsigned int);
/* Supplied declaration required: playerModelLoadPart. */
/* Supplied declaration required: playerModelListCreate. */
extern unsigned int *_ZN9Obj4206e8C1Ev(void);
/* Supplied declaration required: textEncodeFontSlot. */
/* Supplied declaration required: scrScriptProcessStartEntry. */
/* Supplied declaration required: FUN_00297060. */
/* Supplied declaration required: FUN_00297684. */
/* Supplied declaration required: FUN_00298d50. */
extern unsigned int asdMdlManagerCreateSecondList(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_0029ae60. */
/* Supplied declaration required: FUN_0029b8ec. */
/* Supplied declaration required: FUN_0029bb08. */
/* Supplied declaration required: asdMdlManagerCreateLoaded. */
/* Supplied declaration required: gameCounterAddSaturating. */
/* Supplied declaration required: FUN_0029c2cc. */
/* Supplied declaration required: soundChannelStopAll. */
/* Supplied declaration required: slotSetRequest. */
extern int useCounterGetCurrentValue(void);
/* Supplied declaration required: useCounterRelease. */
extern int useCounterIsFinished(void);
/* Supplied declaration required: useCounterStart. */
/* Supplied declaration required: FUN_0029e328. */
/* Supplied declaration required: sortMenuCreate. */
/* Supplied declaration required: soundChannelRequestIfEnabled. */
/* Supplied declaration required: FUN_002a03d8. */
/* Supplied declaration required: FUN_002a0428. */
/* Supplied declaration required: FUN_002a04f0. */
/* Supplied declaration required: FUN_002a09b4. */
/* Supplied declaration required: FUN_002a3ab0. */
/* Supplied declaration required: asdWorkAreaReset. */
/* Supplied declaration required: FUN_002a4e98. */
/* Supplied declaration required: FUN_002a5704. */
/* Supplied declaration required: messageStatesSetFirst. */
/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: asdModelSlotRelease. */
/* Supplied declaration required: asdMdlManagerDestroy. */
/* Supplied declaration required: placeWinRelease. */
extern int modelHasLoadedAttachment(unsigned int);
/* Supplied declaration required: cameraExportParameters. */
/* Supplied declaration required: resOwnerRunNodeHandlers. */
/* Supplied declaration required: FUN_002b827c. */
/* Supplied declaration required: buttonHelpSetPreset. */
extern int padIsButtonRepeat(unsigned int);
/* Supplied declaration required: textFormatBuffer. */
extern int jobIsValid(unsigned int);
/* Supplied declaration required: FUN_002bf810. */
/* Supplied declaration required: FUN_002bff50. */
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: FUN_002c159c. */
/* Supplied declaration required: FUN_002c1658. */
/* Supplied declaration required: FUN_002c1e30. */
/* Supplied declaration required: FUN_002c1edc. */
/* Supplied declaration required: FUN_002c2044. */
/* Supplied declaration required: asdOperatorNew. */
/* Supplied declaration required: resourceListDestroy. */
/* Supplied declaration required: FUN_002c29d8. */
extern int FUN_002c2a04(unsigned int);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: jobStop. */
/* Supplied declaration required: asdSequenceRequest. */
extern unsigned int asdLoadFileSyncDefault(unsigned char *);
extern unsigned int asdLoadFileSync(unsigned char *, unsigned char *, unsigned int, unsigned int);
extern int FUN_002c79c4(unsigned int);
/* Supplied declaration required: useCounterSelectMode2. */
/* Supplied declaration required: FUN_002cf570. */
/* Supplied declaration required: FUN_002e2948. */
/* Supplied declaration required: FUN_002fc008. */
extern int FUN_00335118(unsigned int);


unsigned int FUN_001d99c0(void)

{
/* irregular: 5 goto(s); irregular input(s): in_fpscr, in_s0; 82 native warning(s); review required */
  short temp_v0;
  unsigned int *puVar2;
  char temp_v1;
  int temp_v2;
  unsigned int *puVar5;
  unsigned char *puVar6;
  unsigned int *puVar7;
  unsigned int temp_v3;
  unsigned int *puVar9;
  char *pcVar10;
  unsigned int temp_v4;
  short *psVar12;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int in_fpscr;
  int in_s0;
  short temp_v7 [6];
  unsigned char temp_v8 [12];
  unsigned char temp_v9 [12];
  int temp_v10;
  unsigned char temp_v11 [4];
  unsigned int temp_v12;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned int temp_v13;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int temp_v14;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int temp_v15;
  
  puVar2 = g_tmnl;
  psVar12 = temp_v7;
  if ((unsigned int)g_tmnl[4] >= 2) {
    cameraExportParameters(temp_v7,g_tmnl[g_tmnl[0x154] + 0xf]);
    FUN_002c159c(puVar2 + 0x12);
    FUN_002c1edc(puVar2 + 0x12,temp_v7,temp_v8,temp_v9);
    FUN_002c1e30(puVar2 + 0x12,1);
    temp_v6 = 0;
    in_s0 = temp_v10;
    do {
      if (*(char *)(puVar2 + temp_v6 * 3 + 0x15b) != '\0') {
        FUN_00281bb0(puVar2[temp_v6 * 3 + 0x15a]);
        temp_v2 = FUN_002c79c4(puVar2[temp_v6 * 3 + 0x15a]);
        if (temp_v2 != 0) {
          *(unsigned char *)(puVar2 + temp_v6 * 3 + 0x15b) = 0;
        }
      }
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 4);
  }
  puVar7 = g_tmnl;
  temp_v6 = puVar2[4];
  if (temp_v6 != 10) {
    if (9 >= temp_v6) {
      switch(temp_v6) {
      case 0:
        temp_v6 = 0x100;
        asdOperatorNew();
        puVar5 = (unsigned int *)0x0;
        if (temp_v6 != 0) {
          puVar5 = (unsigned int *)_ZN9Obj4206e8C1Ev();
          *puVar5 = (unsigned int)&DAT_004207d8;
        }
        puVar7[0xc] = (unsigned int)puVar5;
        playerModelListCreate();
        temp_v4 = 0;
        do {
          playerModelLoadPart(puVar7[0xc],temp_v4 & 0xff,0x1c0);
          temp_v4 = temp_v4 + 1;
        } while ((int)temp_v4 < 3);
        temp_v6 = (int)*(char *)((unsigned int)*(unsigned char *)((int)puVar7 + 9) * 0x24 + 0x432cfd);
        puVar7[0x158] = temp_v6;
        if (temp_v6 != 0) {
          puVar6 = &LAB_001d9d8c;
          asdMdlManagerCreateLoaded(&LAB_001d9d8c,7);
          puVar7[0xe] = (unsigned int)puVar6;
          FUN_002a0428();
          puVar9 = (unsigned int *)puVar7[0xe];
          *puVar9 = *puVar9 & 0xfffffffd;
          *(unsigned char *)(*(int *)(puVar9[2] + 0x2c) + 0x1f6) = 1;
        }
        else {
          puVar6 = &LAB_001da26c;
          asdMdlManagerCreateLoaded(&LAB_001da26c,7);
          puVar7[0xd] = (unsigned int)puVar6;
          FUN_002a0428();
          puVar9 = (unsigned int *)puVar7[0xd];
          *puVar9 = *puVar9 & 0xfffffffd;
          *(unsigned char *)(*(int *)(puVar9[2] + 0x2c) + 0x1f6) = 1;
        }
        temp_v3 = asdCameraLoadFromFile(&LAB_001d9da4);
        puVar7[0xf] = temp_v3;
        temp_v3 = asdCameraLoadFromFile(&LAB_001d9dbc);
        puVar7[0x10] = temp_v3;
        temp_v3 = asdCameraLoadFromFile(&LAB_001d9dd8);
        puVar7[0x154] = 0xffffffff;
        puVar7[0x11] = temp_v3;
        FUN_002a09b4(&LAB_001d9df4,0);
        FUN_002a04f0(0);
        FUN_00263988(puVar7,2);
        FUN_002c2044(puVar7 + 0x12,1);
        cameraExportParameters(temp_v7,puVar7[puVar7[0x154] + 0xf]);
        FUN_002c159c(puVar7 + 0x12);
        FUN_002c1edc(puVar7 + 0x12,temp_v7,temp_v8,temp_v9);
        FUN_002c1e30(puVar7 + 0x12,1);
        FUN_00298d50(puVar7 + 0x12);
        FUN_002637c8();
        FUN_002898e4();
        buttonHelpCreate();
        temp_v3 = asdLoadFileSync(&LAB_001d9e0c,temp_v11,1,0x80);
        puVar7[0x159] = temp_v3;
        temp_v3 = asdLoadFileSync(&LAB_001d9e28,temp_v11,1,0x80);
        puVar7[0x15c] = temp_v3;
        temp_v3 = asdLoadFileSync(&LAB_001d9e44,temp_v11,1,0x80);
        puVar7[0x15f] = temp_v3;
        temp_v3 = asdLoadFileSync(&LAB_001d9e60,temp_v11,1,0x80);
        puVar7[0x162] = temp_v3;
        temp_v12 = 0;
        uStack_7c = 0x42c80000;
        uStack_78 = 0;
        uStack_74 = 0x3f800000;
        uStack_70 = 0;
        uStack_6c = 0x42c80000;
        uStack_68 = 0;
        uStack_64 = 0x3f800000;
        temp_v15 = 0x3f800000;
        temp_v13 = 0;
        uStack_5c = 0x42c80000;
        uStack_58 = 0;
        uStack_54 = 0x3f800000;
        temp_v14 = 0;
        uStack_4c = 0x42c80000;
        uStack_48 = 0;
        temp_v6 = 0;
        do {
          temp_v3 = puVar7[temp_v6 * 3 + 0x159];
          FUN_002a4e98();
          puVar7[temp_v6 * 3 + 0x15a] = temp_v3;
          FUN_002a3ab0();
          temp_v2 = temp_v6 + 1;
          *(unsigned char *)(puVar7 + temp_v6 * 3 + 0x15b) = 0;
          temp_v6 = temp_v2;
        } while (temp_v2 < 4);
        *(unsigned char *)((int)puVar7 + 6) = 0;
        temp_v6 = gameFlagIsSet(0x668);
        if (((temp_v6 != 0) && (temp_v6 = gameFlagIsSet(0x1d7), temp_v6 == 0)) ||
           (temp_v6 = gameFlagIsSet(0x263), temp_v6 != 0)) {
          *(unsigned char *)((int)puVar7 + 6) = 1;
        }
        temp_v6 = gameFlagIsSet(0x13b);
        if ((((temp_v6 != 0) || (temp_v6 = gameFlagIsSet(0x1a0), temp_v6 != 0)) ||
            (temp_v6 = gameFlagIsSet(0x1ba), temp_v6 != 0)) &&
           ((temp_v6 = gameFlagIsSet(0x18c), temp_v6 == 0 &&
            (temp_v6 = gameFlagIsSet(0x1d8), temp_v6 == 0)))) {
          *(unsigned char *)((int)puVar7 + 6) = 1;
        }
        *(unsigned char *)((int)puVar7 + 7) = 0;
        temp_v6 = gameFlagIsSet(500);
        if ((temp_v6 != 0) || (temp_v6 = gameFlagIsSet(0x1e1), temp_v6 != 0)) {
          *(unsigned char *)((int)puVar7 + 7) = 1;
        }
        *(unsigned char *)(puVar7 + 2) = 0;
        temp_v6 = gameFlagIsSet(499);
        if ((temp_v6 != 0) || (temp_v6 = gameFlagIsSet(0x1d8), temp_v6 != 0)) {
          *(unsigned char *)(puVar7 + 2) = 1;
        }
        temp_v3 = gameDataGetPlayerName();
        textEncodeFontSlot(0x33,temp_v3);
        temp_v6 = bgmGetStateById(0x1000058);
        if (temp_v6 != 1) {
          soundChannelRequestIfEnabled(0x1000058,0,0x3c);
        }
        puVar2[4] = 2;
        puVar2[5] = 0;
        FUN_002e2948(1);
        break;
      case 1:
        temp_v6 = padIsButtonRepeat(4);
        if (temp_v6 != 0) {
          temp_v4 = *(unsigned char *)((int)puVar2 + 9) - 1;
          if (temp_v4 >= 0x14) {
            temp_v1 = '\0';
          }
          else if ((int)temp_v4 < 0) {
            temp_v1 = '\x13';
          }
          else {
            temp_v1 = *(unsigned char *)((int)puVar2 + 9) - 1;
          }
          *(char *)((int)puVar2 + 9) = temp_v1;
        }
        temp_v6 = padIsButtonRepeat(3);
        if (temp_v6 != 0) {
          if (*(unsigned char *)((int)puVar2 + 9) + 1 >= 0x14) {
            temp_v1 = '\0';
          }
          else {
            temp_v1 = *(unsigned char *)((int)puVar2 + 9) + 1;
          }
          *(char *)((int)puVar2 + 9) = temp_v1;
        }
        temp_v6 = 0;
        FUN_002c1658(0,1);
        if (temp_v6 != 0) {
          puVar2[4] = 0;
          puVar2[5] = 0;
          FUN_00282bfc(0,0xff);
          FUN_00282bfc(1,0xff);
        }
        break;
      case 2:
        temp_v6 = objSlotsAllEmpty(puVar2[0xc]);
        if (temp_v6 != 0) {
          FUN_002a5704(puVar2[0xc],0);
          FUN_0029bb08(puVar2[0xc]);
          puVar2[6] = g_gameState;
          puVar2[7] = DAT_0049f920;
          temp_v3 = asdLoadFileSyncDefault(&LAB_001da298);
          puVar2[8] = temp_v3;
          temp_v3 = asdLoadFileSyncDefault(&LAB_001da2b0);
          puVar2[9] = temp_v3;
          temp_v6 = puVar2[8];
          FUN_00297060(temp_v6,temp_v3);
          puVar2[10] = temp_v6;
          *(unsigned int *)(temp_v6 + 0x108) = 2;
          if (*(unsigned char *)((int)puVar2 + 9) != 0) {
            pcVar10 = s_Mikado_00432cfe + (unsigned int)*(unsigned char *)((int)puVar2 + 9) * 0x24;
          }
          else {
            pcVar10 = (char *)gameDataGetPlayerName();
          }
          textEncodeFontSlot(0x28,pcVar10);
          temp_v3 = asdLoadFileSyncDefault(&LAB_001da2c8);
          puVar2[0xb] = temp_v3;
          temp_v6 = FUN_002c2a04(0);
          if (temp_v6 == 3) {
            FUN_002c29d8(0,10,0xff);
          }
          temp_v6 = FUN_002c2a04(1);
          if (temp_v6 == 3) {
            FUN_002c29d8(1,10,0xff);
          }
          FUN_002fc008(puVar2);
          if (*(unsigned char *)((int)g_tmnl + 9) != 0) {
            pcVar10 = s_Mikado_00432cfe + (unsigned int)*(unsigned char *)((int)g_tmnl + 9) * 0x24;
          }
          else {
            pcVar10 = (char *)gameDataGetPlayerName();
          }
          textFormatBuffer(temp_v7,&DAT_003ff040,pcVar10);
          placeWinStartText(reinterpret_cast<const u8 *>(temp_v7));
          puVar2[5] = 0;
          scrScriptProcessStartEntry(puVar2[10],
                       *(unsigned int *)((unsigned int)*(unsigned char *)((int)puVar2 + 9) * 0x24 + 0x432d18));
          puVar2[4] = 5;
          buttonHelpSetPreset(0xbd);
        }
        break;
      case 3:
        temp_v6 = scrRunOpcodesStub(puVar2[10]);
        if (temp_v6 != 2) break;
        scrScriptProcessStartEntry(puVar2[10],*(unsigned int *)((unsigned int)*(unsigned char *)((int)puVar2 + 9) * 0x24 + 0x432d18))
        ;
        temp_v3 = 5;
        puVar2[4] = temp_v3;
        break;
      case 5:
        temp_v6 = scrRunOpcodesStub(puVar2[10]);
        if (temp_v6 != 2) break;
        puVar2[5] = 0;
        if (puVar2[0x179] != 0) {
          buttonHelpSetPreset(0xa6);
          sortMenuCreate(0xffffffff,2);
          FUN_002cf570(puVar2[6],puVar2[7]);
          temp_v6 = 0;
          if (temp_v6 < (int)puVar2[0x179]) {
            do {
              if (*(short *)puVar2[temp_v6 + 0x165] >= 201) {
                temp_v3 = 0x3d;
              }
              else {
                switch(*(short *)puVar2[temp_v6 + 0x165]) {
                default:
                  goto LAB_001da45c;
                case 1:
                  temp_v3 = 0x34;
                  break;
                case 2:
                  temp_v3 = 0x35;
                  break;
                case 3:
                  temp_v3 = 0x36;
                  break;
                case 4:
                  temp_v3 = 0x37;
                  break;
                case 5:
                  temp_v3 = 0x38;
                  break;
                case 6:
                  temp_v3 = 0x39;
                  break;
                case 7:
                  temp_v3 = 0x3a;
                  break;
                case 8:
                  temp_v3 = 0x3b;
                  break;
                case 10:
                  temp_v3 = 0x40;
                  break;
                case 0x16:
                  temp_v3 = 0x41;
                  break;
                case 0x17:
                  temp_v3 = 0x42;
                  break;
                case 0x19:
                  temp_v3 = 0x45;
                  break;
                case 0x1a:
                  temp_v3 = 0x43;
                  break;
                case 0x1b:
                  temp_v3 = 0x44;
                  break;
                case 0x1c:
                  temp_v3 = 0x46;
                  break;
                case 0x1f:
                  temp_v3 = 0x47;
                  break;
                case 0x20:
                  temp_v3 = 0x48;
                  break;
                case 0x21:
                  temp_v3 = 0x49;
                  break;
                case 0x22:
                  temp_v3 = 0x4a;
                }
              }
              FUN_0029e328(temp_v3);
LAB_001da45c:
              temp_v6 = temp_v6 + 1;
            } while (temp_v6 < (int)puVar2[0x179]);
          }
          useCounterStart();
          puVar2[4] = 6;
          break;
        }
        buttonHelpSetPreset(0xa5);
        scrScriptProcessStartEntry(puVar2[10],0x1a);
        temp_v3 = 0x16;
        puVar2[4] = temp_v3;
        break;
      case 6:
        if (puVar2[5] != 0) {
          if (puVar2[5] == 1) {
            temp_v0 = *(short *)puVar2[puVar2[3] + 0x165];
            if ((temp_v0 < 200) || (*(char *)((int)puVar2 + 6) == '\0')) {
              if (temp_v0 != 0x17) {
                if (temp_v0 == 0x16) {
                  temp_v1 = *(char *)(puVar2 + 2);
                  goto joined_r0x001da624;
                }
              }
              else {
                temp_v1 = *(char *)((int)puVar2 + 7);
joined_r0x001da624:
                if (temp_v1 != '\0') goto LAB_001da638;
              }
              buttonHelpSetPreset(0xbd);
              scrScriptProcessStartEntry(puVar2[10],0x17);
              puVar2[4] = 0x62;
              puVar2[5] = 0;
            }
            else {
LAB_001da638:
              scrScriptProcessStartEntry(puVar2[10],0x19);
              puVar2[4] = 0x15;
              puVar2[5] = 0;
            }
          }
        }
        else {
          scrRunOpcodesStub(puVar2[10]);
          temp_v6 = useCounterIsFinished();
          if (temp_v6 != 0) {
            useCounterRelease();
            puVar2[4] = 99;
            puVar2[5] = 0;
            slotSetRequest(0,10,0xff);
            slotSetRequest(1,10,0xff);
          }
          else {
            temp_v6 = useCounterGetCurrentValue();
            if (temp_v6 != 0x4b) {
              puVar7 = puVar2;
              tmnlFindSlotForItem(puVar2,temp_v6);
              puVar2[3] = (unsigned int)puVar7;
              if (*(short *)puVar2[(int)puVar7 + 0x165] >= 0xc9) {
                temp_v3 = gameDataGetPlayerName();
                textEncodeFontSlot(0x28,temp_v3);
              }
              else {
                textEncodeFontSlot(0x28,(short *)puVar2[(int)puVar7 + 0x165] + 3);
              }
              puVar2[5] = 1;
            }
          }
        }
        temp_v6 = FUN_00335118(puVar2[0xc]);
        if ((temp_v6 != 0x13) || (FUN_0027f94c(puVar2[0xc]), in_s0 < 0x41a00000)) break;
        FUN_00287030(puVar2[0xc]);
        temp_v3 = puVar2[0xc];
        FUN_0029bb08(temp_v3);
        break;
      case 8:
        temp_v6 = FUN_0025a030(puVar2[0xc]);
        if (temp_v6 != 0) {
          FUN_0020ffe8(puVar2[0xc],0);
        }
        temp_v6 = 6;
        FUN_002c1658(6,2);
        if (temp_v6 == 0) {
          temp_v6 = 9;
          FUN_002c1658(9,2);
          if (temp_v6 == 0) {
            temp_v6 = 1;
            FUN_002c1658();
            if (temp_v6 == 0) {
              temp_v6 = effTimelineIsDone(puVar2[puVar2[0x154] + 0xf]);
              if ((temp_v6 == 0) || (temp_v6 = effectAreAllCompletionChecksReady(puVar2[puVar2[0x158] + 0xd]), temp_v6 == 0)
                 ) {
                temp_v6 = (int)*(float *)(*(int *)(puVar2[puVar2[0x154] + 0xf] + 4) + 0x38);
                if ((temp_v6 >= 6) && (temp_v2 = FUN_002c2a04(0), temp_v2 == 3)) {
                  FUN_002a03d8(0,8);
                }
                if (temp_v6 == 0xb4) {
                  *(unsigned char *)(puVar2 + 0x15b) = 1;
                  temp_v3 = puVar2[0x15a];
                }
                else {
                  if (temp_v6 != 0x13f) {
                    if (temp_v6 == 0x144) {
                      FUN_0029b8ec(puVar2[0xc]);
                      break;
                    }
                    if (temp_v6 != 0x17f) break;
                    puVar2[4] = puVar2[4] + 1;
                    puVar2[5] = 0;
                    break;
                  }
                  *(unsigned char *)(puVar2 + 0x15e) = 1;
                  temp_v3 = puVar2[0x15d];
                }
                resOwnerRunNodeHandlers(temp_v3);
              }
              else {
                puVar2[4] = puVar2[4] + 1;
                puVar2[5] = 0;
              }
              break;
            }
          }
        }
        if (*(int *)(*(int *)(puVar2[puVar2[0x154] + 0xf] + 4) + 0x38) >= 0x40c00001) {
          puVar2[4] = 9;
          puVar2[5] = 0;
          *(unsigned char *)(puVar2 + 0x157) = 1;
        }
        break;
      case 9:
        if (*(char *)(puVar2 + 0x157) != '\0') {
          slotSetRequest(0,10,0xff);
          slotSetRequest(1,10,0xff);
        }
        else {
          slotSetRequest(0,0x14,0xff);
          slotSetRequest(1,0x14,0xff);
        }
        puVar2[4] = puVar2[4] + 1;
        puVar2[5] = 0;
      }
    }
    else if (temp_v6 != 0x15) {
      if (temp_v6 < 0x15) {
        if (temp_v6 != 0xb) {
          if (temp_v6 != 0xc) {
            if (temp_v6 != 0xd) {
              if (temp_v6 == 0x14) {
                if (*(unsigned char *)((int)g_tmnl + 9) != 0) {
                  pcVar10 = s_Mikado_00432cfe + (unsigned int)*(unsigned char *)((int)g_tmnl + 9) * 0x24;
                }
                else {
                  pcVar10 = (char *)gameDataGetPlayerName();
                }
                textFormatBuffer(temp_v7,&DAT_003ff040,pcVar10);
                placeWinStartText(reinterpret_cast<const u8 *>(temp_v7));
                scrScriptProcessStartEntry(puVar2[10],0x18);
                puVar2[4] = 5;
                buttonHelpSetPreset(0xbd);
                FUN_002636d0(0);
                puVar2[5] = 0;
              }
            }
            else {
              temp_v6 = screenFadeIsBusy();
              if ((temp_v6 == 0) &&
                 ((*(char *)(puVar2 + 0x157) != '\0' || ((int)puVar2[0x156] >= 0x87)))) {
                puVar2[4] = 0x14;
                puVar2[5] = 0;
              }
            }
            goto LAB_001dacc8;
          }
        }
        else {
          if (puVar2[0x158] != 0) {
            temp_v3 = asdMdlManagerCreateSecondList(&LAB_001d9d8c,7);
            puVar2[0xe] = temp_v3;
          }
          else {
            temp_v3 = asdMdlManagerCreateSecondList(&LAB_001da26c,7);
            puVar2[0xd] = temp_v3;
          }
          puVar2[4] = puVar2[4] + 1;
        }
        temp_v6 = modelHasLoadedAttachment(puVar2[puVar2[0x158] + 0xd]);
        if (temp_v6 == 0) goto LAB_001dacc8;
        FUN_002a0428(puVar2[puVar2[0x158] + 0xd],1);
        puVar9 = (unsigned int *)puVar2[puVar2[0x158] + 0xd];
        *puVar9 = *puVar9 & 0xfffffffd;
        *(unsigned char *)(*(int *)(puVar9[2] + 0x2c) + 0x1f6) = 1;
        if (*(char *)(puVar2 + 0x157) != '\0') {
          FUN_00263988(puVar2,2);
          *(unsigned char *)(puVar2 + 0x155) = 1;
          puVar2[0x156] = 0x78;
          FUN_002a5704(puVar2[0xc],0x1a);
          FUN_002a03d8(0,10);
          FUN_002a03d8(1,10);
        }
        else {
          FUN_00263988(puVar2,1);
          *(unsigned char *)(puVar2 + 0x155) = 1;
          puVar2[0x156] = 0;
          FUN_002a5704(puVar2[0xc],0x1a);
          FUN_002a03d8(0,0x14);
          FUN_002a03d8(1,0x14);
        }
        puVar2[4] = puVar2[4] + 1;
        puVar2[5] = 0;
      }
      else if (temp_v6 != 0x16) {
        if (temp_v6 != 0x62) {
          if ((temp_v6 == 99) && (temp_v6 = screenFadeIsBusy(), temp_v6 == 0)) {
            if (puVar2[10] != 0) {
              scrScriptProcessDestroy();
              puVar2[10] = 0;
            }
            if (puVar2[8] != 0) {
              asdMemFree();
              puVar2[8] = 0;
            }
            if (puVar2[9] != 0) {
              asdMemFree();
              puVar2[9] = 0;
            }
            if (puVar2[0xb] != 0) {
              asdMemFree();
              puVar2[0xb] = 0;
            }
            FUN_002bff50();
            asdModelSlotRelease(0);
            puVar7 = g_tmnl;
            asdWorkAreaReset();
            if (puVar7[0xc] != 0) {
              mdlPartsRelease(reinterpret_cast<void *>(puVar7[0xc]));
              if ((int *)puVar7[0xc] != (int *)0x0) {
                (**(romwright_code **)(*(int *)puVar7[0xc] + 4))();
              }
              puVar7[0xc] = 0;
            }
            temp_v6 = 0;
            do {
              if (puVar7[temp_v6 + 0xd] != 0) {
                if (0 < *(int *)(*(int *)(puVar7[temp_v6 + 0xd] + 8) + 0xc)) {
                  asdMdlManagerMarkDestroy();
                }
                asdMdlManagerDestroy(puVar7[temp_v6 + 0xd]);
                puVar7[temp_v6 + 0xd] = 0;
              }
              temp_v6 = temp_v6 + 1;
            } while (temp_v6 < 2);
            temp_v6 = 0;
            do {
              if (puVar7[temp_v6 + 0xf] != 0) {
                if (puVar7[0x154] == temp_v6) {
                  FUN_0029c2cc(puVar7[temp_v6 + 0xf],0);
                }
                gfxObjectDestroy(puVar7[temp_v6 + 0xf]);
                puVar7[temp_v6 + 0xf] = 0;
              }
              temp_v6 = temp_v6 + 1;
            } while (temp_v6 < 3);
            placeWinRelease();
            uiFadeRelease();
            buttonHelpRelease();
            temp_v6 = 0;
            do {
              if (puVar7[temp_v6 * 3 + 0x15a] != 0) {
                resourceListDestroy();
                puVar7[temp_v6 * 3 + 0x15a] = 0;
              }
              if (puVar7[temp_v6 * 3 + 0x159] != 0) {
                asdMemFree();
                puVar7[temp_v6 * 3 + 0x159] = 0;
              }
              temp_v6 = temp_v6 + 1;
            } while (temp_v6 < 4);
            messageStatesSetFirst(1);
            if (*(char *)((int)puVar2 + 5) != '\0') {
              FUN_002a03d8(0,1);
              FUN_002a03d8(1);
              soundChannelStopAll(0xf);
              puVar2 = g_tmnl;
              temp_v6 = jobIsValid(*g_tmnl);
              if (temp_v6 != 0) {
                jobStop(*puVar2,0);
              }
            }
            else {
              gameStateClearFlag();
              temp_v6 = (unsigned int)*(unsigned char *)((int)puVar2 + 9) * 0x24;
              temp_v0 = (&g_tmnlEntries)[(unsigned int)*(unsigned char *)((int)puVar2 + 9) * 0x12];
              if (temp_v0 >= 200) {
                temp_v7[0] = temp_v0 - 200;
                temp_v7[1] = 5;
                temp_v5 = 4;
                temp_v3 = 0xe;
              }
              else {
                mapDepartSetTarget((int)temp_v0,(int)*(char *)(temp_v6 + 0x432cfa),
                             (int)*(char *)(temp_v6 + 0x432cfb));
                temp_v5 = 0;
                psVar12 = (short *)0x0;
                temp_v3 = 6;
              }
              asdSequenceRequest(temp_v3,psVar12,temp_v5);
            }
            FUN_002e2948(0);
            return 0xffffffff;
          }
        }
        else {
          temp_v6 = scrRunOpcodesStub(puVar2[10]);
          if (temp_v6 == 2) {
            gameCounterAddSaturating(0x21,1);
            *(unsigned char *)(puVar2 + 0x157) = 0;
            FUN_002bf810(0x10000a8);
            FUN_002636b0();
            buttonHelpSetPreset(0x57);
            puVar2[4] = 8;
            puVar2[5] = 0;
            if (*(char *)(puVar2 + 0x155) != '\0') {
              FUN_0029ae60(puVar2[0xc]);
              FUN_0020ffe8(puVar2[0xc],0x13);
              *(unsigned char *)(puVar2 + 0x155) = 0;
            }
            FUN_00282bfc(0,0xff);
            *(unsigned char *)(puVar2 + 0x15b) = 0;
            *(unsigned char *)(puVar2 + 0x15e) = 0;
            *(unsigned char *)(puVar2 + 0x161) = 0;
            *(unsigned char *)(puVar2 + 0x164) = 0;
            FUN_00263988(puVar2,0);
            FUN_002a5704(puVar2[0xc],0x13);
            temp_v3 = puVar2[0xc];
            FUN_0029bb08(temp_v3);
          }
        }
      }
      else {
        temp_v6 = scrRunOpcodesStub(puVar2[10]);
        if (temp_v6 == 2) {
          puVar2[4] = 99;
          puVar2[5] = 0;
          slotSetRequest(0,10,0xff);
          slotSetRequest(1,10,0xff);
        }
      }
    }
    else {
      temp_v6 = scrRunOpcodesStub(puVar2[10]);
      if (temp_v6 == 2) {
        puVar2[4] = 6;
        puVar2[5] = 0;
        useCounterSelectMode2();
      }
    }
  }
  else {
    temp_v6 = screenFadeIsBusy();
    if (temp_v6 == 0) {
      touchMenuClose();
      useCounterRelease();
      FUN_002636d0(0);
      FUN_0029b8ec(puVar2[0xc]);
      *(unsigned char *)(puVar2 + 0x15b) = 0;
      *(unsigned char *)(puVar2 + 0x15e) = 0;
      temp_v6 = puVar2[3];
      puVar2[6] = (int)*(short *)puVar2[temp_v6 + 0x165];
      puVar2[7] = (int)*(char *)(puVar2[temp_v6 + 0x165] + 2);
      temp_v2 = 0;
      do {
        if (&g_tmnlEntries + temp_v2 * 0x12 == (unsigned short *)puVar2[temp_v6 + 0x165]) {
          *(char *)((int)puVar2 + 9) = (char)temp_v2;
          break;
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 0x14);
      FUN_002fc008(puVar2);
      asdMdlManagerDestroy(puVar2[puVar2[0x158] + 0xd]);
      puVar2[puVar2[0x158] + 0xd] = 0;
      puVar2[0x158] = (int)*(char *)((unsigned int)*(unsigned char *)((int)puVar2 + 9) * 0x24 + 0x432cfd);
      puVar2[4] = puVar2[4] + 1;
      puVar2[5] = 0;
      FUN_002b827c(3);
    }
  }
LAB_001dacc8:
  if (puVar2[0xc] != 0) {
    FUN_00297684();
  }
  if (*(char *)(puVar2 + 0x155) != '\0') {
    temp_v2 = puVar2[0x156];
    temp_v6 = temp_v2 + 1;
    puVar2[0x156] = temp_v6;
    if (temp_v6 < 0x65) {
      temp_v2 = temp_v2 - 0x3b;
      VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_0026e70c(temp_v2);
      asdModelSlotSetTint(0);
      VectorSignedToFloat(puVar2[0x156] - 0x3c,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_0026e70c(puVar2[0x156] - 0x3c);
      asdModelSlotSetColor(0);
    }
    if (puVar2[0x156] == 0x5a) {
      FUN_002bf810(0x10001fc);
      *(unsigned char *)(puVar2 + 0x161) = 1;
      resOwnerRunNodeHandlers(puVar2[0x160]);
    }
    if (puVar2[0x156] == 0x7b) {
      FUN_002bf810(0x10000a9);
      *(unsigned char *)(puVar2 + 0x164) = 1;
      resOwnerRunNodeHandlers(puVar2[0x163]);
    }
    if (puVar2[0x156] == 0x87) {
      FUN_0029ae60(puVar2[0xc]);
      FUN_002a5704(puVar2[0xc],0x1a);
      FUN_0029bb08(puVar2[0xc]);
    }
    if (((int)puVar2[0x156] >= 0x88) && (temp_v6 = FUN_0025a030(puVar2[0xc]), temp_v6 != 0)) {
      FUN_0020ffe8(puVar2[0xc],0);
      FUN_00263988(puVar2,2);
      *(unsigned char *)(puVar2 + 0x155) = 0;
    }
  }
  return 0;
}

} /* extern "C" */
