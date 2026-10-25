/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f5294` (_code @ 0x1f5294, 0x7094 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/W6_W6Match3_ContentWordList.h"

extern "C" {

u32 contentBuildWordList(u32 unused, u32 id, ContentWordList* output);

int FUN_00178b04(...);
int slotSetRequest(...);
int FUN_001ff014(...);
int statusDownRestartTransition(void);
int FUN_002a74ac(void);
int sysMemClear(...);
int FUN_0031db84(...);
int arrayContainsU16(...);
int uniteReleaseExit(void);
int FUN_0034c340(...);
int FUN_003857b4(...);
int pairLogDestroy(void);
int FUN_0039c744(void);
int fusionPrepareSpecialRecipeList(void);
int soundChannelStopAll(...);
int linkHolderSetFlag(...);
int linkHolderClearFlag(...);
int FUN_0040aa6c(void);
int flagValueSub(...);
int fusionClassifyRecipeAvailability(...);
int wordAt1B0Clear(...);

int partyFindSlotById(...);
int scrollOwnerSetValue(...);
int FUN_002a5e7c(...);
int FUN_002a6894(...);
int panelSetMode3(...);
int FUN_0031f688(void);
int pairLogAppend(...);
int FUN_00333dc8(...);
int FUN_00334694(...);
int FUN_00359a08(...);
int FUN_0035dc10(void);
int FUN_0035dd60(...);
int uniteCreatePreviewModel(void);
int FUN_00408184(...);
int countersRaiseA(...);
int FUN_004bd17c(...);
int dispatchIfFound(...);
int bitsAt60Clear(...);
int FUN_004d0d70(void);
int FUN_004dbdf8(...);
int SBORROW4(...);

int uiSpriteSelectAnim(...);
int FUN_0022e774(void);
int recordGetModeForId(...);
int FUN_0028a538(...);
int statusPanelSetOpen(...);
int flaggedEntrySetValueA(...);
int FUN_003343c0(...);
int objBInitBlock19D0(...);
int FUN_0033449c(...);
int messageDismissNumericBanner(...);
int uniteListRebuild(...);
int FUN_003bb710(...);
int FUN_003c3f8c(...);
int FUN_003c9354(void);
int FUN_003cca18(...);
int FUN_004a8750(...);
int FUN_004bcd90(...);
int FUN_004d0eec(void);
int FUN_004da5c4(...);
int FUN_004da6e0(...);
int __aeabi_memcpy4(...);

int slotRecordFindById(...);
int FUN_00215bd0(void);
int fusionSortPairs(void);
int useCounterStart(void);
int FUN_0023b45c(...);
int ifTouchRegionAdd(...);
int resourceRunEmbeddedOperationIfUnblocked(...);
int scrollOwnerSelectIndex(...);
int FUN_002c8538(...);
int FUN_002c8550(...);
int rt_memclr(...);
int FUN_002f3a90(void);
int FUN_0031f208(...);
int sortMenuAcquire(...);
int FUN_0031f718(...);
int FUN_0032d0c8(...);
int unitRecordBuild(...);
int statusDisplayBindUnitRecord(...);
int FUN_003347e8(...);
int FUN_0034a9c4(...);
int skillHelpUpdateAttributeAndTarget(...);
int FUN_0035ad50(...);
int useCounterRelease(void);
int panelSetTarget(...);
int FUN_0037c8e4(...);
int FUN_0037e1b0(...);

int qsort(...);
int FUN_00184310(...);
int uiSpriteSetKeyframe(...);
int gameGetSlotRecord(...);
int gameGetSlotTable(void);
int FUN_0026264c(...);
int FUN_002a4964(...);
int FUN_002a4b28(...);
int selectionGetValidatedField(...);
int findSkillMetadataById(void);
int bitsAt60Test(...);
int FUN_004da77c(...);
int entryDefIsAvailable(...);

int eventQueueAddUniqueIfValid(...);
int ifTouchRegionRemove(void);
int FUN_001643b4(...);
int FUN_001834a4(...);
int FUN_00183f58(...);
int FUN_0019de98(...);
int FUN_00228b04(...);
int FUN_00231574(void);
int resourceRunOperationIfUnblocked(...);
int FUN_002a4894(...);
int objectApplyIfUnblocked(...);
int FUN_003450d4(...);
int bitsHolderSetBit(...);
int FUN_00359974(...);
int gameFlagSetValue(...);

int FUN_00184b90(...);
int dataTableGet(...);
int gameFlagIsSet(...);
int dataTableGetCount(...);
int dataTableGetEntries(void);
int ptrListRemoveClearOwner(...);
int FUN_00203b40(...);
int FUN_0020b908(...);
int uniteSortCandidateList(void);
int FUN_00215bbc(void);
int FUN_00284ee4(...);
int FUN_0028a2e8(...);
int FUN_002c39dc(...);
int FUN_0031d890(void);
int contentEntryFindById(void);
int partyPanelSetHidden(...);
int fusionListAvailableSpecialRecipes(...);

int FUN_001517b4(...);
int FUN_00163aa4(...);
int sysPlaySe(...);
int uniteStartOrQueueRequest(...);
int rebuildFusionCatalogLists(void);
int uniteCameraInitialize(...);
int FUN_002a7b74(void);
int frameTexSetValue(...);
int FUN_002c8894(void);
int FUN_003343f0(...);
int buttonHelpGetValue(void);
int soundChannelRequestIfEnabled(...);
int FUN_003d54f8(...);
int FUN_003f9ac4(int, int *, int);
int controllerRefreshAtUnitScale(...);
int FUN_003fe86c(...);
int FUN_0040a908(...);
int FUN_0040a918(...);
int FUN_0040aad4(...);
int FUN_0040ab7c(...);
int handleRegistryRegisterObject(...);
int FUN_0040ae70(int, int);
int resourceOwnerLoadNamed(int, unsigned char *);

typedef int romwright_code(...);
/* stack frame of void: 22 slot(s), 83 byte(s) */
typedef struct {
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp158; /* 0x158: local_158 */
    unsigned int sp16C; /* 0x16c: local_16c */
    unsigned int sp284; /* 0x284: local_284 */
    unsigned int sp288; /* 0x288: local_288 */
    unsigned int sp290; /* 0x290: local_290 */
    unsigned int sp29C; /* 0x29c: local_29c */
    unsigned char sp2A4; /* 0x2a4: local_2a4 */
    unsigned short sp36E; /* 0x36e: local_36e */
    unsigned int sp388; /* 0x388: local_388 */
    unsigned int sp398; /* 0x398: local_398 */
    unsigned int sp3A8; /* 0x3a8: local_3a8 */
    unsigned int sp3AC; /* 0x3ac: local_3ac */
    unsigned int sp3B0; /* 0x3b0: local_3b0 */
    unsigned int sp3B4; /* 0x3b4: local_3b4 */
    unsigned int sp3B8; /* 0x3b8: local_3b8 */
    unsigned int sp3BC; /* 0x3bc: local_3bc */
    unsigned int sp3C0; /* 0x3c0: local_3c0 */
    unsigned int sp3C4; /* 0x3c4: local_3c4 */
    unsigned int sp3C8; /* 0x3c8: local_3c8 */
    unsigned int sp3CC; /* 0x3cc: local_3cc */
    unsigned int sp3D0; /* 0x3d0: local_3d0 */
} void_stack;

extern unsigned char LAB_001f5964; /* 0x1f5964 */
extern unsigned char LAB_001fa588; /* 0x1fa588 */
extern int FUN_002b2ca8(...); /* 0x2b2ca8 */
extern int g_handleRegistry; /* 0x56fcc0 */
extern int *g_unite; /* 0x57f290 */

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: qsort. */
extern int gameDataBlocksGetSaveData(void);
/* Supplied declaration required: FUN_001517b4. */
extern int engineCleanupIsDone(void);
/* Supplied declaration required: FUN_00163aa4. */
extern int FUN_00163e84(unsigned int);
/* Supplied declaration required: eventQueueAddUniqueIfValid. */
/* Supplied declaration required: ifTouchRegionRemove. */
/* Supplied declaration required: FUN_001643b4. */
extern int ifTouchGetButtonHelpValue(void);
/* Supplied declaration required: sysPlaySe. */
extern unsigned short recordGetScaledMaximum(int);
/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_00183f58. */
/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: uiSpriteSelectAnim. */
/* Supplied declaration required: uiSpriteSetKeyframe. */
/* Supplied declaration required: FUN_00184b90. */
/* Supplied declaration required: dataTableGet. */
/* Supplied declaration required: gameFlagIsSet. */
/* Supplied declaration required: dataTableGetCount. */
/* Supplied declaration required: dataTableGetEntries. */
/* Supplied declaration required: FUN_0019de98. */
/* Supplied declaration required: slotRecordFindById. */
/* Supplied declaration required: gameGetSlotRecord. */
/* Supplied declaration required: gameGetSlotTable. */
/* Supplied declaration required: ptrListRemoveClearOwner. */
/* Supplied declaration required: partyFindSlotById. */
/* Supplied declaration required: slotSetRequest. */
/* Supplied declaration required: FUN_001ff014. */
/* Supplied declaration required: FUN_00203b40. */
/* Supplied declaration required: FUN_0020b908. */
/* Supplied declaration required: uniteSortCandidateList. */
/* Supplied declaration required: FUN_00215bbc. */
/* Supplied declaration required: FUN_00215bd0. */
/* Supplied declaration required: fusionSortPairs. */
extern int scrRunOpcodesStub(int);
/* Supplied declaration required: FUN_00228b04. */
extern unsigned long long FUN_00229210(int);
extern int FUN_0022e714(void);
/* Supplied declaration required: FUN_0022e774. */
/* Supplied declaration required: FUN_00231574. */
extern int messageMainIsWindowActive(void);
extern int useCounterIsFinished(void);
/* Supplied declaration required: useCounterStart. */
extern int FUN_0023b3b8(void);
extern int FUN_0023b3d0(void);
/* Supplied declaration required: FUN_0023b45c. */
/* Supplied declaration required: uniteStartOrQueueRequest. */
extern int FUN_0026140c(void);
/* Supplied declaration required: FUN_0026264c. */
extern int messageMainIsIdle(void);
/* Supplied declaration required: rebuildFusionCatalogLists. */
/* Supplied declaration required: recordGetModeForId. */
/* Supplied declaration required: ifTouchRegionAdd. */
extern int FUN_00284e94(void);
/* Supplied declaration required: FUN_00284ee4. */
/* Supplied declaration required: uniteCameraInitialize. */
/* Supplied declaration required: FUN_0028a2e8. */
/* Supplied declaration required: FUN_0028a538. */
/* Supplied declaration required: resourceRunEmbeddedOperationIfUnblocked. */
/* Supplied declaration required: resourceRunOperationIfUnblocked. */
extern int FUN_002a4878(int *);
/* Supplied declaration required: FUN_002a4894. */
/* Supplied declaration required: scrollOwnerSetValue. */
/* Supplied declaration required: scrollOwnerSelectIndex. */
/* Supplied declaration required: FUN_002a4964. */
/* Supplied declaration required: FUN_002a4b28. */
extern int messageGetChoiceResult(void);
/* Supplied declaration required: FUN_002a5e7c. */
/* Supplied declaration required: FUN_002a6894. */
/* Supplied declaration required: statusDownRestartTransition. */
/* Supplied declaration required: statusPanelSetOpen. */
extern int FUN_002a7410(void);
extern int FUN_002a748c(void);
/* Supplied declaration required: FUN_002a74ac. */
/* Supplied declaration required: FUN_002a7b74. */
extern int FUN_002ac2b4(unsigned int, unsigned char);
/* Supplied declaration required: frameTexSetValue. */
extern unsigned int computeCountLimit(void);
extern int widgetSubCallIfVisible(int *);
/* Supplied declaration required: objectApplyIfUnblocked. */
/* Supplied declaration required: FUN_002c39dc. */
extern int useCounterGetCurrentValue(void);
extern int FUN_002c7cb4(void);
/* Supplied declaration required: FUN_002c8538. */
/* Supplied declaration required: FUN_002c8550. */
extern int FUN_002c8748(void);
/* Supplied declaration required: FUN_002c8894. */
extern int FUN_002c905c(void);
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: rt_memclr. */
extern int FUN_002effbc(void);
/* Supplied declaration required: FUN_002f3a90. */
/* Supplied declaration required: panelSetMode3. */
extern int flaggedEntryGetValueA(int *);
/* Supplied declaration required: flaggedEntrySetValueA. */
/* Supplied declaration required: FUN_0031d890. */
/* Supplied declaration required: FUN_0031db84. */
/* Supplied declaration required: FUN_0031f208. */
/* Supplied declaration required: sortMenuAcquire. */
/* Supplied declaration required: FUN_0031f688. */
/* Supplied declaration required: FUN_0031f718. */
/* Supplied declaration required: pairLogAppend. */
/* Supplied declaration required: selectionGetValidatedField. */
/* Supplied declaration required: FUN_0032d0c8. */
/* Supplied declaration required: arrayContainsU16. */
/* Supplied declaration required: unitRecordBuild. */
/* Supplied declaration required: uniteReleaseExit. */
/* Supplied declaration required: FUN_00333dc8. */
extern int gameGlobalsGetState(void);
/* Supplied declaration required: statusDisplayBindUnitRecord. */
/* Supplied declaration required: FUN_003343c0. */
/* Supplied declaration required: FUN_003343f0. */
/* Supplied declaration required: objBInitBlock19D0. */
/* Supplied declaration required: FUN_0033449c. */
/* Supplied declaration required: FUN_00334694. */
/* Supplied declaration required: FUN_003347e8. */
extern unsigned int asdVramBGetFreeBytes(void);
/* Supplied declaration required: buttonHelpGetValue. */
/* Supplied declaration required: FUN_003450d4. */
/* Supplied declaration required: bitsHolderSetBit. */
extern int uiSearchPrimary(int *);
/* Supplied declaration required: FUN_0034a9c4. */
extern int uiQuestIsCreated(void);
/* Supplied declaration required: FUN_0034c340. */
/* Supplied declaration required: FUN_00359974. */
/* Supplied declaration required: FUN_00359a08. */
/* Supplied declaration required: skillHelpUpdateAttributeAndTarget. */
/* Supplied declaration required: FUN_0035ad50. */
/* Supplied declaration required: useCounterRelease. */
extern int FUN_0035db94(void);
/* Supplied declaration required: FUN_0035dc10. */
/* Supplied declaration required: FUN_0035dd60. */
/* Supplied declaration required: contentEntryFindById. */
/* Supplied declaration required: uniteCreatePreviewModel. */
extern int lmapSceneGetScript(void);
extern int panelStateIs0(void);
/* Supplied declaration required: panelSetTarget. */
/* Supplied declaration required: FUN_0037c8e4. */
/* Supplied declaration required: FUN_0037e1b0. */
/* Supplied declaration required: FUN_003857b4. */
/* Supplied declaration required: messageDismissNumericBanner. */
/* Supplied declaration required: pairLogDestroy. */
/* Supplied declaration required: FUN_0039c744. */
extern int partyPanelIsStateTwentyFive(void);
/* Supplied declaration required: fusionPrepareSpecialRecipeList. */
/* Supplied declaration required: uniteListRebuild. */
/* Supplied declaration required: FUN_003bb710. */
/* Supplied declaration required: partyPanelSetHidden. */
/* Supplied declaration required: findSkillMetadataById. */
/* Supplied declaration required: FUN_003c3f8c. */
/* Supplied declaration required: FUN_003c9354. */
/* Supplied declaration required: FUN_003cca18. */
/* Supplied declaration required: soundChannelRequestIfEnabled. */
/* Supplied declaration required: soundChannelStopAll. */
/* Supplied declaration required: FUN_003d54f8. */
/* Supplied declaration required: linkHolderSetFlag. */
/* Supplied declaration required: linkHolderClearFlag. */
/* Supplied declaration required: FUN_003f9ac4. */
/* Supplied declaration required: controllerRefreshAtUnitScale. */
/* Supplied declaration required: gameFlagSetValue. */
/* Supplied declaration required: FUN_003fe86c. */
/* Supplied declaration required: FUN_00408184. */
/* Supplied declaration required: countersRaiseA. */
/* Supplied declaration required: FUN_0040a908. */
/* Supplied declaration required: FUN_0040a918. */
/* Supplied declaration required: FUN_0040aa6c. */
/* Supplied declaration required: FUN_0040aad4. */
/* Supplied declaration required: FUN_0040ab7c. */
extern int FUN_0040ab8c(int);
extern int modelListInit(void);
/* Supplied declaration required: handleRegistryRegisterObject. */
/* Supplied declaration required: FUN_0040ae70. */
extern int FUN_0040af60(int);
/* Supplied declaration required: resourceOwnerLoadNamed. */
/* Supplied declaration required: flagValueSub. */
/* Supplied declaration required: FUN_004a8750. */
/* Supplied declaration required: FUN_004bcd90. */
/* Supplied declaration required: FUN_004bd17c. */
/* Supplied declaration required: dispatchIfFound. */
/* Supplied declaration required: bitsAt60Test. */
/* Supplied declaration required: bitsAt60Clear. */
extern unsigned int FUN_004d0cd4(void);
/* Supplied declaration required: FUN_004d0d70. */
/* Supplied declaration required: FUN_004d0eec. */
/* Supplied declaration required: FUN_004da5c4. */
/* Supplied declaration required: FUN_004da6e0. */
/* Supplied declaration required: FUN_004da77c. */
extern int FUN_004dad8c(int);
/* Supplied declaration required: entryDefIsAvailable. */
/* Supplied declaration required: fusionClassifyRecipeAvailability. */
/* Supplied declaration required: fusionListAvailableSpecialRecipes. */
extern int FUN_004db65c(int, unsigned short, unsigned short, int *);
/* Supplied declaration required: FUN_004dbdf8. */
/* Supplied declaration required: wordAt1B0Clear. */
/* Supplied declaration required: __aeabi_memcpy4. */


unsigned int FUN_001f5294(void)

{
/* irregular: 17 goto(s); 160 native warning(s); review required */
  short temp_v0;
  unsigned short temp_v1;
  int *piVar3;
  unsigned char temp_v2;
  unsigned short temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned short *puVar10;
  unsigned int temp_v8;
  unsigned short *puVar12;
  romwright_code *pcVar13;
  unsigned int temp_v9;
  unsigned short *puVar15;
  int **ppiVar16;
  int *piVar17;
  unsigned int temp_v10;
  int *piVar19;
  int temp_v11;
  char temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  romwright_code *pcVar23;
  short *psVar24;
  short temp_v16;
  unsigned char temp_v17;
  unsigned char temp_v18;
  int temp_v19;
  int temp_v20;
  int temp_v21;
  int temp_v22;
  int temp_v23;
  unsigned long long temp_v24;
  int *temp_v25;
  int temp_v26;
  unsigned int *temp_v27;
  int *temp_v28;
  int *temp_v29;
  int *temp_v30;
  int *temp_v31;
  int *temp_v32;
  int *temp_v33;
  unsigned int temp_v34;
  int temp_v35;
  int iStack_3a4;
  int iStack_3a0;
  int iStack_39c;
  int temp_v36;
  int iStack_394;
  int iStack_390;
  int iStack_38c;
  int temp_v37;
  int iStack_384;
  unsigned short temp_v38;
  unsigned int temp_v39 [2];
  int *temp_v40 [3];
  int temp_v41;
  int temp_v42;
  int *temp_v43;
  unsigned short temp_v44 [124];
  short asStack_170 [2];
  int temp_v45;
  int *temp_v46;
  unsigned int temp_v47 [8];
  
  piVar3 = g_unite;
  ppiVar16 = &temp_v25;
  temp_v4 = FUN_0026140c();
  psVar24 = (short *)(temp_v4 + 0x20);
  temp_v18 = 0;
  temp_v47[0] = 0;
  temp_v39[0] = (((unsigned int)(temp_v39[0]) & 0xffffff00U) | (((unsigned int)('\0') & 0xffU) << 0));
  FUN_00163aa4(piVar3 + 9);
  FUN_00163aa4(piVar3 + 0x2c);
  FUN_00163aa4(piVar3 + 0x4f);
  FUN_00163aa4(piVar3 + 0x95);
  piVar19 = g_unite;
  if ((((g_unite != (int *)0x0) && ((char)g_unite[0x10c] != '\0')) &&
      (temp_v5 = scrRunOpcodesStub(g_unite[0x10b]), temp_v5 == 2)) &&
     ((temp_v5 = messageMainIsIdle(), temp_v5 != 0 || (piVar19[0x100] == 0x14)))) {
    temp_v5 = piVar19[0x10d];
    if ((temp_v5 == 8 || temp_v5 == 9) ||
       ((temp_v5 == 10 || temp_v5 == 0xb || (temp_v5 == 0xc || temp_v5 == 0xe)))) {
      FUN_003343f0(0);
      buttonHelpGetValue();
      sysPlaySe();
    }
    if (piVar19[0x10d] == 0xd) {
      FUN_003343f0(0);
    }
    *(unsigned char *)(piVar19 + 0x10c) = 0;
    if (-1 < piVar19[0x122]) {
      uniteStartOrQueueRequest();
      piVar19[0x122] = -1;
    }
  }
  temp_v5 = piVar3[0x100];
  if ((temp_v5 != 0x17 && temp_v5 != 0x18) && ((temp_v5 != 0x19 && temp_v5 != 0x20) && temp_v5 != 0x21)) {
    temp_v5 = piVar3[0x2497];
    if (temp_v5 != 0) {
      if (temp_v5 != 1) {
        if (temp_v5 == 2) {
          if (piVar3[0x2484] != 0) {
            FUN_003f9ac4(piVar3[0x2484],piVar3 + 0x2485,0);
          }
          FUN_002c8894();
        }
      }
      else {
        if (piVar3[0x2498] >= 0x1e0) {
          FUN_003fe86c(*(unsigned int *)(piVar3[0x2482] + 4),0,2);
          if (piVar3[0x2483] != 0) {
            FUN_003fe86c(*(unsigned int *)(piVar3[0x2483] + 4),0,2);
          }
          controllerRefreshAtUnitScale(piVar3[0x2484],piVar3 + 0x2485,0);
          FUN_003f9ac4(piVar3[0x2484],piVar3 + 0x2485,0);
          piVar3[0x2498] = 0x3c;
        }
        if (piVar3[0x2484] != 0) {
          FUN_003f9ac4(piVar3[0x2484],piVar3 + 0x2485,0);
        }
        FUN_002c8894();
        piVar3[0x2498] = piVar3[0x2498] + 1;
      }
    }
    else {
      temp_v5 = FUN_0040ab8c(piVar3[0x2482]);
      if (((temp_v5 != 0) && (temp_v5 = FUN_0040ab8c(piVar3[0x2483]), temp_v5 != 0)) &&
         (temp_v6 = FUN_00163e84(0), temp_v5 = g_handleRegistry, temp_v6 != 0)) {
        *(unsigned int *)(g_handleRegistry + 0x34) = *(unsigned int *)(g_handleRegistry + 0x34) & 0xfffffffe;
        temp_v6 = FUN_0040af60(temp_v5);
        if (temp_v6 != 0) {
          *(unsigned char *)(piVar3 + 0x2496) = 0;
        }
        else {
          resourceOwnerLoadNamed(temp_v5,&LAB_001f5964);
          *(unsigned char *)(piVar3 + 0x2496) = 1;
          FUN_0040ae70(temp_v5,1);
          *(unsigned char *)(*(int *)(temp_v5 + 0x14) + 0xc4) = 0;
        }
        controllerRefreshAtUnitScale(piVar3[0x2484],piVar3 + 0x2485,0);
        uniteCameraInitialize(piVar3 + 0x2485);
        temp_v26 = 0x20000;
        temp_v7 = asdVramBGetFreeBytes();
        if (temp_v7 >= 0x20001) {
          temp_v26 = 0x30000;
        }
        FUN_0040ab7c(piVar3[0x2482],0);
        FUN_0040a908(piVar3[0x2482],temp_v26);
        FUN_0040a918(piVar3[0x2482],temp_v26);
        FUN_0040aad4(piVar3[0x2482],0);
        temp_v5 = *(int *)(piVar3[0x2482] + 4);
        handleRegistryRegisterObject(g_handleRegistry,temp_v5);
        FUN_003fe86c(temp_v5,0,2);
        *(unsigned int *)(temp_v5 + 4) = *(unsigned int *)(temp_v5 + 4) & 0xfffffffc;
        FUN_0040ab7c(piVar3[0x2483],0);
        FUN_0040a908(piVar3[0x2483],temp_v26);
        FUN_0040a918(piVar3[0x2483],temp_v26);
        FUN_0040aad4(piVar3[0x2483],0);
        temp_v5 = *(int *)(piVar3[0x2483] + 4);
        handleRegistryRegisterObject(g_handleRegistry,temp_v5);
        FUN_003fe86c(temp_v5,0,2);
        *(unsigned int *)(temp_v5 + 4) = *(unsigned int *)(temp_v5 + 4) & 0xfffffffc;
        piVar3[0x2497] = piVar3[0x2497] + 1;
        FUN_003d54f8(0,10);
        piVar3[0x123] = 0x100007b;
        piVar3[0x124] = 0;
        soundChannelRequestIfEnabled(0x100007b,0,0x3c);
        frameTexSetValue(0);
      }
    }
  }
  piVar3[0x174] = piVar3[0x174] + 1;
  piVar19 = g_unite;
  temp_v5 = piVar3[0x100];
  if (temp_v5 == 5 || temp_v5 == 6) {
    temp_v17 = (char)piVar3[0x2424] != '\0';
    temp_v12 = '\0';
    if (temp_v17) {
      temp_v12 = *(char *)(temp_v4 + 0x33);
    }
    if (temp_v17 && temp_v12 != '\0') {
      temp_v4 = 1;
      FUN_001517b4();
      if (temp_v4 != 0) {
        FUN_002a7b74();
        uniteStartOrQueueRequest(3);
        *(unsigned char *)(piVar3 + 0x2424) = 0;
        piVar3[0x172] = 0;
      }
      return 0;
    }
  }
  switch(temp_v5) {
  case 0:
    if ((char)piVar3[0x108] == '\0') {
      rebuildFusionCatalogLists();
      FUN_0028a2e8(0);
      FUN_00184b90(piVar3,1);
      FUN_0020b908(5,1);
      temp_v4 = gameFlagIsSet(0x455);
      if ((temp_v4 != 0) || ((g_unite != (int *)0x0 && (g_unite[0x10d] == 0x16)))) {
        FUN_002a7b74();
        temp_v15 = 3;
      }
      else {
        FUN_002a7b74();
        temp_v15 = 0x16;
      }
      uniteStartOrQueueRequest(temp_v15);
    }
    if ((char)piVar3[0x108] == '\x01') {
      FUN_00184b90(piVar3,1);
      FUN_0020b908(0x1e,1);
      partyPanelSetHidden(1);
      temp_v4 = gameFlagIsSet(0x456);
      if ((temp_v4 != 0) || ((g_unite != (int *)0x0 && (g_unite[0x10d] == 0x17)))) {
        FUN_00215bbc();
        FUN_002c39dc(0x12,0,0xffffffff);
        FUN_002a7b74();
        piVar19 = g_unite;
        if ((g_unite != (int *)0x0) && (g_unite[0x2483] != 0)) {
          ptrListRemoveClearOwner(g_handleRegistry,*(unsigned int *)(g_unite[0x2483] + 4));
          piVar17 = (int *)piVar19[0x2483];
          if (piVar17 != (int *)0x0) {
            (**(romwright_code **)(*piVar17 + 4))();
            piVar19[0x2483] = 0;
          }
        }
      }
      else {
        FUN_002a7b74();
        uniteStartOrQueueRequest(0x17);
        sysPlaySe(0xa0);
        FUN_002c39dc(0,0,0xffffffff);
      }
      FUN_0031d890();
      FUN_00284ee4(1);
    }
    if ((char)piVar3[0x108] == '\x02') {
      temp_v4 = *piVar3;
      fusionListAvailableSpecialRecipes(temp_v4,piVar3 + 0x23df);
      *(short *)(piVar3 + 0x23de) = (short)temp_v4;
      if (temp_v4 != 0) {
        if (piVar3[0xff] != 3) {
          if (piVar3[0xff] >= 3) {
            temp_v25 = (int *)0x1;
            temp_v26 = 1;
            FUN_00203b40(piVar3 + 0x23ac,temp_v4,10,1);
            temp_v25 = (int *)0x1;
            temp_v26 = 1;
            FUN_00203b40(piVar3 + 0x23c5,(short)piVar3[0x23de],1,4);
            piVar19 = piVar3 + 0x19a6;
            *piVar19 = 0;
            temp_v4 = 0;
            if ((short)piVar3[0x23de] != 0) {
              do {
                temp_v7 = (unsigned int)*(unsigned short *)((int)piVar3 + temp_v4 * 2 + 0x8f7c);
                contentEntryFindById();
                temp_v5 = temp_v4 + 1;
                *(unsigned short *)((int)piVar3 + temp_v4 * 2 + 0x62a0) = *(unsigned short *)(temp_v7 + 0x1a);
                *piVar19 = *piVar19 + 1;
                temp_v4 = temp_v5;
              } while (temp_v5 < (int)(unsigned int)*(unsigned short *)(piVar3 + 0x23de));
            }
            FUN_00184b90(piVar3,1);
            FUN_0020b908(0x1b,1);
            uniteSortCandidateList();
          }
        }
        else {
          temp_v4 = gameFlagIsSet(0x457);
          if ((temp_v4 != 0) || ((g_unite != (int *)0x0 && (g_unite[0x10d] == 0x18)))) {
            FUN_002a7b74();
            temp_v15 = 4;
          }
          else {
            FUN_002a7b74();
            temp_v15 = 0x18;
          }
          uniteStartOrQueueRequest(temp_v15);
        }
      }
    }
    if ((char)piVar3[0x108] == '\x03') {
      piVar3[0x241e] = 0;
      piVar3[0x241f] = 0;
      piVar3[0x2420] = 0;
      piVar3[0x2421] = 0;
      piVar3[0x2422] = 0;
      piVar3[0x2423] = 0;
      FUN_0020b908(2,1);
      piVar3[0x2428] = -1;
      *(unsigned char *)(piVar3 + 0x2424) = 1;
    }
    if ((char)piVar3[0x108] == '\x04') {
      temp_v10 = 0;
      temp_v7 = temp_v10;
      do {
        temp_v15 = dataTableGet(0x24,1);
        puVar10 = (unsigned short *)dataTableGetEntries();
        temp_v9 = dataTableGetCount(temp_v15);
        temp_v8 = 0;
        if (temp_v8 < temp_v9) {
          do {
            if (*puVar10 == temp_v10) {
              if ((puVar10 != (unsigned short *)0x0) &&
                 ((puVar10[1] == 0 || (temp_v4 = gameFlagIsSet(), temp_v4 != 0)))) {
                temp_v4 = temp_v7 * 2;
                temp_v7 = temp_v7 + 1;
                *(short *)((int)piVar3 + temp_v4 + 0x90a8) = (short)temp_v10;
              }
              break;
            }
            temp_v8 = temp_v8 + 1;
            puVar10 = puVar10 + 0x20;
          } while (temp_v8 < temp_v9);
        }
        temp_v10 = (temp_v10 + 1) & 0xffff;
      } while (temp_v10 < 0x50);
      temp_v25 = (int *)0x1;
      temp_v26 = 1;
      FUN_00203b40(piVar3 + 0x2452,temp_v7,10,1);
      FUN_00184b90(piVar3,1);
      FUN_0020b908(3,1);
      FUN_002a7b74();
    }
    if ((char)piVar3[0x108] == '\x05') {
      FUN_0020b908(2,1);
      FUN_002a7b74();
    }
  default:
    piVar3[0xff] = piVar3[0xff] + 1;
    return 0;
  case 3:
    temp_v12 = *(char *)((int)piVar3 + 0x252);
    FUN_00163aa4(piVar3 + 0x72);
    if (*(char *)((int)piVar3 + 0x252) != '\0') {
      temp_v4 = 0;
      if (temp_v12 == '\0') {
        do {
          temp_v3 = FUN_001643b4(0x1a,temp_v4 + 0x2e);
          temp_v5 = temp_v4 * 2;
          temp_v4 = temp_v4 + 1;
          *(unsigned short *)((int)piVar3 + temp_v5 + 0x438) = temp_v3;
        } while (temp_v4 < 10);
        temp_v3 = FUN_001643b4(0x1a,499);
        *(unsigned short *)((int)piVar3 + 0x476) = temp_v3;
        temp_v3 = FUN_001643b4(0x1a,0x1f1);
        *(unsigned short *)((int)piVar3 + 0x472) = temp_v3;
        temp_v3 = FUN_001643b4(0x1a,0x1f2);
        *(unsigned short *)(piVar3 + 0x11d) = temp_v3;
      }
      temp_v4 = uiQuestIsCreated();
      if ((temp_v4 != 0) && (temp_v4 = FUN_002c8748(), temp_v4 == 0)) {
        piVar3[0x103] = 4;
        FUN_0020b908(0x24,1);
        temp_v4 = 0;
        do {
          *(unsigned short *)((int)piVar3 + temp_v4 * 2 + 0x438) = 0xffff;
          ifTouchRegionRemove();
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < 10);
        *(unsigned short *)((int)piVar3 + 0x476) = 0xffff;
        *(unsigned short *)((int)piVar3 + 0x472) = 0xffff;
        *(unsigned short *)(piVar3 + 0x11d) = 0xffff;
        ifTouchRegionRemove();
        ifTouchRegionRemove();
        ifTouchRegionRemove();
      }
      if ((char)piVar3[0x10c] == '\0') {
        temp_v4 = ifTouchGetButtonHelpValue();
        if (temp_v4 == 0xa0) {
          sysPlaySe(0x5e);
        }
        temp_v15 = FUN_001834a4(0x1a,0x1f0);
        temp_v26 = (int)(short)piVar3[0x11d];
        temp_v27 = temp_v39;
        temp_v29 = (int *)0x1;
        temp_v28 = (int *)0x0;
        temp_v25 = (int *)(int)*(short *)((int)piVar3 + 0x472);
        piVar17 = piVar3 + 0x2452;
        piVar19 = piVar17;
        FUN_003450d4(piVar17,temp_v15,piVar3 + 0x10e,(int)*(short *)((int)piVar3 + 0x476));
        if ((piVar19 == (int *)0x0) &&
           (piVar19 = piVar17, FUN_00228b04(piVar17,1), piVar19 == (int *)0x0)) {
          temp_v4 = 0;
          FUN_001517b4(0,1);
          if (!(temp_v4 == 0 && (char)temp_v39[0] == '\0')) {
            temp_v4 = resourceRunOperationIfUnblocked(piVar17);
            temp_v5 = FUN_002a4894(piVar17);
            temp_v16 = *(short *)((int)piVar3 + (temp_v5 + temp_v4) * 2 + 0x90a8);
            temp_v15 = dataTableGet(0x24,1);
            psVar24 = (short *)dataTableGetEntries();
            temp_v7 = dataTableGetCount(temp_v15);
            temp_v10 = 0;
            if (temp_v10 < temp_v7) {
              do {
                if (*psVar24 == temp_v16) {
                  if (psVar24 != (short *)0x0) {
                    eventQueueAddUniqueIfValid(0x100020e);
                    FUN_002a7b74();
                    uniteStartOrQueueRequest(*(unsigned int *)(psVar24 + 2));
                    sysPlaySe(0xa0);
                    temp_v4 = resourceRunOperationIfUnblocked(piVar17);
                    temp_v5 = FUN_002a4894(piVar17);
                    bitsHolderSetBit(*(unsigned short *)((int)piVar3 + (temp_v5 + temp_v4) * 2 + 0x90a8));
                  }
                  break;
                }
                temp_v10 = temp_v10 + 1;
                psVar24 = psVar24 + 0x20;
              } while (temp_v10 < temp_v7);
            }
          }
          else {
            temp_v4 = 1;
            FUN_001517b4();
            if (temp_v4 != 0) {
              piVar3[0x103] = 0x28;
              FUN_0020b908(0x24,1);
              temp_v4 = 0;
              do {
                *(unsigned short *)((int)piVar3 + temp_v4 * 2 + 0x438) = 0xffff;
                ifTouchRegionRemove();
                temp_v4 = temp_v4 + 1;
              } while (temp_v4 < 10);
              *(unsigned short *)((int)piVar3 + 0x476) = 0xffff;
              *(unsigned short *)((int)piVar3 + 0x472) = 0xffff;
              *(unsigned short *)(piVar3 + 0x11d) = 0xffff;
              ifTouchRegionRemove();
              ifTouchRegionRemove();
              ifTouchRegionRemove();
              eventQueueAddUniqueIfValid(0x100020f);
            }
          }
        }
      }
    }
    piVar3[0xff] = piVar3[0xff] + 1;
    return 0;
  case 4:
    temp_v4 = uiQuestIsCreated();
    if ((temp_v4 != 0) || (temp_v4 = engineCleanupIsDone(), temp_v4 == 0)) {
      piVar3[0xff] = piVar3[0xff] + 1;
      return 0;
    }
    FUN_00184b90(piVar3,1);
    temp_v15 = 1;
    temp_v4 = 3;
    break;
  case 5:
    if (piVar3[0xff] < 3) {
      piVar3[0xff] = piVar3[0xff] + 1;
      return 0;
    }
    if (piVar3[0xff] == 4) {
      if (g_unite != (int *)0x0) {
        if (g_unite[0x10d] != 0x16) {
          piVar19 = (int *)g_unite[0x122];
        }
        if (g_unite[0x10d] != 0x16 && piVar19 != (int *)0x16) {
          sysPlaySe(0x53);
          FUN_00183f58(0,8,0x2d,1);
          FUN_00183f58(1,0);
          FUN_00183f58(2,0,0,1);
        }
        else {
          sysPlaySe(0xa0);
        }
      }
      else {
        sysPlaySe(0x53);
        FUN_00183f58(0,8,0x2d,1);
        FUN_00183f58(1,0);
        FUN_00183f58(2,0,0,1);
      }
      temp_v5 = resourceRunOperationIfUnblocked();
      temp_v6 = FUN_002a4894(piVar3 + 0x13f);
      temp_v10 = piVar3[temp_v6 + temp_v5 + 0x249f];
      temp_v15 = dataTableGet(0x24,0);
      temp_v5 = dataTableGetEntries();
      temp_v7 = dataTableGetCount(temp_v15);
      if (temp_v10 < temp_v7) {
        temp_v5 = temp_v5 + temp_v10 * 0x94 + 0x44;
      }
      else {
        temp_v5 = 0;
      }
      FUN_0019de98(temp_v5,0xf4f4f4ff);
    }
    temp_v12 = *(char *)((int)piVar3 + 0x252);
    FUN_00163aa4(piVar3 + 0x72);
    if (*(char *)((int)piVar3 + 0x252) == '\0') {
      piVar3[0xff] = piVar3[0xff] + 1;
      return 0;
    }
    if (temp_v12 == '\0') {
      temp_v5 = 0;
      do {
        temp_v6 = objectApplyIfUnblocked(piVar3 + 0x13f);
        if (temp_v6 <= temp_v5) break;
        temp_v3 = FUN_001643b4(0x1a,temp_v5 + 0xa9);
        temp_v6 = temp_v5 * 2;
        temp_v5 = temp_v5 + 1;
        *(unsigned short *)((int)piVar3 + temp_v6 + 0x438) = temp_v3;
      } while (temp_v5 < 8);
      temp_v3 = FUN_001643b4(0x1a,0x1f0);
      *(unsigned short *)((int)piVar3 + 0x476) = temp_v3;
      temp_v3 = FUN_001643b4(0x1a,0x1ee);
      *(unsigned short *)((int)piVar3 + 0x472) = temp_v3;
      temp_v3 = FUN_001643b4(0x1a,0x1ef);
      *(unsigned short *)(piVar3 + 0x11d) = temp_v3;
    }
    if (g_unite != (int *)0x0) {
      piVar19 = g_unite;
      if (g_unite[0x10d] != 0x16) {
        piVar19 = (int *)g_unite[0x122];
      }
      if (g_unite[0x10d] == 0x16 || piVar19 == (int *)0x16) {
        if ((char)g_unite[0x10c] != '\0') {
          piVar3[0xff] = piVar3[0xff] + 1;
          return 0;
        }
        gameFlagSetValue(0x455,1);
        FUN_002a7b74();
        uniteStartOrQueueRequest(3);
        sysPlaySe(0x53);
        FUN_00183f58(0,8,0x2d,1);
        FUN_00183f58(1,0);
        FUN_00183f58(2,0,0,1);
      }
    }
    if (((char)piVar3[0x2424] != '\0') || (temp_v5 = messageMainIsWindowActive(), temp_v5 == 0)) {
      piVar3[0xff] = piVar3[0xff] + 1;
      return 0;
    }
    if (((char)piVar3[0x2424] == '\0') && (0 < piVar3[0x2428])) {
      piVar3[0x2428] = -1;
      if ((unsigned int)piVar3[0x172] >= (unsigned int)piVar3[0x171]) {
        FUN_002a7b74();
        temp_v15 = 0xd;
      }
      else {
        if (*(char *)(temp_v4 + 0x37) != '\0') {
          FUN_00359974(0x18,piVar3[0x19a6],0xffffffff,0);
          FUN_00359974(0x19,piVar3[0x19a6],0xffffffff,0);
        }
        else {
          FUN_00359974(0x18,piVar3[0x19a6],0xffffffff,0);
          FUN_00359974(0x19,piVar3[0x172],0xffffffff,0);
        }
        FUN_002a7b74();
        temp_v15 = 2;
      }
      uniteStartOrQueueRequest(temp_v15);
    }
    temp_v5 = 10;
    FUN_001517b4(10,1);
    if (temp_v5 != 0) {
      temp_v10 = piVar3[0x172];
      temp_v7 = temp_v13;
      if (temp_v10 != 0) {
        temp_v7 = piVar3[0x171];
      }
      if ((temp_v10 != 0 && temp_v10 < temp_v7) &&
         ((g_unite == (int *)0x0 || (g_unite[0x10d] != 3)))) {
        piVar3[0x103] = 0xb;
        FUN_0020b908(0x24,1);
        if (*(char *)(temp_v4 + 0x38) == '\0') {
          FUN_00231574();
        }
        FUN_002a7b74();
        uniteStartOrQueueRequest(4);
        temp_v5 = 0;
        do {
          *(unsigned short *)((int)piVar3 + temp_v5 * 2 + 0x438) = 0xffff;
          ifTouchRegionRemove();
          temp_v5 = temp_v5 + 1;
        } while (temp_v5 < 8);
        *(unsigned short *)((int)piVar3 + 0x476) = 0xffff;
        *(unsigned short *)((int)piVar3 + 0x472) = 0xffff;
        *(unsigned short *)(piVar3 + 0x11d) = 0xffff;
        ifTouchRegionRemove();
        ifTouchRegionRemove();
        ifTouchRegionRemove();
        temp_v15 = 0x100020e;
        eventQueueAddUniqueIfValid(temp_v15);
      }
      else {
        temp_v18 = 1;
        if (*(char *)(temp_v4 + 0x33) != '\0') {
          FUN_002a7b74();
          uniteStartOrQueueRequest(0x11);
          piVar3[0x174] = 0;
        }
        eventQueueAddUniqueIfValid(0x100020e);
      }
    }
    else {
      temp_v5 = 9;
      FUN_001517b4(9,1);
      if (temp_v5 != 0) {
        temp_v5 = FUN_0026140c();
        *(unsigned short *)(temp_v5 + 0x20) = 0xffff;
        *(unsigned short *)(temp_v5 + 0x22) = 0xffff;
        *(unsigned short *)(temp_v5 + 0x24) = 0;
        *(unsigned short *)(temp_v5 + 0x26) = 0;
        *(unsigned short *)(temp_v5 + 0x28) = 0;
        *(unsigned char *)(temp_v5 + 0x43) = 0;
        *(unsigned short *)(temp_v5 + 0x2a) = 0;
        *(unsigned short *)(temp_v5 + 0x2c) = 0;
        *(unsigned short *)(temp_v5 + 0x2e) = 0xffff;
        *(unsigned char *)(temp_v5 + 0x33) = 0;
        *(unsigned char *)(temp_v5 + 0x34) = 0;
        *(unsigned char *)(temp_v5 + 0x35) = 0xff;
        *(unsigned char *)(temp_v5 + 0x37) = 0;
        *(unsigned char *)(temp_v5 + 0x36) = *(unsigned char *)(temp_v5 + 0x36) & 0xfc;
        rebuildFusionCatalogLists();
        temp_v18 = 1;
        piVar3[0x172] = 0;
        temp_v15 = 0x100020f;
        eventQueueAddUniqueIfValid(temp_v15);
      }
      else {
        temp_v15 = FUN_001834a4(0x1a,0x1f0);
        temp_v26 = (int)(short)piVar3[0x11d];
        temp_v27 = temp_v39;
        temp_v28 = (int *)0x0;
        temp_v29 = (int *)0x1;
        temp_v25 = (int *)(int)*(short *)((int)piVar3 + 0x472);
        piVar17 = piVar3 + 0x13f;
        piVar19 = piVar17;
        FUN_003450d4(piVar17,temp_v15,piVar3 + 0x10e,(int)*(short *)((int)piVar3 + 0x476));
        if (piVar19 != (int *)0x0) {
          temp_v5 = resourceRunOperationIfUnblocked(piVar17);
          temp_v6 = FUN_002a4894(piVar17);
          temp_v10 = piVar3[temp_v6 + temp_v5 + 0x249f];
          temp_v15 = dataTableGet(0x24,0);
          temp_v5 = dataTableGetEntries();
          temp_v7 = dataTableGetCount(temp_v15);
          if (temp_v7 <= temp_v10) {
            temp_v5 = 0;
            FUN_0019de98(temp_v5,0xf4f4f4ff);
          }
          else {
            temp_v5 = temp_v5 + temp_v10 * 0x94 + 0x44;
            FUN_0019de98(temp_v5,0xf4f4f4ff);
          }
        }
        else {
          piVar19 = piVar17;
          FUN_00228b04(piVar17,1);
          if (piVar19 != (int *)0x0) {
            temp_v5 = resourceRunOperationIfUnblocked(piVar17);
            temp_v6 = FUN_002a4894(piVar17);
            temp_v10 = piVar3[temp_v6 + temp_v5 + 0x249f];
            temp_v15 = dataTableGet(0x24,0);
            temp_v5 = dataTableGetEntries();
            temp_v7 = dataTableGetCount(temp_v15);
            if (temp_v10 >= temp_v7) {
              temp_v5 = 0;
            }
            else {
              temp_v5 = temp_v5 + temp_v10 * 0x94 + 0x44;
            }
            FUN_0019de98(temp_v5,0xf4f4f4ff);
          }
          else {
            temp_v5 = 0;
            FUN_001517b4(0,1);
            if (!(temp_v5 == 0 && (char)temp_v39[0] == '\0')) {
              temp_v5 = resourceRunOperationIfUnblocked(piVar17);
              temp_v6 = FUN_002a4894(piVar17);
              temp_v10 = piVar3[temp_v6 + temp_v5 + 0x249f];
              temp_v26 = dataTableGet(0x24,0);
              temp_v5 = dataTableGetEntries();
              temp_v7 = dataTableGetCount(temp_v26);
              if (temp_v10 >= temp_v7) {
                temp_v7 = 0xffffffff;
              }
              else {
                temp_v7 = (unsigned int)*(unsigned char *)(temp_v5 + temp_v10 * 0x94);
              }
              temp_v10 = selectionGetValidatedField();
              piVar19 = (int *)0x0;
              temp_v28 = (int *)0x0;
              switch(temp_v7) {
              case 0:
                temp_v5 = 0;
                do {
                  temp_v6 = gameGetSlotTable();
                  if (-1 < *(char *)(temp_v6 + temp_v5 + 0x1c88)) {
                    temp_v6 = gameGetSlotTable();
                    temp_v15 = gameGetSlotRecord((int)*(char *)(temp_v6 + temp_v5 + 0x1c88));
                    temp_v6 = bitsAt60Test(temp_v15,10);
                    if (temp_v6 == 0) {
                      piVar19 = (int *)((int)piVar19 + 1);
                      temp_v6 = gameGetSlotTable();
                      if ((int)*(char *)(temp_v6 + temp_v5 + 0x1c88) == (int)*psVar24) {
                        temp_v28 = piVar19;
                      }
                    }
                  }
                  temp_v5 = temp_v5 + 1;
                } while (temp_v5 < 0x18);
                temp_v25 = (int *)0x1;
                temp_v26 = 1;
                FUN_00203b40(piVar3 + 0x158,(int)piVar19 + 1,8,1);
                FUN_002a4964(piVar3 + 0x158,temp_v28);
                uiSpriteSetKeyframe(piVar3 + 0x95,5,0);
                FUN_0020b908(6,1);
                break;
              case 1:
                temp_v25 = (int *)0x1;
                temp_v26 = 1;
                FUN_00203b40(piVar3 + 0x158,piVar3[0x4e9] + 1,8,1);
                if (-1 < (int)temp_v10) {
                  temp_v5 = 0;
                  if (temp_v5 < piVar3[0x4e9]) {
                    do {
                      if (*(unsigned short *)((int)piVar3 + temp_v5 * 2 + 0x5d4) == temp_v10) {
                        FUN_002a4964(piVar3 + 0x158,temp_v5 + 1);
                        break;
                      }
                      temp_v5 = temp_v5 + 1;
                    } while (temp_v5 < piVar3[0x4e9]);
                  }
                }
                uiSpriteSetKeyframe(piVar3 + 0x95,5,0);
                FUN_0020b908(6,1);
                break;
              case 2:
                temp_v25 = (int *)0x1;
                temp_v26 = 1;
                FUN_00203b40(piVar3 + 0x158,0xb,8,1);
                if (-1 < (int)temp_v10) {
                  FUN_002a4964(piVar3 + 0x158,temp_v10);
                }
                uiSpriteSetKeyframe(piVar3 + 0x95,5,0);
                FUN_0020b908(6,1);
                break;
              case 3:
                temp_v25 = (int *)0x1;
                temp_v26 = 1;
                FUN_00203b40(piVar3 + 0x158,piVar3[0x4ea] + 1,8,1);
                if (-1 < (int)temp_v10) {
                  temp_v5 = 0;
                  if (temp_v5 < piVar3[0x4ea]) {
                    do {
                      if (*(unsigned short *)((int)piVar3 + temp_v5 * 2 + 0xf36) == temp_v10) {
                        FUN_002a4964(piVar3 + 0x158,temp_v5 + 1);
                        break;
                      }
                      temp_v5 = temp_v5 + 1;
                    } while (temp_v5 < piVar3[0x4ea]);
                  }
                }
                uiSpriteSetKeyframe(piVar3 + 0x95,5,0);
                FUN_0020b908(6,1);
                break;
              case 4:
                temp_v25 = (int *)0x1;
                temp_v26 = 1;
                FUN_00203b40(piVar3 + 0x158,piVar3[0x4eb] + 1,8,1);
                if (-1 < (int)temp_v10) {
                  temp_v5 = 0;
                  if (temp_v5 < piVar3[0x4eb]) {
                    do {
                      if (*(unsigned short *)((int)piVar3 + temp_v5 * 2 + 0xfb8) == temp_v10) {
                        FUN_002a4964(piVar3 + 0x158,temp_v5 + 1);
                        break;
                      }
                      temp_v5 = temp_v5 + 1;
                    } while (temp_v5 < piVar3[0x4eb]);
                  }
                }
                uiSpriteSetKeyframe(piVar3 + 0x95,5,0);
                FUN_0020b908(6,1);
                break;
              case 5:
                temp_v25 = (int *)0x1;
                temp_v26 = 1;
                FUN_00203b40(piVar3 + 0x158,0x15,8,1);
                goto joined_r0x001f6a20;
              case 6:
                temp_v25 = (int *)0x1;
                temp_v26 = 1;
                FUN_00203b40(piVar3 + 0x158,9,8,1);
joined_r0x001f6a20:
                if (-1 < (int)temp_v10) {
                  FUN_002a4964(piVar3 + 0x158,temp_v10 + 1);
                }
                uiSpriteSetKeyframe(piVar3 + 0x95,5,0);
                FUN_0020b908(6,1);
                break;
              case 7:
                temp_v18 = 1;
                *(unsigned char *)(temp_v4 + 0x33) = *(unsigned char *)(temp_v4 + 0x33) ^ 1;
                break;
              case 8:
                temp_v18 = 1;
                *(unsigned char *)(temp_v4 + 0x34) = *(unsigned char *)(temp_v4 + 0x34) ^ 1;
                break;
              case 9:
                temp_v18 = 1;
                *(unsigned char *)(temp_v4 + 0x37) = *(unsigned char *)(temp_v4 + 0x37) ^ 1;
                break;
              case 10:
                temp_v18 = 1;
                temp_v2 = *(unsigned char *)(temp_v4 + 0x36) ^ 1;
                *(unsigned char *)(temp_v4 + 0x36) = temp_v2;
                break;
              case 0xb:
                if (*(char *)(temp_v4 + 0x30) == '\0') {
                  *(unsigned char *)(temp_v4 + 0x30) = 1;
                  FUN_0028a2e8(1);
                  temp_v15 = 9;
                }
                else {
                  temp_v15 = 10;
                }
                FUN_0020b908(temp_v15,1);
                break;
              case 0xc:
                if (*(char *)(temp_v4 + 0x31) != '\0') {
                  temp_v15 = 10;
                  FUN_0020b908(temp_v15,1);
                  break;
                }
                *(unsigned char *)(temp_v4 + 0x31) = 1;
                FUN_0028a2e8(1);
                temp_v15 = 9;
                FUN_0020b908(temp_v15,1);
                break;
              case 0xd:
                if (*(char *)(temp_v4 + 0x32) != '\0') {
                  temp_v15 = 10;
                  FUN_0020b908(temp_v15,1);
                  break;
                }
                *(unsigned char *)(temp_v4 + 0x32) = 1;
                FUN_0028a2e8(1);
                temp_v15 = 9;
                FUN_0020b908(temp_v15,1);
                break;
              case 0xe:
                temp_v5 = 0;
                do {
                  temp_v6 = gameGetSlotTable();
                  if (-1 < *(char *)(temp_v6 + temp_v5 + 0x1c88)) {
                    temp_v6 = gameGetSlotTable();
                    temp_v15 = gameGetSlotRecord((int)*(char *)(temp_v6 + temp_v5 + 0x1c88));
                    temp_v6 = bitsAt60Test(temp_v15,10);
                    if (temp_v6 == 0) {
                      piVar19 = (int *)((int)piVar19 + 1);
                      temp_v6 = gameGetSlotTable();
                      if ((int)*(char *)(temp_v6 + temp_v5 + 0x1c88) == (int)*(short *)(temp_v4 + 0x22)) {
                        temp_v28 = piVar19;
                      }
                    }
                  }
                  temp_v5 = temp_v5 + 1;
                } while (temp_v5 < 0x18);
                temp_v25 = (int *)0x1;
                temp_v26 = 1;
                FUN_00203b40(piVar3 + 0x158,(int)piVar19 + 1,8,1);
                FUN_002a4964(piVar3 + 0x158,temp_v28);
                uiSpriteSetKeyframe(piVar3 + 0x95,5,0);
                FUN_0020b908(6,1);
                break;
              case 0xf:
                temp_v2 = *(unsigned char *)(temp_v4 + 0x36) ^ 2;
                *(unsigned char *)(temp_v4 + 0x36) = temp_v2;
              }
              temp_v15 = 0x100020e;
            }
            else {
              temp_v5 = 1;
              FUN_001517b4();
              if (temp_v5 == 0) goto LAB_001f6b9c;
              FUN_0020b908(8,1);
              FUN_00184b90(piVar3,3);
              temp_v5 = 0;
              do {
                *(unsigned short *)((int)piVar3 + temp_v5 * 2 + 0x438) = 0xffff;
                ifTouchRegionRemove();
                temp_v5 = temp_v5 + 1;
              } while (temp_v5 < 8);
              *(unsigned short *)((int)piVar3 + 0x476) = 0xffff;
              *(unsigned short *)((int)piVar3 + 0x472) = 0xffff;
              *(unsigned short *)(piVar3 + 0x11d) = 0xffff;
              ifTouchRegionRemove();
              ifTouchRegionRemove();
              ifTouchRegionRemove();
              temp_v15 = 0x100020f;
            }
            eventQueueAddUniqueIfValid(temp_v15);
          }
        }
      }
    }
LAB_001f6b9c:
    if (((char)piVar3[0x2424] == '\0') && (temp_v18)) {
      *(unsigned char *)(piVar3 + 0x2424) = 1;
      piVar3[0x2428] = -1;
      if (*(char *)(temp_v4 + 0x33) != '\0') {
        FUN_002a7b74();
        uniteStartOrQueueRequest(0x11);
        piVar3[0x174] = 0;
      }
    }
    piVar3[0xff] = piVar3[0xff] + 1;
    return 0;
  case 6:
    if (piVar3[0xff] < 4) {
      piVar3[0xff] = piVar3[0xff] + 1;
      return 0;
    }
    temp_v18 = 0;
    if (piVar3[0xff] == 4) {
      sysPlaySe(0x54);
      temp_v5 = 0;
      do {
        temp_v6 = objectApplyIfUnblocked(piVar3 + 0x158);
        if (temp_v6 <= temp_v5) break;
        temp_v3 = FUN_001643b4(0x1a,temp_v5 + 0x22a);
        temp_v6 = temp_v5 * 2;
        temp_v5 = temp_v5 + 1;
        *(unsigned short *)((int)piVar3 + temp_v6 + 0x44c) = temp_v3;
      } while (temp_v5 < 8);
      temp_v18 = 1;
    }
    temp_v15 = FUN_001834a4(0x1a,0x1f0);
    temp_v26 = (int)(short)piVar3[0x11d];
    temp_v29 = (int *)0x1;
    temp_v27 = temp_v39;
    temp_v28 = (int *)0x0;
    temp_v25 = (int *)(int)*(short *)((int)piVar3 + 0x472);
    piVar19 = piVar3 + 0x158;
    FUN_003450d4(piVar19,temp_v15,piVar3 + 0x113,(int)*(short *)((int)piVar3 + 0x476));
    if (piVar19 == (int *)0x0) {
      piVar19 = piVar3 + 0x158;
      FUN_00228b04(piVar19,1);
      if (piVar19 == (int *)0x0) {
        temp_v5 = 0;
        FUN_001517b4(0,1);
        if (!(temp_v5 == 0 && (char)temp_v39[0] == '\0')) {
          temp_v5 = resourceRunOperationIfUnblocked();
          temp_v6 = FUN_002a4894(piVar3 + 0x13f);
          temp_v10 = piVar3[temp_v6 + temp_v5 + 0x249f];
          temp_v15 = dataTableGet(0x24,0);
          temp_v5 = dataTableGetEntries();
          temp_v7 = dataTableGetCount(temp_v15);
          if (temp_v10 >= temp_v7) {
            temp_v31 = (int *)0xffffffff;
          }
          else {
            temp_v31 = (int *)(unsigned int)*(unsigned char *)(temp_v5 + temp_v10 * 0x94);
          }
          temp_v32 = (int *)selectionGetValidatedField(temp_v31);
          temp_v5 = resourceRunOperationIfUnblocked(piVar3 + 0x158);
          temp_v6 = FUN_002a4894(piVar3 + 0x158);
          temp_v6 = temp_v6 + temp_v5;
          switch((unsigned int)temp_v31) {
          case (unsigned int)0x0:
            if (temp_v6 != 0) {
              temp_v11 = 0;
              temp_v5 = 0;
              do {
                temp_v19 = gameGetSlotTable();
                if (-1 < *(char *)(temp_v19 + temp_v5 + 0x1c88)) {
                  temp_v19 = gameGetSlotTable();
                  temp_v19 = gameGetSlotRecord((int)*(char *)(temp_v19 + temp_v5 + 0x1c88));
                  temp_v20 = bitsAt60Test(temp_v19,10);
                  if (temp_v20 == 0) {
                    if (temp_v11 == temp_v6 - 1) {
                      temp_v6 = gameGetSlotTable();
                      *psVar24 = (short)*(char *)(temp_v6 + temp_v5 + 0x1c88);
                      if (temp_v19 != 0) {
                        *(unsigned short *)(temp_v4 + 0x24) = *(unsigned short *)(temp_v19 + 0x62);
                      }
                      else {
                        *(unsigned short *)(temp_v4 + 0x24) = 0;
                      }
                      break;
                    }
                    temp_v11 = temp_v11 + 1;
                  }
                }
                temp_v5 = temp_v5 + 1;
              } while (temp_v5 < 0x18);
            }
            else {
              *psVar24 = -1;
              *(unsigned short *)(temp_v4 + 0x24) = 0;
            }
            break;
          case (unsigned int)0x1:
            if (temp_v6 != 0) {
              *(unsigned short *)(temp_v4 + 0x2a) = *(unsigned short *)((int)piVar3 + temp_v6 * 2 + 0x5d2);
            }
            else {
              *(unsigned short *)(temp_v4 + 0x2a) = 0;
            }
            break;
          case (unsigned int)0x2:
            temp_v7 = 0;
            puVar15 = (unsigned short *)0x0;
            *(char *)(temp_v4 + 0x43) = (char)temp_v6;
            do {
              temp_v5 = *piVar3;
              entryDefIsAvailable(temp_v5,puVar15);
              if (temp_v5 != 0) {
                puVar12 = puVar15;
                FUN_00184310();
                temp_v5 = FUN_002a4b28(*puVar12);
                if ((temp_v5 != 0) || (temp_v5 = FUN_0026264c(*puVar12), temp_v5 != 0)) {
                  temp_v24 = FUN_004da77c(*piVar3,puVar12[3],(int)*(char *)(temp_v4 + 0x43));
                  temp_v10 = (unsigned int)((unsigned long long)temp_v24 >> 0x20);
                  if ((int)temp_v24 != 0) {
                    temp_v9 = (unsigned int)*(short *)(temp_v4 + 0x28);
                    if (temp_v9 != 0) {
                      temp_v10 = (unsigned int)*(unsigned char *)(puVar12 + 1);
                    }
                    if (temp_v9 == 0 || temp_v9 == temp_v10) {
                      temp_v5 = temp_v7 * 2;
                      temp_v7 = temp_v7 + 1;
                      *(unsigned short *)((int)piVar3 + temp_v5 + 0x5d4) = *puVar12;
                    }
                  }
                }
              }
              puVar15 = (unsigned short *)(((int)puVar15 + 1U) & 0xffff);
            } while (puVar15 < (unsigned short *)0x4b1);
            qsort(piVar3 + 0x175,temp_v7,2,FUN_002b2ca8);
            temp_v10 = 0;
            piVar3[0x4e9] = temp_v7;
            if ((int)temp_v7 < 1) {
              temp_v9 = 0;
            }
            else {
              temp_v9 = temp_v7 & 1;
              if (temp_v9 != 0) {
                do {
                  if (*(short *)((int)piVar3 + temp_v10 * 2 + 0x5d4) == *(short *)(temp_v4 + 0x2a))
                  goto LAB_001f707c;
                  temp_v10 = temp_v10 + 1;
                } while ((int)temp_v10 < (int)temp_v9);
              }
            }
            temp_v10 = temp_v9;
            if ((int)temp_v10 < (int)temp_v7) {
              do {
                if (*(short *)((int)piVar3 + temp_v10 * 2 + 0x5d4) == *(short *)(temp_v4 + 0x2a)) break;
                if (*(short *)((int)piVar3 + temp_v10 * 2 + 0x5d6) == *(short *)(temp_v4 + 0x2a)) {
                  temp_v10 = temp_v10 + 1;
                  break;
                }
                temp_v10 = temp_v10 + 2;
              } while ((int)temp_v10 < (int)temp_v7);
            }
LAB_001f707c:
            if ((int)temp_v7 <= (int)temp_v10) {
              *(unsigned short *)(temp_v4 + 0x2a) = 0;
            }
            break;
          case (unsigned int)0x3:
            if (temp_v6 == 0) {
              *(unsigned short *)(temp_v4 + 0x28) = 0;
            }
            else {
              *(unsigned short *)(temp_v4 + 0x28) = *(unsigned short *)((int)piVar3 + temp_v6 * 2 + 0xf34);
            }
            temp_v7 = 0;
            puVar15 = (unsigned short *)0x0;
            do {
              temp_v5 = *piVar3;
              entryDefIsAvailable(temp_v5,puVar15);
              if (temp_v5 != 0) {
                puVar12 = puVar15;
                FUN_00184310();
                temp_v24 = FUN_002a4b28(*puVar12);
                temp_v10 = (unsigned int)((unsigned long long)temp_v24 >> 0x20);
                if ((int)temp_v24 == 0) {
                  temp_v24 = FUN_0026264c(*puVar12);
                  temp_v10 = (unsigned int)((unsigned long long)temp_v24 >> 0x20);
                  if ((int)temp_v24 == 0) goto LAB_001f713c;
                }
                temp_v9 = (unsigned int)*(short *)(temp_v4 + 0x28);
                if (temp_v9 != 0) {
                  temp_v10 = (unsigned int)*(unsigned char *)(puVar12 + 1);
                }
                if ((temp_v9 == 0 || temp_v9 == temp_v10) &&
                   (temp_v5 = FUN_004da77c(*piVar3,puVar12[3],(int)*(char *)(temp_v4 + 0x43)),
                   temp_v5 != 0)) {
                  temp_v5 = temp_v7 * 2;
                  temp_v7 = temp_v7 + 1;
                  *(unsigned short *)((int)piVar3 + temp_v5 + 0x5d4) = *puVar12;
                }
              }
LAB_001f713c:
              puVar15 = (unsigned short *)(((int)puVar15 + 1U) & 0xffff);
            } while (puVar15 < (unsigned short *)0x4b1);
            pcVar23 = FUN_002b2ca8;
            qsort(piVar3 + 0x175,temp_v7);
            pcVar13 = (romwright_code *)0x0;
            if ((int)temp_v7 < 1) {
              pcVar23 = (romwright_code *)0x0;
            }
            piVar3[0x4e9] = temp_v7;
            if ((0 < (int)temp_v7) && (pcVar23 = (romwright_code *)(temp_v7 & 1), pcVar23 != (romwright_code *)0x0)) {
              do {
                if (*(short *)((int)piVar3 + (int)pcVar13 * 2 + 0x5d4) == *(short *)(temp_v4 + 0x2a))
                goto LAB_001f71f0;
                pcVar13 = (romwright_code *)((unsigned char *)pcVar13 + 1);
              } while ((int)pcVar13 < (int)pcVar23);
            }
            pcVar13 = pcVar23;
            if ((int)pcVar13 < (int)temp_v7) {
              do {
                if (*(short *)((int)piVar3 + (int)pcVar13 * 2 + 0x5d4) == *(short *)(temp_v4 + 0x2a))
                break;
                if (*(short *)((int)piVar3 + (int)pcVar13 * 2 + 0x5d6) == *(short *)(temp_v4 + 0x2a))
                {
                  pcVar13 = (romwright_code *)((unsigned char *)pcVar13 + 1);
                  break;
                }
                pcVar13 = (romwright_code *)((unsigned char *)pcVar13 + 2);
              } while ((int)pcVar13 < (int)temp_v7);
            }
LAB_001f71f0:
            if ((int)temp_v7 <= (int)pcVar13) {
              *(unsigned short *)(temp_v4 + 0x2a) = 0;
            }
            break;
          case (unsigned int)0x4:
            if (temp_v6 != 0) {
              *(unsigned short *)(temp_v4 + 0x2c) = *(unsigned short *)((int)piVar3 + temp_v6 * 2 + 0xfb6);
            }
            else {
              *(unsigned short *)(temp_v4 + 0x2c) = 0;
            }
            break;
          case (unsigned int)0x5:
            temp_v10 = 0;
            temp_v7 = 0;
            *(char *)(temp_v4 + 0x35) = (char)temp_v6 - '\x01';
            do {
              temp_v9 = temp_v7;
              findSkillMetadataById();
              temp_v8 = temp_v14;
              if (((temp_v9 != 0) &&
                  (temp_v8 = (unsigned int)*(unsigned char *)(temp_v9 + 3), (*(unsigned char *)(temp_v9 + 3) & 0x20) != 0)) &&
                 ((*(char *)(temp_v4 + 0x35) < 0 ||
                  (temp_v8 = *(unsigned int *)(*(char *)(temp_v4 + 0x35) * 4 + 0x52f210),
                  temp_v8 == *(unsigned char *)(temp_v9 + 2))))) {
                temp_v24 = FUN_00229210((int)(short)temp_v7);
                temp_v8 = (unsigned int)((unsigned long long)temp_v24 >> 0x20);
                if ((int)temp_v24 != 0) {
                  temp_v5 = temp_v10 * 2;
                  temp_v10 = temp_v10 + 1;
                  *(short *)((int)piVar3 + temp_v5 + 0xfb8) = (short)temp_v7;
                }
              }
              temp_v7 = (temp_v7 + 1) & 0xffff;
            } while (temp_v7 < 0x1f5);
            if ((int)temp_v10 < 1) {
              temp_v8 = 0;
            }
            piVar3[0x4eb] = temp_v10;
            temp_v7 = 0;
            if ((0 < (int)temp_v10) && (temp_v8 = temp_v10 & 1, temp_v8 != 0)) {
              do {
                if (*(short *)((int)piVar3 + temp_v7 * 2 + 0xfb8) == *(short *)(temp_v4 + 0x2c))
                goto LAB_001f732c;
                temp_v7 = temp_v7 + 1;
              } while ((int)temp_v7 < (int)temp_v8);
            }
            temp_v7 = temp_v8;
            if ((int)temp_v7 < (int)temp_v10) {
              do {
                if (*(short *)((int)piVar3 + temp_v7 * 2 + 0xfb8) == *(short *)(temp_v4 + 0x2c)) break;
                if (*(short *)((int)piVar3 + temp_v7 * 2 + 0xfba) == *(short *)(temp_v4 + 0x2c)) {
                  temp_v7 = temp_v7 + 1;
                  break;
                }
                temp_v7 = temp_v7 + 2;
              } while ((int)temp_v7 < (int)temp_v10);
            }
LAB_001f732c:
            if ((int)temp_v10 <= (int)temp_v7) {
              *(unsigned short *)(temp_v4 + 0x2c) = 0;
            }
            break;
          case (unsigned int)0x6:
            *(short *)(temp_v4 + 0x2e) = (short)temp_v6 - 1;
            break;
          case (unsigned int)0xe:
            if (temp_v6 != 0) {
              temp_v11 = 0;
              temp_v5 = 0;
              do {
                temp_v19 = gameGetSlotTable();
                if (-1 < *(char *)(temp_v19 + temp_v5 + 0x1c88)) {
                  temp_v19 = gameGetSlotTable();
                  temp_v19 = gameGetSlotRecord((int)*(char *)(temp_v19 + temp_v5 + 0x1c88));
                  temp_v20 = bitsAt60Test(temp_v19,10);
                  if (temp_v20 == 0) {
                    if (temp_v11 == temp_v6 - 1) {
                      temp_v6 = gameGetSlotTable();
                      *(short *)(temp_v4 + 0x22) = (short)*(char *)(temp_v6 + temp_v5 + 0x1c88);
                      if (temp_v19 != 0) {
                        *(unsigned short *)(temp_v4 + 0x26) = *(unsigned short *)(temp_v19 + 0x62);
                      }
                      else {
                        *(unsigned short *)(temp_v4 + 0x26) = 0;
                      }
                      break;
                    }
                    temp_v11 = temp_v11 + 1;
                  }
                }
                temp_v5 = temp_v5 + 1;
              } while (temp_v5 < 0x18);
            }
            else {
              *(unsigned short *)(temp_v4 + 0x22) = 0xffff;
              *(unsigned short *)(temp_v4 + 0x26) = 0;
            }
          }
          piVar19 = (int *)selectionGetValidatedField(temp_v31);
          if (piVar19 != temp_v32) {
            *(unsigned char *)(piVar3 + 0x2424) = 1;
            piVar3[0x2428] = -1;
            if (*(char *)(temp_v4 + 0x33) != '\0') {
              FUN_002a7b74();
              uniteStartOrQueueRequest(0x11);
              piVar3[0x174] = 0;
            }
          }
          uiSpriteSetKeyframe(piVar3 + 0x95,5,0);
          FUN_0020b908(5,1);
          temp_v4 = 0;
          do {
            if (-1 < *(short *)((int)piVar3 + temp_v4 * 2 + 0x44c)) {
              *(unsigned short *)((int)piVar3 + temp_v4 * 2 + 0x44c) = 0xffff;
              ifTouchRegionRemove();
            }
            temp_v4 = temp_v4 + 1;
          } while (temp_v4 < 8);
          temp_v15 = 0x100020e;
          eventQueueAddUniqueIfValid(temp_v15);
        }
        else {
          temp_v4 = 1;
          FUN_001517b4();
          if (temp_v4 != 0) {
            uiSpriteSetKeyframe(piVar3 + 0x95,5,0);
            FUN_0020b908(5,1);
            temp_v4 = 0;
            do {
              if (-1 < *(short *)((int)piVar3 + temp_v4 * 2 + 0x44c)) {
                *(unsigned short *)((int)piVar3 + temp_v4 * 2 + 0x44c) = 0xffff;
                ifTouchRegionRemove();
              }
              temp_v4 = temp_v4 + 1;
            } while (temp_v4 < 8);
            temp_v15 = 0x100020f;
            eventQueueAddUniqueIfValid(temp_v15);
          }
        }
        if (!temp_v18) {
          piVar3[0xff] = piVar3[0xff] + 1;
          return 0;
        }
      }
    }
    temp_v4 = resourceRunOperationIfUnblocked();
    temp_v5 = FUN_002a4894(piVar3 + 0x13f);
    temp_v10 = piVar3[temp_v5 + temp_v4 + 0x249f];
    temp_v15 = dataTableGet(0x24,0);
    temp_v4 = dataTableGetEntries();
    temp_v7 = dataTableGetCount(temp_v15);
    if (temp_v10 >= temp_v7) {
      temp_v7 = 0xffffffff;
    }
    else {
      temp_v7 = (unsigned int)*(unsigned char *)(temp_v4 + temp_v10 * 0x94);
    }
    temp_v4 = resourceRunOperationIfUnblocked(piVar3 + 0x158);
    temp_v5 = FUN_002a4894(piVar3 + 0x158);
    if (temp_v7 == 4) {
      if (temp_v5 + temp_v4 != 0) {
        skillHelpUpdateAttributeAndTarget(*(unsigned short *)((int)piVar3 + (temp_v5 + temp_v4) * 2 + 0xfb6));
      }
      else {
        FUN_0019de98(0,0xf4f4f4ff);
      }
    }
    piVar3[0xff] = piVar3[0xff] + 1;
    return 0;
  case 8:
    temp_v4 = FUN_00163aa4(piVar3 + 0x72);
    if (temp_v4 == 0) {
      piVar3[0xff] = piVar3[0xff] + 1;
      return 0;
    }
    temp_v15 = 0;
    temp_v4 = 0x28;
    break;
  case 9:
    if (piVar3[0xff] < 4) {
      piVar3[0xff] = piVar3[0xff] + 1;
      return 0;
    }
    temp_v15 = 1;
    temp_v4 = 5;
    break;
  case 10:
    if (piVar3[0xff] < 4) {
      piVar3[0xff] = piVar3[0xff] + 1;
      return 0;
    }
    temp_v5 = resourceRunOperationIfUnblocked();
    temp_v6 = FUN_002a4894(piVar3 + 0x13f);
    temp_v10 = piVar3[temp_v6 + temp_v5 + 0x249f];
    temp_v15 = dataTableGet(0x24,0);
    temp_v5 = dataTableGetEntries();
    temp_v7 = dataTableGetCount(temp_v15);
    if (temp_v10 < temp_v7) {
      temp_v12 = *(char *)(temp_v5 + temp_v10 * 0x94);
      if (temp_v12 == '\v') {
        *(unsigned char *)(temp_v4 + 0x30) = 0;
      }
      else if (temp_v12 == '\f') {
        *(unsigned char *)(temp_v4 + 0x31) = 0;
      }
      else if (temp_v12 == '\r') {
        *(unsigned char *)(temp_v4 + 0x32) = 0;
      }
    }
    FUN_0028a2e8(1);
    temp_v15 = 1;
    temp_v4 = 5;
    break;
  case 0xb:
    temp_v12 = *(char *)((int)piVar3 + 0x252);
    temp_v5 = FUN_00163aa4(piVar3 + 0x72);
    if (temp_v5 == 0) {
      piVar3[0xff] = piVar3[0xff] + 1;
      return 0;
    }
    if ((temp_v12 == '\0') || ((char)piVar3[0x125] != '\0')) {
      temp_v5 = 0;
      if (*(char *)(temp_v4 + 0x38) != '\0') {
        do {
          temp_v6 = objectApplyIfUnblocked(piVar3 + 0x1876);
          if (temp_v6 <= temp_v5) break;
          temp_v3 = FUN_001643b4(0x1a,temp_v5 + 0x2e);
          temp_v6 = temp_v5 * 2;
          temp_v5 = temp_v5 + 1;
          *(unsigned short *)((int)piVar3 + temp_v6 + 0x438) = temp_v3;
        } while (temp_v5 < 10);
        temp_v3 = FUN_001643b4(0x1a,499);
        *(unsigned short *)((int)piVar3 + 0x476) = temp_v3;
        temp_v3 = FUN_001643b4(0x1a,0x1f1);
        *(unsigned short *)((int)piVar3 + 0x472) = temp_v3;
        temp_v3 = FUN_001643b4(0x1a,0x1f2);
        *(unsigned short *)(piVar3 + 0x11d) = temp_v3;
      }
      else {
        do {
          temp_v6 = widgetSubCallIfVisible(piVar3 + 0x188f);
          if (temp_v6 <= temp_v5) break;
          temp_v3 = FUN_001643b4(0x1a,temp_v5 + 0xe3);
          temp_v6 = temp_v5 * 2;
          temp_v5 = temp_v5 + 1;
          *(unsigned short *)((int)piVar3 + temp_v6 + 0x438) = temp_v3;
        } while (temp_v5 < 4);
        temp_v3 = FUN_001643b4(0x1a,0x1f9);
        *(unsigned short *)((int)piVar3 + 0x476) = temp_v3;
        temp_v3 = FUN_001643b4(0x1a,0x1f8);
        *(unsigned short *)((int)piVar3 + 0x472) = temp_v3;
        temp_v3 = FUN_001643b4(0x1a,0x1f7);
        *(unsigned short *)(piVar3 + 0x11d) = temp_v3;
      }
      *(unsigned char *)(piVar3 + 0x125) = 0;
    }
    if (*(char *)(temp_v4 + 0x38) == '\0') {
      FUN_00231574();
    }
    temp_v5 = messageMainIsWindowActive();
    if (temp_v5 == 0) {
      piVar3[0xff] = piVar3[0xff] + 1;
      return 0;
    }
    if (*(char *)(temp_v4 + 0x38) == '\0') {
      temp_v15 = FUN_001834a4(0x1a,0x1f9);
      temp_v26 = (int)(short)piVar3[0x11d];
      temp_v27 = temp_v39;
      temp_v28 = (int *)0x1;
      temp_v29 = (int *)0x1;
      temp_v25 = (int *)(int)*(short *)((int)piVar3 + 0x472);
      piVar17 = piVar3 + 0x188f;
      piVar19 = piVar17;
      FUN_003450d4(piVar17,temp_v15,piVar3 + 0x10e,(int)*(short *)((int)piVar3 + 0x476));
      if ((piVar19 != (int *)0x0) ||
         (piVar19 = piVar17, FUN_00228b04(piVar17,1), piVar19 != (int *)0x0)) {
        temp_v4 = resourceRunEmbeddedOperationIfUnblocked(piVar17);
        temp_v5 = FUN_002a4878(piVar17);
        FUN_002a4964(piVar3 + 0x1876,temp_v4 + temp_v5);
        piVar3[0xff] = piVar3[0xff] + 1;
        return 0;
      }
      if (*(char *)(temp_v4 + 0x38) != '\0') goto LAB_001f77ec;
    }
    else {
LAB_001f77ec:
      temp_v15 = FUN_001834a4(0x1a,499);
      temp_v26 = (int)(short)piVar3[0x11d];
      temp_v29 = (int *)0x1;
      temp_v27 = temp_v39;
      temp_v28 = (int *)0x0;
      temp_v25 = (int *)(int)*(short *)((int)piVar3 + 0x472);
      piVar17 = piVar3 + 0x1876;
      piVar19 = piVar17;
      FUN_003450d4(piVar17,temp_v15,piVar3 + 0x10e,(int)*(short *)((int)piVar3 + 0x476));
      if ((piVar19 != (int *)0x0) ||
         (piVar19 = piVar17, FUN_00228b04(piVar17,1), piVar19 != (int *)0x0)) {
        temp_v4 = resourceRunOperationIfUnblocked(piVar17);
        temp_v5 = FUN_002a4894(piVar17);
        scrollOwnerSelectIndex(piVar3 + 0x188f,temp_v4 + temp_v5);
        piVar3[0xff] = piVar3[0xff] + 1;
        return 0;
      }
    }
    temp_v5 = 0;
    FUN_001517b4(0,1);
    if (!(temp_v5 == 0 && (char)temp_v39[0] == '\0')) {
      temp_v5 = resourceRunEmbeddedOperationIfUnblocked();
      temp_v6 = FUN_002a4878(piVar3 + 0x188f);
      temp_v1 = *(unsigned short *)((int)piVar3 + (temp_v5 + temp_v6) * 2 + 0x62a0);
      if (*(char *)(temp_v4 + 0x38) != '\0') {
        temp_v5 = resourceRunOperationIfUnblocked();
        temp_v6 = FUN_002a4894(piVar3 + 0x1876);
        temp_v1 = *(unsigned short *)((int)piVar3 + (temp_v6 + temp_v5) * 2 + 0x62a0);
      }
      FUN_00184310((unsigned int)temp_v1);
      rt_memclr((int)piVar3 + 0x6832,3000);
      temp_v7 = 0;
      piVar3[0x1cfb] = 0;
      if (piVar3[0x172] != 0) {
        do {
          if ((unsigned int)temp_v1 == (piVar3[temp_v7 * 2 + 0x4ef] & 0x1ffffU) >> 2) {
            *(short *)((int)piVar3 + piVar3[0x1cfb] * 2 + 0x6832) = (short)temp_v7;
            piVar3[0x1cfb] = piVar3[0x1cfb] + 1;
          }
          temp_v7 = temp_v7 + 1;
        } while (temp_v7 < (unsigned int)piVar3[0x172]);
      }
      fusionSortPairs();
      if ('\0' < *(char *)(temp_v4 + 0x37)) {
        piVar3[0x1cfb] = 1;
      }
      temp_v26 = 1;
      temp_v25 = (int *)0x0;
      FUN_00203b40(piVar3 + 0x19f3,piVar3[0x1cfb],5,1);
      *(unsigned char *)(piVar3 + 0x1a0c) = 0;
      piVar3[0x103] = 0xd;
      FUN_0020b908(0x24,1);
      FUN_0037e1b0((int)(char)piVar3[0x1a0c],1);
      FUN_002c8538(1);
      FUN_00215bd0();
      FUN_002a7b74();
      piVar19 = piVar3 + (unsigned int)*(unsigned short *)((int)piVar3 + 0x6832) * 2 + 0x4ee;
      FUN_002f3a90();
      piVar3[0x106] = (int)piVar19;
      temp_v5 = FUN_003347e8();
      if (temp_v5 != 0) {
        piVar3[0x106] = 0;
        *(unsigned char *)((int)g_unite + 0x92be) = 1;
      }
      else {
        *(unsigned char *)((int)g_unite + 0x92be) = 0;
      }
      if (*(char *)(temp_v4 + 0x33) != '\0') {
        FUN_0037c8e4(1,0);
        panelSetTarget(-piVar3[0x106],0);
      }
      eventQueueAddUniqueIfValid(0x100020e);
    }
    else {
      temp_v5 = 10;
      FUN_001517b4(10,1);
      if (temp_v5 != 0) {
        piVar3[0x103] = 0xb;
        FUN_0020b908(0x24,1);
        temp_v15 = 0x1000210;
        eventQueueAddUniqueIfValid(temp_v15);
      }
      else {
        temp_v5 = 1;
        FUN_001517b4();
        if (temp_v5 != 0) {
          piVar3[0x103] = 5;
          FUN_0020b908(0x24,1);
          FUN_002a7b74();
          uniteStartOrQueueRequest(2);
          temp_v15 = 0x100020f;
          eventQueueAddUniqueIfValid(temp_v15);
        }
        else {
          temp_v5 = 9;
          FUN_001517b4(9,1);
          if (temp_v5 == 0) {
            piVar3[0xff] = piVar3[0xff] + 1;
            return 0;
          }
          eventQueueAddUniqueIfValid(0x100020e);
          sortMenuAcquire(0x11,0);
          FUN_0031f208(1);
          FUN_0031f208(2);
          FUN_0031f208(0x31);
          FUN_0031f208(3);
          useCounterStart();
          FUN_0020b908(0xc,1);
        }
      }
    }
    temp_v5 = 0;
    if (*(char *)(temp_v4 + 0x38) != '\0') {
      do {
        if (-1 < *(short *)((int)piVar3 + temp_v5 * 2 + 0x438)) {
          *(unsigned short *)((int)piVar3 + temp_v5 * 2 + 0x438) = 0xffff;
          ifTouchRegionRemove();
        }
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < 10);
    }
    else {
      do {
        if (-1 < *(short *)((int)piVar3 + temp_v5 * 2 + 0x438)) {
          *(unsigned short *)((int)piVar3 + temp_v5 * 2 + 0x438) = 0xffff;
          ifTouchRegionRemove();
        }
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < 4);
    }
    goto LAB_001fac1c;
  case 0xc:
    temp_v5 = useCounterIsFinished();
    if (temp_v5 == 0) {
      temp_v5 = useCounterGetCurrentValue();
      if ((temp_v5 != 0x69) && (uniteSortCandidateList(), *(char *)(temp_v4 + 0x38) == '\0')) {
        FUN_00231574();
      }
      piVar3[0xff] = piVar3[0xff] + 1;
      return 0;
    }
    useCounterRelease();
    FUN_0020b908(piVar3[0x101],1);
    *(unsigned char *)(piVar3 + 0x125) = 1;
    piVar3[0xff] = piVar3[0xff] + 1;
    return 0;
  case 0xd:
    temp_v45 = 0;
    temp_v40[0] = piVar3 + 0x19f3;
    temp_v5 = resourceRunOperationIfUnblocked();
    temp_v41 = flaggedEntryGetValueA(piVar3 + 0x19f3);
    temp_v41 = temp_v41 + temp_v5;
    temp_v5 = FUN_0023b3d0();
    if ((temp_v5 == 0) || (temp_v5 = FUN_002c905c(), temp_v5 != 0)) {
      piVar3[0xff] = piVar3[0xff] + 1;
      return 0;
    }
    temp_v12 = *(char *)((int)piVar3 + 0x252);
    temp_v5 = FUN_00163aa4(piVar3 + 0x72);
    if (temp_v5 == 0) {
      piVar3[0xff] = piVar3[0xff] + 1;
      return 0;
    }
    if ((temp_v12 == '\0') || ((char)piVar3[0x125] != '\0')) {
      temp_v5 = 0;
      do {
        temp_v6 = objectApplyIfUnblocked(temp_v40[0]);
        if (temp_v6 <= temp_v5) break;
        temp_v3 = FUN_001643b4(0x1a,temp_v5 + 0x125);
        temp_v6 = temp_v5 * 2;
        temp_v5 = temp_v5 + 1;
        *(unsigned short *)((int)piVar3 + temp_v6 + 0x438) = temp_v3;
      } while (temp_v5 < 5);
      temp_v3 = FUN_001643b4(0x1a,499);
      *(unsigned short *)((int)piVar3 + 0x476) = temp_v3;
      temp_v3 = FUN_001643b4(0x1a,0x1f1);
      *(unsigned short *)((int)piVar3 + 0x472) = temp_v3;
      temp_v3 = FUN_001643b4(0x1a,0x1f2);
      *(unsigned short *)(piVar3 + 0x11d) = temp_v3;
      temp_v3 = FUN_001643b4(0x1a,0x1fe);
      temp_v5 = 0;
      *(unsigned short *)(piVar3 + 0x117) = temp_v3;
      do {
        temp_v6 = objectApplyIfUnblocked(temp_v40[0]);
        if (temp_v6 <= temp_v5) break;
        temp_v6 = FUN_001834a4(0x1a,temp_v5 + 0x125);
        temp_v16 = *(short *)(temp_v6 + 8);
        temp_v0 = *(short *)(temp_v6 + 10);
        temp_v6 = FUN_001834a4(0x1a,0x11a);
        temp_v11 = (int)(short)(*(short *)(temp_v6 + 8) + temp_v16);
        ifTouchRegionAdd(temp_v11,(int)(short)(*(short *)(temp_v6 + 10) + temp_v0),
                     (int)**(short **)(temp_v6 + 0xc),(int)(*(short **)(temp_v6 + 0xc))[1]);
        temp_v32 = piVar3 + temp_v5 + 0x100;
        *(short *)((int)piVar3 + temp_v5 * 4 + 0x45e) = (short)temp_v11;
        temp_v6 = FUN_001834a4(0x1a,0x11b);
        temp_v11 = (int)(short)(*(short *)(temp_v6 + 8) + temp_v16);
        ifTouchRegionAdd(temp_v11,(int)(short)(*(short *)(temp_v6 + 10) + temp_v0),
                     (int)**(short **)(temp_v6 + 0xc),(int)(*(short **)(temp_v6 + 0xc))[1]);
        temp_v5 = temp_v5 + 1;
        *(short *)(temp_v32 + 0x18) = (short)temp_v11;
      } while (temp_v5 < 5);
      *(unsigned char *)(piVar3 + 0x125) = 0;
    }
    temp_v5 = FUN_002a7410();
    if (temp_v5 != 0) {
      temp_v4 = FUN_0035db94();
      if (temp_v4 < 0) {
        FUN_00184b90(piVar3,4);
      }
      else {
        temp_v4 = FUN_0035db94();
        if (0 < temp_v4) {
          FUN_00184b90(piVar3,3);
        }
      }
      piVar3[0x102] = 0xd;
      FUN_0020b908(0x22,0);
      temp_v4 = 0;
      do {
        if (-1 < *(short *)((int)piVar3 + temp_v4 * 2 + 0x438)) {
          *(unsigned short *)((int)piVar3 + temp_v4 * 2 + 0x438) = 0xffff;
          ifTouchRegionRemove();
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 5);
      *(unsigned short *)((int)piVar3 + 0x476) = 0xffff;
      *(unsigned short *)((int)piVar3 + 0x472) = 0xffff;
      *(unsigned short *)(piVar3 + 0x11d) = 0xffff;
      ifTouchRegionRemove();
      ifTouchRegionRemove();
      ifTouchRegionRemove();
      *(unsigned short *)(piVar3 + 0x117) = 0xffff;
      ifTouchRegionRemove();
      temp_v4 = 0;
      do {
        if (-1 < *(short *)((int)piVar3 + temp_v4 * 4 + 0x45e)) {
          *(unsigned short *)((int)piVar3 + temp_v4 * 4 + 0x45e) = 0xffff;
          ifTouchRegionRemove();
        }
        if (-1 < (short)piVar3[temp_v4 + 0x118]) {
          *(unsigned short *)(piVar3 + temp_v4 + 0x118) = 0xffff;
          ifTouchRegionRemove();
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 5);
      piVar3[0xff] = piVar3[0xff] + 1;
      return 0;
    }
    temp_v5 = resourceRunOperationIfUnblocked(temp_v40[0]);
    temp_v6 = FUN_002a4894(temp_v40[0]);
    temp_v47[0] = (unsigned int)*(unsigned short *)((int)piVar3 + (temp_v6 + temp_v5) * 2 + 0x6832);
    if (((char)temp_v40[0][0x18] != '\0') && ((char)piVar3[0x1a0c] != '\0')) {
      FUN_0023b45c(0);
    }
    else {
      temp_v5 = FUN_0022e714();
      if (temp_v5 == 0) {
        if ((char)piVar3[0x1a0c] == '\0') {
          FUN_0031f718((piVar3[temp_v47[0] * 2 + 0x4ef] & 0x1ffffU) >> 2,0);
          temp_v7 = (piVar3[temp_v47[0] * 2 + 0x4ef] & 0x1ffffU) >> 2;
          FUN_00184310();
          temp_v10 = computeCountLimit();
          if (temp_v10 < *(unsigned short *)(temp_v7 + 6)) {
            FUN_002c8550(0xd);
          }
          unitRecordBuild((piVar3[temp_v47[0] * 2 + 0x4ef] & 0x1ffffU) >> 2,&temp_v25);
          FUN_0032d0c8(0,1,(piVar3[temp_v47[0] * 2 + 0x4ef] & 0x1ffffU) >> 2,&temp_v25);
        }
        if ((char)piVar3[0x1a0c] == '\x01') {
          temp_v7 = piVar3[temp_v47[0] * 2 + 0x4ee];
          if (temp_v7 >> 0x1e == 1) {
            temp_v15 = slotRecordFindById(temp_v7 & 0x7fff);
            statusDisplayBindUnitRecord(temp_v15,0,1);
          }
          else if (temp_v7 >> 0x1e == 3) {
            FUN_0034a9c4(temp_v7 & 0x7fff,0);
          }
          else {
            FUN_0031f718((unsigned short)temp_v7 & 0x7fff,0);
          }
          ppiVar16 = (int **)slotRecordFindById(piVar3[temp_v47[0] * 2 + 0x4ee] & 0x7fff);
          if (ppiVar16 == (int **)0x0) {
            FUN_0035ad50(piVar3[temp_v47[0] * 2 + 0x4ee] & 0x7fff,&temp_v25);
            ppiVar16 = &temp_v25;
          }
          FUN_0032d0c8(0,1,piVar3[temp_v47[0] * 2 + 0x4ee] & 0x7fff,ppiVar16);
        }
        if ((char)piVar3[0x1a0c] == '\x02') {
          if ((piVar3[temp_v47[0] * 2 + 0x4ef] & 3U) == 1) {
            temp_v15 = slotRecordFindById((piVar3[temp_v47[0] * 2 + 0x4ee] & 0x3fffffffU) >> 0xf);
            statusDisplayBindUnitRecord(temp_v15,0,1);
          }
          else {
            temp_v7 = (piVar3[temp_v47[0] * 2 + 0x4ee] & 0x3fffffffU) >> 0xf;
            if ((piVar3[temp_v47[0] * 2 + 0x4ef] & 3U) == 3) {
              FUN_0034a9c4(temp_v7,0);
            }
            else {
              FUN_0031f718(temp_v7,0);
            }
          }
          ppiVar16 = (int **)slotRecordFindById((piVar3[temp_v47[0] * 2 + 0x4ee] & 0x3fffffffU) >> 0xf);
          if (ppiVar16 == (int **)0x0) {
            FUN_0035ad50((piVar3[temp_v47[0] * 2 + 0x4ee] & 0x3fffffffU) >> 0xf,&temp_v25);
            ppiVar16 = &temp_v25;
          }
          FUN_0032d0c8(0,1,(piVar3[temp_v47[0] * 2 + 0x4ee] & 0x3fffffffU) >> 0xf,ppiVar16);
        }
        FUN_0037e1b0((int)(char)piVar3[0x1a0c],1);
        statusPanelSetOpen(1);
      }
    }
    temp_v28 = (int *)recordGetModeForId((int)(short)piVar3[0x117]);
    if ((temp_v28 == (int *)0x6) && ((char)piVar3[0x1a0c] != '\0')) {
      temp_v45 = 1;
      *(unsigned char *)(piVar3 + 0x1a0c) = 0;
      FUN_0023b45c(0);
    }
    temp_v6 = 0;
    temp_v5 = uiSearchPrimary(temp_v40[0]);
    if (0 < temp_v5) {
      temp_v31 = piVar3 + 0x1a0c;
      do {
        temp_v5 = recordGetModeForId((int)*(short *)((int)piVar3 + temp_v6 * 4 + 0x45e));
        if ((temp_v5 != 0) &&
           (temp_v28 = (int *)recordGetModeForId((int)*(short *)((int)piVar3 + temp_v6 * 4 + 0x45e)),
           temp_v28 == (int *)0x1 || temp_v28 == (int *)0x2)) {
          flaggedEntrySetValueA(temp_v40[0],temp_v6);
          temp_v5 = resourceRunOperationIfUnblocked(temp_v40[0]);
          temp_v11 = FUN_002a4894(temp_v40[0]);
          if (temp_v41 != temp_v11 + temp_v5) {
            temp_v45 = 1;
          }
          temp_v5 = resourceRunOperationIfUnblocked(temp_v40[0]);
          temp_v11 = FUN_002a4894(temp_v40[0]);
          temp_v7 = 0;
          temp_v47[0] = (unsigned int)*(unsigned short *)((int)piVar3 + (temp_v11 + temp_v5) * 2 + 0x6832);
          temp_v27 = (unsigned int *)(piVar3 + temp_v47[0] * 2 + 0x4ee);
          if (*temp_v27 >> 0x1e == 3) {
            temp_v7 = *temp_v27 & 0x7fff;
            temp_v25 = (int *)0x0;
            FUN_004a8750(temp_v7,1,0);
          }
          if ((temp_v27[1] & 3) == 3) {
            temp_v25 = (int *)0x0;
            temp_v10 = (*temp_v27 & 0x3fffffff) >> 0xf;
            FUN_004a8750(temp_v10,1,0);
            temp_v7 = temp_v7 + temp_v10;
          }
          piVar3[0x106] = temp_v7;
          temp_v5 = FUN_003347e8(temp_v7);
          if (temp_v5 != 0) {
            piVar3[0x106] = 0;
            *(unsigned char *)((int)g_unite + 0x92be) = 1;
          }
          else {
            *(unsigned char *)((int)g_unite + 0x92be) = 0;
          }
          if (*(char *)(temp_v4 + 0x33) != '\0') {
            panelSetTarget(-piVar3[0x106],0);
          }
          if ((char)piVar3[0x1a0c] != '\x01') {
            temp_v45 = 1;
            *(unsigned char *)temp_v31 = 1;
            FUN_0023b45c(0);
          }
        }
        temp_v5 = recordGetModeForId((int)(short)piVar3[temp_v6 + 0x118]);
        if ((temp_v5 != 0) &&
           (temp_v28 = (int *)recordGetModeForId((int)(short)piVar3[temp_v6 + 0x118]),
           temp_v28 == (int *)0x1 || temp_v28 == (int *)0x2)) {
          flaggedEntrySetValueA(temp_v40[0],temp_v6);
          temp_v5 = resourceRunOperationIfUnblocked(temp_v40[0]);
          temp_v11 = FUN_002a4894(temp_v40[0]);
          if (temp_v41 != temp_v11 + temp_v5) {
            temp_v45 = 1;
          }
          temp_v5 = resourceRunOperationIfUnblocked(temp_v40[0]);
          temp_v11 = FUN_002a4894(temp_v40[0]);
          temp_v7 = 0;
          temp_v10 = (unsigned int)*(unsigned short *)((int)piVar3 + (temp_v11 + temp_v5) * 2 + 0x6832);
          temp_v9 = piVar3[temp_v10 * 2 + 0x4ee];
          temp_v47[0] = temp_v10;
          if (temp_v9 >> 0x1e == 3) {
            temp_v7 = temp_v9 & 0x7fff;
            temp_v25 = (int *)0x0;
            FUN_004a8750(temp_v7,1,0);
          }
          if ((piVar3[temp_v10 * 2 + 0x4ef] & 3U) == 3) {
            temp_v25 = (int *)0x0;
            temp_v10 = (piVar3[temp_v10 * 2 + 0x4ee] & 0x3fffffffU) >> 0xf;
            FUN_004a8750(temp_v10,1,0);
            temp_v7 = temp_v7 + temp_v10;
          }
          piVar3[0x106] = temp_v7;
          temp_v5 = FUN_003347e8(temp_v7);
          if (temp_v5 != 0) {
            piVar3[0x106] = 0;
            *(unsigned char *)((int)g_unite + 0x92be) = 1;
          }
          else {
            *(unsigned char *)((int)g_unite + 0x92be) = 0;
          }
          if (*(char *)(temp_v4 + 0x33) != '\0') {
            panelSetTarget(-piVar3[0x106],0);
          }
          if ((char)piVar3[0x1a0c] != '\x02') {
            temp_v45 = 1;
            *(unsigned char *)temp_v31 = 2;
            FUN_0023b45c(0);
          }
        }
        temp_v6 = temp_v6 + 1;
        temp_v5 = uiSearchPrimary(temp_v40[0]);
      } while (temp_v6 < temp_v5);
    }
    if (temp_v28 == (int *)0x0) {
      temp_v15 = FUN_001834a4(0x1a,499);
      temp_v26 = (int)(short)piVar3[0x11d];
      temp_v29 = (int *)0x1;
      temp_v27 = temp_v39;
      temp_v28 = (int *)0x0;
      temp_v25 = (int *)(int)*(short *)((int)piVar3 + 0x472);
      piVar19 = temp_v40[0];
      FUN_003450d4(temp_v40[0],temp_v15,piVar3 + 0x10e,(int)*(short *)((int)piVar3 + 0x476));
      if ((piVar19 != (int *)0x0) ||
         (piVar19 = temp_v40[0], FUN_00228b04(temp_v40[0],1), piVar19 != (int *)0x0)) {
        temp_v5 = resourceRunOperationIfUnblocked(temp_v40[0]);
        temp_v6 = FUN_002a4894(temp_v40[0]);
        if (temp_v5 + temp_v6 != temp_v41) {
          temp_v45 = 1;
        }
        temp_v5 = resourceRunOperationIfUnblocked(temp_v40[0]);
        temp_v6 = FUN_002a4894(temp_v40[0]);
        temp_v47[0] = (unsigned int)*(unsigned short *)((int)piVar3 + (temp_v6 + temp_v5) * 2 + 0x6832);
        piVar19 = piVar3 + temp_v47[0] * 2 + 0x4ee;
        FUN_002f3a90();
        piVar3[0x106] = (int)piVar19;
        temp_v5 = FUN_003347e8();
        if (temp_v5 != 0) {
          piVar3[0x106] = 0;
          *(unsigned char *)((int)g_unite + 0x92be) = 1;
        }
        else {
          *(unsigned char *)((int)g_unite + 0x92be) = 0;
        }
        if (*(char *)(temp_v4 + 0x33) != '\0') {
          panelSetTarget(-piVar3[0x106],0);
        }
      }
      else {
        temp_v5 = 4;
        FUN_001517b4(4,1);
        if (temp_v5 != 0) {
          eventQueueAddUniqueIfValid(0x100020d);
          temp_v12 = (char)piVar3[0x1a0c] - '\x01';
          *(char *)(piVar3 + 0x1a0c) = temp_v12;
          if (temp_v12 < '\0') {
            *(char *)(piVar3 + 0x1a0c) = '\x02';
          }
          FUN_0023b45c(0);
        }
        else {
          temp_v5 = 3;
          FUN_001517b4(3,1);
          if (temp_v5 != 0) {
            eventQueueAddUniqueIfValid(0x100020d);
            temp_v12 = (char)piVar3[0x1a0c] + '\x01';
            *(char *)(piVar3 + 0x1a0c) = temp_v12;
            if ('\x02' < temp_v12) {
              *(unsigned char *)(piVar3 + 0x1a0c) = 0;
            }
            FUN_0023b45c(0);
          }
          else {
            temp_v5 = 0;
            FUN_001517b4(0,1);
            if (!(temp_v5 == 0 && (char)temp_v39[0] == '\0')) {
              puVar15 = (unsigned short *)((piVar3[temp_v47[0] * 2 + 0x4ef] & 0x1ffffU) >> 2);
              FUN_00184310();
              temp_v4 = *(int *)(puVar15 + 0x22);
              temp_v5 = *(int *)(puVar15 + 0x24);
              temp_v6 = *(int *)(puVar15 + 0x26);
              piVar3[0x22d8] = *(int *)(puVar15 + 0x20);
              piVar3[0x22d9] = temp_v4;
              piVar3[0x22da] = temp_v5;
              piVar3[0x22db] = temp_v6;
              piVar19 = (int *)gameGetSlotTable();
              if (*piVar19 < piVar3[0x106]) {
                FUN_002a7b74();
                uniteStartOrQueueRequest(0xc);
                eventQueueAddUniqueIfValid(0x100020f);
              }
              else {
                temp_v7 = computeCountLimit();
                if (temp_v7 < (unsigned short)puVar15[3]) {
                  FUN_002a7b74();
                  uniteStartOrQueueRequest(8);
                  eventQueueAddUniqueIfValid(0x100020f);
                }
                else {
                  temp_v4 = slotRecordFindById(*puVar15);
                  if (temp_v4 != 0) {
                    FUN_002a7b74();
                    uniteStartOrQueueRequest(9);
                    eventQueueAddUniqueIfValid(0x100020f);
                  }
                  else {
                    temp_v4 = FUN_004d0eec();
                    piVar19 = g_unite;
                    if (((temp_v4 != 0) || ((unsigned int)piVar3[temp_v47[0] * 2 + 0x4ee] >> 0x1e != 3)) ||
                       ((piVar3[temp_v47[0] * 2 + 0x4ef] & 3U) != 3)) {
                      piVar17 = g_unite + 0x19f3;
                      temp_v4 = resourceRunOperationIfUnblocked();
                      temp_v5 = FUN_002a4894(piVar17);
                      temp_v1 = *(unsigned short *)((int)piVar19 + (temp_v5 + temp_v4) * 2 + 0x6832);
                      temp_v7 = (unsigned int)piVar19[(unsigned int)temp_v1 * 2 + 0x4ee] >> 0x1e;
                      temp_v10 = piVar19[(unsigned int)temp_v1 * 2 + 0x4ee] & 0x7fff;
                      if (temp_v7 != 1) {
                        if (temp_v7 == 3) {
                          FUN_0035ad50(temp_v10,&temp_v25);
                        }
                      }
                      else {
                        temp_v15 = slotRecordFindById(temp_v10);
                        __aeabi_memcpy4(&temp_v25,temp_v15,300);
                      }
                      temp_v7 = (piVar19[(unsigned int)temp_v1 * 2 + 0x4ee] & 0x3fffffffU) >> 0xf;
                      if ((piVar19[(unsigned int)temp_v1 * 2 + 0x4ef] & 3U) != 1) {
                        if ((piVar19[(unsigned int)temp_v1 * 2 + 0x4ef] & 3U) == 3) {
                          FUN_0035ad50(temp_v7,temp_v40);
                        }
                      }
                      else {
                        temp_v15 = slotRecordFindById(temp_v7);
                        __aeabi_memcpy4(temp_v40,temp_v15,300);
                      }
                      FUN_0028a538((piVar19[(unsigned int)temp_v1 * 2 + 0x4ef] & 0x1ffffU) >> 2,&temp_v25,
                                   temp_v40);
                      FUN_003bb710((piVar3[temp_v47[0] * 2 + 0x4ef] & 0x1ffffU) >> 2);
                      uniteListRebuild((piVar3[temp_v47[0] * 2 + 0x4ef] & 0x1ffffU) >> 2);
                      piVar3[0x103] = 0xf;
                      FUN_0020b908(0x24,1);
                      if ((char)piVar3[0x1a0c] != '\0') {
                        *(unsigned char *)(piVar3 + 0x1a0c) = 0;
                        FUN_0031f718((piVar3[temp_v47[0] * 2 + 0x4ef] & 0x1ffffU) >> 2,0);
                        statusPanelSetOpen(1);
                      }
                      FUN_0037e1b0(0xffffffff,1);
                      temp_v15 = 0x100020e;
                      goto LAB_001f8c54;
                    }
                    FUN_002a7b74();
                    uniteStartOrQueueRequest(10);
                    eventQueueAddUniqueIfValid(0x100020f);
                  }
                }
              }
            }
            else {
              temp_v5 = 1;
              FUN_001517b4();
              if (temp_v5 != 0) {
                if (*(char *)(temp_v4 + 0x33) != '\0') {
                  messageDismissNumericBanner(1);
                  piVar3[0x106] = 0;
                }
                FUN_0037e1b0(0xffffffff,1);
                FUN_0022e774();
                FUN_002a7b74();
                uniteStartOrQueueRequest(4);
                piVar3[0x103] = 0xb;
                FUN_0020b908(0x24,1);
                temp_v15 = 0x100020f;
LAB_001f8c54:
                eventQueueAddUniqueIfValid(temp_v15);
              }
              else {
                temp_v4 = 9;
                FUN_001517b4(9,1);
                if (temp_v4 == 0) goto LAB_001f8d58;
                eventQueueAddUniqueIfValid(0x100020e);
                sortMenuAcquire(0x13,0);
                FUN_0031f208(1);
                FUN_0031f208(2);
                FUN_0031f208(7);
                FUN_0031f208(3);
                useCounterStart();
                FUN_0020b908(0xe,1);
              }
              temp_v4 = 0;
              do {
                *(unsigned short *)((int)piVar3 + temp_v4 * 2 + 0x438) = 0xffff;
                ifTouchRegionRemove();
                temp_v4 = temp_v4 + 1;
              } while (temp_v4 < 5);
              *(unsigned short *)((int)piVar3 + 0x476) = 0xffff;
              *(unsigned short *)((int)piVar3 + 0x472) = 0xffff;
              *(unsigned short *)(piVar3 + 0x11d) = 0xffff;
              ifTouchRegionRemove();
              ifTouchRegionRemove();
              ifTouchRegionRemove();
              *(unsigned short *)(piVar3 + 0x117) = 0xffff;
              ifTouchRegionRemove();
              temp_v4 = 0;
              do {
                *(unsigned short *)((int)piVar3 + temp_v4 * 4 + 0x45e) = 0xffff;
                *(unsigned short *)(piVar3 + temp_v4 + 0x118) = 0xffff;
                ifTouchRegionRemove();
                ifTouchRegionRemove();
                temp_v4 = temp_v4 + 1;
              } while (temp_v4 < 5);
            }
          }
        }
      }
    }
LAB_001f8d58:
    if (temp_v45 == 0) {
      piVar3[0xff] = piVar3[0xff] + 1;
      return 0;
    }
    temp_v15 = 0x100020d;
    eventQueueAddUniqueIfValid(temp_v15);
    piVar3[0xff] = piVar3[0xff] + 1;
    return 0;
  case 0xe:
    temp_v5 = useCounterIsFinished();
    if (temp_v5 != 0) {
      useCounterRelease();
      FUN_0023b45c(0);
      temp_v5 = resourceRunOperationIfUnblocked();
      temp_v6 = FUN_002a4894(piVar3 + 0x19f3);
      temp_v47[0] = (unsigned int)*(unsigned short *)((int)piVar3 + (temp_v6 + temp_v5) * 2 + 0x6832);
      piVar19 = piVar3 + temp_v47[0] * 2 + 0x4ee;
      FUN_002f3a90();
      piVar3[0x106] = (int)piVar19;
      temp_v5 = FUN_003347e8();
      if (temp_v5 != 0) {
        piVar3[0x106] = 0;
        *(unsigned char *)((int)g_unite + 0x92be) = 1;
      }
      else {
        *(unsigned char *)((int)g_unite + 0x92be) = 0;
      }
      if (*(char *)(temp_v4 + 0x33) != '\0') {
        panelSetTarget(-piVar3[0x106],0);
      }
      FUN_0020b908(piVar3[0x101],1);
      *(unsigned char *)(piVar3 + 0x125) = 1;
    }
    else {
      temp_v4 = useCounterGetCurrentValue();
      if (temp_v4 != 0x69) {
        fusionSortPairs();
      }
    }
    piVar3[0xff] = piVar3[0xff] + 1;
    return 0;
  case 0xf:
    temp_v4 = FUN_002c905c();
    if (temp_v4 != 0) {
      piVar3[0xff] = piVar3[0xff] + 1;
      return 0;
    }
    temp_v12 = *(char *)((int)piVar3 + 0x252);
    temp_v4 = FUN_00163aa4(piVar3 + 0x72);
    if (temp_v4 == 0) {
      piVar3[0xff] = piVar3[0xff] + 1;
      return 0;
    }
    if (temp_v12 == '\0') {
      temp_v16 = 0;
      temp_v4 = 0;
      do {
        if (piVar3[0x23a1] <= temp_v4) break;
        temp_v3 = FUN_001643b4(0x1a,temp_v4 + 0x185);
        temp_v5 = temp_v4 * 2;
        temp_v4 = temp_v4 + 1;
        temp_v16 = temp_v16 + 1;
        *(unsigned short *)((int)piVar3 + temp_v5 + 0x438) = temp_v3;
      } while (temp_v4 < 8);
      *(short *)(piVar3 + 0x23a2) = temp_v16;
      temp_v3 = FUN_001643b4(0x1a,0x18d);
      temp_v4 = 0;
      *(unsigned short *)((int)piVar3 + (short)piVar3[0x23a2] * 2 + 0x438) = temp_v3;
      do {
        temp_v5 = objectApplyIfUnblocked(piVar3 + 0x236c);
        if (temp_v5 <= temp_v4) break;
        temp_v3 = FUN_001643b4(0x1a,temp_v4 + 0x17d);
        temp_v5 = temp_v4 * 2;
        temp_v4 = temp_v4 + 1;
        *(unsigned short *)((int)piVar3 + temp_v5 + 0x478) = temp_v3;
      } while (temp_v4 < 8);
      temp_v3 = FUN_001643b4(0x1a,0x1f6);
      *(unsigned short *)((int)piVar3 + 0x476) = temp_v3;
      temp_v3 = FUN_001643b4(0x1a,500);
      *(unsigned short *)((int)piVar3 + 0x472) = temp_v3;
      temp_v3 = FUN_001643b4(0x1a,0x1f5);
      *(unsigned short *)(piVar3 + 0x11d) = temp_v3;
    }
    piVar19 = piVar3;
    if (*(char *)((int)piVar3 + 0x8e8a) != '\0') {
      FUN_003c9354();
    }
    else {
      FUN_003cca18(piVar3,(int)(char)temp_v39[0],temp_v47);
    }
    if (piVar19 == (int *)0x0) {
      piVar3[0xff] = piVar3[0xff] + 1;
      return 0;
    }
    if (piVar3[0x101] != 0x1c) {
      if ((*(char *)((int)piVar3 + 0x9071) == '\0') && (piVar3[0x101] != 0x1e)) {
        temp_v4 = resourceRunOperationIfUnblocked();
        temp_v5 = FUN_002a4894(piVar3 + 0x19f3);
        temp_v47[0] = (unsigned int)*(unsigned short *)((int)piVar3 + (temp_v5 + temp_v4) * 2 + 0x6832);
      }
      else {
        temp_v47[0] = 0;
      }
      unitRecordBuild((piVar3[temp_v47[0] * 2 + 0x4ef] & 0x1ffffU) >> 2);
      temp_v7 = (unsigned int)piVar3[temp_v47[0] * 2 + 0x4ee] >> 0x1e;
      temp_v10 = piVar3[temp_v47[0] * 2 + 0x4ee] & 0x7fff;
      if (temp_v7 != 1) {
        if (temp_v7 == 3) {
          FUN_0035ad50(temp_v10,temp_v40);
        }
      }
      else {
        temp_v15 = slotRecordFindById(temp_v10);
        __aeabi_memcpy4(temp_v40,temp_v15,300);
      }
      temp_v7 = (piVar3[temp_v47[0] * 2 + 0x4ee] & 0x3fffffffU) >> 0xf;
      if ((piVar3[temp_v47[0] * 2 + 0x4ef] & 3U) != 1) {
        if ((piVar3[temp_v47[0] * 2 + 0x4ef] & 3U) == 3) {
          FUN_0035ad50(temp_v7,asStack_170);
        }
      }
      else {
        temp_v15 = slotRecordFindById(temp_v7);
        __aeabi_memcpy4(asStack_170,temp_v15,300);
      }
      temp_v25 = piVar3 + 0x19a7;
      FUN_004da6e0(*piVar3,temp_v40,asStack_170,0);
      piVar3[0x19b7] = piVar3[0x22db];
      piVar3[0x19b4] = piVar3[0x22d8];
      piVar3[0x19b5] = piVar3[0x22d9];
      piVar3[0x19b6] = piVar3[0x22da];
    }
    else {
      temp_v47[0] = 0;
      unitRecordBuild((short)piVar3[0x148e]);
      FUN_004da5c4(*piVar3,piVar3 + temp_v47[0] * 10 + 0x148e,piVar3 + 0x19a7);
      piVar3[0x19b7] = piVar3[0x22db];
      piVar3[0x19b4] = piVar3[0x22d8];
      piVar3[0x19b5] = piVar3[0x22d9];
      piVar3[0x19b6] = piVar3[0x22da];
    }
    FUN_004bcd90(piVar3 + 0x19a7);
    temp_v4 = 0;
    do {
      *(unsigned short *)((int)piVar3 + temp_v4 * 2 + 0x438) = 0xffff;
      ifTouchRegionRemove();
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 9);
    temp_v4 = 0;
    do {
      *(unsigned short *)((int)piVar3 + temp_v4 * 2 + 0x478) = 0xffff;
      ifTouchRegionRemove();
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 8);
    *(unsigned short *)((int)piVar3 + 0x476) = 0xffff;
    *(unsigned short *)((int)piVar3 + 0x472) = 0xffff;
    *(unsigned short *)(piVar3 + 0x11d) = 0xffff;
    ifTouchRegionRemove();
    ifTouchRegionRemove();
    ifTouchRegionRemove();
    FUN_0031f718((int)*(short *)((int)piVar3 + 0x66fe),0);
    objBInitBlock19D0(piVar3 + 0x19a7,0);
    FUN_0033449c(1);
    FUN_003343c0(0);
    FUN_002c8550(9);
    statusPanelSetOpen(0);
    FUN_0019de98(0,0xf4f4f4ff);
    piVar3[0x103] = 0x13;
    FUN_0020b908(0x24,0);
    temp_v15 = 0x100020e;
    eventQueueAddUniqueIfValid(temp_v15);
    piVar3[0xff] = piVar3[0xff] + 1;
    return 0;
  case 0x10:
    if (piVar3[0xff] == 1) {
      temp_v4 = resourceRunOperationIfUnblocked();
      temp_v5 = FUN_002a4894(piVar3 + 0x2385);
      temp_v6 = resourceRunOperationIfUnblocked();
      temp_v11 = FUN_002a4894(piVar3 + 0x236c);
      temp_v6 = temp_v6 + temp_v11;
      FUN_003c3f8c(piVar3,temp_v6,1);
      if (*(short *)((int)piVar3 + temp_v6 * 2 + 0x8b60) == 0) {
        piVar3[0x239f] = piVar3[0x239f] + 1;
      }
      *(unsigned short *)((int)piVar3 + temp_v6 * 2 + 0x8b60) =
           *(unsigned short *)((int)piVar3 + (temp_v4 + temp_v5) * 2 + 0x8b70);
      uiSpriteSelectAnim(piVar3 + 0xb8,2);
      uiSpriteSelectAnim(piVar3 + 0xdb,3);
    }
    if (piVar3[0xff] < 2) {
      piVar3[0xff] = piVar3[0xff] + 1;
      return 0;
    }
    if (piVar3[0xff] >= 6) {
      FUN_00163aa4(piVar3 + 0xdb);
    }
    temp_v4 = FUN_00163aa4(piVar3 + 0xb8);
    if ((temp_v4 == 0) || (*(char *)((int)piVar3 + 0x3f6) == '\0')) {
      piVar3[0xff] = piVar3[0xff] + 1;
      return 0;
    }
    piVar19 = piVar3 + 0x2385;
    temp_v4 = FUN_002a4894();
    temp_v5 = resourceRunOperationIfUnblocked(piVar19);
    if (*(short *)((int)piVar3 + (temp_v5 + temp_v4) * 2 + 0x8b72) != 0) {
      if (temp_v4 + 1 >= 8) {
        scrollOwnerSetValue(piVar19,temp_v5 + 1);
      }
      else {
        flaggedEntrySetValueA(piVar19);
      }
    }
    else {
      scrollOwnerSetValue(piVar19,0);
      FUN_002a4964(piVar19,0);
    }
    FUN_002a4894(piVar19);
    temp_v4 = 0;
    do {
      temp_v5 = temp_v4;
      if (*(short *)((int)piVar3 + temp_v4 * 2 + 0x8b60) == 0) break;
      temp_v4 = temp_v4 + 1;
      temp_v5 = 0;
    } while (temp_v4 < 8);
    piVar17 = piVar3 + 0x236c;
    temp_v4 = objectApplyIfUnblocked();
    if (temp_v5 < temp_v4) {
      scrollOwnerSetValue(piVar17,0);
      FUN_002a4964(piVar17,temp_v5);
    }
    else {
      scrollOwnerSetValue(piVar17,0);
      FUN_002a4964(piVar17,0);
    }
    temp_v4 = resourceRunOperationIfUnblocked(piVar19);
    temp_v5 = FUN_002a4894(piVar19);
    skillHelpUpdateAttributeAndTarget(*(unsigned short *)((int)piVar3 + (temp_v5 + temp_v4) * 2 + 0x8b70));
    temp_v15 = 0;
    temp_v4 = 0xf;
    break;
  case 0x11:
    if (piVar3[0xff] != 5) {
      piVar3[0xff] = piVar3[0xff] + 1;
      return 0;
    }
    temp_v5 = resourceRunOperationIfUnblocked();
    temp_v6 = FUN_002a4894(piVar3 + 0x2385);
    temp_v4 = 0;
    temp_v11 = 0;
    do {
      temp_v16 = *(short *)((int)piVar3 + temp_v11 * 2 + 0x8b60);
      if ((temp_v16 != 0) && (temp_v16 == *(short *)((int)piVar3 + (temp_v5 + temp_v6) * 2 + 0x8b70))) {
        *(unsigned short *)((int)piVar3 + temp_v11 * 2 + 0x8b60) = 0;
        piVar3[0x239f] = piVar3[0x239f] - 1;
        temp_v4 = temp_v11;
        break;
      }
      temp_v11 = temp_v11 + 1;
    } while (temp_v11 < 8);
    FUN_003c3f8c(piVar3,temp_v4,0);
    temp_v15 = 0;
    temp_v4 = 0xf;
    break;
  case 0x12:
    if (piVar3[0xff] != 5) {
      piVar3[0xff] = piVar3[0xff] + 1;
      return 0;
    }
    FUN_00359a08(piVar3);
    temp_v15 = 0;
    temp_v4 = 0xf;
    break;
  case 0x13:
    temp_v4 = FUN_0035db94();
    if (((temp_v4 != 0) && (temp_v4 = FUN_002a7410(), temp_v4 == 0)) &&
       ((temp_v4 = ifTouchGetButtonHelpValue(), temp_v4 != 0x5f &&
        (sysPlaySe(0x5f), *(char *)((int)piVar3 + 0x9071) != '\0')))) {
      FUN_00183f58(2,9,0x44,1);
      FUN_00183f58(3,0,0,1);
    }
    temp_v4 = useCounterIsFinished();
    if (((temp_v4 == 0) || (temp_v4 = FUN_002effbc(), temp_v4 == 0)) ||
       (temp_v4 = FUN_002c7cb4(), temp_v4 == 0)) {
      piVar3[0xff] = piVar3[0xff] + 1;
      return 0;
    }
    if ((*(char *)((int)piVar3 + 0x9071) == '\0') || (piVar3[0xff] >= 2)) {
      temp_v4 = 0;
      FUN_001517b4(0,1);
      if (temp_v4 != 0) {
        if (piVar3[0x101] != 0x1c) {
          if (piVar3[0x101] != 0x1e) {
            temp_v4 = resourceRunOperationIfUnblocked();
            temp_v5 = FUN_002a4894(piVar3 + 0x19f3);
            temp_v47[0] = (unsigned int)*(unsigned short *)((int)piVar3 + (temp_v5 + temp_v4) * 2 + 0x6832);
            if (piVar3[0x101] == 2) {
              temp_v47[0] = 0;
            }
            temp_v4 = FUN_002ac2b4(temp_v47[0],piVar3[0x101] == 0x1c);
            if (temp_v4 == 0) {
              panelSetMode3(-piVar3[0x106],0);
              piVar3[0x103] = 0x16;
              FUN_0020b908(0x24,1);
            }
            goto LAB_001f9850;
          }
          temp_v47[0] = 0;
          temp_v4 = FUN_002ac2b4(0,piVar3[0x101] == 0x1c);
          FUN_003343f0(1);
          FUN_00333dc8(1);
          if (temp_v4 != 0) goto LAB_001f9868;
          piVar3[0x103] = 0x1f;
          FUN_0020b908(0x24,1);
          FUN_002a7b74();
        }
        else {
          temp_v47[0] = 0;
          temp_v4 = FUN_002ac2b4(0,piVar3[0x101] == 0x1c);
          if (temp_v4 == 0) {
            panelSetMode3(-piVar3[0x106],0);
            piVar3[0x103] = 0x1d;
            FUN_0020b908(0x24,1);
          }
LAB_001f9850:
          FUN_003343f0(1);
          FUN_00333dc8(1);
LAB_001f9868:
          FUN_002a7b74();
          if (temp_v4 != 0) {
            *(unsigned char *)((int)piVar3 + 0x495) = 1;
            FUN_0031f688();
            uniteStartOrQueueRequest(7);
            piVar3[0x100] = 0x14;
            temp_v15 = 0x100020e;
            eventQueueAddUniqueIfValid(temp_v15);
            piVar3[0xff] = piVar3[0xff] + 1;
            return 0;
          }
        }
        *(unsigned char *)((int)piVar3 + 0x495) = 0;
        uniteStartOrQueueRequest(6);
        temp_v15 = 0x100020e;
        eventQueueAddUniqueIfValid(temp_v15);
        piVar3[0xff] = piVar3[0xff] + 1;
        return 0;
      }
    }
    temp_v4 = FUN_0023b3b8();
    if (temp_v4 == 0) {
      temp_v4 = 1;
      FUN_001517b4();
      if (temp_v4 != 0) {
        if (piVar3[0x101] != 0x1c) {
          if (piVar3[0x101] != 0x1e) {
            temp_v4 = resourceRunOperationIfUnblocked();
            temp_v5 = FUN_002a4894(piVar3 + 0x19f3);
            temp_v47[0] = (unsigned int)*(unsigned short *)((int)piVar3 + (temp_v5 + temp_v4) * 2 + 0x6832);
            unitRecordBuild((piVar3[temp_v47[0] * 2 + 0x4ef] & 0x1ffffU) >> 2,piVar3 + 0x19a7);
          }
          else {
            temp_v47[0] = 0;
            unitRecordBuild((piVar3[0x4ef] & 0x1ffffU) >> 2,piVar3 + 0x19a7);
          }
        }
        else {
          temp_v47[0] = 0;
          unitRecordBuild((short)piVar3[0x148e],piVar3 + 0x19a7);
        }
        if (*(char *)((int)piVar3 + 0x9071) != '\0') {
          FUN_002c8550(2);
          piVar19 = g_unite;
          if (g_unite != (int *)0x0) {
            *(unsigned char *)(g_unite + 0x108) = 3;
            piVar19[0x100] = 0;
            piVar19[0xff] = 0;
          }
          *(unsigned char *)((int)piVar3 + 0x9071) = 0;
        }
        else {
          FUN_002c8550(2);
          FUN_0033449c(0);
          statusDisplayBindUnitRecord(piVar3 + 0x19a7,0,0);
          statusPanelSetOpen(0);
          piVar3[0x103] = 0xf;
          FUN_0020b908(0x24,0);
        }
        eventQueueAddUniqueIfValid(0x100020f);
        piVar3[0xff] = piVar3[0xff] + 1;
        return 0;
      }
    }
    if ((*(char *)((int)piVar3 + 0x9071) == '\0') || (temp_v4 = FUN_0023b3b8(), temp_v4 != 0)) {
      piVar3[0xff] = piVar3[0xff] + 1;
      return 0;
    }
    temp_v4 = 9;
    FUN_001517b4(9,1);
    if (temp_v4 == 0) {
      piVar3[0xff] = piVar3[0xff] + 1;
      return 0;
    }
    eventQueueAddUniqueIfValid(0x100020e);
    FUN_002c8550(2);
    FUN_0033449c(0);
    FUN_00184310(*(unsigned short *)((int)piVar3 + 0x66fe));
    FUN_003bb710(*(unsigned short *)((int)piVar3 + 0x66fe));
    uniteListRebuild(*(unsigned short *)((int)piVar3 + 0x66fe));
    *(short *)(piVar3 + 0x19b4) = (short)piVar3[0x22d8];
    *(unsigned short *)((int)piVar3 + 0x66d2) = *(unsigned short *)((int)piVar3 + 0x8b62);
    *(short *)(piVar3 + 0x19b5) = (short)piVar3[0x22d9];
    *(unsigned short *)((int)piVar3 + 0x66d6) = *(unsigned short *)((int)piVar3 + 0x8b66);
    *(short *)(piVar3 + 0x19b6) = (short)piVar3[0x22da];
    *(unsigned short *)((int)piVar3 + 0x66da) = *(unsigned short *)((int)piVar3 + 0x8b6a);
    *(short *)(piVar3 + 0x19b7) = (short)piVar3[0x22db];
    *(unsigned short *)((int)piVar3 + 0x66de) = *(unsigned short *)((int)piVar3 + 0x8b6e);
    piVar3[0x239f] = 0;
    piVar3[0x103] = 0xf;
    temp_v15 = 0;
    temp_v4 = 0x24;
    break;
  case 0x14:
    if ((char)piVar3[0x10c] != '\0') {
      piVar3[0xff] = piVar3[0xff] + 1;
      return 0;
    }
    temp_v4 = messageGetChoiceResult();
    if (temp_v4 == 0) {
      if (piVar3[0x101] != 0x1c) {
        if (piVar3[0x101] != 0x1e) {
          panelSetMode3(-piVar3[0x106],0);
          piVar3[0x103] = 0x16;
          FUN_0020b908(0x24,1);
        }
        else {
          piVar3[0x103] = 0x1f;
          FUN_0020b908(0x24,1);
        }
      }
      else {
        panelSetMode3(-piVar3[0x106],0);
        piVar3[0x103] = 0x1d;
        FUN_0020b908(0x24,1);
      }
      temp_v15 = 6;
      uniteStartOrQueueRequest(temp_v15);
      piVar3[0xff] = piVar3[0xff] + 1;
      return 0;
    }
    FUN_002c8550(2);
    FUN_0033449c(0);
    FUN_003343f0(0);
    FUN_00333dc8(0);
    if (piVar3[0x101] != 0x1c) {
      temp_v15 = 1;
      if (piVar3[0x101] == 0x1e) {
        temp_v4 = 0x27;
      }
      else {
        temp_v4 = 0x25;
      }
    }
    else {
      FUN_0022e774();
      temp_v15 = 1;
      temp_v4 = 0x26;
    }
    break;
  case 0x16:
  case 0x1f:
    if (((0 < piVar3[0x106]) && (temp_v4 = panelStateIs0(), temp_v4 != 1)) ||
       ((char)piVar3[0x10c] != '\0')) {
      piVar3[0xff] = piVar3[0xff] + 1;
      return 0;
    }
    temp_v12 = *(char *)((int)piVar3 + 0x495);
    goto joined_r0x001fbbe8;
  case 0x17:
    temp_v4 = FUN_00163e84(0);
    if (temp_v4 == 0) {
      piVar3[0xff] = piVar3[0xff] + 1;
      return 0;
    }
    temp_v4 = FUN_00163e84(1);
    temp_v18 = temp_v4 == 0;
    temp_v4 = 0;
    temp_v5 = 0;
    if (!temp_v18) {
      temp_v5 = piVar3[0xff];
      temp_v4 = temp_v5 - 0xb;
    }
    if ((temp_v18 || temp_v5 == 0xb) || temp_v4 < 0 != (!temp_v18 && SBORROW4(temp_v5,0xb))) {
      piVar3[0xff] = piVar3[0xff] + 1;
      return 0;
    }
    if (piVar3[0x101] == 0x1f) {
      uniteCreatePreviewModel();
    }
    ptrListRemoveClearOwner(g_handleRegistry,*(unsigned int *)(piVar3[0x2482] + 4));
    if ((int *)piVar3[0x2482] != (int *)0x0) {
      (**(romwright_code **)(*(int *)piVar3[0x2482] + 4))();
      piVar3[0x2482] = 0;
    }
    ptrListRemoveClearOwner(g_handleRegistry,*(unsigned int *)(piVar3[0x2483] + 4));
    if ((int *)piVar3[0x2483] != (int *)0x0) {
      (**(romwright_code **)(*(int *)piVar3[0x2483] + 4))();
      piVar3[0x2483] = 0;
    }
    FUN_0035dc10();
    if (piVar3[0x101] == 0x1d) {
      temp_v4 = 0;
      do {
        if (*(short *)((int)piVar3 + temp_v4 * 2 + 0x523a) != 0) {
          ppiVar16 = (int **)slotRecordFindById();
          if (ppiVar16 == (int **)0x0) {
            FUN_0035ad50(*(unsigned short *)((int)piVar3 + temp_v4 * 2 + 0x523a),temp_v40);
            ppiVar16 = temp_v40;
          }
          pairLogAppend(*(unsigned short *)((int)piVar3 + temp_v4 * 2 + 0x523a),
                       *(unsigned short *)(ppiVar16 + 0x19));
        }
        piVar19 = g_unite;
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 0xc);
      temp_v4 = 0;
      do {
        if ((*(short *)((int)piVar19 + temp_v4 * 2 + 0x523a) != 0) &&
           (*(char *)((int)piVar19 + temp_v4 + 0x5252) == '\x01')) {
          temp_v15 = slotRecordFindById();
          __aeabi_memcpy4(&temp_v25,temp_v15,300);
          temp_v7 = partyFindSlotById(temp_v38);
          if ((temp_v7 < 0x18) && (temp_v5 = gameGetSlotRecord(), temp_v5 != 0)) {
            bitsAt60Clear(temp_v5,4);
          }
          partyFindSlotById(temp_v38);
          FUN_004d0d70();
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 0xc);
      temp_v15 = FUN_004d0cd4();
      temp_v4 = FUN_002a4b28(*(unsigned short *)((int)piVar19 + 0x66fe));
      dispatchIfFound(temp_v15,*(unsigned short *)((int)piVar19 + 0x66fe),0);
      temp_v5 = slotRecordFindById(*(unsigned short *)((int)piVar19 + 0x66fe));
      temp_v6 = piVar19[0x19c2];
      temp_v11 = piVar19[0x19c3];
      temp_v19 = piVar19[0x19c4];
      temp_v20 = piVar19[0x19c5];
      temp_v21 = piVar19[0x19c6];
      temp_v22 = piVar19[0x19c7];
      temp_v23 = piVar19[0x19c8];
      *(int *)(temp_v5 + 0x68) = piVar19[0x19c1];
      *(int *)(temp_v5 + 0x6c) = temp_v6;
      *(int *)(temp_v5 + 0x70) = temp_v11;
      *(int *)(temp_v5 + 0x74) = temp_v19;
      *(int *)(temp_v5 + 0x78) = temp_v20;
      *(int *)(temp_v5 + 0x7c) = temp_v21;
      *(int *)(temp_v5 + 0x80) = temp_v22;
      *(int *)(temp_v5 + 0x84) = temp_v23;
      temp_v6 = piVar19[0x19ca];
      temp_v11 = piVar19[0x19cb];
      temp_v19 = piVar19[0x19cc];
      temp_v20 = piVar19[0x19cd];
      temp_v21 = piVar19[0x19ce];
      temp_v22 = piVar19[0x19cf];
      temp_v23 = piVar19[0x19d0];
      *(int *)(temp_v5 + 0x88) = piVar19[0x19c9];
      *(int *)(temp_v5 + 0x8c) = temp_v6;
      *(int *)(temp_v5 + 0x90) = temp_v11;
      *(int *)(temp_v5 + 0x94) = temp_v19;
      *(int *)(temp_v5 + 0x98) = temp_v20;
      *(int *)(temp_v5 + 0x9c) = temp_v21;
      *(int *)(temp_v5 + 0xa0) = temp_v22;
      *(int *)(temp_v5 + 0xa4) = temp_v23;
      temp_v6 = piVar19[0x22d8];
      temp_v11 = piVar19[0x22d9];
      temp_v19 = piVar19[0x22da];
      *(int *)(temp_v5 + 0x40) = piVar19[0x22db];
      *(int *)(temp_v5 + 0x34) = temp_v6;
      *(int *)(temp_v5 + 0x38) = temp_v11;
      *(int *)(temp_v5 + 0x3c) = temp_v19;
      FUN_004bcd90(temp_v5);
      FUN_0023b45c(0);
      piVar19[0x2426] = 1;
      piVar19[0x2427] = (unsigned int)*(unsigned short *)(temp_v5 + 100);
      *(unsigned int *)(temp_v5 + 0x44) = 0;
      *(unsigned int *)(temp_v5 + 0x48) = 0;
      FUN_004bd17c(temp_v5);
      temp_v3 = recordGetScaledMaximum(temp_v5);
      *(unsigned short *)(temp_v5 + 0x2a) = temp_v3;
      *(unsigned short *)(temp_v5 + 0x2c) = *(unsigned short *)(temp_v5 + 0x10);
      if (temp_v4 == 0) {
        FUN_002a5e7c(*(unsigned short *)(temp_v5 + 0x62));
      }
      FUN_00408184(0x26,1);
      temp_v4 = *piVar19;
      FUN_004dbdf8(temp_v4,piVar19 + 0x23df);
      countersRaiseA(4,temp_v4);
      FUN_002a6894(temp_v5);
      FUN_00334694((short)piVar3[0x148e]);
      FUN_0035dd60(0);
      temp_v4 = 0x1000051;
      if (piVar3[0x123] == 0x1000051) {
        temp_v4 = 0x100007b;
      }
      piVar3[0x123] = temp_v4;
      temp_v7 = (unsigned int)*(unsigned short *)(piVar3 + 0x148e);
    }
    else {
      if ((*(char *)((int)piVar3 + 0x9071) == '\0') && (piVar3[0x101] != 0x1f)) {
        temp_v4 = resourceRunOperationIfUnblocked();
        temp_v5 = FUN_002a4894(piVar3 + 0x19f3);
        temp_v47[0] = (unsigned int)*(unsigned short *)((int)piVar3 + (temp_v5 + temp_v4) * 2 + 0x6832);
      }
      else {
        temp_v47[0] = 0;
      }
      ppiVar16 = (int **)slotRecordFindById(piVar3[temp_v47[0] * 2 + 0x4ee] & 0x7fff);
      if (ppiVar16 == (int **)0x0) {
        FUN_0035ad50(piVar3[temp_v47[0] * 2 + 0x4ee] & 0x7fff,temp_v40);
        ppiVar16 = temp_v40;
      }
      pairLogAppend(piVar3[temp_v47[0] * 2 + 0x4ee] & 0x7fff,*(unsigned short *)(ppiVar16 + 0x19));
      ppiVar16 = (int **)slotRecordFindById((piVar3[temp_v47[0] * 2 + 0x4ee] & 0x3fffffffU) >> 0xf);
      if (ppiVar16 == (int **)0x0) {
        FUN_0035ad50((piVar3[temp_v47[0] * 2 + 0x4ee] & 0x3fffffffU) >> 0xf,temp_v40);
        ppiVar16 = temp_v40;
      }
      pairLogAppend((piVar3[temp_v47[0] * 2 + 0x4ee] & 0x3fffffffU) >> 0xf,
                   *(unsigned short *)(ppiVar16 + 0x19));
      temp_v7 = temp_v47[0];
      FUN_001ff014(temp_v47[0]);
      FUN_00334694((piVar3[temp_v47[0] * 2 + 0x4ef] & 0x1ffffU) >> 2);
      FUN_0035dd60(temp_v7);
      if (piVar3[0x123] == 0x100007b) {
        if (piVar3[0x124] == 0) {
          piVar3[0x123] = 0x100004e;
        }
        else {
          if (piVar3[0x124] == 1) {
            temp_v4 = 0x100004f;
          }
          else {
            temp_v4 = 0x1000050;
          }
          piVar3[0x123] = temp_v4;
        }
      }
      else {
        piVar3[0x123] = 0x100007b;
        piVar3[0x124] = (piVar3[0x124] + 1) % 3;
      }
      temp_v7 = (piVar3[temp_v47[0] * 2 + 0x4ef] & 0x1ffffU) >> 2;
    }
    piVar3[0x19f2] = temp_v7;
    messageDismissNumericBanner(1);
    if (0 < piVar3[0x106]) {
      piVar19 = (int *)gameGetSlotTable();
      *piVar19 = *piVar19 - piVar3[0x106];
      FUN_00408184(0x28,piVar3[0x106]);
      piVar3[0x106] = 0;
    }
    piVar19 = piVar3 + 0x2480;
    temp_v18 = *(char *)((int)piVar3 + 0x92be) != '\0';
    if (temp_v18) {
      piVar19 = (int *)(unsigned int)*(unsigned short *)(piVar3 + 0x24af);
    }
    if (temp_v18 && piVar19 != (int *)0x0) {
      flagValueSub(piVar19,1);
    }
    FUN_002c8550(2);
    FUN_0022e774();
    statusDownRestartTransition();
    FUN_003343f0(0);
    FUN_00333dc8(0);
    FUN_002a74ac();
    temp_v15 = 0;
    temp_v4 = 0x18;
    break;
  case 0x18:
    temp_v4 = FUN_002a748c();
    if (temp_v4 == 0) {
      piVar3[0xff] = piVar3[0xff] + 1;
      return 0;
    }
    pairLogDestroy();
    temp_v15 = 0x20000;
    temp_v7 = asdVramBGetFreeBytes();
    if (temp_v7 >= 0x20001) {
      temp_v15 = 0x30000;
    }
    temp_v5 = 0x20;
    FUN_00178b04(0x20,&LAB_001fa588,0x16dd);
    temp_v4 = 0;
    if (temp_v5 != 0) {
      temp_v4 = modelListInit();
    }
    piVar3[0x2482] = temp_v4;
    FUN_0040aa6c();
    FUN_0040a908(piVar3[0x2482],temp_v15);
    FUN_0040a918(piVar3[0x2482],temp_v15);
    FUN_0040aad4(piVar3[0x2482],0);
    temp_v4 = *(int *)(piVar3[0x2482] + 4);
    handleRegistryRegisterObject(g_handleRegistry,temp_v4);
    FUN_003fe86c(temp_v4,0,2);
    *(unsigned int *)(temp_v4 + 4) = *(unsigned int *)(temp_v4 + 4) | 3;
    piVar3[0x2498] = 0;
    FUN_003d54f8(0,10);
    FUN_003d54f8(1,10);
    temp_v15 = 0;
    temp_v4 = 0x19;
    break;
  case 0x19:
    temp_v4 = FUN_00163e84(0);
    if ((temp_v4 != 0) && (temp_v4 = FUN_00163e84(1), temp_v4 != 0)) {
      rebuildFusionCatalogLists();
      FUN_0033449c(0);
      temp_v4 = lmapSceneGetScript();
      if (temp_v4 != 0) {
        FUN_003857b4(0);
        linkHolderSetFlag(temp_v4);
      }
      piVar19 = g_unite;
      if (piVar3[0x101] != 0x1d) {
        if (piVar3[0x101] != 0x1f) {
          FUN_0039c744();
        }
        else {
          temp_v4 = FUN_0026140c();
          soundChannelStopAll(0);
          soundChannelRequestIfEnabled(piVar19[0x123],0,0x3c);
          if ((-1 < *(short *)(temp_v4 + 0x20)) &&
             ((temp_v5 = gameGetSlotRecord(), temp_v5 == 0 ||
              (*(short *)(temp_v5 + 0x62) != *(short *)(temp_v4 + 0x24))))) {
            *(short *)(temp_v4 + 0x20) = -1;
            *(unsigned short *)(temp_v4 + 0x24) = 0;
          }
          if ((-1 < *(short *)(temp_v4 + 0x22)) &&
             ((temp_v5 = gameGetSlotRecord(), temp_v5 == 0 ||
              (*(short *)(temp_v5 + 0x62) != *(short *)(temp_v4 + 0x26))))) {
            *(unsigned short *)(temp_v4 + 0x22) = 0xffff;
            *(unsigned short *)(temp_v4 + 0x26) = 0;
          }
          temp_v4 = FUN_004dad8c(*piVar19);
          piVar19[0x2429] = temp_v4;
          piVar19[0x246c] = 0;
          FUN_002a7b74();
          uniteStartOrQueueRequest(0x12);
          FUN_0020b908(0x27,1);
          temp_v4 = lmapSceneGetScript();
          if (temp_v4 != 0) {
            FUN_003857b4(1);
            linkHolderClearFlag(temp_v4);
          }
        }
      }
      else {
        fusionPrepareSpecialRecipeList();
      }
      temp_v15 = 0x20000;
      temp_v7 = asdVramBGetFreeBytes();
      if (temp_v7 >= 0x20001) {
        temp_v15 = 0x30000;
      }
      temp_v5 = 0x20;
      FUN_00178b04(0x20,&LAB_001fa588,0x1730);
      temp_v4 = 0;
      if (temp_v5 != 0) {
        temp_v4 = modelListInit();
      }
      piVar3[0x2483] = temp_v4;
      FUN_0040aa6c();
      FUN_0040a908(piVar3[0x2483],temp_v15);
      FUN_0040a918(piVar3[0x2483],temp_v15);
      FUN_0040aad4(piVar3[0x2483],0);
      temp_v4 = *(int *)(piVar3[0x2483] + 4);
      handleRegistryRegisterObject(g_handleRegistry,temp_v4);
      FUN_003fe86c(temp_v4,0,2);
      *(unsigned int *)(temp_v4 + 4) = *(unsigned int *)(temp_v4 + 4) & 0xfffffffc;
      temp_v4 = *(int *)(piVar3[0x2482] + 4);
      controllerRefreshAtUnitScale(piVar3[0x2484],piVar3 + 0x2485,0);
      uniteCameraInitialize(piVar3 + 0x2485);
      *(unsigned int *)(temp_v4 + 4) = *(unsigned int *)(temp_v4 + 4) & 0xfffffffc;
    }
    piVar3[0xff] = piVar3[0xff] + 1;
    return 0;
  case 0x1b:
    temp_v36 = 0;
    temp_v12 = *(char *)((int)piVar3 + 0x252);
    temp_v5 = FUN_00163aa4(piVar3 + 0x72);
    if (temp_v5 == 0) {
      piVar3[0xff] = piVar3[0xff] + 1;
      return 0;
    }
    if ((temp_v12 == '\0') || ((char)piVar3[0x125] != '\0')) {
      temp_v5 = 0;
      if (*(char *)(temp_v4 + 0x38) != '\0') {
        do {
          temp_v6 = objectApplyIfUnblocked(piVar3 + 0x23ac);
          if (temp_v6 <= temp_v5) break;
          temp_v3 = FUN_001643b4(0x1a,temp_v5 + 0x2e);
          temp_v6 = temp_v5 * 2;
          temp_v5 = temp_v5 + 1;
          *(unsigned short *)((int)piVar3 + temp_v6 + 0x438) = temp_v3;
        } while (temp_v5 < 10);
        temp_v3 = FUN_001643b4(0x1a,499);
        *(unsigned short *)((int)piVar3 + 0x476) = temp_v3;
        temp_v3 = FUN_001643b4(0x1a,0x1f1);
        *(unsigned short *)((int)piVar3 + 0x472) = temp_v3;
        temp_v3 = FUN_001643b4(0x1a,0x1f2);
        *(unsigned short *)(piVar3 + 0x11d) = temp_v3;
      }
      else {
        do {
          temp_v6 = widgetSubCallIfVisible(piVar3 + 0x23c5);
          if (temp_v6 <= temp_v5) break;
          temp_v3 = FUN_001643b4(0x1a,temp_v5 + 0xe3);
          temp_v6 = temp_v5 * 2;
          temp_v5 = temp_v5 + 1;
          *(unsigned short *)((int)piVar3 + temp_v6 + 0x438) = temp_v3;
        } while (temp_v5 < 4);
        temp_v3 = FUN_001643b4(0x1a,0x1f9);
        *(unsigned short *)((int)piVar3 + 0x476) = temp_v3;
        temp_v3 = FUN_001643b4(0x1a,0x1f8);
        *(unsigned short *)((int)piVar3 + 0x472) = temp_v3;
        temp_v3 = FUN_001643b4(0x1a,0x1f7);
        *(unsigned short *)(piVar3 + 0x11d) = temp_v3;
      }
      *(unsigned char *)(piVar3 + 0x125) = 0;
    }
    temp_v5 = piVar3[0x10d];
    if ((temp_v5 == 8 || temp_v5 == 9) || temp_v5 == 0xb) {
      temp_v5 = FUN_002c905c();
      if (temp_v5 != 0) {
        piVar3[0xff] = piVar3[0xff] + 1;
        return 0;
      }
      FUN_002a7b74();
      uniteStartOrQueueRequest(4);
    }
    temp_v5 = 0;
    temp_v30 = (int *)0x0;
    if ((short)piVar3[0x23de] != 0) {
      temp_v25 = piVar3 + 0x23ac;
      do {
        temp_v7 = (unsigned int)*(unsigned short *)((int)piVar3 + temp_v5 * 2 + 0x8f7c);
        contentEntryFindById();
        temp_v6 = resourceRunOperationIfUnblocked(temp_v25);
        temp_v11 = FUN_002a4894(temp_v25);
        if (*(short *)((int)piVar3 + (temp_v11 + temp_v6) * 2 + 0x62a0) == *(short *)(temp_v7 + 0x1a)) {
          temp_v30 = (int *)(unsigned int)*(unsigned short *)((int)piVar3 + temp_v5 * 2 + 0x8f7c);
          break;
        }
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < (int)(unsigned int)*(unsigned short *)(piVar3 + 0x23de));
    }
    fusionClassifyRecipeAvailability(*piVar3,temp_v30,&temp_v33);
    if (*(char *)(temp_v4 + 0x38) == '\0') {
      FUN_00231574();
    }
    if (g_unite != (int *)0x0) {
      temp_v5 = g_unite[0x10d];
      temp_v18 = temp_v5 != 0x18;
      if (temp_v18) {
        temp_v5 = g_unite[0x122];
      }
      if (!temp_v18 || temp_v5 == 0x18) {
        if ((char)g_unite[0x10c] != '\0') {
          piVar3[0xff] = piVar3[0xff] + 1;
          return 0;
        }
        gameFlagSetValue(0x457,1);
        FUN_002a7b74();
        uniteStartOrQueueRequest(4);
        sysPlaySe(0x5b);
      }
    }
    if (*(char *)(temp_v4 + 0x38) == '\0') {
      temp_v15 = FUN_001834a4(0x1a,0x1f9);
      temp_v26 = (int)(short)piVar3[0x11d];
      temp_v27 = temp_v39;
      temp_v28 = (int *)0x1;
      temp_v29 = (int *)0x1;
      temp_v25 = (int *)(int)*(short *)((int)piVar3 + 0x472);
      piVar17 = piVar3 + 0x23c5;
      piVar19 = piVar17;
      FUN_003450d4(piVar17,temp_v15,piVar3 + 0x10e,(int)*(short *)((int)piVar3 + 0x476));
      if ((piVar19 == (int *)0x0) &&
         (piVar19 = piVar17, FUN_00228b04(piVar17,1), piVar19 == (int *)0x0)) {
        if (*(char *)(temp_v4 + 0x38) != '\0') goto LAB_001fab44;
        goto LAB_001fac50;
      }
      temp_v5 = resourceRunEmbeddedOperationIfUnblocked(piVar17);
      temp_v6 = FUN_002a4878(piVar17);
      FUN_002a4964(piVar3 + 0x23ac,temp_v5 + temp_v6);
      if (temp_v36 == 0) {
        piVar3[0xff] = piVar3[0xff] + 1;
        return 0;
      }
    }
    else {
LAB_001fab44:
      temp_v15 = FUN_001834a4(0x1a,499);
      temp_v26 = (int)(short)piVar3[0x11d];
      temp_v29 = (int *)0x1;
      temp_v27 = temp_v39;
      temp_v28 = (int *)0x0;
      temp_v25 = (int *)(int)*(short *)((int)piVar3 + 0x472);
      piVar17 = piVar3 + 0x23ac;
      piVar19 = piVar17;
      FUN_003450d4(piVar17,temp_v15,piVar3 + 0x10e,(int)*(short *)((int)piVar3 + 0x476));
      if ((piVar19 != (int *)0x0) ||
         (piVar19 = piVar17, FUN_00228b04(piVar17,1), piVar19 != (int *)0x0)) {
        temp_v5 = resourceRunOperationIfUnblocked(piVar17);
        temp_v6 = FUN_002a4894(piVar17);
        scrollOwnerSelectIndex(piVar3 + 0x23c5,temp_v5 + temp_v6);
        if (temp_v36 == 0) {
          piVar3[0xff] = piVar3[0xff] + 1;
          return 0;
        }
      }
      else {
LAB_001fac50:
        temp_v5 = 0;
        FUN_001517b4(0,1);
        if (!(temp_v5 == 0 && (char)temp_v39[0] == '\0')) {
          piVar3[0x172] = 0;
          piVar19 = piVar3 + 0x148e;
          *(unsigned short *)((int)piVar3 + 0x8f7a) = 0;
          sysMemClear(piVar19,800);
          temp_v5 = contentBuildWordList(*piVar3,(u32)temp_v30,(ContentWordList*)piVar19);
          if (temp_v5 == 0) {
            piVar3[0xff] = piVar3[0xff] + 1;
            return 0;
          }
          temp_v5 = 0;
          do {
            if (*(short *)((int)piVar3 + temp_v5 * 2 + 0x523a) != 0) {
              psVar24 = (short *)((int)&temp_v33 + temp_v5 * 2);
              if (*psVar24 == 0) {
                *(unsigned char *)((int)piVar3 + temp_v5 + 0x5252) = 0;
              }
              if (*psVar24 == 1) {
                *(unsigned char *)((int)piVar3 + temp_v5 + 0x5252) = 1;
              }
              if (*psVar24 == 2) {
                *(unsigned char *)((int)piVar3 + temp_v5 + 0x5252) = 3;
              }
              *(short *)((int)piVar3 + 0x8f7a) = *(short *)((int)piVar3 + 0x8f7a) + 1;
            }
            temp_v5 = temp_v5 + 1;
          } while (temp_v5 < 0xc);
          piVar3[0x172] = piVar3[0x172] + 1;
          FUN_00184310((short)piVar3[0x148e]);
          temp_v26 = 1;
          temp_v25 = (int *)0x0;
          FUN_00203b40(piVar3 + 0x19f3,piVar3[0x172],5,1);
          *(unsigned char *)(piVar3 + 0x1a0c) = 0;
          piVar3[0x103] = 0x1c;
          FUN_0020b908(0x24,1);
          FUN_0037e1b0((int)(char)piVar3[0x1a0c],1);
          FUN_002c8538(1);
          FUN_00215bd0();
          FUN_002a7b74();
          piVar17 = g_unite;
          temp_v6 = 0;
          temp_v5 = 0;
          if (*(short *)((int)g_unite + 0x8f7a) != 0) {
            do {
              if (*(char *)((int)piVar19 + temp_v5 + 0x1a) == '\x03') {
                temp_v25 = (int *)0x0;
                temp_v7 = (unsigned int)*(unsigned short *)((int)piVar19 + temp_v5 * 2 + 2);
                FUN_004a8750(temp_v7,1,0);
                temp_v6 = temp_v6 + temp_v7;
              }
              temp_v5 = temp_v5 + 1;
            } while (temp_v5 < (int)(unsigned int)*(unsigned short *)((int)piVar17 + 0x8f7a));
          }
          piVar3[0x106] = temp_v6;
          FUN_0037c8e4(1,0);
          panelSetTarget(-piVar3[0x106],0);
          eventQueueAddUniqueIfValid(0x100020e);
        }
        else {
          temp_v5 = 10;
          FUN_001517b4(10,1);
          if (temp_v5 != 0) {
            piVar3[0x103] = 0x1b;
            FUN_0020b908(0x24,1);
            temp_v15 = 0x1000210;
            eventQueueAddUniqueIfValid(temp_v15);
          }
          else {
            temp_v5 = 9;
            FUN_001517b4(9,1);
            if (temp_v5 != 0) {
              eventQueueAddUniqueIfValid(0x100020e);
              sortMenuAcquire(0x12,0);
              FUN_0031f208(1);
              FUN_0031f208(2);
              FUN_0031f208(0x31);
              FUN_0031f208(3);
              useCounterStart();
              FUN_0020b908(0xc,1);
            }
            else {
              temp_v5 = 1;
              FUN_001517b4();
              if (temp_v5 == 0) {
                piVar3[0xff] = piVar3[0xff] + 1;
                return 0;
              }
              FUN_0020b908(0x28,1);
              temp_v15 = 0x100020f;
              piVar3[0x106] = 0;
              eventQueueAddUniqueIfValid(temp_v15);
            }
          }
        }
      }
    }
    temp_v5 = 0;
    if (*(char *)(temp_v4 + 0x38) != '\0') {
      do {
        if (-1 < *(short *)((int)piVar3 + temp_v5 * 2 + 0x438)) {
          *(unsigned short *)((int)piVar3 + temp_v5 * 2 + 0x438) = 0xffff;
          ifTouchRegionRemove();
        }
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < 10);
    }
    else {
      do {
        if (-1 < *(short *)((int)piVar3 + temp_v5 * 2 + 0x438)) {
          *(unsigned short *)((int)piVar3 + temp_v5 * 2 + 0x438) = 0xffff;
          ifTouchRegionRemove();
        }
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < 4);
    }
LAB_001fac1c:
    *(unsigned short *)((int)piVar3 + 0x476) = 0xffff;
    *(unsigned short *)((int)piVar3 + 0x472) = 0xffff;
    *(unsigned short *)(piVar3 + 0x11d) = 0xffff;
    ifTouchRegionRemove();
    ifTouchRegionRemove();
    ifTouchRegionRemove();
    piVar3[0xff] = piVar3[0xff] + 1;
    return 0;
  case 0x1c:
    temp_v46 = piVar3 + 0x1480;
    puVar15 = (unsigned short *)(unsigned int)*(unsigned short *)(piVar3 + 0x148e);
    FUN_00184310();
    temp_v4 = 0;
    temp_v25 = (int *)0x0;
    if ((short)piVar3[0x23de] != 0) {
      temp_v27 = (unsigned int *)(piVar3 + 0x23ac);
      do {
        temp_v7 = (unsigned int)*(unsigned short *)((int)piVar3 + temp_v4 * 2 + 0x8f7c);
        contentEntryFindById();
        temp_v5 = resourceRunOperationIfUnblocked(temp_v27);
        temp_v6 = FUN_002a4894(temp_v27);
        if (*(short *)((int)piVar3 + (temp_v5 + temp_v6) * 2 + 0x62a0) == *(short *)(temp_v7 + 0x1a)) {
          temp_v25 = (int *)(unsigned int)*(unsigned short *)((int)piVar3 + temp_v4 * 2 + 0x8f7c);
          break;
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < (int)(unsigned int)*(unsigned short *)(piVar3 + 0x23de));
    }
    temp_v42 = fusionClassifyRecipeAvailability(*piVar3,temp_v25,asStack_170);
    temp_v7 = 1;
    temp_v4 = 0;
    do {
      if (asStack_170[temp_v4] == 1) {
        temp_v7 = 0;
        break;
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 0xc);
    temp_v12 = *(char *)((int)piVar3 + 0x252);
    temp_v4 = FUN_0023b3d0();
    if (((temp_v4 == 0) || (temp_v4 = FUN_002c905c(), temp_v4 != 0)) ||
       (temp_v4 = FUN_00163aa4(piVar3 + 0x72), temp_v4 == 0)) {
      piVar3[0xff] = piVar3[0xff] + 1;
      return 0;
    }
    if (temp_v12 == '\0') {
      temp_v3 = FUN_001643b4(0x1a,0x151);
      *(unsigned short *)(piVar3 + 0x10e) = temp_v3;
      temp_v3 = FUN_001643b4(0x1a,0x1fe);
      temp_v4 = 0;
      *(unsigned short *)(piVar3 + 0x117) = temp_v3;
      do {
        temp_v5 = FUN_001834a4(0x1a,temp_v4 + 0x157);
        temp_v6 = (int)*(short *)(temp_v5 + 8);
        ifTouchRegionAdd(temp_v6,(int)*(short *)(temp_v5 + 10),(int)**(short **)(temp_v5 + 0xc),
                     (int)(*(short **)(temp_v5 + 0xc))[1]);
        temp_v5 = temp_v4 * 2;
        temp_v4 = temp_v4 + 1;
        *(short *)((int)piVar3 + temp_v5 + 0x45e) = (short)temp_v6;
      } while (temp_v4 < 4);
    }
    temp_v4 = FUN_002a7410();
    if (temp_v4 != 0) {
      temp_v4 = FUN_0035db94();
      if (temp_v4 < 0) {
        FUN_00184b90(piVar3,4);
      }
      else {
        temp_v4 = FUN_0035db94();
        if (0 < temp_v4) {
          FUN_00184b90(piVar3,3);
        }
      }
      piVar3[0x102] = 0x1c;
      FUN_0020b908(0x22,0);
      *(unsigned short *)(piVar3 + 0x10e) = 0xffff;
      ifTouchRegionRemove();
      *(unsigned short *)(piVar3 + 0x117) = 0xffff;
      ifTouchRegionRemove();
      temp_v4 = 0;
      do {
        *(unsigned short *)((int)piVar3 + temp_v4 * 2 + 0x45e) = 0xffff;
        ifTouchRegionRemove();
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 4);
    }
    else {
      temp_v47[0] = 0;
      temp_v43 = piVar3 + 0x19f3;
      if (((char)piVar3[0x1a0b] != '\0') && ((char)piVar3[0x1a0c] != '\0')) {
        FUN_0023b45c(0);
      }
      else {
        temp_v4 = FUN_0022e714();
        if ((temp_v4 == 0) || ((char)piVar3[0x241c] != '\0')) {
          temp_v18 = 0;
          *(unsigned char *)(piVar3 + 0x241c) = 0;
          temp_v4 = (int)(char)piVar3[0x1a0c];
          if (temp_v4 != 0) {
            temp_v12 = *(char *)((int)piVar3 + temp_v4 + 0x5251);
            if (temp_v12 != '\x01') {
              if (temp_v12 != '\x03') {
                FUN_0031f718((int)*(short *)((int)piVar3 + temp_v4 * 2 + 0x5238),0);
                if (*(char *)((int)piVar3 + (char)piVar3[0x1a0c] + 0x5251) == '\0') {
                  FUN_002c8550(0xe);
                }
              }
              else {
                FUN_0034a9c4(*(unsigned short *)((int)piVar3 + temp_v4 * 2 + 0x5238),0);
              }
            }
            else {
              temp_v15 = slotRecordFindById(*(unsigned short *)((int)piVar3 + temp_v4 * 2 + 0x5238));
              statusDisplayBindUnitRecord(temp_v15,0,1);
            }
          }
          else {
            FUN_0031f718((int)(short)temp_v46[0xe],0);
            if (temp_v42 != 0) {
              temp_v10 = computeCountLimit();
              temp_v18 = (unsigned short)puVar15[3] <= temp_v10;
              if (temp_v10 < (unsigned short)puVar15[3]) {
                FUN_002c8550(0xd);
                temp_v18 = 1;
              }
            }
            else {
              FUN_002c8550(0xe);
            }
          }
          temp_v4 = (int)(char)piVar3[0x1a0c];
          if (temp_v4 != 0) {
            if (*(char *)((int)piVar3 + temp_v4 + 0x5251) != '\0') {
              ppiVar16 = (int **)slotRecordFindById();
              if (ppiVar16 == (int **)0x0) {
                FUN_0035ad50(*(unsigned short *)((int)piVar3 + (char)piVar3[0x1a0c] * 2 + 0x5238),
                             &temp_v25);
                ppiVar16 = &temp_v25;
              }
              FUN_0032d0c8(0,1,*(unsigned short *)((int)piVar3 + (char)piVar3[0x1a0c] * 2 + 0x5238),
                           ppiVar16);
            }
            else {
              unitRecordBuild(*(unsigned short *)((int)piVar3 + temp_v4 * 2 + 0x5238),&temp_v25);
              FUN_0032d0c8(0,2,*(unsigned short *)((int)piVar3 + (char)piVar3[0x1a0c] * 2 + 0x5238),
                           &temp_v25);
            }
          }
          else {
            unitRecordBuild((short)temp_v46[0xe],&temp_v25);
            if (temp_v18) {
              FUN_0032d0c8(0,1,(short)temp_v46[0xe],&temp_v25);
            }
            else {
              FUN_0032d0c8(0,2,(short)temp_v46[0xe],&temp_v25);
            }
          }
          temp_v4 = FUN_0022e714();
          if (temp_v4 == 0) {
            FUN_0037e1b0((int)(char)piVar3[0x1a0c],1);
            statusPanelSetOpen(1);
          }
        }
      }
      temp_v33 = piVar3 + 0x1a00;
      temp_v25 = (int *)(int)(char)piVar3[0x1a0c];
      temp_v4 = recordGetModeForId((int)(short)piVar3[0x117]);
      if (((temp_v4 == 1 || temp_v4 == 2) || temp_v4 == 6) && ((char)temp_v33[0xc] != '\0')) {
        *(unsigned char *)(piVar3 + 0x1a0c) = 0;
        FUN_0023b45c();
      }
      temp_v5 = 0;
      if (*(short *)((int)piVar3 + 0x8f7a) != 0) {
        temp_v27 = (unsigned int *)(piVar3 + 0x1a0c);
        do {
          temp_v6 = recordGetModeForId((int)*(short *)((int)piVar3 + temp_v5 * 2 + 0x45e));
          if (((temp_v6 != 0) &&
              (temp_v4 = recordGetModeForId((int)*(short *)((int)piVar3 + temp_v5 * 2 + 0x45e)),
              (temp_v4 == 1 || temp_v4 == 2) || temp_v4 == 6)) && ((int)(char)temp_v33[0xc] != temp_v5 + 1)
             ) {
            *(char *)temp_v27 = (char)(temp_v5 + 1);
            FUN_0023b45c(0);
          }
          temp_v5 = temp_v5 + 1;
        } while (temp_v5 < (int)(unsigned int)*(unsigned short *)((int)piVar3 + 0x8f7a));
      }
      if ((int *)(int)(char)temp_v33[0xc] != temp_v25) {
        eventQueueAddUniqueIfValid(0x100020d);
      }
      if (temp_v4 != 0) {
        piVar3[0xff] = piVar3[0xff] + 1;
        return 0;
      }
      temp_v27 = temp_v39;
      temp_v26 = -1;
      temp_v25 = (int *)0xffffffff;
      temp_v28 = (int *)0x0;
      temp_v29 = (int *)0x1;
      piVar19 = temp_v43;
      FUN_003450d4(temp_v43,0,piVar3 + 0x10e,0xffffffff);
      if ((piVar19 != (int *)0x0) ||
         (piVar19 = temp_v43, FUN_00228b04(temp_v43,1), piVar19 != (int *)0x0)) {
        piVar3[0xff] = piVar3[0xff] + 1;
        return 0;
      }
      temp_v4 = 4;
      FUN_001517b4(4,1);
      if (temp_v4 != 0) {
        eventQueueAddUniqueIfValid(0x100020d);
        temp_v12 = (char)temp_v33[0xc] - '\x01';
        *(char *)(piVar3 + 0x1a0c) = temp_v12;
        if (temp_v12 < '\0') {
          *(char *)(piVar3 + 0x1a0c) = (char)*(unsigned short *)((int)piVar3 + 0x8f7a);
        }
      }
      else {
        temp_v4 = 3;
        FUN_001517b4(3,1);
        if (temp_v4 == 0) {
          temp_v4 = 0;
          FUN_001517b4(0,1);
          piVar19 = g_unite;
          if (temp_v4 == 0 && (char)temp_v39[0] == '\0') {
            temp_v4 = 1;
            FUN_001517b4();
            if (temp_v4 != 0) {
              piVar3[0x103] = 0x1b;
              FUN_0020b908(0x24,1);
              FUN_0037e1b0(0xffffffff,1);
              FUN_0022e774();
              FUN_002a7b74();
              uniteStartOrQueueRequest(4);
              *(unsigned short *)(piVar3 + 0x10e) = 0xffff;
              ifTouchRegionRemove();
              *(unsigned short *)(piVar3 + 0x117) = 0xffff;
              ifTouchRegionRemove();
              temp_v4 = 0;
              do {
                *(unsigned short *)((int)piVar3 + temp_v4 * 2 + 0x45e) = 0xffff;
                ifTouchRegionRemove();
                temp_v4 = temp_v4 + 1;
              } while (temp_v4 < 4);
              messageDismissNumericBanner(1);
              piVar3[0x106] = 0;
              eventQueueAddUniqueIfValid(0x100020f);
            }
            piVar3[0xff] = piVar3[0xff] + 1;
            return 0;
          }
          if (temp_v42 != 0) {
            temp_v5 = 0;
            temp_v4 = 0;
            if (*(short *)((int)g_unite + 0x8f7a) != 0) {
              do {
                if (*(char *)((int)piVar3 + temp_v4 + 0x5252) == '\x03') {
                  temp_v25 = (int *)0x0;
                  temp_v10 = (unsigned int)*(unsigned short *)((int)piVar3 + temp_v4 * 2 + 0x523a);
                  FUN_004a8750(temp_v10,1,0);
                  temp_v5 = temp_v5 + temp_v10;
                }
                temp_v4 = temp_v4 + 1;
              } while (temp_v4 < (int)(unsigned int)*(unsigned short *)((int)piVar19 + 0x8f7a));
            }
            piVar19 = (int *)gameGetSlotTable();
            if (*piVar19 < temp_v5) {
              FUN_002a7b74();
              uniteStartOrQueueRequest(0xc);
              temp_v15 = 0x100020f;
            }
            else {
              temp_v10 = computeCountLimit();
              if (temp_v10 < (unsigned short)puVar15[3]) {
                FUN_002a7b74();
                uniteStartOrQueueRequest(8);
                temp_v15 = 0x100020f;
              }
              else {
                temp_v4 = slotRecordFindById(*puVar15);
                if (temp_v4 == 0) {
                  temp_v10 = FUN_004d0eec();
                  piVar19 = g_unite;
                  if ((temp_v7 & ~temp_v10) != 0) {
                    FUN_002a7b74();
                    uniteStartOrQueueRequest(10);
                    eventQueueAddUniqueIfValid(0x100020f);
                    piVar3[0xff] = piVar3[0xff] + 1;
                    return 0;
                  }
                  temp_v28 = (int *)0x0;
                  temp_v29 = (int *)0x0;
                  temp_v7 = (unsigned int)*(unsigned short *)(g_unite + 0x148e);
                  FUN_00184310();
                  temp_v31 = piVar19 + 0x22dc;
                  temp_v34 = temp_v7;
                  sysMemClear(temp_v31,0xc0);
                  temp_v30 = piVar19 + 0x230c;
                  sysMemClear(temp_v30,0xc0);
                  temp_v4 = 0;
                  do {
                    temp_v16 = *(short *)((int)piVar19 + temp_v4 * 2 + 0x523a);
                    if (temp_v16 != 0) {
                      temp_v12 = *(char *)((int)piVar19 + temp_v4 + 0x5252);
                      if (temp_v12 != '\x01') {
                        if (temp_v12 == '\x03') {
                          FUN_0035ad50(temp_v16,temp_v40);
                        }
                      }
                      else {
                        temp_v15 = slotRecordFindById(temp_v16);
                        __aeabi_memcpy4(temp_v40,temp_v15,300);
                      }
                      temp_v5 = 0;
                      do {
                        temp_v7 = (unsigned int)temp_v44[temp_v5];
                        if (temp_v7 != 0) {
                          findSkillMetadataById();
                          if ((*(unsigned char *)(temp_v7 + 3) & 0x20) != 0) {
                            piVar17 = temp_v31;
                            arrayContainsU16(temp_v31,0x60,temp_v44[temp_v5]);
                            if (piVar17 == (int *)0x0) {
                              temp_v6 = temp_v34 + 0x40;
                              arrayContainsU16(temp_v6,8,temp_v44[temp_v5]);
                              if (temp_v6 == 0) {
                                temp_v6 = (int)temp_v28 * 2;
                                temp_v28 = (int *)((int)temp_v28 + 1);
                                *(unsigned short *)((int)piVar19 + temp_v6 + 0x8b70) = temp_v44[temp_v5];
                              }
                            }
                            if ((*(unsigned char *)(temp_v7 + 3) & 0x20) != 0) goto LAB_001fb9c4;
                          }
                          piVar17 = temp_v30;
                          arrayContainsU16(temp_v30,0x18,temp_v44[temp_v5]);
                          if (piVar17 == (int *)0x0) {
                            temp_v6 = temp_v34 + 0x40;
                            arrayContainsU16(temp_v6,8,temp_v44[temp_v5]);
                            if (temp_v6 == 0) {
                              temp_v6 = (int)temp_v29 * 2;
                              temp_v29 = (int *)((int)temp_v29 + 1);
                              *(unsigned short *)((int)piVar19 + temp_v6 + 0x8c30) = temp_v44[temp_v5];
                            }
                          }
                        }
LAB_001fb9c4:
                        temp_v5 = temp_v5 + 1;
                      } while (temp_v5 < 8);
                    }
                    temp_v4 = temp_v4 + 1;
                  } while (temp_v4 < 0xc);
                  temp_v25 = (int *)0x1;
                  temp_v26 = 1;
                  FUN_00203b40(piVar19 + 0x2385,temp_v28,8,1);
                  FUN_0034c340(temp_v31,temp_v28,0,piVar19 + 0x148e);
                  temp_v35 = piVar19[0x148e];
                  iStack_3a4 = piVar19[0x148f];
                  iStack_3a0 = piVar19[0x1490];
                  iStack_39c = piVar19[0x1491];
                  temp_v36 = piVar19[0x1492];
                  iStack_394 = piVar19[0x1493];
                  iStack_390 = piVar19[0x1494];
                  iStack_38c = piVar19[0x1495];
                  iStack_384 = piVar19[0x1497];
                  temp_v37 = piVar19[0x1496];
                  FUN_0034c340(temp_v30,temp_v29,0,&temp_v35);
                  FUN_003bb710((short)temp_v46[0xe]);
                  uniteListRebuild((short)temp_v46[0xe]);
                  piVar3[0x103] = 0xf;
                  FUN_0020b908(0x24,1);
                  *(unsigned short *)(piVar3 + 0x10e) = 0xffff;
                  ifTouchRegionRemove();
                  *(unsigned short *)(piVar3 + 0x117) = 0xffff;
                  ifTouchRegionRemove();
                  temp_v4 = 0;
                  do {
                    *(unsigned short *)((int)piVar3 + temp_v4 * 2 + 0x45e) = 0xffff;
                    ifTouchRegionRemove();
                    temp_v4 = temp_v4 + 1;
                  } while (temp_v4 < 4);
                  if ((char)temp_v33[0xc] != '\0') {
                    *(unsigned char *)(piVar3 + 0x1a0c) = 0;
                    FUN_0031f718((int)(short)temp_v46[0xe],0,0);
                    statusPanelSetOpen(1);
                  }
                  FUN_0037e1b0(0xffffffff,1);
                  temp_v15 = 0x100020e;
                  eventQueueAddUniqueIfValid(temp_v15);
                  piVar3[0xff] = piVar3[0xff] + 1;
                  return 0;
                }
                FUN_002a7b74();
                uniteStartOrQueueRequest(9);
                temp_v15 = 0x100020f;
              }
            }
          }
          else {
            FUN_002a7b74();
            uniteStartOrQueueRequest(0xb);
            temp_v15 = 0x100020f;
          }
          eventQueueAddUniqueIfValid(temp_v15);
          piVar3[0xff] = piVar3[0xff] + 1;
          return 0;
        }
        eventQueueAddUniqueIfValid(0x100020d);
        temp_v12 = (char)temp_v33[0xc] + '\x01';
        *(char *)(piVar3 + 0x1a0c) = temp_v12;
        if ((int)(unsigned int)*(unsigned short *)((int)piVar3 + 0x8f7a) < (int)temp_v12) {
          *(char *)(piVar3 + 0x1a0c) = '\0';
        }
      }
      FUN_0023b45c(0);
    }
    piVar3[0xff] = piVar3[0xff] + 1;
    return 0;
  case 0x1d:
    if (((0 < piVar3[0x106]) && (temp_v4 = panelStateIs0(), temp_v4 != 1)) ||
       ((char)piVar3[0x10c] != '\0')) {
      piVar3[0xff] = piVar3[0xff] + 1;
      return 0;
    }
    temp_v12 = *(char *)((int)piVar3 + 0x495);
joined_r0x001fbbe8:
    if (temp_v12 != '\0') {
      temp_v4 = gameDataBlocksGetSaveData();
      *(unsigned short *)(temp_v4 + 0x27e0c) = 0;
    }
    slotSetRequest(0,10,0xff);
    slotSetRequest(1,10,0xff);
    soundChannelStopAll(10);
    temp_v15 = 1;
    temp_v4 = 0x17;
    break;
  case 0x1e:
    if ((g_unite != (int *)0x0) && (temp_v4 = gameFlagIsSet(0x456), temp_v4 == 0)) {
      temp_v12 = '\0';
      if (g_unite != (int *)0x0) {
        temp_v12 = (char)g_unite[0x10c];
      }
      if (g_unite != (int *)0x0 && temp_v12 != '\0') {
        piVar3[0xff] = piVar3[0xff] + 1;
        return 0;
      }
      gameFlagSetValue(0x456,1);
      FUN_00215bbc();
      FUN_002c39dc(0x12,0,0xffffffff);
      FUN_00284ee4(0);
      piVar19 = g_unite;
      if ((g_unite != (int *)0x0) && (g_unite[0x2483] != 0)) {
        ptrListRemoveClearOwner(g_handleRegistry,*(unsigned int *)(g_unite[0x2483] + 4));
        piVar17 = (int *)piVar19[0x2483];
        if (piVar17 != (int *)0x0) {
          (**(romwright_code **)(*piVar17 + 4))();
          piVar19[0x2483] = 0;
        }
      }
    }
    temp_v4 = partyPanelIsStateTwentyFive();
    if (temp_v4 != 0) {
      temp_v29 = (int *)0x0;
      temp_v30 = (int *)0x0;
      temp_v25 = (int *)0x0;
      temp_v26 = 0;
      FUN_0031db84(&temp_v25,&temp_v29);
      if (ppiVar16 != (int **)0x0) {
        temp_v4 = gameGetSlotRecord(temp_v25);
        temp_v5 = gameGetSlotRecord(temp_v29);
        wordAt1B0Clear(*piVar3);
        temp_v6 = FUN_004db65c(*piVar3,*(unsigned short *)(temp_v4 + 0x62),*(unsigned short *)(temp_v5 + 0x62),
                             piVar3 + 0x4ee);
        if (temp_v6 != 0) {
          FUN_0031f718((piVar3[0x4ef] & 0x1ffffU) >> 2,0);
          statusPanelSetOpen(1);
          temp_v10 = (piVar3[0x4ef] & 0x1ffffU) >> 2;
          temp_v7 = temp_v10 << 2;
          piVar3[0x4f1] = (piVar3[0x4f1] & 0xfffe0003U) | temp_v7;
          piVar3[0x4f3] = (piVar3[0x4f3] & 0xfffe0003U) | temp_v7;
          FUN_0028a538(temp_v10,temp_v4,temp_v5);
          FUN_003bb710((piVar3[0x4ef] & 0x1ffffU) >> 2);
          uniteListRebuild((piVar3[0x4ef] & 0x1ffffU) >> 2);
          piVar3[0x103] = 0xf;
          FUN_0020b908(0x24,1);
        }
      }
    }
    temp_v4 = FUN_00284e94();
    if (temp_v4 == 0) {
      piVar3[0xff] = piVar3[0xff] + 1;
      return 0;
    }
    temp_v15 = 1;
    temp_v4 = 0x28;
    break;
  case 0x20:
    temp_v4 = engineCleanupIsDone();
    if (temp_v4 != 0) {
      uniteReleaseExit();
      FUN_0039c744();
    }
    piVar3[0xff] = piVar3[0xff] + 1;
    return 0;
  case 0x21:
    temp_v4 = engineCleanupIsDone();
    if (temp_v4 != 0) {
      uniteReleaseExit();
      fusionPrepareSpecialRecipeList();
    }
    piVar3[0xff] = piVar3[0xff] + 1;
    return 0;
  case 0x22:
    temp_v4 = FUN_00163aa4(piVar3 + 0x72);
    if (temp_v4 == 0) {
      piVar3[0xff] = piVar3[0xff] + 1;
      return 0;
    }
    temp_v15 = 0;
    temp_v4 = 0x23;
    break;
  case 0x23:
    temp_v4 = gameGlobalsGetState();
    if (temp_v4 != 0) {
      if (piVar3[0x102] == 0xd) {
        piVar19 = piVar3 + 0x1a0c;
        temp_v12 = (char)piVar3[0x1a0c] + (char)temp_v4;
        *(char *)piVar19 = temp_v12;
        if (temp_v12 < '\0') {
          *(char *)piVar19 = '\x02';
        }
        else if ('\x02' < temp_v12) {
          *(char *)piVar19 = '\0';
        }
        temp_v5 = resourceRunOperationIfUnblocked();
        temp_v6 = FUN_002a4894(piVar3 + 0x19f3);
        temp_v47[0] = (unsigned int)*(unsigned short *)((int)piVar3 + (temp_v6 + temp_v5) * 2 + 0x6832);
        if ((char)piVar3[0x1a0c] == '\0') {
          FUN_0031f718((piVar3[temp_v47[0] * 2 + 0x4ef] & 0x1ffffU) >> 2,0);
          temp_v7 = (piVar3[temp_v47[0] * 2 + 0x4ef] & 0x1ffffU) >> 2;
          FUN_00184310();
          temp_v10 = computeCountLimit();
          if (temp_v10 < *(unsigned short *)(temp_v7 + 6)) {
            FUN_002c8550(0xd);
          }
        }
        if ((char)piVar3[0x1a0c] == '\x01') {
          temp_v7 = piVar3[temp_v47[0] * 2 + 0x4ee];
          if (temp_v7 >> 0x1e == 1) {
            temp_v15 = slotRecordFindById(temp_v7 & 0x7fff);
            statusDisplayBindUnitRecord(temp_v15,0,1);
          }
          else if (temp_v7 >> 0x1e == 3) {
            FUN_0034a9c4(temp_v7 & 0x7fff,0);
          }
          else {
            FUN_0031f718((unsigned short)temp_v7 & 0x7fff,0);
          }
        }
        if ((char)piVar3[0x1a0c] == '\x02') {
          if ((piVar3[temp_v47[0] * 2 + 0x4ef] & 3U) == 1) {
            temp_v15 = slotRecordFindById((piVar3[temp_v47[0] * 2 + 0x4ee] & 0x3fffffffU) >> 0xf);
            statusDisplayBindUnitRecord(temp_v15,0,1);
          }
          else {
            temp_v7 = (piVar3[temp_v47[0] * 2 + 0x4ee] & 0x3fffffffU) >> 0xf;
            if ((piVar3[temp_v47[0] * 2 + 0x4ef] & 3U) == 3) {
              FUN_0034a9c4(temp_v7,0);
            }
            else {
              FUN_0031f718(temp_v7,0);
            }
          }
        }
        FUN_0037e1b0((int)(char)piVar3[0x1a0c],1);
        statusPanelSetOpen(1);
      }
      if (piVar3[0x102] == 0x1c) {
        temp_v29 = piVar3 + 0x1480;
        piVar19 = (int *)(unsigned int)*(unsigned short *)(piVar3 + 0x148e);
        FUN_00184310();
        temp_v3 = 0;
        temp_v5 = 0;
        temp_v30 = piVar19;
        if ((short)piVar3[0x23de] != 0) {
          temp_v28 = piVar3 + 0x23ac;
          do {
            temp_v7 = (unsigned int)*(unsigned short *)((int)piVar3 + temp_v5 * 2 + 0x8f7c);
            contentEntryFindById();
            temp_v6 = resourceRunOperationIfUnblocked(temp_v28);
            temp_v11 = FUN_002a4894(temp_v28);
            if (*(short *)((int)piVar3 + (temp_v11 + temp_v6) * 2 + 0x62a0) == *(short *)(temp_v7 + 0x1a))
            {
              temp_v3 = *(unsigned short *)((int)piVar3 + temp_v5 * 2 + 0x8f7c);
              break;
            }
            temp_v5 = temp_v5 + 1;
          } while (temp_v5 < (int)(unsigned int)*(unsigned short *)(piVar3 + 0x23de));
        }
        temp_v5 = fusionClassifyRecipeAvailability(*piVar3,temp_v3,&temp_v31);
        piVar19 = piVar3 + 0x1a0c;
        temp_v12 = (char)piVar3[0x1a0c] + (char)temp_v4;
        *(char *)piVar19 = temp_v12;
        if (temp_v12 < '\0') {
          *(char *)piVar19 = (char)*(unsigned short *)((int)piVar3 + 0x8f7a);
        }
        temp_v4 = (int)(char)piVar3[0x1a0c];
        if ((int)(unsigned int)*(unsigned short *)((int)piVar3 + 0x8f7a) < temp_v4) {
          *(char *)piVar19 = '\0';
LAB_001fc128:
          FUN_0031f718((int)(short)temp_v29[0xe],0);
          if (temp_v5 != 0) {
            temp_v7 = computeCountLimit();
            if (temp_v7 < *(unsigned short *)((int)temp_v30 + 6)) {
              temp_v15 = 0xd;
              FUN_002c8550(temp_v15);
            }
          }
          else {
            FUN_002c8550(0xe);
          }
        }
        else {
          if (temp_v4 == 0) goto LAB_001fc128;
          temp_v12 = *(char *)((int)piVar3 + temp_v4 + 0x5251);
          if (temp_v12 != '\x01') {
            if (temp_v12 != '\x03') {
              FUN_0031f718((int)*(short *)((int)piVar3 + temp_v4 * 2 + 0x5238),0);
              if (*(char *)((int)piVar3 + (char)piVar3[0x1a0c] + 0x5251) == '\0') {
                temp_v15 = 0xe;
                FUN_002c8550(temp_v15);
              }
            }
            else {
              FUN_0034a9c4(*(unsigned short *)((int)piVar3 + temp_v4 * 2 + 0x5238),0);
            }
          }
          else {
            temp_v15 = slotRecordFindById(*(unsigned short *)((int)piVar3 + temp_v4 * 2 + 0x5238));
            statusDisplayBindUnitRecord(temp_v15,0,1);
          }
        }
        FUN_0037e1b0((int)(char)piVar3[0x1a0c],1);
        statusPanelSetOpen(1);
      }
    }
    temp_v4 = FUN_002a7410();
    if (temp_v4 != 0) {
      piVar3[0xff] = piVar3[0xff] + 1;
      return 0;
    }
    temp_v4 = FUN_0035db94();
    if (temp_v4 < 0) {
      FUN_00184b90(piVar3,2);
    }
    else {
      temp_v4 = FUN_0035db94();
      if (0 < temp_v4) {
        FUN_00184b90(piVar3,1);
      }
    }
    temp_v4 = piVar3[0x102];
    temp_v15 = 0;
    break;
  case 0x24:
    FUN_00163aa4(piVar3 + 0x72);
    if (*(char *)((int)piVar3 + 0x252) == '\0') {
      piVar3[0xff] = piVar3[0xff] + 1;
      return 0;
    }
    if (piVar3[0x101] != 0xb) {
      if ((piVar3[0x101] == 0x1b) && (piVar3[0x103] == 0x1b)) {
        *(unsigned char *)(temp_v4 + 0x38) = *(unsigned char *)(temp_v4 + 0x38) ^ 1;
      }
    }
    else if (piVar3[0x103] == 0xb) {
      *(unsigned char *)(temp_v4 + 0x38) = *(unsigned char *)(temp_v4 + 0x38) ^ 1;
    }
    if (piVar3[0x103] == 0xf) {
      piVar3[0x22d8] = 0;
      piVar3[0x22d9] = 0;
      piVar3[0x22da] = 0;
      piVar3[0x22db] = 0;
      piVar3[0x239f] = 0;
    }
    FUN_00184b90(piVar3,1);
    FUN_0020b908(piVar3[0x103],0);
    temp_v4 = piVar3[0x103];
    if ((temp_v4 != 0x16 && temp_v4 != 0x1f) && (temp_v4 != 0x1d)) {
      FUN_003343f0(0);
    }
    piVar3[0xff] = piVar3[0xff] + 1;
    return 0;
  case 0x25:
    if ((char)piVar3[0x10c] != '\0') {
      piVar3[0xff] = piVar3[0xff] + 1;
      return 0;
    }
    if (*(char *)((int)piVar3 + 0x9071) != '\0') {
      if (g_unite != (int *)0x0) {
        *(unsigned char *)(g_unite + 0x108) = 3;
        piVar19[0x100] = 0;
        piVar19[0xff] = 0;
      }
      *(unsigned char *)((int)piVar3 + 0x9071) = 0;
    }
    else {
      FUN_0022e774();
      FUN_0020b908(5,1);
      FUN_002a7b74();
      temp_v15 = 3;
      uniteStartOrQueueRequest(temp_v15);
    }
    piVar3[0xff] = piVar3[0xff] + 1;
    return 0;
  case 0x26:
    if ((char)piVar3[0x10c] != '\0') {
      piVar3[0xff] = piVar3[0xff] + 1;
      return 0;
    }
    FUN_00184b90(piVar3,1);
    temp_v15 = 1;
    piVar3[0x103] = 0;
    temp_v4 = 0x24;
    break;
  case 0x27:
    if ((char)piVar3[0x10c] != '\0') {
      piVar3[0xff] = piVar3[0xff] + 1;
      return 0;
    }
    FUN_0031d890();
    FUN_00215bbc();
    FUN_002c39dc(0x12,0,0xffffffff);
    FUN_00284ee4(1);
    piVar19 = g_unite;
    if ((g_unite != (int *)0x0) && (g_unite[0x2483] != 0)) {
      ptrListRemoveClearOwner(g_handleRegistry,*(unsigned int *)(g_unite[0x2483] + 4));
      piVar17 = (int *)piVar19[0x2483];
      if (piVar17 != (int *)0x0) {
        (**(romwright_code **)(*piVar17 + 4))();
        piVar19[0x2483] = 0;
      }
    }
    temp_v15 = 1;
    temp_v4 = 0x1e;
  }
  FUN_0020b908(temp_v4,temp_v15);
  piVar3[0xff] = piVar3[0xff] + 1;
  return 0;
}

} /* extern "C" */
