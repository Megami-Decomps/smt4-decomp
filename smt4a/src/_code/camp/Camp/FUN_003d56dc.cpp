/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d56dc` (_code @ 0x3d56dc, 0x34dc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "map/mapRndMaze.h"
#include "gamedata/FlagValueIsPositive.h"
#include "camp/CampCec/CampCecView.h"

extern "C" {
// The fields of g_gameState this function uses.
struct GameStateView {
    u8 pad000[0x38];
    unsigned char f005f1634; /* 0x038 */
    u8 pad039[0x3ba];
    unsigned char f005f19ef; /* 0x3f3 */
};
extern GameStateView g_gameState;


int jobStop(...);
int asdMemFree(...);
int dataTableFree(...);
int FUN_002bf4f4(...);
int FUN_002e26a4(void);
int FUN_0031d088(void);
int FUN_00330b74(void);
int campCommonBgRelease(void);
int FUN_0037a2e4(void);
int campButtonHelpRelease(void);
int partyPanelDestroy(void);
int FUN_0039c0e4(void);
int freeTexTable24(void);
int FUN_003a76b8(void);
int FUN_003b01e8(void);
int aocScriptReleaseTableAndReset(void);

int FUN_00202ea4(void);
int FUN_0021545c(void);
int campReleaseRegisteredTouchRegions(void);
int useCounterStart(void);
int campCecScriptStart(...);
int FUN_002bf534(...);
int FUN_002e2404(...);
int campCecSetObjectValue(...);
int FUN_00319aec(...);
int campCecDestroyOverlay(...);
int FUN_0034aae4(void);
int sub68OwnerCall4(void);
int useCounterRelease(void);
int clearFlags310To31F(void);
int campCecSetValue(...);
int messageDismissNumericBanner(...);
int saveLoadStartDefaultWindow(void);
int saveLoadStartWindowWithArgument(...);
int FUN_003d0bc0(...);
int flag0CSet(...);

int FUN_0014afa8(void);
int FUN_001517b4(void);
int workCommandRefreshActiveSlots(void);
int uiSpriteSetKeyframe(...);
int uiSpriteSetImageKeyframe(...);
int slotSetRequest(...);
int FUN_001fdde8(void);
int FUN_00215bd0(void);
int bgmFadeOut(...);
int FUN_0022e774(void);
int campReleaseSlotTouchRegions(void);
int msgWindowReset(void);
int uniteResetPreview(void);
int processQueryChain(void);
int FUN_002a7b74(void);
int FUN_002ab804(void);
int frameTexSetValue(...);
int FUN_002c8538(...);
int dataTableAndTexRelease(void);
int FUN_00312d6c(void);
int uniteValueRefresh(void);
int FUN_0031fb04(void);
int lmapMainCallIfActive(void);
int gauntletAppMenuKillTask(void);
int FUN_003b078c(void);
int soundChannelStopAll(...);
int FUN_003d54f8(...);

int eventQueueAddUniqueIfValid(...);
int dataTable8FindRecord(void);
int FUN_001ffe84(void);
int FUN_0020dc1c(void);
int FUN_0021b274(...);
int campResetScreen(void);
int FUN_0023b45c(...);
int uniteStartOrQueueRequest(...);
int campRebuildEnabledFlagList(...);
int FUN_0026f7f0(void);
int statusPanelSetOpen(...);
int uniteSetMode(...);
int FUN_002e738c(...);
int FUN_0031d890(void);
int FUN_0031db84(...);
int FUN_0032d0c8(...);
int FUN_003492dc(void);
int callbackSceneDestroyResources(void);
int FUN_0035dbd4(...);
int arousalSkillOpen(...);
int obj25CRefreshFlags(...);
int FUN_0037e1b0(...);
int FUN_003a7788(void);
int FUN_003a7c00(...);
int FUN_003d386c(...);
int FUN_003daf0c(...);

int campChangeState(...);
int FUN_00215bbc(void);
int configDestroy(void);
int playLogDestroy(void);
int FUN_00284ee4(...);
int campShowSelectedEntryHelp(...);
int menuItemPlaySe(...);
int FUN_0031f718(...);
int statusDisplayBindUnitRecord(...);
int FUN_003343c0(...);
int objBInitBlock19D0(...);
int FUN_0033449c(...);
int FUN_003423e8(...);
int FUN_003dc628(void);

int FUN_00163aa4(...);
int FUN_001643b4(...);
int sysPlaySe(...);
int asdTMTexTableEntryAt(...);
int buttonHelpSetText(...);
int FUN_0020d700(void);
void campSetSpriteAnimationPreset(int, int, int, unsigned int);
int ifTouchRegionAdd(...);
int FUN_002add8c(void);
int widgetSubCallIfVisible(...);
int FUN_002c39dc(...);
int FUN_002e26c4(...);
int rt_memclr(...);
int FUN_002f3bc4(...);
int FUN_002f78a0(...);
int FUN_00331380(...);
int FUN_003343f0(...);
int screenSetColor670(int, int, int, int);
int FUN_0035a094(...);
int FUN_0037c8e4(...);
int messageRestoreBanner(void);
int FUN_003da8f4(...);

/* stack frame of void: 3 slot(s), 10 byte(s) */
typedef struct {
    unsigned short spF6; /* 0xf6: local_f6 */
    unsigned int sp150; /* 0x150: local_150 */
    unsigned int sp158; /* 0x158: local_158 */
} void_stack;

extern unsigned int *g_camp; /* 0x57f108 */
extern unsigned int DAT_00588e2c; /* 0x588e2c */
extern signed char g_campState; /* 0x5e1eb0 */
extern unsigned char DAT_005e1eb1; /* 0x5e1eb1 */
extern unsigned char DAT_005e1eb2; /* 0x5e1eb2 */
extern unsigned char DAT_005e1eb3; /* 0x5e1eb3 */
extern signed char DAT_005e1eb4; /* 0x5e1eb4 */
extern unsigned short DAT_005e1eb6; /* 0x5e1eb6 */
extern unsigned short DAT_005e1eb8; /* 0x5e1eb8 */
extern unsigned char DAT_005e1eba; /* 0x5e1eba */



/* Supplied declaration required: FUN_0014afa8. */
/* Supplied declaration required: FUN_001517b4. */
extern int gameFlagsGetBlock(void);
/* Supplied declaration required: jobStop. */
extern int querySlotHasHandle(void);
/* Supplied declaration required: FUN_00163aa4. */
extern int jobIsValid(unsigned int);
extern int FUN_00163e84(unsigned int);
/* Supplied declaration required: eventQueueAddUniqueIfValid. */
/* Supplied declaration required: workCommandRefreshActiveSlots. */
extern unsigned char ifTouchGetSelectionMode(void);
/* Supplied declaration required: FUN_001643b4. */
extern int lmapMainIsRunning(void);
extern unsigned int ifTouchGetButtonHelpValue(void);
/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: asdTMTexTableEntryAt. */
/* Supplied declaration required: uiSpriteSetKeyframe. */
/* Supplied declaration required: uiSpriteSetImageKeyframe. */
/* Supplied declaration required: dataTable8FindRecord. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: buttonHelpSetText. */
extern int gameGetSlotTable(void);
/* Supplied declaration required: dataTableFree. */
/* Supplied declaration required: slotSetRequest. */
/* Supplied declaration required: FUN_001fdde8. */
/* Supplied declaration required: FUN_001ffe84. */
/* Supplied declaration required: FUN_00202ea4. */
extern int uniteStateIsDone(void);
/* Supplied declaration required: campChangeState. */
/* Supplied declaration required: FUN_0020d700. */
/* Supplied declaration required: FUN_0020dc1c. */
extern int bibleIsClosed(void);
extern int configIsClosed(void);
/* Supplied declaration required: FUN_0021545c. */
/* Supplied declaration required: FUN_00215bbc. */
/* Supplied declaration required: FUN_00215bd0. */
/* Supplied declaration required: FUN_0021b274. */
/* Supplied declaration required: bgmFadeOut. */
/* Supplied declaration required: campResetScreen. */
/* Supplied declaration required: configDestroy. */
extern int playLogIsClosed(void);
extern int FUN_0022a030(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0022e774. */
/* Supplied declaration required: campReleaseRegisteredTouchRegions. */
extern int campCecHasObject(void);
extern int campCecIsScriptRunning(void);
extern int messageMainIsWindowActive(void);
/* Supplied declaration required: playLogDestroy. */
extern int useCounterIsFinished(void);
/* Supplied declaration required: useCounterStart. */
/* Supplied declaration required: FUN_0023b45c. */
extern int uniteNotBusy(void);
/* Supplied declaration required: uniteStartOrQueueRequest. */
/* Supplied declaration required: campRebuildEnabledFlagList. */
extern int gameDataBlocksGetTable(void);
/* Supplied declaration required: campReleaseSlotTouchRegions. */
/* Supplied declaration required: FUN_0026f7f0. */
/* Supplied declaration required: campCecScriptStart. */
/* Supplied declaration required: ifTouchRegionAdd. */
/* Supplied declaration required: msgWindowReset. */
extern int FUN_00284e94(void);
/* Supplied declaration required: FUN_00284ee4. */
/* Supplied declaration required: uniteResetPreview. */
/* Supplied declaration required: campShowSelectedEntryHelp. */
/* Supplied declaration required: processQueryChain. */
extern int FUN_002a21e8(void);
extern int FUN_002a2814(void);
extern int resourceRunOperationIfUnblocked(unsigned int *);
extern unsigned int FUN_002a4878(unsigned int *);
extern int FUN_002a4894(unsigned int *);
extern int messageGetChoiceResult(void);
/* Supplied declaration required: statusPanelSetOpen. */
extern int FUN_002a73f8(void);
extern int FUN_002a7410(void);
extern int FUN_002a746c(void);
/* Supplied declaration required: FUN_002a7b74. */
extern int uniteRequestGet(void);
extern int uniteGetState(void);
/* Supplied declaration required: FUN_002ab804. */
/* Supplied declaration required: uniteSetMode. */
/* Supplied declaration required: FUN_002add8c. */
/* Supplied declaration required: FUN_002bf4f4. */
extern int campCecEditIsOpen(void);
/* Supplied declaration required: FUN_002bf534. */
extern int FUN_002bfd04(void);
/* Supplied declaration required: frameTexSetValue. */
extern int FUN_002c2bd0(void);
/* Supplied declaration required: widgetSubCallIfVisible. */
extern int objectApplyIfUnblocked(unsigned int *);
/* Supplied declaration required: FUN_002c39dc. */
extern int useCounterGetCurrentValue(void);
/* Supplied declaration required: FUN_002c8538. */
extern int FUN_002e07f4(void);
/* Supplied declaration required: dataTableAndTexRelease. */
extern int campCecEditIsActive(void);
extern int FUN_002e2054(void);
/* Supplied declaration required: FUN_002e2404. */
/* Supplied declaration required: campCecSetObjectValue. */
/* Supplied declaration required: FUN_002e26a4. */
/* Supplied declaration required: FUN_002e26c4. */
extern int FUN_002e27b8(void);
extern unsigned long long runtimeShiftLeftWide(unsigned int, unsigned int, int);
/* Supplied declaration required: rt_memclr. */
/* Supplied declaration required: FUN_002e738c. */
extern int FUN_002ebce4(void);
extern int recordValueIsZero(void);
extern int FUN_002f153c(void);
extern int uniteIsReady(void);
/* Supplied declaration required: FUN_002f3bc4. */
/* Supplied declaration required: FUN_002f78a0. */
/* Supplied declaration required: menuItemPlaySe. */
/* Supplied declaration required: FUN_00312d6c. */
/* Supplied declaration required: FUN_00319aec. */
/* Supplied declaration required: FUN_0031d088. */
extern int objIsNotInState0xF(void);
/* Supplied declaration required: FUN_0031d890. */
/* Supplied declaration required: FUN_0031db84. */
/* Supplied declaration required: FUN_0031f718. */
extern int uiQuestGetPanelMode(void);
/* Supplied declaration required: uniteValueRefresh. */
/* Supplied declaration required: FUN_0031fb04. */
/* Supplied declaration required: lmapMainCallIfActive. */
/* Supplied declaration required: FUN_0032d0c8. */
/* Supplied declaration required: campCecDestroyOverlay. */
extern int FUN_003309e0(void);
/* Supplied declaration required: FUN_00330b74. */
/* Supplied declaration required: FUN_00331380. */
extern int gameGlobalsGetState(void);
/* Supplied declaration required: statusDisplayBindUnitRecord. */
/* Supplied declaration required: FUN_003343c0. */
/* Supplied declaration required: FUN_003343f0. */
/* Supplied declaration required: objBInitBlock19D0. */
/* Supplied declaration required: FUN_0033449c. */
extern int uiQuestGetActive(void);
extern char uiQuestGetState(void);
extern int uiQuestGetMode(void);
/* Supplied declaration required: FUN_003423e8. */
extern int FUN_0034919c(void);
/* Supplied declaration required: FUN_003492dc. */
extern int partyPanelIsActive(void);
extern unsigned int FUN_0034a9ac(void);
/* Supplied declaration required: FUN_0034aae4. */
/* Supplied declaration required: sub68OwnerCall4. */
/* Supplied declaration required: screenSetColor670. */
extern int FUN_0035a028(void);
extern int campCecEditIsStateSixteen(void);
/* Supplied declaration required: FUN_0035a094. */
/* Supplied declaration required: callbackSceneDestroyResources. */
/* Supplied declaration required: campCommonBgRelease. */
/* Supplied declaration required: useCounterRelease. */
extern int FUN_0035db94(void);
/* Supplied declaration required: FUN_0035dbd4. */
/* Supplied declaration required: clearFlags310To31F. */
/* Supplied declaration required: arousalSkillOpen. */
extern int FUN_0036cf78(void);
extern unsigned char FUN_0036d134(void);
extern unsigned int dataTable15Sub0FindEntry(int);
/* Supplied declaration required: obj25CRefreshFlags. */
extern unsigned short FUN_00372140(void);
extern int uiQuestGetStep(void);
/* Supplied declaration required: FUN_0037a2e4. */
/* Supplied declaration required: campButtonHelpRelease. */
/* Supplied declaration required: FUN_0037c8e4. */
extern int gauntletAppMenuHasActiveFlags(void);
extern int obj14IsZero(void);
/* Supplied declaration required: partyPanelDestroy. */
extern int partyPanelHasMembers(void);
/* Supplied declaration required: FUN_0037e1b0. */
extern int titleConfigIsClosed(void);
extern int campCecGet(void);
/* Supplied declaration required: campCecSetValue. */
/* Supplied declaration required: messageRestoreBanner. */
/* Supplied declaration required: messageDismissNumericBanner. */
/* Supplied declaration required: gauntletAppMenuKillTask. */
extern int saveLoadUIHasResult(void);
extern int aocDataBlockHasEntries(void);
extern int flagAt4IsClear(void);
/* Supplied declaration required: FUN_0039c0e4. */
/* Supplied declaration required: saveLoadStartDefaultWindow. */
/* Supplied declaration required: saveLoadStartWindowWithArgument. */
extern int FUN_0039c608(void);
extern unsigned short uiQuestRunEnabledAction(void);
/* Supplied declaration required: freeTexTable24. */
/* Supplied declaration required: FUN_003a76b8. */
/* Supplied declaration required: FUN_003a7788. */
/* Supplied declaration required: FUN_003a7c00. */
extern int FUN_003ae848(void);
/* Supplied declaration required: FUN_003b01e8. */
/* Supplied declaration required: FUN_003b078c. */
/* Supplied declaration required: aocScriptReleaseTableAndReset. */
extern unsigned char FUN_003b6f00(void);
extern int byteArr5Get4(void);
extern unsigned char FUN_003c0dcc(void);
extern int sceneHolderUpdate(void);
/* Supplied declaration required: FUN_003d0bc0. */
/* Supplied declaration required: soundChannelStopAll. */
/* Supplied declaration required: FUN_003d386c. */
/* Supplied declaration required: FUN_003d54f8. */
/* Supplied declaration required: FUN_003da8f4. */
/* Supplied declaration required: FUN_003daf0c. */
/* Supplied declaration required: FUN_003dc628. */
extern int FUN_003deee4(unsigned int);
extern unsigned char FUN_003e42f0(void);
extern int loadSlotIsLoaded(unsigned int);
extern int flagSetAllCoveredBy(unsigned int);
/* Supplied declaration required: flag0CSet. */
extern int mapMainIsBusy(void);


unsigned int FUN_003d56dc(void)

{
/* irregular: 61 unstructured edge(s); 3 goto(s); 125 native warning(s); review required */
  char temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  unsigned char temp_v2;
  unsigned short temp_v3;
  int temp_v4;
  unsigned int *puVar7;
  unsigned int *puVar8;
  unsigned int temp_v5;
  unsigned int *puVar10;
  unsigned int temp_v6;
  unsigned int *puVar12;
  unsigned int *puVar13;
  unsigned int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  unsigned int *puVar19;
  unsigned char *pbVar20;
  char *pcVar21;
  int temp_v12;
  unsigned char temp_v13;
  unsigned long long temp_v14;
  unsigned int temp_v15;
  unsigned int uStack_154;
  unsigned int temp_v16;
  unsigned int uStack_14c;
  unsigned short temp_v17;
  
  puVar2 = g_camp;
  puVar7 = &temp_v15;
  puVar8 = &temp_v15;
  puVar10 = &temp_v15;
  puVar13 = &temp_v15;
  if (g_camp[9] == 0x11) {
    temp_v4 = g_camp[7];
    if (!((temp_v4 == 4 || temp_v4 == 5) || temp_v4 == 0x47)) {
      temp_v4 = useCounterIsFinished();
      FUN_003343f0(temp_v4 == 0);
    }
    else {
      FUN_003343f0(1);
    }
  }
  FUN_00163aa4(puVar2 + 0x1dc);
  FUN_00163aa4(puVar2 + 0x1ff);
  FUN_00163aa4(g_camp + 0x6a5);
  if (g_camp != (unsigned int *)0x0) {
    puVar12 = g_camp + 0x6c8;
    switch(*(unsigned char *)puVar12) {
    case 1:
      temp_v4 = FUN_00163aa4(g_camp + 0x682);
      if (temp_v4 != 0) {
        *(unsigned char *)puVar12 = 2;
      }
      break;
    case 3:
      temp_v4 = FUN_00163aa4(g_camp + 0x682);
      if (temp_v4 != 0) {
        *(unsigned char *)puVar12 = 4;
      }
    }
  }
  temp_v2 = ifTouchGetSelectionMode();
  temp_v4 = puVar2[7];
  *(unsigned char *)(puVar2 + 0xe) = temp_v2;
  puVar12 = g_camp;
  if ((((temp_v4 != 7 && temp_v4 != 8) && ((temp_v4 != 9 && temp_v4 != 0x1e) && temp_v4 != 0x1f)) &&
      (*(short *)(puVar2 + 0x1aa) != 3)) && (*(short *)(puVar2 + 0x1aa) != 4)) {
    temp_v4 = widgetSubCallIfVisible(g_camp + 0x10);
    FUN_00163aa4(puVar12 + 0x196);
    if ((*(short *)(puVar12 + 0x259) != 2) && (*(short *)(puVar12 + 0x259) != 10)) {
      temp_v10 = 0;
      if (temp_v10 < temp_v4) {
        do {
          if (temp_v10 <= puVar12[5] - 1) {
            FUN_00163aa4(puVar12 + temp_v10 * 0x23 + 0x245);
          }
          temp_v10 = temp_v10 + 1;
        } while (temp_v10 < temp_v4);
      }
    }
    else {
      temp_v10 = 0;
      while (temp_v4 = temp_v4 - 1, -1 < temp_v4) {
        if (temp_v10 <= puVar12[5] - 1) {
          FUN_00163aa4(puVar12 + temp_v4 * 0x23 + 0x245);
        }
        temp_v10 = temp_v10 + 1;
      }
    }
    temp_v4 = 0;
    do {
      if (temp_v4 <= (int)puVar2[6]) {
        FUN_00163aa4(puVar2 + temp_v4 * 0x23 + 0x3a3);
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 0xd);
    FUN_00163aa4(puVar2 + 0x65f);
    puVar2[6] = puVar2[6] + 1;
    FUN_00163aa4(puVar2 + 0x58d);
    temp_v4 = uniteStateIsDone();
    if (((temp_v4 == 0) && (temp_v4 = uniteGetState(), temp_v4 == 3)) &&
       (temp_v4 = uniteIsReady(), temp_v4 != 0)) {
      FUN_00163aa4(puVar2 + 0x222);
    }
  }
  puVar12 = g_camp;
  switch(puVar2[7]) {
  case 0:
    temp_v6 = ifTouchGetButtonHelpValue();
    puVar2[0xc5d] = temp_v6;
    FUN_002add8c();
    puVar2[9] = 6;
    puVar2[7] = 1;
    FUN_0037c8e4(1,0);
    messageRestoreBanner();
    FUN_002f78a0(puVar2);
    break;
  case 1:
    puVar2[7] = 2;
    puVar2[5] = 0;
    break;
  case 2:
    temp_v4 = FUN_00163e84(0);
    if (temp_v4 != 0) {
      temp_v6 = FUN_002a4878(puVar2 + 0x10);
      temp_v4 = FUN_003da8f4((int)*(char *)(puVar2 + 0x29),temp_v6);
      if ((((temp_v4 != 0x48 && temp_v4 != 0x49) && (temp_v4 != 0x4a && temp_v4 != 0x4b)) &&
          ((temp_v4 != 0x4c && temp_v4 != 0x4d) && temp_v4 != 0x4e)) ||
         (temp_v10 = FUN_0036cf78(), temp_v10 != 0)) {
        temp_v7 = puVar2[9];
        puVar2[7] = temp_v7;
        temp_v13 = *(char *)((int)puVar2 + 0xb7) != '\0';
        if (temp_v13) {
          temp_v7 = (unsigned int)*(unsigned char *)((int)puVar2 + 0xb9);
        }
        if (!temp_v13 || temp_v7 == 3) {
          temp_v10 = FUN_0035a094();
          if (temp_v10 == 0) {
            temp_v6 = dataTable15Sub0FindEntry(temp_v4);
            buttonHelpSetText(temp_v6,0xf4f4f4ff);
          }
          if (temp_v4 == 0x2f) {
            screenSetColor670(0x48c722ff,1,0x12,0x15);
          }
        }
        temp_v4 = FUN_002e26c4(temp_v4);
        puVar12 = g_camp;
        if ((*(unsigned char *)(temp_v4 + 3) & 0xf) != 0) {
          pcVar21 = (char *)((int)g_camp + 0x1b6d);
          if (*pcVar21 == '\0') {
            temp_v4 = 0;
            do {
              *(unsigned short *)((int)puVar12 + temp_v4 * 2 + 0x1b54) = 0xffff;
              *(unsigned short *)((int)puVar12 + temp_v4 * 6 + 0x1b5a) = 0xffff;
              *(unsigned short *)((int)puVar12 + temp_v4 * 6 + 0x1b5c) = 0xffff;
              *(unsigned short *)((int)puVar12 + temp_v4 * 6 + 0x1b5e) = 0xffff;
              puVar7 = &temp_v15;
              FUN_002f3bc4(&temp_v15,temp_v4,0);
              if (puVar7 != (unsigned int *)0x0) {
                temp_v10 = asdTMTexTableEntryAt(0x1a,temp_v4 + 0x87);
                temp_v3 = FUN_001643b4(0x1a,temp_v4 + 0x87);
                *(unsigned short *)((int)puVar12 + temp_v4 * 2 + 0x1b54) = temp_v3;
                temp_v12 = asdTMTexTableEntryAt(0x1a,0x7f);
                temp_v11 = (int)(short)(*(short *)(temp_v10 + 8) + *(short *)(temp_v12 + 8));
                ifTouchRegionAdd(temp_v11,(int)(short)(*(short *)(temp_v10 + 10) + *(short *)(temp_v12 + 10)),
                             (int)**(short **)(temp_v12 + 0xc),(int)(*(short **)(temp_v12 + 0xc))[1]);
                *(short *)((int)puVar12 + temp_v4 * 6 + 0x1b5a) = (short)temp_v11;
                temp_v12 = asdTMTexTableEntryAt(0x1a,0x80);
                temp_v11 = (int)(short)(*(short *)(temp_v10 + 8) + *(short *)(temp_v12 + 8));
                ifTouchRegionAdd(temp_v11,(int)(short)(*(short *)(temp_v10 + 10) + *(short *)(temp_v12 + 10)),
                             (int)**(short **)(temp_v12 + 0xc),(int)(*(short **)(temp_v12 + 0xc))[1]);
                *(short *)((int)puVar12 + temp_v4 * 6 + 0x1b5c) = (short)temp_v11;
                temp_v12 = asdTMTexTableEntryAt(0x1a,0x81);
                temp_v11 = (int)(short)(*(short *)(temp_v10 + 8) + *(short *)(temp_v12 + 8));
                ifTouchRegionAdd(temp_v11,(int)(short)(*(short *)(temp_v10 + 10) + *(short *)(temp_v12 + 10)),
                             (int)**(short **)(temp_v12 + 0xc),(int)(*(short **)(temp_v12 + 0xc))[1]);
                *(short *)((int)puVar12 + temp_v4 * 6 + 0x1b5e) = (short)temp_v11;
                *pcVar21 = *pcVar21 + '\x04';
              }
              temp_v4 = temp_v4 + 1;
            } while (temp_v4 < 3);
          }
        }
        else {
          temp_v4 = campCecHasObject();
          if (temp_v4 != 0) {
            rt_memclr((int)puVar2 + 0x1b22,0x25);
          }
          else {
            FUN_002c39dc(1,0,0xffffffff);
          }
        }
        temp_v7 = widgetSubCallIfVisible(puVar2 + 0x10);
        temp_v4 = 0;
        if (0 < (int)temp_v7) {
          pbVar20 = (unsigned char *)(puVar2 + 0x6db);
          do {
            temp_v10 = (int)(8 - temp_v7) / 2 + 4;
            if ((temp_v7 & 1) != 0) {
              temp_v10 = (int)(7 - temp_v7) / 2 + 0x14;
            }
            temp_v3 = FUN_001643b4(0x14,temp_v10 + temp_v4);
            temp_v4 = temp_v4 + 1;
            *(unsigned short *)((int)puVar2 + (unsigned int)*pbVar20 * 2 + 0x1b22) = temp_v3;
            *pbVar20 = *pbVar20 + 1;
          } while (temp_v4 < (int)temp_v7);
        }
        if (*(char *)((int)puVar2 + 0xb7) != '\0') {
          if (*(char *)((int)puVar2 + 0xa5) != '\x01') break;
          if (*(char *)((int)puVar2 + 0xb9) == '\x03') {
            temp_v6 = 0x51;
          }
          else {
            temp_v6 = 0x52;
          }
        }
        else {
          temp_v4 = campCecHasObject();
          if (temp_v4 != 0) {
            temp_v4 = campCecEditIsOpen();
            if (temp_v4 != 0) {
              temp_v6 = 0xb3;
            }
            else {
              temp_v4 = FUN_0035a094(0);
              if (temp_v4 != 0) break;
              temp_v6 = 0x10d;
            }
          }
          else {
            temp_v3 = FUN_001643b4(0x14,0xe0);
            *(unsigned short *)((int)puVar2 + 0x1b32) = temp_v3;
            *(char *)(puVar2 + 0x6db) = *(char *)(puVar2 + 0x6db) + '\x01';
            if (*(char *)((int)puVar2 + 0xa5) == '\x01') {
              temp_v4 = partyPanelIsActive();
              if (temp_v4 == 0) {
                temp_v6 = 3;
              }
              else {
                temp_v6 = 4;
              }
              sysPlaySe(temp_v6);
              FUN_00331380(0);
            }
            if (*(char *)(puVar2 + 0x29) == '\x01') {
              if (*(char *)((int)puVar2 + 0xa5) < '\x02') break;
              temp_v4 = partyPanelIsActive();
              if (temp_v4 == 0) {
                temp_v6 = 1;
              }
              else {
                temp_v6 = 2;
              }
              sysPlaySe(temp_v6);
              FUN_00331380(1);
            }
            temp_v0 = *(char *)(puVar2 + 0x29);
            temp_v13 = temp_v0 != '\t';
            if (!temp_v13) {
              temp_v0 = *(char *)((int)puVar2 + 0xa5);
            }
            if (temp_v13 || temp_v0 != '\f') break;
            temp_v4 = partyPanelIsActive();
            if (temp_v4 == 0) {
              temp_v6 = 3;
            }
            else {
              temp_v6 = 4;
            }
          }
        }
        sysPlaySe(temp_v6);
      }
    }
    break;
  case 3:
    campSetSpriteAnimationPreset(0,1,0xffffffff,0);
    *(unsigned char *)((int)puVar2 + 0xa5) = *(unsigned char *)(puVar2 + 0x29);
    *(unsigned char *)(puVar2 + 0x29) = *(unsigned char *)((int)puVar2 + 0xa6);
    FUN_0020d700();
    if (*(char *)((int)puVar2 + 0x32a9) != '\0') {
      campChangeState(0x1e);
      *(unsigned char *)((int)puVar2 + 0x32a9) = 0;
    }
    else {
      puVar2[9] = 6;
      campChangeState(2);
    }
    buttonHelpSetText(0,0xf4f4f4ff);
    if (puVar2[10] != 0x22) {
      FUN_003da8f4((int)*(char *)(puVar2 + 0x29),
                   (int)*(char *)((int)puVar2 + *(char *)(puVar2 + 0x29) + 0xa7));
      temp_v4 = FUN_002e26c4();
      if ((*(unsigned char *)(temp_v4 + 3) & 0xf) == 0) {
        FUN_003da8f4((int)*(char *)((int)puVar2 + 0xa5),
                     (int)*(char *)((int)puVar2 + *(char *)((int)puVar2 + 0xa5) + 0xa7));
        temp_v10 = FUN_002e26c4();
        if ((*(unsigned char *)(temp_v10 + 3) & 0xf) != 0) {
          FUN_00284ee4(1);
        }
      }
      if (*(unsigned char *)(temp_v4 + 3) >> 4 == 0) {
        FUN_003da8f4((int)*(char *)((int)puVar2 + 0xa5),
                     (int)*(char *)((int)puVar2 + *(char *)((int)puVar2 + 0xa5) + 0xa7));
        temp_v4 = FUN_002e26c4();
        if ((*(unsigned char *)(temp_v4 + 3) & 0xf0) != 0) {
          FUN_0037c8e4(1,0);
          messageRestoreBanner();
          puVar12 = puVar2;
          FUN_002f78a0(puVar12);
        }
      }
    }
    break;
  case 4:
    FUN_00163aa4();
    temp_v4 = 0;
    do {
      FUN_00163aa4(puVar2 + temp_v4 * 0x23 + 0x245);
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 8);
    FUN_00163aa4(g_camp + 0x1b9);
    temp_v4 = FUN_002ebce4();
    if (((temp_v4 == 0) || (*(char *)((int)puVar2 + 0x6e2) == '\0')) ||
       (*(char *)((int)puVar2 + 0x76e) == '\0')) break;
    temp_v6 = FUN_002a4878(puVar2 + 0x10);
    temp_v6 = FUN_003da8f4((int)*(char *)(puVar2 + 0x29),temp_v6);
    temp_v4 = puVar2[9];
    if (temp_v4 == 0x11) {
      temp_v4 = objectApplyIfUnblocked(puVar2 + 0x7b);
      if (temp_v4 >= 1) {
        temp_v5 = 0x34;
        sysPlaySe(temp_v5);
        campShowSelectedEntryHelp(temp_v6);
        temp_v4 = puVar2[9];
        campChangeState(temp_v4);
        break;
      }
      temp_v5 = 7;
      sysPlaySe(temp_v5);
      campShowSelectedEntryHelp(temp_v6);
      temp_v4 = puVar2[9];
      campChangeState(temp_v4);
      break;
    }
    if (temp_v4 != 0x1d) {
      if (temp_v4 == 10) {
        temp_v5 = 9;
      }
      else if (temp_v4 != 0xf) {
        if (temp_v4 == 0x10) {
          temp_v5 = 8;
        }
        else if (temp_v4 == 0x2e) {
          temp_v5 = 5;
        }
        else {
          if (temp_v4 != 0x2f) {
            if (temp_v4 == 0x30) {
              campShowSelectedEntryHelp(temp_v6);
              temp_v4 = puVar2[9];
              campChangeState(temp_v4);
              break;
            }
            FUN_002add8c();
            campShowSelectedEntryHelp(temp_v6);
            temp_v4 = puVar2[9];
            campChangeState(temp_v4);
            break;
          }
          FUN_003423e8(2);
          temp_v4 = gameDataBlocksGetTable();
          if (*(short *)(temp_v4 + 0x66) == 0) {
            temp_v5 = 0x9a;
          }
          else {
            temp_v5 = 0x120;
          }
        }
      }
      else {
        temp_v5 = 7;
      }
      sysPlaySe(temp_v5);
    }
    else {
      menuItemPlaySe(temp_v6);
    }
    campShowSelectedEntryHelp(temp_v6);
    temp_v4 = puVar2[9];
    campChangeState(temp_v4);
    break;
  case 5:
    FUN_00163aa4();
    if (*(char *)((int)puVar2 + 0x76e) == '\0') break;
    if (puVar2[10] == 0x2e) {
      configDestroy();
    }
    if (puVar2[10] == 0x2f) {
      playLogDestroy();
      FUN_003423e8(0);
    }
    temp_v4 = puVar2[9];
    if (temp_v4 != 0x12) {
      if (temp_v4 < 0x13) {
        switch(temp_v4) {
        case 6:
          temp_v6 = FUN_002a4878(puVar2 + 0x10);
          temp_v4 = FUN_003da8f4((int)*(char *)(puVar2 + 0x29),temp_v6);
          temp_v6 = FUN_002a4878(puVar2 + 0x10);
          FUN_003da8f4((int)*(char *)(puVar2 + 0x29),temp_v6);
          temp_v10 = FUN_002e26c4();
          if ((((temp_v4 != 0x48 && temp_v4 != 0x49) && (temp_v4 != 0x4a && temp_v4 != 0x4b)) &&
              (temp_v4 != 0x4c && temp_v4 != 0x4d)) && (temp_v4 != 0x4e && temp_v4 != 0x35)) {
            if ((*(unsigned char *)(temp_v10 + 3) & 0xf) == 0) {
              FUN_002c39dc(1,0,0xffffffff);
              FUN_00284ee4(1);
            }
            if (((*(unsigned char *)(temp_v10 + 3) & 0xf0) == 0) && (temp_v4 = FUN_0034919c(), temp_v4 == 0)) {
              FUN_0037c8e4(1,0);
              messageRestoreBanner();
              FUN_002f78a0(puVar2);
            }
          }
          campSetSpriteAnimationPreset(2,1,0xffffffff,0);
          if (puVar2[10] != 0x30) {
            FUN_002add8c();
          }
          temp_v4 = 1;
          campChangeState(temp_v4);
          break;
        case 0xb:
          FUN_002c39dc(9,puVar2[0xd],0xffffffff);
          FUN_00284ee4(1);
          FUN_00215bbc();
          temp_v4 = puVar2[9];
        case 0xc:
        case 0xd:
        case 0xe:
          campChangeState(temp_v4);
        }
      }
      else {
        if (temp_v4 == 0x14) {
          FUN_002c39dc(7,puVar2[0xd],0xffffffff);
          FUN_00284ee4(1);
          temp_v4 = puVar2[9];
          campChangeState(temp_v4);
          break;
        }
        if (!((temp_v4 != 0x18 && temp_v4 != 0x38) && temp_v4 != 0x39)) {
          campChangeState(temp_v4);
        }
      }
      break;
    }
    temp_v4 = resourceRunOperationIfUnblocked(puVar2 + 0x7b);
    temp_v10 = FUN_002a4894(puVar2 + 0x7b);
    FUN_002c39dc(6,puVar2[(temp_v10 + temp_v4) * 2 + 0x6dc],puVar2[(temp_v10 + temp_v4) * 2 + 0x6dd]);
    FUN_00284ee4(1);
    temp_v4 = puVar2[9];
    campChangeState(temp_v4);
    break;
  case 6:
    FUN_003dc628();
    break;
  case 7:
    FUN_00163aa4();
    temp_v4 = 0;
    do {
      FUN_00163aa4(puVar2 + temp_v4 * 0x23 + 0x245);
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 8);
    FUN_00163aa4(puVar2 + 0x222);
    if (*(char *)((int)puVar2 + 0x6e2) != '\0') {
      temp_v4 = 8;
      campChangeState(temp_v4);
    }
    break;
  case 8:
    temp_v4 = gameGlobalsGetState();
    if (temp_v4 != 0) {
      temp_v0 = (char)temp_v4 + *(char *)(puVar2 + 0x2e);
      *(char *)(puVar2 + 0x2e) = temp_v0;
      if (temp_v0 < '\0') {
        *(unsigned char *)(puVar2 + 0x2e) = 2;
      }
      else if ('\x02' < temp_v0) {
        *(unsigned char *)(puVar2 + 0x2e) = 0;
      }
      FUN_002f3bc4(&temp_v15,(int)*(char *)((int)puVar2 + 0xb9),(int)*(char *)(puVar2 + 0x2e));
      if (puVar7 != (unsigned int *)0x0) {
        if (*(char *)(puVar2 + 0x2e) != '\0') {
          FUN_0033449c(0);
          statusDisplayBindUnitRecord(&temp_v15,0,0);
        }
        else {
          FUN_0033449c(1);
          FUN_0031f718((int)(short)temp_v17,0);
          objBInitBlock19D0(&temp_v15,1,0);
          FUN_003343c0(0);
        }
        statusPanelSetOpen(1);
        FUN_0037e1b0((int)*(char *)(puVar2 + 0x2e),1);
      }
    }
    temp_v4 = FUN_002a7410();
    if (temp_v4 == 0) {
      temp_v4 = FUN_0035db94();
      if (temp_v4 < 0) {
        campSetSpriteAnimationPreset(2,2,0xffffffff,0);
      }
      else {
        temp_v4 = FUN_0035db94();
        if (0 < temp_v4) {
          campSetSpriteAnimationPreset(2,1,0xffffffff,0);
        }
      }
      sysPlaySe(0x52);
      temp_v4 = 9;
      campChangeState(temp_v4);
    }
    break;
  case 9:
    if (*(short *)(puVar2 + 0x1aa) != 2) {
      FUN_00163aa4(puVar2 + 0x222);
      FUN_00163aa4(puVar2 + 0x196);
    }
    else {
      FUN_00163aa4(puVar2 + 0x222);
      FUN_00163aa4(puVar2 + 0x196);
      temp_v4 = 0;
      do {
        FUN_00163aa4(puVar2 + temp_v4 * 0x23 + 0x245);
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 8);
    }
    if ((*(char *)((int)puVar2 + 0x6e2) != '\0') && (*(char *)((int)puVar2 + 0x912) != '\0')) {
      campChangeState(6);
      if ((*(char *)((int)puVar2 + 0xb9) != 3) &&
         (FUN_002f3bc4(&temp_v15,(int)*(char *)((int)puVar2 + 0xb9),(int)*(char *)(puVar2 + 0x2e)),
         puVar8 != (unsigned int *)0x0)) {
        FUN_0032d0c8(0,1,temp_v17,&temp_v15);
      }
    }
    break;
  case 10:
    temp_v6 = 0xb;
    FUN_003daf0c(temp_v6);
    break;
  case 0xb:
    temp_v4 = FUN_00284e94();
    if (temp_v4 != 0) {
      temp_v4 = flagValueIsPositive(puVar12[0xd]);
      if (temp_v4 == 0) {
        campRebuildEnabledFlagList(0xb);
      }
      temp_v4 = objectApplyIfUnblocked(puVar12 + 0x30);
      if (temp_v4 < 1) {
        FUN_0021b274(3,0xffffffff,0);
        puVar12[9] = 6;
        temp_v6 = 5;
      }
      else {
        FUN_0021b274(1,0xffffffff,0);
        puVar12[9] = 10;
        temp_v6 = 4;
      }
      campChangeState(temp_v6);
      FUN_0037c8e4(1,0);
      messageRestoreBanner();
      FUN_002f78a0(puVar12);
      temp_v4 = FUN_0039c608();
      if (temp_v4 == 0) {
        FUN_003a7c00(1);
      }
    }
    break;
  case 0xc:
    temp_v4 = g_camp[8];
    if (temp_v4 == 0) {
      temp_v4 = 0x7b6;
      dataTable8FindRecord();
      arousalSkillOpen(*(unsigned short *)(temp_v4 + 0x54));
      puVar12[8] = puVar12[8] + 1;
      goto LAB_003d6870;
    }
    if (temp_v4 != 1) {
      if (temp_v4 != 2) break;
    }
    else {
LAB_003d6870:
      temp_v4 = sceneHolderUpdate();
      if (temp_v4 == 0) break;
      puVar12[8] = puVar12[8] + 1;
    }
    campResetScreen();
    FUN_0021b274(1,0xffffffff,0);
    puVar12[9] = 10;
    temp_v4 = 4;
    campChangeState(temp_v4);
    break;
  case 0xd:
    FUN_0020dc1c();
    break;
  case 0xe:
    temp_v4 = g_camp[8];
    if (temp_v4 != 0) {
      if (temp_v4 != 1) {
        if (temp_v4 != 2) break;
      }
      else {
        temp_v4 = recordValueIsZero();
        if (temp_v4 == 0) break;
        FUN_003492dc();
        puVar12[8] = 2;
      }
      temp_v4 = flagValueIsPositive(puVar12[0xcee]);
      if (temp_v4 == 0) {
        campRebuildEnabledFlagList(0xb);
      }
      campResetScreen();
      temp_v4 = objectApplyIfUnblocked(puVar12 + 0x30);
      if (temp_v4 >= 1) {
        FUN_0021b274(1,0xffffffff,0);
        puVar12[9] = 10;
        temp_v4 = 4;
        campChangeState(temp_v4);
        break;
      }
      FUN_0021b274(3,0xffffffff,0);
      puVar12[9] = 6;
      temp_v4 = 5;
      campChangeState(temp_v4);
      break;
    }
    FUN_002e738c(2);
    obj25CRefreshFlags(puVar12[0xcee]);
    puVar12[8] = 1;
    break;
  case 0xf:
    temp_v6 = 0xd;
    FUN_003daf0c(temp_v6);
    break;
  case 0x10:
    FUN_003daf0c(0xe);
    break;
  case 0x11:
    FUN_001ffe84();
    break;
  case 0x12:
    temp_v4 = FUN_00284e94();
    if (temp_v4 != 0) {
      temp_v4 = resourceRunOperationIfUnblocked(puVar12 + 0x7b);
      temp_v10 = FUN_002a4894(puVar12 + 0x7b);
      temp_v4 = FUN_0022a030(puVar12[(temp_v10 + temp_v4) * 2 + 0x6dd],
                           puVar12[(temp_v10 + temp_v4) * 2 + 0x6dc]);
      if (temp_v4 == 0) {
        FUN_0026f7f0();
      }
      FUN_0023b45c(0);
      FUN_0021b274(1,0xffffffff,0);
      puVar12[9] = 0x11;
      campChangeState(4);
      FUN_0035dbd4(1);
    }
    break;
  case 0x15:
    FUN_00163aa4();
    temp_v4 = 0;
    do {
      FUN_00163aa4(puVar2 + temp_v4 * 0x23 + 0x245);
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 8);
    if (*(char *)((int)puVar2 + 0x6e2) != '\0') {
      FUN_002c39dc(0xc,0,0xffffffff);
      FUN_00284ee4(0);
      FUN_00215bbc();
      FUN_00331380(1);
      temp_v4 = 0x17;
      campChangeState(temp_v4);
    }
    break;
  case 0x16:
    FUN_00163aa4();
    temp_v4 = 0;
    do {
      FUN_00163aa4(puVar2 + temp_v4 * 0x23 + 0x245);
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 8);
    if (*(char *)((int)puVar2 + 0x6e2) != '\0') {
      FUN_002c39dc(0xd,0,0xffffffff);
      FUN_00284ee4(0);
      FUN_00215bbc();
      temp_v4 = 0x17;
      campChangeState(temp_v4);
    }
    break;
  case 0x17:
    temp_v4 = FUN_00284e94();
    if (temp_v4 != 0) {
      temp_v4 = partyPanelHasMembers();
      if (temp_v4 != 0) {
        *(unsigned char *)(puVar12 + 0x29) = 4;
        *(unsigned char *)(puVar12 + 0x2a) = 2;
      }
      if (*(char *)(puVar12 + 0x29) != '\b') {
        FUN_002c39dc(1,0,0xffffffff);
      }
      if (*(char *)(puVar12 + 0xcaa) != '\0') {
        temp_v4 = partyPanelHasMembers();
        if (temp_v4 == 0) {
          *(unsigned char *)(puVar12 + 0x29) = 1;
        }
        *(unsigned char *)(puVar12 + 0xcaa) = 0;
      }
      FUN_003a7788();
      FUN_0020d700();
      puVar12[9] = 6;
      campChangeState(2);
      if (*(char *)(puVar12 + 0x29) != '\b') {
        campSetSpriteAnimationPreset(1,1,0xffffffff,0);
        temp_v4 = FUN_0034919c();
        if (temp_v4 == 0) {
          FUN_0037c8e4(1,0);
          messageRestoreBanner();
          FUN_002f78a0(puVar12);
        }
      }
      FUN_002add8c();
      temp_v0 = *(char *)(puVar12 + 0x29);
      if (temp_v0 == '\b') {
        campSetSpriteAnimationPreset(2,1,0xffffffff,0);
        uniteSetMode(3);
        uniteStartOrQueueRequest(0);
      }
    }
    break;
  case 0x18:
    FUN_003d386c(1);
    temp_v4 = resourceRunOperationIfUnblocked(puVar2 + 0x7b);
    temp_v10 = FUN_002a4894(puVar2 + 0x7b);
    if (g_camp != (unsigned int *)0x0) {
      g_camp[0x2f] = temp_v4 + temp_v10;
    }
    temp_v4 = FUN_002a7410();
    if (temp_v4 == 0) {
      temp_v4 = FUN_0035db94();
      if (temp_v4 < 0) {
        temp_v6 = 2;
      }
      else {
        temp_v4 = FUN_0035db94();
        if (0 >= temp_v4) {
          puVar2[9] = 0x11;
          temp_v4 = 4;
          campChangeState(temp_v4);
          break;
        }
        temp_v6 = 1;
      }
      FUN_0021b274(temp_v6,0xffffffff,0);
      puVar2[9] = 0x11;
      temp_v4 = 4;
      campChangeState(temp_v4);
    }
    break;
  case 0x19:
    FUN_00163aa4();
    temp_v4 = 0;
    do {
      FUN_00163aa4(puVar2 + temp_v4 * 0x23 + 0x245);
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 8);
    if (*(char *)((int)puVar2 + 0x6e2) != '\0') {
      FUN_002c39dc(4,0,0xffffffff);
      FUN_00284ee4(0);
      FUN_00215bbc();
      FUN_00331380(1);
      temp_v4 = 0x1b;
      campChangeState(temp_v4);
    }
    break;
  case 0x1a:
    FUN_00163aa4();
    temp_v4 = 0;
    do {
      FUN_00163aa4(puVar2 + temp_v4 * 0x23 + 0x245);
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 8);
    if (*(char *)((int)puVar2 + 0x6e2) != '\0') {
      FUN_002c39dc(0xf,0,0xffffffff);
      FUN_00284ee4(0);
      FUN_00215bbc();
      FUN_00331380(1);
      temp_v4 = 0x1c;
      campChangeState(temp_v4);
    }
    break;
  case 0x1b:
  case 0x1c:
  case 0x4a:
    temp_v15 = 0;
    uStack_154 = 0;
    temp_v16 = 0;
    uStack_14c = 0;
    FUN_0031db84(&temp_v15,&temp_v16);
    if (puVar10 != (unsigned int *)0x0) {
      temp_v4 = gameGetSlotTable();
      temp_v1 = uStack_14c;
      temp_v7 = temp_v16;
      temp_v10 = -1;
      temp_v12 = -1;
      if ((temp_v15 & 1) == 0) {
        if ((temp_v15 & 2) != 0) {
          temp_v10 = 0;
        }
        else if ((temp_v15 & 4) != 0) {
          temp_v10 = 1;
        }
        else if ((temp_v15 & 8) != 0) {
          temp_v10 = 2;
        }
      }
      temp_v11 = 0;
      do {
        temp_v14 = runtimeShiftLeftWide(1,0,temp_v11);
        if (((unsigned int)temp_v14 & temp_v7) != 0 || ((unsigned int)((unsigned long long)temp_v14 >> 0x20) & temp_v1) != 0) {
          temp_v12 = temp_v11 - 1;
          break;
        }
        temp_v11 = temp_v11 + 1;
      } while (temp_v11 < 0x19);
      if (puVar12[7] == 0x1b) {
        temp_v10 = temp_v4 + temp_v10;
        if (*(char *)(temp_v10 + 0x1ca0) == *(char *)(temp_v4 + temp_v12 + 0x1c88)) {
          *(unsigned char *)(temp_v10 + 0x1ca0) = 0xff;
          temp_v6 = 0x1000213;
        }
        else {
          *(char *)(temp_v10 + 0x1ca0) = -1;
          temp_v0 = *(char *)(temp_v4 + temp_v12 + 0x1c88);
          if (-1 < temp_v0) {
            *(char *)(temp_v10 + 0x1ca0) = temp_v0;
          }
          temp_v6 = 0x1000212;
        }
        eventQueueAddUniqueIfValid(temp_v6);
      }
      FUN_0031d890();
      if (puVar12[7] == 0x1b) {
        FUN_002c39dc(4,0,0xffffffff);
        FUN_00284ee4(0);
      }
      if (puVar12[7] == 0x1c) {
        FUN_002c39dc(0xf,0,0xffffffff);
        FUN_00284ee4(0);
      }
      if (puVar12[7] == 0x4a) {
        FUN_002c39dc(0x11,0,0xffffffff);
        FUN_00284ee4(0);
      }
    }
    temp_v4 = FUN_00284e94();
    if (temp_v4 != 0) {
      if (puVar12[7] == 0x4a) {
        callbackSceneDestroyResources();
        puVar19 = g_camp;
        *(unsigned char *)(g_camp + 0xcad) = 0;
        temp_v4 = FUN_002e27b8();
        if (0 < temp_v4) {
          *(unsigned char *)(puVar19 + 0xcad) = 1;
        }
      }
      FUN_0020d700();
      FUN_0026f7f0();
      FUN_002c39dc(1,0,0xffffffff);
      campSetSpriteAnimationPreset(1,1,0xffffffff,0);
      puVar12[9] = 6;
      campChangeState(2);
      temp_v4 = FUN_0034919c();
      if (temp_v4 == 0) {
        FUN_0037c8e4(1,0);
        messageRestoreBanner();
        FUN_002f78a0(puVar12);
      }
      FUN_002add8c();
      FUN_0037c8e4(1,0);
      messageRestoreBanner();
      FUN_002f78a0(puVar12);
    }
    break;
  case 0x1d:
    temp_v6 = FUN_002a4878(puVar2 + 0x10);
    FUN_003da8f4((int)*(char *)(puVar2 + 0x29),temp_v6);
    FUN_001fdde8();
    break;
  case 0x1e:
    temp_v4 = FUN_00163e84(0);
    if (temp_v4 == 0) {
      puVar2[5] = 0;
      break;
    }
    if ((int)puVar2[5] >= 2) {
      FUN_0014afa8();
      FUN_002ab804();
      uniteSetMode(3);
      temp_v4 = 0x1f;
      campChangeState(temp_v4);
    }
    break;
  case 0x1f:
    temp_v4 = uniteIsReady();
    if ((temp_v4 != 0) && (temp_v4 = loadSlotIsLoaded(0x1f), temp_v4 != 0)) {
      *(unsigned char *)((int)puVar2 + 0xb7) = 1;
      *(unsigned char *)(puVar2 + 0x2e) = 0;
      *(unsigned char *)((int)puVar2 + 0xb9) = 3;
      FUN_003b078c();
      uiSpriteSetKeyframe(puVar2 + 0x222,9,0);
      uiSpriteSetImageKeyframe(puVar2 + 0x222,0x13,0);
      uniteStartOrQueueRequest(0);
      puVar2[9] = 6;
      temp_v4 = 2;
      campChangeState(temp_v4);
    }
    break;
  case 0x20:
    FUN_00163aa4();
    temp_v4 = 0;
    do {
      FUN_00163aa4(puVar2 + temp_v4 * 0x23 + 0x245);
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 8);
    if ((*(char *)((int)puVar2 + 0x6e2) != '\0') && (temp_v4 = uniteStateIsDone(), temp_v4 != 0)) {
      FUN_0031d890();
      uniteSetMode(3);
      FUN_0026f7f0();
      puVar2[9] = 6;
      campChangeState(5);
      FUN_002a7b74();
      uniteStartOrQueueRequest(0);
    }
    break;
  case 0x21:
    temp_v4 = uniteRequestGet();
    if ((temp_v4 == 0x10) && (temp_v4 = uniteNotBusy(), temp_v4 != 0)) {
      slotSetRequest(0,0x14,0xff);
      campChangeState(0x22);
      soundChannelStopAll(10);
      uniteResetPreview();
    }
    else {
      temp_v4 = 1;
      FUN_001517b4();
      if ((temp_v4 != 0) && (temp_v4 = messageMainIsWindowActive(), temp_v4 != 0)) {
        msgWindowReset();
        eventQueueAddUniqueIfValid(0x100020e);
      }
    }
    break;
  case 0x22:
    temp_v4 = FUN_00163e84(0);
    if (temp_v4 != 0) {
      FUN_0031fb04();
      dataTableAndTexRelease();
      FUN_002c39dc(1,0,0xffffffff);
      FUN_00284ee4(1);
      puVar12 = g_camp;
      *(unsigned char *)(g_camp + 0xcad) = 0;
      temp_v4 = FUN_002e27b8();
      if (0 < temp_v4) {
        *(unsigned char *)(puVar12 + 0xcad) = 1;
      }
      *(unsigned char *)((int)puVar2 + 0xb7) = 0;
      campReleaseSlotTouchRegions();
      temp_v4 = querySlotHasHandle();
      if (temp_v4 != 0) {
        workCommandRefreshActiveSlots();
      }
      campChangeState(3);
      FUN_003d54f8(0,10);
      temp_v4 = mapMainIsBusy();
      if (temp_v4 != 0) {
        FUN_00312d6c();
      }
      else {
        temp_v4 = lmapMainIsRunning();
        if (temp_v4 != 0) {
          lmapMainCallIfActive();
        }
        else {
          bgmFadeOut(0x2d);
        }
      }
      frameTexSetValue(1);
    }
    break;
  case 0x23:
    FUN_00163aa4(puVar2 + 0x222);
    FUN_00163aa4(puVar2 + 0x196);
    temp_v4 = 0;
    do {
      FUN_00163aa4(puVar2 + temp_v4 * 0x23 + 0x245);
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 8);
    temp_v4 = uniteIsReady();
    if (temp_v4 != 0) {
      FUN_002f3bc4(&temp_v15,(int)*(char *)((int)puVar2 + 0xb9),(int)*(char *)(puVar2 + 0x2e));
      if (puVar13 != (unsigned int *)0x0) {
        temp_v4 = FUN_002a73f8();
        if (temp_v4 != 0) {
          if (*(char *)(puVar2 + 0x2e) != '\0') {
            FUN_0033449c(0);
            statusDisplayBindUnitRecord(&temp_v15,0,1);
          }
          else {
            FUN_0033449c(1);
            FUN_0031f718((int)(short)temp_v17,0);
            objBInitBlock19D0(&temp_v15,1,0);
            FUN_003343c0(0);
          }
          FUN_0037e1b0((int)*(char *)(puVar2 + 0x2e),1);
          temp_v7 = FUN_0034a9ac();
          statusPanelSetOpen(temp_v7 != temp_v17);
        }
        else {
          FUN_0037e1b0((int)*(char *)(puVar2 + 0x2e),1);
          FUN_002c8538(1);
          FUN_00215bd0();
        }
      }
      else {
        *(unsigned char *)((int)puVar2 + 0xb9) = 3;
        *(unsigned char *)(puVar2 + 0x2e) = 0;
        FUN_0037e1b0(0xffffffff,1);
        FUN_0022e774();
        FUN_003da8f4((int)*(char *)(puVar2 + 0x29),
                     (int)*(char *)((int)puVar2 + *(char *)(puVar2 + 0x29) + 0xa7));
        FUN_002a7b74();
        uniteStartOrQueueRequest(0);
      }
      FUN_002add8c();
      FUN_0031d890();
      FUN_0026f7f0();
      campSetSpriteAnimationPreset(2,1,0xffffffff,0);
      puVar2[9] = 6;
      temp_v4 = 2;
      campChangeState(temp_v4);
    }
    break;
  case 0x24:
    FUN_00163aa4();
    temp_v4 = 0;
    do {
      FUN_00163aa4(puVar2 + temp_v4 * 0x23 + 0x245);
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 8);
    FUN_00163aa4(puVar2 + 0x222);
    if ((*(char *)((int)puVar2 + 0x6e2) != '\0') && (temp_v4 = bibleIsClosed(), temp_v4 != 0)) {
      puVar2[9] = 6;
      campChangeState(5);
      FUN_0026f7f0();
      FUN_0031d890();
      temp_v4 = FUN_003da8f4((int)*(char *)(puVar2 + 0x29),
                           (int)*(char *)((int)puVar2 + *(char *)(puVar2 + 0x29) + 0xa7));
      if (temp_v4 == 0x1b) {
        FUN_0037c8e4(1,0);
        messageRestoreBanner();
        if ((g_camp != (unsigned int *)0x0) &&
           (pcVar21 = (char *)(g_camp + 0x6c8), temp_v0 = *pcVar21,
           temp_v0 != '\x04' && temp_v0 != '\x03')) {
          uiSpriteSetImageKeyframe(g_camp + 0x682,0x18,0);
          *pcVar21 = '\x03';
        }
        FUN_002f78a0(puVar2);
      }
      uniteSetMode(3);
      uniteStartOrQueueRequest(0);
      uniteValueRefresh();
    }
    break;
  case 0x25:
    temp_v4 = puVar2[3];
    processQueryChain();
    if (temp_v4 == 4) {
      temp_v4 = gauntletAppMenuHasActiveFlags();
      if (temp_v4 != 0) {
        gauntletAppMenuKillTask();
        temp_v4 = 0x33;
        campChangeState(temp_v4);
        break;
      }
      gauntletAppMenuKillTask();
      FUN_002c39dc(1,0,0xffffffff);
      FUN_00284ee4(1);
      puVar12 = g_camp;
      temp_v2 = FUN_003e42f0();
      *(unsigned char *)((int)puVar12 + 0x32b5) = temp_v2;
      campSetSpriteAnimationPreset(1,1,0xffffffff,0);
      FUN_0031d890();
      puVar2[9] = 6;
      campChangeState(2);
      temp_v4 = FUN_0034919c();
      if (temp_v4 == 0) {
        FUN_0037c8e4(1,0);
        messageRestoreBanner();
        FUN_002f78a0(puVar2);
      }
      FUN_002add8c();
    }
    break;
  case 0x26:
    temp_v4 = FUN_002a746c();
    if (temp_v4 != 0) {
      FUN_0034aae4();
      if (*(char *)(puVar2 + 0xcaa) != '\0') {
        *(unsigned char *)(puVar2 + 0x29) = 1;
        FUN_0020d700();
        *(unsigned char *)(puVar2 + 0xcaa) = 0;
      }
      campShowSelectedEntryHelp(0);
      puVar2[9] = 6;
      campChangeState(5);
      FUN_0037c8e4(1,0);
      messageRestoreBanner();
      FUN_002f78a0(puVar2);
      puVar12 = g_camp;
      puVar19 = g_camp + 0xcac;
      *(unsigned char *)puVar19 = 0;
      temp_v4 = FUN_003deee4(1);
      if ((temp_v4 != 0) || (temp_v4 = flagSetAllCoveredBy(1), temp_v4 == 0)) {
        *(unsigned char *)puVar19 = 1;
      }
      *(unsigned char *)((int)puVar12 + 0x32b1) = 0;
      temp_v4 = FUN_003deee4(0);
      if ((temp_v4 != 0) || (temp_v4 = flagSetAllCoveredBy(0), temp_v4 == 0)) {
        *(unsigned char *)((int)puVar12 + 0x32b1) = 1;
      }
    }
    break;
  case 0x27:
    temp_v4 = FUN_002a746c();
    if (temp_v4 != 0) {
      if (DAT_005e1eb4 == '\0') {
        DAT_005e1eb4 = uiQuestGetState();
      }
      DAT_005e1eb6 = uiQuestRunEnabledAction();
      DAT_005e1eb8 = FUN_00372140();
      temp_v4 = FUN_002f153c();
      temp_v10 = uiQuestGetActive();
      temp_v12 = uiQuestGetPanelMode();
      temp_v11 = uiQuestGetStep();
      temp_v8 = uiQuestGetMode();
      FUN_0034aae4();
      if (DAT_005e1eb4 != '\0') {
        temp_v9 = gameFlagsGetBlock();
        *(unsigned short *)(temp_v9 + 0x22) = 0;
        clearFlags310To31F();
        sub68OwnerCall4();
      }
      if (!((((temp_v4 == 0 && temp_v10 == 0) && temp_v12 == 0) && temp_v11 == 0) && temp_v8 == 0)) {
        g_campState = (char)temp_v4;
        DAT_005e1eb1 = (unsigned char)temp_v10;
        DAT_005e1eb2 = (unsigned char)temp_v12;
        DAT_005e1eb3 = (unsigned char)temp_v11;
        campChangeState(0x33);
      }
      else {
        campShowSelectedEntryHelp(0);
        puVar2[9] = 6;
        campChangeState(5);
        FUN_0037c8e4(1,0);
        messageRestoreBanner();
        FUN_002f78a0(puVar2);
        puVar12 = g_camp;
        puVar19 = g_camp + 0xcac;
        *(unsigned char *)puVar19 = 0;
        temp_v4 = FUN_003deee4(1);
        if ((temp_v4 != 0) || (temp_v4 = flagSetAllCoveredBy(1), temp_v4 == 0)) {
          *(unsigned char *)puVar19 = 1;
        }
        *(unsigned char *)((int)puVar12 + 0x32b1) = 0;
        temp_v4 = FUN_003deee4(0);
        if ((temp_v4 != 0) || (temp_v4 = flagSetAllCoveredBy(0), temp_v4 == 0)) {
          *(unsigned char *)((int)puVar12 + 0x32b1) = 1;
        }
      }
      if (g_campState == '\0') {
        temp_v4 = gameFlagsGetBlock();
        *(unsigned short *)(temp_v4 + 0x1e) = DAT_005e1eb6;
      }
    }
    break;
  case 0x2b:
    useCounterStart();
    temp_v6 = 0x2c;
    puVar2[7] = temp_v6;
    break;
  case 0x2c:
    temp_v6 = FUN_002a4878(puVar2 + 0x10);
    temp_v6 = FUN_003da8f4((int)*(char *)(puVar2 + 0x29),temp_v6);
    puVar12 = g_camp;
    temp_v4 = useCounterIsFinished();
    if (temp_v4 != 0) {
      useCounterRelease();
      temp_v6 = FUN_002a4878(puVar12 + 0x10);
      FUN_003da8f4((int)*(char *)(puVar12 + 0x29),temp_v6);
      campShowSelectedEntryHelp();
      sysPlaySe(*(unsigned short *)((int)puVar12 + 0x3a));
      if (puVar12[10] == 0x11) {
        FUN_0023b45c(0);
      }
      campChangeState(puVar12[10]);
      if (puVar12[7] == 0x1d) {
        temp_v6 = 3;
      }
      else {
        temp_v6 = 1;
      }
      puVar12[8] = temp_v6;
    }
    else {
      temp_v4 = useCounterGetCurrentValue();
      if (temp_v4 != 0x69) {
        FUN_003d0bc0(temp_v6);
      }
    }
    break;
  case 0x2d:
    temp_v4 = objIsNotInState0xF();
    if (temp_v4 != 0) {
      FUN_002add8c();
      temp_v4 = 6;
      campChangeState(temp_v4);
    }
    break;
  case 0x2e:
    FUN_00202ea4();
    temp_v4 = configIsClosed();
joined_r0x003d7c38:
    if (temp_v4 != 0) {
      campShowSelectedEntryHelp(0);
      FUN_0021b274(0,0xffffffff);
      puVar2[9] = 6;
      temp_v4 = 5;
      campChangeState(temp_v4);
    }
    break;
  case 0x2f:
    FUN_0021545c();
    temp_v4 = playLogIsClosed();
    goto joined_r0x003d7c38;
  case 0x30:
    FUN_00163aa4();
    temp_v4 = 0;
    do {
      FUN_00163aa4(puVar2 + temp_v4 * 0x23 + 0x245);
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 8);
    if ((*(char *)((int)puVar2 + 0x6e2) != '\0') && (temp_v4 = jobIsValid(puVar2[4]), temp_v4 == 0)) {
      puVar2[9] = 6;
      temp_v4 = 5;
      campChangeState(temp_v4);
    }
    break;
  case 0x31:
  case 0x37:
    FUN_00163aa4();
    temp_v4 = 0;
    do {
      FUN_00163aa4(puVar2 + temp_v4 * 0x23 + 0x245);
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 8);
    FUN_00163aa4(puVar2 + 0x222);
    if ((puVar2[5] == 1) && (saveLoadStartWindowWithArgument(1), puVar2[7] == 0x37)) {
      flag0CSet(DAT_00588e2c);
    }
    if ((((int)puVar2[5] >= 2) && (*(char *)((int)puVar2 + 0x6e2) != '\0')) &&
       (temp_v4 = FUN_002ef9f0(), temp_v4 == 0)) {
      if (puVar2[7] != 0x37) {
        puVar2[9] = 6;
        FUN_0037c8e4(1,0);
        messageRestoreBanner();
        FUN_002f78a0(puVar2);
      }
      else {
        temp_v4 = byteArr5Get4();
        if (temp_v4 == 0) {
          temp_v6 = 0x39;
        }
        else {
          temp_v6 = 0x38;
        }
        puVar2[9] = temp_v6;
        puVar2[0xb] = 0;
      }
      temp_v4 = 5;
      campChangeState(temp_v4);
    }
    break;
  case 0x32:
    if (puVar2[5] == 1) {
      saveLoadStartDefaultWindow();
    }
    if (((int)puVar2[5] >= 2) && (temp_v4 = FUN_002ef9f0(), temp_v4 == 0)) {
      temp_v4 = saveLoadUIHasResult();
      if (temp_v4 != 0) {
        DAT_005e1eba = 1;
        g_gameState.f005f1634 = 1;
        temp_v4 = 0x55;
        campChangeState(temp_v4);
        break;
      }
      puVar2[9] = 6;
      campChangeState(5);
      FUN_0037c8e4(1,0);
      messageRestoreBanner();
      FUN_002f78a0(puVar2);
    }
    break;
  case 0x33:
    FUN_00163aa4();
    temp_v4 = 0;
    do {
      FUN_00163aa4(puVar2 + temp_v4 * 0x23 + 0x245);
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 8);
    temp_v4 = FUN_002ebce4();
    if (((temp_v4 != 0) && (*(char *)((int)puVar2 + 0x6e2) != '\0')) &&
       (temp_v4 = FUN_003309e0(), temp_v4 != 0)) {
      campChangeState(0x55);
    }
    puVar12 = puVar2 + 0x58d;
    FUN_00163aa4(puVar12);
    break;
  case 0x34:
  case 0x3b:
  case 0x3c:
  case 0x45:
    temp_v4 = FUN_002bfd04();
    if (temp_v4 != 0) {
      temp_v4 = campCecGet();
      if (temp_v4 == 0) {
LAB_003d801c:
        FUN_0020d700();
        puVar2[9] = 6;
        FUN_0037c8e4(1,0);
        messageRestoreBanner();
        FUN_002f78a0(puVar2);
        campSetSpriteAnimationPreset(2,1,0xffffffff,0);
        temp_v4 = 1;
        campChangeState(temp_v4);
        break;
      }
      FUN_00319aec(0);
      campChangeState(0x36);
      temp_v4 = 0;
      puVar2[0xb] = temp_v4;
    }
    break;
  case 0x35:
    if (puVar2[0xb] != 0) {
      if ((puVar2[0xb] == 1) && (temp_v4 = campCecIsScriptRunning(), temp_v4 == 0)) {
        FUN_0020d700();
        puVar2[0xb] = 0;
        puVar2[9] = 6;
        temp_v4 = FUN_0034919c();
        if (temp_v4 == 0) {
          FUN_0037c8e4(1,0);
          messageRestoreBanner();
        }
        FUN_002f78a0(puVar2);
        campSetSpriteAnimationPreset(2,1,0xffffffff,0);
        temp_v4 = 1;
        campChangeState(temp_v4);
      }
    }
    else {
      temp_v4 = campCecIsScriptRunning();
      if (temp_v4 == 0) {
        temp_v4 = messageGetChoiceResult();
        if (temp_v4 != 0) {
          campCecScriptStart(0x27);
          sysPlaySe(0x92);
          temp_v4 = puVar2[0xb] + 1;
          puVar2[0xb] = temp_v4;
          break;
        }
        campSetSpriteAnimationPreset(2,3,0xffffffff,0);
        messageDismissNumericBanner(1);
        FUN_00319aec(0);
        campChangeState(0x36);
        temp_v4 = 0;
        puVar2[0xb] = temp_v4;
      }
    }
    break;
  case 0x36:
    if (puVar2[0xb] != 0) {
      if ((puVar2[0xb] == 1) && (temp_v4 = overlayIsNotBusy(), temp_v4 != 0)) {
        campCecDestroyOverlay(1);
        campChangeState(0x37);
        temp_v4 = 0;
        puVar2[0xb] = temp_v4;
      }
    }
    else {
      temp_v4 = overlayIsNotBusy();
      if (temp_v4 != 0) {
        temp_v4 = puVar2[0xb] + 1;
        puVar2[0xb] = temp_v4;
      }
    }
    break;
  case 0x38:
    temp_v4 = puVar2[0xb];
    if (temp_v4 != 0) {
      if (temp_v4 != 1) {
        if ((temp_v4 == 2) && (temp_v4 = overlayIsNotBusy(), temp_v4 != 0)) {
          temp_v4 = campCecGet();
          if (temp_v4 != 0) {
            campCecSetValue(0);
            FUN_003343f0(0);
            temp_v6 = 0x34;
            puVar2[7] = temp_v6;
            break;
          }
          puVar2[7] = 0x34;
          FUN_003343f0(0);
          FUN_002e2404(3);
        }
      }
      else {
        temp_v4 = FUN_002bfd04();
        if (temp_v4 != 0) {
          campCecSetObjectValue(0);
          temp_v4 = puVar2[0xb] + 1;
          puVar2[0xb] = temp_v4;
        }
      }
    }
    else {
      temp_v4 = FUN_002ef9f0();
      if (temp_v4 == 0) {
        FUN_002bf534(1);
        temp_v4 = puVar2[0xb] + 1;
        puVar2[0xb] = temp_v4;
      }
    }
    break;
  case 0x39:
    temp_v4 = puVar2[0xb];
    if (temp_v4 == 0) {
      temp_v4 = FUN_002ef9f0();
      if (temp_v4 == 0) {
        FUN_002bf534(1);
        temp_v4 = puVar2[0xb] + 1;
        puVar2[0xb] = temp_v4;
      }
      break;
    }
    if (temp_v4 != 1) {
      if ((temp_v4 == 2) && (temp_v4 = overlayIsNotBusy(), temp_v4 != 0)) {
        puVar2[9] = 6;
        puVar2[0xb] = 0;
        temp_v4 = 5;
        campChangeState(temp_v4);
      }
    }
    else {
      temp_v4 = FUN_002bfd04();
      if (temp_v4 != 0) {
        campCecSetObjectValue(0);
        FUN_0037c8e4(1,0);
        messageRestoreBanner();
        FUN_002f78a0(puVar2);
        temp_v4 = puVar2[0xb] + 1;
        puVar2[0xb] = temp_v4;
      }
    }
    break;
  case 0x3a:
    temp_v4 = campCecIsScriptRunning();
    if (temp_v4 == 0) goto LAB_003d801c;
    break;
  case 0x3d:
    temp_v4 = campCecEditIsActive();
    if ((temp_v4 != 0) && (temp_v4 = FUN_002e2054(), temp_v4 != 0)) {
      temp_v4 = FUN_002e26c4(0x36);
      temp_v2 = *(unsigned char *)(temp_v4 + 2);
      *(unsigned char *)((int)puVar2 + 0xa6) = temp_v2;
      *(unsigned char *)((int)puVar2 + 0xa5) = *(unsigned char *)(puVar2 + 0x29);
      *(unsigned char *)(puVar2 + 0x29) = temp_v2;
      FUN_0020d700();
      puVar2[9] = 6;
      puVar12 = g_camp;
      temp_v2 = FUN_0036d134();
      *(unsigned char *)((int)puVar12 + 0x32b6) = temp_v2;
      campSetSpriteAnimationPreset(2,1,0xffffffff,0);
      buttonHelpSetText(0,0xf4f4f4ff);
      temp_v4 = 1;
      campChangeState(temp_v4);
      break;
    }
    temp_v4 = FUN_002bfd04();
    if (temp_v4 != 0) {
      *(unsigned char *)(puVar2 + 0x29) = 0xc;
      FUN_0020d700();
      campSetSpriteAnimationPreset(1,1,0xffffffff,0);
      puVar2[9] = 6;
      campChangeState(2);
      campReleaseRegisteredTouchRegions();
    }
    break;
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x42:
  case 0x43:
  case 0x44:
    temp_v4 = FUN_0035a028();
    if (temp_v4 == 0) {
      *(unsigned char *)(puVar2 + 0x29) = 0xd;
      FUN_0020d700();
      puVar12 = g_camp;
      if (puVar2[7] != 0x3f) {
        campSetSpriteAnimationPreset(1,1,0xffffffff,0);
        puVar2[9] = 6;
        campChangeState(2);
        campReleaseRegisteredTouchRegions();
        break;
      }
      temp_v2 = FUN_0036d134();
      *(unsigned char *)((int)puVar12 + 0x32b6) = temp_v2;
      campSetSpriteAnimationPreset(1,1,0xffffffff,0);
      puVar2[9] = 6;
      campChangeState(2);
      campReleaseRegisteredTouchRegions();
    }
    break;
  case 0x41:
    temp_v4 = FUN_0035a028();
    if (temp_v4 == 0) {
      *(unsigned char *)(puVar2 + 0x29) = 0xd;
      FUN_0020d700();
      campCecSetObjectValue(0);
      campSetSpriteAnimationPreset(1,1,0xffffffff,0);
      puVar2[9] = 6;
      campChangeState(2);
      campReleaseRegisteredTouchRegions();
      break;
    }
    temp_v4 = campCecEditIsStateSixteen();
    if (temp_v4 != 0) {
      temp_v4 = FUN_002e26c4(0x3d);
      temp_v2 = *(unsigned char *)(temp_v4 + 2);
      *(unsigned char *)((int)puVar2 + 0xa6) = temp_v2;
      *(unsigned char *)((int)puVar2 + 0xa5) = *(unsigned char *)(puVar2 + 0x29);
      *(unsigned char *)(puVar2 + 0x29) = temp_v2;
      FUN_0020d700();
      puVar2[9] = 6;
      campSetSpriteAnimationPreset(1,1,0xffffffff,0);
      temp_v4 = 1;
      campChangeState(temp_v4);
    }
    break;
  case 0x46:
    temp_v4 = campCecHasObject();
    if (temp_v4 == 0) {
      temp_v4 = 0;
      while( 1 ) {
        FUN_00163aa4(puVar2 + temp_v4 * 0x23 + 0x245);
        temp_v4 = temp_v4 + 1;
        if (temp_v4 >= 8) break;
        if ((temp_v4 == 7) && (*(char *)((int)puVar2 + 0xd72) != '\0')) {
          FUN_002bf534(0);
        }
      }
      puVar12 = puVar2 + 0x196;
      FUN_00163aa4(puVar12);
      break;
    }
    temp_v4 = FUN_002bfd04();
    if ((temp_v4 != 0) || (temp_v4 = FUN_0035a094(), temp_v4 != 0)) {
      temp_v4 = FUN_002e26c4(0x33);
      temp_v2 = *(unsigned char *)(temp_v4 + 2);
      *(unsigned char *)((int)puVar2 + 0xa6) = temp_v2;
      *(unsigned char *)((int)puVar2 + 0xa5) = *(unsigned char *)(puVar2 + 0x29);
      *(unsigned char *)(puVar2 + 0x29) = temp_v2;
      FUN_0020d700();
      puVar2[9] = 6;
      campSetSpriteAnimationPreset(2,1,0xffffffff,0);
      buttonHelpSetText(0,0xf4f4f4ff);
      campChangeState(1);
      campCecSetObjectValue(0);
    }
    else {
      temp_v4 = FUN_002a2814();
      if (temp_v4 != 0) {
        campCecDestroyOverlay(0);
        FUN_002c39dc(1,0,0xffffffff);
        FUN_00284ee4(1);
        *(unsigned char *)(puVar2 + 0x29) = 9;
        FUN_0020d700();
        campSetSpriteAnimationPreset(1,1,0xffffffff,0);
        puVar2[9] = 6;
        campChangeState(2);
        campReleaseRegisteredTouchRegions();
      }
    }
    break;
  case 0x47:
    temp_v4 = FUN_002a21e8();
    if (temp_v4 != 0) {
      temp_v4 = objectApplyIfUnblocked(puVar2 + 0x7b);
      if (temp_v4 < 1) {
        temp_v6 = 7;
      }
      else {
        temp_v6 = 0x34;
      }
      sysPlaySe(temp_v6);
      temp_v4 = puVar2[10];
      campChangeState(temp_v4);
    }
    break;
  case 0x48:
    temp_v4 = recordValueIsZero();
    if (temp_v4 != 0) {
      FUN_003492dc();
      campShowSelectedEntryHelp(0);
      FUN_0021b274(3,0xffffffff,0);
      puVar2[9] = 6;
      temp_v4 = 5;
      campChangeState(temp_v4);
    }
    break;
  case 0x49:
    FUN_00163aa4();
    temp_v4 = 0;
    do {
      FUN_00163aa4(puVar2 + temp_v4 * 0x23 + 0x245);
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 8);
    if (*(char *)((int)puVar2 + 0x6e2) != '\0') {
      FUN_002c39dc(0x11,0,0xffffffff);
      FUN_00284ee4(0);
      FUN_00215bbc();
      FUN_00331380(1);
      temp_v4 = 0x4a;
      campChangeState(temp_v4);
    }
    break;
  case 0x4b:
    FUN_00163aa4();
    temp_v4 = 0;
    do {
      FUN_00163aa4(puVar2 + temp_v4 * 0x23 + 0x245);
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 8);
    if (*(char *)((int)puVar2 + 0x6e2) != '\0') {
      FUN_002c39dc(0x13,0,0xffffffff);
      FUN_00284ee4(0);
      FUN_00215bbc();
      FUN_00331380(1);
      temp_v4 = 0x4c;
      campChangeState(temp_v4);
    }
    break;
  case 0x4c:
    temp_v4 = FUN_00284e94();
    if (temp_v4 != 0) {
      temp_v4 = partyPanelHasMembers();
      if (temp_v4 != 0) {
        *(unsigned char *)(puVar12 + 0x29) = 4;
        *(unsigned char *)(puVar12 + 0x2a) = 2;
      }
      if (*(char *)(puVar12 + 0x29) != '\b') {
        FUN_002c39dc(1,0,0xffffffff);
      }
      if (*(char *)(puVar12 + 0xcaa) != '\0') {
        temp_v4 = partyPanelHasMembers();
        if (temp_v4 == 0) {
          *(unsigned char *)(puVar12 + 0x29) = 1;
        }
        *(unsigned char *)(puVar12 + 0xcaa) = 0;
      }
      FUN_003a7788();
      FUN_0020d700();
      puVar12[9] = 6;
      campChangeState(2);
      if (*(char *)(puVar12 + 0x29) != '\b') {
        campSetSpriteAnimationPreset(1,1,0xffffffff,0);
        temp_v4 = FUN_0034919c();
        if (temp_v4 == 0) {
          FUN_0037c8e4(1,0);
          messageRestoreBanner();
          FUN_002f78a0(puVar12);
        }
      }
      FUN_002add8c();
      temp_v0 = *(char *)(puVar12 + 0x29);
      if (temp_v0 == '\b') {
        campSetSpriteAnimationPreset(2,1,0xffffffff,0);
        uniteSetMode(3);
        uniteStartOrQueueRequest(0);
      }
    }
    break;
  case 0x4d:
    FUN_002bf4f4(0);
    messageDismissNumericBanner(1);
    slotSetRequest(0,10,0xff);
    slotSetRequest(1,10,0xff);
    campChangeState(0x4f);
    g_gameState.f005f19ef = 1;
    break;
  case 0x4f:
    temp_v4 = FUN_002e07f4();
    if (temp_v4 != 0) {
      FUN_002bf4f4(1);
      temp_v4 = 0x55;
      campChangeState(temp_v4);
    }
    break;
  case 0x50:
    temp_v4 = flagAt4IsClear();
    if (temp_v4 != 0) {
      FUN_003b01e8();
      puVar12 = g_camp;
      temp_v2 = FUN_003c0dcc();
      *(unsigned char *)((int)puVar12 + 0x32b2) = temp_v2;
      temp_v2 = FUN_003b6f00();
      *(unsigned char *)((int)puVar12 + 0x32b3) = temp_v2;
      campResetScreen();
      uiSpriteSetKeyframe(puVar2 + 0x1b9,3,0);
      campShowSelectedEntryHelp(0);
      puVar2[9] = 6;
      temp_v4 = 5;
      campChangeState(temp_v4);
    }
    break;
  case 0x51:
    temp_v4 = obj14IsZero();
    if (temp_v4 != 0) {
      FUN_0039c0e4();
      puVar12 = g_camp;
      temp_v2 = FUN_003c0dcc();
      *(unsigned char *)((int)puVar12 + 0x32b2) = temp_v2;
      temp_v2 = FUN_003b6f00();
      *(unsigned char *)((int)puVar12 + 0x32b3) = temp_v2;
      campResetScreen();
      uiSpriteSetKeyframe(puVar2 + 0x1b9,3,0);
      campShowSelectedEntryHelp(0);
      puVar2[9] = 6;
      temp_v4 = 5;
      campChangeState(temp_v4);
    }
    break;
  case 0x52:
    temp_v4 = FUN_002c2bd0();
    if (temp_v4 != 0) {
      FUN_0031d088();
      campResetScreen();
      uiSpriteSetKeyframe(puVar2 + 0x1b9,3,0);
      campShowSelectedEntryHelp(0);
      puVar2[9] = 6;
      temp_v4 = 5;
      campChangeState(temp_v4);
    }
    break;
  case 0x53:
    temp_v4 = FUN_003ae848();
    if ((temp_v4 != 0) && (temp_v4 = loadSlotIsLoaded(0x3a), temp_v4 != 0)) {
      FUN_0037a2e4();
      temp_v4 = 0x54;
      campChangeState(temp_v4);
    }
    break;
  case 0x54:
    temp_v4 = titleConfigIsClosed();
    if (temp_v4 != 0) {
      freeTexTable24();
      dataTableFree(0x3a);
      uiSpriteSetKeyframe(puVar2 + 0x1b9,3,0);
      campShowSelectedEntryHelp(0);
      puVar2[9] = 6;
      temp_v4 = 5;
      campChangeState(temp_v4);
    }
    break;
  case 0x55:
    aocScriptReleaseTableAndReset();
    FUN_003a76b8();
    FUN_00330b74();
    campReleaseRegisteredTouchRegions();
    partyPanelDestroy();
    campCommonBgRelease();
    campButtonHelpRelease();
    FUN_002e26a4();
    jobStop(*puVar12,0);
    asdMemFree(puVar12);
    g_camp = (unsigned int *)0x0;
    break;
  case 0x56:
    temp_v4 = aocDataBlockHasEntries();
    if (temp_v4 != 0) {
      campChangeState(0x55);
    }
  }
  puVar2[5] = puVar2[5] + 1;
  return 0;
}

} /* extern "C" */
