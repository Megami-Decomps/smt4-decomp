/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00276264` (_code @ 0x276264, 0x6f00 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
struct ScriptHolder;

extern "C" {

int ARM_common_memcpy4_9(...);
int asdSequenceRequest(...);
int randRange(...);
int jobStop(...);
int bgmReleaseStopped(void);
int FUN_00270c58(...);
int cameraRegistryRemove(...);
int FUN_00363c58(...);
int FUN_00376f84(void);
int FUN_003847d4(...);
int FUN_003b5064(void);
int FUN_003c91e8(void);
int soundChannelStopAll(...);
int objectVectorClear(...);
int twoObjectsRelease(...);
int sub68OwnerDestroyAll(void);
int jobFlagObjStop(void);

int FUN_001927c0(...);
int ptrListRemoveClearOwner(...);
int asdEnvResetModelBank(...);
int dialogClose(...);
int FUN_00227a70(void);
int resourceSlotsRelease(void);
int mapReleaseTableTexture(...);
int resourceRemoveSlotOwners(void);
int FUN_00294854(void);
int mapGimicClearEntryChildren(void);
int FUN_002ba30c(void);
int FUN_002d22c0(...);
int engineRecordsUnregisterHandles(void);
int FUN_002e5924(...);
int mapProjectPointHeightToCollision(...);
int messageStartIntroAnimation(void);
int FUN_0040619c(...);
int mapIfUnregisterOwnedResources(void);

int asdMemFree(...);
int scrScriptProcessDestroy(...);
int resourceOwnerReleaseAndReset(...);
int FUN_002237a0(void);
int FUN_002342b8(void);
int FUN_00244ac8(void);
int scrScriptProcessGetEntry(...);
int FUN_00291e50(...);
int FUN_002941c8(...);
int FUN_002b79d8(void);
int mapSetSceneState(...);
int lmapInitializeArea(...);
int FUN_0033f9f4(void);
int FUN_00398024(void);
int FUN_003a2278(...);
int scriptHolderFree1(...);
int scriptHolderBReset(...);
int scriptHolderFree2(...);
int scriptHolderReset(...);
int scriptHolderFree3(...);
int FUN_0047e430(...);
int FUN_00483acc(...);
int FUN_00245d78(...);
int naviMainRequestProcessing(...);
int recTableFireType3(void);

int FUN_001ad9b4(void);
int slotSetRequest(...);
void frameTransitionSetMode(int);
int FUN_002c2358(void);
int FUN_002c23cc(...);
int FUN_002c2610(void);
int FUN_002c3398(...);
int popupStart(void);
int FUN_003254a0(void);
int objectE0ResetFlags1040(void);
int mapRecordResumePoint(void);
int FUN_00341fa4(...);
int sub68OwnerCall3(void);
int sub68OwnerCall4(void);
int clearFlags310To31F(void);
int FUN_00379be8(void);
int helpResourcesRelease(...);
int lmapApplyMapAndArea(void);
int uiPlayGatedActionFeedback(void);
int FUN_003b5c54(...);
int gameDataSaveSetValues(...);
int FUN_004731d8(void);
int mapRestoreSavedDestination(...);
int FUN_00483294(...);
int FUN_00294a84(...);
int FUN_00482fd4(...);

int sysPlaySe(...);
int eventQueueAddUnique(...);
int dataTable08Sub2GetRecord(void);
int FUN_0020ecd4(void);
int popupTryStartScrollPrompt(...);
int FUN_00246344(void);
int popupStateSetAndShow(...);
void popupTryStartTimedPrompt(void);
int FUN_00294cfc(...);
int FUN_00295108(...);
int FUN_002b80b8(void);
void FUN_002b80fc(float x, float y, float z);
int mapIfStart(...);
int libc_strcpy(...);
int tableGroupFindEntryIndex(...);
int frameTexInitActive(void);
int FUN_00384d6c(...);
int FUN_003adef4(...);
int naviMainFinishRequest(void);
int sysPlayVoice(...);
int FUN_00482c04(void);
int FUN_00325a74(void);
int lmapSnapshotTransitionState(void);
int FUN_004bc758(...);

int FUN_0015f858(...);
int FUN_001654f0(void);
int FUN_001681c4(void);
int FUN_001695a0(void);
int mapPopupReset(void);
int FUN_00234b30(void);
int FUN_00235438(void);
int gameDataCopySaveToWork(void);
int FUN_002737a8(void);
int scrScriptProcessStartEntry(...);
int FUN_00311b74(void);
int naviMainSetFlagsAndActivate(...);
int FUN_003180c4(...);
int FUN_003401a4(...);
int mapProbePositionDownward(...);
int FUN_00387014(void);
int FUN_00471d00(void);
int FUN_00483834(...);
int fireEntriesMatchingPair(...);

int FUN_0013cab8(...);
int FUN_0014f0dc(...);
int FUN_001523b8(...);
int FUN_0020f12c(...);
int mapIfSetMode1(void);
int mapLoadSkyTable(...);
int FUN_00249dec(void);
int FUN_002747dc(void);
int naviMainUpdateSlider(...);
int FUN_00297c3c(void);
int FUN_002a2e98(...);
int FUN_002ddea0(void);
int mapPlaceSet(...);
int FUN_00364740(...);
int mapIfClose(void);
int FUN_003699e4(void);
int FUN_0036a434(...);
int FUN_0036aa04(...);
int FUN_0036b824(...);
int FUN_00378000(void);
int mapEnvironmentSelectPreset(...);
int FUN_00399290(...);
int FUN_003d502c(...);
int lmapEnemyCtrlLoadModels(...);
int fieldBuildAreaPlacementList(...);
int stateSetterSetFromBase(...);
int applyIfIdValid(...);
int __aeabi_memcpy4(...);

int asdCameraInitializeDefaults(...);
int FUN_00178b04(...);
int FUN_001cd3ec(...);
int asdLoadFileAsyncWrap(...);
int asdLoadFileSyncDefault(void);
int FUN_00233170(void);
int FUN_00275bc8(...);
void mapIfInitializeSceneControllers(void);
int navigationSetArguments(...);
int FUN_002df914(void);
int FUN_00314bf8(...);
int lmapInitializeActorHandles(void);
int FUN_0033e014(...);
int FUN_00356674(void);
int FUN_00376fb8(...);
int FUN_00379d58(void);
int FUN_00398004(...);
int FUN_003de188(...);
int FUN_003fd7c0(...);
int FUN_0040a908(...);
int FUN_0040a918(...);
int FUN_0040aa6c(void);
int FUN_0040aad4(...);
int FUN_0040ab8c(...);
int handleRegistryRegisterObject(...);
int FUN_0024ad50(void);
int mapGimicInitializeProcessing(...);
int FUN_00314b7c(...);
int FUN_003a3b88(void);

int textFormatBuffer(...);
int gameDataTableGetFlag(void);
int FUN_002019dc(unsigned int, int);
int FUN_00215978(...);
int FUN_00239b10(int);
int FUN_002b91ec(void);
int FUN_002b9324(void);
int gameFlagBitSetValue(int, int);
int FUN_00376fa4(...);
int dataTableGetRecord23(void);
int gameApplyCurrentFlagTableEntry(void);
int sysClearCachedFlag(void);
int FUN_003b5714(...);
int gameFlagSetEligibleEntryFlagsAtThreshold(int);
int gameFlagSetValue(...);
int countersAddSaturating(int, int);
int FUN_0040ae70(...);
int resourceOwnerLoadNamed(...);
int itemResetOverLimitStates(int);
int FUN_004bc95c(...);
int VectorSignedToFloat(...);
int FUN_00244acc(void);
int mapIfSetOpaqueMode(void);
int popupRequest(void);
int FUN_0037723c(...);

typedef int romwright_code(...);
extern unsigned int g_handleRegistry; /* 0x56fcc0 */
extern int g_aocMain; /* 0x570260 */
extern int g_aocSystem; /* 0x570280 */
extern unsigned int *g_lmapMainState; /* 0x580238 */
extern int g_lmapView; /* 0x5806a4 */
extern int DAT_00581280; /* 0x581280 */
extern int g_lmapScene; /* 0x581288 */
extern unsigned char g_localCamera; /* 0x5f10cc */
extern int g_gameState; /* 0x5f15fc */
extern int DAT_005f1600; /* 0x5f1600 */
extern unsigned int DAT_005f1604; /* 0x5f1604 */
extern unsigned int DAT_005f1608; /* 0x5f1608 */
extern unsigned int DAT_005f160c; /* 0x5f160c */
extern unsigned int DAT_005f1610; /* 0x5f1610 */
extern signed char DAT_005f1614; /* 0x5f1614 */
extern unsigned char DAT_005f161c; /* 0x5f161c */
extern signed char DAT_005f161d; /* 0x5f161d */
extern unsigned char DAT_005f161f; /* 0x5f161f */
extern unsigned char uRam005f1621; /* 0x5f1621 */
extern unsigned char DAT_005f1622; /* 0x5f1622 */
extern unsigned char DAT_005f1623; /* 0x5f1623 */
extern signed char DAT_005f1634; /* 0x5f1634 */
extern int DAT_005f1638; /* 0x5f1638 */
extern unsigned int DAT_005f163c; /* 0x5f163c */
extern unsigned int DAT_005f1658; /* 0x5f1658 */
extern int DAT_005f165c; /* 0x5f165c */
extern unsigned int DAT_005f1660; /* 0x5f1660 */
extern unsigned int DAT_005f1664; /* 0x5f1664 */
extern unsigned int DAT_005f1668; /* 0x5f1668 */
extern unsigned int uRam005f166c; /* 0x5f166c */
extern unsigned int uRam005f1670; /* 0x5f1670 */
extern int DAT_005f16a0; /* 0x5f16a0 */
extern int DAT_005f16a4; /* 0x5f16a4 */
extern unsigned int DAT_005f16a8; /* 0x5f16a8 */
extern unsigned int DAT_005f16b0; /* 0x5f16b0 */
extern unsigned int DAT_005f16b4; /* 0x5f16b4 */
extern float DAT_005f16b8; /* 0x5f16b8 */
extern unsigned int DAT_005f16bc; /* 0x5f16bc */
extern unsigned int DAT_005f16c0; /* 0x5f16c0 */
extern unsigned int DAT_005f16c4; /* 0x5f16c4 */
extern unsigned int DAT_005f16c8; /* 0x5f16c8 */
extern int DAT_005f16d0; /* 0x5f16d0 */
extern unsigned int DAT_005f16d4; /* 0x5f16d4 */
extern unsigned char DAT_005f16d8; /* 0x5f16d8 */
extern unsigned int DAT_005f16dc; /* 0x5f16dc */
extern int DAT_005f16e0; /* 0x5f16e0 */
extern signed char DAT_005f16e4; /* 0x5f16e4 */
extern signed char DAT_005f16e5; /* 0x5f16e5 */
extern signed char DAT_005f16e6; /* 0x5f16e6 */
extern unsigned char DAT_005f16e7; /* 0x5f16e7 */
extern unsigned char DAT_005f16e8; /* 0x5f16e8 */
extern short DAT_005f16ec; /* 0x5f16ec */
extern unsigned int DAT_005f16fc; /* 0x5f16fc */
extern unsigned char DAT_005f1725; /* 0x5f1725 */
extern unsigned char DAT_005f1726; /* 0x5f1726 */
extern unsigned char DAT_005f1727; /* 0x5f1727 */
extern unsigned char DAT_005f1728; /* 0x5f1728 */
extern unsigned char DAT_005f1729; /* 0x5f1729 */
extern unsigned char DAT_005f172a; /* 0x5f172a */
extern signed char DAT_005f172b; /* 0x5f172b */
extern unsigned char DAT_005f1730; /* 0x5f1730 */
extern signed char DAT_005f1748; /* 0x5f1748 */
extern signed char DAT_005f1768; /* 0x5f1768 */
extern unsigned char DAT_005f1769; /* 0x5f1769 */
extern unsigned int DAT_005f176c; /* 0x5f176c */
extern unsigned int DAT_005f1770; /* 0x5f1770 */
extern signed char DAT_005f1776; /* 0x5f1776 */
extern unsigned int DAT_005f1778; /* 0x5f1778 */
extern unsigned char DAT_005f177c; /* 0x5f177c */
extern short DAT_005f1794; /* 0x5f1794 */
extern short DAT_005f1796; /* 0x5f1796 */
extern unsigned char DAT_005f1798; /* 0x5f1798 */
extern short DAT_005f17a8; /* 0x5f17a8 */
extern short DAT_005f17aa; /* 0x5f17aa */
extern signed char DAT_005f17c9; /* 0x5f17c9 */
extern int DAT_005f17e8; /* 0x5f17e8 */
extern unsigned int DAT_005f17ec; /* 0x5f17ec */
extern unsigned char DAT_005f1859; /* 0x5f1859 */
extern unsigned char DAT_005f185a; /* 0x5f185a */
extern unsigned char DAT_005f185b; /* 0x5f185b */
extern unsigned char DAT_005f185c; /* 0x5f185c */
extern unsigned char DAT_005f185d; /* 0x5f185d */
extern unsigned char DAT_005f185e; /* 0x5f185e */
extern unsigned char DAT_005f185f; /* 0x5f185f */
extern unsigned int DAT_005f1860; /* 0x5f1860 */
extern unsigned int DAT_005f1864; /* 0x5f1864 */
extern unsigned char DAT_005f187c; /* 0x5f187c */
extern unsigned int DAT_005f1894; /* 0x5f1894 */
extern unsigned int DAT_005f1898; /* 0x5f1898 */
extern int DAT_005f189c; /* 0x5f189c */
extern int DAT_005f18c0; /* 0x5f18c0 */
extern signed char DAT_005f18c4; /* 0x5f18c4 */
extern signed char DAT_005f18c5; /* 0x5f18c5 */
extern unsigned int DAT_005f18c8; /* 0x5f18c8 */
extern unsigned int DAT_005f18cc; /* 0x5f18cc */
extern unsigned int DAT_005f18d0; /* 0x5f18d0 */
extern unsigned int DAT_005f18d4; /* 0x5f18d4 */
extern unsigned int DAT_005f18d8; /* 0x5f18d8 */
extern unsigned int DAT_005f18dc; /* 0x5f18dc */
extern unsigned int DAT_005f18e0; /* 0x5f18e0 */
extern unsigned int DAT_005f18e8; /* 0x5f18e8 */
extern signed char DAT_005f19ee; /* 0x5f19ee */
extern int DAT_005f1a58; /* 0x5f1a58 */
extern signed char DAT_005f1a60; /* 0x5f1a60 */
extern unsigned char DAT_005f1aca; /* 0x5f1aca */
extern signed char DAT_005f1acb; /* 0x5f1acb */
extern signed char DAT_005f1ad7; /* 0x5f1ad7 */
extern int DAT_005f1b08; /* 0x5f1b08 */
extern unsigned int DAT_005f1b0c; /* 0x5f1b0c */
extern int DAT_005f1b64; /* 0x5f1b64 */
extern signed char DAT_005f1b70; /* 0x5f1b70 */
extern int DAT_005f1b74; /* 0x5f1b74 */
extern int DAT_005f1b78; /* 0x5f1b78 */
extern unsigned int DAT_005f1b7c; /* 0x5f1b7c */
extern unsigned int DAT_005f1b80; /* 0x5f1b80 */
extern unsigned int DAT_005f1b84; /* 0x5f1b84 */
extern unsigned int DAT_005f1b88; /* 0x5f1b88 */
extern unsigned int DAT_005f1b8c; /* 0x5f1b8c */
extern unsigned int DAT_005f1b90; /* 0x5f1b90 */
extern unsigned int DAT_005f1b94; /* 0x5f1b94 */
extern unsigned int DAT_005f1b98; /* 0x5f1b98 */
extern unsigned int DAT_005f1b9c; /* 0x5f1b9c */
extern unsigned int DAT_005f1ba0; /* 0x5f1ba0 */
extern unsigned int DAT_005f1ba4; /* 0x5f1ba4 */
extern unsigned int DAT_005f1ba8; /* 0x5f1ba8 */
extern unsigned int DAT_005f1bac; /* 0x5f1bac */
extern signed char DAT_005f1bc4; /* 0x5f1bc4 */
extern unsigned int DAT_005f1be4; /* 0x5f1be4 */
extern int DAT_005f1be8; /* 0x5f1be8 */
extern int g_mapSelection; /* 0x5f1c98 */
extern int DAT_005f1c9c; /* 0x5f1c9c */
extern int DAT_005f1ca0; /* 0x5f1ca0 */
extern unsigned int DAT_005f1ca4; /* 0x5f1ca4 */
extern unsigned int DAT_005f1ca8; /* 0x5f1ca8 */
extern unsigned int DAT_005f1cac; /* 0x5f1cac */
extern unsigned int DAT_005f1cb0; /* 0x5f1cb0 */

#ifndef ROMWRIGHT_PIECE_2_2_DEFINED
#define ROMWRIGHT_PIECE_2_2_DEFINED
#define romwright_piece_2_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned short)(upper) << 16) | (unsigned short)(lower)))
#endif
#ifndef ROMWRIGHT_PIECE_3_1_DEFINED
#define ROMWRIGHT_PIECE_3_1_DEFINED
#define romwright_piece_3_1(upper, lower) ((unsigned int)(((unsigned int)(unsigned int)(upper) << 8) | (unsigned char)(lower)))
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_1_1_DEFINED
#define ROMWRIGHT_PIECE_1_1_DEFINED
#define romwright_piece_1_1(upper, lower) ((unsigned short)(((unsigned short)(unsigned char)(upper) << 8) | (unsigned char)(lower)))
#endif
#ifndef ROMWRIGHT_PIECE_1_2_DEFINED
#define ROMWRIGHT_PIECE_1_2_DEFINED
#define romwright_piece_1_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned char)(upper) << 16) | (unsigned short)(lower)))
#endif
#ifndef ROMWRIGHT_PIECE_1_3_DEFINED
#define ROMWRIGHT_PIECE_1_3_DEFINED
#define romwright_piece_1_3(upper, lower) ((unsigned int)(((unsigned int)(unsigned char)(upper) << 24) | ((unsigned int)(lower) & 0xffffffULL)))
#endif
/* Supplied declaration required: ARM_common_memcpy4_9. */
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: asdSequenceRequest. */
/* Supplied declaration required: asdCameraInitializeDefaults. */
/* Supplied declaration required: FUN_0013cab8. */
extern int FUN_0013def0(unsigned int);
extern int gameDataBlocksGetSaveData(void);
/* Supplied declaration required: randRange. */
/* Supplied declaration required: FUN_0014f0dc. */
/* Supplied declaration required: FUN_001523b8. */
extern int saveSlotFindSelected(void);
/* Supplied declaration required: FUN_0015f858. */
extern int campIsState85(void);
extern int gameFlagsGetBlock(void);
/* Supplied declaration required: jobStop. */
extern int infoWinHasValue(void);
/* Supplied declaration required: FUN_001654f0. */
/* Supplied declaration required: FUN_001681c4. */
/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: FUN_001695a0. */
/* Supplied declaration required: eventQueueAddUnique. */
/* Supplied declaration required: FUN_00178b04. */
extern int gameGetPlayerData(void);
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: dataTable08Sub2GetRecord. */
/* Supplied declaration required: FUN_001927c0. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: FUN_001ad9b4. */
/* Supplied declaration required: ptrListRemoveClearOwner. */
/* Supplied declaration required: resourceOwnerReleaseAndReset. */
extern int gameSlotTableFindFree(void);
/* Supplied declaration required: gameDataTableGetFlag. */
extern int FUN_001ba570(void);
extern int FUN_001bd118(void);
/* Supplied declaration required: FUN_001cd3ec. */
/* Supplied declaration required: asdLoadFileAsyncWrap. */
/* Supplied declaration required: asdEnvResetModelBank. */
/* Supplied declaration required: slotSetRequest. */
/* Supplied declaration required: FUN_002019dc. */
/* Supplied declaration required: asdLoadFileSyncDefault. */
/* Supplied declaration required: dialogClose. */
/* Supplied declaration required: FUN_0020ecd4. */
/* Supplied declaration required: mapPopupReset. */
/* Supplied declaration required: FUN_0020f12c. */
/* Supplied declaration required: FUN_00215978. */
/* Supplied declaration required: mapIfSetMode1. */
/* Supplied declaration required: FUN_002237a0. */
extern int scrRunOpcodesStub(unsigned int);
/* Supplied declaration required: FUN_00227a70. */
/* Supplied declaration required: FUN_00233170. */
/* Supplied declaration required: FUN_002342b8. */
/* Supplied declaration required: popupTryStartScrollPrompt. */
/* Supplied declaration required: FUN_00234b30. */
/* Supplied declaration required: FUN_00235438. */
/* Supplied declaration required: gameDataCopySaveToWork. */
/* Supplied declaration required: FUN_00239b10. */
/* Supplied declaration required: FUN_00244ac8. */
/* Supplied declaration required: FUN_00246344. */
/* Supplied declaration required: resourceSlotsRelease. */
/* Supplied declaration required: mapReleaseTableTexture. */
/* Supplied declaration required: mapLoadSkyTable. */
/* Supplied declaration required: FUN_00249dec. */
/* Supplied declaration required: scrScriptProcessGetEntry. */
/* Supplied declaration required: bgmReleaseStopped. */
/* Supplied declaration required: FUN_00270c58. */
/* Supplied declaration required: FUN_002737a8. */
/* Supplied declaration required: FUN_002747dc. */
/* Supplied declaration required: popupStateSetAndShow. */
/* Supplied declaration required: popupTryStartTimedPrompt. */
/* Supplied declaration required: resourceRemoveSlotOwners. */
/* Supplied declaration required: naviMainUpdateSlider. */
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: scrScriptProcessStartEntry. */
extern char *campGetState(void);
/* Supplied declaration required: FUN_00291e50. */
/* Supplied declaration required: FUN_002941c8. */
/* Supplied declaration required: FUN_00294854. */
extern int mapIfHasSelection(void);
/* Supplied declaration required: FUN_00294cfc. */
/* Supplied declaration required: FUN_00295108. */
/* Supplied declaration required: FUN_00297c3c. */
/* Supplied declaration required: FUN_002a2e98. */
extern int messageGetChoiceResult(void);
extern int mapDepartIsRunning(void);
/* Supplied declaration required: FUN_002b79d8. */
/* Supplied declaration required: mapGimicClearEntryChildren. */
/* Supplied declaration required: FUN_002b80b8. */
/* Supplied declaration required: FUN_002b80fc. */
/* Supplied declaration required: FUN_002b91ec. */
/* Supplied declaration required: FUN_002b9324. */
/* Supplied declaration required: FUN_002ba30c. */
/* Supplied declaration required: FUN_002c2358. */
/* Supplied declaration required: FUN_002c23cc. */
/* Supplied declaration required: FUN_002c2610. */
/* Supplied declaration required: FUN_002c3398. */
/* Supplied declaration required: FUN_002d22c0. */
/* Supplied declaration required: mapIfStart. */
/* Supplied declaration required: mapIfInitializeSceneControllers. */
/* Supplied declaration required: engineRecordsUnregisterHandles. */
/* Supplied declaration required: FUN_002ddea0. */
/* Supplied declaration required: navigationSetArguments. */
/* Supplied declaration required: FUN_002df914. */
extern int FUN_002e07f4(void);
extern int FUN_002e1a18(unsigned int);
/* Supplied declaration required: libc_strcpy. */
/* Supplied declaration required: FUN_002e5924. */
extern unsigned int FUN_002e5c2c(void);
/* Supplied declaration required: FUN_00311b74. */
/* Supplied declaration required: popupStart. */
/* Supplied declaration required: mapSetSceneState. */
/* Supplied declaration required: FUN_00314bf8. */
/* Supplied declaration required: naviMainSetFlagsAndActivate. */
/* Supplied declaration required: FUN_003180c4. */
extern int FUN_0031d230(void);
/* Supplied declaration required: mapPlaceSet. */
/* Supplied declaration required: FUN_003254a0. */
/* Supplied declaration required: lmapInitializeActorHandles. */
/* Supplied declaration required: objectE0ResetFlags1040. */
/* Supplied declaration required: lmapInitializeArea. */
/* Supplied declaration required: mapRecordResumePoint. */
extern int gameFlagsGet(unsigned int);
extern int FUN_0033bfac(void);
extern int mapIfGetState(void);
/* Supplied declaration required: FUN_0033e014. */
/* Supplied declaration required: FUN_0033f9f4. */
/* Supplied declaration required: FUN_003401a4. */
/* Supplied declaration required: FUN_00341fa4. */
/* Supplied declaration required: mapProjectPointHeightToCollision. */
/* Supplied declaration required: mapProbePositionDownward. */
extern int FUN_00356380(void);
/* Supplied declaration required: FUN_00356674. */
/* Supplied declaration required: sub68OwnerCall3. */
/* Supplied declaration required: sub68OwnerCall4. */
/* Supplied declaration required: tableGroupFindEntryIndex. */
/* Supplied declaration required: cameraRegistryRemove. */
/* Supplied declaration required: frameTexInitActive. */
/* Supplied declaration required: FUN_00363c58. */
/* Supplied declaration required: gameFlagBitSetValue. */
/* Supplied declaration required: FUN_00364740. */
/* Supplied declaration required: mapIfClose. */
/* Supplied declaration required: clearFlags310To31F. */
/* Supplied declaration required: FUN_003699e4. */
/* Supplied declaration required: FUN_0036a434. */
/* Supplied declaration required: FUN_0036aa04. */
/* Supplied declaration required: FUN_0036b824. */
/* Supplied declaration required: FUN_00376f84. */
/* Supplied declaration required: FUN_00376fa4. */
/* Supplied declaration required: FUN_00376fb8. */
/* Supplied declaration required: FUN_00378000. */
/* Supplied declaration required: mapEnvironmentSelectPreset. */
/* Supplied declaration required: dataTableGetRecord23. */
/* Supplied declaration required: FUN_00379be8. */
/* Supplied declaration required: FUN_00379d58. */
/* Supplied declaration required: helpResourcesRelease. */
/* Supplied declaration required: FUN_003847d4. */
/* Supplied declaration required: FUN_00384d6c. */
extern char FUN_00386720(void);
/* Supplied declaration required: FUN_00387014. */
/* Supplied declaration required: FUN_00398004. */
/* Supplied declaration required: FUN_00398024. */
/* Supplied declaration required: FUN_00399290. */
/* Supplied declaration required: lmapApplyMapAndArea. */
/* Supplied declaration required: FUN_003a2278. */
/* Supplied declaration required: gameApplyCurrentFlagTableEntry. */
extern int dataTable2FType0GetEntry(int);
/* Supplied declaration required: uiPlayGatedActionFeedback. */
/* Supplied declaration required: FUN_003adef4. */
extern int FUN_003ae4d0(unsigned int);
/* Supplied declaration required: naviMainFinishRequest. */
/* Supplied declaration required: sysClearCachedFlag. */
/* Supplied declaration required: FUN_003b5064. */
/* Supplied declaration required: FUN_003b5714. */
/* Supplied declaration required: FUN_003b5c54. */
/* Supplied declaration required: FUN_003c91e8. */
/* Supplied declaration required: messageStartIntroAnimation. */
extern int FUN_003cd4b4(unsigned int);
/* Supplied declaration required: sysPlayVoice. */
/* Supplied declaration required: soundChannelStopAll. */
/* Supplied declaration required: FUN_003d502c. */
/* Supplied declaration required: FUN_003de188. */
/* Supplied declaration required: gameFlagSetEligibleEntryFlagsAtThreshold. */
extern int gameDataFlagTestBit(unsigned int);
/* Supplied declaration required: gameFlagSetValue. */
/* Supplied declaration required: FUN_003fd7c0. */
/* Supplied declaration required: FUN_0040619c. */
/* Supplied declaration required: objectVectorClear. */
/* Supplied declaration required: countersAddSaturating. */
/* Supplied declaration required: FUN_0040a908. */
/* Supplied declaration required: FUN_0040a918. */
/* Supplied declaration required: FUN_0040aa6c. */
/* Supplied declaration required: FUN_0040aad4. */
/* Supplied declaration required: FUN_0040ab8c. */
extern unsigned int modelListInit(void);
/* Supplied declaration required: handleRegistryRegisterObject. */
/* Supplied declaration required: FUN_0040ae70. */
extern int FUN_0040af60(unsigned int);
/* Supplied declaration required: resourceOwnerLoadNamed. */
extern int FUN_004186e0(void);
/* Supplied declaration required: FUN_00471d00. */
/* Supplied declaration required: gameDataSaveSetValues. */
/* Supplied declaration required: FUN_004731d8. */
extern int gameBlockByte27E98Is1To3(void);
/* Supplied declaration required: mapRestoreSavedDestination. */
/* Supplied declaration required: scriptHolderFree1. */
/* Supplied declaration required: scriptHolderBReset. */
extern unsigned int scriptHolderUpdateForward(ScriptHolder *);
extern unsigned int scriptHolderUpdate(ScriptHolder *);
extern int FUN_0047e150(int);
/* Supplied declaration required: scriptHolderFree2. */
/* Supplied declaration required: scriptHolderReset. */
/* Supplied declaration required: scriptHolderFree3. */
/* Supplied declaration required: FUN_0047e430. */
extern int scriptHolderUpdateSimple(int);
/* Supplied declaration required: FUN_00482c04. */
/* Supplied declaration required: FUN_00483294. */
/* Supplied declaration required: FUN_00483834. */
/* Supplied declaration required: lmapEnemyCtrlLoadModels. */
/* Supplied declaration required: fieldBuildAreaPlacementList. */
/* Supplied declaration required: stateSetterSetFromBase. */
/* Supplied declaration required: FUN_00483acc. */
/* Supplied declaration required: twoObjectsRelease. */
extern int FUN_004a0404(void);
extern int FUN_004a0f5c(void);
/* Supplied declaration required: itemResetOverLimitStates. */
extern int flagsBit7Get(int, int);
/* Supplied declaration required: FUN_004bc95c. */
extern int FUN_004d0584(void);
extern int battleValuesSet(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00244acc. */
/* Supplied declaration required: FUN_00245d78. */
/* Supplied declaration required: mapIfSetOpaqueMode. */
/* Supplied declaration required: FUN_0024ad50. */
/* Supplied declaration required: FUN_00294a84. */
extern unsigned int regionFindRecord(int);
/* Supplied declaration required: naviMainRequestProcessing. */
/* Supplied declaration required: mapGimicInitializeProcessing. */
extern int naviMainUpdateWidget(void);
extern int FUN_002dfa18(void);
/* Supplied declaration required: popupRequest. */
/* Supplied declaration required: FUN_00314b7c. */
extern int FUN_00324c68(unsigned int);
/* Supplied declaration required: FUN_00325a74. */
extern int FUN_00328200(void);
extern int popupGetStateValue(void);
/* Supplied declaration required: applyIfIdValid. */
/* Supplied declaration required: mapIfUnregisterOwnedResources. */
/* Supplied declaration required: recTableFireType3. */
extern int engineHasActiveRecord(void);
/* Supplied declaration required: lmapSnapshotTransitionState. */
/* Supplied declaration required: FUN_0037723c. */
extern unsigned short gameFlagsGetWorkValue(void);
/* Supplied declaration required: FUN_003a3b88. */
/* Supplied declaration required: fireEntriesMatchingPair. */
/* Supplied declaration required: sub68OwnerDestroyAll. */
/* Supplied declaration required: jobFlagObjStop. */
/* Supplied declaration required: FUN_00482fd4. */
/* Supplied declaration required: FUN_004bc758. */
/* Supplied declaration required: __aeabi_memcpy4. */


unsigned int FUN_00276264(void)

{
/* irregular: 24 goto(s); irregular input(s): in_fpscr; 222 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int *puVar2;
  char temp_v1;
  unsigned char temp_v2;
  unsigned short temp_v3;
  short temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int *puVar10;
  char *pcVar11;
  int *piVar12;
  int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned char *puVar16;
  int temp_v11;
  int temp_v12;
  int temp_v13;
  int temp_v14;
  int temp_v15;
  int temp_v16;
  int temp_v17;
  int temp_v18;
  int temp_v19;
  int temp_v20;
  int temp_v21;
  unsigned int *puVar17;
  unsigned int temp_v22;
  int unaff_r5;
  unsigned int *puVar19;
  int unaff_r7;
  unsigned char temp_v23;
  unsigned int in_fpscr;
  unsigned int temp_v24;
  float temp_v25;
  unsigned int temp_v26;
  unsigned int uStack_138;
  unsigned int uStack_134;
  unsigned char temp_v27 [128];
  unsigned int uStack_b0;
  unsigned int uStack_ac;
  int uStack_a8;
  unsigned int uStack_a4;
  unsigned int uStack_a0;
  int uStack_9c;
  unsigned int uStack_74;
  unsigned int uStack_70;
  float fStack_6c;
  unsigned int uStack_68;
  
  puVar2 = g_lmapMainState;
  puVar17 = &uStack_138;
  temp_v5 = gameFlagsGetBlock();
  temp_v8 = DAT_005f16a4;
  puVar19 = g_lmapMainState;
  temp_v6 = puVar2[3];
  switch(temp_v6) {
  case 0:
    uRam005f1621 = 1;
    DAT_005f1622 = 1;
    DAT_005f18c4 = '\0';
    FUN_00244acc();
    FUN_002019dc(*puVar2,1);
    *(unsigned char *)((int)puVar2 + 0x9e2) = 0;
    *(unsigned char *)(temp_v5 + 0x7c6) = 0;
    *(unsigned char *)(puVar2 + 5) = 1;
    *(unsigned char *)(puVar2 + 0x278) = 0;
    *(unsigned char *)((int)puVar2 + 0x9e1) = 0;
    DAT_005f1894 = 0x44160000;
    DAT_005f1898 = 0x41a00000;
    DAT_005f189c = 0x5a;
    temp_v8 = gameGetPlayerData();
    itemResetOverLimitStates(*(unsigned short *)(temp_v8 + 0x62));
    temp_v8 = g_mapSelection;
    DAT_005f1610 = 2;
    if ((DAT_005f1b70 != '\0') && (DAT_005f1b74 >= 100)) {
      temp_v0 = 0;
      temp_v23 = 0;
      temp_v22 = gameDataTableGetFlag();
      switch(temp_v22) {
      case 0:
      case 3:
        temp_v8 = FUN_004186e0();
        if ((temp_v8 != 0) && (temp_v8 = FUN_001bd118(), temp_v8 == 6)) {
          puVar2[0x277] = 1;
        }
        if (*(short *)(temp_v5 + 0x22) != 0) {
          gameFlagBitSetValue((int)*(short *)(temp_v5 + 0x22),1);
        }
        temp_v8 = FUN_00215978(0);
        temp_v23 = 1;
        FUN_002b9324();
        if (temp_v8 == 3) {
          *(unsigned char *)((int)puVar2 + 0x9e1) = 1;
        }
        break;
      case 1:
        temp_v8 = FUN_0031d230();
        if (temp_v8 != 0) {
          *(unsigned char *)(puVar2 + 0x276) = 1;
        }
        FUN_00239b10(1);
        FUN_00215978(0);
        countersAddSaturating(3,1);
        temp_v0 = 1;
        DAT_005f18c0 = 0;
        break;
      case 2:
        temp_v0 = 1;
        FUN_00215978(0);
        break;
      case 4:
        puVar2[0x277] = 2;
        break;
      case 5:
        FUN_00239b10(1);
        FUN_00215978(0);
        temp_v0 = 1;
        DAT_005f18c0 = 0;
        break;
      case 6:
        FUN_00239b10(2);
        FUN_00215978(0);
      }
      *(unsigned short *)(temp_v5 + 0x22) = 0;
      temp_v8 = FUN_001ba570();
      if (temp_v8 != 0) {
        temp_v0 = 1;
        DAT_005f1776 = '\0';
        DAT_005f16d8 = 0;
        sysClearCachedFlag();
        FUN_00376fa4(0);
        DAT_005f172b = '\0';
      }
      else if (!temp_v23) {
        DAT_005f1776 = '\0';
        DAT_005f16d8 = 0;
        sysClearCachedFlag();
        FUN_00376fa4(0);
        DAT_005f172b = '\0';
      }
      g_gameState = DAT_005f1b74;
      if (temp_v0) {
        puVar2[0x10] = DAT_005f1b74;
        DAT_005f1600 = DAT_005f1b78;
        puVar2[0x12] = DAT_005f1b78;
        temp_v24 = DAT_005f1b88;
        temp_v9 = DAT_005f1b84;
        temp_v22 = DAT_005f1b80;
        temp_v8 = g_lmapScene;
        DAT_005f1604 = DAT_005f1b7c;
        *(unsigned int *)(g_lmapScene + 0x1c) = DAT_005f1b80;
        *(unsigned int *)(temp_v8 + 0x20) = temp_v9;
        *(unsigned int *)(temp_v8 + 0x24) = temp_v24;
        *(unsigned int *)(temp_v8 + 0x28) = temp_v22;
        *(unsigned int *)(temp_v8 + 0x2c) = temp_v9;
        *(unsigned int *)(temp_v8 + 0x30) = temp_v24;
        temp_v22 = DAT_005f1b8c;
        *(unsigned int *)(temp_v8 + 0x4c) = DAT_005f1b8c;
        *(unsigned int *)(temp_v8 + 0x50) = temp_v22;
      }
      else {
        puVar2[0x10] = DAT_005f1b74;
        DAT_005f1600 = DAT_005f1b78;
        puVar2[0x12] = DAT_005f1b78;
        temp_v24 = DAT_005f1b88;
        temp_v9 = DAT_005f1b84;
        temp_v22 = DAT_005f1b80;
        temp_v8 = g_lmapScene;
        DAT_005f1604 = DAT_005f1b7c;
        *(unsigned int *)(g_lmapScene + 0x20) = DAT_005f1b84;
        *(unsigned int *)(temp_v8 + 0x1c) = temp_v22;
        *(unsigned int *)(temp_v8 + 0x2c) = temp_v9;
        *(unsigned int *)(temp_v8 + 0x24) = temp_v24;
        *(unsigned int *)(temp_v8 + 0x28) = temp_v22;
        *(unsigned int *)(temp_v8 + 0x30) = temp_v24;
        temp_v22 = DAT_005f1b8c;
        *(unsigned int *)(temp_v8 + 0x4c) = DAT_005f1b8c;
        *(unsigned int *)(temp_v8 + 0x50) = temp_v22;
      }
      DAT_005f1b70 = 0;
      g_mapSelection = 0;
      mapIfSetOpaqueMode();
      puVar2[3] = 2;
      gameApplyCurrentFlagTableEntry();
      temp_v8 = gameGetPlayerData();
      gameFlagSetEligibleEntryFlagsAtThreshold((int)*(short *)(temp_v8 + 0x62));
      if (*(char *)(puVar2 + 0x276) != '\0') {
        return 0;
      }
      if (puVar2[0x277] == 1) {
        return 0;
      }
      if (puVar2[0x277] == 2) {
        return 0;
      }
      if (DAT_005f1776 != '\0') {
        return 0;
      }
      if (DAT_005f172b != '\0') {
        return 0;
      }
      if (DAT_005f18c0 == 0) {
        return 0;
      }
      popupRequest();
      if (DAT_005f1a58 == 0) {
        return 0;
      }
      gameFlagSetValue(DAT_005f1a58,1);
      DAT_005f1a58 = 0;
      return 0;
    }
    if (g_mapSelection != -1) {
      DAT_005f18c0 = 0;
      puVar2[0x10] = g_mapSelection;
      DAT_005f1600 = DAT_005f1c9c;
      g_gameState = temp_v8;
      puVar2[0x12] = DAT_005f1c9c;
      temp_v8 = g_lmapScene;
      DAT_005f1604 = DAT_005f1ca4;
      if (DAT_005f1ca0 != -1) {
        temp_v8 = puVar2[0x10];
        FUN_003b5714(temp_v8,puVar2[0x12]);
        if (temp_v8 != -1) {
          temp_v5 = dataTableGetRecord23();
          temp_v8 = g_lmapScene;
          temp_v22 = VectorSignedToFloat((int)*(short *)(temp_v5 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(g_lmapScene + 0x1c) = temp_v22;
          temp_v22 = VectorSignedToFloat((int)*(short *)(temp_v5 + 6),(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(temp_v8 + 0x20) = temp_v22;
          temp_v22 = VectorSignedToFloat((int)*(short *)(temp_v5 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(temp_v8 + 0x24) = temp_v22;
          *(unsigned int *)(temp_v8 + 0x28) = *(unsigned int *)(temp_v8 + 0x1c);
          *(unsigned int *)(temp_v8 + 0x2c) = *(unsigned int *)(temp_v8 + 0x20);
          *(unsigned int *)(temp_v8 + 0x30) = temp_v22;
          temp_v22 = VectorSignedToFloat((int)*(short *)(temp_v5 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(temp_v8 + 0x4c) = temp_v22;
          *(unsigned int *)(temp_v8 + 0x50) = temp_v22;
          temp_v22 = VectorSignedToFloat((int)*(short *)(temp_v5 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(g_lmapView + 0x18) = temp_v22;
        }
      }
      else {
        *(unsigned int *)(g_lmapScene + 0x1c) = DAT_005f1ca8;
        temp_v22 = DAT_005f1cac;
        *(unsigned int *)(temp_v8 + 0x20) = DAT_005f1cac;
        *(unsigned int *)(temp_v8 + 0x24) = DAT_005f1cb0;
        *(unsigned int *)(temp_v8 + 0x28) = *(unsigned int *)(temp_v8 + 0x1c);
        *(unsigned int *)(temp_v8 + 0x2c) = temp_v22;
        *(unsigned int *)(temp_v8 + 0x30) = *(unsigned int *)(temp_v8 + 0x24);
        *(unsigned char *)(puVar2 + 5) = 0;
      }
      mapIfSetOpaqueMode();
      if ((((*(char *)(puVar2 + 0x276) == '\0') && (puVar2[0x277] != 1)) && (puVar2[0x277] != 2)) &&
         (((DAT_005f1776 == '\0' && (DAT_005f172b == '\0')) &&
          (temp_v8 = FUN_00324c68(puVar2[0x10]), temp_v8 != 0)))) {
        *(unsigned char *)(puVar2 + 0x278) = 1;
      }
      puVar2[3] = 2;
      gameApplyCurrentFlagTableEntry();
      temp_v8 = gameGetPlayerData();
      gameFlagSetEligibleEntryFlagsAtThreshold((int)*(short *)(temp_v8 + 0x62));
      return 0;
    }
    *(unsigned short *)((int)puVar2 + 0x4e) = 1;
    temp_v8 = puVar2[3] + 1;
    puVar2[3] = temp_v8;
    break;
  case 1:
    temp_v8 = 2;
    puVar2[3] = temp_v8;
    break;
  case 2:
    FUN_002b91ec();
    FUN_004bc95c(puVar2[0x10],puVar2[0x12]);
    FUN_0037723c(0);
    textFormatBuffer(temp_v27,0x276d48,puVar2[0x10] - 100,puVar2[0x10] - 100);
    resourceOwnerLoadNamed(puVar2[0x24db],temp_v27);
    temp_v8 = FUN_0040af60(puVar2[0x24db]);
    if (temp_v8 != 0) {
      FUN_0040ae70(puVar2[0x24db],1);
    }
    DAT_005f1623 = 0;
    FUN_00376fb8();
    FUN_00398004(0);
    DAT_005f1608 = puVar2[0x10];
    DAT_005f160c = puVar2[0x12];
    FUN_003de188(0);
    FUN_00314bf8(puVar2[0x10]);
    navigationSetArguments(puVar2[0x10],puVar2[0x12],DAT_005f1604);
    if ((DAT_005f1634 != '\0') || (*(char *)(puVar2 + 0x278) != '\0')) {
      FUN_0033e014(g_gameState,DAT_005f1600);
    }
    temp_v8 = puVar2[3] + 1;
    puVar2[3] = temp_v8;
    break;
  case 3:
    if (g_lmapMainState[0x10] == 100) {
      return 0;
    }
    textFormatBuffer(temp_v27,0x276d5c,puVar2[0x10] - 100);
    asdLoadFileAsyncWrap(temp_v27,puVar2 + 0x2b7,1,0x80);
    textFormatBuffer(temp_v27,0x276d74,puVar2[0x10] - 100);
    temp_v8 = 0x20;
    FUN_00178b04(0x20,0x276d94,0xe84);
    temp_v22 = 0;
    if (temp_v8 != 0) {
      temp_v22 = modelListInit();
    }
    puVar2[0x2b8] = temp_v22;
    FUN_0040a908();
    FUN_0040a918(puVar2[0x2b8],0x20000);
    FUN_001cd3ec(puVar2[0x2b8],temp_v27);
    textFormatBuffer(temp_v27,0x276dc4);
    asdLoadFileAsyncWrap(temp_v27,puVar2 + 0x13bd,1,0x80);
    textFormatBuffer(temp_v27,0x276ddc);
    temp_v8 = 0x20;
    FUN_00178b04(0x20,0x276d94,0xe99);
    temp_v22 = 0;
    if (temp_v8 != 0) {
      temp_v22 = modelListInit();
    }
    puVar19 = puVar2 + 0x13bf;
    *puVar19 = temp_v22;
    FUN_0040a908();
    FUN_0040a918(*puVar19,0x20000);
    FUN_001cd3ec(*puVar19,temp_v27);
    temp_v10 = 0;
    if (0 < *(int *)(puVar2[0x10] * 4 + 0x5800ac)) {
      do {
        if (((puVar2[0x10] != 0x65) || (temp_v10 != 3 && temp_v10 != 0)) &&
           (uStack_138 = temp_v10, textFormatBuffer(temp_v27,0x276e04,puVar2[0x10] - 100),
           puVar19 = g_lmapMainState, g_lmapMainState != (unsigned int *)0x0)) {
          temp_v8 = 0x20;
          FUN_00178b04(0x20,"c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\lmapMain.cpp",0x2a4b);
          temp_v22 = 0;
          if (temp_v8 != 0) {
            temp_v22 = modelListInit();
          }
          puVar19[*(unsigned char *)(puVar19 + 0x2b5) + 0x295] = temp_v22;
          FUN_001cd3ec();
          *(char *)(puVar19 + 0x2b5) = *(char *)(puVar19 + 0x2b5) + '\x01';
        }
        temp_v10 = temp_v10 + 1;
      } while ((int)temp_v10 < *(int *)(puVar2[0x10] * 4 + 0x5800ac));
    }
    temp_v8 = puVar2[3] + 1;
    puVar2[3] = temp_v8;
    break;
  case 4:
    if (g_lmapMainState[0x10] != 100) {
      if (puVar2[0x2b7] == 0) {
        return 0;
      }
      if (puVar2[0x13bd] == 0) {
        return 0;
      }
      if (g_lmapMainState != (unsigned int *)0x0) {
        temp_v8 = 0;
        do {
          if ((puVar19[temp_v8 + 0x295] != 0) && (temp_v6 = FUN_0040ab8c(), temp_v6 == 0)) {
            return 0;
          }
          temp_v8 = temp_v8 + 1;
        } while (temp_v8 < 0x20);
      }
      temp_v8 = FUN_0040ab8c(puVar2[0x2b8]);
      if (temp_v8 == 0) {
        return 0;
      }
      temp_v8 = FUN_0040ab8c(puVar2[0x13bf]);
      if (temp_v8 == 0) {
        return 0;
      }
      if (DAT_005f18c0 != 0) {
        FUN_002df914();
      }
      FUN_00379d58();
      FUN_003a3b88();
      lmapInitializeActorHandles();
      puVar2[3] = puVar2[3] + 1;
    }
  case 5:
    temp_v8 = battleValuesSet(puVar2[0x10],puVar2[0x12]);
    if (temp_v8 != 0) {
      puVar2[3] = puVar2[3] + 1;
LAB_00276e3c:
      FUN_0024ad50();
      FUN_00314b7c(puVar2[0x10],0);
      temp_v6 = puVar2[3] + 1;
      puVar2[3] = temp_v6;
LAB_00276e5c:
      FUN_00356674();
      if (temp_v6 != 0) {
        puVar2[3] = puVar2[3] + 1;
LAB_00276e7c:
        FUN_00233170();
        mapGimicInitializeProcessing(puVar2[0x10],0);
        puVar2[3] = puVar2[3] + 1;
LAB_00276e9c:
        temp_v8 = FUN_0033bfac();
        if (temp_v8 != 0) {
          puVar2[3] = puVar2[3] + 1;
LAB_00276eb8:
          temp_v8 = DAT_005f1b08;
          puVar2[0x27b] = DAT_005f1b08;
          puVar2[0x27c] = DAT_005f1b0c;
          FUN_00275bc8();
          puVar2[0x27d] = temp_v8;
          *(unsigned int *)(temp_v8 + 0x108) = 3;
          textFormatBuffer(temp_v27,0x277298,puVar2[0x10] - 100);
          puVar16 = temp_v27;
          asdLoadFileSyncDefault();
          puVar2[0x27e] = (unsigned int)puVar16;
          textFormatBuffer(temp_v27,0x2772ac,puVar2[0x10] - 100);
          puVar16 = temp_v27;
          asdLoadFileSyncDefault();
          puVar2[0x27f] = (unsigned int)puVar16;
          temp_v8 = puVar2[0x27e];
          FUN_00275bc8(temp_v8,puVar16);
          puVar2[0x280] = temp_v8;
          *(unsigned int *)(temp_v8 + 0x108) = 3;
          puVar2[3] = puVar2[3] + 1;
LAB_00276f5c:
          temp_v8 = 0x20;
          FUN_00178b04(0x20,0x276d94,0xf07);
          temp_v22 = 0;
          if (temp_v8 != 0) {
            temp_v22 = modelListInit();
          }
          puVar2[0x2f] = temp_v22;
          FUN_0040aa6c();
          FUN_0040a908(puVar2[0x2f],0x10000);
          FUN_0040a918(puVar2[0x2f],0x30000);
          FUN_0040aad4(puVar2[0x2f],0);
          temp_v8 = *(int *)(puVar2[0x2f] + 4);
          handleRegistryRegisterObject(g_handleRegistry,temp_v8);
          *(unsigned int *)(temp_v8 + 4) = *(unsigned int *)(temp_v8 + 4) | 3;
          temp_v8 = 0x20;
          FUN_00178b04(0x20,0x276d94,0xf11);
          temp_v22 = 0;
          if (temp_v8 != 0) {
            temp_v22 = modelListInit();
          }
          puVar2[0x36] = temp_v22;
          FUN_0040aa6c();
          FUN_0040a908(puVar2[0x36],0x10000);
          FUN_0040a918(puVar2[0x36],0x30000);
          FUN_0040aad4(puVar2[0x36],0);
          temp_v8 = *(int *)(puVar2[0x36] + 4);
          handleRegistryRegisterObject(g_handleRegistry,temp_v8);
          *(unsigned int *)(temp_v8 + 4) = *(unsigned int *)(temp_v8 + 4) | 3;
          temp_v8 = DAT_005f1b64;
          puVar2[0x3b] = DAT_005f1b64;
          temp_v8 = *(int *)(temp_v8 + 4);
          handleRegistryRegisterObject(g_handleRegistry,temp_v8);
          *(unsigned int *)(temp_v8 + 4) = *(unsigned int *)(temp_v8 + 4) | 3;
          if (*(int *)(temp_v5 + 0x15b4) == 2) {
            FUN_003fd7c0(temp_v8,1,2);
          }
          mapIfInitializeSceneControllers();
          temp_v22 = 0;
          puVar2[0x14] = 0x43340000;
          temp_v9 = 0x3f800000;
          puVar2[0x15] = 0;
          puVar2[0x16] = 0x3f800000;
          puVar2[0x17] = 0;
          puVar2[0x1b] = 0;
          puVar2[0x1c] = 0;
          puVar2[0x1d] = 0;
          puVar2[0x18] = 0;
          puVar2[0x19] = 0x43960000;
          puVar2[0x1a] = 0x43960000;
          puVar2[0x21] = puVar2[0x1b];
          puVar2[0x22] = puVar2[0x1c];
          puVar2[0x23] = puVar2[0x1d];
          puVar2[0x1e] = 0;
          puVar2[0x1f] = puVar2[0x19];
          puVar2[0x20] = 0x43960000;
          asdCameraInitializeDefaults(&g_localCamera,1);
          FUN_0014f0dc(&g_localCamera,puVar2 + 0x18,puVar2 + 0x1b,puVar2 + 0x15);
          FUN_001523b8(&g_localCamera,1);
          FUN_0036b824(&g_localCamera);
          *(unsigned char **)(puVar2[0x24db] + 0xc) = &g_localCamera;
          temp_v8 = g_lmapView;
          *(unsigned int *)(g_lmapView + 200) = 0;
          *(unsigned int *)(temp_v8 + 0xcc) = 0x43160000;
          *(unsigned int *)(temp_v8 + 0x10c) = 0x452f0000;
          *(unsigned int *)(temp_v8 + 0x18c) = 0x44fa0000;
          *(unsigned int *)(temp_v8 + 0x1cc) = 0x42200000;
          *(unsigned int *)(temp_v8 + 0xd0) = temp_v22;
          *(unsigned int *)(temp_v8 + 0x110) = 0x452f0000;
          *(unsigned int *)(temp_v8 + 400) = 0x44ce4000;
          *(unsigned int *)(temp_v8 + 0xd4) = temp_v22;
          *(unsigned int *)(temp_v8 + 0x114) = 0x452f0000;
          *(unsigned int *)(temp_v8 + 0x194) = 0x44fa0000;
          *(unsigned int *)(temp_v8 + 0x1d0) = 0x42000000;
          *(unsigned int *)(temp_v8 + 0x1d4) = 0x42480000;
          puVar2[0x26] = temp_v22;
          puVar2[0x29] = 0x44160000;
          puVar2[0x2c] = 0x44160000;
          puVar2[0x27] = temp_v22;
          puVar2[0x2a] = temp_v22;
          puVar2[0x2d] = temp_v22;
          puVar2[0x28] = temp_v22;
          puVar2[0x2b] = temp_v22;
          puVar2[0x2e] = temp_v22;
          *(unsigned char *)(puVar2 + 0x25) = 1;
          *(unsigned char *)((int)puVar2 + 0x95) = 0;
          puVar2[0x24] = temp_v22;
          *(unsigned char *)(temp_v8 + 0xb4) = 0;
          *(unsigned char *)(temp_v8 + 0xb5) = 0;
          *(unsigned short *)(temp_v8 + 0xb6) = 0;
          *(unsigned short *)(temp_v8 + 0xb8) = 0;
          *(unsigned int *)(temp_v8 + 0xbc) = temp_v22;
          *(unsigned int *)(temp_v8 + 0xc0) = temp_v22;
          *(unsigned int *)(temp_v8 + 0xc4) = temp_v9;
          DAT_005f1614 = '\x01';
          stateSetterSetFromBase(puVar2 + 0x3d,puVar2[0x10] - 100,puVar2[0x12]);
          lmapEnemyCtrlLoadModels(puVar2 + 0x3d);
          if (g_lmapMainState[0x10] != 100) {
            temp_v10 = puVar2[0x3d] & 0xfffffffe;
          }
          else {
            temp_v10 = puVar2[0x3d] | 1;
          }
          puVar2[0x3d] = temp_v10;
          if (DAT_005f18c0 == 0) {
            FUN_002df914();
          }
          puVar19 = g_lmapMainState;
          DAT_005f18c0 = 0;
          temp_v22 = puVar2[0x10];
          FUN_002747dc();
          FUN_00364740(temp_v22,puVar19[0x12]);
          FUN_002ddea0();
          FUN_002a2e98(puVar2[0x10],puVar2[0x12]);
          FUN_0020f12c(puVar2[0x10],puVar2[0x12]);
          mapLoadSkyTable(puVar2[0x10]);
          mapEnvironmentSelectPreset(1);
          if (g_mapSelection != -1) {
            mapPlaceSet(0xffffffff,0xffffffff);
            mapIfSetMode1();
          }
          naviMainUpdateSlider(1,8);
          if (g_gameState == 0x65) {
            applyIfIdValid(0x10101003);
          }
          FUN_00378000();
          puVar2[3] = puVar2[3] + 1;
          puVar2[4] = 0;
        }
      }
    }
    break;
  case 6:
    goto LAB_00276e3c;
  case 7:
    goto LAB_00276e5c;
  case 8:
    goto LAB_00276e7c;
  case 9:
    goto LAB_00276e9c;
  case 10:
    goto LAB_00276eb8;
  case 0xb:
    goto LAB_00276f5c;
  case 0xc:
    fieldBuildAreaPlacementList(puVar2 + 0x3d);
    puVar2[4] = puVar2[4] + 1;
    FUN_003d502c(0);
    puVar2[3] = puVar2[3] + 1;
    *(unsigned char *)(puVar2 + 0x25) = 1;
    FUN_00249dec();
    FUN_0036a434(puVar2);
    FUN_0036aa04(puVar2);
    FUN_00297c3c();
    DAT_005f1614 = 0;
    DAT_005f1859 = 1;
    DAT_005f185a = 1;
    if (puVar2[0x2b9] != 0) {
      for (temp_v10 = 0; temp_v10 < *(unsigned int *)(*(int *)(puVar2[0x2b9] + 8) + 0x10); temp_v10 = temp_v10 + 1)
      {
        FUN_00399290(temp_v10,0);
      }
    }
    if (((DAT_005f1776 == '\0') && (DAT_005f1748 != '\0')) &&
       (*(char *)((int)puVar2 + 0x9e1) == '\0')) {
      temp_v8 = FUN_0013def0(0);
      if (temp_v8 == 3) {
        FUN_0013cab8(0,10,0xff);
      }
      temp_v8 = FUN_0013def0(1);
      if (temp_v8 == 3) {
        FUN_0013cab8(1,10,0xff);
      }
    }
    DAT_005f1748 = '\x01';
    uRam005f1621 = 0;
    DAT_005f1622 = 0;
    if (g_lmapMainState[0x10] != 100) {
      FUN_003699e4();
    }
    puVar19 = g_lmapMainState;
    if (*(char *)(puVar2 + 5) != '\0') {
      temp_v22 = 3;
      if (g_lmapMainState[0x33] != 3) {
        g_lmapMainState[0x33] = temp_v22;
        puVar19[0x34] = 0;
        puVar19[0x35] = 0;
      }
    }
    else {
      temp_v22 = 1;
      if (g_lmapMainState[0x33] != 1) {
        g_lmapMainState[0x33] = temp_v22;
        puVar19[0x34] = 0;
        puVar19[0x35] = 0;
      }
    }
    if ((DAT_005f1634 != '\0') || (*(char *)(puVar2 + 0x278) != '\0')) {
      *(unsigned char *)(puVar2 + 0x278) = 0;
      mapIfClose();
    }
    DAT_005f1634 = '\0';
    if (g_gameState == 0x65) {
      temp_v23 = DAT_005f1600 == 1 || DAT_005f1600 == 7;
      if (DAT_005f1600 == 1 || DAT_005f1600 == 7) {
        temp_v23 = *(short *)((int)puVar2 + 0x4e) == 0;
      }
      if (((temp_v23) && (temp_v8 = gameFlagIsSet(0x529), temp_v8 == 0)) &&
         (temp_v8 = gameFlagIsSet(0x1c), temp_v8 != 0)) {
        puVar2[3] = 0x49;
        puVar2[4] = 0;
        DAT_005f1614 = 1;
        DAT_005f1859 = 0;
        DAT_005f185a = 0;
        return 0;
      }
    }
    temp_v8 = gameFlagIsSet(0x95);
    if ((temp_v8 != 0) && (temp_v8 = gameFlagIsSet(0x96), temp_v8 == 0)) {
      *(unsigned char *)((int)puVar2 + 0x9362) = 1;
    }
    temp_v8 = gameFlagIsSet(0x39);
    if ((temp_v8 == 0) || (temp_v8 = gameFlagIsSet(0x309), temp_v8 != 0)) {
      temp_v8 = gameFlagIsSet(0x3b);
      if ((temp_v8 == 0) || (temp_v8 = gameFlagIsSet(0x30a), temp_v8 != 0)) {
        temp_v8 = gameFlagIsSet(0x90);
        if ((temp_v8 == 0) || (temp_v8 = gameFlagIsSet(0x30b), temp_v8 != 0)) {
          temp_v8 = gameFlagIsSet(0xd4);
          if ((temp_v8 == 0) || (temp_v8 = gameFlagIsSet(0x30c), temp_v8 != 0)) {
            temp_v8 = gameFlagIsSet(0xef);
            if ((temp_v8 == 0) || (temp_v8 = gameFlagIsSet(0x111f), temp_v8 != 0)) {
              temp_v8 = gameFlagIsSet(0x4c9);
              if ((temp_v8 != 0) &&
                 (((temp_v8 = gameFlagIsSet(0x179), temp_v8 != 0 &&
                   (temp_v8 = gameFlagIsSet(0x19f), temp_v8 == 0)) &&
                  (temp_v8 = gameFlagIsSet(0x1fc), temp_v8 != 0)))) {
                *(unsigned char *)(puVar2 + 0x24da) = 1;
              }
              else {
                temp_v8 = gameFlagIsSet(0x4c9);
                if ((((temp_v8 == 0) && (temp_v8 = gameFlagIsSet(0x179), temp_v8 != 0)) &&
                    (temp_v8 = gameFlagIsSet(0x184), temp_v8 == 0)) &&
                   (temp_v8 = gameFlagIsSet(0x1fc), temp_v8 != 0)) {
                  *(unsigned char *)((int)puVar2 + 0x9369) = 1;
                }
              }
            }
            else {
              *(unsigned char *)((int)puVar2 + 0x9367) = 1;
              DAT_005f1ad7 = '\x01';
            }
          }
          else {
            *(unsigned char *)((int)puVar2 + 0x9366) = 1;
            DAT_005f1ad7 = '\x01';
          }
        }
        else {
          *(unsigned char *)((int)puVar2 + 0x9365) = 1;
          DAT_005f1ad7 = '\x01';
        }
      }
      else {
        *(unsigned char *)(puVar2 + 0x24d9) = 1;
        DAT_005f1ad7 = '\x01';
      }
    }
    else {
      *(unsigned char *)((int)puVar2 + 0x9363) = 1;
      DAT_005f1ad7 = '\x01';
    }
    temp_v1 = *(char *)((int)puVar2 + 0x9362);
    temp_v23 = temp_v1 == '\0';
    if (temp_v23) {
      temp_v1 = *(char *)((int)puVar2 + 0x9363);
    }
    if (temp_v23 && temp_v1 == '\0') {
      temp_v1 = *(char *)(puVar2 + 0x24d9);
      temp_v23 = temp_v1 == '\0';
      if (temp_v23) {
        temp_v1 = *(char *)((int)puVar2 + 0x9365);
      }
      if (temp_v23 && temp_v1 == '\0') {
        temp_v1 = *(char *)((int)puVar2 + 0x9366);
        temp_v23 = temp_v1 == '\0';
        if (temp_v23) {
          temp_v1 = *(char *)((int)puVar2 + 0x9367);
        }
        if (temp_v23 && temp_v1 == '\0') {
          temp_v1 = *(char *)(puVar2 + 0x24da);
          temp_v23 = temp_v1 == '\0';
          if (temp_v23) {
            temp_v1 = *(char *)((int)puVar2 + 0x9369);
          }
          if (temp_v23 && temp_v1 == '\0') {
            temp_v8 = gameFlagIsSet(0x61);
            if (((temp_v8 == 0) && (temp_v8 = gameFlagIsSet(0x48c), temp_v8 == 0)) &&
               ((temp_v8 = popupGetStateValue(), temp_v8 != 0 && (temp_v10 = FUN_002e5c2c(), temp_v10 >= 100)))
               ) {
              *(unsigned char *)(puVar2 + 0x24d8) = 1;
            }
            temp_v8 = gameFlagIsSet(0x62);
            if ((((temp_v8 == 0) && (temp_v8 = gameFlagIsSet(0x418), temp_v8 == 0)) &&
                (temp_v8 = popupGetStateValue(), temp_v8 != 0)) &&
               ((*(char *)(puVar2 + 0x24d8) == '\0' && (temp_v8 = gameSlotTableFindFree(), temp_v8 >= 5)))) {
              *(unsigned char *)((int)puVar2 + 0x9361) = 1;
            }
          }
        }
      }
    }
    if (*(char *)(puVar2 + 0x276) != '\0') {
      DAT_005f172b = '\0';
      DAT_005f1614 = 1;
    }
    if (puVar2[0x277] == 1 || puVar2[0x277] == 2) {
      DAT_005f172b = '\0';
      DAT_005f1614 = 1;
    }
    if (DAT_005f1776 == '\0') {
      if (DAT_005f172b != '\0') {
        DAT_005f172b = 0;
        DAT_005f1614 = 1;
        textFormatBuffer(&DAT_005f1660,&DAT_005f1730);
        puVar2[3] = 0x25;
        puVar2[4] = 0;
        return 0;
      }
      if (*(char *)(puVar2 + 0x24d8) != '\0') {
        DAT_005f1614 = 1;
        puVar2[3] = 0x1f;
        puVar2[4] = 0;
        DAT_005f1658 = 500;
        textFormatBuffer(&DAT_005f1660,0x277cdc);
        return 0;
      }
      if (*(char *)((int)puVar2 + 0x9361) != '\0') {
        DAT_005f1614 = 1;
        puVar2[3] = 0x1f;
        puVar2[4] = 0;
        DAT_005f1658 = 500;
        textFormatBuffer(&DAT_005f1660,0x277ce8);
        return 0;
      }
      if (*(char *)((int)puVar2 + 0x9362) != '\0') {
        DAT_005f1614 = 1;
        puVar2[3] = 0x1f;
        puVar2[4] = 0;
        DAT_005f1658 = 0x3c;
        textFormatBuffer(&DAT_005f1660,0x277cf4);
        return 0;
      }
      if (*(char *)((int)puVar2 + 0x9363) == '\0') {
        if (*(char *)(puVar2 + 0x24d9) != '\0') {
          DAT_005f1614 = 1;
          puVar2[3] = 0x2f;
          puVar2[4] = 0;
          DAT_005f1658 = 0xffffffff;
          __aeabi_memcpy4(&DAT_005f1660,0x277d14,0x12);
          return 0;
        }
        if (*(char *)((int)puVar2 + 0x9365) != '\0') {
          DAT_005f1614 = 1;
          puVar2[3] = 0x2f;
          puVar2[4] = 0;
          DAT_005f1658 = 0xffffffff;
          __aeabi_memcpy4(&DAT_005f1660,0x277d28,0x12);
          return 0;
        }
        if (*(char *)((int)puVar2 + 0x9366) != '\0') {
          DAT_005f1614 = 1;
          puVar2[3] = 0x2f;
          puVar2[4] = 0;
          DAT_005f1658 = 0xffffffff;
          __aeabi_memcpy4(&DAT_005f1660,0x277d3c,0x12);
          return 0;
        }
        if (*(char *)((int)puVar2 + 0x9367) != '\0') {
          DAT_005f1614 = 1;
          puVar2[3] = 0x2f;
          puVar2[4] = 0;
          DAT_005f1658 = 0xffffffff;
          __aeabi_memcpy4(&DAT_005f1660,0x277d50,0x11);
          return 0;
        }
        if (*(char *)(puVar2 + 0x24da) != '\0') {
          DAT_005f1614 = 1;
          puVar2[3] = 0x2f;
          puVar2[4] = 0;
          DAT_005f1658 = 0xffffffff;
          gameFlagSetValue(0x1fc,0,1);
          DAT_005f1660 = 0x5f726373;
          DAT_005f1664 = 0x70616d6c;
          DAT_005f1668 = 0x74696d5f;
          uRam005f166c = 0x5f61726f;
          uRam005f1670 = 0x67736d;
          return 0;
        }
        if (*(char *)((int)puVar2 + 0x9369) == '\0') {
          return 0;
        }
        DAT_005f1614 = 1;
        puVar2[3] = 0x2f;
        puVar2[4] = 0;
        DAT_005f1658 = 0xffffffff;
        gameFlagSetValue(0x1fc,0,1);
        DAT_005f1660 = 0x5f726373;
        DAT_005f1664 = 0x70616d6c;
        DAT_005f1668 = 0x74696d5f;
        uRam005f166c = 0x5f61726f;
        uRam005f1670 = 0x67736d;
        return 0;
      }
      DAT_005f1614 = 1;
      puVar2[3] = 0x2f;
      puVar2[4] = 0;
      DAT_005f1658 = 0xffffffff;
      temp_v9 = 0x12;
      temp_v22 = 0x277d00;
      __aeabi_memcpy4(&DAT_005f1660,temp_v22,temp_v9);
      return 0;
    }
    DAT_005f1776 = '\0';
    DAT_005f1614 = '\x01';
    puVar2[3] = 0x1f;
    puVar2[4] = 0;
    puVar16 = &DAT_005f177c;
    DAT_005f1658 = DAT_005f1778;
    textFormatBuffer(&DAT_005f1660,puVar16);
    break;
  case 0xd:
    *(unsigned char *)((int)puVar2 + 0xe1) = 0;
    puVar19 = (unsigned int *)0x0;
    if (DAT_005f1acb != '\0') {
      puVar19 = (unsigned int *)&g_gameState;
      DAT_005f1acb = '\0';
    }
    FUN_00235438();
    if (puVar19 != (unsigned int *)0x1) {
      if (puVar19 != (unsigned int *)0x2) {
        if (puVar19 != (unsigned int *)0x3) {
          if (puVar19 == (unsigned int *)0x4) {
            puVar2[3] = 0x2f;
            puVar2[4] = 0;
            DAT_005f1614 = 1;
            FUN_0015f858(DAT_005f16dc,1);
            FUN_001654f0();
            FUN_003180c4(0,&uStack_b0);
            temp_v9 = 0x17;
            temp_v22 = 0x2780e8;
            __aeabi_memcpy4(&DAT_005f1660,temp_v22,temp_v9);
            return 0;
          }
          if (puVar19 == (unsigned int *)0x5) {
            temp_v22 = 0x3c;
          }
          else {
            if (puVar19 != (unsigned int *)0x6) {
              if (puVar19 == (unsigned int *)0x63) {
                DAT_005f185e = 0;
                puVar2[3] = 0xd;
                puVar2[4] = 0;
                return 0;
              }
              if (DAT_005f1794 != 0) {
                puVar2[3] = 0x38;
                DAT_005f1614 = '\x01';
                DAT_005f161c = 1;
              }
              else {
                if (*(char *)(g_aocMain + 0xc1) != '\0') {
                  *(unsigned char *)(g_aocMain + 0xc1) = 0;
                  puVar2[3] = 0x14;
                  puVar2[4] = 0;
                  DAT_005f1614 = 1;
                  DAT_005f161c = 1;
                  FUN_00387014();
                  return 0;
                }
                if (DAT_005f17aa != 0) {
                  DAT_005f17aa = 0;
                  puVar2[3] = 0x13;
                  puVar2[4] = 0;
                  DAT_005f1614 = 1;
                  DAT_005f161c = 1;
                  FUN_00387014();
                  return 0;
                }
                if (DAT_005f17a8 != 0) {
                  DAT_005f17a8 = 0;
                  puVar2[3] = 0x12;
                  puVar2[4] = 0;
                  DAT_005f1614 = 1;
                  DAT_005f161c = 1;
                  FUN_00387014();
                  return 0;
                }
                temp_v8 = g_aocSystem;
                FUN_00471d00();
                if (temp_v8 != 0) {
                  puVar2[3] = 0x16;
                  puVar2[4] = 0;
                  DAT_005f1614 = 1;
                  DAT_005f161c = 1;
                  FUN_00387014();
                  return 0;
                }
                temp_v1 = DAT_005f1bc4;
                if (DAT_005f1bc4 == '\0') {
                  if (*(char *)((int)puVar2 + 0xb) != '\0') {
                    temp_v1 = FUN_00386720();
                  }
                  else {
                    puVar19 = puVar2;
                    FUN_003401a4();
                    temp_v1 = (char)(int)puVar19;
                  }
                }
                FUN_00249dec();
                *(char *)(puVar2 + 0x27a) = temp_v1;
                FUN_0036a434(puVar2);
                FUN_0036aa04(puVar2);
                FUN_00297c3c();
                navigationSetArguments(puVar2[0x10],puVar2[0x12],DAT_005f1604);
                if (*(char *)(puVar2 + 0x27a) != '\0') {
                  *(unsigned char *)(puVar2 + 0x27a) = 0;
                  DAT_005f1614 = 1;
                  puVar2[3] = 0x46;
                  puVar2[4] = 0;
                  return 0;
                }
                FUN_00311b74();
                if (*(char *)((int)puVar2 + 0xb) == '\0') {
                  FUN_00483834(puVar2 + 0x3d);
                }
                FUN_00234b30();
                FUN_002737a8();
                if (g_lmapMainState[0x10] != 100) {
                  FUN_003699e4();
                }
                if (*(char *)(puVar2 + 0x276) != '\0') {
                  DAT_005f172b = '\0';
                  DAT_005f1614 = 1;
                  puVar2[3] = 0x3f;
                  puVar2[4] = 0;
                  temp_v8 = FUN_0013def0(0);
                  if (temp_v8 == 3) {
                    FUN_0013cab8(0,10,0xff);
                  }
                  temp_v8 = FUN_0013def0(1);
                  if (temp_v8 != 3) {
                    return 0;
                  }
                  FUN_0013cab8(1,10,0xff);
                  return 0;
                }
                if (puVar2[0x277] != 1) {
                  if (puVar2[0x277] == 2) {
                    DAT_005f172b = 0;
                    DAT_005f1614 = 1;
                    puVar2[3] = 0x3a;
                    mapPopupReset();
                    puVar2[4] = 0;
                    return 0;
                  }
                  if (DAT_005f1bc4 != '\0') {
                    return 0;
                  }
                  temp_v1 = DAT_005f1614;
                  if (DAT_005f1614 == '\0') {
                    temp_v1 = DAT_005f161d;
                  }
                  if (DAT_005f1614 != '\0' || temp_v1 != '\0') {
                    return 0;
                  }
                  if (DAT_005f19ee != '\0') {
                    return 0;
                  }
                  if (DAT_005f1638 != 0x3a) {
                    if (DAT_005f1638 != 0x3b) {
                      if (DAT_005f1638 != 0x3c) {
                        if (!(DAT_005f1638 == 0x3d || DAT_005f1638 == 0x46)) {
                          if (DAT_005f1638 == 0x3e) {
                            DAT_005f1614 = '\x01';
                            gameDataCopySaveToWork();
                            puVar19 = g_lmapMainState;
                            if (DAT_005f18c4 != '\0') {
                              DAT_005f18c4 = '\0';
                            }
                            else {
                              mapProbePositionDownward(&DAT_005f16c0);
                              DAT_005f1b70 = '\x01';
                              DAT_005f1b74 = puVar19[0x10];
                              DAT_005f1b78 = puVar19[0x12];
                              DAT_005f1b7c = DAT_005f1604;
                              DAT_005f1b80 = DAT_005f16c0;
                              DAT_005f1b84 = DAT_005f16c4;
                              DAT_005f1b88 = DAT_005f16c8;
                              DAT_005f1b8c = DAT_005f16bc;
                              DAT_005f1b90 = DAT_005f16bc;
                              DAT_005f1b94 = puVar19[0x10];
                              DAT_005f1b98 = puVar19[0x12];
                              DAT_005f1b9c = DAT_005f16c0;
                              DAT_005f1ba0 = DAT_005f16c4;
                              DAT_005f1ba4 = DAT_005f16c8;
                              DAT_005f1ba8 = DAT_005f16bc;
                              DAT_005f1bac = DAT_005f16bc;
                            }
                            puVar2[3] = 0x6e;
                            puVar2[4] = 0;
                            *(unsigned char *)((int)puVar2 + 10) = 1;
                            mapPopupReset();
                            return 0;
                          }
                          if (DAT_005f1638 == 0x3f) {
                            DAT_005f1614 = '\x01';
                            if (DAT_005f16e4 != '\0') {
                              __aeabi_memcpy4(&DAT_005f1660,0x278a70,0x11);
                              puVar2[3] = 0x2f;
                              puVar2[4] = 0;
                            }
                            else {
                              puVar2[3] = 0x1f;
                              puVar2[4] = 0;
                            }
                            mapPopupReset();
                            return 0;
                          }
                          if (DAT_005f1638 == 0x40) {
                            DAT_005f1614 = 1;
                            puVar2[3] = 0x21;
                            puVar2[4] = 0;
                            mapPopupReset();
                            return 0;
                          }
                          if (DAT_005f1638 != 0x41) {
                            if (DAT_005f1638 != 0x42) {
                              if (DAT_005f1638 != 0x43) {
                                if (DAT_005f1638 != 0x44) {
                                  if (DAT_005f1638 != 0x45) {
                                    if (DAT_005f1638 == 0x4b) {
                                      *(unsigned char *)((int)puVar2 + 0xe1) = 1;
                                      temp_v8 = FUN_004d0584();
                                      if ((temp_v8 != 0) && (*(char *)(g_lmapView + 0xb4) == '\0'))
                                      {
                                        mapPopupReset();
                                        uStack_134 = (unsigned int)DAT_005f172a;
                                        uStack_138 = (unsigned int)DAT_005f1729;
                                        naviMainSetFlagsAndActivate(DAT_005f1725,DAT_005f1726,DAT_005f1727,
                                                     DAT_005f1728);
                                        fireEntriesMatchingPair(DAT_005f1725,DAT_005f1726);
                                        fireEntriesMatchingPair(DAT_005f1727,DAT_005f1728);
                                        fireEntriesMatchingPair(DAT_005f1729,DAT_005f172a);
                                        temp_v8 = DAT_005f16a4;
                                        DAT_005f1614 = 1;
                                        DAT_005f185a = 0;
                                        if (*(char *)((int)puVar2 + 0xb) != '\0') {
                                          puVar2[0x12] = DAT_005f16a4;
                                          DAT_005f1600 = temp_v8;
                                          puVar2[3] = 0x59;
                                          puVar2[4] = 0;
                                          FUN_001695a0();
                                          return 0;
                                        }
                                        FUN_001681c4();
                                        puVar2[3] = 0x4b;
                                        puVar2[4] = 0;
                                        FUN_001695a0();
                                        scrScriptProcessStartEntry(puVar2[0x280],0);
                                        return 0;
                                      }
                                    }
                                  }
                                  else {
                                    temp_v8 = FUN_004d0584();
                                    if ((temp_v8 != 0) && (*(char *)(g_lmapView + 0xb4) == '\0')) {
                                      DAT_005f1614 = '\x01';
                                      DAT_005f161c = 1;
                                      puVar2[3] = 0x27;
                                      uStack_134 = (unsigned int)DAT_005f172a;
                                      uStack_138 = (unsigned int)DAT_005f1729;
                                      naviMainSetFlagsAndActivate(DAT_005f1725,DAT_005f1726,DAT_005f1727,
                                                   DAT_005f1728);
                                      puVar2[4] = 0;
                                      mapPopupReset();
                                      return 0;
                                    }
                                  }
                                }
                                else {
                                  temp_v8 = FUN_004d0584();
                                  if ((temp_v8 != 0) && (*(char *)(g_lmapView + 0xb4) == '\0')) {
                                    DAT_005f1614 = '\x01';
                                    DAT_005f161c = 1;
                                    puVar2[3] = 0x32;
                                    puVar2[4] = 0;
                                    mapPopupReset();
                                    return 0;
                                  }
                                }
LAB_00278b38:
                                FUN_002b80fc(*(float *)(g_lmapScene + 0x28), *(float *)(g_lmapScene + 0x2C), *(float *)(g_lmapScene + 0x30));
                                if (((*(char *)(DAT_00581280 + 0xf0c) != '\0') &&
                                    (temp_v8 = FUN_004d0584(), temp_v8 != 0)) &&
                                   (*(char *)(g_lmapView + 0xb4) == '\0')) {
                                  DAT_005f1614 = '\x01';
                                  DAT_005f165c = -1;
                                  libc_strcpy(&DAT_005f1660,DAT_00581280 + 0xf20);
                                  puVar2[3] = 0x23;
                                  puVar2[4] = 0;
                                  mapPopupReset();
                                  eventQueueAddUnique(0x100020d);
                                }
                                temp_v10 = DAT_005f1be4;
                                if (DAT_005f1be4 == 0) {
                                  temp_v10 = (unsigned int)*(unsigned char *)((int)puVar2 + 0xb);
                                }
                                if (DAT_005f1be4 == 0 && temp_v10 == 0) {
                                  temp_v8 = FUN_004a0404();
                                  if (temp_v8 != 0) {
                                    temp_v8 = FUN_002e1a18(0x13);
                                    if ((temp_v8 != 0) && (temp_v8 = FUN_004a0f5c(), temp_v8 != 0)) {
                                      textFormatBuffer(&uStack_b0,0x278fdc,temp_v8);
                                      mapIfStart(&uStack_b0);
                                      sysPlayVoice(0x100021c);
                                    }
                                  }
                                  else {
                                    sysPlaySe(0xd2);
                                  }
                                  temp_v8 = FUN_00328200();
                                  if (temp_v8 != 0) {
                                    DAT_005f1614 = 1;
                                    puVar2[3] = 0xe;
                                    puVar2[4] = 0;
                                    DAT_005f185f = 0;
                                    DAT_005f185d = 0;
                                    DAT_005f1860 = 0;
                                    DAT_005f1864 = 0;
                                    DAT_005f187c = 0;
                                    mapPopupReset();
                                    temp_v8 = saveSlotFindSelected();
                                    if (temp_v8 != 0) {
                                      DAT_005f18c8 = (unsigned int)*(unsigned short *)(temp_v8 + 300);
                                      temp_v8 = gameGetPlayerData();
                                      temp_v10 = (unsigned int)*(unsigned short *)(temp_v8 + 6);
                                      dataTable08Sub2GetRecord();
                                      DAT_005f18cc = (unsigned int)*(unsigned short *)(temp_v10 + 0x40);
                                      DAT_005f18d8 = (unsigned int)*(unsigned short *)(temp_v10 + 0x42);
                                      temp_v10 = (unsigned int)*(unsigned short *)(temp_v8 + 8);
                                      dataTable08Sub2GetRecord();
                                      DAT_005f18d0 = (unsigned int)*(unsigned short *)(temp_v10 + 0x40);
                                      DAT_005f18dc = (unsigned int)*(unsigned short *)(temp_v10 + 0x42);
                                      temp_v10 = (unsigned int)*(unsigned short *)(temp_v8 + 10);
                                      dataTable08Sub2GetRecord();
                                      DAT_005f18d4 = (unsigned int)*(unsigned short *)(temp_v10 + 0x40);
                                      DAT_005f18e0 = (unsigned int)*(unsigned short *)(temp_v10 + 0x42);
                                      return 0;
                                    }
                                    DAT_005f18c8 = 0;
                                    return 0;
                                  }
                                }
                                if (DAT_005f1a60 != '\0') {
                                  DAT_005f1a60 = '\0';
                                }
                                if (*(char *)(temp_v5 + 0xdfc) != '\0') {
                                  *(unsigned char *)(temp_v5 + 0xdfc) = 0;
                                  mapIfStart(0x279000);
                                  return 0;
                                }
                                if (*(int *)(temp_v5 + 0x14f0) != 0) {
                                  *(int *)(temp_v5 + 0x14f0) = 0;
                                  if (*(int *)(temp_v5 + 0x150c) == 0) {
                                    pcVar11 = 
                                    "玂袂薂䂁薂蚂蚂薂莂钂䂁辂蚂䂁熂覂节薂銂膂趂膂䂁袂膂鎂䂁銂閂躂䂁辂閂钂䒁＀"
                                    ;
                                  }
                                  else {
                                    pcVar11 = 
                                    "玂袂薂䂁薂蚂蚂薂莂钂䂁辂蚂䂁钂袂薂䂁悂貂貂閂銂覂躂螂䂁皂膂钂薂銂䂁袂膂鎂䂁銂閂躂䂁辂閂钂䒁"
                                    ;
                                  }
                                  mapIfStart(pcVar11);
                                  *(int *)(temp_v5 + 0x150c) = 0;
                                  return 0;
                                }
                                temp_v8 = popupGetStateValue();
                                if (temp_v8 != 0) {
                                  temp_v8 = mapIfGetState();
                                  if (temp_v8 == 0) {
                                    FUN_00295108(0);
                                    FUN_0020ecd4();
                                    FUN_00246344();
                                    FUN_00294cfc(DAT_005f18e8);
                                    temp_v8 = flagsBit7Get(g_gameState,DAT_005f1600);
                                    if (temp_v8 == 0) {
                                      popupTryStartScrollPrompt(g_gameState,DAT_005f1600);
                                      FUN_004bc758(g_gameState,DAT_005f1600,1);
                                    }
                                    popupTryStartTimedPrompt();
                                  }
                                  FUN_002b80b8();
                                  FUN_00325a74();
                                  DAT_005f18e8 = 0;
                                }
                                if (*(char *)((int)puVar2 + 0x9e2) == '\0') {
                                  popupStateSetAndShow(puVar2[0x10],puVar2[0x12]);
                                  *(unsigned char *)((int)puVar2 + 0x9e2) = 1;
                                }
                                if (DAT_005f189c != 0) {
                                  return 0;
                                }
                                puVar19 = puVar2 + 0x3d;
                                FUN_00482c04();
                                if (puVar19 == (unsigned int *)0xffffffff) {
                                  return 0;
                                }
                                if ((DAT_005f17c9 == '\0') && (DAT_005f1be8 != 0)) {
                                  eventQueueAddUnique(0x1000222);
                                  frameTexInitActive();
                                  gameDataCopySaveToWork();
                                  lmapSnapshotTransitionState();
                                  *(unsigned char *)((int)puVar2 + 9) = 1;
                                  puVar2[0x11] = (unsigned int)puVar19;
                                  puVar2[3] = 0x6f;
                                  puVar2[4] = 0;
                                  if (DAT_005f17e8 == 0) {
                                    return 0;
                                  }
                                  puVar2[3] = 0x41;
                                  puVar2[0x281] = DAT_005f17e8;
                                  puVar2[0x28a] = DAT_005f17ec;
                                  return 0;
                                }
                                if (DAT_005f1a58 == 0) {
                                  DAT_005f1894 = 0x44160000;
                                  DAT_005f1898 = 0x41a00000;
                                  return 0;
                                }
                                DAT_005f1898 = 0x41a00000;
                                DAT_005f1894 = 0x44160000;
                                gameFlagSetValue(DAT_005f1a58,1);
                                DAT_005f1a58 = 0;
                                return 0;
                              }
                              temp_v8 = FUN_004d0584();
                              if ((temp_v8 == 0) || (*(char *)(g_lmapView + 0xb4) != '\0'))
                              goto LAB_00278b38;
                              DAT_005f1614 = '\x01';
                              if (DAT_005f16d0 == 5) {
                                uRam005f166c = 0x746f6e5f;
                                uRam005f1670 = 0x6e6e69;
                                DAT_005f1660 = 0x5f726373;
                                DAT_005f1664 = 0x646e6172;
                                DAT_005f1668 = 0x657a616d;
                                puVar2[3] = 0x2f;
                                puVar2[4] = 0;
                                mapPopupReset();
                                return 0;
                              }
                              temp_v8 = gameFlagsGet(DAT_005f16d4);
                              if (temp_v8 == 0xff) {
                                DAT_005f1668 = 0x325f61;
                                DAT_005f1660 = 0x5f726373;
                                DAT_005f1664 = 0x73757566;
                                puVar2[3] = 0x2f;
                                puVar2[4] = 0;
                                mapPopupReset();
                                return 0;
                              }
                              FUN_00384d6c(DAT_005f16d4,1);
                              DAT_005f1614 = '\x01';
                              DAT_005f185a = 0;
                              puVar2[3] = 0x43;
                              mapPopupReset();
                              puVar2[4] = 0;
                              break;
                            }
                            temp_v8 = FUN_004d0584();
                            if ((temp_v8 == 0) || (*(char *)(g_lmapView + 0xb4) != '\0'))
                            goto LAB_00278b38;
                            DAT_005f1614 = '\x01';
                            if (DAT_005f16ec == -1) {
                              puVar2[3] = 0x43;
                              puVar2[4] = 0;
                              temp_v8 = FUN_003ae4d0(DAT_005f163c);
                              if (temp_v8 == -1) {
                                return 0;
                              }
                              FUN_003adef4(temp_v8,1);
                              naviMainFinishRequest();
                              return 0;
                            }
                            temp_v8 = FUN_00356380();
                            if (*(short *)(temp_v8 + 0x28) == 0) {
                              DAT_005f1660 = 0x5f726373;
                              DAT_005f1664 = 0x73757566;
                              DAT_005f1668 = 0x305f61;
                            }
                            temp_v4 = *(short *)(temp_v8 + 0x28);
                          }
                          else {
                            temp_v8 = FUN_004d0584();
                            if ((temp_v8 == 0) || (*(char *)(g_lmapView + 0xb4) != '\0'))
                            goto LAB_00278b38;
                            DAT_005f1614 = '\x01';
                            DAT_005f1859 = 1;
                            DAT_005f185a = 0;
                            uStack_134 = (unsigned int)DAT_005f172a;
                            uStack_138 = (unsigned int)DAT_005f1729;
                            naviMainSetFlagsAndActivate(DAT_005f1725,DAT_005f1726,DAT_005f1727,DAT_005f1728);
                            fireEntriesMatchingPair(DAT_005f1725,DAT_005f1726);
                            fireEntriesMatchingPair(DAT_005f1727,DAT_005f1728);
                            fireEntriesMatchingPair(DAT_005f1729,DAT_005f172a);
                            if (DAT_005f16ec == -1) {
                              puVar2[3] = 0x25;
                              puVar2[4] = 0;
                              mapPopupReset();
                              return 0;
                            }
                            temp_v8 = FUN_00356380();
                            if (*(short *)(temp_v8 + 0x28) == 0) {
                              DAT_005f1660 = 0x5f726373;
                              DAT_005f1664 = 0x73757566;
                              DAT_005f1668 = 0x305f61;
                            }
                            temp_v4 = *(short *)(temp_v8 + 0x28);
                          }
                        }
                        else {
                          temp_v8 = FUN_004d0584();
                          if ((temp_v8 == 0) || (*(char *)(g_lmapView + 0xb4) != '\0'))
                          goto LAB_00278b38;
                          DAT_005f1614 = '\x01';
                          DAT_005f185e = 0;
                          uStack_134 = (unsigned int)DAT_005f172a;
                          uStack_138 = (unsigned int)DAT_005f1729;
                          naviMainSetFlagsAndActivate(DAT_005f1725,DAT_005f1726,DAT_005f1727,DAT_005f1728);
                          fireEntriesMatchingPair(DAT_005f1725,DAT_005f1726);
                          fireEntriesMatchingPair(DAT_005f1727,DAT_005f1728);
                          fireEntriesMatchingPair(DAT_005f1729,DAT_005f172a);
                          temp_v8 = FUN_003cd4b4(DAT_005f163c);
                          if (temp_v8 != 0) {
                            mapPopupReset();
                            DAT_005f1614 = 1;
                            DAT_005f161c = 1;
                            temp_v22 = tableGroupFindEntryIndex(puVar2[0x27b],0x278570);
                            puVar2[0x279] = temp_v22;
                            puVar2[3] = 0x2d;
                            puVar2[4] = 0;
                            return 0;
                          }
                          if (DAT_005f16ec == -1) {
                            puVar2[3] = 0x21;
                            mapPopupReset();
                            puVar2[4] = 0;
                            break;
                          }
                          temp_v8 = FUN_00356380();
                          if (*(short *)(temp_v8 + 0x28) == 0) {
                            DAT_005f1660 = 0x5f726373;
                            DAT_005f1664 = 0x73757566;
                            DAT_005f1668 = 0x305f61;
                          }
                          temp_v4 = *(short *)(temp_v8 + 0x28);
                        }
                      }
                      else {
                        temp_v8 = FUN_004d0584();
                        if ((temp_v8 == 0) || (*(char *)(g_lmapView + 0xb4) != '\0'))
                        goto LAB_00278b38;
                        DAT_005f1614 = '\x01';
                        uStack_134 = (unsigned int)DAT_005f172a;
                        uStack_138 = (unsigned int)DAT_005f1729;
                        naviMainSetFlagsAndActivate(DAT_005f1725,DAT_005f1726,DAT_005f1727,DAT_005f1728);
                        fireEntriesMatchingPair(DAT_005f1725,DAT_005f1726);
                        fireEntriesMatchingPair(DAT_005f1727,DAT_005f1728);
                        fireEntriesMatchingPair(DAT_005f1729,DAT_005f172a);
                        temp_v8 = FUN_003cd4b4(DAT_005f163c);
                        if (temp_v8 != 0) {
                          mapPopupReset();
                          DAT_005f1614 = 1;
                          DAT_005f161c = 1;
                          temp_v22 = tableGroupFindEntryIndex(puVar2[0x27b],0x278570);
                          puVar2[0x279] = temp_v22;
                          puVar2[3] = 0x2b;
                          puVar2[4] = 0;
                          return 0;
                        }
                        if (DAT_005f16ec == -1) {
                          if (DAT_005f16e4 != '\0') goto LAB_00278774;
                          puVar2[3] = 0x1f;
                          mapPopupReset();
                          puVar2[4] = 0;
                          break;
                        }
                        temp_v8 = FUN_00356380();
                        if (*(short *)(temp_v8 + 0x28) == 0) {
                          DAT_005f1668 = 0x305f61;
                          DAT_005f1660 = 0x5f726373;
                          DAT_005f1664 = 0x73757566;
                        }
                        temp_v4 = *(short *)(temp_v8 + 0x28);
                      }
                    }
                    else {
                      temp_v8 = FUN_004d0584();
                      if ((temp_v8 == 0) || (*(char *)(g_lmapView + 0xb4) != '\0'))
                      goto LAB_00278b38;
                      DAT_005f1614 = '\x01';
                      DAT_005f185e = 0;
                      uStack_134 = (unsigned int)DAT_005f172a;
                      uStack_138 = (unsigned int)DAT_005f1729;
                      naviMainSetFlagsAndActivate(DAT_005f1725,DAT_005f1726,DAT_005f1727,DAT_005f1728);
                      fireEntriesMatchingPair(DAT_005f1725,DAT_005f1726);
                      fireEntriesMatchingPair(DAT_005f1727,DAT_005f1728);
                      fireEntriesMatchingPair(DAT_005f1729,DAT_005f172a);
                      temp_v8 = FUN_003cd4b4(DAT_005f163c);
                      if (temp_v8 != 0) {
                        mapPopupReset();
                        DAT_005f1614 = 1;
                        DAT_005f161c = 1;
                        temp_v22 = tableGroupFindEntryIndex(puVar2[0x27b],0x278570);
                        puVar2[0x279] = temp_v22;
                        puVar2[3] = 0x29;
                        puVar2[4] = 0;
                        return 0;
                      }
                      if (DAT_005f16ec == -1) {
                        if (DAT_005f16e4 == '\0') {
                          gameDataCopySaveToWork();
                          lmapSnapshotTransitionState();
                          puVar2[3] = 0x6d;
                          mapPopupReset();
                          puVar2[4] = 0;
                          *(unsigned char *)((int)puVar2 + 10) = 1;
                          return 0;
                        }
LAB_00278774:
                        __aeabi_memcpy4(&DAT_005f1660,0x278a70,0x11);
                        puVar2[3] = 0x2f;
                        puVar2[4] = 0;
                        mapPopupReset();
                        return 0;
                      }
                      temp_v8 = FUN_00356380();
                      if (*(short *)(temp_v8 + 0x28) == 0) {
                        DAT_005f1660 = 0x5f726373;
                        DAT_005f1664 = 0x73757566;
                        DAT_005f1668 = 0x305f61;
                      }
                      temp_v4 = *(short *)(temp_v8 + 0x28);
                    }
                  }
                  else {
                    temp_v8 = FUN_004d0584();
                    if ((temp_v8 == 0) || (*(char *)(g_lmapView + 0xb4) != '\0'))
                    goto LAB_00278b38;
                    DAT_005f1614 = '\x01';
                    if (DAT_005f16ec == -1) {
                      if (DAT_005f16e4 != '\0') goto LAB_00278774;
                      if (DAT_005f16a0 == 0x1a) {
                        temp_v8 = gameFlagIsSet(0x4c9);
                        if (temp_v8 != 0) {
                          temp_v8 = gameFlagIsSet(0x179);
                          if (temp_v8 != 0) {
                            temp_v8 = gameFlagIsSet(0x19f);
                            if (temp_v8 == 0) {
                              gameFlagSetValue(0x1fc,1);
                            }
                          }
                        }
                        else {
                          temp_v8 = gameFlagIsSet(0x179);
                          if (temp_v8 != 0) {
                            temp_v8 = gameFlagIsSet(0x184);
                            if (temp_v8 == 0) {
                              gameFlagSetValue(0x1fc,1);
                            }
                          }
                        }
                      }
                      puVar2[3] = 0x66;
                      mapPopupReset();
                      puVar2[4] = 0;
                      break;
                    }
                    temp_v8 = FUN_00356380();
                    if (*(short *)(temp_v8 + 0x28) == 0) {
                      DAT_005f1668 = 0x305f61;
                      DAT_005f1660 = 0x5f726373;
                      DAT_005f1664 = 0x73757566;
                    }
                    temp_v4 = *(short *)(temp_v8 + 0x28);
                  }
                  if (temp_v4 == 1) {
                    DAT_005f1668 = 0x315f61;
                    DAT_005f1660 = 0x5f726373;
                    DAT_005f1664 = 0x73757566;
                  }
                  FUN_003180c4(0);
                  puVar2[3] = 0x2f;
                  puVar2[4] = 0;
                  mapPopupReset();
                  return 0;
                }
                DAT_005f172b = '\0';
                DAT_005f1614 = '\x01';
                puVar2[3] = 0x3a;
                mapPopupReset();
              }
              puVar2[4] = 0;
              break;
            }
            temp_v22 = 0x3e;
          }
          puVar2[3] = temp_v22;
          DAT_005f1614 = '\x01';
        }
        else {
          puVar2[3] = 0x38;
          DAT_005f1614 = '\x01';
        }
      }
      else {
        puVar2[3] = 0x36;
        DAT_005f1614 = '\x01';
      }
    }
    else {
      puVar2[3] = 0x34;
      DAT_005f1614 = '\x01';
    }
    puVar2[4] = 0;
    break;
  case 0xe:
    if (puVar2[4] == 0) {
      FUN_003254a0();
    }
    if (puVar2[4] == 5) {
      DAT_005f185c = 1;
      objectE0ResetFlags1040();
      frameTransitionSetMode(1);
      FUN_00379be8();
    }
    puVar19 = g_lmapMainState;
    if (puVar2[4] == 6) {
      DAT_005f161f = 1;
      if (g_lmapMainState[0x2b9] != 0) {
        for (temp_v10 = 0; temp_v10 < *(unsigned int *)(*(int *)(puVar19[0x2b9] + 8) + 0x10);
            temp_v10 = temp_v10 + 1) {
          FUN_00399290(temp_v10,0);
        }
      }
      if (puVar19[0x13be] != 0) {
        for (temp_v10 = 0; temp_v10 < *(unsigned int *)(*(int *)(puVar19[0x13be] + 8) + 0x10);
            temp_v10 = temp_v10 + 1) {
          FUN_003b5c54(temp_v10,0);
        }
      }
      temp_v8 = 0;
      do {
        if (puVar19[temp_v8 + 0x295] != 0) {
          temp_v5 = *(int *)(puVar19[temp_v8 + 0x295] + 4);
          *(unsigned int *)(temp_v5 + 4) = *(unsigned int *)(temp_v5 + 4) | 3;
        }
        temp_v8 = temp_v8 + 1;
      } while (temp_v8 < 0x20);
      DAT_005f161f = 1;
      FUN_0036aa04(puVar19);
      FUN_00483834(puVar19 + 0x3d);
      FUN_00297c3c();
      FUN_00234b30();
      FUN_002737a8();
      FUN_002c2610();
    }
    temp_v8 = puVar2[4];
    puVar2[4] = temp_v8 + 1;
    if (temp_v8 + 1 < 8) {
      return 0;
    }
    FUN_002c2358();
    mapRecordResumePoint();
    FUN_002c3398(0);
    temp_v8 = 0xf;
    puVar2[3] = temp_v8;
    puVar2[4] = 0;
    break;
  case 0xf:
    temp_v8 = campIsState85();
    if (temp_v8 != 0) {
      return 0;
    }
    DAT_005f185c = 0;
    FUN_002c23cc(1);
    DAT_005f161f = 0;
    FUN_0036a434(puVar2);
    sub68OwnerCall3();
    mapEnvironmentSelectPreset(1);
    puVar19 = g_lmapMainState;
    if (g_lmapMainState[0x10] != 100) {
      FUN_003699e4();
    }
    temp_v8 = 0;
    do {
      if (puVar19[temp_v8 + 0x295] != 0) {
        temp_v6 = *(int *)(puVar19[temp_v8 + 0x295] + 4);
        *(unsigned int *)(temp_v6 + 4) = *(unsigned int *)(temp_v6 + 4) & 0xfffffffc;
      }
      temp_v8 = temp_v8 + 1;
    } while (temp_v8 < 0x20);
    DAT_005f161f = 0;
    FUN_0036aa04(puVar19);
    FUN_00483834(puVar19 + 0x3d);
    FUN_00297c3c();
    FUN_00234b30();
    FUN_002737a8();
    puVar2[3] = 0x10;
    puVar2[4] = 0;
    temp_v8 = saveSlotFindSelected();
    if (temp_v8 != 0) {
      if (DAT_005f18c8 != *(unsigned short *)(temp_v8 + 300)) {
        popupStart();
        DAT_005f18c8 = (unsigned int)*(unsigned short *)(temp_v8 + 300);
      }
      else {
        temp_v6 = 0;
        temp_v23 = 0;
        temp_v8 = gameGetPlayerData();
        temp_v10 = (unsigned int)*(unsigned short *)(temp_v8 + 6);
        dataTable08Sub2GetRecord();
        if ((DAT_005f18cc != *(unsigned short *)(temp_v10 + 0x40)) ||
           (DAT_005f18d8 != *(unsigned short *)(temp_v10 + 0x42))) {
          DAT_005f18d8 = (unsigned int)*(unsigned short *)(temp_v10 + 0x42);
          temp_v6 = 1;
          DAT_005f18cc = (unsigned int)*(unsigned short *)(temp_v10 + 0x40);
        }
        temp_v10 = (unsigned int)*(unsigned short *)(temp_v8 + 8);
        dataTable08Sub2GetRecord();
        if ((DAT_005f18d0 != *(unsigned short *)(temp_v10 + 0x40)) ||
           (DAT_005f18dc != *(unsigned short *)(temp_v10 + 0x42))) {
          temp_v7 = gameFlagIsSet(0x111d);
          temp_v23 = temp_v7 == 0;
          if (temp_v23) {
            gameFlagSetValue(0x111d,1);
          }
          DAT_005f18d0 = (unsigned int)*(unsigned short *)(temp_v10 + 0x40);
          temp_v6 = temp_v6 + 1;
          DAT_005f18dc = (unsigned int)*(unsigned short *)(temp_v10 + 0x42);
        }
        temp_v10 = (unsigned int)*(unsigned short *)(temp_v8 + 10);
        dataTable08Sub2GetRecord();
        if ((DAT_005f18d4 != *(unsigned short *)(temp_v10 + 0x40)) ||
           (DAT_005f18e0 != *(unsigned short *)(temp_v10 + 0x42))) {
          DAT_005f18e0 = (unsigned int)*(unsigned short *)(temp_v10 + 0x42);
          temp_v6 = temp_v6 + 1;
          DAT_005f18d4 = (unsigned int)*(unsigned short *)(temp_v10 + 0x40);
        }
        if (temp_v6 != 0) {
          temp_v10 = DAT_005f18cc;
          if (DAT_005f18cc == DAT_005f18d0) {
            temp_v10 = DAT_005f18d4;
          }
          if (!(DAT_005f18cc != DAT_005f18d0 || DAT_005f18d0 != temp_v10)) {
            temp_v10 = DAT_005f18d8;
            if (DAT_005f18d8 == DAT_005f18dc) {
              temp_v10 = DAT_005f18e0;
            }
            if (DAT_005f18d8 != DAT_005f18dc || DAT_005f18dc != temp_v10) goto LAB_00279490;
            temp_v22 = 1;
          }
          else {
LAB_00279490:
            if (temp_v6 == 0) goto LAB_00279444;
            if (temp_v23) {
              temp_v22 = 1;
            }
            else {
              temp_v22 = 0;
            }
          }
          FUN_00294a84(temp_v22);
        }
      }
    }
LAB_00279444:
    pcVar11 = (char *)campGetState();
    if (pcVar11[4] == '\0') {
      return 0;
    }
    if (pcVar11[1] != '\0') {
      temp_v10 = (unsigned int)*(unsigned short *)(pcVar11 + 8);
      FUN_001ad9b4();
      DAT_005f1796 = *(short *)(temp_v10 + 2);
      libc_strcpy(&DAT_005f1798,temp_v10 + 0xc4);
      DAT_005f1794 = 1;
    }
    else if (pcVar11[3] != '\0') {
      DAT_005f17aa = 1;
    }
    *(unsigned short *)(temp_v5 + 0x22) = 0;
    clearFlags310To31F();
    sub68OwnerCall4();
    if (pcVar11[2] != '\0') {
      DAT_005f17a8 = 1;
    }
    if (*pcVar11 != '\0') {
      puVar2[3] = 0x11;
      puVar2[4] = 0;
      return 0;
    }
    *(unsigned short *)(temp_v5 + 0x1e) = *(unsigned short *)(pcVar11 + 6);
    FUN_00483294(puVar2 + 0x3d);
    stateSetterSetFromBase(puVar2 + 0x3d,puVar2[0x10] - 100,puVar2[0x12]);
    FUN_00482fd4(puVar2 + 0x3d);
    lmapApplyMapAndArea();
    FUN_002df914();
    break;
  case 0x10:
    temp_v8 = puVar2[4];
    puVar2[4] = temp_v8 + 1;
    if (temp_v8 + 1 < 2) {
      return 0;
    }
    frameTransitionSetMode(0);
    if (DAT_005f1634 == '\0') {
      *(unsigned short *)(g_lmapView + 0xb6) = 0xd;
      DAT_005f1614 = 0;
      puVar2[3] = 0xd;
      puVar2[4] = 0;
      return 0;
    }
    temp_v8 = 0x70;
    puVar2[3] = temp_v8;
    puVar2[4] = 0;
    break;
  case 0x11:
    temp_v8 = puVar2[4];
    puVar2[4] = temp_v8 + 1;
    if (temp_v8 + 1 == 2) {
      frameTransitionSetMode(0);
    }
    if ((int)puVar2[4] < 7) {
      FUN_00387014();
      return 0;
    }
    if (puVar2[4] != 7) {
      return 0;
    }
    eventQueueAddUnique(0x1000222);
    frameTexInitActive();
    gameDataCopySaveToWork();
    lmapSnapshotTransitionState();
    temp_v8 = 0x6f;
    *(unsigned char *)((int)puVar2 + 9) = 1;
    puVar2[3] = temp_v8;
    puVar2[4] = 0;
    break;
  case 0x12:
    FUN_00387014();
    if (puVar2[4] != 0) {
      temp_v8 = FUN_0047e150(g_aocMain + 0xa8);
      if (temp_v8 != 0) {
        helpResourcesRelease(g_aocMain + 0xa8);
        if (temp_v8 != 2) {
          if (g_mapSelection >= 0) {
            (*(unsigned short *)((unsigned char *)&uStack_b0 + 0)) = romwright_piece_1_1((char)g_gameState - 'd',2);
            uStack_b0 = (((unsigned int)(uStack_b0) & 0xff000000U) | (((unsigned int)(romwright_piece_1_2((char)DAT_005f1600,(unsigned short)uStack_b0)) & 0xffffffU) << 0));
            uStack_b0 = romwright_piece_1_3((char)DAT_005f1604,((unsigned int)uStack_b0 & 0xffffffU));
            uStack_ac = *(unsigned int *)(g_lmapScene + 0x1c);
            uStack_a8 = *(unsigned int *)(g_lmapScene + 0x20);
            uStack_a4 = *(unsigned int *)(g_lmapScene + 0x24);
            uStack_a0 = *(unsigned int *)(g_lmapScene + 0x4c);
            uStack_9c = *(int *)(g_lmapView + 0x18);
            gameDataSaveSetValues(&uStack_b0);
            gameDataCopySaveToWork();
            puVar2[3] = 0x70;
            puVar2[4] = 0;
          }
          else if (DAT_005f1658 != 0) {
            (*(unsigned short *)((unsigned char *)&uStack_b0 + 0)) = romwright_piece_1_1((char)g_gameState - 'd',2);
            uStack_b0 = (((unsigned int)(uStack_b0) & 0xff000000U) | (((unsigned int)(romwright_piece_1_2((char)DAT_005f1600,(unsigned short)uStack_b0)) & 0xffffffU) << 0));
            uStack_b0 = romwright_piece_1_3((char)DAT_005f1604,((unsigned int)uStack_b0 & 0xffffffU));
            uStack_ac = *(unsigned int *)(g_lmapScene + 0x1c);
            uStack_a8 = *(unsigned int *)(g_lmapScene + 0x20);
            uStack_a4 = *(unsigned int *)(g_lmapScene + 0x24);
            uStack_a0 = *(unsigned int *)(g_lmapScene + 0x4c);
            uStack_9c = *(int *)(g_lmapView + 0x18);
            gameDataSaveSetValues(&uStack_b0);
            gameDataCopySaveToWork();
            lmapSnapshotTransitionState();
            puVar2[3] = 0x70;
            puVar2[4] = 0;
            *(unsigned char *)((int)puVar2 + 10) = 1;
          }
          else {
            FUN_004731d8();
            uiPlayGatedActionFeedback();
            DAT_005f1614 = '\0';
            DAT_005f161c = 0;
            puVar2[3] = 0xd;
            puVar2[4] = 0;
            FUN_002df914();
          }
          goto LAB_00279834;
        }
      }
      else {
LAB_00279834:
        temp_v10 = *(unsigned int *)(g_aocMain + 0x754);
        *(unsigned int *)(g_aocMain + 0x754) = temp_v10 & 0xffffff8f;
        if ((temp_v10 & 0x10) == 0) {
          return 0;
        }
      }
      DAT_005f1614 = '\x01';
      DAT_005f161c = 1;
      puVar2[3] = 0x17;
      FUN_004731d8();
      temp_v5 = 0;
      puVar2[4] = temp_v5;
      break;
    }
    FUN_00341fa4(g_aocMain + 0xa8,1);
    temp_v5 = puVar2[4] + 1;
    puVar2[4] = temp_v5;
    break;
  case 0x13:
    FUN_00387014();
    if (puVar2[4] == 0) {
      slotSetRequest(0,10,0xff);
      slotSetRequest(1,10,0xff);
      puVar2[4] = puVar2[4] + 1;
    }
    temp_v8 = FUN_002e07f4();
    if (temp_v8 == 0) {
      return 0;
    }
    temp_v8 = g_aocMain + 0xa8;
    mapRestoreSavedDestination(temp_v8,0);
    goto joined_r0x0027ce58;
  case 0x14:
    FUN_00387014();
    if (puVar2[4] == 0) {
      scriptHolderReset(g_aocMain + 0xa8);
      mapSetSceneState(2);
      FUN_001681c4();
      FUN_001695a0();
      temp_v5 = puVar2[4] + 1;
      puVar2[4] = temp_v5;
      break;
    }
    temp_v8 = scriptHolderUpdateSimple(g_aocMain + 0xa8);
    if (temp_v8 == 0) {
      return 0;
    }
    scriptHolderFree3(g_aocMain + 0xa8);
    lmapApplyMapAndArea();
    uiPlayGatedActionFeedback();
    DAT_005f1614 = '\0';
    puVar2[3] = 0xd;
    puVar2[4] = 0;
    FUN_002df914();
    break;
  case 0x15:
    temp_v8 = g_aocMain + 0xa8;
    mapRestoreSavedDestination(temp_v8,0);
    goto joined_r0x0027ce58;
  case 0x16:
    FUN_00387014();
    mapPopupReset();
    if (puVar2[4] == 0) {
      scriptHolderBReset(g_aocMain + 0xa8,1);
      temp_v5 = puVar2[4] + 1;
      puVar2[4] = temp_v5;
      break;
    }
    temp_v8 = scriptHolderUpdate((ScriptHolder *)(g_aocMain + 0xa8));
    if (temp_v8 == 0) {
      return 0;
    }
    scriptHolderFree1(g_aocMain + 0xa8);
    uiPlayGatedActionFeedback();
    temp_v8 = gameBlockByte27E98Is1To3();
    if (temp_v8 == 0) {
      DAT_005f1614 = 0;
      DAT_005f161c = 0;
      puVar2[3] = 0xd;
      puVar2[4] = 0;
      return 0;
    }
    temp_v8 = 0x13;
    puVar2[3] = temp_v8;
    puVar2[4] = 0;
    break;
  case 0x17:
    FUN_00387014();
    mapPopupReset();
    temp_v8 = g_aocMain;
    temp_v10 = *(unsigned int *)(g_aocMain + 0x754);
    if ((temp_v10 & 4) != 0 || (temp_v10 & 8) != 0) {
      return 0;
    }
    if (puVar2[4] != 0) {
      temp_v8 = scriptHolderUpdateForward((ScriptHolder *)(g_aocMain + 0xa8));
      if (temp_v8 == 0) {
        return 0;
      }
      scriptHolderFree2(g_aocMain + 0xa8);
      uiPlayGatedActionFeedback();
      temp_v8 = gameBlockByte27E98Is1To3();
      if (temp_v8 == 0) {
        DAT_005f1614 = 0;
        DAT_005f161c = 0;
        puVar2[3] = 0xd;
        puVar2[4] = 0;
        return 0;
      }
      temp_v8 = 0x13;
      puVar2[3] = temp_v8;
      puVar2[4] = 0;
      break;
    }
    *(unsigned int *)(g_aocMain + 0x754) = temp_v10 & 0xffffff8f;
    FUN_0047e430(temp_v8 + 0xa8,1);
    temp_v5 = puVar2[4] + 1;
    puVar2[4] = temp_v5;
    break;
  case 0x1f:
    FUN_003a2278(1);
    gameDataCopySaveToWork();
    mapPlaceSet(0xffffffff,0xffffffff);
    puVar19 = g_lmapMainState;
    FUN_001695a0();
    textFormatBuffer(&uStack_b0,"event/e%03d/e%03d.bf",DAT_005f1658,DAT_005f1658);
    puVar10 = &uStack_b0;
    asdLoadFileSyncDefault();
    puVar19[0x28b] = (unsigned int)puVar10;
    textFormatBuffer(&uStack_b0,"event/e%03d/e%03d.mbm",DAT_005f1658,DAT_005f1658);
    puVar10 = &uStack_b0;
    asdLoadFileSyncDefault();
    puVar19[0x28c] = (unsigned int)puVar10;
    temp_v8 = puVar19[0x28b];
    FUN_00275bc8(temp_v8,puVar10);
    puVar19[0x28d] = temp_v8;
    *(unsigned int *)(temp_v8 + 0x108) = 2;
    puVar19[0x28e] = 0;
    temp_v22 = tableGroupFindEntryIndex(puVar19[0x28b],&DAT_005f1660);
    scrScriptProcessStartEntry(puVar19[0x28d],temp_v22);
    DAT_005f1658 = 0;
    puVar2[3] = puVar2[3] + 1;
    FUN_0036a434(puVar2);
    FUN_003401a4(puVar2);
    FUN_0036aa04(puVar2);
    FUN_00297c3c();
    FUN_00234b30();
    FUN_002737a8();
    break;
  case 0x20:
    FUN_0036a434(puVar2);
    FUN_003401a4(puVar2);
    FUN_0036aa04(puVar2);
    FUN_00297c3c();
    FUN_00234b30();
    FUN_002737a8();
    temp_v8 = FUN_002dfa18();
    if (temp_v8 == 0) {
      return 0;
    }
    if (DAT_005f1658 != 0) {
LAB_0027a7a8:
      lmapSnapshotTransitionState();
      puVar2[3] = 0x6e;
      puVar2[4] = 0;
      *(unsigned char *)((int)puVar2 + 10) = 1;
      break;
    }
    if (g_mapSelection == -1) {
      FUN_003a2278(0);
      FUN_002b79d8();
      DAT_005f1614 = 0;
      puVar2[3] = 0xd;
      puVar2[4] = 0;
      temp_v8 = FUN_0013def0(0);
      if (temp_v8 == 3) {
        FUN_0013cab8(0,10,0xff);
      }
      temp_v8 = FUN_0013def0(1);
      if (temp_v8 != 3) {
        return 0;
      }
      FUN_0013cab8(1,10,0xff);
      return 0;
    }
    temp_v8 = 0x70;
    puVar2[3] = temp_v8;
    puVar2[4] = 0;
    break;
  case 0x21:
    FUN_003a2278(1);
    gameDataCopySaveToWork();
    if (DAT_005f165c == -1) {
      DAT_005f165c = tableGroupFindEntryIndex(puVar2[0x27e],&DAT_005f1660);
    }
    mapPlaceSet(0xffffffff,0xffffffff);
    FUN_001695a0();
    scrScriptProcessStartEntry(puVar2[0x280],DAT_005f165c);
    DAT_005f1658 = 0;
    puVar2[3] = puVar2[3] + 1;
    FUN_0036a434(puVar2);
    FUN_003401a4(puVar2);
    FUN_0036aa04(puVar2);
    break;
  case 0x22:
    FUN_0036a434(puVar2);
    FUN_003401a4(puVar2);
    FUN_0036aa04(puVar2);
    temp_v8 = scrRunOpcodesStub(puVar2[0x280]);
    if (temp_v8 != 2) {
      return 0;
    }
    mapIfClose();
    if (DAT_005f1658 != 0) goto LAB_0027a7a8;
    if (g_mapSelection == -1) {
      FUN_003a2278(0);
      FUN_002b79d8();
      DAT_005f1614 = 0;
      puVar2[3] = 0xd;
      puVar2[4] = 0;
      temp_v8 = FUN_0013def0(0);
      if (temp_v8 == 3) {
        FUN_0013cab8(0,10,0xff);
      }
      temp_v8 = FUN_0013def0(1);
      if (temp_v8 != 3) {
        return 0;
      }
      FUN_0013cab8(1,10,0xff);
      return 0;
    }
    temp_v8 = 0x70;
    puVar2[3] = temp_v8;
    puVar2[4] = 0;
    break;
  case 0x23:
    FUN_001681c4();
    gameDataCopySaveToWork();
    if (DAT_005f165c == -1) {
      DAT_005f165c = tableGroupFindEntryIndex(puVar2[0x27e],&DAT_005f1660);
    }
    mapPlaceSet(0xffffffff,0xffffffff);
    FUN_001695a0();
    scrScriptProcessStartEntry(puVar2[0x280],DAT_005f165c);
    DAT_005f1658 = 0;
    puVar2[3] = puVar2[3] + 1;
    FUN_0036a434(puVar2);
    FUN_003401a4(puVar2);
    FUN_0036aa04(puVar2);
    mapPopupReset();
    return 0;
  case 0x24:
    FUN_0036a434(puVar2);
    FUN_003401a4(puVar2);
    FUN_0036aa04(puVar2);
    temp_v8 = scrRunOpcodesStub(puVar2[0x280]);
    if (temp_v8 != 2) {
      return 0;
    }
    if (DAT_005f18c5 == '\0') {
      if (DAT_005f1658 != 0) goto LAB_0027a7a8;
      if (g_mapSelection == -1) {
        uiPlayGatedActionFeedback();
        FUN_002b79d8();
        DAT_005f1614 = 0;
        puVar2[3] = 0xd;
        puVar2[4] = 0;
        temp_v8 = FUN_0013def0(0);
        if (temp_v8 == 3) {
          FUN_0013cab8(0,10,0xff);
        }
        temp_v8 = FUN_0013def0(1);
        if (temp_v8 != 3) {
          return 0;
        }
        FUN_0013cab8(1,10,0xff);
        return 0;
      }
    }
    temp_v8 = 0x70;
    puVar2[3] = temp_v8;
    puVar2[4] = 0;
    break;
  case 0x25:
    if (DAT_005f165c == -1) {
      DAT_005f165c = tableGroupFindEntryIndex(puVar2[0x27e],&DAT_005f1660);
    }
    FUN_001695a0();
    scrScriptProcessStartEntry(puVar2[0x280],DAT_005f165c);
    FUN_0036a434(puVar2);
    FUN_003401a4(puVar2);
    FUN_0036aa04(puVar2);
    FUN_00249dec();
    FUN_00297c3c();
    FUN_00234b30();
    FUN_002737a8();
    if (g_lmapMainState[0x10] != 100) {
      FUN_003699e4();
    }
    navigationSetArguments(puVar2[0x10],puVar2[0x12],DAT_005f1604);
    puVar2[3] = puVar2[3] + 1;
    break;
  case 0x26:
    FUN_003401a4(puVar2);
    FUN_0036aa04(puVar2);
    FUN_0036a434(puVar2);
    FUN_00249dec();
    FUN_00297c3c();
    FUN_00234b30();
    FUN_002737a8();
    if (g_lmapMainState[0x10] != 100) {
      FUN_003699e4();
    }
    navigationSetArguments(puVar2[0x10],puVar2[0x12],DAT_005f1604);
    temp_v8 = scrRunOpcodesStub(puVar2[0x280]);
    if (temp_v8 == 2) {
      mapIfClose();
      FUN_003a2278(0);
      DAT_005f1614 = '\0';
      DAT_005f1859 = 1;
      DAT_005f185a = 1;
      puVar2[3] = 0xd;
      puVar2[4] = 0;
    }
    break;
  case 0x27:
    FUN_0036a434(puVar2);
    FUN_003401a4(puVar2);
    FUN_0036aa04(puVar2);
    FUN_00249dec();
    FUN_00297c3c();
    FUN_00234b30();
    FUN_002737a8();
    if (g_lmapMainState[0x10] != 100) {
      FUN_003699e4();
    }
    DAT_005f1859 = 0;
    DAT_005f185a = 0;
    DAT_005f187c = 0;
    navigationSetArguments(puVar2[0x10],puVar2[0x12],DAT_005f1604);
    puVar19 = g_lmapMainState;
    if (g_lmapMainState[0x33] != 1) {
      g_lmapMainState[0x33] = 1;
      puVar19[0x34] = 0;
      puVar19[0x35] = 0;
    }
    FUN_00291e50(0,0,DAT_005f16a4,DAT_005f16a8);
    puVar2[3] = puVar2[3] + 1;
    puVar2[4] = 0;
    break;
  case 0x28:
    FUN_003401a4(puVar2);
    FUN_0036aa04(puVar2);
    FUN_0036a434(puVar2);
    FUN_00249dec();
    FUN_00297c3c();
    FUN_00234b30();
    FUN_002737a8();
    if (g_lmapMainState[0x10] != 100) {
      FUN_003699e4();
    }
    navigationSetArguments(puVar2[0x10],puVar2[0x12],DAT_005f1604);
    if ((g_lmapMainState[0x33] != 5) && (temp_v8 = puVar2[4], puVar2[4] = temp_v8 + 1, temp_v8 + 1 >= 11))
    {
      lmapInitializeArea(DAT_005f16a4,DAT_005f16a8);
      puVar19 = g_lmapMainState;
      if (g_lmapMainState[0x33] != 1) {
        g_lmapMainState[0x33] = 1;
        puVar19[0x34] = 0;
        puVar19[0x35] = 0;
      }
      mapIfClose();
      DAT_005f1614 = '\0';
      DAT_005f161c = 0;
      DAT_005f1859 = 1;
      DAT_005f185a = 1;
      DAT_005f187c = 1;
      puVar2[3] = 0xd;
      puVar2[4] = 0;
    }
    break;
  case 0x29:
  case 0x2b:
  case 0x2d:
    FUN_001681c4();
    DAT_005f1859 = 0;
    DAT_005f185a = 0;
    DAT_005f1614 = '\x01';
    DAT_005f161c = 1;
    recTableFireType3();
    FUN_001695a0();
    scrScriptProcessStartEntry(puVar2[0x27d],puVar2[0x279]);
    FUN_0036a434(puVar2);
    FUN_003401a4(puVar2);
    FUN_0036aa04(puVar2);
    mapPopupReset();
    puVar2[3] = puVar2[3] + 1;
    puVar2[4] = 0;
    break;
  case 0x2a:
    FUN_0036a434(puVar2);
    FUN_003401a4(puVar2);
    FUN_0036aa04(puVar2);
    puVar2[4] = puVar2[4] + 1;
    temp_v8 = scrRunOpcodesStub(puVar2[0x27d]);
    if (temp_v8 != 2) {
      return 0;
    }
    uiPlayGatedActionFeedback();
    temp_v8 = messageGetChoiceResult();
    if (temp_v8 != 0) {
LAB_0027a030:
      DAT_005f1614 = 0;
      DAT_005f161c = 0;
      DAT_005f185a = 1;
      DAT_005f1859 = 1;
      puVar2[3] = 0xd;
      puVar2[4] = 0;
      return 0;
    }
    gameDataCopySaveToWork();
    lmapSnapshotTransitionState();
    puVar2[3] = 0x6d;
    mapPopupReset();
    puVar2[4] = 0;
    *(unsigned char *)((int)puVar2 + 10) = 1;
    break;
  case 0x2c:
    FUN_0036a434(puVar2);
    FUN_003401a4(puVar2);
    FUN_0036aa04(puVar2);
    puVar2[4] = puVar2[4] + 1;
    temp_v8 = scrRunOpcodesStub(puVar2[0x27d]);
    if (temp_v8 != 2) {
      return 0;
    }
    uiPlayGatedActionFeedback();
    temp_v8 = messageGetChoiceResult();
    if (temp_v8 != 0) goto LAB_0027a030;
    puVar2[3] = 0x1f;
    mapPopupReset();
    temp_v5 = 0;
    puVar2[4] = temp_v5;
    break;
  case 0x2e:
    FUN_0036a434(puVar2);
    FUN_003401a4(puVar2);
    FUN_0036aa04(puVar2);
    puVar2[4] = puVar2[4] + 1;
    temp_v8 = scrRunOpcodesStub(puVar2[0x27d]);
    if (temp_v8 != 2) {
      return 0;
    }
    uiPlayGatedActionFeedback();
    temp_v8 = messageGetChoiceResult();
    if (temp_v8 != 0) {
      DAT_005f1614 = 0;
      DAT_005f161c = 0;
      DAT_005f185a = 1;
      DAT_005f1859 = 1;
      puVar2[3] = 0xd;
      puVar2[4] = 0;
      return 0;
    }
    puVar2[3] = 0x21;
    mapPopupReset();
    temp_v5 = 0;
    puVar2[4] = temp_v5;
    break;
  case 0x2f:
    if (DAT_005f1ad7 != '\0') {
      sysPlaySe(0xe7);
    }
    else {
      FUN_001681c4();
    }
    DAT_005f1ad7 = '\0';
    mapPlaceSet(0xffffffff,0xffffffff);
    DAT_005f1658 = 0;
    temp_v22 = tableGroupFindEntryIndex(puVar2[0x27b],&DAT_005f1660);
    puVar2[0x279] = temp_v22;
    FUN_001695a0();
    scrScriptProcessStartEntry(puVar2[0x27d],puVar2[0x279]);
    FUN_0036a434(puVar2);
    FUN_003401a4(puVar2);
    FUN_0036aa04(puVar2);
    FUN_00297c3c();
    FUN_00234b30();
    FUN_002737a8();
    puVar2[3] = puVar2[3] + 1;
    puVar2[4] = 0;
    break;
  case 0x30:
    puVar2[4] = puVar2[4] + 1;
    FUN_0036a434(puVar2);
    FUN_003401a4(puVar2);
    FUN_0036aa04(puVar2);
    FUN_00297c3c();
    FUN_00234b30();
    FUN_002737a8();
    temp_v8 = scrRunOpcodesStub(puVar2[0x27d]);
    if (temp_v8 != 2) {
      return 0;
    }
    if (DAT_005f16e4 != '\0') {
      if (DAT_005f16e5 == '\x05') {
        FUN_002342b8();
        temp_v8 = puVar2[3];
        temp_v8 = temp_v8 + 1;
        puVar2[3] = temp_v8;
        puVar2[4] = 0;
        break;
      }
      if (DAT_005f16e5 == '\x04') {
        mapPlaceSet((int)DAT_005f16e6,DAT_005f16e7,DAT_005f16e8);
        FUN_002342b8();
        temp_v8 = puVar2[3];
        temp_v5 = 0;
        puVar2[3] = temp_v8 + 1;
        puVar2[4] = temp_v5;
        break;
      }
    }
    uiPlayGatedActionFeedback();
    temp_v8 = 0xd;
    DAT_005f1614 = '\0';
    puVar2[3] = temp_v8;
    puVar2[4] = 0;
    break;
  case 0x31:
    temp_v5 = mapIfHasSelection();
    temp_v24 = DAT_005f16c8;
    temp_v9 = DAT_005f16c4;
    temp_v22 = DAT_005f16c0;
    temp_v8 = g_lmapScene;
    if (temp_v5 == 0) {
      if ((DAT_005f16e4 != '\0') && (DAT_005f16e5 == '\x05')) {
        DAT_005f16e4 = '\0';
        *(unsigned int *)(g_lmapScene + 0x1c) = DAT_005f16c0;
        *(unsigned int *)(temp_v8 + 0x20) = temp_v9;
        *(unsigned int *)(temp_v8 + 0x24) = temp_v24;
        *(unsigned int *)(temp_v8 + 0x28) = temp_v22;
        *(unsigned int *)(temp_v8 + 0x2c) = temp_v9;
        *(unsigned int *)(temp_v8 + 0x30) = temp_v24;
        temp_v22 = DAT_005f16bc;
        *(unsigned int *)(temp_v8 + 0x4c) = DAT_005f16bc;
        *(unsigned int *)(temp_v8 + 0x50) = temp_v22;
      }
      uiPlayGatedActionFeedback();
      DAT_005f1614 = '\0';
      puVar2[3] = 0xd;
      puVar2[4] = 0;
      mapIfSetMode1();
    }
    break;
  case 0x32:
    if ((puVar2[4] == 0) && (g_lmapMainState[0x33] != 2)) {
      g_lmapMainState[0x33] = 2;
      puVar19[0x34] = 0;
      puVar19[0x35] = 0;
    }
    FUN_0036a434(puVar2);
    FUN_003401a4(puVar2);
    FUN_0036aa04(puVar2);
    temp_v8 = puVar2[4];
    puVar2[4] = temp_v8 + 1;
    if (temp_v8 + 1 < 0x11) {
      return 0;
    }
    slotSetRequest(0,10,0xff);
    slotSetRequest(1,10,0xff);
    naviMainRequestProcessing(8,0);
    FUN_00387014();
    temp_v8 = puVar2[3] + 1;
    puVar2[3] = temp_v8;
    puVar2[4] = 0;
    break;
  case 0x33:
    FUN_00387014();
    temp_v8 = FUN_002e07f4();
    if (temp_v8 != 0) {
      puVar2[0x24d6] = 1;
      puVar2[0x24d7] = DAT_005f16a0;
      puVar2[3] = 0x70;
      puVar2[4] = 0;
    }
    break;
  case 0x34:
    FUN_00387014();
    temp_v8 = FUN_002e07f4();
    if (temp_v8 != 0) {
      mapPlaceSet(0xffffffff,0xffffffff);
      DAT_005f1658 = 0;
      temp_v22 = tableGroupFindEntryIndex(puVar2[0x27b],0x27aba4);
      puVar2[0x279] = temp_v22;
      FUN_001695a0();
      scrScriptProcessStartEntry(puVar2[0x27d],puVar2[0x279]);
      puVar2[3] = puVar2[3] + 1;
      puVar2[4] = 0;
    }
    break;
  case 0x35:
    FUN_00387014();
    puVar2[4] = puVar2[4] + 1;
    temp_v8 = scrRunOpcodesStub(puVar2[0x27d]);
    if (temp_v8 != 2) {
      return 0;
    }
    lmapApplyMapAndArea();
    sub68OwnerCall4();
    puVar19 = g_lmapMainState;
    if (g_lmapMainState != (unsigned int *)0x0) {
      FUN_00483acc(g_lmapMainState + 0x3d);
      stateSetterSetFromBase(puVar19 + 0x3d,puVar19[0x10] - 100,puVar19[0x12]);
      fieldBuildAreaPlacementList(puVar19 + 0x3d);
    }
    sub68OwnerCall3();
    FUN_002df914();
    temp_v8 = 0xd;
    DAT_005f1614 = '\0';
    puVar2[3] = temp_v8;
    puVar2[4] = 0;
    break;
  case 0x36:
    FUN_00387014();
    temp_v8 = FUN_002e07f4();
    if (((temp_v8 != 0) && (temp_v8 = puVar2[4], puVar2[4] = temp_v8 + 1, temp_v8 + 1 >= 5)) &&
       (temp_v8 = infoWinHasValue(), temp_v8 == 0)) {
      mapPlaceSet(0xffffffff,0xffffffff);
      DAT_005f1658 = 0;
      temp_v22 = tableGroupFindEntryIndex(puVar2[0x27b],0x27abbc);
      puVar2[0x279] = temp_v22;
      scrScriptProcessStartEntry(puVar2[0x27d],temp_v22);
      puVar2[3] = puVar2[3] + 1;
      puVar2[4] = 0;
    }
    break;
  case 0x37:
    FUN_00387014();
    puVar2[4] = puVar2[4] + 1;
    temp_v8 = scrRunOpcodesStub(puVar2[0x27d]);
    if (temp_v8 != 2) {
      return 0;
    }
    temp_v8 = 0xd;
    DAT_005f1614 = '\0';
    puVar2[3] = temp_v8;
    puVar2[4] = 0;
    break;
  case 0x38:
    *(unsigned char *)((int)puVar2 + 0x9e1) = 0;
    FUN_00387014();
    mapPlaceSet(0xffffffff,0xffffffff);
    DAT_005f1658 = 0;
    DAT_005f185a = 0;
    if (DAT_005f1794 != 0) {
      DAT_005f1794 = 0;
      DAT_005f1658 = (unsigned int)DAT_005f1796;
      libc_strcpy(&DAT_005f1660,&DAT_005f1798);
      puVar2[0x281] = DAT_005f1658;
      libc_strcpy(puVar2 + 0x282,&DAT_005f1660);
    }
    else {
      temp_v8 = FUN_00398024();
      if (temp_v8 != -1) {
        temp_v10 = FUN_00398024() & 0xffff;
        FUN_001ad9b4();
        DAT_005f1658 = (unsigned int)*(unsigned short *)(temp_v10 + 2);
        libc_strcpy(&DAT_005f1660,temp_v10 + 0xb4);
        puVar2[0x281] = DAT_005f1658;
        libc_strcpy(puVar2 + 0x282,&DAT_005f1660);
      }
    }
    puVar19 = g_lmapMainState;
    FUN_001695a0();
    textFormatBuffer(&uStack_b0,"event/e%03d/e%03d.bf",DAT_005f1658,DAT_005f1658);
    puVar10 = &uStack_b0;
    asdLoadFileSyncDefault();
    puVar19[0x28b] = (unsigned int)puVar10;
    textFormatBuffer(&uStack_b0,"event/e%03d/e%03d.mbm",DAT_005f1658,DAT_005f1658);
    puVar10 = &uStack_b0;
    asdLoadFileSyncDefault();
    puVar19[0x28c] = (unsigned int)puVar10;
    temp_v8 = puVar19[0x28b];
    FUN_00275bc8(temp_v8,puVar10);
    puVar19[0x28d] = temp_v8;
    *(unsigned int *)(temp_v8 + 0x108) = 2;
    puVar19[0x28e] = 0;
    temp_v22 = tableGroupFindEntryIndex(puVar19[0x28b],&DAT_005f1660);
    scrScriptProcessStartEntry(puVar19[0x28d],temp_v22);
    puVar2[3] = puVar2[3] + 1;
    puVar2[4] = 0;
    break;
  case 0x39:
    FUN_00387014();
    puVar2[4] = puVar2[4] + 1;
    temp_v8 = FUN_002dfa18();
    if (temp_v8 == 0) {
      return 0;
    }
    if (g_mapSelection == -1) {
      temp_v8 = FUN_0013def0(0);
      if (temp_v8 == 3) {
        FUN_0013cab8(0,10,0xff);
      }
      temp_v8 = FUN_0013def0(1);
      if (temp_v8 == 3) {
        FUN_0013cab8(1,10,0xff);
      }
      FUN_00244ac8();
      puVar19 = g_lmapMainState;
      temp_v22 = puVar2[0x10];
      FUN_002747dc();
      FUN_00364740(temp_v22,puVar19[0x12]);
      FUN_002ddea0();
      FUN_00245d78(0);
      FUN_002df914();
      FUN_003a2278(0);
      DAT_005f1614 = '\0';
      DAT_005f185a = 1;
      puVar2[3] = 0xd;
      puVar2[4] = 0;
      break;
    }
    temp_v8 = 0x70;
    puVar2[3] = temp_v8;
    puVar2[4] = 0;
    break;
  case 0x3a:
    mapPopupReset();
    FUN_00387014();
    puVar2[0x277] = 0;
    temp_v8 = FUN_002e07f4();
    if (temp_v8 != 0) {
      FUN_001681c4();
      mapPlaceSet(0xffffffff,0xffffffff);
      DAT_005f1658 = 0;
      temp_v22 = tableGroupFindEntryIndex(puVar2[0x27b],0x27aff0);
      puVar2[0x279] = temp_v22;
      FUN_001695a0();
      scrScriptProcessStartEntry(puVar2[0x27d],puVar2[0x279]);
      puVar2[3] = puVar2[3] + 1;
      puVar2[4] = 0;
    }
    break;
  case 0x3b:
    mapPopupReset();
    FUN_00387014();
    puVar2[4] = puVar2[4] + 1;
    temp_v8 = scrRunOpcodesStub(puVar2[0x27d]);
    if (temp_v8 != 2) {
      return 0;
    }
    temp_v8 = gameDataTableGetFlag();
    if (temp_v8 != 4) {
      sub68OwnerCall3();
    }
    FUN_00215978(0);
    lmapApplyMapAndArea();
    uiPlayGatedActionFeedback();
    FUN_002df914();
    temp_v8 = 0xd;
    DAT_005f1614 = '\0';
    puVar2[3] = temp_v8;
    puVar2[4] = 0;
    break;
  case 0x3c:
    FUN_00387014();
    temp_v8 = FUN_002e07f4();
    if (temp_v8 != 0) {
      mapPlaceSet(0xffffffff,0xffffffff);
      DAT_005f1658 = 0;
      temp_v22 = tableGroupFindEntryIndex(puVar2[0x27b],0x27b000);
      puVar2[0x279] = temp_v22;
      FUN_001695a0();
      scrScriptProcessStartEntry(puVar2[0x27d],puVar2[0x279]);
      puVar2[3] = puVar2[3] + 1;
      puVar2[4] = 0;
    }
    break;
  case 0x3d:
    FUN_00387014();
    puVar2[4] = puVar2[4] + 1;
    temp_v8 = scrRunOpcodesStub(puVar2[0x27d]);
    if (temp_v8 != 2) {
      return 0;
    }
    lmapApplyMapAndArea();
    sub68OwnerCall4();
    puVar19 = g_lmapMainState;
    if (g_lmapMainState != (unsigned int *)0x0) {
      FUN_00483acc(g_lmapMainState + 0x3d);
      stateSetterSetFromBase(puVar19 + 0x3d,puVar19[0x10] - 100,puVar19[0x12]);
      fieldBuildAreaPlacementList(puVar19 + 0x3d);
    }
    sub68OwnerCall3();
    FUN_002df914();
    temp_v8 = 0xd;
    DAT_005f1614 = '\0';
    puVar2[3] = temp_v8;
    puVar2[4] = 0;
    break;
  case 0x3e:
    temp_v8 = FUN_002e07f4();
    if ((temp_v8 != 0) && (temp_v8 = naviMainUpdateWidget(), temp_v8 == 0)) {
      DAT_005f1aca = 1;
      FUN_00387014();
      mapPlaceSet(0xffffffff,0xffffffff);
      DAT_005f1658 = 0;
      temp_v22 = tableGroupFindEntryIndex(puVar2[0x27b],0x27b018);
      puVar2[0x279] = temp_v22;
      FUN_001695a0();
      scrScriptProcessStartEntry(puVar2[0x27d],puVar2[0x279]);
      puVar2[3] = 0x3d;
      puVar2[4] = 0;
    }
    break;
  case 0x3f:
    *(unsigned char *)(puVar2 + 0x276) = 0;
    FUN_001695a0();
    FUN_001681c4();
    temp_v22 = 0x27b030;
    asdLoadFileSyncDefault();
    puVar2[0x28f] = temp_v22;
    temp_v22 = 0x27b044;
    asdLoadFileSyncDefault();
    puVar2[0x290] = temp_v22;
    temp_v8 = puVar2[0x28f];
    FUN_00275bc8(temp_v8,temp_v22);
    puVar2[0x291] = temp_v8;
    *(unsigned int *)(temp_v8 + 0x108) = 3;
    temp_v22 = tableGroupFindEntryIndex(puVar2[0x28f],0x27b05c);
    scrScriptProcessStartEntry(puVar2[0x291],temp_v22);
    FUN_00387014();
    puVar2[3] = puVar2[3] + 1;
    puVar2[4] = 0;
    break;
  case 0x40:
    FUN_00387014();
    temp_v8 = scrRunOpcodesStub(puVar2[0x291]);
    if (temp_v8 == 2) {
      scrScriptProcessDestroy(puVar2[0x291]);
      puVar2[0x291] = 0;
      asdMemFree(puVar2[0x28f]);
      puVar2[0x28f] = 0;
      asdMemFree(puVar2[0x290]);
      puVar2[0x290] = 0;
      uiPlayGatedActionFeedback();
      DAT_005f1614 = '\0';
      puVar2[3] = 0xd;
      puVar2[4] = 0;
    }
    break;
  case 0x41:
    lmapSnapshotTransitionState();
    mapPlaceSet(0xffffffff,0xffffffff);
    puVar19 = g_lmapMainState;
    FUN_001695a0();
    textFormatBuffer(&uStack_b0,0x27b440,puVar19[0x281],puVar19[0x281]);
    puVar10 = &uStack_b0;
    asdLoadFileSyncDefault();
    puVar19[0x28b] = (unsigned int)puVar10;
    textFormatBuffer(&uStack_b0,0x27b458,puVar19[0x281],puVar19[0x281]);
    puVar10 = &uStack_b0;
    asdLoadFileSyncDefault();
    puVar19[0x28c] = (unsigned int)puVar10;
    temp_v8 = puVar19[0x28b];
    FUN_00275bc8(temp_v8,puVar10);
    puVar19[0x28d] = temp_v8;
    *(unsigned int *)(temp_v8 + 0x108) = 2;
    scrScriptProcessGetEntry(puVar19[0x28d],puVar19[0x28a]);
    puVar19[0x28e] = 0;
    scrScriptProcessStartEntry(puVar19[0x28d],puVar19[0x28a],puVar19[0x281]);
    DAT_005f1614 = '\x01';
    DAT_005f1658 = 0;
    temp_v8 = puVar2[3];
    temp_v8 = temp_v8 + 1;
    puVar2[3] = temp_v8;
    puVar2[4] = 0;
    break;
  case 0x42:
    temp_v8 = FUN_002dfa18();
    if (temp_v8 != 0) {
      temp_v23 = DAT_005f1658 == 0;
      if (!temp_v23) {
        puVar2[4] = 0;
        puVar2[3] = 0x6e;
        *(unsigned char *)((int)puVar2 + 10) = 1;
      }
      else {
        puVar2[3] = 0x6e;
        puVar2[4] = 0;
      }
      *(unsigned char *)((int)puVar2 + 9) = temp_v23;
    }
    break;
  case 0x43:
    uStack_b0 = 0;
    uStack_ac = DAT_005f163c;
    uStack_74 = DAT_005f16b0;
    uStack_70 = DAT_005f16b4;
    fStack_6c = DAT_005f16b8;
    uStack_68 = DAT_005f16bc;
    FUN_002941c8(&uStack_b0,0x84);
    DAT_005f185b = 1;
    puVar2[3] = puVar2[3] + 1;
    puVar2[4] = 0;
    break;
  case 0x44:
    FUN_002237a0();
    temp_v8 = mapDepartIsRunning();
    if (temp_v8 != 0) {
      return 0;
    }
    if (g_mapSelection == -1) {
      temp_v8 = gameFlagIsSet(0x8d);
      if ((temp_v8 != 0) && (temp_v8 = gameFlagIsSet(0xc2), temp_v8 == 0)) {
        DAT_005f1614 = 1;
        DAT_005f161c = 1;
        puVar2[3] = 0x45;
        puVar2[4] = 0;
        return 0;
      }
      uiPlayGatedActionFeedback();
      DAT_005f185b = 0;
      DAT_005f185a = 1;
      DAT_005f1859 = 1;
      DAT_005f1614 = '\0';
      puVar2[3] = 0xd;
      puVar2[4] = 0;
      break;
    }
    if (DAT_005f16e0 < 99) {
      sysPlayVoice(DAT_005f16e0 + 0x10000d6);
    }
    temp_v8 = g_lmapScene;
    *(short *)(temp_v5 + 0x32) = (short)(int)*(float *)(g_lmapScene + 0x1c);
    *(short *)(temp_v5 + 0x34) = (short)(int)*(float *)(temp_v8 + 0x20);
    *(short *)(temp_v5 + 0x36) = (short)(int)*(float *)(temp_v8 + 0x24);
    temp_v4 = *(short *)(temp_v5 + 0x28);
    if (temp_v4 != 1) {
      if (temp_v4 == 2) {
        temp_v8 = 0;
        FUN_00376fb8(temp_v8);
        temp_v8 = 0x6d;
        puVar2[3] = temp_v8;
        puVar2[4] = 0;
        break;
      }
      if (temp_v4 == 3) {
        FUN_00376fb8(0);
      }
    }
    else {
      temp_v8 = dataTable2FType0GetEntry((int)*(short *)(temp_v5 + 0x2a));
      temp_v8 = (int)*(short *)(temp_v8 + 8);
      FUN_00376fb8(temp_v8);
    }
    temp_v8 = 0x6d;
    puVar2[3] = temp_v8;
    puVar2[4] = 0;
    break;
  case 0x45:
    DAT_005f172b = '\0';
    DAT_005f1614 = '\x01';
    puVar2[3] = 0x1f;
    puVar2[4] = 0;
    DAT_005f1658 = 500;
    puVar16 = (unsigned char *)0x27b474;
    textFormatBuffer(&DAT_005f1660,puVar16);
    break;
  case 0x46:
    temp_v2 = 0xdd;
    sysPlaySe();
    *(unsigned char *)(puVar2 + 0x27a) = 0;
    FUN_00249dec();
    *(unsigned char *)(puVar2 + 0x27a) = temp_v2;
    FUN_0036a434(puVar2);
    FUN_0036aa04(puVar2);
    FUN_00297c3c();
    DAT_005f1859 = 0;
    DAT_005f185a = 0;
    puVar2[3] = puVar2[3] + 1;
    puVar2[4] = 0;
    break;
  case 0x47:
    *(unsigned char *)(puVar2 + 0x27a) = 0;
    FUN_00249dec();
    *(char *)(puVar2 + 0x27a) = (char)temp_v6;
    FUN_0036a434(puVar2);
    FUN_0036aa04(puVar2);
    FUN_00297c3c();
    temp_v8 = engineHasActiveRecord();
    if (temp_v8 == 0) {
      puVar19 = &DAT_005f16fc;
      if (DAT_005f1768 == '\0') {
        puVar19 = (unsigned int *)(unsigned int)DAT_005f1769;
      }
      if (!(DAT_005f1768 == '\0' && puVar19 == (unsigned int *)0x0)) {
        FUN_001681c4();
        temp_v5 = 0;
        temp_v8 = 0;
        do {
          temp_v6 = (&DAT_005f176c)[temp_v8];
          if (temp_v6 != 0) {
            FUN_0015f858(temp_v6,1);
            FUN_001654f0();
            FUN_003180c4(temp_v5,temp_v6);
            temp_v5 = temp_v5 + 1;
          }
          temp_v8 = temp_v8 + 1;
        } while (temp_v8 < 2);
        FUN_001695a0();
        if (temp_v5 >= 2) {
          temp_v22 = tableGroupFindEntryIndex(puVar2[0x27b],0x27b82c);
          puVar2[0x279] = temp_v22;
        }
        else {
          temp_v22 = tableGroupFindEntryIndex(puVar2[0x27b],0x27b840);
          puVar2[0x279] = temp_v22;
        }
        scrScriptProcessStartEntry(puVar2[0x27d],temp_v22);
        puVar2[3] = 0x48;
        puVar2[4] = 0;
      }
      else {
        FUN_003a2278(0);
        DAT_005f1859 = 1;
        DAT_005f185a = 1;
        DAT_005f1614 = '\0';
        lmapApplyMapAndArea();
        puVar2[3] = 0xd;
        puVar2[4] = 0;
      }
    }
    break;
  case 0x48:
    FUN_00249dec();
    *(char *)(puVar2 + 0x27a) = (char)temp_v6;
    FUN_0036a434(puVar2);
    FUN_0036aa04(puVar2);
    FUN_00297c3c();
    puVar2[4] = puVar2[4] + 1;
    temp_v8 = scrRunOpcodesStub(puVar2[0x27d]);
    if (temp_v8 == 2) {
      DAT_005f1768 = '\0';
      DAT_005f1769 = 0;
      DAT_005f176c = 0;
      DAT_005f1770 = 0;
      FUN_003a2278(0);
      DAT_005f1859 = 1;
      DAT_005f185a = 1;
      DAT_005f1614 = '\0';
      lmapApplyMapAndArea();
      puVar2[3] = 0xd;
      puVar2[4] = 0;
    }
    break;
  case 0x49:
    DAT_005f1614 = '\x01';
    DAT_005f1859 = 0;
    DAT_005f185a = 0;
    if (g_lmapMainState[0x33] != 8) {
      g_lmapMainState[0x33] = 8;
      puVar19[0x34] = 0;
      puVar19[0x35] = 0;
    }
    FUN_00387014();
    puVar2[3] = puVar2[3] + 1;
    puVar2[4] = 0;
    break;
  case 0x4a:
    FUN_00387014();
    if (puVar2[0x33] == 1) {
      gameFlagSetValue(0x529,1);
      DAT_005f1859 = 1;
      DAT_005f185a = 1;
      DAT_005f1614 = '\0';
      puVar2[3] = 0xd;
      puVar2[4] = 0;
    }
    break;
  case 0x4b:
    FUN_0033f9f4();
    FUN_0036a434(puVar2);
    temp_v8 = scrRunOpcodesStub(puVar2[0x280]);
    if (temp_v8 != 2) {
      return 0;
    }
    temp_v8 = messageGetChoiceResult();
    if (temp_v8 == 0) {
      DAT_005f1614 = 1;
      DAT_005f185a = 0;
      puVar2[3] = 0x4c;
      puVar2[4] = 0;
      return 0;
    }
    uiPlayGatedActionFeedback();
    DAT_005f1614 = '\0';
    DAT_005f185a = 1;
    puVar2[3] = 0xd;
    puVar2[4] = 0;
    break;
  case 0x4c:
    if (puVar2[4] == 0) {
      *(unsigned char *)((int)puVar2 + 0xb) = 1;
      puVar2[6] = 2;
      puVar2[0xe] = 0;
      puVar2[0xf] = 0;
      temp_v22 = *(unsigned int *)(g_lmapScene + 0x24);
      temp_v9 = *(unsigned int *)(g_lmapScene + 0x1c);
      temp_v24 = *(unsigned int *)(g_lmapScene + 0x20);
      puVar2[8] = temp_v9;
      puVar2[9] = temp_v24;
      puVar2[10] = temp_v22;
      puVar2[0xb] = temp_v9;
      puVar2[0xc] = temp_v24;
      puVar2[0xd] = temp_v22;
      puVar2[0xc] = 0x44480000;
      puVar2[0x37] = 0;
      *(unsigned char *)(puVar2 + 0x38) = 1;
      puVar2[0x12] = 99;
      DAT_005f1600 = 99;
    }
    if (*(float *)(g_lmapScene + 0x20) < (float)puVar2[0xc]) {
      *(float *)(g_lmapScene + 0x20) = *(float *)(g_lmapScene + 0x20) + 20.0f;
    }
    if (puVar2[4] == 0xf) {
      slotSetRequest(0,0xf,0xffffffff);
      slotSetRequest(1,0xf,0xff);
    }
    FUN_00387014();
    temp_v8 = puVar2[4];
    puVar2[4] = temp_v8 + 1;
    if (temp_v8 + 1 < 0x15) {
      return 0;
    }
    temp_v8 = FUN_002e07f4();
    if (temp_v8 == 0) {
      return 0;
    }
    uiPlayGatedActionFeedback();
    temp_v8 = puVar2[3] + 1;
    puVar2[3] = temp_v8;
    puVar2[4] = 0;
    break;
  case 0x4d:
    resourceOwnerReleaseAndReset(g_handleRegistry);
    FUN_00244ac8();
    FUN_00227a70();
    temp_v5 = 0;
    temp_v8 = temp_v11;
    do {
      if (puVar2[temp_v5 + 0x295] != 0) {
        ptrListRemoveClearOwner(g_handleRegistry,*(unsigned int *)(puVar2[temp_v5 + 0x295] + 4));
        temp_v8 = temp_v12;
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 0x20);
    if (puVar2[0x2b9] != 0) {
      for (temp_v10 = 0; temp_v10 < *(unsigned int *)(*(int *)(puVar2[0x2b9] + 8) + 0x10); temp_v10 = temp_v10 + 1)
      {
        FUN_00399290(temp_v10,0);
        temp_v8 = temp_v13;
        if (*(char *)(puVar2 + temp_v10 * 0x22 + 0x2de) != '\0') {
          temp_v22 = *(unsigned int *)(puVar2[0x2b9] + 8);
          FUN_0040619c(temp_v22,temp_v10);
          ptrListRemoveClearOwner(g_handleRegistry,temp_v22);
          temp_v8 = temp_v14;
        }
      }
    }
    piVar12 = (int *)(puVar2 + 0x13be);
    if (*piVar12 != 0) {
      for (temp_v10 = 0; temp_v10 < *(unsigned int *)(*(int *)(*piVar12 + 8) + 0x10); temp_v10 = temp_v10 + 1) {
        FUN_003b5c54(temp_v10,0);
        temp_v8 = temp_v15;
        if (*(char *)(puVar2 + temp_v10 * 0x22 + 0x13e1) != '\0') {
          temp_v22 = *(unsigned int *)(*piVar12 + 8);
          FUN_0040619c(temp_v22,temp_v10);
          ptrListRemoveClearOwner(g_handleRegistry,temp_v22);
          temp_v8 = temp_v16;
        }
      }
    }
    temp_v5 = puVar2[0x2f];
    if (temp_v5 != 0) {
      temp_v8 = *(int *)(temp_v5 + 4);
    }
    if (temp_v5 != 0 && temp_v8 != 0) {
      ptrListRemoveClearOwner(g_handleRegistry);
      temp_v8 = temp_v17;
    }
    temp_v5 = puVar2[0x36];
    if (temp_v5 != 0) {
      temp_v8 = *(int *)(temp_v5 + 4);
    }
    if (temp_v5 != 0 && temp_v8 != 0) {
      ptrListRemoveClearOwner(g_handleRegistry);
      temp_v8 = temp_v18;
    }
    temp_v5 = puVar2[0x3b];
    if (temp_v5 != 0) {
      temp_v8 = *(int *)(temp_v5 + 4);
    }
    if (temp_v5 != 0 && temp_v8 != 0) {
      ptrListRemoveClearOwner(g_handleRegistry);
    }
    resourceRemoveSlotOwners();
    engineRecordsUnregisterHandles();
    mapIfUnregisterOwnedResources();
    mapGimicClearEntryChildren();
    temp_v8 = puVar2[3] + 1;
    puVar2[3] = temp_v8;
    puVar2[4] = 0;
    break;
  case 0x4e:
    temp_v8 = puVar2[4] + 1;
    if (temp_v8 == 2) {
      unaff_r7 = 0;
      unaff_r5 = unaff_r7;
    }
    puVar2[4] = temp_v8;
    if (temp_v8 != 2) {
      return 0;
    }
    do {
      if ((int *)puVar2[unaff_r5 + 0x295] != (int *)0x0) {
        (**(romwright_code **)(*(int *)puVar2[unaff_r5 + 0x295] + 4))();
        puVar2[unaff_r5 + 0x295] = unaff_r7;
      }
      unaff_r5 = unaff_r5 + 1;
    } while (unaff_r5 < 0x20);
    *(char *)(puVar2 + 0x2b5) = (char)unaff_r7;
    if ((int *)puVar2[0x2b9] != (int *)0x0) {
      (**(romwright_code **)(*(int *)puVar2[0x2b9] + 4))();
      puVar2[0x2b9] = unaff_r7;
    }
    piVar12 = (int *)puVar2[0x13be];
    if (piVar12 != (int *)0x0) {
      (**(romwright_code **)(*piVar12 + 4))();
      puVar2[0x13be] = unaff_r7;
    }
    if ((int *)puVar2[0x2f] != (int *)0x0) {
      (**(romwright_code **)(*(int *)puVar2[0x2f] + 4))();
      puVar2[0x2f] = unaff_r7;
    }
    if ((int *)puVar2[0x36] != (int *)0x0) {
      (**(romwright_code **)(*(int *)puVar2[0x36] + 4))();
      puVar2[0x36] = unaff_r7;
    }
    FUN_001927c0(puVar2 + 0x3d);
    resourceSlotsRelease();
    temp_v22 = FUN_002ba30c();
    mapReleaseTableTexture(temp_v22);
    temp_v8 = puVar2[3] + 1;
    puVar2[3] = temp_v8;
    break;
  case 0x4f:
    uRam005f1621 = 1;
    DAT_005f1622 = 1;
    temp_v8 = puVar2[3];
    temp_v5 = 0;
    puVar2[3] = temp_v8 + 1;
    puVar2[4] = temp_v5;
    break;
  case 0x50:
    textFormatBuffer(temp_v27,0x27bf80,puVar2[0x10] - 100);
    asdEnvResetModelBank(temp_v27,0);
    puVar2[3] = puVar2[3] + 1;
    puVar2[4] = 0;
    break;
  case 0x51:
    if (g_lmapMainState[0x10] == 100) {
      return 0;
    }
    textFormatBuffer(temp_v27,0x276d5c,puVar2[0x10] - 100,puVar2[0x10] - 100);
    asdLoadFileAsyncWrap(temp_v27,puVar2 + 0x2b7,1,0x80);
    textFormatBuffer(temp_v27,0x276dc4);
    asdLoadFileAsyncWrap(temp_v27,puVar2 + 0x13bd,1,0x80);
    temp_v10 = 0;
    if (0 < *(int *)(puVar2[0x10] * 4 + 0x5800ac)) {
      do {
        if (((puVar2[0x10] != 0x65) || (temp_v10 != 3 && temp_v10 != 0)) &&
           (uStack_138 = temp_v10, textFormatBuffer(temp_v27,0x276e04,puVar2[0x10] - 100),
           puVar19 = g_lmapMainState, g_lmapMainState != (unsigned int *)0x0)) {
          temp_v8 = 0x20;
          FUN_00178b04(0x20,"c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\lmapMain.cpp",0x2a4b);
          temp_v22 = 0;
          if (temp_v8 != 0) {
            temp_v22 = modelListInit();
          }
          puVar19[*(unsigned char *)(puVar19 + 0x2b5) + 0x295] = temp_v22;
          FUN_001cd3ec();
          *(char *)(puVar19 + 0x2b5) = *(char *)(puVar19 + 0x2b5) + '\x01';
        }
        temp_v10 = temp_v10 + 1;
      } while ((int)temp_v10 < *(int *)(puVar2[0x10] * 4 + 0x5800ac));
    }
    temp_v8 = puVar2[3] + 1;
    puVar2[3] = temp_v8;
    puVar2[4] = 0;
    break;
  case 0x52:
    temp_v8 = g_lmapMainState[0x10];
    temp_v23 = temp_v8 == 100;
    if (!temp_v23) {
      temp_v8 = puVar2[0x2b7];
    }
    if (temp_v23 || temp_v8 == 0) {
      return 0;
    }
    if (puVar2[0x13bd] == 0) {
      return 0;
    }
    if (g_lmapMainState != (unsigned int *)0x0) {
      temp_v8 = 0;
      do {
        if ((puVar19[temp_v8 + 0x295] != 0) && (temp_v5 = FUN_0040ab8c(), temp_v5 == 0)) {
          return 0;
        }
        temp_v8 = temp_v8 + 1;
      } while (temp_v8 < 0x20);
    }
    FUN_00379d58();
    FUN_003a3b88();
    lmapInitializeActorHandles();
    temp_v8 = puVar2[3] + 1;
    puVar2[3] = temp_v8;
    break;
  case 0x53:
    temp_v6 = battleValuesSet(puVar2[0x10],puVar2[0x12]);
    if (temp_v6 == 0) {
      return 0;
    }
    puVar2[3] = puVar2[3] + 1;
    break;
  case 0x54:
  case 0x61:
  case 0x6a:
    FUN_0024ad50();
    FUN_00314b7c(puVar2[0x10],0);
    puVar2[3] = puVar2[3] + 1;
    break;
  case 0x55:
    FUN_00356674();
    if (temp_v6 == 0) {
      return 0;
    }
    puVar2[3] = puVar2[3] + 1;
    break;
  case 0x56:
    mapIfInitializeSceneControllers();
    FUN_002747dc();
    FUN_002a2e98(puVar2[0x10],puVar2[0x12]);
    FUN_0020f12c(puVar2[0x10],puVar2[0x12]);
    mapLoadSkyTable(puVar2[0x10]);
    mapEnvironmentSelectPreset(1);
    puVar2[3] = puVar2[3] + 1;
    puVar2[4] = 0;
    break;
  case 0x57:
    FUN_003d502c(0);
    if (puVar2[0x2b9] != 0) {
      for (temp_v10 = 0; temp_v10 < *(unsigned int *)(*(int *)(puVar2[0x2b9] + 8) + 0x10); temp_v10 = temp_v10 + 1)
      {
        FUN_00399290(temp_v10,0);
      }
      FUN_003699e4();
    }
    if (puVar2[0x13be] != 0) {
      for (temp_v10 = 0; temp_v10 < *(unsigned int *)(*(int *)(puVar2[0x13be] + 8) + 0x10); temp_v10 = temp_v10 + 1)
      {
        FUN_003b5c54(temp_v10,0);
      }
    }
    *(unsigned char *)((int)puVar2 + 0xb) = 1;
    puVar2[6] = 2;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
    puVar2[0x37] = 0x3f800000;
    *(unsigned char *)(puVar2 + 0x38) = 1;
    temp_v25 = DAT_005f16b8;
    temp_v9 = DAT_005f16b4;
    temp_v22 = DAT_005f16b0;
    temp_v8 = g_lmapScene;
    puVar19 = (unsigned int *)(g_lmapScene + 0x20);
    *(unsigned int *)(g_lmapScene + 0x1c) = DAT_005f16b0;
    *puVar19 = temp_v9;
    *(float *)(temp_v8 + 0x24) = temp_v25;
    *(unsigned int *)(temp_v8 + 0x20) = 0x44480000;
    temp_v25 = temp_v25 + 250.0f;
    *(float *)(temp_v8 + 0x24) = temp_v25;
    *(unsigned int *)(temp_v8 + 0x28) = temp_v22;
    *(unsigned int *)(temp_v8 + 0x2c) = *(unsigned int *)(temp_v8 + 0x20);
    *(float *)(temp_v8 + 0x30) = temp_v25;
    *(unsigned int *)(temp_v8 + 0x34) = temp_v22;
    *(unsigned int *)(temp_v8 + 0x38) = *(unsigned int *)(temp_v8 + 0x20);
    *(float *)(temp_v8 + 0x3c) = temp_v25;
    *(unsigned int *)(temp_v8 + 0x4c) = 0;
    *(unsigned int *)(temp_v8 + 0x50) = 0;
    puVar2[0x14] = 0x43340000;
    puVar2[0x24] = 0x43480000;
    *(unsigned char *)((int)puVar2 + 0xe1) = 0;
    puVar2[0x39] = 0x38;
    puVar2[0x3a] = 0x42200000;
    navigationSetArguments(puVar2[0x10],puVar2[0x12],DAT_005f1604);
    uRam005f1621 = 0;
    DAT_005f1622 = 0;
    FUN_00387014();
    FUN_0013cab8(0,0xf,0xffffffff);
    FUN_0013cab8(1,0xf,0xff);
    puVar2[4] = 0;
    puVar2[3] = puVar2[3] + 1;
    break;
  case 0x58:
    FUN_00387014();
    temp_v8 = FUN_002e07f4();
    if (temp_v8 == 0) {
      return 0;
    }
    DAT_005f1614 = '\0';
    DAT_005f185a = 1;
    puVar2[3] = 0xd;
    puVar2[4] = 0;
    break;
  case 0x59:
    if (puVar2[4] == 0) {
      DAT_005f1614 = 1;
      DAT_005f185a = 0;
      puVar2[0x12] = DAT_005f16a4;
      puVar19 = g_lmapMainState;
      DAT_005f1600 = temp_v8;
      FUN_00227a70();
      FUN_002a2e98(puVar19[0x10],puVar19[0x12]);
      temp_v26 = 0x40000000;
      puVar19[0x37] = 0x40000000;
      *(unsigned char *)(puVar19 + 0x38) = 1;
      DAT_005f1614 = 1;
      DAT_005f185a = 0;
      temp_v24 = *(unsigned int *)(g_lmapScene + 0x1c);
      temp_v22 = *(unsigned int *)(g_lmapScene + 0x20);
      temp_v9 = *(unsigned int *)(g_lmapScene + 0x24);
      puVar19[8] = temp_v24;
      puVar19[9] = temp_v22;
      puVar19[10] = temp_v9;
      puVar19[0xb] = temp_v24;
      puVar19[0xc] = temp_v22;
      puVar19[0xd] = temp_v9;
      mapProjectPointHeightToCollision(puVar19 + 0xb);
      puVar19[6] = 4;
      puVar19[7] = 0;
      puVar2[0x37] = temp_v26;
      *(unsigned char *)(puVar2 + 0x38) = 1;
      DAT_005f1614 = '\x01';
      DAT_005f185a = 0;
      temp_v22 = *(unsigned int *)(g_lmapScene + 0x20);
      temp_v9 = *(unsigned int *)(g_lmapScene + 0x24);
      puVar2[8] = *(unsigned int *)(g_lmapScene + 0x1c);
      puVar2[9] = temp_v22;
      puVar2[10] = temp_v9;
      temp_v25 = DAT_005f16b8;
      temp_v22 = DAT_005f16b4;
      puVar2[0xb] = DAT_005f16b0;
      puVar2[0xc] = temp_v22;
      *(float *)&puVar2[0xd] = temp_v25;
      puVar2[6] = 4;
      puVar2[7] = 0;
    }
    if ((int)*(float *)(g_lmapScene + 0x20) >= 0x42c80001) {
      *(float *)(g_lmapScene + 0x20) = *(float *)(g_lmapScene + 0x20) - 20.0f;
    }
    if (puVar2[4] == 0xf) {
      slotSetRequest(0,0xf,0xff);
      slotSetRequest(1,0xf,0xff);
    }
    FUN_00387014();
    temp_v8 = puVar2[4];
    puVar2[4] = temp_v8 + 1;
    if (temp_v8 + 1 < 0x15) {
      return 0;
    }
    temp_v8 = FUN_002e07f4();
    if (temp_v8 == 0) {
      return 0;
    }
    temp_v8 = puVar2[3] + 1;
    puVar2[3] = temp_v8;
    puVar2[4] = 0;
    break;
  case 0x5a:
    resourceOwnerReleaseAndReset(g_handleRegistry);
    FUN_00244ac8();
    FUN_00227a70();
    temp_v8 = 0;
    do {
      if (puVar2[temp_v8 + 0x295] != 0) {
        ptrListRemoveClearOwner(g_handleRegistry,*(unsigned int *)(puVar2[temp_v8 + 0x295] + 4));
      }
      temp_v8 = temp_v8 + 1;
    } while (temp_v8 < 0x20);
    if (puVar2[0x2b9] != 0) {
      for (temp_v10 = 0; temp_v10 < *(unsigned int *)(*(int *)(puVar2[0x2b9] + 8) + 0x10); temp_v10 = temp_v10 + 1)
      {
        FUN_00399290(temp_v10,0);
        if (*(char *)(puVar2 + temp_v10 * 0x22 + 0x2de) != '\0') {
          temp_v22 = *(unsigned int *)(puVar2[0x2b9] + 8);
          FUN_0040619c(temp_v22,temp_v10);
          ptrListRemoveClearOwner(g_handleRegistry,temp_v22);
        }
      }
    }
    piVar12 = (int *)(puVar2 + 0x13be);
    if (*piVar12 != 0) {
      for (temp_v10 = 0; temp_v10 < *(unsigned int *)(*(int *)(*piVar12 + 8) + 0x10); temp_v10 = temp_v10 + 1) {
        FUN_003b5c54(temp_v10,0);
        if (*(char *)(puVar2 + temp_v10 * 0x22 + 0x13e1) != '\0') {
          temp_v22 = *(unsigned int *)(*piVar12 + 8);
          FUN_0040619c(temp_v22,temp_v10);
          ptrListRemoveClearOwner(g_handleRegistry,temp_v22);
        }
      }
    }
    resourceRemoveSlotOwners();
    engineRecordsUnregisterHandles();
    mapIfUnregisterOwnedResources();
    mapGimicClearEntryChildren();
    puVar2[3] = puVar2[3] + 1;
    puVar2[4] = 0;
    break;
  case 0x5b:
    temp_v8 = puVar2[4] + 1;
    if (temp_v8 == 2) {
      unaff_r7 = 0;
      unaff_r5 = unaff_r7;
    }
    puVar2[4] = temp_v8;
    if (temp_v8 != 2) {
      return 0;
    }
    do {
      if ((int *)puVar2[unaff_r5 + 0x295] != (int *)0x0) {
        (**(romwright_code **)(*(int *)puVar2[unaff_r5 + 0x295] + 4))();
        puVar2[unaff_r5 + 0x295] = unaff_r7;
      }
      unaff_r5 = unaff_r5 + 1;
    } while (unaff_r5 < 0x20);
    *(char *)(puVar2 + 0x2b5) = (char)unaff_r7;
    if ((int *)puVar2[0x2b9] != (int *)0x0) {
      (**(romwright_code **)(*(int *)puVar2[0x2b9] + 4))();
      puVar2[0x2b9] = unaff_r7;
    }
    piVar12 = (int *)puVar2[0x13be];
    if (piVar12 != (int *)0x0) {
      (**(romwright_code **)(*piVar12 + 4))();
      puVar2[0x13be] = unaff_r7;
    }
    resourceSlotsRelease();
    FUN_002ba30c();
    temp_v22 = FUN_00294854();
    mapReleaseTableTexture(temp_v22);
    temp_v8 = puVar2[3] + 1;
    puVar2[3] = temp_v8;
    break;
  case 0x5c:
    uRam005f1621 = 1;
    DAT_005f1622 = 1;
    puVar2[3] = puVar2[3] + 1;
    puVar2[4] = 0;
    break;
  case 0x5d:
    textFormatBuffer(temp_v27,0x27bf80,puVar2[0x10] - 100);
    asdEnvResetModelBank(temp_v27,0);
    FUN_0033e014(g_gameState,DAT_005f1600);
    puVar2[3] = puVar2[3] + 1;
    puVar2[4] = 0;
    break;
  case 0x5e:
    if (g_lmapMainState[0x10] == 100) {
      return 0;
    }
    textFormatBuffer(temp_v27,0x276d5c,puVar2[0x10] - 100,puVar2[0x10] - 100);
    asdLoadFileAsyncWrap(temp_v27,puVar2 + 0x2b7,1,0x80);
    textFormatBuffer(temp_v27,0x27c89c);
    asdLoadFileAsyncWrap(temp_v27,puVar2 + 0x13bd,1,0x80);
    temp_v10 = 0;
    if (0 < *(int *)(puVar2[0x10] * 4 + 0x5800ac)) {
      do {
        if (((puVar2[0x10] != 0x65) || (temp_v10 != 3 && temp_v10 != 0)) &&
           (uStack_138 = temp_v10, textFormatBuffer(temp_v27,0x276e04,puVar2[0x10] - 100),
           puVar19 = g_lmapMainState, g_lmapMainState != (unsigned int *)0x0)) {
          temp_v8 = 0x20;
          FUN_00178b04(0x20,"c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\lmapMain.cpp",0x2a4b);
          temp_v22 = 0;
          if (temp_v8 != 0) {
            temp_v22 = modelListInit();
          }
          puVar19[*(unsigned char *)(puVar19 + 0x2b5) + 0x295] = temp_v22;
          FUN_001cd3ec();
          *(char *)(puVar19 + 0x2b5) = *(char *)(puVar19 + 0x2b5) + '\x01';
        }
        temp_v10 = temp_v10 + 1;
      } while ((int)temp_v10 < *(int *)(puVar2[0x10] * 4 + 0x5800ac));
    }
    temp_v8 = puVar2[3] + 1;
    puVar2[3] = temp_v8;
    puVar2[4] = 0;
    break;
  case 0x5f:
    temp_v8 = g_lmapMainState[0x10];
    temp_v23 = temp_v8 == 100;
    if (!temp_v23) {
      temp_v8 = puVar2[0x2b7];
    }
    if (temp_v23 || temp_v8 == 0) {
      return 0;
    }
    if (puVar2[0x13bd] == 0) {
      return 0;
    }
    if (g_lmapMainState != (unsigned int *)0x0) {
      temp_v8 = 0;
      do {
        if ((puVar19[temp_v8 + 0x295] != 0) && (temp_v5 = FUN_0040ab8c(), temp_v5 == 0)) {
          return 0;
        }
        temp_v8 = temp_v8 + 1;
      } while (temp_v8 < 0x20);
    }
    FUN_00379d58();
    FUN_003a3b88();
    lmapInitializeActorHandles();
    temp_v8 = puVar2[3] + 1;
    puVar2[3] = temp_v8;
    break;
  case 0x60:
    temp_v6 = battleValuesSet(puVar2[0x10],puVar2[0x12]);
    if (temp_v6 == 0) {
      return 0;
    }
    puVar2[3] = puVar2[3] + 1;
    break;
  case 0x62:
    FUN_00356674();
    if (temp_v6 == 0) {
      return 0;
    }
    puVar2[3] = puVar2[3] + 1;
    break;
  case 99:
    mapIfInitializeSceneControllers();
    stateSetterSetFromBase(puVar2 + 0x3d,puVar2[0x10] - 100,puVar2[0x12]);
    lmapEnemyCtrlLoadModels(puVar2 + 0x3d);
    if (g_lmapMainState[0x10] != 100) {
      temp_v10 = puVar2[0x3d] & 0xfffffffe;
    }
    else {
      temp_v10 = puVar2[0x3d] | 1;
    }
    puVar2[0x3d] = temp_v10;
    FUN_002df914();
    puVar19 = g_lmapMainState;
    temp_v22 = puVar2[0x10];
    FUN_002747dc();
    FUN_00364740(temp_v22,puVar19[0x12]);
    FUN_002ddea0();
    FUN_002a2e98(puVar2[0x10],puVar2[0x12]);
    FUN_0020f12c(puVar2[0x10],puVar2[0x12]);
    mapLoadSkyTable(puVar2[0x10]);
    mapEnvironmentSelectPreset(1);
    navigationSetArguments(puVar2[0x10],puVar2[0x12],DAT_005f1604);
    puVar2[4] = 0;
    puVar2[3] = puVar2[3] + 1;
    break;
  case 100:
    fieldBuildAreaPlacementList(puVar2 + 0x3d);
    FUN_003d502c(0);
    if (puVar2[0x2b9] != 0) {
      for (temp_v10 = 0; temp_v10 < *(unsigned int *)(*(int *)(puVar2[0x2b9] + 8) + 0x10); temp_v10 = temp_v10 + 1)
      {
        FUN_00399290(temp_v10,0);
      }
      FUN_003699e4();
    }
    if (puVar2[0x13be] != 0) {
      for (temp_v10 = 0; temp_v10 < *(unsigned int *)(*(int *)(puVar2[0x13be] + 8) + 0x10); temp_v10 = temp_v10 + 1)
      {
        FUN_003b5c54(temp_v10,0);
      }
    }
    puVar2[0x37] = 0x3f800000;
    *(unsigned char *)(puVar2 + 0x38) = 1;
    temp_v25 = DAT_005f16b8;
    temp_v9 = DAT_005f16b4;
    temp_v22 = DAT_005f16b0;
    temp_v8 = g_lmapScene;
    *(unsigned int *)(g_lmapScene + 0x1c) = DAT_005f16b0;
    *(unsigned int *)(temp_v8 + 0x20) = temp_v9;
    *(float *)(temp_v8 + 0x24) = temp_v25;
    *(unsigned int *)(temp_v8 + 0x28) = temp_v22;
    *(unsigned int *)(temp_v8 + 0x2c) = temp_v9;
    *(float *)(temp_v8 + 0x30) = temp_v25;
    *(unsigned int *)(temp_v8 + 0x34) = temp_v22;
    *(unsigned int *)(temp_v8 + 0x38) = temp_v9;
    *(float *)(temp_v8 + 0x3c) = temp_v25;
    *(unsigned int *)(temp_v8 + 0x4c) = 0x43340000;
    *(unsigned int *)(temp_v8 + 0x50) = 0x43340000;
    puVar2[0x14] = 0x43340000;
    puVar2[0x24] = 0;
    FUN_002df914();
    *(unsigned char *)((int)puVar2 + 0xb) = 0;
    uiPlayGatedActionFeedback();
    uRam005f1621 = 0;
    DAT_005f1622 = 0;
    mapIfClose();
    *(unsigned char *)((int)puVar2 + 0xe1) = 0;
    puVar2[0x39] = 0x38;
    puVar2[0x3a] = 0x42200000;
    FUN_00387014();
    FUN_0013cab8(0,0xf,0xff);
    FUN_0013cab8(1,0xf,0xff);
    puVar2[4] = 0;
    puVar2[3] = puVar2[3] + 1;
    break;
  case 0x65:
    FUN_00387014();
    temp_v8 = FUN_002e07f4();
    if (temp_v8 == 0) {
      return 0;
    }
    DAT_005f185a = 1;
    DAT_005f1859 = 1;
    DAT_005f1614 = '\0';
    puVar2[3] = 0xd;
    puVar2[4] = 0;
    break;
  case 0x66:
    if (puVar2[4] == 0) {
      if (g_lmapMainState[0x33] != 2) {
        g_lmapMainState[0x33] = 2;
        puVar19[0x34] = 0;
        puVar19[0x35] = 0;
        goto LAB_0027ca0c;
      }
    }
    else {
LAB_0027ca0c:
      if (puVar2[4] == 0x10) {
        slotSetRequest(0,10,0xff);
        slotSetRequest(1,10,0xff);
        naviMainRequestProcessing(8,0);
      }
    }
    FUN_003401a4(puVar2);
    FUN_0036aa04(puVar2);
    temp_v8 = puVar2[4];
    puVar2[4] = temp_v8 + 1;
    if (temp_v8 + 1 < 0x15) {
      return 0;
    }
    temp_v8 = FUN_002e07f4();
    if (temp_v8 == 0) {
      return 0;
    }
    uStack_134 = (unsigned int)DAT_005f172a;
    uStack_138 = (unsigned int)DAT_005f1729;
    naviMainSetFlagsAndActivate(DAT_005f1725,DAT_005f1726,DAT_005f1727,DAT_005f1728);
    fireEntriesMatchingPair(DAT_005f1725,DAT_005f1726);
    fireEntriesMatchingPair(DAT_005f1727,DAT_005f1728);
    fireEntriesMatchingPair(DAT_005f1729,DAT_005f172a);
    puVar2[4] = 0;
    temp_v8 = DAT_005f16a0;
    FUN_003b5714(DAT_005f16a0,DAT_005f16a4,DAT_005f16a8);
    if (temp_v8 != -1) {
      pcVar11 = (char *)dataTableGetRecord23();
      mapPlaceSet((int)*pcVar11,(int)pcVar11[1],pcVar11[2]);
    }
    if ((g_mapSelection < 200) && (g_mapSelection >= 100)) {
      temp_v8 = 0x67;
    }
    else {
      temp_v8 = 0x70;
    }
    puVar2[3] = temp_v8;
    break;
  case 0x67:
    engineRecordsUnregisterHandles();
    mapIfUnregisterOwnedResources();
    mapGimicClearEntryChildren();
    FUN_00227a70();
    g_gameState = g_mapSelection;
    puVar2[0x10] = g_mapSelection;
    DAT_005f1600 = DAT_005f1c9c;
    puVar2[0x12] = DAT_005f1c9c;
    FUN_003b5714(puVar2[0x10],puVar2[0x12],DAT_005f1ca0);
    temp_v5 = dataTableGetRecord23();
    temp_v8 = g_lmapScene;
    temp_v22 = VectorSignedToFloat((int)*(short *)(temp_v5 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
    puVar19 = (unsigned int *)(g_lmapScene + 0x28);
    *(unsigned int *)(g_lmapScene + 0x1c) = temp_v22;
    temp_v22 = VectorSignedToFloat((int)*(short *)(temp_v5 + 6),(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(temp_v8 + 0x20) = temp_v22;
    temp_v24 = VectorSignedToFloat((int)*(short *)(temp_v5 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(temp_v8 + 0x24) = temp_v24;
    temp_v22 = *(unsigned int *)(temp_v8 + 0x1c);
    temp_v9 = *(unsigned int *)(temp_v8 + 0x20);
    *(unsigned int *)(temp_v8 + 0x30) = temp_v24;
    *puVar19 = temp_v22;
    *(unsigned int *)(temp_v8 + 0x2c) = temp_v9;
    *(unsigned int *)(temp_v8 + 0x3c) = temp_v24;
    *(unsigned int *)(temp_v8 + 0x34) = temp_v22;
    *(unsigned int *)(temp_v8 + 0x38) = temp_v9;
    *(unsigned int *)(temp_v8 + 0x4c) = 0x43340000;
    *(unsigned int *)(temp_v8 + 0x50) = 0x43340000;
    puVar2[3] = puVar2[3] + 1;
    break;
  case 0x68:
    FUN_002ba30c();
    FUN_00294854();
    puVar2[3] = puVar2[3] + 1;
    break;
  case 0x69:
    FUN_002a2e98(puVar2[0x10],puVar2[0x12]);
    FUN_002df914();
    FUN_00483acc(puVar2 + 0x3d);
    stateSetterSetFromBase(puVar2 + 0x3d,puVar2[0x10] - 100,puVar2[0x12]);
    fieldBuildAreaPlacementList(puVar2 + 0x3d);
    puVar2[3] = puVar2[3] + 1;
    break;
  case 0x6b:
    FUN_00356674();
    if (temp_v6 == 0) {
      return 0;
    }
    puVar2[3] = puVar2[3] + 1;
    break;
  case 0x6c:
    temp_v8 = FUN_0013def0(0);
    if (temp_v8 == 3) {
      FUN_0013cab8(0,10,0xff);
    }
    temp_v8 = FUN_0013def0(1);
    if (temp_v8 == 3) {
      FUN_0013cab8(1,10,0xff);
    }
    mapIfSetMode1();
    naviMainUpdateSlider(0,8);
    puVar19 = g_lmapMainState;
    if (g_lmapMainState[0x33] != 3) {
      g_lmapMainState[0x34] = 0;
      puVar19[0x33] = 3;
      puVar19[0x35] = 0;
    }
    DAT_005f1614 = '\0';
    puVar2[3] = 0xd;
    puVar2[4] = 0;
    mapPlaceSet(0xffffffff,0xffffffff);
    break;
  case 0x6d:
    if ((puVar2[4] == 0) && (g_lmapMainState[0x33] != 2)) {
      g_lmapMainState[0x34] = 0;
      puVar19[0x33] = 2;
      puVar19[0x35] = 0;
    }
    FUN_0036a434(puVar2);
    FUN_003401a4(puVar2);
    FUN_0036aa04(puVar2);
    temp_v8 = puVar2[4];
    puVar2[4] = temp_v8 + 1;
    if (temp_v8 + 1 < 0x11) {
      return 0;
    }
    temp_v8 = 0x6e;
    puVar2[3] = temp_v8;
    puVar2[4] = 0;
    break;
  case 0x6e:
    if (puVar2[4] == 0) {
      slotSetRequest(0,10,0xff);
      slotSetRequest(1,10,0xff);
    }
    FUN_0036a434(puVar2);
    FUN_003401a4(puVar2);
    FUN_0036aa04(puVar2);
    puVar2[4] = puVar2[4] + 1;
    temp_v8 = FUN_002e07f4();
joined_r0x0027ce58:
    if (temp_v8 == 0) {
      return 0;
    }
    temp_v8 = 0x70;
    puVar2[3] = temp_v8;
    puVar2[4] = 0;
    break;
  case 0x6f:
    if (puVar2[4] == 0) {
      FUN_002e5924(4);
    }
    temp_v8 = puVar2[4];
    puVar2[4] = temp_v8 + 1;
    if (temp_v8 + 1 < 4) {
      return 0;
    }
    temp_v8 = 0x70;
    puVar2[3] = temp_v8;
    puVar2[4] = 0;
    break;
  case 0x70:
    FUN_002d22c0(0);
    messageStartIntroAnimation();
    dialogClose(1);
    resourceOwnerReleaseAndReset(g_handleRegistry);
    FUN_00244ac8();
    FUN_00227a70();
    temp_v8 = 0;
    do {
      if (puVar2[temp_v8 + 0x295] != 0) {
        ptrListRemoveClearOwner(g_handleRegistry,*(unsigned int *)(puVar2[temp_v8 + 0x295] + 4));
      }
      temp_v8 = temp_v8 + 1;
    } while (temp_v8 < 0x20);
    if (puVar2[0x2b9] != 0) {
      for (temp_v10 = 0; temp_v10 < *(unsigned int *)(*(int *)(puVar2[0x2b9] + 8) + 0x10); temp_v10 = temp_v10 + 1)
      {
        FUN_00399290(temp_v10,0);
        if (*(char *)(puVar2 + temp_v10 * 0x22 + 0x2de) != '\0') {
          temp_v22 = *(unsigned int *)(puVar2[0x2b9] + 8);
          FUN_0040619c(temp_v22,temp_v10);
          ptrListRemoveClearOwner(g_handleRegistry,temp_v22);
        }
      }
    }
    piVar12 = (int *)(puVar2 + 0x13be);
    if (*piVar12 != 0) {
      for (temp_v10 = 0; temp_v10 < *(unsigned int *)(*(int *)(*piVar12 + 8) + 0x10); temp_v10 = temp_v10 + 1) {
        FUN_003b5c54(temp_v10,0);
        if (*(char *)(puVar2 + temp_v10 * 0x22 + 0x13e1) != '\0') {
          temp_v22 = *(unsigned int *)(*piVar12 + 8);
          FUN_0040619c(temp_v22,temp_v10);
          ptrListRemoveClearOwner(g_handleRegistry,temp_v22);
        }
      }
    }
    FUN_00483acc(puVar2 + 0x3d);
    twoObjectsRelease(puVar2 + 0x3d);
    temp_v5 = puVar2[0x2f];
    temp_v8 = temp_v19;
    if (temp_v5 != 0) {
      temp_v8 = *(int *)(temp_v5 + 4);
    }
    if (temp_v5 != 0 && temp_v8 != 0) {
      ptrListRemoveClearOwner(g_handleRegistry);
      temp_v8 = temp_v20;
    }
    temp_v5 = puVar2[0x36];
    if (temp_v5 != 0) {
      temp_v8 = *(int *)(temp_v5 + 4);
    }
    if (temp_v5 != 0 && temp_v8 != 0) {
      ptrListRemoveClearOwner(g_handleRegistry);
      temp_v8 = temp_v21;
    }
    temp_v5 = puVar2[0x3b];
    if (temp_v5 != 0) {
      temp_v8 = *(int *)(temp_v5 + 4);
    }
    if (temp_v5 != 0 && temp_v8 != 0) {
      ptrListRemoveClearOwner(g_handleRegistry);
    }
    cameraRegistryRemove(&g_localCamera);
    resourceRemoveSlotOwners();
    engineRecordsUnregisterHandles();
    mapIfUnregisterOwnedResources();
    mapGimicClearEntryChildren();
    sub68OwnerDestroyAll();
    if (puVar2[0x27d] != 0) {
      scrScriptProcessDestroy();
      puVar2[0x27d] = 0;
    }
    if (puVar2[0x280] != 0) {
      scrScriptProcessDestroy();
      puVar2[0x280] = 0;
    }
    if (puVar2[0x27e] != 0) {
      asdMemFree();
      puVar2[0x27e] = 0;
    }
    if (puVar2[0x27f] != 0) {
      asdMemFree();
      puVar2[0x27f] = 0;
    }
    FUN_002c2610();
    DAT_005f18c4 = '\0';
    DAT_005f185d = 0;
    DAT_005f185e = 0;
    DAT_005f1860 = 0;
    DAT_005f1864 = 0;
    DAT_005f187c = 0;
    dialogClose(1);
    puVar2[3] = puVar2[3] + 1;
    puVar2[4] = 0;
    break;
  case 0x71:
    temp_v8 = puVar2[4] + 1;
    if (temp_v8 == 2) {
      unaff_r7 = 0;
      unaff_r5 = unaff_r7;
    }
    puVar2[4] = temp_v8;
    if (temp_v8 != 2) {
      return 0;
    }
    do {
      if ((int *)puVar2[unaff_r5 + 0x295] != (int *)0x0) {
        (**(romwright_code **)(*(int *)puVar2[unaff_r5 + 0x295] + 4))();
        puVar2[unaff_r5 + 0x295] = unaff_r7;
      }
      unaff_r5 = unaff_r5 + 1;
    } while (unaff_r5 < 0x20);
    if (puVar2[0x2b9] != 0) {
      objectVectorClear(*(unsigned int *)(puVar2[0x2b9] + 8));
      if ((int *)puVar2[0x2b9] != (int *)0x0) {
        (**(romwright_code **)(*(int *)puVar2[0x2b9] + 4))();
        puVar2[0x2b9] = unaff_r7;
      }
    }
    piVar12 = (int *)(puVar2 + 0x13be);
    if (*piVar12 != 0) {
      objectVectorClear(*(unsigned int *)(*piVar12 + 8));
      if ((int *)*piVar12 != (int *)0x0) {
        (**(romwright_code **)(*(int *)*piVar12 + 4))();
        *piVar12 = unaff_r7;
      }
    }
    piVar12 = (int *)puVar2[0x13bf];
    if (piVar12 != (int *)0x0) {
      (**(romwright_code **)(*piVar12 + 4))();
      puVar2[0x13bf] = unaff_r7;
    }
    if ((int *)puVar2[0x2b8] != (int *)0x0) {
      (**(romwright_code **)(*(int *)puVar2[0x2b8] + 4))();
      puVar2[0x2b8] = unaff_r7;
    }
    if ((int *)puVar2[0x2f] != (int *)0x0) {
      (**(romwright_code **)(*(int *)puVar2[0x2f] + 4))();
      puVar2[0x2f] = unaff_r7;
    }
    if ((int *)puVar2[0x36] != (int *)0x0) {
      (**(romwright_code **)(*(int *)puVar2[0x36] + 4))();
      puVar2[0x36] = unaff_r7;
    }
    FUN_001927c0(puVar2 + 0x3d);
    resourceSlotsRelease();
    FUN_002ba30c();
    temp_v22 = FUN_00294854();
    mapReleaseTableTexture(temp_v22);
    FUN_002c2358();
    jobFlagObjStop();
    temp_v8 = puVar2[3] + 1;
    puVar2[3] = temp_v8;
    break;
  case 0x72:
    if (DAT_005f1634 != '\0') {
      FUN_003c91e8();
      FUN_00363c58(1);
      FUN_003b5064();
      if ((DAT_005f1634 != '\0') && (temp_v8 = gameDataBlocksGetSaveData(), *(char *)(temp_v8 + 2) == '\x02')) {
        bgmReleaseStopped();
        soundChannelStopAll(0xf);
        DAT_005f1634 = '\0';
        uStack_b0 = 1;
        uStack_ac = 0xffffffff;
        ARM_common_memcpy4_9(&uStack_a8,0x27d668);
        temp_v22 = 0x20;
        puVar17 = &uStack_b0;
        temp_v9 = 4;
        asdSequenceRequest(temp_v9,puVar17,temp_v22);
        return 0xffffffff;
      }
    }
    if (DAT_005f18c5 != '\0') {
      temp_v22 = 0;
      DAT_005f18c5 = '\0';
      temp_v9 = 1;
      puVar17 = (unsigned int *)0x0;
    }
    else if (*(char *)((int)puVar2 + 9) != '\0') {
      temp_v8 = FUN_004186e0();
      if ((temp_v8 != 0) && (temp_v5 = FUN_001bd118(), temp_v5 == 6)) {
        FUN_001ad9b4();
        FUN_00270c58(*(unsigned short *)(temp_v8 + 0xd4));
        return 0xffffffff;
      }
      (*(unsigned short *)((unsigned char *)&uStack_b0 + 0)) = (unsigned short)uStack_b0 & 0xff00;
      uStack_b0 = romwright_piece_2_2(0xffff,(unsigned short)uStack_b0);
      uStack_ac = 0xffffffff;
      uStack_a8 = 0xffffffff;
      uStack_a4 = ((uStack_a4 >> 8) & 0xff) << 8;
      uStack_a0 = 0;
      uStack_9c = (unsigned int)(*(unsigned short *)((unsigned char *)&uStack_9c + 2)) << 0x10;
      temp_v3 = gameFlagsGetWorkValue();
      uStack_b0 = romwright_piece_2_2(temp_v3,(unsigned short)uStack_b0);
      temp_v22 = regionFindRecord((int)(short)puVar2[0x12]);
      switch(temp_v22) {
      case 0:
        uStack_a4 = romwright_piece_2_2(1,(unsigned short)uStack_a4);
        uStack_a0 = romwright_piece_2_2((*(unsigned short *)((unsigned char *)&uStack_a0 + 2)),6);
        break;
      case 1:
        uStack_a4 = romwright_piece_2_2(1,(unsigned short)uStack_a4);
        uStack_a0 = romwright_piece_2_2((*(unsigned short *)((unsigned char *)&uStack_a0 + 2)),4);
        break;
      case 2:
        uStack_a4 = romwright_piece_2_2(5,(unsigned short)uStack_a4);
        uStack_a0 = romwright_piece_2_2((*(unsigned short *)((unsigned char *)&uStack_a0 + 2)),0x1d);
        break;
      case 3:
        uStack_a4 = romwright_piece_2_2(1,(unsigned short)uStack_a4);
        uStack_a0 = romwright_piece_2_2((*(unsigned short *)((unsigned char *)&uStack_a0 + 2)),5);
        break;
      case 4:
        uStack_a4 = romwright_piece_2_2(5,(unsigned short)uStack_a4);
        uStack_a0 = romwright_piece_2_2((*(unsigned short *)((unsigned char *)&uStack_a0 + 2)),0x28);
        break;
      case 5:
        uStack_a4 = romwright_piece_2_2(5,(unsigned short)uStack_a4);
        uStack_a0 = romwright_piece_2_2((*(unsigned short *)((unsigned char *)&uStack_a0 + 2)),0x24);
        break;
      case 6:
        uStack_a4 = romwright_piece_2_2(5,(unsigned short)uStack_a4);
        uStack_a0 = romwright_piece_2_2((*(unsigned short *)((unsigned char *)&uStack_a0 + 2)),0x26);
        break;
      case 7:
        uStack_a4 = romwright_piece_2_2(5,(unsigned short)uStack_a4);
        uStack_a0 = romwright_piece_2_2((*(unsigned short *)((unsigned char *)&uStack_a0 + 2)),0x1e);
        break;
      case 8:
        uStack_a4 = romwright_piece_2_2(5,(unsigned short)uStack_a4);
        uStack_a0 = romwright_piece_2_2((*(unsigned short *)((unsigned char *)&uStack_a0 + 2)),0x23);
        break;
      case 9:
        uStack_a4 = romwright_piece_2_2(5,(unsigned short)uStack_a4);
        uStack_a0 = romwright_piece_2_2((*(unsigned short *)((unsigned char *)&uStack_a0 + 2)),0x1f);
        break;
      default:
        temp_v8 = puVar2[0x10];
        if (temp_v8 == 0x65) {
          uStack_a4 = romwright_piece_2_2(1,(unsigned short)uStack_a4);
          uStack_a0 = romwright_piece_2_2((*(unsigned short *)((unsigned char *)&uStack_a0 + 2)),6);
          break;
        }
        if (temp_v8 == 0x66) {
          uStack_a4 = romwright_piece_2_2(5,(unsigned short)uStack_a4);
          uStack_a0 = romwright_piece_2_2((*(unsigned short *)((unsigned char *)&uStack_a0 + 2)),0x24);
          break;
        }
        if (temp_v8 == 0x67) {
          uStack_a4 = romwright_piece_2_2(5,(unsigned short)uStack_a4);
          uStack_a0 = romwright_piece_2_2((*(unsigned short *)((unsigned char *)&uStack_a0 + 2)),0x26);
        }
      }
      if ((*(unsigned short *)((unsigned char *)&uStack_b0 + 2)) != 0) {
        uStack_b0 = romwright_piece_3_1((((unsigned int)(uStack_b0) >> 8) & 0xffffffU),1);
        FUN_003847d4(0);
      }
      else {
        temp_v4 = FUN_00376f84();
        uStack_b0 = romwright_piece_2_2(temp_v4,(unsigned short)uStack_b0);
        if (temp_v4 != 0) {
          temp_v3 = FUN_00376f84();
          uStack_b0 = romwright_piece_2_2(temp_v3,(unsigned short)uStack_b0);
          uStack_b0 = romwright_piece_3_1((((unsigned int)(uStack_b0) >> 8) & 0xffffffU),1);
          FUN_00376fa4(0);
        }
        else {
          uStack_b0 = romwright_piece_2_2((short)puVar2[0x11],(unsigned short)uStack_b0);
          temp_v10 = randRange(100);
          if (temp_v10 < 0x4b) {
            uStack_a4 = romwright_piece_3_1((((unsigned int)(uStack_a4) >> 8) & 0xffffffU),3);
          }
          temp_v8 = gameDataFlagTestBit(0x81);
          if ((temp_v8 != 0) && (temp_v8 = randRange(99), temp_v8 + 1 < 0x47)) {
            uStack_a4 = romwright_piece_3_1((((unsigned int)(uStack_a4) >> 8) & 0xffffffU),2);
          }
          DAT_005f18c0 = 2;
        }
      }
      temp_v8 = gameFlagIsSet(0x4c9);
      if ((temp_v8 != 0) && (temp_v8 = gameFlagIsSet(0x4db), temp_v8 != 0)) {
        uStack_a0 = romwright_piece_2_2(1,(unsigned short)uStack_a0);
      }
      temp_v22 = 0x16;
      uStack_a8 = romwright_piece_2_2((short)puVar2[0x12],(short)puVar2[0x10]);
      temp_v9 = 5;
      puVar17 = &uStack_b0;
    }
    else if (*(char *)((int)puVar2 + 10) != '\0') {
      uStack_b0 = DAT_005f1658;
      uStack_ac = 0xffffffff;
      libc_strcpy(&uStack_a8,&DAT_005f1660);
      temp_v22 = 0x20;
      temp_v9 = 4;
      puVar17 = &uStack_b0;
    }
    else if (puVar2[0x24d6] != 0) {
      uStack_138 = puVar2[0x24d7];
      temp_v22 = 4;
      temp_v9 = 0xd;
      puVar17 = &uStack_138;
    }
    else if (g_mapSelection >= 200) {
      uStack_138 = g_mapSelection - 200;
      temp_v22 = 4;
      temp_v9 = 0xe;
    }
    else {
      if (g_mapSelection == -1) {
        jobStop(*g_lmapMainState,0);
        soundChannelStopAll(0xf);
        return 0xffffffff;
      }
      temp_v22 = 0;
      puVar17 = (unsigned int *)0x0;
      if (g_mapSelection < 100) {
        temp_v9 = 6;
      }
      else {
        temp_v9 = 8;
      }
    }
    asdSequenceRequest(temp_v9,puVar17,temp_v22);
    return 0xffffffff;
  }
  return 0;
}

} /* extern "C" */
