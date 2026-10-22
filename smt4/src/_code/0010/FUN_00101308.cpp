/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00101308` (_code @ 0x101308, 0x101c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00103504(...);
int appletReplySleepQueryAllow(...);
int FUN_00103f90(...);
int appletUnlockAndRestoreDisplay(...);
int FUN_00106e60(...);
int FUN_00106f70(...);
int appletUnlockAndSleepIfShellClosed(...);
int FUN_002c55b4(...);
int appletIsExitRequested(...);
int sleepQueryAnswer(...);
int FUN_002c560c(...);
int FUN_002c5620(...);

int FUN_00102438(...);
int asdProcessUpdate(...);
int FUN_00103c9c(...);
int FUN_00103d48(...);
int randSetSeed(...);
int asdPrimSwapBuffers(...);
int FUN_0010402c(...);
int sysShutdownAndClearBusy(...);
int asdSoundShutdown(...);
int FUN_001052d8(...);
int FUN_00105394(...);
int asdGxSubmitFrame(...);
int FUN_00105970(...);
int asdGxResumeAndApplyPreset(...);
int asdGxPresetsGetDepth(...);
int asdGxSetChannelFlags(...);
int soundFlushEventQueue(...);
int FUN_0010633c(...);
int dataTable02Sub3GetRecord(...);
int FUN_00107264(...);
int FUN_00107598(...);
int FUN_0010b5e8(...);
int FUN_00123934(...);
int mobiclipCloseSlot(...);
int asdProcessSetGroupEnabled(...);
int FUN_002c567c(...);
int gameDataFlagsClear(...);
int VectorSignedToFloat(...);
int software_interrupt(...);

int FUN_001028bc(...);
int ifTouchAcquire(...);
int gameDataAllocBlocks(...);
int FUN_00102e34(...);
int FUN_001036fc(...);
int FUN_00103f74(...);
int modelStartProcessGroup(...);
int FUN_001043c8(...);
int FUN_00104e28(...);
int FUN_00104e44(...);
int FUN_00104ec4(...);
int FUN_00105948(...);
int titleConfigResetDefaults(...);
int FUN_00105cac(...);
int FUN_00105e50(...);
int soundInitializePersistentSlots(...);
int soundSetupArchiveAndSlots(...);
int FUN_00106650(...);
int FUN_00106a18(...);
int asdGxLoadMaterialShader(...);
int FUN_0010707c(...);
int FUN_001070ac(...);
int FUN_001071a0(...);
int gameDataFlagsClearAndRefresh(...);
int gameDataRemoveHomeButtonHold(...);
int asdProcessCreateSimple(...);
int asdSequenceRequest(...);
int titleConfigApplyAudio(...);
int FUN_002c58c8(...);
int asdTMTexTableLoadTmx(...);

int FUN_0010250c(...);
int FUN_00102b10(...);
int asdProcessInit(...);
int asdMemoryInit(...);
int asdNgcInit(...);
int appletCloseApplication(...);
int FUN_00103cec(...);
int FUN_00103fec(...);
int FUN_0010421c(...);
int FUN_001042dc(...);
int asdPrimInit(...);
int FUN_001049ac(...);
int asdTMTexTableLoadList(...);
int FUN_00105254(...);
int gfxSetupResGraphicsFile(...);
int FUN_001054bc(...);
int FUN_00105a10(...);
int FUN_00105b94(...);
int asdGxPresetVectorSet(...);
int FUN_00105e28(...);
int asdGxPresetRequest(...);
int asdMemorySetUseAllocatorA(...);
int FUN_00106c28(...);
int FUN_00106d40(...);
int FUN_00106e10(...);
int randomStateSeed(...);
int initializeAndResetSubsystems(...);
int asdGxCommandListCreate(...);
int asdLoadFileSync(...);
int __aeabi_vec_ctor_nocookie_nodtor(...);

typedef int romwright_code(...);
/* stack frame of void: 22 slot(s), 86 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned short sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int spE8; /* 0xe8: local_e8 */
    unsigned int spEC; /* 0xec: local_ec */
    unsigned int spF0; /* 0xf0: local_f0 */
} void_stack;

extern unsigned char LAB_001017b4; /* 0x1017b4 */
extern unsigned char LAB_001017ec; /* 0x1017ec */
extern unsigned char LAB_00101804; /* 0x101804 */
extern unsigned char LAB_00101818; /* 0x101818 */
extern unsigned char LAB_00101830; /* 0x101830 */
extern unsigned char LAB_00101c14; /* 0x101c14 */
extern unsigned char LAB_00101c24; /* 0x101c24 */
extern unsigned char LAB_00101c34; /* 0x101c34 */
extern unsigned char LAB_00101c48; /* 0x101c48 */
extern unsigned char LAB_00101c5c; /* 0x101c5c */
extern unsigned char LAB_00101c6c; /* 0x101c6c */
extern unsigned char LAB_00101c80; /* 0x101c80 */
extern unsigned char LAB_00101c90; /* 0x101c90 */
extern unsigned char LAB_00101ca0; /* 0x101ca0 */
extern unsigned char LAB_00101cb0; /* 0x101cb0 */
extern unsigned char LAB_00101cc0; /* 0x101cc0 */
extern unsigned char LAB_00101cd8; /* 0x101cd8 */
extern unsigned char LAB_00101cec; /* 0x101cec */
extern unsigned char LAB_00101d00; /* 0x101d00 */
extern unsigned char LAB_00101d18; /* 0x101d18 */
extern unsigned char LAB_00101d30; /* 0x101d30 */
extern unsigned char LAB_00101d48; /* 0x101d48 */
extern unsigned char LAB_00101d58; /* 0x101d58 */
extern unsigned char LAB_00101d6c; /* 0x101d6c */
extern int titleEndCommandList(...); /* 0x1026a8 */
extern int titleSubmitCommandList(...); /* 0x1026ec */
extern int titlePrepareDrawFrame(...); /* 0x102738 */
extern int titleBeginCommandList(...); /* 0x102798 */
extern int titleSceneStep(...); /* 0x1027d4 */
extern int titleSubmitCommandAndUpdateMode(...); /* 0x102834 */
extern int titleRunActiveCommand(...); /* 0x102884 */
extern unsigned char LAB_00102d38; /* 0x102d38 */
extern unsigned char LAB_00102d4c; /* 0x102d4c */
extern int FUN_00103650(...); /* 0x103650 */
extern unsigned char LAB_001036c4; /* 0x1036c4 */
extern unsigned char LAB_001036e0; /* 0x1036e0 */
extern unsigned char LAB_00103bd4; /* 0x103bd4 */
extern int renderCtxBeginPass(...); /* 0x103c1c */
extern int FUN_00103d8c(...); /* 0x103d8c */
extern unsigned char LAB_00103dd8; /* 0x103dd8 */
extern unsigned char LAB_00103e18; /* 0x103e18 */
extern unsigned char LAB_00103e34; /* 0x103e34 */
extern int renderCtxApplyCurrentA(...); /* 0x10618c */
extern int renderCtxApplyCurrentB(...); /* 0x1061bc */
extern int FUN_001061ec(...); /* 0x1061ec */
extern unsigned char LAB_001071c8; /* 0x1071c8 */
extern unsigned char g_titleFlags; /* 0x446db0 */
extern signed char DAT_00446db1; /* 0x446db1 */
extern signed char DAT_00446db2; /* 0x446db2 */
extern unsigned char DAT_00446db3; /* 0x446db3 */
extern signed char DAT_00446db4; /* 0x446db4 */
extern float *DAT_00446db8; /* 0x446db8 */
extern float *DAT_00446dbc; /* 0x446dbc */
extern int iRam00446dc0; /* 0x446dc0 */
extern unsigned int DAT_00446dc4; /* 0x446dc4 */
extern float DAT_00446dc8; /* 0x446dc8 */
extern int iRam00446dcc; /* 0x446dcc */
#ifndef ROMWRIGHT_STORAGE_uRam00446dd0_8_8_DEFINED
#define ROMWRIGHT_STORAGE_uRam00446dd0_8_8_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_uRam00446dd0_8_8 {
    unsigned long long whole;
    unsigned char u1[8];
    signed char s1[8];
    unsigned short u2[4];
    short s2[4];
    unsigned int u4[2];
    int s4[2];
    float f4[2];
    unsigned long long u8[1];
    long long s8[1];
    double f8[1];
};
typedef char romwright_storage_uRam00446dd0_8_8_size_check[(sizeof(union romwright_storage_uRam00446dd0_8_8) == 8) ? 1 : -1];
typedef char romwright_storage_uRam00446dd0_8_8_u1_width_check[(sizeof(((union romwright_storage_uRam00446dd0_8_8 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_uRam00446dd0_8_8_s1_width_check[(sizeof(((union romwright_storage_uRam00446dd0_8_8 *)0)->s1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_uRam00446dd0_8_8_u2_width_check[(sizeof(((union romwright_storage_uRam00446dd0_8_8 *)0)->u2[0]) == 2) ? 1 : -1];
typedef char romwright_storage_uRam00446dd0_8_8_s2_width_check[(sizeof(((union romwright_storage_uRam00446dd0_8_8 *)0)->s2[0]) == 2) ? 1 : -1];
typedef char romwright_storage_uRam00446dd0_8_8_u4_width_check[(sizeof(((union romwright_storage_uRam00446dd0_8_8 *)0)->u4[0]) == 4) ? 1 : -1];
typedef char romwright_storage_uRam00446dd0_8_8_s4_width_check[(sizeof(((union romwright_storage_uRam00446dd0_8_8 *)0)->s4[0]) == 4) ? 1 : -1];
typedef char romwright_storage_uRam00446dd0_8_8_f4_width_check[(sizeof(((union romwright_storage_uRam00446dd0_8_8 *)0)->f4[0]) == 4) ? 1 : -1];
typedef char romwright_storage_uRam00446dd0_8_8_u8_width_check[(sizeof(((union romwright_storage_uRam00446dd0_8_8 *)0)->u8[0]) == 8) ? 1 : -1];
typedef char romwright_storage_uRam00446dd0_8_8_s8_width_check[(sizeof(((union romwright_storage_uRam00446dd0_8_8 *)0)->s8[0]) == 8) ? 1 : -1];
typedef char romwright_storage_uRam00446dd0_8_8_f8_width_check[(sizeof(((union romwright_storage_uRam00446dd0_8_8 *)0)->f8[0]) == 8) ? 1 : -1];
#endif
extern union romwright_storage_uRam00446dd0_8_8 uRam00446dd0; /* 0x446dd0 */
#ifndef ROMWRIGHT_STORAGE_uRam00446dd8_8_8_DEFINED
#define ROMWRIGHT_STORAGE_uRam00446dd8_8_8_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_uRam00446dd8_8_8 {
    unsigned long long whole;
    unsigned char u1[8];
    signed char s1[8];
    unsigned short u2[4];
    short s2[4];
    unsigned int u4[2];
    int s4[2];
    float f4[2];
    unsigned long long u8[1];
    long long s8[1];
    double f8[1];
};
typedef char romwright_storage_uRam00446dd8_8_8_size_check[(sizeof(union romwright_storage_uRam00446dd8_8_8) == 8) ? 1 : -1];
typedef char romwright_storage_uRam00446dd8_8_8_u1_width_check[(sizeof(((union romwright_storage_uRam00446dd8_8_8 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_uRam00446dd8_8_8_s1_width_check[(sizeof(((union romwright_storage_uRam00446dd8_8_8 *)0)->s1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_uRam00446dd8_8_8_u2_width_check[(sizeof(((union romwright_storage_uRam00446dd8_8_8 *)0)->u2[0]) == 2) ? 1 : -1];
typedef char romwright_storage_uRam00446dd8_8_8_s2_width_check[(sizeof(((union romwright_storage_uRam00446dd8_8_8 *)0)->s2[0]) == 2) ? 1 : -1];
typedef char romwright_storage_uRam00446dd8_8_8_u4_width_check[(sizeof(((union romwright_storage_uRam00446dd8_8_8 *)0)->u4[0]) == 4) ? 1 : -1];
typedef char romwright_storage_uRam00446dd8_8_8_s4_width_check[(sizeof(((union romwright_storage_uRam00446dd8_8_8 *)0)->s4[0]) == 4) ? 1 : -1];
typedef char romwright_storage_uRam00446dd8_8_8_f4_width_check[(sizeof(((union romwright_storage_uRam00446dd8_8_8 *)0)->f4[0]) == 4) ? 1 : -1];
typedef char romwright_storage_uRam00446dd8_8_8_u8_width_check[(sizeof(((union romwright_storage_uRam00446dd8_8_8 *)0)->u8[0]) == 8) ? 1 : -1];
typedef char romwright_storage_uRam00446dd8_8_8_s8_width_check[(sizeof(((union romwright_storage_uRam00446dd8_8_8 *)0)->s8[0]) == 8) ? 1 : -1];
typedef char romwright_storage_uRam00446dd8_8_8_f8_width_check[(sizeof(((union romwright_storage_uRam00446dd8_8_8 *)0)->f8[0]) == 8) ? 1 : -1];
#endif
extern union romwright_storage_uRam00446dd8_8_8 uRam00446dd8; /* 0x446dd8 */
extern unsigned char g_mobiclipProcess; /* 0x44d048 */
extern unsigned int DAT_0044e368; /* 0x44e368 */
extern int g_titleScene; /* 0x44ea00 */

#ifndef ROMWRIGHT_ZEXT_4_8_DEFINED
#define ROMWRIGHT_ZEXT_4_8_DEFINED
#define romwright_zext_4_8(value) ((unsigned long long)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
#ifndef ROMWRIGHT_CARRY_4_DEFINED
#define ROMWRIGHT_CARRY_4_DEFINED
#define romwright_carry_4(left, right) ((unsigned char)((unsigned long long)(unsigned int)(left) + (unsigned long long)(unsigned int)(right) > 0xffffffffULL))
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00102438. */
/* Supplied declaration required: FUN_0010250c. */
/* Supplied declaration required: FUN_001028bc. */
/* Supplied declaration required: ifTouchAcquire. */
/* Supplied declaration required: FUN_00102b10. */
/* Supplied declaration required: gameDataAllocBlocks. */
/* Supplied declaration required: FUN_00102e34. */
/* Supplied declaration required: asdProcessInit. */
/* Supplied declaration required: asdProcessUpdate. */
extern unsigned long long asdSoundRefreshPlayerState(void);
/* Supplied declaration required: FUN_00103504. */
extern unsigned int asdModelGetStatic40(void);
/* Supplied declaration required: FUN_001036fc. */
extern int asdSystemGetOperationPending(void);
extern unsigned int asdModelGetStringConst(void);
extern unsigned int asdModelGetStatic3C(void);
/* Supplied declaration required: asdMemoryInit. */
/* Supplied declaration required: asdNgcInit. */
/* Supplied declaration required: appletCloseApplication. */
/* Supplied declaration required: FUN_00103c9c. */
/* Supplied declaration required: appletReplySleepQueryAllow. */
/* Supplied declaration required: FUN_00103cec. */
extern unsigned long long FUN_00103d38(unsigned int);
/* Supplied declaration required: FUN_00103d48. */
extern int gameDataHasNoFlags(void);
/* Supplied declaration required: randSetSeed. */
extern unsigned long long appletProcessSleepQuery(void);
extern int FUN_00103ec8(void);
/* Supplied declaration required: FUN_00103f74. */
/* Supplied declaration required: FUN_00103f90. */
/* Supplied declaration required: FUN_00103fec. */
/* Supplied declaration required: asdPrimSwapBuffers. */
/* Supplied declaration required: FUN_0010402c. */
/* Supplied declaration required: modelStartProcessGroup. */
extern int FUN_001041c8(void);
extern int appletGetBusyFlag(void);
/* Supplied declaration required: sysShutdownAndClearBusy. */
/* Supplied declaration required: FUN_0010421c. */
/* Supplied declaration required: appletUnlockAndRestoreDisplay. */
extern unsigned int asdModelGetStatic50(void);
/* Supplied declaration required: FUN_001042dc. */
/* Supplied declaration required: asdPrimInit. */
/* Supplied declaration required: FUN_001043c8. */
/* Supplied declaration required: FUN_001049ac. */
extern int FUN_00104e0c(void);
/* Supplied declaration required: FUN_00104e28. */
/* Supplied declaration required: FUN_00104e44. */
/* Supplied declaration required: asdSoundShutdown. */
/* Supplied declaration required: FUN_00104ec4. */
extern int FUN_001050cc(void);
/* Supplied declaration required: asdTMTexTableLoadList. */
extern unsigned long long appletProcessHomeButton(void);
/* Supplied declaration required: FUN_00105254. */
/* Supplied declaration required: FUN_001052d8. */
/* Supplied declaration required: FUN_00105394. */
extern unsigned long long FUN_00105478(void);
/* Supplied declaration required: gfxSetupResGraphicsFile. */
/* Supplied declaration required: FUN_001054bc. */
/* Supplied declaration required: asdGxSubmitFrame. */
/* Supplied declaration required: FUN_00105948. */
/* Supplied declaration required: FUN_00105970. */
/* Supplied declaration required: FUN_00105a10. */
/* Supplied declaration required: FUN_00105b94. */
/* Supplied declaration required: asdGxResumeAndApplyPreset. */
/* Supplied declaration required: titleConfigResetDefaults. */
extern unsigned int asdModelGetStatic54(void);
/* Supplied declaration required: FUN_00105cac. */
/* Supplied declaration required: asdGxPresetsGetDepth. */
/* Supplied declaration required: asdGxPresetVectorSet. */
/* Supplied declaration required: FUN_00105e28. */
/* Supplied declaration required: asdGxPresetRequest. */
/* Supplied declaration required: FUN_00105e50. */
/* Supplied declaration required: asdMemorySetUseAllocatorA. */
/* Supplied declaration required: asdGxSetChannelFlags. */
/* Supplied declaration required: soundInitializePersistentSlots. */
/* Supplied declaration required: soundFlushEventQueue. */
/* Supplied declaration required: soundSetupArchiveAndSlots. */
/* Supplied declaration required: FUN_0010633c. */
/* Supplied declaration required: FUN_00106650. */
extern unsigned int FUN_00106708(void);
/* Supplied declaration required: FUN_00106a18. */
/* Supplied declaration required: asdGxLoadMaterialShader. */
/* Supplied declaration required: FUN_00106c28. */
/* Supplied declaration required: FUN_00106d40. */
/* Supplied declaration required: FUN_00106e10. */
/* Supplied declaration required: FUN_00106e60. */
/* Supplied declaration required: FUN_00106f70. */
/* Supplied declaration required: FUN_0010707c. */
/* Supplied declaration required: FUN_001070ac. */
/* Supplied declaration required: FUN_001071a0. */
/* Supplied declaration required: dataTable02Sub3GetRecord. */
/* Supplied declaration required: FUN_00107264. */
extern int FUN_00107538(unsigned int);
/* Supplied declaration required: FUN_00107598. */
/* Supplied declaration required: randomStateSeed. */
/* Supplied declaration required: FUN_0010b5e8. */
/* Supplied declaration required: initializeAndResetSubsystems. */
/* Supplied declaration required: FUN_00123934. */
/* Supplied declaration required: appletUnlockAndSleepIfShellClosed. */
extern unsigned long long FUN_002c5434(unsigned int);
/* Supplied declaration required: FUN_002c55b4. */
/* Supplied declaration required: appletIsExitRequested. */
/* Supplied declaration required: sleepQueryAnswer. */
/* Supplied declaration required: FUN_002c560c. */
/* Supplied declaration required: FUN_002c5620. */
/* Supplied declaration required: mobiclipCloseSlot. */
extern unsigned long long jyoucyuGetTableEntry(unsigned int);
/* Supplied declaration required: asdProcessSetGroupEnabled. */
/* Supplied declaration required: FUN_002c567c. */
/* Supplied declaration required: gameDataFlagsClear. */
/* Supplied declaration required: gameDataFlagsClearAndRefresh. */
/* Supplied declaration required: gameDataRemoveHomeButtonHold. */
/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: asdSequenceRequest. */
/* Supplied declaration required: titleConfigApplyAudio. */
/* Supplied declaration required: FUN_002c58c8. */
/* Supplied declaration required: asdTMTexTableLoadTmx. */
/* Supplied declaration required: asdGxCommandListCreate. */
extern int FUN_002c5be8(void);
extern unsigned int asdModelGetStatic38(void);
/* Supplied declaration required: asdLoadFileSync. */
/* Supplied declaration required: __aeabi_vec_ctor_nocookie_nodtor. */
extern unsigned int FUN_002c5d80(unsigned int, unsigned int);
extern unsigned int packNibblesAndByte(unsigned int, unsigned int, unsigned int);
extern unsigned int nn_applet_CTR_detail_CloseApplication(unsigned char *, unsigned int, unsigned int);
extern void nn_cfg_CTR_Initialize(void);
extern void nn_pl_CTR_InitializeGameCoin(void);
extern int nngxIsStereoVisionAllowed(void);


void FUN_00101308(void)

{
/* irregular: 3 unstructured edge(s); 2 goto(s); irregular input(s): in_fpscr; 120 native warning(s); review required */
  long long temp_v0;
  long long temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  romwright_code **ppcVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  float *pfVar8;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned char temp_v15;
  unsigned int in_fpscr;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  float temp_v21;
  float temp_v22;
  unsigned long long temp_v23;
  unsigned long long temp_v24;
  unsigned long long temp_v25;
  romwright_code *temp_v26;
  unsigned int temp_v27;
  unsigned int temp_v28;
  unsigned int temp_v29;
  unsigned short temp_v30;
  unsigned int temp_v31;
  int temp_v32;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int temp_v33;
  unsigned int temp_v34;
  unsigned int temp_v35;
  unsigned int temp_v36;
  unsigned int temp_v37;
  unsigned int temp_v38;
  unsigned int temp_v39;
  int temp_v40;
  unsigned int temp_v41;
  unsigned int uStack_30;
  unsigned int temp_v42;
  unsigned int temp_v43;
  unsigned int temp_v44;
  unsigned int uStack_20;
  unsigned int temp_v45;
  unsigned int temp_v46;
  unsigned int temp_v47;
  
  ppcVar5 = &temp_v26;
  nn_cfg_CTR_Initialize();
  randomStateSeed(0,0x12345678);
  asdMemoryInit(0x100000);
  asdMemorySetUseAllocatorA(1);
  FUN_0010250c();
  initializeAndResetSubsystems();
  FUN_00106e10();
  nn_pl_CTR_InitializeGameCoin();
  FUN_00106c28();
  FUN_00106d40();
  temp_v2 = FUN_00103ec8();
  if (temp_v2 == 0) {
    appletCloseApplication();
  }
  asdNgcInit();
  temp_v34 = 0;
  temp_v36 = 0;
  temp_v37 = 0;
  temp_v32 = 0x100000;
  uStack_60 = 0x800;
  uStack_5c = 0x80000;
  uStack_58 = 0x80;
  DAT_00446db1 = '\x01';
  temp_v33 = 0x100000;
  temp_v35 = 0x501;
  temp_v38 = 0x8d62;
  temp_v39 = 0x8d62;
  FUN_001054bc(&temp_v32);
  asdGxPresetRequest(1);
  FUN_00105b94();
  temp_v2 = g_titleScene;
  *(unsigned int *)(g_titleScene + 0x136c) = 0;
  temp_v3 = packNibblesAndByte(6,7,0);
  *(unsigned int *)(temp_v2 + 0x1384) = temp_v3;
  temp_v2 = g_titleScene;
  temp_v3 = FUN_002c5d80(5,1);
  *(unsigned int *)(temp_v2 + 0x1378) = temp_v3;
  FUN_001042dc();
  asdGxPresetVectorSet(0);
  asdGxPresetVectorSet(1);
  __aeabi_vec_ctor_nocookie_nodtor(&temp_v26,&LAB_001071c8,0x3c,2);
  *(unsigned int *)((int)ppcVar5 + 0x80) = 0;
  *(unsigned short *)((int)ppcVar5 + 0x84) = 0x8058;
  *(unsigned int *)((int)ppcVar5 + 0x88) = 0;
  temp_v31 = 0x400;
  temp_v30 = 0x8d62;
  temp_v29 = 2;
  FUN_00105a10(&temp_v26);
  temp_v40 = 5;
  temp_v41 = 5;
  uStack_30 = 0x80;
  temp_v43 = 4;
  temp_v42 = 0x80;
  temp_v44 = 4;
  uStack_20 = 8;
  temp_v46 = 4;
  temp_v47 = 4;
  temp_v45 = 8;
  FUN_00105254(&temp_v40,0);
  asdLoadFileSync(&LAB_001017b4,0,1,0x80);
  gfxSetupResGraphicsFile();
  FUN_00105e28(1);
  puVar6 = (unsigned int *)asdModelGetStatic3C();
  *puVar6 = 0x40400000;
  puVar6 = (unsigned int *)asdModelGetStatic40();
  *puVar6 = 0x469c4000;
  puVar6 = (unsigned int *)asdModelGetStringConst();
  *puVar6 = 0x41400000;
  puVar6 = (unsigned int *)asdModelGetStatic50();
  temp_v22 = 0.5f;
  *puVar6 = 0x3f000000;
  puVar6 = (unsigned int *)asdModelGetStatic54();
  *puVar6 = 0x3ecccccd;
  FUN_001049ac(0x100,0x30000);
  FUN_0010421c();
  puVar6 = (unsigned int *)asdModelGetStatic38();
  *puVar6 = 0x447a0000;
  temp_v2 = FUN_00104e0c();
  pfVar8 = (float *)0x0;
  if (temp_v2 != 0) {
    temp_v2 = FUN_002c5be8();
    puVar7 = (unsigned int *)(**(romwright_code **)(**(int **)(temp_v2 + 0x260) + 0x10))();
    if ((puVar7 != (unsigned int *)0x0) && ((*puVar7 & 0x40000000) == 0)) {
      puVar7 = (unsigned int *)0x0;
    }
    pfVar8 = (float *)0x0;
    if (puVar7 != (unsigned int *)0x0) {
      temp_v17 = (float)puVar7[6];
      temp_v21 = (float)puVar7[3];
      temp_v19 = (float)puVar7[5];
      pfVar8 = (float *)asdModelGetStatic38();
      temp_v18 = *pfVar8;
      temp_v20 = temp_v17 + temp_v18 * temp_v22;
      temp_v17 = temp_v17 - temp_v18 * temp_v22;
      temp_v16 = temp_v19 - temp_v18 * temp_v21 * temp_v22;
      temp_v19 = temp_v19 + temp_v18 * temp_v21 * temp_v22;
      temp_v18 = temp_v20 - temp_v17;
      puVar7[4] = (unsigned int)temp_v18;
      puVar7[3] = (unsigned int)((temp_v19 - temp_v16) / temp_v18);
      puVar7[5] = (unsigned int)((temp_v19 + temp_v16) * temp_v22);
      puVar7[6] = (unsigned int)((temp_v20 + temp_v17) * temp_v22);
    }
  }
  asdGxCommandListCreate();
  DAT_00446db8 = pfVar8;
  asdGxCommandListCreate();
  DAT_00446dbc = pfVar8;
  FUN_00102b10();
  asdPrimInit(0x100000);
  asdProcessInit(0x163);
  FUN_00103fec();
  asdTMTexTableLoadList(&LAB_001017ec);
  FUN_00103cec();
  ifTouchAcquire();
  FUN_001028bc();
  FUN_00105948();
  FUN_001071a0();
  FUN_001070ac();
  FUN_0010707c();
  FUN_00104e28(7);
  FUN_00103f74(2);
  asdGxLoadMaterialShader();
  asdTMTexTableLoadTmx(0x2c,0);
  FUN_002c58c8(0x2c,0);
  gameDataAllocBlocks();
  FUN_00104e44(0);
  FUN_00105e50(1);
  soundSetupArchiveAndSlots();
  soundInitializePersistentSlots();
  FUN_00106650();
  FUN_001036fc();
  titleConfigResetDefaults();
  titleConfigApplyAudio();
  FUN_00104ec4();
  asdSequenceRequest(0x18,0);
  temp_v26 = (romwright_code *)&LAB_00103bd4;
  temp_v27 = 0;
  temp_v28 = 0;
  asdProcessCreateSimple(&LAB_00101804,0x65,0);
  temp_v26 = FUN_00103d8c;
  temp_v27 = 0;
  temp_v28 = 0;
  asdProcessCreateSimple(&LAB_00101818,0x66,0);
  temp_v26 = FUN_00103650;
  temp_v27 = 0;
  temp_v28 = 0;
  asdProcessCreateSimple(&LAB_00101830,0x69,0);
  temp_v26 = titlePrepareDrawFrame;
  temp_v27 = 0;
  temp_v28 = 0;
  asdProcessCreateSimple(&LAB_00101c14,0x6e,0);
  temp_v26 = renderCtxApplyCurrentA;
  temp_v27 = 0;
  temp_v28 = 0;
  asdProcessCreateSimple(&LAB_00101c24,0x75,0);
  temp_v26 = (romwright_code *)&LAB_001036e0;
  temp_v27 = 0;
  temp_v28 = 0;
  asdProcessCreateSimple(&LAB_00101c34,0x72,0);
  temp_v26 = titleEndCommandList;
  temp_v27 = 0;
  temp_v28 = 0;
  asdProcessCreateSimple(&LAB_00101c48,0x74,0);
  temp_v26 = titleBeginCommandList;
  temp_v27 = 0;
  temp_v28 = 0;
  asdProcessCreateSimple(&LAB_00101c14,0x83,0);
  temp_v26 = titleSubmitCommandList;
  temp_v27 = 0;
  temp_v28 = 0;
  asdProcessCreateSimple(&LAB_00101c5c,0xcb,0);
  temp_v26 = renderCtxBeginPass;
  temp_v27 = 0;
  temp_v28 = 0;
  asdProcessCreateSimple(&LAB_00101c6c,0xcc,0);
  temp_v26 = titleRunActiveCommand;
  temp_v27 = 0;
  temp_v28 = 0;
  asdProcessCreateSimple(&LAB_00101c80,0xcd,0);
  temp_v26 = titleSceneStep;
  temp_v27 = 0;
  temp_v28 = 0;
  asdProcessCreateSimple(&LAB_00101c90,0xd2,0);
  temp_v26 = renderCtxApplyCurrentB;
  temp_v27 = 0;
  temp_v28 = 0;
  asdProcessCreateSimple(&LAB_00101ca0,0xd3,0);
  temp_v26 = titleSubmitCommandAndUpdateMode;
  temp_v27 = 0;
  temp_v28 = 0;
  asdProcessCreateSimple(&LAB_00101cb0,0xe1,0);
  temp_v26 = (romwright_code *)&LAB_00103e18;
  temp_v27 = 0;
  temp_v28 = 0;
  asdProcessCreateSimple(&LAB_00101cc0,0x7a,0);
  temp_v27 = 0;
  temp_v26 = (romwright_code *)&LAB_00103e34;
  temp_v28 = 0;
  asdProcessCreateSimple(&LAB_00101cd8,0xd8,0);
  temp_v26 = (romwright_code *)&LAB_00103e18;
  temp_v27 = 0;
  temp_v28 = 0;
  asdProcessCreateSimple(&LAB_00101cec,0x76,0);
  temp_v27 = 0;
  temp_v26 = (romwright_code *)&LAB_00103e34;
  temp_v28 = 0;
  asdProcessCreateSimple(&LAB_00101d00,0xd4,0);
  temp_v26 = (romwright_code *)&LAB_00103dd8;
  temp_v27 = 0;
  temp_v28 = 0;
  asdProcessCreateSimple(&LAB_00101d18,0xe2,0);
  temp_v26 = (romwright_code *)&LAB_001036c4;
  temp_v27 = 0;
  temp_v28 = 0;
  asdProcessCreateSimple(&LAB_00101d30,0xe4,0);
  temp_v26 = FUN_001061ec;
  temp_v27 = 0;
  temp_v28 = 0;
  asdProcessCreateSimple(&LAB_00101d48,0x162,0);
  temp_v26 = (romwright_code *)&LAB_00102d4c;
  temp_v27 = 0;
  temp_v28 = 0;
  asdProcessCreateSimple(&LAB_00101d58,0x85,0);
  temp_v26 = (romwright_code *)&LAB_00102d38;
  temp_v27 = 0;
  temp_v28 = 0;
  asdProcessCreateSimple(&LAB_00101d6c,0x160,0);
  FUN_00105cac(3);
  modelStartProcessGroup(0x67,0x68,0xe3,0);
  FUN_001043c8(1);
  FUN_00102e34(0);
  temp_v22 = 0.25f;
  FUN_00106a18(g_titleScene);
  gameDataRemoveHomeButtonHold(7);
  gameDataFlagsClearAndRefresh(7);
  gameDataFlagsClear(1);
  DAT_00446db3 = 0;
  FUN_002c567c(&temp_v26);
  temp_v3 = (unsigned int)(romwright_zext_4_8(temp_v26) * 1000000);
  randSetSeed(temp_v3,(int)(romwright_zext_4_8(temp_v26) * 1000000 >> 0x20));
  temp_v23 = FUN_00103d38(temp_v3);
  temp_v16 = 100.0f;
LAB_00101b80:
  do {
    do {
      do {
        software_interrupt(0x28);
        uRam00446dd0.whole = temp_v23;
        FUN_0010b5e8();
        temp_v2 = asdSystemGetOperationPending();
        g_titleFlags = temp_v2 != 0;
        temp_v2 = nngxIsStereoVisionAllowed();
        if (temp_v2 != 0) {
          DAT_00446db1 = '\x01';
          asdProcessSetGroupEnabled(0xcc,1);
          asdProcessSetGroupEnabled(0xd8,1);
          asdProcessSetGroupEnabled(0xdb,1);
          asdProcessSetGroupEnabled(0xde,1);
          asdProcessSetGroupEnabled(0xdf,1);
        }
        else {
          DAT_00446db1 = '\0';
          asdProcessSetGroupEnabled(0xcc,0);
          asdProcessSetGroupEnabled(0xd8,0);
          asdProcessSetGroupEnabled(0xdb,0);
          asdProcessSetGroupEnabled(0xde,0);
          asdProcessSetGroupEnabled(0xdf,0);
        }
        asdGxSetChannelFlags(0,temp_v2 == 0);
        temp_v2 = 0;
        if ((DAT_00446db1 != '\0') && (temp_v2 = iRam00446dcc + 1, iRam00446dcc + 1 >= 3)) {
          temp_v2 = 2;
        }
        iRam00446dcc = temp_v2;
        FUN_00102438();
        if (DAT_00446db4 != '\0') {
          FUN_00105970();
          if (DAT_00446db4 != '\0') {
            if (iRam00446dc0 >= 0x1e) {
              iRam00446dc0 = iRam00446dc0 - 0x1e;
              FUN_0010402c(1);
              temp_v2 = FUN_00107538(1);
              if (temp_v2 != 0) {
                dataTable02Sub3GetRecord();
                FUN_00107264();
              }
            }
            iRam00446dc0 = iRam00446dc0 + 1;
            FUN_00105394();
          }
        }
        asdProcessUpdate(0);
        temp_v24 = romwright_piece_4_4(temp_v5,(unsigned int)DAT_00446db3);
        temp_v23 = uRam00446dd0.whole;
        if (DAT_00446db3 == 0) {
          temp_v4 = (unsigned int)g_mobiclipProcess;
          if (temp_v4 == 0) {
            FUN_0010633c();
            soundFlushEventQueue();
            temp_v4 = FUN_00106708();
          }
          asdPrimSwapBuffers(temp_v4);
          asdGxSubmitFrame(iRam00446dcc >= 2);
          temp_v24 = jyoucyuGetTableEntry(1);
          temp_v4 = (unsigned int)temp_v24;
          temp_v15 = temp_v4 == 0;
          if (temp_v15) {
            temp_v4 = (unsigned int)g_mobiclipProcess;
          }
          temp_v24 = romwright_piece_4_4((int)((unsigned long long)temp_v24 >> 0x20),temp_v4);
          temp_v23 = uRam00446dd0.whole;
          if (temp_v15 && temp_v4 == 0) {
            temp_v24 = asdSoundRefreshPlayerState();
            temp_v23 = uRam00446dd0.whole;
          }
        }
        uRam00446dd0.s4[1] = (int)(temp_v23 >> 0x20);
        uRam00446dd0.u4[0] = (unsigned int)temp_v23;
        software_interrupt(0x28);
        temp_v12 = (unsigned int)temp_v24 - (unsigned int)uRam00446dd0.whole;
        temp_v4 = (int)((unsigned long long)temp_v24 >> 0x20) -
                (uRam00446dd0.s4[1] + (unsigned int)((unsigned int)temp_v24 < (unsigned int)uRam00446dd0.whole));
        temp_v25 = (unsigned long long)temp_v12 * 3 +
                 (((unsigned long long)
                   (unsigned int)(((int)temp_v4 >> 0x1f) * -0x452cb512 +
                         (int)((unsigned long long)temp_v4 * 0xbad34aee >> 0x20)) << 0x20) |
                 (((unsigned long long)temp_v4 * 0xbad34aee) & 0xffffffff)) +
                 romwright_piece_4_4(temp_v4 * 3,(int)((unsigned long long)temp_v12 * 0xbad34aee >> 0x20));
        temp_v6 = (unsigned int)(temp_v25 >> 0x20);
        temp_v2 = (int)temp_v6 >> 0x1f;
        temp_v1 = (unsigned long long)temp_v6 * 0xe353f7cf +
                romwright_piece_4_4(temp_v2 * -0x1cac0831,(int)((temp_v25 & 0xffffffff) * 0xe353f7cf >> 0x20));
        temp_v14 = (unsigned int)((unsigned long long)temp_v1 >> 0x20);
        temp_v0 = (temp_v25 & 0xffffffff) * 0x20c49ba5;
        temp_v13 = (unsigned int)((unsigned long long)temp_v6 * 0x20c49ba5);
        temp_v4 = (int)((unsigned long long)temp_v0 >> 0x20) + (unsigned int)romwright_carry_4((unsigned int)temp_v1,(unsigned int)temp_v0);
        temp_v12 = temp_v4 + temp_v14;
        uRam00446dd8.whole = temp_v24;
        uRam00446dd0.whole = temp_v23;
        asdGxPresetsGetDepth();
        temp_v17 = (float)VectorSignedToFloat((((temp_v13 + temp_v12) >> 7) |
                                            ((temp_v2 * 0x20c49ba5 +
                                              (int)((unsigned long long)temp_v6 * 0x20c49ba5 >> 0x20) +
                                              ((int)temp_v14 >> 0x1f) + (unsigned int)romwright_carry_4(temp_v4,temp_v14) +
                                             (unsigned int)romwright_carry_4(temp_v13,temp_v12)) * 0x2000000)) - temp_v2,
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v22 = (float)(int)((temp_v17 * temp_v16) / temp_v22);
        DAT_00446dc8 = temp_v22;
        if (g_mobiclipProcess == 0) {
          if ((int)temp_v22 < 100) {
            FUN_001052d8();
          }
          else {
            asdGxResumeAndApplyPreset();
          }
        }
        if (DAT_00446db3 != 0) {
          temp_v2 = gameDataHasNoFlags();
          if (temp_v2 != 0) {
            FUN_00123934();
            if (g_mobiclipProcess != 0) {
              mobiclipCloseSlot(3);
            }
            FUN_00107598();
            temp_v2 = FUN_001041c8();
            if (temp_v2 != 0) {
              FUN_00103d48();
            }
            temp_v2 = appletGetBusyFlag();
            if (temp_v2 != 0) {
              FUN_00103c9c();
            }
            temp_v2 = FUN_001050cc();
            if (temp_v2 != 0) {
              sysShutdownAndClearBusy();
            }
            asdSoundShutdown();
            FUN_00103504();
            appletCloseApplication();
          }
        }
        temp_v24 = appletProcessSleepQuery();
        temp_v3 = (unsigned int)((unsigned long long)temp_v24 >> 0x20);
        if ((int)temp_v24 == 2) {
          if (g_mobiclipProcess != 0) {
            mobiclipCloseSlot(2);
          }
          appletReplySleepQueryAllow();
          FUN_002c5620();
          appletUnlockAndRestoreDisplay();
          temp_v3 = temp_v7;
          if (g_mobiclipProcess != 0) {
            FUN_002c560c(2);
            temp_v3 = temp_v8;
          }
        }
        temp_v23 = romwright_piece_4_4(temp_v3,(unsigned int)DAT_00446db3);
      } while (DAT_00446db3 != 0);
      temp_v24 = appletProcessHomeButton();
      temp_v3 = (unsigned int)((unsigned long long)temp_v24 >> 0x20);
      temp_v2 = (int)temp_v24;
      if (!(temp_v2 == 1 || temp_v2 == 2)) {
        if (temp_v2 == 3) {
          if (DAT_00446db2 != '\0') {
            appletUnlockAndSleepIfShellClosed();
            temp_v3 = temp_v9;
          }
          else {
            if (g_mobiclipProcess != 0) {
              mobiclipCloseSlot(0);
            }
            FUN_00123934();
            FUN_00106e60();
            temp_v24 = appletIsExitRequested();
            temp_v3 = (unsigned int)((unsigned long long)temp_v24 >> 0x20);
            if ((int)temp_v24 == 0) {
              temp_v24 = FUN_002c55b4();
              temp_v3 = (unsigned int)((unsigned long long)temp_v24 >> 0x20);
              if ((int)temp_v24 != 0) {
                if (g_mobiclipProcess != 0) {
                  mobiclipCloseSlot(3);
                  nn_applet_CTR_detail_CloseApplication((unsigned char *)0x0,0,DAT_0044e368);
                  temp_v3 = temp_v10;
                }
                DAT_00446db3 = 1;
              }
            }
            else {
              if (g_mobiclipProcess != 0) {
                mobiclipCloseSlot(3);
                nn_applet_CTR_detail_CloseApplication((unsigned char *)0x0,0,DAT_0044e368);
                temp_v3 = temp_v10;
              }
              DAT_00446db3 = 1;
            }
            temp_v23 = romwright_piece_4_4(temp_v3,(unsigned int)DAT_00446db3);
            if (DAT_00446db3 != 0) goto LAB_00101b80;
            if (g_mobiclipProcess != 0) {
              FUN_002c560c(0);
            }
            FUN_002c5620();
            temp_v3 = temp_v11;
          }
        }
      }
      else {
        if (DAT_00446db2 == '\0') {
          DAT_00446dc4 = 0x58;
        }
        DAT_00446db2 = '\x01';
      }
      temp_v23 = romwright_piece_4_4(temp_v3,(unsigned int)DAT_00446db3);
    } while (DAT_00446db3 != 0);
    temp_v25 = FUN_00105478();
    temp_v23 = temp_v25 & 0xffffffff00000000;
  } while ((int)temp_v25 == 0);
  sleepQueryAnswer(1);
  if (g_mobiclipProcess != 0) {
    mobiclipCloseSlot(1);
  }
  FUN_00123934();
  FUN_00106f70();
  FUN_00103f90();
  temp_v2 = appletIsExitRequested();
  if (temp_v2 == 0) {
    temp_v2 = FUN_002c55b4();
    if (temp_v2 != 0) {
      if (g_mobiclipProcess != 0) {
        mobiclipCloseSlot(3);
        nn_applet_CTR_detail_CloseApplication((unsigned char *)0x0,0,DAT_0044e368);
      }
      DAT_00446db3 = 1;
    }
  }
  else {
    if (g_mobiclipProcess != 0) {
      mobiclipCloseSlot(3);
      nn_applet_CTR_detail_CloseApplication((unsigned char *)0x0,0,DAT_0044e368);
    }
    DAT_00446db3 = 1;
  }
  if ((DAT_00446db3 == 0) && (g_mobiclipProcess != 0)) {
    FUN_002c560c(1);
  }
  temp_v23 = FUN_002c5434(1);
  goto LAB_00101b80;
}

} /* extern "C" */
