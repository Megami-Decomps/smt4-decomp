/* NON_MATCHING: oversized recovered state machine differs from retail control flow; removed a draft flag-set call absent from the retail unit. */
#include "romwright_types.h"

extern "C" {

int FUN_0030250c(...);
int FUN_003033d4(...);
int mathVec3Dot(...);
int FUN_00330108(...);
int FUN_00352568(...);
int FUN_00376c64(...);
int controllerSetDestination(...);
int controllerSetRotationEulerDegrees(...);
int VectorFloatToUnsigned(...);
int nn_math_ARMv6_VEC3TransformAsm_2AD44C(...);

int FUN_0013cab8(...);
int asdMemoryAllocTracked(...);
int FUN_00178b04(...);
int FUN_00234118(...);
int calcHeadingRoundedToCardinalDirection(...);
int FUN_00291038(...);
int FUN_002b56e0(...);
int FUN_002d1780(...);
int FUN_002d1e44(...);
int FUN_003026d8(...);
int FUN_003128d8(...);
int FUN_0033982c(...);
int FUN_0033a374(...);
int linkHolderSetFlag(...);
int linkHolderClearFlag(...);
int FUN_003fd924(...);
int FUN_003fe86c(...);
int itemTableClear(...);
int FUN_0045adc0(...);
int FUN_0049fc88(...);
int mapIfReleaseHandle(...);
int mapInterfaceUnregisterHandle(...);

int FUN_0015f858(...);
int FUN_001681c4(...);
int FUN_002950a8(...);
int mapTrapGetUnk3C(...);
int FUN_00303bd4(...);
int naviMainSetFlagsAndActivate(...);
int FUN_003180c4(...);
int lmapSceneRestoreEntryPosition(...);
int mapTrapEnable(...);
int naviMainApplyRequestValue(...);
int FUN_00365c94(...);
int naviMainSetRequestTriple(...);
int uiPlayGatedActionFeedback(...);
int FUN_003d54f8(...);
int playerSetClampedValue(...);
int linkedTargetSetFloat(...);
int flagValueSub(...);
int FUN_0049fe58(...);
int VectorUnsignedToFloat(...);

int FUN_001628c0(...);
int slotSetRequest(...);
int mapIfShowActionMarker(...);
int popupStateClose(...);
int mapIfReleaseResource(...);
void FUN_00297f00(int value, int count);
int mapIfReleaseSlot4(...);
int mapTrapArm(...);
int FUN_002c2d44(...);
int FUN_002de104(...);
int FUN_003024a0(...);
int mapMainStartEntry(...);
int mapTrapGetUnk38(...);
int FUN_003d2158(...);
int linkHolderApplyFirst(...);

int mapIfSetMode1(...);
int FUN_002342b8(...);
int mapIfSpawnCaveAction(...);
int FUN_00246014(...);
int mapIfReleasePanel(...);
int mapIfOverlayRelease(...);
int mapIfReleaseSlot2(...);
int mapIfReleaseSlot3(...);
int FUN_00325ba4(...);
int mapIfReleaseRequestObject(...);
int FUN_00352308(...);
int mapIfReleaseSlot1(...);
int FUN_003b5714(...);

int soundVolumeSettingSet(...);
int FUN_0014af98(...);
int sysPlaySe(...);
int FUN_00233e10(...);
int mapIfSpawnManholeAction(...);
int FUN_002d1f40(...);
int FUN_00303460(...);
int FUN_003250ac(...);
int FUN_0033abd4(...);
int mathPositionHeadingDegrees(...);
int slotTargetApplyActiveValue(...);

int soundVolumeSettingGet(...);
int FUN_002b621c(...);
int mapEaseSceneHeading(...);
int FUN_003135bc(...);
int mapSpawnRandomEventKindEffect(...);
int FUN_00324e38(...);
int FUN_0033ad04(...);
int sysPlayVoice(...);
int FUN_003d4ed8(...);
int gameDataFlagTestBit(...);
int controllerGetSourceValue(...);
int controllerGetSourceTiming(...);
int FUN_003fd7c0(...);
int FUN_004a0524(...);
int FUN_004a08f0(...);
int __aeabi_memcpy4(...);

int CONCAT44(...);
int gameFlagsGetBlock(...);
int randBetween(...);
int FUN_001bbf0c(...);
int FUN_001bc124(...);
int FUN_002469d0(...);
int FUN_0025ef68(...);
float mathSnapHeading16(float angle);
float calcHeadingRoundedTo32Directions(float angle);
int FUN_00294c28(...);
int FUN_00295108(...);
int distSpatial(...);
int mathAngleDeltaDegrees(...);
int FUN_002b80b8(...);
int FUN_002e364c(...);
int mapSetSceneState(...);
int FUN_00317af8(...);
int FUN_00325998(...);
int FUN_00327ee8(...);
void lmapSceneStartMovement(unsigned char);
int FUN_00354098(...);
int FUN_00408184(...);
int FUN_004a01c8(...);
int FUN_0050d8e4(...);
int SBORROW4(...);
int VectorSignedToFloat(...);

#ifndef ROMWRIGHT_FLOAT_BITS_DEFINED
#define ROMWRIGHT_FLOAT_BITS_DEFINED
static unsigned int romwright_f2u(float value)
{
    union { float f; unsigned int u; } bits;
    bits.f = value;
    return bits.u;
}
static float romwright_u2f(unsigned int value)
{
    union { float f; unsigned int u; } bits;
    bits.u = value;
    return bits.f;
}
#endif
extern unsigned char LAB_002d94f8; /* 0x2d94f8 */
extern unsigned char LAB_002d9eec; /* 0x2d9eec */
extern unsigned char LAB_002d9efc; /* 0x2d9efc */
extern unsigned char LAB_002da77c; /* 0x2da77c */
extern unsigned char LAB_002dab1c; /* 0x2dab1c */
extern unsigned char LAB_002dae38; /* 0x2dae38 */
extern unsigned char LAB_002dae40; /* 0x2dae40 */
extern unsigned char LAB_002dae54; /* 0x2dae54 */
extern unsigned char DAT_00531c18; /* 0x531c18 */
extern unsigned char DAT_00531cb8; /* 0x531cb8 */
extern unsigned char DAT_00531d58; /* 0x531d58 */
extern unsigned char DAT_00531df8; /* 0x531df8 */
extern unsigned int DAT_00536d14; /* 0x536d14 */
extern unsigned int DAT_00536d18; /* 0x536d18 */
extern unsigned int DAT_00536d1c; /* 0x536d1c */
extern unsigned int DAT_00536d20; /* 0x536d20 */
extern int g_handleRegistry; /* 0x56fcc0 */
extern int *g_lmapView; /* 0x5806a4 */
extern int *g_lmapScene; /* 0x581288 */
extern char s______________________00581290[67]; /* 0x581290 */
extern float g_localCameraPosition; /* 0x5f15d8 */
extern float DAT_005f15dc; /* 0x5f15dc */
extern float DAT_005f15e0; /* 0x5f15e0 */
extern unsigned int *g_gameState; /* 0x5f15fc */
extern unsigned int *DAT_005f1600; /* 0x5f1600 */
extern unsigned int DAT_005f1604; /* 0x5f1604 */
extern unsigned int DAT_005f1608; /* 0x5f1608 */
extern signed char DAT_005f1614; /* 0x5f1614 */
extern unsigned int DAT_005f1618; /* 0x5f1618 */
extern unsigned char DAT_005f161c; /* 0x5f161c */
extern unsigned char DAT_005f161d; /* 0x5f161d */
extern signed char DAT_005f161e; /* 0x5f161e */
extern unsigned char DAT_005f162e; /* 0x5f162e */
extern unsigned char DAT_005f162f; /* 0x5f162f */
extern unsigned char DAT_005f1631; /* 0x5f1631 */
extern unsigned char DAT_005f1633; /* 0x5f1633 */
extern int DAT_005f164c; /* 0x5f164c */
extern unsigned int DAT_005f16a0; /* 0x5f16a0 */
extern unsigned int DAT_005f16a4; /* 0x5f16a4 */
extern unsigned int DAT_005f16a8; /* 0x5f16a8 */
extern unsigned int DAT_005f16ac; /* 0x5f16ac */
extern float DAT_005f16b0; /* 0x5f16b0 */
extern float DAT_005f16b4; /* 0x5f16b4 */
extern float DAT_005f16b8; /* 0x5f16b8 */
extern float DAT_005f16bc; /* 0x5f16bc */
extern float DAT_005f16cc; /* 0x5f16cc */
extern int DAT_005f16e0; /* 0x5f16e0 */
extern int DAT_005f16f0; /* 0x5f16f0 */
extern int DAT_005f16f4; /* 0x5f16f4 */
extern int DAT_005f16f8; /* 0x5f16f8 */
extern int DAT_005f16fc; /* 0x5f16fc */
extern int DAT_005f1700; /* 0x5f1700 */
extern int DAT_005f1704; /* 0x5f1704 */
extern int DAT_005f1708; /* 0x5f1708 */
extern int DAT_005f170c; /* 0x5f170c */
extern int DAT_005f1710; /* 0x5f1710 */
extern int DAT_005f1714; /* 0x5f1714 */
extern int DAT_005f1718; /* 0x5f1718 */
extern int DAT_005f171c; /* 0x5f171c */
extern int DAT_005f1720; /* 0x5f1720 */
extern signed char DAT_005f1774; /* 0x5f1774 */
extern signed char DAT_005f17ac; /* 0x5f17ac */
extern int DAT_005f17b0; /* 0x5f17b0 */
extern int DAT_005f17b4; /* 0x5f17b4 */
extern int DAT_005f17b8; /* 0x5f17b8 */
extern int DAT_005f17bc; /* 0x5f17bc */
extern short DAT_005f17c0; /* 0x5f17c0 */
extern unsigned short DAT_005f17c2; /* 0x5f17c2 */
extern short DAT_005f17c4; /* 0x5f17c4 */
extern signed char DAT_005f17d0; /* 0x5f17d0 */
extern unsigned int DAT_005f17d4; /* 0x5f17d4 */
extern int DAT_005f1848; /* 0x5f1848 */
extern unsigned char DAT_005f1859; /* 0x5f1859 */
extern unsigned char DAT_005f185a; /* 0x5f185a */
extern signed char DAT_005f188c; /* 0x5f188c */
extern float DAT_005f19d0; /* 0x5f19d0 */
extern signed char DAT_005f19ee; /* 0x5f19ee */
extern float DAT_005f1a04; /* 0x5f1a04 */
extern float DAT_005f1a0c; /* 0x5f1a0c */
extern float DAT_005f1a10; /* 0x5f1a10 */
extern float DAT_005f1a14; /* 0x5f1a14 */
extern float DAT_005f1a18; /* 0x5f1a18 */
extern float DAT_005f1a1c; /* 0x5f1a1c */
extern int DAT_005f1a20; /* 0x5f1a20 */
extern float DAT_005f1a24; /* 0x5f1a24 */
extern float DAT_005f1a28; /* 0x5f1a28 */
extern float DAT_005f1a2c; /* 0x5f1a2c */
extern float DAT_005f1a30; /* 0x5f1a30 */
extern float DAT_005f1a34; /* 0x5f1a34 */
extern float DAT_005f1a38; /* 0x5f1a38 */
extern float DAT_005f1a3c; /* 0x5f1a3c */
extern float DAT_005f1a40; /* 0x5f1a40 */
extern float DAT_005f1a44; /* 0x5f1a44 */
extern float DAT_005f1a48; /* 0x5f1a48 */
extern unsigned char DAT_005f1a4c; /* 0x5f1a4c */
extern signed char DAT_005f1a4d; /* 0x5f1a4d */
extern unsigned char DAT_005f1a4e; /* 0x5f1a4e */
extern unsigned char DAT_005f1a4f; /* 0x5f1a4f */
extern int DAT_005f1a50; /* 0x5f1a50 */
extern signed char DAT_005f1a54; /* 0x5f1a54 */
extern unsigned char DAT_005f1adc; /* 0x5f1adc */
extern signed char DAT_005f1bc4; /* 0x5f1bc4 */
extern int DAT_005f1be4; /* 0x5f1be4 */
extern signed char DAT_005f1c48; /* 0x5f1c48 */
extern int DAT_005f1c64; /* 0x5f1c64 */
extern int DAT_005f1c94; /* 0x5f1c94 */
extern int DAT_006160dc; /* 0x6160dc */

/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
#ifndef ROMWRIGHT_SUBPIECE_4_2_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_2_0_DEFINED
#define romwright_subpiece_4_2_0(value, offset) ((unsigned short)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: soundVolumeSettingSet. */
/* Supplied declaration required: FUN_0013cab8. */
/* Supplied declaration required: soundVolumeSettingGet. */
/* Supplied declaration required: FUN_0014af98. */
extern unsigned int FUN_00152f44(void);
/* Supplied declaration required: FUN_0015f858. */
/* Supplied declaration required: FUN_001628c0. */
/* Supplied declaration required: gameFlagsGetBlock. */
/* Supplied declaration required: asdMemoryAllocTracked. */
extern int padButtonRepeat(unsigned int);
extern int padButtonIsPressed(unsigned int);
/* Supplied declaration required: FUN_001681c4. */
/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: randBetween. */
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: FUN_001bbf0c. */
/* Supplied declaration required: FUN_001bc124. */
/* Supplied declaration required: slotSetRequest. */
/* Supplied declaration required: mapIfSetMode1. */
/* Supplied declaration required: mapIfShowActionMarker. */
/* Supplied declaration required: FUN_00233e10. */
/* Supplied declaration required: FUN_00234118. */
/* Supplied declaration required: FUN_002342b8. */
/* Supplied declaration required: mapIfSpawnCaveAction. */
/* Supplied declaration required: FUN_00246014. */
/* Supplied declaration required: popupStateClose. */
/* Supplied declaration required: FUN_002469d0. */
/* Supplied declaration required: FUN_0025ef68. */
/* Supplied declaration required: calcHeadingRoundedToCardinalDirection. */
/* Supplied declaration required: FUN_00291038. */
extern unsigned int FUN_0029202c(void);
extern int mapIfHasSelection(void);
/* Supplied declaration required: mapIfReleaseResource. */
/* Supplied declaration required: FUN_00294c28. */
/* Supplied declaration required: FUN_002950a8. */
/* Supplied declaration required: FUN_00295108. */
/* Supplied declaration required: FUN_00297f00. */
/* Supplied declaration required: FUN_002b56e0. */
/* Supplied declaration required: distSpatial. */
/* Supplied declaration required: mathAngleDeltaDegrees. */
/* Supplied declaration required: FUN_002b621c. */
/* Supplied declaration required: mapIfSpawnManholeAction. */
/* Supplied declaration required: mapIfReleaseSlot4. */
/* Supplied declaration required: FUN_002b80b8. */
/* Supplied declaration required: mapTrapGetUnk3C. */
/* Supplied declaration required: mapTrapArm. */
/* Supplied declaration required: FUN_002c2d44. */
/* Supplied declaration required: FUN_002d1780. */
/* Supplied declaration required: FUN_002d1e44. */
/* Supplied declaration required: FUN_002d1f40. */
/* Supplied declaration required: mapIfReleasePanel. */
/* Supplied declaration required: mapIfOverlayRelease. */
/* Supplied declaration required: mapEaseSceneHeading. */
/* Supplied declaration required: FUN_002de104. */
extern int FUN_002e07f4(void);
/* Supplied declaration required: FUN_002e364c. */
extern int FUN_002e5db4(void);
/* Supplied declaration required: FUN_003024a0. */
/* Supplied declaration required: FUN_0030250c. */
/* Supplied declaration required: FUN_003026d8. */
/* Supplied declaration required: FUN_003033d4. */
/* Supplied declaration required: FUN_00303460. */
/* Supplied declaration required: FUN_00303bd4. */
/* Supplied declaration required: FUN_003128d8. */
/* Supplied declaration required: mapIfReleaseSlot2. */
/* Supplied declaration required: mapIfReleaseSlot3. */
extern int mapJobIsDone(void);
/* Supplied declaration required: mapMainStartEntry. */
/* Supplied declaration required: FUN_003135bc. */
/* Supplied declaration required: mapSetSceneState. */
/* Supplied declaration required: mapTrapGetUnk38. */
/* Supplied declaration required: naviMainSetFlagsAndActivate. */
/* Supplied declaration required: FUN_00317af8. */
/* Supplied declaration required: FUN_003180c4. */
/* Supplied declaration required: lmapSceneRestoreEntryPosition. */
/* Supplied declaration required: mathVec3Dot. */
/* Supplied declaration required: mapSpawnRandomEventKindEffect. */
/* Supplied declaration required: FUN_00324e38. */
/* Supplied declaration required: FUN_003250ac. */
/* Supplied declaration required: FUN_00325998. */
/* Supplied declaration required: FUN_00325ba4. */
/* Supplied declaration required: mapTrapEnable. */
/* Supplied declaration required: FUN_00327ee8. */
/* Supplied declaration required: FUN_00330108. */
/* Supplied declaration required: FUN_0033982c. */
/* Supplied declaration required: FUN_0033a374. */
/* Supplied declaration required: FUN_0033abd4. */
/* Supplied declaration required: FUN_0033ad04. */
/* Supplied declaration required: mapIfReleaseRequestObject. */
/* Supplied declaration required: naviMainApplyRequestValue. */
/* Supplied declaration required: FUN_00352308. */
/* Supplied declaration required: FUN_00352568. */
/* Supplied declaration required: mathPositionHeadingDegrees. */
/* Supplied declaration required: mapIfReleaseSlot1. */
/* Supplied declaration required: FUN_00354098. */
/* Supplied declaration required: FUN_00365c94. */
/* Supplied declaration required: FUN_00376c64. */
extern int dataTableGetRecord23(void);
/* Supplied declaration required: naviMainSetRequestTriple. */
/* Supplied declaration required: uiPlayGatedActionFeedback. */
extern unsigned int asdModelGetStatic38(void);
/* Supplied declaration required: FUN_003b5714. */
/* Supplied declaration required: sysPlayVoice. */
/* Supplied declaration required: FUN_003d2158. */
/* Supplied declaration required: FUN_003d4ed8. */
/* Supplied declaration required: FUN_003d54f8. */
extern unsigned int FUN_003e0034(void);
/* Supplied declaration required: playerSetClampedValue. */
/* Supplied declaration required: gameDataFlagTestBit. */
extern int linkHolderCallFirst(int);
/* Supplied declaration required: controllerGetSourceValue. */
/* Supplied declaration required: linkHolderApplyFirst. */
/* Supplied declaration required: slotTargetApplyActiveValue. */
extern int linkHolderCheckFirst(int);
/* Supplied declaration required: controllerGetSourceTiming. */
/* Supplied declaration required: linkedTargetSetFloat. */
/* Supplied declaration required: linkHolderSetFlag. */
/* Supplied declaration required: linkHolderClearFlag. */
/* Supplied declaration required: controllerSetDestination. */
/* Supplied declaration required: FUN_003fd7c0. */
/* Supplied declaration required: FUN_003fd924. */
/* Supplied declaration required: controllerSetRotationEulerDegrees. */
/* Supplied declaration required: FUN_003fe86c. */
/* Supplied declaration required: FUN_00408184. */
/* Supplied declaration required: itemTableClear. */
/* Supplied declaration required: FUN_0045adc0. */
/* Supplied declaration required: flagValueSub. */
/* Supplied declaration required: FUN_0049fc88. */
/* Supplied declaration required: FUN_0049fe58. */
/* Supplied declaration required: FUN_004a01c8. */
/* Supplied declaration required: FUN_004a0524. */
/* Supplied declaration required: FUN_004a08f0. */
extern int partyAnyMemberHasFlagBit(unsigned int, unsigned int);
extern int inputIsQuestCancelPressed(void);
extern int inputIsQuestMenuPressed(void);
extern int FUN_004d0584(void);
extern unsigned int slots4FGetActiveValue(void);
/* Supplied declaration required: FUN_0050d8e4. */
/* Supplied declaration required: mapIfReleaseHandle. */
/* Supplied declaration required: mapInterfaceUnregisterHandle. */
/* Supplied declaration required: nn_math_ARMv6_VEC3TransformAsm_2AD44C. */
/* Supplied declaration required: __aeabi_memcpy4. */


/* WARNING: Removing unreachable block (ram,0x00397c1c) */
/* WARNING: Removing unreachable block (ram,0x002da738) */
/* WARNING: Removing unreachable block (ram,0x00397c3c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_00246bd4(void)

{
/* irregular: 68 goto(s); irregular input(s): in_d10, in_d11, in_d12, in_d13, in_d14, in_d8, in_d9, in_fpscr, in_s0; 150 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int *puVar6;
  int *piVar7;
  float *pfVar8;
  unsigned int temp_v5;
  int *piVar10;
  unsigned int *puVar11;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  short temp_v11;
  int temp_v12;
  float unaff_r6;
  float *pfVar16;
  unsigned int *puVar17;
  float unaff_r7;
  int *piVar18;
  int temp_v13;
  unsigned char temp_v14;
  unsigned char temp_v15;
  unsigned char temp_v16;
  int *piVar23;
  unsigned int in_fpscr;
  int in_s0;
  unsigned int temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  unsigned int temp_v21;
  unsigned int temp_v22;
  unsigned int temp_v23;
  float temp_v24;
  float temp_v25;
  float temp_v26;
  float temp_v27;
  float temp_v28;
  float temp_v29;
  float temp_v30;
  float temp_v31;
  int temp_v32;
  unsigned long long in_d8;
  unsigned long long temp_v33;
  unsigned long long temp_v34;
  float temp_v35;
  unsigned long long in_d9;
  unsigned long long temp_v36;
  float temp_v37;
  unsigned long long in_d10;
  unsigned long long temp_v38;
  unsigned long long in_d11;
  unsigned long long temp_v39;
  unsigned long long temp_v40;
  unsigned long long in_d12;
  unsigned long long temp_v41;
  unsigned long long in_d13;
  unsigned long long temp_v42;
  unsigned long long in_d14;
  int iStack_304;
  int iStack_300;
  int iStack_2fc;
  unsigned int uStack_2f8;
  float afStack_2f4 [3];
  float afStack_2e8 [40];
  float afStack_248 [38];
  unsigned char temp_v43 [4];
  float fStack_1ac;
  float afStack_1a8 [3];
  int iStack_19c;
  unsigned int uStack_190;
  unsigned int temp_v44 [33];
  float afStack_108 [20];
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  int iStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  unsigned int uStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  unsigned int uStack_74;
  unsigned int uStack_70;
  float fStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned int uStack_60;
  unsigned long long uStack_5c;
  unsigned long long uStack_54;
  unsigned long long uStack_4c;
  unsigned long long uStack_44;
  float fStack_3c;
  int iStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  temp_v32 = iStack_38;
  temp_v19 = fStack_3c;
  temp_v18 = DAT_005f16bc;
  piVar18 = g_lmapScene;
  fStack_20 = (float)in_d8;
  temp_v35 = fStack_20;
  fStack_1c = (float)(in_d8 >> 0x20);
  temp_v37 = fStack_1c;
  fStack_3c = (float)in_d12;
  iStack_38 = (int)((unsigned long long)in_d12 >> 0x20);
  fStack_20 = (float)in_d10;
  fStack_1c = (float)(in_d10 >> 0x20);
  fStack_2c = (float)in_d11;
  fStack_28 = (float)((unsigned long long)in_d11 >> 0x20);
  temp_v25 = fStack_28;
  fStack_28 = (float)in_d9;
  fStack_24 = (float)((unsigned long long)in_d9 >> 0x20);
  fStack_30 = temp_v25;
  switch(*g_lmapScene) {
  case 1:
    fStack_34 = (float)in_d13;
    fStack_30 = (float)((unsigned long long)in_d13 >> 0x20);
    fStack_2c = (float)in_d14;
    fStack_28 = (float)((unsigned long long)in_d14 >> 0x20);
    temp_v6 = gameFlagsGetBlock();
    temp_v37 = 20.0f;
    temp_v15 = 0;
    temp_v19 = 0.0f;
    temp_v5 = 0;
    temp_v25 = temp_v37;
    temp_v17 = FUN_0029202c();
    temp_v27 = 2.0f;
    temp_v35 = (float)VectorSignedToFloat(temp_v17,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v35 = temp_v35 * 0.01f;
    temp_v16 = SBORROW4((int)temp_v35,0x40000000);
    temp_v32 = (int)temp_v35 - 0x40000000;
    temp_v14 = temp_v35 == 2.0f;
    temp_v18 = temp_v27;
    if ((int)temp_v35 < 0x40000001) {
      temp_v16 = SBORROW4((int)temp_v35,0x3f800000);
      temp_v32 = (int)temp_v35 - 0x3f800000;
      temp_v14 = temp_v35 == 1.0f;
      temp_v18 = temp_v35;
    }
    if ((!temp_v14 && temp_v32 < 0 == temp_v16) && (temp_v37 = temp_v37 * temp_v18, (int)temp_v37 >= 0x420c0001)) {
      temp_v37 = 35.0f;
    }
    if (DAT_005f1c64 != 0) {
      temp_v37 = temp_v37 * 2.5f;
    }
    if ((DAT_005f1bc4 != '\0') || (DAT_005f1614 != '\0')) {
LAB_002b82a8:
      *(unsigned int *)(temp_v6 + 0xdc8) = 0;
      *(unsigned int *)(temp_v6 + 0x1518) = 0;
      *(unsigned int *)(temp_v6 + 0x151c) = 0;
      piVar18 = g_lmapScene;
      g_lmapScene[0x9d] = 0;
      piVar18[0x9e] = 0;
      piVar18[0x9f] = 0;
      FUN_002e364c(piVar18 + 10);
      FUN_00327ee8();
      return;
    }
    temp_v10 = DAT_005f1618;
    if ((int)DAT_005f1618 < 1) {
      temp_v10 = (unsigned int)DAT_005f161d;
    }
    if (temp_v10 != 0) goto LAB_002b82a8;
    if (0 < *(int *)(temp_v6 + 0xdcc)) {
      *(int *)(temp_v6 + 0xdcc) = *(int *)(temp_v6 + 0xdcc) - 1;
    }
    FUN_00354098();
    temp_v33 = *(unsigned long long *)(g_lmapScene + 10);
    temp_v36 = CONCAT44(temp_v37,g_lmapScene[0xc]);
    FUN_00317af8(&fStack_6c,&uStack_70,0);
    temp_v14 = 0;
    *(unsigned char *)(g_lmapScene + 0x1b) = 0;
    temp_v32 = gameFlagIsSet(0xc);
    if ((temp_v32 != 0) && (temp_v32 = gameFlagIsSet(0x10), temp_v32 == 0)) {
      temp_v14 = 1;
    }
    if (DAT_005f1be4 == 0 || DAT_005f1be4 == 3) {
      if (*(short *)((int)g_lmapScene + 0x19a) >= 1) {
        *(short *)((int)g_lmapScene + 0x19a) = *(short *)((int)g_lmapScene + 0x19a) - 1;
      }
      else {
        temp_v32 = inputIsQuestCancelPressed();
        puVar6 = (unsigned int *)0x0;
        if (temp_v32 != 0) {
          puVar6 = g_gameState;
        }
        if ((((temp_v32 != 0 && puVar6 != (unsigned int *)0x24) && (g_lmapView[0x2c] == 0)) &&
            (temp_v32 = gameFlagIsSet(0x49a), temp_v32 != 0)) && (DAT_005f19ee == '\0' && !temp_v14)) {
          *(unsigned int *)(temp_v6 + 0xdc8) = 0;
          *(unsigned int *)(temp_v6 + 0x1518) = 0;
          *(unsigned int *)(temp_v6 + 0x151c) = 0;
          piVar18 = g_lmapScene;
          g_lmapScene[0x9d] = 0;
          piVar18[0x9e] = 0;
          piVar18[0x9f] = 0;
          mapSetSceneState(3);
          FUN_00408184(0x14,1);
          FUN_002e364c(g_lmapScene + 10);
          FUN_00327ee8();
          if (g_lmapScene[0x74] == 1 || g_lmapScene[0x74] == 9) {
            lmapSceneStartMovement(0);
          }
          return;
        }
      }
    }
    if (DAT_005f1be4 == 1) {
      if (DAT_005f1c48 != '\0') {
        temp_v32 = padButtonIsPressed(1);
        if (temp_v32 != 0) {
          DAT_005f1c48 = '\0';
        }
        temp_v32 = padButtonRepeat(5);
        temp_v18 = 50.0f;
        if (temp_v32 != 0) {
          g_lmapScene[0xb] = (int)((float)g_lmapScene[0xb] + 50.0f);
        }
        temp_v32 = padButtonRepeat(6);
        if (temp_v32 != 0) {
          g_lmapScene[0xb] = (int)((float)g_lmapScene[0xb] - temp_v18);
        }
      }
      else {
        temp_v32 = padButtonIsPressed(1);
        if (temp_v32 != 0) {
          DAT_005f1c48 = '\x01';
        }
      }
    }
    if ((((unsigned int)fStack_6c < 0xbf000000) && ((int)fStack_6c < 0x3f000000)) &&
       ((uStack_70 < 0xbf000000 && ((int)uStack_70 < 0x3f000000)))) {
      temp_v15 = 1;
    }
    temp_v42 = CONCAT44(0x447a0000,temp_v25);
    if (g_lmapView[0x2c] != 0) {
      temp_v15 = 1;
    }
    if ((DAT_005f161e != '\0') && (DAT_005f1c48 == '\0')) {
      if ((!temp_v15) ||
         ((temp_v10 = g_lmapScene[0x1a], 0xbdcccccc < temp_v10 ||
          (temp_v5 = (unsigned int)((int)temp_v10 < 0x3dcccccd), (int)temp_v10 >= 0x3dcccccd)))) {
        g_lmapScene[0xb] = (int)(((float)g_lmapScene[0xb] - temp_v27) - (float)g_lmapScene[0x1a]);
      }
      if (0xc69c4000 < (unsigned int)g_lmapScene[0xb]) {
        g_lmapScene[0xb] = 0x447a0000;
      }
    }
    piVar18 = g_lmapScene;
    temp_v32 = 0x40a00000;
    if (g_lmapScene[0x9d] == 0) {
      if (g_lmapScene[0x15] == 0x14) {
        g_lmapScene[0x16] = 0x41200000;
      }
      else {
        g_lmapScene[0x16] = 0x40a00000;
      }
      piVar18[0x15] = 0;
    }
    temp_v18 = 0.5f;
    temp_v39 = CONCAT44(temp_v27,0x3f800000);
    piVar10 = (int *)(temp_v6 + 0x1518);
    if (temp_v15) {
      *(unsigned char *)(piVar18 + 4) = 0;
      temp_v12 = *piVar10;
      *piVar10 = temp_v12 + 1;
      if ((temp_v12 + 1 >= 901) && (piVar18[0x9d] == 0)) {
        temp_v12 = randBetween(0,9);
        piVar18 = g_lmapScene;
        piVar10 = (int *)(temp_v6 + 0x151c);
        g_lmapScene[0x9d] = (unsigned int)(unsigned char)s______________________00581290[temp_v12 + *piVar10 * 10];
        piVar18[0x9e] = 0;
        piVar18[0x9f] = 0;
        temp_v12 = *piVar10;
        *piVar10 = temp_v12 + 1;
        if (temp_v12 + 1 >= 5) {
          *piVar10 = 0;
        }
      }
      if ((*(int *)(temp_v6 + 0xdcc) == 0) &&
         (temp_v12 = *(int *)(temp_v6 + 0xdc8) + 1, *(int *)(temp_v6 + 0xdc8) = temp_v12, temp_v12 >= 901)) {
        FUN_00295108(0);
        FUN_00294c28();
        FUN_002b80b8();
        *(unsigned int *)(temp_v6 + 0xdcc) = 0xe10;
        *(unsigned int *)(temp_v6 + 0xdc8) = 0;
      }
      temp_v12 = *(int *)(temp_v6 + 0xdec);
      temp_v13 = temp_v12 + 1;
      *(int *)(temp_v6 + 0xdec) = temp_v13;
      if (temp_v13 >= 0x1f) {
        *(int *)(temp_v6 + 0xdec) = temp_v12 - 0x1d;
        FUN_00408184(0x1d,1);
      }
    }
    else {
      *(unsigned int *)(temp_v6 + 0xdc8) = 0;
      *piVar10 = 0;
      *(unsigned int *)(temp_v6 + 0x151c) = 0;
      piVar18[0x9d] = 0;
      piVar18[0x9e] = 0;
      piVar18[0x9f] = 0;
      FUN_0050d8e4();
      fStack_6c = fStack_6c * 57.32484f;
      if ((char)g_lmapScene[4] != '\0') {
        temp_v35 = (float)g_lmapScene[5];
        mathAngleDeltaDegrees();
        temp_v10 = in_fpscr & 0xfffffff;
        in_fpscr = temp_v10 | ((unsigned int)(temp_v19 <= temp_v35) << 0x1d);
        temp_v25 = temp_v35;
        if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
          temp_v25 = -temp_v35;
        }
        if ((int)temp_v25 < 0x42700001) {
          temp_v37 = temp_v25 * temp_v18;
          if ((int)temp_v37 < 0x3f800000) {
            temp_v37 = (float)temp_v39;
          }
          in_fpscr = temp_v10 | ((unsigned int)(temp_v25 == temp_v37) << 0x1e) |
                     ((unsigned int)(temp_v37 <= temp_v25) << 0x1d);
          temp_v1 = (unsigned char)(in_fpscr >> 0x18);
          if ((unsigned char)((temp_v1 >> 5) & 1) && !(unsigned char)(temp_v1 >> 6)) {
            temp_v10 = temp_v10 | ((unsigned int)(temp_v19 < temp_v35) << 0x1f) | ((unsigned int)(temp_v19 == temp_v35) << 0x1e)
            ;
            in_fpscr = temp_v10 | ((unsigned int)((temp_v19 != temp_v19) || (temp_v35 != temp_v35)) << 0x1c);
            temp_v1 = (unsigned char)(temp_v10 >> 0x18);
            if ((unsigned char)((temp_v1 >> 6) & 1) || temp_v1 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
              fStack_6c = (float)g_lmapScene[5] + temp_v37;
            }
            else {
              fStack_6c = (float)g_lmapScene[5] - temp_v37;
            }
          }
        }
        g_lmapScene[5] = (int)fStack_6c;
        fStack_6c = (float)g_lmapScene[5];
      }
      *(unsigned char *)(g_lmapScene + 4) = 1;
      temp_v41 = CONCAT44(temp_v18,0x43b40000);
      temp_v18 = fStack_6c - (float)g_lmapView[6];
      temp_v10 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v19 <= temp_v18) << 0x1d);
      if (!romwright_subpiece_4_1_0(temp_v10 >> 0x1d,0)) {
        temp_v18 = temp_v18 + 360.0f;
      }
      if ((int)temp_v18 >= 0x43b40001) {
        temp_v18 = temp_v18 - 360.0f;
      }
      if (g_lmapView[0x32] != 3) {
        temp_v18 = calcHeadingRoundedTo32Directions(temp_v18);
      }
      else {
        temp_v18 = mathSnapHeading16(temp_v18);
      }
      temp_v18 = -temp_v18;
      temp_v35 = (float)g_lmapScene[0x14];
      mathAngleDeltaDegrees();
      temp_v10 = temp_v10 & 0xfffffff;
      temp_v25 = temp_v35;
      if (temp_v35 < temp_v19) {
        temp_v25 = -temp_v35;
      }
      if ((int)temp_v25 < 0x41f00001) {
        temp_v37 = temp_v25 * (float)((unsigned long long)temp_v41 >> 0x20);
        if ((int)temp_v37 < 0x3f800000) {
          temp_v37 = (float)temp_v39;
        }
        if (temp_v37 < temp_v25) {
          temp_v10 = temp_v10 | ((unsigned int)(temp_v19 < temp_v35) << 0x1f);
          if (temp_v19 == temp_v35 || romwright_subpiece_4_1_0(temp_v10 >> 0x1f,0) != ((temp_v19 != temp_v19) || (temp_v35 != temp_v35))) {
            temp_v18 = (float)g_lmapScene[0x14] + temp_v37;
          }
          else {
            temp_v18 = (float)g_lmapScene[0x14] - temp_v37;
          }
        }
      }
      g_lmapScene[0x14] = (int)temp_v18;
      piVar18 = g_lmapScene;
      temp_v25 = (float)g_lmapScene[0x14];
      in_fpscr = (temp_v10 & 0xfffffff) | ((unsigned int)(temp_v19 <= temp_v25) << 0x1d);
      temp_v35 = 0.017453292f;
      if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
        temp_v25 = temp_v25 + (float)temp_v41;
        g_lmapScene[0x14] = (int)temp_v25;
      }
      if ((int)temp_v25 >= 0x43b40001) {
        temp_v25 = temp_v25 - (float)temp_v41;
        piVar18[0x14] = (int)temp_v25;
      }
      temp_v25 = temp_v25 * 0.017453292f;
      *(unsigned char *)(piVar18 + 0x1b) = 1;
      piVar18[0x1f] = (int)((unsigned long long)temp_v36 >> 0x20);
      FUN_001bc124();
      piVar18 = g_lmapScene;
      temp_v18 = (float)((unsigned long long)temp_v41 >> 0x20);
      g_lmapScene[10] =
           (int)((float)g_lmapScene[10] + temp_v25 * (float)((unsigned long long)temp_v36 >> 0x20));
      temp_v35 = (float)piVar18[0x14] * temp_v35;
      FUN_001bbf0c();
      piVar18 = g_lmapScene;
      g_lmapScene[0xc] =
           (int)((float)g_lmapScene[0xc] + temp_v35 * (float)((unsigned long long)temp_v36 >> 0x20));
      piVar18[0x15] = 2;
    }
    temp_v12 = (int)temp_v36;
    temp_v10 = 0;
    FUN_002469d0();
    piVar18 = g_lmapScene;
    g_lmapScene[10] = uStack_68;
    piVar18[0xb] = uStack_64;
    piVar18[0xc] = uStack_60;
    piVar18[0xd] = (int)temp_v33;
    piVar18[0xe] = (int)((unsigned long long)temp_v33 >> 0x20);
    piVar18[0xf] = temp_v12;
    if (((DAT_005f1c48 == '\0') && (DAT_005f161e != '\0')) && ((temp_v5 & ~temp_v10) == 0)) {
      piVar7 = piVar18 + 10;
      FUN_0025ef68(piVar7,piVar18 + 0xd,0);
      piVar18 = g_lmapScene;
      piVar10 = (int *)0x0;
      if (piVar7 != (int *)0x0) {
        piVar10 = g_lmapScene;
      }
      if (piVar7 != (int *)0x0) {
        piVar10[0x1a] = (int)temp_v19;
      }
      else {
        temp_v25 = (float)g_lmapScene[0x1a] + (float)((unsigned long long)temp_v39 >> 0x20);
        g_lmapScene[0x1a] = (int)temp_v25;
        if ((int)temp_v25 < 0x41a00001) {
          temp_v42 = CONCAT44((int)((unsigned long long)temp_v42 >> 0x20),temp_v25);
        }
        piVar18[0x1a] = (int)temp_v42;
      }
    }
    temp_v13 = (int)((unsigned long long)temp_v42 >> 0x20);
    if (((g_gameState != (unsigned int *)0x24) && (temp_v4 = partyAnyMemberHasFlagBit(2,5), temp_v4 != 0)) &&
       (!temp_v15)) {
      temp_v25 = (float)temp_v33;
      distSpatial();
      temp_v35 = (float)g_lmapScene[0x58];
      g_lmapScene[0x58] = (int)(temp_v35 - temp_v25);
      in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v19 <= temp_v35 - temp_v25) << 0x1d);
      if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
        FUN_004a01c8(2,5);
        g_lmapScene[0x58] = temp_v13;
        FUN_00325998(0xf,0x50);
        temp_v13 = FUN_003d4ed8(0x1000224);
        piVar18 = g_lmapScene;
        g_lmapScene[0x68] = temp_v13;
        piVar18[0x69] = 0x14;
      }
    }
    temp_v35 = (float)temp_v33;
    distSpatial();
    temp_v25 = *(float *)(temp_v6 + 0xde8) + temp_v35;
    *(float *)(temp_v6 + 0xde8) = temp_v25;
    if ((int)temp_v25 >= 0x47c35001) {
      *(float *)(temp_v6 + 0xde8) = temp_v25 - 100000.0f;
      FUN_00408184(0x12,1);
    }
    temp_v13 = 0x44bb8000;
    temp_v25 = *(float *)(temp_v6 + 0xdf0) + temp_v35;
    *(float *)(temp_v6 + 0xdf0) = temp_v25;
    if ((int)temp_v25 >= 0x44bb8001) {
      *(float *)(temp_v6 + 0xdf0) = temp_v25 - 1500.0f;
      FUN_004a0524();
      FUN_004a08f0();
    }
    temp_v25 = *(float *)(temp_v6 + 0xdf8) + temp_v35;
    *(float *)(temp_v6 + 0xdf8) = temp_v25;
    temp_v14 = *(int *)(temp_v6 + 0xdf4) != 0;
    if (temp_v14) {
      temp_v37 = 60000.0f;
      temp_v4 = (int)temp_v25 - 0x476a6000;
    }
    else {
      *(float *)(temp_v6 + 0xdf8) = temp_v19;
      temp_v4 = 0;
      temp_v37 = 0.0f;
    }
    if ((temp_v14 && temp_v25 != temp_v37) && temp_v4 < 0 == (temp_v14 && SBORROW4((int)temp_v25,(int)temp_v37)))
    {
      *(float *)(temp_v6 + 0xdf8) = temp_v19;
      *(unsigned int *)(temp_v6 + 0xdf4) = 0;
      *(unsigned char *)(temp_v6 + 0xdfc) = 1;
      *(unsigned int *)(temp_v6 + 0x15b4) = 3;
    }
    temp_v25 = *(float *)(temp_v6 + 0x10a0) + temp_v35;
    *(float *)(temp_v6 + 0x10a0) = temp_v25;
    if (*(int *)(temp_v6 + 0x109c) == 0) {
      *(float *)(temp_v6 + 0x10a0) = temp_v19;
    }
    else {
      temp_v37 = *(float *)(temp_v6 + 0x15c0);
      temp_v5 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v25 < temp_v37) << 0x1f) |
              ((unsigned int)(temp_v25 == temp_v37) << 0x1e);
      in_fpscr = temp_v5 | ((unsigned int)((temp_v25 != temp_v25) || (temp_v37 != temp_v37)) << 0x1c);
      temp_v1 = (unsigned char)(temp_v5 >> 0x18);
      if (!(unsigned char)((temp_v1 >> 6) & 1) && temp_v1 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
        sysPlayVoice(0x10000d1);
        temp_v4 = gameFlagIsSet(0x4c9);
        if ((temp_v4 == 0) || (temp_v4 = FUN_002e5db4(), temp_v4 != 0)) {
          g_lmapScene[0x74] = 0xf;
        }
        else {
          g_lmapScene[0x74] = 0xb;
        }
        piVar18 = g_lmapScene;
        g_lmapScene[0x8a] = 6;
        *(unsigned char *)(piVar18 + 0x8b) = 1;
        piVar18[0x90] = temp_v32;
        piVar18[0x75] = 0;
        *(float *)(temp_v6 + 0x10a0) = temp_v19;
        *(unsigned int *)(temp_v6 + 0x109c) = 0;
        *(unsigned int *)(temp_v6 + 0x10a4) = 1;
        temp_v32 = gameFlagIsSet(0x4c9);
        if ((temp_v32 == 0) || (temp_v32 = FUN_002e5db4(), temp_v32 != 0)) {
          g_lmapScene[0x8e] = 6;
        }
        *(unsigned char *)(g_lmapScene + 0x8f) = 1;
        temp_v32 = gameFlagIsSet(0x4c9);
        if ((temp_v32 == 0) || (temp_v32 = FUN_002e5db4(), temp_v32 != 0)) {
          FUN_003fd7c0(*(unsigned int *)(g_lmapScene[99] + 4),0,2);
        }
      }
    }
    temp_v35 = *(float *)(temp_v6 + 0x14ec) + temp_v35;
    *(float *)(temp_v6 + 0x14ec) = temp_v35;
    temp_v14 = *(int *)(temp_v6 + 0x14e8) != 0;
    if (temp_v14) {
      temp_v25 = 30000.0f;
      temp_v32 = (int)temp_v35 - 0x46ea6000;
    }
    else {
      *(float *)(temp_v6 + 0x14ec) = temp_v19;
      temp_v32 = 0;
      temp_v25 = 0.0f;
    }
    if ((temp_v14 && temp_v35 != temp_v25) && temp_v32 < 0 == (temp_v14 && SBORROW4((int)temp_v35,(int)temp_v25)))
    {
      *(float *)(temp_v6 + 0x14ec) = temp_v19;
      *(int *)(temp_v6 + 0x14e8) = 0;
      *(unsigned int *)(temp_v6 + 0x14f0) = 1;
    }
    piVar18 = g_lmapScene + 10;
    FUN_002e364c();
    temp_v25 = (float)temp_v33;
    if (((unsigned int)piVar18 & 2) != 0) {
      if (!temp_v15) {
        distSpatial();
        temp_v35 = (float)g_lmapScene[0x57];
        g_lmapScene[0x57] = (int)(temp_v35 - temp_v25);
        in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v19 <= temp_v35 - temp_v25) << 0x1d);
        if ((!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) && (temp_v32 = gameDataFlagTestBit(0x85), temp_v32 == 0)) {
          puVar6 = (unsigned int *)&g_gameState;
          if (g_gameState == (unsigned int *)0x5) {
            puVar6 = DAT_005f1600;
          }
          if (!(g_gameState == (unsigned int *)0x5 && puVar6 == (unsigned int *)0x9)) {
            g_lmapScene[0x57] = 0x43fa0000;
          }
          else {
            g_lmapScene[0x57] = temp_v13;
          }
          mapSetSceneState(0x20);
        }
      }
      DAT_005f1633 = 4;
      temp_v35 = temp_v19;
    }
    else {
      temp_v35 = (float)g_lmapScene[0x57];
      temp_v5 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v35 < temp_v19) << 0x1f) |
              ((unsigned int)(temp_v35 == temp_v19) << 0x1e);
      temp_v10 = temp_v5 | ((unsigned int)((temp_v35 != temp_v35) || (temp_v19 != temp_v19)) << 0x1c);
      temp_v1 = (unsigned char)(temp_v5 >> 0x18);
      temp_v35 = temp_v19;
      if (!(unsigned char)((temp_v1 >> 6) & 1) && temp_v1 >> 7 == ((unsigned char)(temp_v10 >> 0x1c) & 1)) {
        distSpatial();
        g_lmapScene[0x57] = (int)((float)g_lmapScene[0x57] - temp_v25);
      }
      temp_v25 = (float)g_lmapScene[0x57];
      temp_v5 = (temp_v10 & 0xfffffff) | ((unsigned int)(temp_v25 < temp_v19) << 0x1f) |
              ((unsigned int)(temp_v25 == temp_v19) << 0x1e);
      in_fpscr = temp_v5 | ((unsigned int)((temp_v25 != temp_v25) || (temp_v19 != temp_v19)) << 0x1c);
      temp_v1 = (unsigned char)(temp_v5 >> 0x18);
      if (!(unsigned char)((temp_v1 >> 6) & 1) && temp_v1 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
        temp_v19 = temp_v25;
      }
      g_lmapScene[0x57] = (int)temp_v19;
      DAT_005f1633 = 0xff;
    }
    if ((((unsigned int)piVar18 & 4) != 0) && (DAT_005f17d0 == '\0')) {
      DAT_005f161c = 1;
      *(unsigned char *)(temp_v6 + 0xe09) = 0;
      mapSetSceneState(0x1f);
      FUN_00408184(0x16,1);
    }
    FUN_00327ee8();
    if (((unsigned int)piVar18 & 0x800) != 0) {
      FUN_0033ad04();
    }
    if (((unsigned int)piVar18 & 0x2000) != 0) {
      FUN_002b621c();
    }
    piVar18 = g_lmapScene;
    if (temp_v15) {
      g_lmapScene[0x1f] = (int)temp_v35;
      piVar18[7] = (int)((float)piVar18[7] + ((float)piVar18[10] - (float)piVar18[7]) * temp_v18);
      piVar18[8] = (int)((float)piVar18[8] + ((float)piVar18[0xb] - (float)piVar18[8]) * 0.33333334f)
      ;
      temp_v18 = (float)piVar18[9] + ((float)piVar18[0xc] - (float)piVar18[9]) * temp_v18;
      piVar18[9] = (int)temp_v18;
      temp_v32 = piVar18[0x9d];
      if (temp_v32 != 0) {
        if (temp_v32 != 1) {
          if (temp_v32 != 2) {
            if (temp_v32 == 3) {
              temp_v32 = piVar18[0x9e];
              if (temp_v32 != 0) {
                if (temp_v32 != 1) {
                  if (temp_v32 != 2) {
                    if (temp_v32 != 3) {
                      if (temp_v32 == 4) {
                        temp_v32 = linkHolderCheckFirst(piVar18[0x6a]);
                        piVar18 = g_lmapScene;
                        g_lmapScene = piVar18;
                        if (temp_v32 != 0) {
                          piVar18[0x15] = 0;
                          piVar18[0x16] = (int)temp_v35;
                          piVar18[0x9d] = 0;
                          piVar18[0x9e] = 0;
                        }
                      }
                    }
                    else {
                      piVar18[0x9f] = piVar18[0x9f] + 1;
                      controllerGetSourceTiming(piVar18[0x6a]);
                      piVar18 = g_lmapScene;
                      temp_v19 = (float)VectorSignedToFloat(g_lmapScene[0x9f],
                                                          (unsigned char)(in_fpscr >> 0x16) & 3);
                      if (temp_v18 * 3.0f < temp_v19) {
                        g_lmapScene[0x15] = 0x28;
                        piVar18[0x16] = (int)temp_v35;
                        piVar18[0x9e] = 4;
                        piVar18[0x9f] = 0;
                      }
                    }
                  }
                  else {
                    temp_v32 = linkHolderCheckFirst(piVar18[0x6a]);
                    piVar18 = g_lmapScene;
                    if (temp_v32 != 0) {
                      g_lmapScene[0x15] = 0x27;
                      piVar18[0x16] = (int)temp_v35;
                      piVar18[0x9e] = 3;
                      piVar18[0x9f] = 0;
                    }
                  }
                }
                else {
                  temp_v32 = linkHolderCheckFirst(piVar18[0x6a]);
                  piVar18 = g_lmapScene;
                  if (temp_v32 != 0) {
                    g_lmapScene[0x15] = 0x26;
                    piVar18[0x16] = (int)temp_v35;
                    piVar18[0x9e] = 2;
                    piVar18[0x9f] = 0;
                  }
                }
              }
              else {
                controllerGetSourceValue(piVar18[0x6a]);
                temp_v25 = (float)temp_v39;
                temp_v19 = temp_v18;
                controllerGetSourceTiming(g_lmapScene[0x6a]);
                if (temp_v19 >= temp_v18 - temp_v25) {
                  piVar18 = g_lmapScene;
                  g_lmapScene[0x15] = 0x25;
                  piVar18[0x16] = (int)temp_v35;
                  piVar18[0x9e] = 1;
                }
              }
            }
          }
          else {
            temp_v32 = piVar18[0x9e];
            if (temp_v32 != 0) {
              if (temp_v32 != 1) {
                if (temp_v32 != 2) {
                  if (temp_v32 == 3) {
                    temp_v32 = linkHolderCheckFirst(piVar18[0x6a]);
                    piVar18 = g_lmapScene;
                    g_lmapScene = piVar18;
                    if (temp_v32 != 0) {
                      piVar18[0x15] = 0;
                      piVar18[0x16] = (int)temp_v35;
                      piVar18[0x9d] = 0;
                      piVar18[0x9e] = 0;
                    }
                  }
                }
                else {
                  piVar18[0x9f] = piVar18[0x9f] + 1;
                  controllerGetSourceTiming(piVar18[0x6a]);
                  piVar18 = g_lmapScene;
                  temp_v19 = (float)VectorSignedToFloat(g_lmapScene[0x9f],
                                                      (unsigned char)(in_fpscr >> 0x16) & 3);
                  if (temp_v18 * (float)((unsigned long long)temp_v39 >> 0x20) < temp_v19) {
                    g_lmapScene[0x15] = 0x28;
                    piVar18[0x16] = (int)temp_v35;
                    piVar18[0x9e] = 3;
                    piVar18[0x9f] = 0;
                  }
                }
              }
              else {
                temp_v32 = linkHolderCheckFirst(piVar18[0x6a]);
                piVar18 = g_lmapScene;
                if (temp_v32 != 0) {
                  g_lmapScene[0x15] = 0x27;
                  piVar18[0x16] = (int)temp_v35;
                  piVar18[0x9e] = 2;
                  piVar18[0x9f] = 0;
                }
              }
            }
            else {
              controllerGetSourceValue(piVar18[0x6a]);
              temp_v25 = (float)temp_v39;
              temp_v19 = temp_v18;
              controllerGetSourceTiming(g_lmapScene[0x6a]);
              piVar18 = g_lmapScene;
              if (temp_v18 - temp_v25 <= temp_v19) {
                g_lmapScene[0x15] = 0x26;
                piVar18[0x16] = (int)temp_v35;
                piVar18[0x9e] = 1;
              }
            }
          }
        }
        else if (piVar18[0x9e] != 0) {
          if (piVar18[0x9e] == 1) {
            temp_v32 = linkHolderCheckFirst(piVar18[0x6a]);
            piVar18 = g_lmapScene;
            g_lmapScene = piVar18;
            if (temp_v32 != 0) {
              piVar18[0x15] = 0;
              piVar18[0x16] = (int)temp_v35;
              piVar18[0x9d] = 0;
              piVar18[0x9e] = 0;
            }
          }
        }
        else {
          controllerGetSourceValue(piVar18[0x6a]);
          temp_v25 = (float)temp_v39;
          temp_v19 = temp_v18;
          controllerGetSourceTiming(g_lmapScene[0x6a]);
          if (temp_v19 >= temp_v18 - temp_v25) {
            piVar18 = g_lmapScene;
            g_lmapScene[0x15] = 0x25;
            piVar18[0x16] = (int)temp_v35;
            piVar18[0x9e] = 1;
          }
        }
      }
    }
    else {
      g_lmapScene[7] =
           (int)((float)g_lmapScene[7] +
                ((float)g_lmapScene[10] - (float)g_lmapScene[7]) * 0.33333334f);
      piVar18[8] = (int)((float)piVar18[8] + ((float)piVar18[0xb] - (float)piVar18[8]) * 0.33333334f)
      ;
      piVar18[9] = (int)((float)piVar18[9] + ((float)piVar18[0xc] - (float)piVar18[9]) * 0.33333334f)
      ;
    }
    mapEaseSceneHeading();
    piVar18 = g_lmapScene;
    piVar7 = g_lmapScene + 8;
    temp_v32 = g_lmapScene[9];
    piVar10 = g_lmapScene + 0xd;
    g_lmapScene[0x10] = g_lmapScene[7];
    piVar18[0x11] = *piVar7;
    piVar18[0x12] = temp_v32;
    *piVar10 = (int)temp_v33;
    piVar18[0xe] = (int)((unsigned long long)temp_v33 >> 0x20);
    piVar18[0xf] = temp_v12;
    return;
  case 2:
    fStack_20 = temp_v35;
    fStack_1c = temp_v37;
    mapEaseSceneHeading();
    piVar18 = g_lmapScene;
    g_lmapScene[7] =
         (int)((float)g_lmapScene[7] +
              ((float)g_lmapScene[10] - (float)g_lmapScene[7]) * 0.33333334f);
    piVar18[8] = (int)((float)piVar18[8] + ((float)piVar18[0xb] - (float)piVar18[8]) * 0.16666667f);
    piVar18[9] = (int)((float)piVar18[9] + ((float)piVar18[0xc] - (float)piVar18[9]) * 0.33333334f);
    if (piVar18[1] == 0) {
      *(unsigned char *)(piVar18 + 0x1b) = 0;
      piVar18[0x15] = 0;
      piVar18[0x16] = 0x40a00000;
      piVar18[1] = 1;
      piVar18[2] = 0;
    }
    goto LAB_00246d70;
  case 3:
    uStack_68 = 0;
    temp_v18 = fStack_3c;
    fStack_3c = fStack_20;
    fStack_28 = (float)iStack_38;
    iStack_38 = (int)fStack_1c;
    fStack_34 = fStack_2c;
    fStack_2c = temp_v18;
    temp_v32 = gameFlagsGetBlock();
    soundVolumeSettingGet();
    __aeabi_memcpy4(afStack_2e8,&DAT_00531c18,0xa0);
    __aeabi_memcpy4(afStack_248,&DAT_00531cb8,0xa0);
    __aeabi_memcpy4(afStack_1a8,&DAT_00531d58,0xa0);
    __aeabi_memcpy4(afStack_108,&DAT_00531df8,0xa0);
    temp_v18 = (float)g_lmapScene[10];
    temp_v33 = romwright_piece_4_4(g_lmapScene[0xb],g_lmapScene[0xc]);
    mapEaseSceneHeading();
    piVar18 = g_lmapScene;
    temp_v25 = 0.33333334f;
    temp_v19 = 0.0f;
    temp_v6 = g_lmapScene[1];
    if (temp_v6 != 0) {
      temp_v35 = 20.0f;
      if (temp_v6 != 1) {
        if (temp_v6 != 2) goto LAB_003270b0;
        g_lmapScene[2] = g_lmapScene[2] + 1;
        if (((g_gameState != (unsigned int *)0x24) && (temp_v32 = partyAnyMemberHasFlagBit(2,5), temp_v32 != 0)) &&
           ((float)g_lmapScene[0x58] < temp_v19)) {
          FUN_004a01c8(2,5);
          g_lmapScene[0x58] = 0x447a0000;
          FUN_00325998(0xf,0x50);
          temp_v32 = FUN_003d4ed8(0x1000224);
          piVar18 = g_lmapScene;
          g_lmapScene[0x68] = temp_v32;
          piVar18[0x69] = 0x14;
        }
        if ((temp_v19 <= (float)g_lmapScene[0x57]) || (temp_v32 = gameDataFlagTestBit(0x85), temp_v32 != 0)) {
          FUN_00317af8(&uStack_64,&uStack_60,0);
          if (DAT_005f1848 != 0) {
            if (DAT_005f1848 == 1) {
              if (g_lmapScene[2] == 5) {
                FUN_00324e38(0xffffffff);
                mapSpawnRandomEventKindEffect();
                FUN_003135bc();
              }
              temp_v32 = g_lmapScene[2];
joined_r0x00326e7c:
              if (temp_v32 == 6) {
                mapSpawnRandomEventKindEffect();
                FUN_003135bc();
              }
              goto LAB_00326f3c;
            }
            if (DAT_005f1848 == 2) {
              if (g_lmapScene[2] == 5) {
                FUN_00324e38(0xffffffff);
                mapSpawnRandomEventKindEffect();
                FUN_003135bc();
              }
              temp_v32 = g_lmapScene[2];
              goto joined_r0x00326e7c;
            }
            if (DAT_005f1848 == 3) {
              if (g_lmapScene[2] == 5) {
                FUN_00324e38(0xffffffff);
                mapSpawnRandomEventKindEffect();
                FUN_003135bc();
              }
              temp_v32 = g_lmapScene[2];
              goto joined_r0x00326e38;
            }
          }
          else {
            if (g_lmapScene[2] == 5) {
              FUN_00324e38(0xffffffff);
              mapSpawnRandomEventKindEffect();
              FUN_003135bc();
            }
            temp_v32 = g_lmapScene[2];
joined_r0x00326e38:
            if (temp_v32 == 6) {
              FUN_003135bc();
              mapSpawnRandomEventKindEffect();
            }
LAB_00326f3c:
            if (DAT_005f1848 != 0) {
              if (DAT_005f1848 == 1) {
                temp_v32 = inputIsQuestCancelPressed();
                goto joined_r0x00326f98;
              }
              if (DAT_005f1848 == 2) {
                temp_v32 = inputIsQuestCancelPressed();
                if (temp_v32 == 0) goto LAB_00326fcc;
                goto LAB_00326f78;
              }
              if (DAT_005f1848 == 3) {
                temp_v32 = inputIsQuestCancelPressed();
                goto joined_r0x00326f98;
              }
            }
            else {
              temp_v32 = inputIsQuestCancelPressed();
joined_r0x00326f98:
              if (temp_v32 != 0) {
LAB_00326f78:
                piVar18 = g_lmapScene;
                g_lmapScene[1] = 0;
                piVar18[2] = 0;
                goto LAB_003270b0;
              }
            }
          }
LAB_00326fcc:
          if ((((0xbf000000 < uStack_64) || ((int)uStack_64 >= 0x3f000001)) ||
              (0xbf000000 < uStack_60)) ||
             (((int)uStack_60 >= 0x3f000001 ||
              (temp_v32 = linkHolderCheckFirst(g_lmapScene[0x6a]), temp_v32 != 0)))) {
            piVar18 = g_lmapScene;
            g_lmapScene[0x1a] = (int)temp_v19;
            piVar18[0x16] = (int)temp_v19;
            temp_v32 = linkHolderCheckFirst(piVar18[0x6a]);
            if (temp_v32 != 0) {
              *(unsigned short *)((int)g_lmapScene + 0x19a) = 1;
            }
            else if ((DAT_005f1848 == 0) ||
                    ((DAT_005f1848 == 1 || DAT_005f1848 == 2) || DAT_005f1848 == 3)) {
              *(unsigned short *)((int)g_lmapScene + 0x19a) = 2;
            }
            temp_v17 = 1;
            mapSetSceneState(temp_v17);
          }
        }
        else {
          puVar6 = g_gameState;
          if (g_gameState == (unsigned int *)0x5) {
            puVar6 = DAT_005f1600;
          }
          if (g_gameState == (unsigned int *)0x5 && puVar6 == (unsigned int *)0x9) {
            temp_v32 = 0x44bb8000;
          }
          else {
            temp_v32 = 0x43fa0000;
          }
          g_lmapScene[0x57] = temp_v32;
          temp_v17 = 0x20;
          mapSetSceneState(temp_v17);
        }
        goto LAB_003270a0;
      }
      temp_v6 = g_lmapScene[2];
      g_lmapScene[2] = temp_v6 + 1;
      if (temp_v6 + 1 == 1) {
        DAT_005f17ac = '\x01';
        piVar18[0x5a] = -1;
        piVar18[0x59] = 0;
        slotTargetApplyActiveValue(piVar18[0x6a]);
      }
      temp_v37 = 0.017453292f;
      temp_v6 = g_lmapScene[2];
      if (temp_v6 < 0x14) {
        if (DAT_005f1848 != 0) {
          if (DAT_005f1848 != 1) {
            if (DAT_005f1848 != 2) {
              if (DAT_005f1848 == 3) {
                unaff_r7 = afStack_108[temp_v6 * 2];
                unaff_r6 = afStack_108[temp_v6 * 2 + 1];
              }
            }
            else {
              unaff_r7 = afStack_1a8[temp_v6 * 2];
              unaff_r6 = afStack_1a8[temp_v6 * 2 + 1];
            }
          }
          else {
            unaff_r7 = afStack_248[temp_v6 * 2];
            unaff_r6 = afStack_248[temp_v6 * 2 + 1];
          }
        }
        else {
          unaff_r7 = afStack_2e8[temp_v6 * 2];
          unaff_r6 = afStack_2e8[temp_v6 * 2 + 1];
        }
        if ((int)unaff_r7 >> 0x10 != 0) {
          VectorSignedToFloat((int)unaff_r6 >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)romwright_subpiece_4_2_0(unaff_r6,0),(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_003135bc((int)unaff_r6 >> 0x10,(int)romwright_subpiece_4_2_0(unaff_r6,0));
        }
        temp_v20 = (float)VectorSignedToFloat((int)romwright_subpiece_4_2_0(unaff_r7,0),(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v27 = (float)g_lmapScene[0x14] * temp_v37;
        FUN_001bc124();
        piVar18 = g_lmapScene;
        g_lmapScene[10] = (int)((float)g_lmapScene[10] + temp_v27 * temp_v20);
        temp_v37 = (float)piVar18[0x14] * temp_v37;
        FUN_001bbf0c();
        piVar10 = &iStack_304;
        g_lmapScene[0xc] = (int)((float)g_lmapScene[0xc] + temp_v37 * temp_v20);
        FUN_002469d0();
        piVar18 = g_lmapScene;
        g_lmapScene[10] = iStack_304;
        piVar18[0xb] = iStack_300;
        piVar18[0xc] = iStack_2fc;
        piVar18[0xd] = (int)temp_v18;
        piVar18[0xe] = (int)((unsigned long long)temp_v33 >> 0x20);
        piVar18[0xf] = (int)temp_v33;
        if (((DAT_005f1c48 == '\0') && (DAT_005f161e != '\0')) &&
           ((uStack_68 & ~(unsigned int)piVar10) == 0)) {
          piVar7 = piVar18 + 10;
          FUN_0025ef68(piVar7,piVar18 + 0xd,0);
          piVar18 = g_lmapScene;
          piVar10 = (int *)0x0;
          if (piVar7 != (int *)0x0) {
            piVar10 = g_lmapScene;
          }
          if (piVar7 != (int *)0x0) {
            piVar10[0x1a] = (int)temp_v19;
          }
          else {
            temp_v37 = (float)g_lmapScene[0x1a] + 2.0f;
            g_lmapScene[0x1a] = (int)temp_v37;
            if ((int)temp_v37 < 0x41a00001) {
              temp_v35 = temp_v37;
            }
            piVar18[0x1a] = (int)temp_v35;
          }
        }
        temp_v35 = temp_v18;
        if ((g_gameState != (unsigned int *)0x24) &&
           (temp_v6 = partyAnyMemberHasFlagBit(2,5), temp_v35 = temp_v18, temp_v6 != 0)) {
          distSpatial();
          g_lmapScene[0x58] = (int)((float)g_lmapScene[0x58] - temp_v18);
        }
        temp_v37 = temp_v35;
        distSpatial();
        temp_v18 = *(float *)(temp_v32 + 0xdf8) + temp_v35;
        *(float *)(temp_v32 + 0xdf8) = temp_v18;
        temp_v15 = *(int *)(temp_v32 + 0xdf4) != 0;
        if (temp_v15) {
          temp_v27 = 60000.0f;
          temp_v6 = (int)temp_v18 - 0x476a6000;
        }
        else {
          *(float *)(temp_v32 + 0xdf8) = temp_v19;
          temp_v6 = 0;
          temp_v27 = 0.0f;
        }
        if ((temp_v15 && temp_v18 != temp_v27) &&
            temp_v6 < 0 == (temp_v15 && SBORROW4((int)temp_v18,(int)temp_v27))) {
          *(float *)(temp_v32 + 0xdf8) = temp_v19;
          *(unsigned int *)(temp_v32 + 0xdf4) = 0;
          *(unsigned char *)(temp_v32 + 0xdfc) = 1;
          *(unsigned int *)(temp_v32 + 0x15b4) = 3;
        }
        temp_v18 = *(float *)(temp_v32 + 0x10a0) + temp_v35;
        *(float *)(temp_v32 + 0x10a0) = temp_v18;
        if (*(int *)(temp_v32 + 0x109c) == 0) {
          *(float *)(temp_v32 + 0x10a0) = temp_v19;
        }
        else if (*(float *)(temp_v32 + 0x15c0) < temp_v18) {
          sysPlayVoice(0x10000d1);
          temp_v6 = gameFlagIsSet(0x4c9);
          if ((temp_v6 == 0) || (temp_v6 = FUN_002e5db4(), temp_v6 != 0)) {
            g_lmapScene[0x74] = 0xf;
          }
          else {
            g_lmapScene[0x74] = 0xb;
          }
          piVar18 = g_lmapScene;
          g_lmapScene[0x8a] = 6;
          piVar18[0x90] = 0x40a00000;
          *(unsigned char *)(piVar18 + 0x8b) = 1;
          piVar18[0x75] = 0;
          *(float *)(temp_v32 + 0x10a0) = temp_v19;
          *(unsigned int *)(temp_v32 + 0x109c) = 0;
          *(unsigned int *)(temp_v32 + 0x10a4) = 1;
          temp_v6 = gameFlagIsSet(0x4c9);
          if ((temp_v6 == 0) || (temp_v6 = FUN_002e5db4(), temp_v6 != 0)) {
            g_lmapScene[0x8e] = 6;
          }
          *(unsigned char *)(g_lmapScene + 0x8f) = 1;
          temp_v6 = gameFlagIsSet(0x4c9);
          if ((temp_v6 == 0) || (temp_v6 = FUN_002e5db4(), temp_v6 != 0)) {
            FUN_003fd7c0(*(unsigned int *)(g_lmapScene[99] + 4),0,2);
          }
        }
        temp_v35 = *(float *)(temp_v32 + 0x14ec) + temp_v35;
        *(float *)(temp_v32 + 0x14ec) = temp_v35;
        temp_v15 = *(int *)(temp_v32 + 0x14e8) != 0;
        if (temp_v15) {
          temp_v18 = 30000.0f;
          temp_v6 = (int)temp_v35 - 0x46ea6000;
        }
        else {
          *(float *)(temp_v32 + 0x14ec) = temp_v19;
          temp_v6 = 0;
          temp_v18 = 0.0f;
        }
        if ((temp_v15 && temp_v35 != temp_v18) &&
            temp_v6 < 0 == (temp_v15 && SBORROW4((int)temp_v35,(int)temp_v18))) {
          *(float *)(temp_v32 + 0x14ec) = temp_v19;
          *(int *)(temp_v32 + 0x14e8) = 0;
          *(unsigned int *)(temp_v32 + 0x14f0) = 1;
        }
        piVar18 = g_lmapScene + 10;
        FUN_002e364c();
        temp_v18 = temp_v37;
        if (((unsigned int)piVar18 & 2) != 0) {
          distSpatial();
          g_lmapScene[0x57] = (int)((float)g_lmapScene[0x57] - temp_v37);
          DAT_005f1633 = 4;
        }
        else {
          if (temp_v19 < (float)g_lmapScene[0x57]) {
            distSpatial();
            g_lmapScene[0x57] = (int)((float)g_lmapScene[0x57] - temp_v37);
          }
          if (temp_v19 < (float)g_lmapScene[0x57]) {
            temp_v19 = (float)g_lmapScene[0x57];
          }
          g_lmapScene[0x57] = (int)temp_v19;
          DAT_005f1633 = 0xff;
        }
        if ((((unsigned int)piVar18 & 4) != 0) && (DAT_005f17d0 == '\0')) {
          *(unsigned char *)(temp_v32 + 0xe09) = 0;
          mapSetSceneState(0x1f);
          FUN_00408184(0x16,1);
        }
        piVar18 = g_lmapScene;
        piVar10 = g_lmapScene + 7;
        piVar7 = g_lmapScene + 0x10;
        g_lmapScene[7] =
             (int)((float)g_lmapScene[7] +
                  ((float)g_lmapScene[10] - (float)g_lmapScene[7]) * temp_v25);
        piVar18[8] = (int)((float)piVar18[8] + ((float)piVar18[0xb] - (float)piVar18[8]) * temp_v25);
        temp_v19 = (float)piVar18[9] + ((float)piVar18[0xc] - (float)piVar18[9]) * temp_v25;
        piVar18[9] = (int)temp_v19;
        temp_v32 = piVar18[8];
        *piVar7 = *piVar10;
        piVar18[0x11] = temp_v32;
        piVar18[0x12] = (int)temp_v19;
        piVar18[0xd] = (int)temp_v18;
        piVar18[0xe] = (int)((unsigned long long)temp_v33 >> 0x20);
        piVar18[0xf] = (int)temp_v33;
      }
      temp_v17 = soundVolumeSettingGet();
      if (DAT_005f1848 != 0) {
        if (DAT_005f1848 != 1) {
          if (DAT_005f1848 != 2) {
            if (DAT_005f1848 == 3) {
              if (g_lmapScene[2] == 2) {
                temp_v11 = (short)g_lmapScene[0x67];
                if (0 < temp_v11) goto LAB_003267fc;
                *(unsigned short *)(g_lmapScene + 0x67) = 1;
                FUN_001bc124();
                FUN_001bbf0c();
                temp_v32 = randBetween(0,1);
                if (g_lmapScene[0x74] != 10) {
                  FUN_0014af98();
                  soundVolumeSettingSet();
                  sysPlayVoice(temp_v32 + 0x10002e2);
                  soundVolumeSettingSet(temp_v17);
                }
              }
              if (g_lmapScene[2] == 3) {
                FUN_001bc124();
                FUN_001bbf0c();
                FUN_003d4ed8(0x100029e);
                FUN_00324e38(0xffffffff);
              }
              if ((g_lmapScene[2] == 6) && (mapSpawnRandomEventKindEffect(), g_lmapScene[2] == 6)) {
                temp_v3 = 0x14;
                temp_v17 = 6;
                FUN_002d1f40(temp_v17,temp_v3,0);
              }
            }
            if (g_lmapScene[2] >= 8) {
              *(unsigned char *)(g_lmapScene + 0x89) = 0;
            }
          }
          else {
            if (g_lmapScene[2] != 2) {
LAB_00326870:
              if (g_lmapScene[2] == 3) {
                FUN_001bc124();
                FUN_001bbf0c();
                FUN_003d4ed8(0x100029d);
                FUN_00324e38(0xffffffff);
              }
              if (g_lmapScene[2] != 4) goto LAB_00326a10;
              goto LAB_003268e4;
            }
            temp_v11 = (short)g_lmapScene[0x67];
            if (temp_v11 < 1) {
              *(unsigned short *)(g_lmapScene + 0x67) = 1;
              FUN_001bc124();
              FUN_001bbf0c();
              temp_v32 = randBetween(0,1);
              if (g_lmapScene[0x74] != 10) {
                FUN_0014af98();
                soundVolumeSettingSet();
                sysPlayVoice(temp_v32 + 0x10002e0);
                soundVolumeSettingSet(temp_v17);
              }
              goto LAB_00326870;
            }
LAB_003267fc:
            *(short *)(g_lmapScene + 0x67) = temp_v11 - 1;
          }
        }
        else {
          if (g_lmapScene[2] == 3) {
            FUN_001bc124();
            FUN_001bbf0c();
            FUN_003d4ed8(0x100029c);
            if ((short)g_lmapScene[0x67] >= 1) {
              *(short *)(g_lmapScene + 0x67) = (short)g_lmapScene[0x67] - 1;
            }
            else {
              *(unsigned short *)(g_lmapScene + 0x67) = 1;
              FUN_001bc124();
              FUN_001bbf0c();
              temp_v32 = randBetween(0,1);
              if (g_lmapScene[0x74] != 10) {
                FUN_0014af98();
                soundVolumeSettingSet();
                sysPlayVoice(temp_v32 + 0x10002de);
                soundVolumeSettingSet(temp_v17);
              }
            }
            FUN_00324e38(0xffffffff);
          }
          if (g_lmapScene[2] == 6) {
LAB_003268e4:
            mapSpawnRandomEventKindEffect();
          }
          if (g_lmapScene[2] >= 8) {
            *(unsigned char *)(g_lmapScene + 0x89) = 0;
          }
        }
      }
      else {
        if (g_lmapScene[2] == 3) {
          FUN_001bc124();
          FUN_001bbf0c();
          FUN_003d4ed8(0x100029b);
          if ((short)g_lmapScene[0x67] >= 1) {
            *(short *)(g_lmapScene + 0x67) = (short)g_lmapScene[0x67] - 1;
          }
          else {
            *(unsigned short *)(g_lmapScene + 0x67) = 1;
            FUN_001bc124();
            FUN_001bbf0c();
            temp_v32 = randBetween(0,1);
            if (g_lmapScene[0x74] != 10) {
              FUN_0014af98();
              soundVolumeSettingSet();
              sysPlayVoice(temp_v32 + 0x10002dc);
              soundVolumeSettingSet(temp_v17);
            }
          }
          FUN_00324e38(0xffffffff);
        }
        if ((g_lmapScene[2] == 6) && (mapSpawnRandomEventKindEffect(), g_lmapScene[2] == 6)) {
          temp_v3 = 8;
          temp_v17 = 4;
          FUN_002d1f40(temp_v17,temp_v3,0);
        }
LAB_00326a10:
        if (g_lmapScene[2] >= 8) {
          *(unsigned char *)(g_lmapScene + 0x89) = 0;
        }
      }
      if (DAT_005f17ac != '\0') {
        DAT_005f17b0 = g_lmapScene[7];
        DAT_005f17b4 = g_lmapScene[8];
        DAT_005f17b8 = g_lmapScene[9];
        DAT_005f17bc = g_lmapScene[0x13];
        DAT_005f17c0 = DAT_005f17c0 + 1;
        temp_v32 = (int)DAT_005f17c0;
        DAT_005f17c2 = 0;
        if (DAT_005f1848 != 0) {
          if (DAT_005f1848 != 1) {
            if (DAT_005f1848 != 2) {
              if ((DAT_005f1848 == 3) && (temp_v32 - 1U < 0xb)) {
                DAT_005f17c2 = 1;
              }
            }
            else if (temp_v32 - 1U < 0xd) {
              DAT_005f17c2 = 1;
            }
          }
          else if (temp_v32 - 1U < 8) {
            DAT_005f17c2 = 1;
          }
        }
        else if (temp_v32 - 1U < 10) {
          DAT_005f17c2 = 1;
        }
      }
      if ((DAT_005f17d0 == '\0') && (0 < DAT_005f17c4)) {
        DAT_005f17d0 = '\x01';
        DAT_005f17d4 = 0;
        goto LAB_003270a0;
      }
      if (DAT_005f17c4 != 0) goto LAB_003270a0;
      temp_v32 = linkHolderCheckFirst(g_lmapScene[0x6a]);
      piVar18 = g_lmapScene;
      if (temp_v32 != 0) {
        DAT_005f17ac = '\0';
        g_lmapScene[0x59] = 0;
        piVar10 = piVar18 + 1;
        *piVar10 = *piVar10 + 1;
        piVar18[2] = 0;
        goto LAB_003270a0;
      }
      FUN_00317af8(&uStack_64,&uStack_60,0);
      piVar18 = g_lmapScene;
      if (((((0xbf000000 < uStack_64) || ((int)uStack_64 >= 0x3f000001)) || (0xbf000000 < uStack_60))
          || ((int)uStack_60 >= 0x3f000001)) && (g_lmapScene[2] >= 0xe)) {
        DAT_005f17ac = '\0';
        g_lmapScene[0x59] = 0;
        piVar10 = piVar18 + 1;
        *piVar10 = *piVar10 + 1;
        piVar18[2] = 0;
      }
      if (DAT_005f1848 != 0) {
        if (DAT_005f1848 != 1) {
          if (DAT_005f1848 != 2) {
            if (((DAT_005f1848 == 3) && (g_lmapScene[2] >= 9)) &&
               (temp_v32 = inputIsQuestCancelPressed(), piVar18 = g_lmapScene, temp_v32 != 0)) {
              DAT_005f17ac = '\0';
              g_lmapScene[0x59] = 0;
              piVar18[1] = 0;
              piVar18[2] = 0;
              if (piVar18[0x74] != 1 && piVar18[0x74] != 9) goto LAB_003270b0;
LAB_00326cc4:
              lmapSceneStartMovement(0);
            }
          }
          else if ((g_lmapScene[2] >= 9) &&
                  (temp_v32 = inputIsQuestCancelPressed(), piVar18 = g_lmapScene, temp_v32 != 0)) {
            DAT_005f17ac = '\0';
            g_lmapScene[0x59] = 0;
            piVar18[1] = 0;
            piVar18[2] = 0;
            if (piVar18[0x74] == 1 || piVar18[0x74] == 9) goto LAB_00326cc4;
            goto LAB_003270b0;
          }
        }
        else if ((g_lmapScene[2] >= 8) &&
                (temp_v32 = inputIsQuestCancelPressed(), piVar18 = g_lmapScene, temp_v32 != 0)) {
          DAT_005f17ac = '\0';
          g_lmapScene[0x59] = 0;
          piVar18[1] = 0;
          piVar18[2] = 0;
          if (piVar18[0x74] == 1 || piVar18[0x74] == 9) goto LAB_00326cc4;
          goto LAB_003270b0;
        }
        goto LAB_003270a0;
      }
      if ((g_lmapScene[2] < 8) || (temp_v32 = inputIsQuestCancelPressed(), piVar18 = g_lmapScene, temp_v32 == 0))
      goto LAB_003270a0;
      DAT_005f17ac = '\0';
      g_lmapScene[0x59] = 0;
      piVar18[1] = 0;
      piVar18[2] = 0;
      if (piVar18[0x74] == 1 || piVar18[0x74] == 9) goto LAB_00326cc4;
    }
    else {
      *(unsigned char *)(g_lmapScene + 0x1b) = 0;
      if (DAT_005f1848 == 0) {
        temp_v32 = 4;
        piVar18[0x15] = temp_v32;
      }
      else if (DAT_005f1848 == 1) {
        temp_v32 = 0x16;
        piVar18[0x15] = temp_v32;
      }
      else if (DAT_005f1848 == 2) {
        temp_v32 = 0x17;
        piVar18[0x15] = temp_v32;
      }
      else if (DAT_005f1848 == 3) {
        temp_v32 = 0x18;
        piVar18[0x15] = temp_v32;
      }
      piVar18[0x16] = 0;
      *(unsigned char *)(piVar18 + 0x17) = 1;
      piVar18[0x5a] = -1;
      piVar18[0x59] = 0;
      DAT_005f17b0 = piVar18[7];
      DAT_005f17b4 = piVar18[8];
      DAT_005f17b8 = piVar18[9];
      DAT_005f17bc = piVar18[0x13];
      DAT_005f17c0 = 0;
      DAT_005f17c2 = 0;
      FUN_00317af8(afStack_2f4,&uStack_2f8,0);
      if ((((0xbeffffff < (unsigned int)afStack_2f4[0]) || ((int)afStack_2f4[0] >= 0x3f000000)) ||
          (0xbeffffff < uStack_2f8)) || ((int)uStack_2f8 >= 0x3f000000)) {
        FUN_0050d8e4();
        temp_v36 = CONCAT44(0x43b40000,temp_v19);
        temp_v35 = afStack_2f4[0] * 57.32484f - (float)g_lmapView[6];
        if (temp_v35 < temp_v19) {
          temp_v35 = temp_v35 + 360.0f;
        }
        if ((int)temp_v35 >= 0x43b40001) {
          temp_v35 = temp_v35 - 360.0f;
        }
        if (g_lmapView[0x32] != 3) {
          temp_v35 = calcHeadingRoundedTo32Directions(temp_v35);
        }
        else {
          temp_v35 = mathSnapHeading16(temp_v35);
        }
        temp_v35 = -temp_v35;
        temp_v37 = (float)g_lmapScene[0x14];
        mathAngleDeltaDegrees();
        temp_v27 = (float)temp_v36;
        temp_v19 = temp_v37;
        if (temp_v37 < temp_v27) {
          temp_v19 = -temp_v37;
        }
        if ((int)temp_v19 < 0x41f00001) {
          temp_v20 = temp_v19 * 0.5f;
          if ((int)temp_v20 < 0x3f800000) {
            temp_v20 = 1.0f;
          }
          if (temp_v20 < temp_v19) {
            if (temp_v27 <= temp_v37) {
              temp_v35 = (float)g_lmapScene[0x14] + temp_v20;
            }
            else {
              temp_v35 = (float)g_lmapScene[0x14] - temp_v20;
            }
          }
        }
        g_lmapScene[0x14] = (int)temp_v35;
        piVar18 = g_lmapScene;
        temp_v19 = (float)g_lmapScene[0x14];
        temp_v35 = (float)((unsigned long long)temp_v36 >> 0x20);
        if (temp_v19 < temp_v27) {
          temp_v19 = temp_v19 + temp_v35;
          g_lmapScene[0x14] = (int)temp_v19;
        }
        if ((int)temp_v19 >= 0x43b40001) {
          piVar18[0x14] = (int)(temp_v19 - temp_v35);
        }
      }
      piVar18 = g_lmapScene;
      g_lmapScene[1] = g_lmapScene[1] + 1;
      piVar18[2] = 0;
LAB_003270a0:
      if (g_lmapScene[1] == 1) goto LAB_003270bc;
    }
LAB_003270b0:
    FUN_002e364c(g_lmapScene + 10);
LAB_003270bc:
    FUN_00327ee8();
    mapEaseSceneHeading();
    piVar18 = g_lmapScene;
    piVar10 = g_lmapScene + 7;
    piVar7 = g_lmapScene + 0x10;
    g_lmapScene[7] =
         (int)((float)g_lmapScene[7] + ((float)g_lmapScene[10] - (float)g_lmapScene[7]) * temp_v25)
    ;
    piVar18[8] = (int)((float)piVar18[8] + ((float)piVar18[0xb] - (float)piVar18[8]) * 0.16666667f);
    temp_v19 = (float)piVar18[9] + ((float)piVar18[0xc] - (float)piVar18[9]) * temp_v25;
    piVar18[9] = (int)temp_v19;
    temp_v32 = piVar18[8];
    *piVar7 = *piVar10;
    piVar18[0x11] = temp_v32;
    piVar18[0x12] = (int)temp_v19;
    piVar18[0xd] = (int)temp_v18;
    piVar18[0xe] = (int)((unsigned long long)temp_v33 >> 0x20);
    piVar18[0xf] = (int)temp_v33;
    return;
  case 4:
    fStack_20 = temp_v35;
    fStack_1c = temp_v37;
    mapEaseSceneHeading();
    piVar18 = g_lmapScene;
    temp_v32 = 0;
    *(unsigned char *)(g_lmapScene + 0x1b) = 0;
    piVar18[7] = (int)((float)piVar18[7] + ((float)piVar18[10] - (float)piVar18[7]) * 0.33333334f);
    piVar18[8] = (int)((float)piVar18[8] + ((float)piVar18[0xb] - (float)piVar18[8]) * 0.16666667f);
    piVar18[9] = (int)((float)piVar18[9] + ((float)piVar18[0xc] - (float)piVar18[9]) * 0.33333334f);
    temp_v6 = piVar18[1];
    if (temp_v6 != 0) {
      if (temp_v6 != 1) {
        if ((temp_v6 == 2) && (temp_v6 = piVar18[2], piVar18[2] = temp_v6 + 1, temp_v6 + 1 >= 4)) {
          piVar18[0x15] = 0;
          piVar18[0x16] = 0x40a00000;
          piVar18[1] = 3;
          piVar18[2] = temp_v32;
          return;
        }
      }
      else {
        temp_v32 = piVar18[2];
        piVar18[2] = temp_v32 + 1;
        if (temp_v32 + 1 >= 0x24) {
          piVar18[1] = 2;
          piVar18[2] = 0;
          return;
        }
      }
    }
    else {
      piVar18[0x15] = 0xc;
      piVar18[0x16] = 0x40400000;
      piVar18[1] = 1;
      piVar18[2] = 0;
    }
    break;
  case 5:
    fStack_20 = temp_v35;
    fStack_1c = temp_v37;
    mapEaseSceneHeading();
    piVar18 = g_lmapScene;
    *(unsigned char *)(g_lmapScene + 0x1b) = 0;
    piVar18[7] = (int)((float)piVar18[7] + ((float)piVar18[10] - (float)piVar18[7]) * 0.083333336f);
    piVar18[8] = (int)((float)piVar18[8] + ((float)piVar18[0xb] - (float)piVar18[8]) * 0.083333336f);
    piVar18[9] = (int)((float)piVar18[9] + ((float)piVar18[0xc] - (float)piVar18[9]) * 0.083333336f);
    temp_v32 = piVar18[1];
    if (temp_v32 == 0) {
      FUN_00324e38(1);
      piVar18 = g_lmapScene;
      if (g_gameState != (unsigned int *)0x16) {
        g_lmapScene[0x15] = 8;
        piVar18[0x16] = 0;
        temp_v32 = piVar18[10];
        mathPositionHeadingDegrees();
        g_lmapScene[0x14] = temp_v32;
      }
      else {
        g_lmapScene[0x15] = 0;
        piVar18[0x16] = 0x40a00000;
        temp_v32 = piVar18[7];
        mathPositionHeadingDegrees();
        g_lmapScene[0x14] = temp_v32;
      }
      FUN_00303460(0xe);
      sysPlaySe(0xdd);
      piVar18 = g_lmapScene;
      g_lmapScene[1] = g_lmapScene[1] + 1;
      piVar18[2] = 0;
      return;
    }
    if (temp_v32 != 1) {
      if ((temp_v32 == 2) && (temp_v32 = piVar18[2], piVar18[2] = temp_v32 + 1, temp_v32 + 1 >= 4)) {
        piVar18[1] = 3;
        piVar18[2] = 0;
        return;
      }
    }
    else {
      temp_v32 = piVar18[2] + 1;
      piVar18[2] = temp_v32;
      if (g_gameState == (unsigned int *)0x16 && temp_v32 == 0x14) {
        piVar18[0x15] = 0xe;
        piVar18[0x16] = 0x40a00000;
        return;
      }
      if (temp_v32 >= 0x24) {
        piVar18[1] = 2;
        piVar18[2] = 0;
        return;
      }
    }
    break;
  case 6:
    fStack_20 = temp_v35;
    fStack_1c = temp_v37;
    mapEaseSceneHeading();
    temp_v17 = soundVolumeSettingGet();
    piVar18 = g_lmapScene;
    temp_v32 = g_lmapScene[1];
    if (temp_v32 != 0) {
      if (temp_v32 != 1) {
        if (temp_v32 != 2) {
          if (temp_v32 == 3) {
            g_lmapScene[0x16] = 0x40a00000;
          }
        }
        else {
          temp_v32 = g_lmapScene[2] + 1;
          g_lmapScene[2] = temp_v32;
          if (temp_v32 < 0x13) {
            temp_v18 = (float)VectorSignedToFloat(temp_v32,(unsigned char)(in_fpscr >> 0x16) & 3);
            piVar18[0xc] = (int)((float)piVar18[0x50] + (float)piVar18[0x56] * temp_v18);
            piVar18[10] = (int)((float)piVar18[0x4e] + (float)piVar18[0x54] * temp_v18);
            piVar18[0xb] = (int)((float)piVar18[0x4f] + (float)piVar18[0x55] * temp_v18);
          }
          else {
            FUN_0033abd4();
            switch(DAT_005f162e) {
            case 0:
              temp_v3 = 0x10002c5;
              FUN_003d4ed8(temp_v3);
              break;
            case 1:
              temp_v3 = 0x10002c7;
              FUN_003d4ed8(temp_v3);
              break;
            case 2:
              temp_v3 = 0x10002c9;
              FUN_003d4ed8(temp_v3);
              break;
            case 3:
              temp_v3 = 0x10002cb;
              FUN_003d4ed8(temp_v3);
              break;
            case 4:
              temp_v3 = 0x10002cd;
              FUN_003d4ed8(temp_v3);
              break;
            case 5:
              temp_v3 = 0x10002da;
              FUN_003d4ed8(temp_v3);
              break;
            default:
            }
            FUN_00324e38(0xffffffff);
            FUN_001bc124();
            FUN_001bbf0c();
            FUN_0014af98();
            soundVolumeSettingSet();
            sysPlayVoice(0x10002e6);
            soundVolumeSettingSet(temp_v17);
            piVar18 = g_lmapScene;
            g_lmapScene[1] = g_lmapScene[1] + 1;
            piVar18[2] = 0;
          }
        }
      }
      else {
        temp_v32 = g_lmapScene[2];
        g_lmapScene[2] = temp_v32 + 1;
        if (temp_v32 + 1 >= 10) {
          FUN_0033abd4();
          switch(DAT_005f162e) {
          case 0:
            temp_v3 = 0x10002c4;
            FUN_003d4ed8(temp_v3);
            break;
          case 1:
            temp_v3 = 0x10002c6;
            FUN_003d4ed8(temp_v3);
            break;
          case 2:
            temp_v3 = 0x10002c8;
            FUN_003d4ed8(temp_v3);
            break;
          case 3:
            temp_v3 = 0x10002ca;
            FUN_003d4ed8(temp_v3);
            break;
          case 4:
            temp_v3 = 0x10002cc;
            FUN_003d4ed8(temp_v3);
            break;
          case 5:
            temp_v3 = 0x10002d9;
            FUN_003d4ed8(temp_v3);
            break;
          default:
          }
          FUN_00324e38(0xffffffff);
          FUN_001bc124();
          FUN_001bbf0c();
          FUN_0014af98();
          soundVolumeSettingSet();
          sysPlayVoice(0x10002e5);
          soundVolumeSettingSet(temp_v17);
          piVar18 = g_lmapScene;
          g_lmapScene[1] = g_lmapScene[1] + 1;
          piVar18[2] = 0;
        }
      }
    }
    else {
      g_lmapScene[0x15] = 0xd;
      piVar18[0x16] = 0x40400000;
      piVar18[1] = 1;
      piVar18[2] = 0;
    }
    piVar18 = g_lmapScene;
    g_lmapScene[7] =
         (int)((float)g_lmapScene[7] +
              ((float)g_lmapScene[10] - (float)g_lmapScene[7]) * 0.33333334f);
    piVar18[8] = (int)((float)piVar18[8] + ((float)piVar18[0xb] - (float)piVar18[8]) * 0.16666667f);
    piVar18[9] = (int)((float)piVar18[9] + ((float)piVar18[0xc] - (float)piVar18[9]) * 0.33333334f);
    FUN_002e364c(piVar18 + 10);
    temp_v34 = CONCAT44(fStack_1c,fStack_20);
    goto code_r0x00327ee8;
  case 7:
    temp_v33 = *(unsigned long long *)(g_lmapScene + 10);
    temp_v6 = g_lmapScene[0xc];
    iStack_38 = (int)temp_v35;
    fStack_34 = temp_v37;
    fStack_30 = fStack_28;
    temp_v18 = fStack_2c;
    fStack_2c = fStack_24;
    fStack_28 = fStack_20;
    fStack_24 = fStack_1c;
    fStack_20 = temp_v18;
    fStack_1c = temp_v25;
    mapEaseSceneHeading();
    piVar18 = g_lmapScene;
    temp_v18 = (float)g_lmapScene[7] +
             ((float)g_lmapScene[10] - (float)g_lmapScene[7]) * 0.33333334f;
    g_lmapScene[7] = (int)temp_v18;
    piVar18[8] = (int)((float)piVar18[8] + ((float)piVar18[0xb] - (float)piVar18[8]) * 0.16666667f);
    piVar18[9] = (int)((float)piVar18[9] + ((float)piVar18[0xc] - (float)piVar18[9]) * 0.33333334f);
    temp_v32 = piVar18[1];
    if (temp_v32 != 0xc) {
      if (temp_v32 < 0xc) {
        temp_v12 = 0x40a00000;
        if (temp_v32 != 2) {
          if (temp_v32 < 2) {
            if (temp_v32 != 0) {
              if (temp_v32 == 1) {
                piVar18[2] = piVar18[2] + 1;
                FUN_00233e10(1,DAT_005f16ac);
                piVar18 = g_lmapScene;
                if (g_lmapScene[2] >= 3) {
                  temp_v32 = g_lmapScene[1];
                  g_lmapScene[0x15] = 0x1d;
                  piVar18[0x16] = 0x40000000;
                  piVar18[1] = temp_v32 + 1;
                  piVar18[2] = 0;
                }
              }
            }
            else {
              piVar18[0x15] = 0;
              piVar18[0x16] = 0x40400000;
              *(unsigned char *)(piVar18 + 0x1b) = 0;
              distSpatial();
              temp_v25 = DAT_005f16b8;
              temp_v19 = DAT_005f16b4;
              piVar18 = g_lmapScene;
              temp_v35 = 0.017453292f;
              temp_v27 = 100.0f;
              temp_v32 = 0x41f00000;
              temp_v37 = 180.0f;
              g_lmapScene[0x46] = (int)DAT_005f16b0;
              piVar18[0x47] = (int)temp_v19;
              piVar18[0x48] = (int)temp_v25;
              if ((int)temp_v18 < 0x42700000) {
                temp_v18 = ((float)piVar18[0x13] + 180.0f) * 0.017453292f;
                FUN_001bc124();
                piVar18 = g_lmapScene;
                g_lmapScene[0x46] = (int)((float)g_lmapScene[0x46] + temp_v18 * temp_v27);
                temp_v35 = ((float)piVar18[0x13] + temp_v37) * temp_v35;
                FUN_001bbf0c();
                piVar18 = g_lmapScene + 0x49;
                g_lmapScene[0x48] = (int)((float)g_lmapScene[0x48] + temp_v35 * temp_v27);
                FUN_003250ac(piVar18);
                piVar18 = g_lmapScene;
                g_lmapScene[0x4c] = temp_v32;
                *(unsigned char *)((int)piVar18 + 0x115) = 1;
                temp_v32 = piVar18[10];
                mathPositionHeadingDegrees();
                g_lmapScene[0x14] = temp_v32;
              }
              else {
                temp_v18 = ((float)piVar18[0x14] + 180.0f) * 0.017453292f;
                FUN_001bc124();
                piVar18 = g_lmapScene;
                g_lmapScene[0x46] = (int)((float)g_lmapScene[0x46] + temp_v18 * temp_v27);
                temp_v35 = ((float)piVar18[0x14] + temp_v37) * temp_v35;
                FUN_001bbf0c();
                piVar18 = g_lmapScene + 0x49;
                g_lmapScene[0x48] = (int)((float)g_lmapScene[0x48] + temp_v35 * temp_v27);
                FUN_003250ac(piVar18);
                piVar18 = g_lmapScene;
                g_lmapScene[0x4c] = temp_v32;
                *(unsigned char *)((int)piVar18 + 0x115) = 1;
                temp_v32 = piVar18[10];
                mathPositionHeadingDegrees();
                g_lmapScene[0x14] = temp_v32;
              }
              FUN_00303460(10);
              g_lmapView[0x2c] = -1;
              sysPlaySe(0xdd);
              FUN_00233e10(1,DAT_005f16ac);
              mapIfSpawnManholeAction();
              piVar18 = g_lmapScene;
              temp_v32 = piVar18[1];
              piVar18[1] = temp_v32 + 1;
              piVar18[2] = 0;
            }
          }
          else if (temp_v32 != 10) {
            if ((temp_v32 == 0xb) &&
               (temp_v32 = piVar18[2], piVar18[2] = temp_v32 + 1, temp_v32 + 1 == 0x14)) {
              FUN_002342b8();
              temp_v32 = g_lmapScene[1];
              piVar18 = g_lmapScene;
              piVar18[1] = temp_v32 + 1;
              piVar18[2] = 0;
            }
          }
          else {
            DAT_005f185a = 0;
            piVar18[0x15] = 8;
            piVar18[0x16] = 0x40a00000;
            temp_v32 = piVar18[1];
            piVar18[1] = temp_v32 + 1;
            piVar18[2] = 0;
          }
        }
        else {
          piVar18[2] = piVar18[2] + 1;
          FUN_00233e10(1,DAT_005f16ac);
          temp_v32 = FUN_004d0584();
          piVar18 = g_lmapScene;
          if (temp_v32 != 0) {
            g_lmapScene[1] = 10;
            piVar18[2] = 0;
          }
          else {
            temp_v32 = padButtonIsPressed(5);
            if ((temp_v32 != 0) || (temp_v32 = inputIsQuestMenuPressed(), temp_v32 != 0)) {
              piVar18 = g_lmapView;
              g_lmapView[6] = g_lmapScene[0x14];
              piVar18[0x2c] = 0;
              FUN_00303460(0);
              piVar18 = g_lmapScene;
              g_lmapScene[0x15] = 0;
              piVar18[0x16] = temp_v12;
              FUN_00233e10(0,DAT_005f16ac);
              mapIfReleaseSlot1();
              piVar18 = g_lmapScene;
              g_lmapScene[1] = 0x5a;
              piVar18[2] = 0;
            }
          }
        }
      }
      else if (temp_v32 != 0xd) {
        if (temp_v32 != 0x5a) {
          if (temp_v32 != 0x5b) {
            if ((temp_v32 == 0x5c) && (temp_v32 = piVar18[2], piVar18[2] = temp_v32 + 1, temp_v32 + 1 >= 4))
            {
              temp_v17 = 1;
              mapSetSceneState(temp_v17);
            }
          }
          else {
            mapIfReleaseRequestObject();
            temp_v32 = g_lmapScene[1];
            piVar18 = g_lmapScene;
            piVar18[1] = temp_v32 + 1;
            piVar18[2] = 0;
          }
        }
        else {
          piVar18[1] = temp_v32 + 1;
          piVar18[2] = 0;
        }
      }
      else {
        temp_v32 = piVar18[2];
        piVar18[2] = temp_v32 + 1;
        if (temp_v32 + 1 == 0x14) {
          mapIfReleaseRequestObject();
          mapIfSetMode1();
          temp_v17 = 8;
          mapSetSceneState(temp_v17);
        }
      }
    }
    else {
      temp_v32 = mapIfHasSelection();
      if (temp_v32 == 0) {
        mapIfReleaseSlot1();
        piVar18 = g_lmapView;
        g_lmapView[6] = g_lmapScene[0x14];
        piVar18[0x2c] = 0;
        FUN_00303460(0);
        temp_v32 = g_lmapScene[1];
        piVar18 = g_lmapScene;
        piVar18[1] = temp_v32 + 1;
        piVar18[2] = 0;
      }
    }
    if (*(char *)((int)g_lmapScene + 0x115) != '\0') {
      temp_v18 = (float)g_lmapScene[10];
      distSpatial();
      piVar18 = g_lmapScene;
      temp_v19 = (float)g_lmapScene[0x4c];
      if (temp_v19 >= temp_v18) {
        temp_v32 = g_lmapScene[0x47];
        temp_v12 = g_lmapScene[0x48];
        g_lmapScene[10] = g_lmapScene[0x46];
        *(unsigned char *)((int)piVar18 + 0x115) = 0;
        piVar18[0xb] = temp_v32;
        piVar18[0xc] = temp_v12;
      }
      else {
        pfVar8 = (float *)(g_lmapScene + 0x4a);
        temp_v18 = (float)g_lmapScene[0x4b];
        g_lmapScene[10] = (int)((float)g_lmapScene[10] + (float)g_lmapScene[0x49] * temp_v19);
        piVar18[0xb] = (int)((float)piVar18[0xb] + *pfVar8 * temp_v19);
        piVar18[0xc] = (int)((float)piVar18[0xc] + temp_v18 * temp_v19);
      }
      piVar18 = g_lmapScene;
      piVar10 = g_lmapScene + 0xd;
      g_lmapScene[0xd] = (int)temp_v33;
      piVar18[0xe] = (int)((unsigned long long)temp_v33 >> 0x20);
      piVar18[0xf] = temp_v6;
      piVar18 = piVar18 + 10;
      FUN_0025ef68(piVar18,piVar10,0);
      if (piVar18 != (int *)0x0) {
        *(unsigned char *)((int)g_lmapScene + 0x115) = 0;
      }
    }
    FUN_002e364c(g_lmapScene + 10);
    temp_v34 = CONCAT44(fStack_34,iStack_38);
    in_d9 = CONCAT44(fStack_2c,fStack_30);
    in_d10 = CONCAT44(fStack_24,fStack_28);
    in_d11 = CONCAT44(fStack_1c,fStack_20);
    goto code_r0x00327ee8;
  case 9:
    fStack_30 = temp_v35;
    fStack_2c = temp_v37;
    mapEaseSceneHeading();
    piVar18 = g_lmapScene;
    g_lmapScene[7] =
         (int)((float)g_lmapScene[7] +
              ((float)g_lmapScene[10] - (float)g_lmapScene[7]) * 0.33333334f);
    piVar18[8] = (int)((float)piVar18[8] + ((float)piVar18[0xb] - (float)piVar18[8]) * 0.16666667f);
    piVar18[9] = (int)((float)piVar18[9] + ((float)piVar18[0xc] - (float)piVar18[9]) * 0.33333334f);
    temp_v32 = piVar18[1];
    if (temp_v32 != 0xc) {
      if (temp_v32 < 0xc) {
        temp_v6 = 0x40a00000;
        if (temp_v32 != 2) {
          if (temp_v32 < 2) {
            if (temp_v32 != 0) {
              if (temp_v32 == 1) {
                piVar18[2] = piVar18[2] + 1;
                FUN_00233e10(1,DAT_005f16ac);
                piVar18 = g_lmapScene;
                if (g_lmapScene[2] >= 3) {
                  temp_v32 = g_lmapScene[1];
                  g_lmapScene[0x15] = 0x1d;
                  piVar18[0x16] = 0x40000000;
                  piVar18[1] = temp_v32 + 1;
                  piVar18[2] = 0;
                }
              }
            }
            else {
              piVar18[0x15] = 0;
              piVar18[0x16] = 0x40400000;
              *(unsigned char *)(piVar18 + 0x1b) = 0;
              temp_v19 = DAT_005f16b8;
              temp_v18 = DAT_005f16b4;
              temp_v25 = 0.017453292f;
              piVar18[10] = (int)DAT_005f16b0;
              piVar18[0xb] = (int)temp_v18;
              piVar18[0xc] = (int)temp_v19;
              temp_v18 = DAT_005f16cc * 0.017453292f;
              FUN_001bc124();
              temp_v19 = 40.0f;
              g_lmapScene[10] = (int)((float)g_lmapScene[10] + temp_v18 * 40.0f);
              temp_v25 = DAT_005f16cc * temp_v25;
              FUN_001bbf0c();
              piVar18 = g_lmapScene;
              g_lmapScene[0xc] = (int)((float)g_lmapScene[0xc] + temp_v25 * temp_v19);
              piVar18[0x14] = (int)DAT_005f16bc;
              FUN_00303460(0xb);
              g_lmapView[0x2c] = -2;
              sysPlaySe(0xdd);
              FUN_00233e10(1,DAT_005f16ac);
              FUN_001bc124();
              FUN_001bbf0c();
              mapIfSpawnCaveAction();
              temp_v32 = g_lmapScene[1];
              piVar18 = g_lmapScene;
              piVar18[1] = temp_v32 + 1;
              piVar18[2] = 0;
            }
          }
          else if (temp_v32 != 10) {
            if ((temp_v32 == 0xb) &&
               (temp_v32 = piVar18[2], piVar18[2] = temp_v32 + 1, temp_v32 + 1 == 0x14)) {
              FUN_002342b8();
              temp_v32 = g_lmapScene[1];
              piVar18 = g_lmapScene;
              piVar18[1] = temp_v32 + 1;
              piVar18[2] = 0;
            }
          }
          else {
            DAT_005f185a = 0;
            piVar18[0x15] = 8;
            piVar18[0x16] = 0x40a00000;
            FUN_00324e38(1);
            temp_v32 = g_lmapScene[1];
            piVar18 = g_lmapScene;
            piVar18[1] = temp_v32 + 1;
            piVar18[2] = 0;
          }
        }
        else {
          piVar18[2] = piVar18[2] + 1;
          FUN_00233e10(1,DAT_005f16ac);
          temp_v32 = FUN_004d0584();
          piVar18 = g_lmapScene;
          if (temp_v32 != 0) {
            g_lmapScene[1] = 10;
            piVar18[2] = 0;
          }
          else {
            temp_v32 = padButtonIsPressed(5);
            if ((temp_v32 != 0) || (temp_v32 = inputIsQuestMenuPressed(), temp_v32 != 0)) {
              piVar18 = g_lmapView;
              g_lmapView[6] = g_lmapScene[0x14];
              piVar18[0x2c] = 0;
              FUN_00303460(0);
              piVar18 = g_lmapScene;
              g_lmapScene[0x15] = 0;
              piVar18[0x16] = temp_v6;
              FUN_00233e10(0,DAT_005f16ac);
              mapIfReleaseSlot2();
              piVar18 = g_lmapScene;
              g_lmapScene[1] = 0x5a;
              piVar18[2] = 0;
            }
          }
        }
      }
      else if (temp_v32 != 0xd) {
        if (temp_v32 != 0x5a) {
          if (temp_v32 != 0x5b) {
            if ((temp_v32 == 0x5c) && (temp_v32 = piVar18[2], piVar18[2] = temp_v32 + 1, temp_v32 + 1 >= 4))
            {
              temp_v17 = 1;
              mapSetSceneState(temp_v17);
            }
          }
          else {
            mapIfReleasePanel();
            temp_v32 = g_lmapScene[1];
            piVar18 = g_lmapScene;
            piVar18[1] = temp_v32 + 1;
            piVar18[2] = 0;
          }
        }
        else {
          piVar18[1] = temp_v32 + 1;
          piVar18[2] = 0;
        }
      }
      else {
        temp_v32 = piVar18[2];
        piVar18[2] = temp_v32 + 1;
        if (temp_v32 + 1 == 0x14) {
          mapIfReleasePanel();
          mapIfSetMode1();
          temp_v17 = 10;
          mapSetSceneState(temp_v17);
        }
      }
    }
    else {
      temp_v32 = mapIfHasSelection();
      if (temp_v32 == 0) {
        mapIfReleaseSlot2();
        piVar18 = g_lmapView;
        g_lmapView[6] = g_lmapScene[0x14];
        piVar18[0x2c] = 0;
        FUN_00303460(0);
        temp_v32 = g_lmapScene[1];
        piVar18 = g_lmapScene;
        piVar18[1] = temp_v32 + 1;
        piVar18[2] = 0;
      }
    }
    FUN_002e364c(g_lmapScene + 10);
    temp_v34 = CONCAT44(fStack_2c,fStack_30);
    in_d9 = CONCAT44(fStack_24,fStack_28);
    in_d10 = CONCAT44(fStack_1c,fStack_20);
    goto code_r0x00327ee8;
  case 0xb:
    temp_v18 = fStack_3c;
    fStack_3c = fStack_20;
    fStack_28 = (float)iStack_38;
    iStack_38 = (int)fStack_1c;
    fStack_34 = fStack_2c;
    fStack_2c = temp_v18;
    temp_v17 = soundVolumeSettingGet();
    uStack_5c = romwright_piece_4_4(temp_v17,(int)uStack_5c);
    if (g_lmapScene[1] < 10) {
      mapEaseSceneHeading();
      piVar18 = g_lmapScene;
      g_lmapScene[7] =
           (int)((float)g_lmapScene[7] +
                ((float)g_lmapScene[10] - (float)g_lmapScene[7]) * 0.33333334f);
      piVar18[8] = (int)((float)piVar18[8] + ((float)piVar18[0xb] - (float)piVar18[8]) * 0.16666667f)
      ;
      piVar18[9] = (int)((float)piVar18[9] + ((float)piVar18[0xc] - (float)piVar18[9]) * 0.33333334f)
      ;
    }
    piVar18 = g_lmapScene;
    temp_v17 = 0x10002c4;
    temp_v32 = g_lmapScene[1];
    temp_v18 = 0.017453292f;
    temp_v6 = 0x40000000;
    if (temp_v32 != 0x10) {
      if (temp_v32 >= 0x10) {
        if (temp_v32 == 0x36) {
          mapIfReleaseSlot3();
          piVar10 = g_lmapScene;
          g_lmapScene[0x1a] = 0;
          piVar18 = g_lmapView;
          g_lmapView[6] = piVar10[0x14];
          piVar18[0x2c] = 0;
          FUN_00303460(0);
          piVar18 = g_lmapScene;
          temp_v32 = piVar18[1];
          piVar18[1] = temp_v32 + 1;
          piVar18[2] = 0;
          FUN_002e364c(g_lmapScene + 10);
          FUN_00327ee8();
          return;
        }
        if (temp_v32 < 0x37) {
          if (temp_v32 == 0x32) {
            DAT_005f185a = 0;
            g_lmapView[3] = 2;
            piVar18[0x15] = 5;
            piVar18[0x16] = 0x40400000;
            piVar18[0x2d] = (int)((float)piVar18[0x29] - (float)piVar18[8]);
            piVar18[0x2e] = (int)((float)piVar18[0x2a] - (float)piVar18[9]);
            piVar18[0x2c] = (int)(((float)piVar18[0x28] - (float)piVar18[7]) * 0.025f);
            piVar18[0x2d] = (int)((float)piVar18[0x2d] * 0.025f);
            piVar18[0x2e] = (int)((float)piVar18[0x2e] * 0.025f);
            piVar18 = g_lmapScene;
            g_lmapScene[0x2f] = 0;
            temp_v32 = piVar18[1];
            piVar18[1] = temp_v32 + 1;
            piVar18[2] = 0;
            FUN_002e364c(g_lmapScene + 10);
            FUN_00327ee8();
            return;
          }
          if (temp_v32 == 0x33) {
            temp_v32 = g_lmapScene[2];
            g_lmapScene[2] = temp_v32 + 1;
            if (temp_v32 + 1 < 0x15) {
              FUN_002e364c(g_lmapScene + 10);
              FUN_00327ee8();
              return;
            }
            FUN_0033abd4();
            switch(DAT_005f162e) {
            case 0:
              FUN_003d4ed8(temp_v17);
              break;
            case 1:
              temp_v17 = 0x10002c6;
              FUN_003d4ed8(temp_v17);
              break;
            case 2:
              temp_v17 = 0x10002c8;
              FUN_003d4ed8(temp_v17);
              break;
            case 3:
              temp_v17 = 0x10002ca;
              FUN_003d4ed8(temp_v17);
              break;
            case 4:
              temp_v17 = 0x10002cc;
              FUN_003d4ed8(temp_v17);
              break;
            case 5:
              temp_v17 = 0x10002d9;
              FUN_003d4ed8(temp_v17);
            }
            goto LAB_00366704;
          }
          if (temp_v32 != 0x34) {
            if (temp_v32 != 0x35) {
              FUN_002e364c(g_lmapScene + 10);
              FUN_00327ee8();
              return;
            }
            temp_v18 = (float)g_lmapScene[0x1a];
            pfVar8 = (float *)(g_lmapScene + 8);
            temp_v32 = g_lmapScene[0x2f];
            g_lmapScene[0x1a] = (int)(temp_v18 - 2.0f);
            piVar18[8] = (int)(*pfVar8 + (temp_v18 - 2.0f));
            if (temp_v32 < 0x28) {
              piVar18[0x2f] = temp_v32 + 1;
              piVar18[7] = (int)((float)piVar18[7] + (float)piVar18[0x2c]);
              piVar18[9] = (int)((float)piVar18[9] + (float)piVar18[0x2e]);
            }
            temp_v32 = piVar18[2];
            piVar18[2] = temp_v32 + 1;
            if (temp_v32 + 1 == 0x1e) {
              FUN_002342b8();
            }
            if ((g_lmapScene[2] < 0x1f) || (temp_v32 = mapIfHasSelection(), temp_v32 != 0)) {
              FUN_002e364c(g_lmapScene + 10);
              FUN_00327ee8();
              return;
            }
            FUN_002342b8();
            temp_v32 = g_lmapScene[1];
            piVar18 = g_lmapScene;
          }
          else {
            pfVar8 = (float *)(g_lmapScene + 8);
            temp_v6 = g_lmapScene[0x2f];
            temp_v18 = (float)g_lmapScene[0x1a] - 2.0f;
            g_lmapScene[0x1a] = (int)temp_v18;
            piVar18[8] = (int)(*pfVar8 + temp_v18);
            if (temp_v6 < 0x28) {
              piVar18[0x2f] = temp_v6 + 1;
              piVar18[7] = (int)((float)piVar18[7] + (float)piVar18[0x2c]);
              piVar18[9] = (int)((float)piVar18[9] + (float)piVar18[0x2e]);
            }
            piVar18[2] = piVar18[2] + 1;
            if (temp_v18 <= 0.0f) {
              FUN_002e364c(g_lmapScene + 10);
              FUN_00327ee8();
              return;
            }
          }
        }
        else {
          if (temp_v32 == 0x37) {
            g_lmapScene[2] = g_lmapScene[2] + 1;
            mapIfOverlayRelease();
            mapSetSceneState(0xc);
            FUN_002e364c(g_lmapScene + 10);
            FUN_00327ee8();
            return;
          }
          if (temp_v32 != 0x5a) {
            if (temp_v32 != 0x5b) {
              if ((temp_v32 != 0x5c) ||
                 (temp_v32 = g_lmapScene[2], g_lmapScene[2] = temp_v32 + 1, temp_v32 + 1 < 4)) {
                FUN_002e364c(g_lmapScene + 10);
                FUN_00327ee8();
                return;
              }
              temp_v17 = 1;
              mapSetSceneState(temp_v17);
              FUN_002e364c(g_lmapScene + 10);
              FUN_00327ee8();
              return;
            }
            mapIfOverlayRelease();
            piVar18 = g_lmapScene;
            temp_v32 = piVar18[1];
          }
        }
        piVar18[1] = temp_v32 + 1;
        piVar18[2] = 0;
        FUN_002e364c(g_lmapScene + 10);
        FUN_00327ee8();
        return;
      }
      switch(temp_v32) {
      case 0:
        g_lmapScene[0x15] = 0;
        piVar18[0x16] = 0x40400000;
        *(unsigned char *)(piVar18 + 0x1b) = 0;
        temp_v19 = DAT_005f16b8;
        temp_v18 = DAT_005f16b4;
        piVar18[10] = (int)DAT_005f16b0;
        piVar18[0xb] = (int)temp_v18;
        piVar18[0xc] = (int)temp_v19;
        piVar18[0x14] = (int)DAT_005f16bc;
        FUN_00303460(0xc);
        g_lmapView[0x2c] = -3;
        sysPlaySe(0xdd);
        FUN_00233e10(1,DAT_005f16ac);
        FUN_001bc124();
        FUN_001bbf0c();
        FUN_00246014();
        piVar18 = g_lmapScene;
        temp_v32 = piVar18[1];
        piVar18[1] = temp_v32 + 1;
        piVar18[2] = 0;
        break;
      case 1:
        g_lmapScene[2] = g_lmapScene[2] + 1;
        FUN_00233e10(1,DAT_005f16ac);
        piVar18 = g_lmapScene;
        if (g_lmapScene[2] >= 3) {
          temp_v32 = g_lmapScene[1];
          g_lmapScene[0x15] = 0x1d;
          piVar18[0x16] = temp_v6;
          piVar18[1] = temp_v32 + 1;
          piVar18[2] = 0;
        }
        break;
      case 2:
        g_lmapScene[2] = g_lmapScene[2] + 1;
        FUN_00233e10(1,DAT_005f16ac);
        temp_v32 = FUN_004d0584();
        if (temp_v32 != 0) {
          FUN_003b5714(DAT_005f16a0,DAT_005f16a4,DAT_005f16a8);
          temp_v32 = dataTableGetRecord23();
          piVar18 = g_lmapScene;
          if (DAT_005f164c != 0) {
            temp_v19 = (float)g_lmapScene[0x14] * temp_v18;
            FUN_001bc124();
            piVar18 = g_lmapScene;
            temp_v25 = 250.0f;
            g_lmapScene[0x28] = (int)((float)g_lmapScene[10] + temp_v19 * 250.0f);
            piVar18[0x29] = (int)((float)piVar18[0xb] - 500.0f);
            temp_v18 = (float)piVar18[0x14] * temp_v18;
            FUN_001bbf0c();
            piVar18 = g_lmapScene;
            g_lmapScene[0x2a] = (int)((float)g_lmapScene[0xc] + temp_v18 * temp_v25);
            piVar18[0x2b] = piVar18[0x14];
            piVar18[1] = 0x32;
            piVar18[2] = 0;
          }
          else {
            temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v32 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
            g_lmapScene[0x28] = temp_v6;
            temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v32 + 6),(unsigned char)(in_fpscr >> 0x16) & 3);
            piVar18[0x29] = temp_v6;
            temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v32 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
            piVar18[0x2a] = temp_v6;
            temp_v32 = VectorSignedToFloat((int)*(short *)(temp_v32 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
            piVar18[0x2b] = temp_v32;
            piVar18[1] = 10;
            piVar18[2] = 0;
          }
        }
        else {
          temp_v32 = padButtonIsPressed(5);
          if ((temp_v32 != 0) || (temp_v32 = inputIsQuestMenuPressed(), temp_v32 != 0)) {
            piVar18 = g_lmapView;
            g_lmapView[6] = g_lmapScene[0x14];
            piVar18[0x2c] = 0;
            FUN_00303460(0);
            piVar18 = g_lmapScene;
            g_lmapScene[0x15] = 0;
            piVar18[0x16] = 0x40a00000;
            FUN_00233e10(0,DAT_005f16ac);
            mapIfReleaseSlot3();
            piVar18 = g_lmapScene;
            g_lmapScene[1] = 0x5a;
            piVar18[2] = 0;
          }
        }
        break;
      case 10:
        DAT_005f185a = 0;
        g_lmapView[3] = 1;
        piVar18[0x15] = 5;
        piVar18[0x16] = 0x40400000;
        piVar18[0x2c] = (int)((float)piVar18[0x28] - (float)piVar18[7]);
        piVar18[0x2d] = (int)((float)piVar18[0x29] - (float)piVar18[8]);
        piVar18[0x2e] = (int)((float)piVar18[0x2a] - (float)piVar18[9]);
        piVar18[0x2c] = (int)(((float)piVar18[0x28] - (float)piVar18[7]) * 0.025f);
        piVar18[0x2d] = (int)((float)piVar18[0x2d] * 0.025f);
        piVar18[0x2e] = (int)((float)piVar18[0x2e] * 0.025f);
        piVar18 = g_lmapScene;
        g_lmapScene[0x2f] = 0;
        temp_v32 = piVar18[1];
        piVar18[1] = temp_v32 + 1;
        piVar18[2] = 0;
        break;
      case 0xb:
        temp_v32 = g_lmapScene[2];
        g_lmapScene[2] = temp_v32 + 1;
        if (temp_v32 + 1 < 0x15) break;
        FUN_0033abd4();
        switch(DAT_005f162e) {
        case 0:
          FUN_003d4ed8(temp_v17);
          break;
        case 1:
          temp_v17 = 0x10002c6;
          FUN_003d4ed8(temp_v17);
          break;
        case 2:
          temp_v17 = 0x10002c8;
          FUN_003d4ed8(temp_v17);
          break;
        case 3:
          temp_v17 = 0x10002ca;
          FUN_003d4ed8(temp_v17);
          break;
        case 4:
          temp_v17 = 0x10002cc;
          FUN_003d4ed8(temp_v17);
          break;
        case 5:
          temp_v17 = 0x10002d9;
          FUN_003d4ed8(temp_v17);
          break;
        default:
        }
LAB_00366704:
        FUN_00324e38(0xffffffff);
        FUN_001bc124();
        FUN_001bbf0c();
        FUN_0014af98();
        soundVolumeSettingSet();
        sysPlayVoice(0x10002e5);
        soundVolumeSettingSet((*(unsigned int *)((unsigned char *)&uStack_5c + 4)));
        piVar18 = g_lmapScene;
        g_lmapScene[0x1a] = 0x41700000;
        piVar18[8] = (int)((float)piVar18[8] + 15.0f);
        temp_v32 = piVar18[1];
        piVar18[1] = temp_v32 + 1;
        piVar18[2] = 0;
        break;
      case 0xc:
        pfVar8 = (float *)(g_lmapScene + 8);
        temp_v32 = g_lmapScene[0x2f];
        temp_v18 = (float)g_lmapScene[0x1a] - 2.0f;
        g_lmapScene[0x1a] = (int)temp_v18;
        piVar18[8] = (int)(*pfVar8 + temp_v18);
        if (temp_v32 < 0x28) {
          piVar18[0x2f] = temp_v32 + 1;
          piVar18[7] = (int)((float)piVar18[7] + (float)piVar18[0x2c]);
          piVar18[9] = (int)((float)piVar18[9] + (float)piVar18[0x2e]);
        }
        piVar18[2] = piVar18[2] + 1;
        if (0.0f < temp_v18) {
          piVar18[1] = 0xd;
          piVar18[2] = 0;
        }
        break;
      case 0xd:
        temp_v18 = (float)g_lmapScene[0x1a];
        pfVar8 = (float *)(g_lmapScene + 8);
        temp_v32 = g_lmapScene[0x2f];
        g_lmapScene[0x1a] = (int)(temp_v18 - 2.0f);
        temp_v18 = *pfVar8 + (temp_v18 - 2.0f);
        piVar18[8] = (int)temp_v18;
        if (temp_v32 < 0x28) {
          piVar18[0x2f] = temp_v32 + 1;
          piVar18[7] = (int)((float)piVar18[7] + (float)piVar18[0x2c]);
          piVar18[9] = (int)((float)piVar18[9] + (float)piVar18[0x2e]);
        }
        temp_v19 = (float)piVar18[0x29];
        piVar18[2] = piVar18[2] + 1;
        if (temp_v18 < temp_v19) {
          temp_v32 = piVar18[0x28];
          temp_v6 = piVar18[0x2a];
          piVar18[7] = temp_v32;
          piVar18[8] = (int)temp_v19;
          piVar18[9] = temp_v6;
          piVar18[10] = temp_v32;
          piVar18[0xb] = (int)temp_v19;
          piVar18[0xc] = temp_v6;
          piVar18[0xd] = temp_v32;
          piVar18[0xe] = (int)temp_v19;
          piVar18[0xf] = temp_v6;
          piVar18[0x10] = temp_v32;
          piVar18[0x11] = (int)temp_v19;
          piVar18[0x12] = temp_v6;
          piVar18[0x1a] = 0;
          piVar18[0x15] = 7;
          piVar18[0x16] = 0x40400000;
          piVar18[1] = 0xe;
          piVar18[2] = 0;
          FUN_001bc124();
          FUN_001bbf0c();
          FUN_001bc124();
          FUN_001bbf0c();
          FUN_00352308();
        }
        break;
      case 0xe:
        temp_v32 = g_lmapScene[2];
        g_lmapScene[2] = temp_v32 + 1;
        if (temp_v32 + 1 == 1) {
          mapIfReleaseSlot3();
          piVar18 = g_lmapView;
          g_lmapView[6] = g_lmapScene[0x14];
          piVar18[0x2c] = 0;
          FUN_00303460(0);
          *(unsigned char *)(g_lmapView + 0x2a) = 1;
        }
        if (g_lmapScene[2] == 3) {
          FUN_0033abd4();
          switch(DAT_005f162e) {
          case 0:
            temp_v17 = 0x10002c5;
            FUN_003d4ed8(temp_v17);
            break;
          case 1:
            temp_v17 = 0x10002c7;
            FUN_003d4ed8(temp_v17);
            break;
          case 2:
            temp_v17 = 0x10002c9;
            FUN_003d4ed8(temp_v17);
            break;
          case 3:
            temp_v17 = 0x10002cb;
            FUN_003d4ed8(temp_v17);
            break;
          case 4:
            temp_v17 = 0x10002cd;
            FUN_003d4ed8(temp_v17);
            break;
          case 5:
            temp_v17 = 0x10002da;
            FUN_003d4ed8(temp_v17);
            break;
          default:
          }
          FUN_00324e38(0xffffffff);
          FUN_001bc124();
          FUN_001bbf0c();
          FUN_0014af98();
          soundVolumeSettingSet();
          sysPlayVoice(0x10002e6);
          soundVolumeSettingSet((*(unsigned int *)((unsigned char *)&uStack_5c + 4)));
        }
        if (g_lmapScene[2] != 6) break;
        if (g_lmapScene[0x2f] >= 0x24) {
          temp_v17 = 0x1e;
          temp_v3 = 0x14;
        }
        else {
          temp_v17 = 0xf;
          temp_v3 = 10;
        }
        FUN_002d1f40(temp_v3,temp_v17,0);
        temp_v32 = g_lmapScene[1];
        piVar18 = g_lmapScene;
        piVar18[1] = temp_v32 + 1;
        piVar18[2] = 0;
        break;
      case 0xf:
        mapIfOverlayRelease();
        piVar18 = g_lmapScene;
        temp_v32 = piVar18[1];
        piVar18[1] = temp_v32 + 1;
        piVar18[2] = 0;
      }
    }
    else {
      temp_v32 = g_lmapScene[2];
      g_lmapScene[2] = temp_v32 + 1;
      if (temp_v32 + 1 < 0x12) {
        FUN_002e364c(g_lmapScene + 10);
        FUN_00327ee8();
        return;
      }
      FUN_00317af8(&uStack_54,(int)&uStack_54 + 4,0);
      if (((((unsigned int)uStack_54 < 0xbf000001) && ((int)(unsigned int)uStack_54 < 0x3f000001)) &&
          ((*(unsigned int *)((unsigned char *)&uStack_54 + 4)) < 0xbf000001)) &&
         (((int)(*(unsigned int *)((unsigned char *)&uStack_54 + 4)) < 0x3f000001 && (g_lmapScene[2] < 0x1f)))) {
        FUN_002e364c(g_lmapScene + 10);
        FUN_00327ee8();
        return;
      }
      g_lmapScene[0x16] = 0x40a00000;
      temp_v17 = 0xc;
      mapSetSceneState(temp_v17);
    }
    FUN_002e364c(g_lmapScene + 10);
    FUN_00327ee8();
    return;
  case 0xd:
    fStack_3c = temp_v19;
    iStack_38 = temp_v32;
    fStack_30 = temp_v35;
    fStack_2c = temp_v37;
    temp_v17 = soundVolumeSettingGet();
    if (g_lmapScene[1] < 10) {
      mapEaseSceneHeading();
      piVar18 = g_lmapScene;
      g_lmapScene[7] =
           (int)((float)g_lmapScene[7] +
                ((float)g_lmapScene[10] - (float)g_lmapScene[7]) * 0.33333334f);
      piVar18[8] = (int)((float)piVar18[8] + ((float)piVar18[0xb] - (float)piVar18[8]) * 0.16666667f)
      ;
      piVar18[9] = (int)((float)piVar18[9] + ((float)piVar18[0xc] - (float)piVar18[9]) * 0.33333334f)
      ;
    }
    piVar18 = g_lmapScene;
    temp_v32 = g_lmapScene[1];
    temp_v6 = 0x40000000;
    temp_v19 = 0.0f;
    temp_v18 = 180.0f;
    if (temp_v32 != 0xb) {
      if (temp_v32 < 0xb) {
        temp_v25 = 0.017453292f;
        if (temp_v32 != 0) {
          if (temp_v32 != 1) {
            if (temp_v32 != 2) {
              if (temp_v32 == 10) {
                temp_v32 = g_lmapScene[2];
                g_lmapScene[2] = temp_v32 + 1;
                if (temp_v32 + 1 == 1) {
                  if ((g_gameState != (unsigned int *)0x26) && (g_gameState != (unsigned int *)0x1a))
                  {
                    FUN_003d4ed8(0x10002bb);
                  }
                  FUN_00324e38(0xffffffff);
                  FUN_001bc124();
                  FUN_001bbf0c();
                  FUN_0014af98();
                  soundVolumeSettingSet();
                  sysPlayVoice(0x10002e7);
                  soundVolumeSettingSet(temp_v17);
                }
                piVar18 = g_lmapScene;
                if (g_lmapScene[2] == 2) {
                  g_lmapScene[0x15] = 0x10;
                  piVar18[0x16] = (int)temp_v19;
                  mapIfReleaseSlot3();
                  piVar18 = g_lmapScene;
                  DAT_005f185a = 0;
                  piVar10 = g_lmapScene + 7;
                  g_lmapScene[0x13] = g_lmapScene[0x14];
                  temp_v32 = piVar18[0xb];
                  temp_v6 = piVar18[0xc];
                  *piVar10 = piVar18[10];
                  piVar18[8] = temp_v32;
                  piVar18[9] = temp_v6;
                  piVar18[1] = piVar18[1] + 1;
                  if (g_gameState == (unsigned int *)0x26 || g_gameState == (unsigned int *)0x1a) {
                    FUN_003d4ed8(0x10000f7);
                  }
                  g_lmapScene[2] = 0;
                }
              }
            }
            else {
              g_lmapScene[2] = g_lmapScene[2] + 1;
              FUN_00233e10(1,DAT_005f16ac);
              temp_v32 = FUN_004d0584();
              piVar18 = g_lmapScene;
              if (temp_v32 != 0) {
                g_lmapScene[1] = 10;
                piVar18[2] = 0;
                if (DAT_005f164c == 0) {
                  temp_v32 = 3;
                }
                else {
                  temp_v32 = 4;
                }
                g_lmapView[3] = temp_v32;
                fStack_3c = (float)piVar18[0xb];
                iStack_38 = piVar18[0xc];
                uStack_4c = romwright_piece_4_4(&fStack_34,(unsigned int)uStack_4c);
                uStack_44 = romwright_piece_4_4(piVar18[10],0xffffffff);
                FUN_00325ba4(2,10,0x66,(int)&uStack_44 + 4);
                piVar18 = g_lmapScene;
                fStack_34 = fStack_34 + temp_v18;
                if (fStack_34 < temp_v19) {
                  fStack_34 = fStack_34 + 360.0f;
                }
                if ((int)fStack_34 >= 0x43b40001) {
                  fStack_34 = fStack_34 - 360.0f;
                }
                g_lmapScene[0x14] = (int)fStack_34;
                piVar18[10] = (int)(*(float *)((unsigned char *)&uStack_44 + 4));
                piVar18[0xb] = (int)fStack_3c;
                piVar18[0xc] = iStack_38;
                temp_v19 = (fStack_34 + temp_v18) * temp_v25;
                piVar18[0xb] = (int)(fStack_3c - 142.0f);
                FUN_001bc124();
                piVar18 = g_lmapScene;
                temp_v35 = 35.0f;
                g_lmapScene[10] = (int)((float)g_lmapScene[10] + temp_v19 * 35.0f);
                temp_v25 = ((float)piVar18[0x14] + temp_v18) * temp_v25;
                FUN_001bbf0c();
                g_lmapScene[0xc] = (int)((float)g_lmapScene[0xc] + temp_v25 * temp_v35);
              }
              else {
                temp_v32 = padButtonIsPressed(5);
                if ((temp_v32 != 0) || (temp_v32 = inputIsQuestMenuPressed(), temp_v32 != 0)) {
                  piVar18 = g_lmapView;
                  g_lmapView[6] = g_lmapScene[0x14];
                  piVar18[0x2c] = 0;
                  FUN_00303460(0);
                  piVar18 = g_lmapScene;
                  g_lmapScene[0x15] = 0;
                  piVar18[0x16] = 0x40a00000;
                  FUN_00233e10(0,DAT_005f16ac);
                  mapIfReleaseSlot3();
                  piVar18 = g_lmapScene;
                  g_lmapScene[1] = 0x5a;
                  piVar18[2] = 0;
                }
              }
            }
          }
          else {
            g_lmapScene[2] = g_lmapScene[2] + 1;
            FUN_00233e10(1,DAT_005f16ac);
            piVar18 = g_lmapScene;
            if (g_lmapScene[2] >= 3) {
              temp_v32 = g_lmapScene[1];
              g_lmapScene[0x15] = 0x1d;
              piVar18[0x16] = temp_v6;
              piVar18[1] = temp_v32 + 1;
              piVar18[2] = 0;
            }
          }
        }
        else {
          g_lmapScene[0x15] = 0;
          piVar18[0x16] = 0x40400000;
          *(unsigned char *)(piVar18 + 0x1b) = 0;
          temp_v19 = DAT_005f16b8;
          temp_v18 = DAT_005f16b4;
          piVar18[10] = (int)DAT_005f16b0;
          piVar18[0xb] = (int)temp_v18;
          piVar18[0xc] = (int)temp_v19;
          piVar18[0x14] = (int)DAT_005f16bc;
          FUN_00303460(0xc);
          g_lmapView[0x2c] = -3;
          sysPlaySe(0xdd);
          FUN_00233e10(1,DAT_005f16ac);
          FUN_001bc124();
          FUN_001bbf0c();
          FUN_00246014();
          piVar18 = g_lmapScene;
          g_lmapScene[1] = g_lmapScene[1] + 1;
          piVar18[2] = 0;
        }
      }
      else {
        if (temp_v32 == 0xc) {
          temp_v17 = 0xe;
        }
        else {
          if (temp_v32 == 0x5a) {
            g_lmapScene[1] = 0x5b;
            piVar18[2] = 0;
            FUN_002e364c(g_lmapScene + 10);
            FUN_00327ee8();
            return;
          }
          if (temp_v32 == 0x5b) {
            mapIfOverlayRelease();
            piVar18 = g_lmapScene;
            g_lmapScene[1] = g_lmapScene[1] + 1;
            piVar18[2] = 0;
            FUN_002e364c(g_lmapScene + 10);
            FUN_00327ee8();
            return;
          }
          if ((temp_v32 != 0x5c) ||
             (temp_v32 = g_lmapScene[2], g_lmapScene[2] = temp_v32 + 1, temp_v32 + 1 < 4)) {
            FUN_002e364c(g_lmapScene + 10);
            FUN_00327ee8();
            return;
          }
          temp_v17 = 1;
        }
        mapSetSceneState(temp_v17);
      }
    }
    else {
      temp_v5 = g_lmapScene[2] + 1;
      g_lmapScene[2] = temp_v5;
      temp_v25 = (float)piVar18[0xb];
      piVar18[0xb] = (int)(temp_v25 - 2.0f);
      piVar18[7] = piVar18[10];
      piVar18[8] = (int)(temp_v25 - 2.0f);
      piVar18[9] = piVar18[0xc];
      if ((g_gameState != (unsigned int *)0x26) && (g_gameState != (unsigned int *)0x1a)) {
        if ((temp_v5 == 1 || temp_v5 == 0xb) || (temp_v5 == 0x1c || temp_v5 == 0x29)) {
          FUN_003d4ed8((temp_v5 & 3) + 0x10002bb);
          FUN_00324e38(0xffffffff);
        }
      }
      else if ((temp_v5 == 1 || temp_v5 == 0xb) || (temp_v5 == 0x1c || temp_v5 == 0x29)) {
        FUN_00324e38(0xffffffff);
      }
      if (g_lmapScene[2] == 0x1e) {
        FUN_002342b8();
      }
      if ((g_lmapScene[2] >= 0x1f) && (temp_v32 = mapIfHasSelection(), temp_v32 == 0)) {
        mapIfOverlayRelease();
        piVar18 = g_lmapView;
        g_lmapView[6] = (int)((float)g_lmapScene[0x14] + temp_v18);
        piVar18[0x2c] = 0;
        FUN_00303460(0);
        piVar18 = g_lmapScene;
        g_lmapScene[0x15] = 0;
        piVar18[0x16] = (int)temp_v19;
        piVar18[1] = piVar18[1] + 1;
        piVar18[2] = 0;
      }
    }
    FUN_002e364c(g_lmapScene + 10);
    FUN_00327ee8();
    return;
  case 0xf:
    fStack_20 = fStack_28;
    fStack_28 = temp_v35;
    fStack_1c = fStack_24;
    fStack_24 = temp_v37;
    mapEaseSceneHeading();
    piVar18 = g_lmapScene;
    temp_v18 = (float)g_lmapScene[7] +
             ((float)g_lmapScene[10] - (float)g_lmapScene[7]) * 0.33333334f;
    g_lmapScene[7] = (int)temp_v18;
    piVar18[8] = (int)((float)piVar18[8] + ((float)piVar18[0xb] - (float)piVar18[8]) * 0.16666667f);
    piVar18[9] = (int)((float)piVar18[9] + ((float)piVar18[0xc] - (float)piVar18[9]) * 0.33333334f);
    temp_v32 = piVar18[1];
    if (temp_v32 != 0xb) {
      if (temp_v32 < 0xc) {
        if (temp_v32 != 0) {
          if (temp_v32 != 1) {
            temp_v6 = 0x40a00000;
            if (temp_v32 != 2) {
              if (temp_v32 == 10) {
                DAT_005f185a = 0;
                piVar18[0x15] = 8;
                piVar18[0x16] = 0x40a00000;
                FUN_00324e38(1);
                temp_v32 = g_lmapScene[1];
                piVar18 = g_lmapScene;
                piVar18[1] = temp_v32 + 1;
                piVar18[2] = 0;
              }
            }
            else {
              piVar18[2] = piVar18[2] + 1;
              FUN_00233e10(1,DAT_005f16ac);
              temp_v32 = FUN_004d0584();
              piVar18 = g_lmapScene;
              if (temp_v32 != 0) {
                g_lmapScene[1] = 10;
                piVar18[2] = 0;
              }
              else {
                temp_v32 = padButtonIsPressed(5);
                if ((temp_v32 != 0) || (temp_v32 = inputIsQuestMenuPressed(), temp_v32 != 0)) {
                  piVar18 = g_lmapView;
                  g_lmapView[6] = g_lmapScene[0x14];
                  piVar18[0x2c] = 0;
                  FUN_00303460(0);
                  piVar18 = g_lmapScene;
                  g_lmapScene[0x15] = 0;
                  piVar18[0x16] = temp_v6;
                  FUN_00233e10(0,DAT_005f16ac);
                  piVar18 = g_lmapScene;
                  g_lmapScene[1] = 0x5a;
                  piVar18[2] = 0;
                }
              }
            }
          }
          else {
            piVar18[2] = piVar18[2] + 1;
            FUN_00233e10(1,DAT_005f16ac);
            piVar18 = g_lmapScene;
            if (g_lmapScene[2] >= 3) {
              temp_v32 = g_lmapScene[1];
              g_lmapScene[0x15] = 0x1d;
              piVar18[0x16] = 0x40000000;
              piVar18[1] = temp_v32 + 1;
              piVar18[2] = 0;
            }
          }
        }
        else {
          piVar18[0x15] = 0;
          piVar18[0x16] = 0x40400000;
          *(unsigned char *)(piVar18 + 0x1b) = 0;
          distSpatial();
          temp_v25 = DAT_005f16b8;
          temp_v19 = DAT_005f16b4;
          piVar18 = g_lmapScene;
          temp_v37 = 180.0f;
          temp_v35 = 0.017453292f;
          temp_v27 = 100.0f;
          if ((int)temp_v18 < 0x42700000) {
            g_lmapScene[10] = (int)DAT_005f16b0;
            piVar18[0xb] = (int)temp_v19;
            piVar18[0xc] = (int)temp_v25;
            temp_v18 = ((float)piVar18[0x13] + 180.0f) * 0.017453292f;
            FUN_001bc124();
            piVar18 = g_lmapScene;
            g_lmapScene[10] = (int)((float)g_lmapScene[10] + temp_v18 * temp_v27);
            temp_v35 = ((float)piVar18[0x13] + temp_v37) * temp_v35;
            FUN_001bbf0c();
            piVar18 = g_lmapScene;
            g_lmapScene[0xc] = (int)((float)g_lmapScene[0xc] + temp_v35 * temp_v27);
            temp_v32 = piVar18[10];
            mathPositionHeadingDegrees();
            g_lmapScene[0x14] = temp_v32;
          }
          else {
            temp_v25 = (float)g_lmapScene[10];
            mathPositionHeadingDegrees();
            piVar18 = g_lmapScene;
            g_lmapScene[0x14] = (int)temp_v25;
            temp_v19 = DAT_005f16b8;
            temp_v18 = DAT_005f16b4;
            piVar18[10] = (int)DAT_005f16b0;
            piVar18[0xb] = (int)temp_v18;
            piVar18[0xc] = (int)temp_v19;
            temp_v18 = (temp_v25 + temp_v37) * temp_v35;
            FUN_001bc124();
            piVar18 = g_lmapScene;
            g_lmapScene[10] = (int)((float)g_lmapScene[10] + temp_v18 * temp_v27);
            temp_v35 = ((float)piVar18[0x14] + temp_v37) * temp_v35;
            FUN_001bbf0c();
            g_lmapScene[0xc] = (int)((float)g_lmapScene[0xc] + temp_v35 * temp_v27);
          }
          FUN_00303460(10);
          g_lmapView[0x2c] = -1;
          sysPlaySe(0xdd);
          FUN_00233e10(1,DAT_005f16ac);
          temp_v32 = g_lmapScene[1];
          piVar18 = g_lmapScene;
          piVar18[1] = temp_v32 + 1;
          piVar18[2] = 0;
        }
      }
      else if (!(temp_v32 == 0x5a || temp_v32 == 0x5b)) {
        if ((temp_v32 == 0x5c) && (temp_v32 = piVar18[2], piVar18[2] = temp_v32 + 1, temp_v32 + 1 >= 4)) {
          FUN_00324e38(0);
          temp_v17 = 1;
          mapSetSceneState(temp_v17);
        }
      }
      else {
        piVar18[1] = temp_v32 + 1;
        piVar18[2] = 0;
      }
    }
    else {
      temp_v32 = piVar18[2];
      piVar18[2] = temp_v32 + 1;
      if (temp_v32 + 1 >= 0x10) {
        temp_v17 = 0x10;
        mapSetSceneState(temp_v17);
      }
    }
    FUN_002e364c(g_lmapScene + 10);
    temp_v34 = CONCAT44(fStack_24,fStack_28);
    in_d9 = CONCAT44(fStack_1c,fStack_20);
    goto code_r0x00327ee8;
  case 0x11:
    fStack_30 = temp_v35;
    fStack_2c = temp_v37;
    temp_v17 = soundVolumeSettingGet();
    if (g_lmapScene[1] < 10) {
      mapEaseSceneHeading();
      piVar18 = g_lmapScene;
      g_lmapScene[7] =
           (int)((float)g_lmapScene[7] +
                ((float)g_lmapScene[10] - (float)g_lmapScene[7]) * 0.33333334f);
      piVar18[8] = (int)((float)piVar18[8] + ((float)piVar18[0xb] - (float)piVar18[8]) * 0.16666667f)
      ;
      piVar18[9] = (int)((float)piVar18[9] + ((float)piVar18[0xc] - (float)piVar18[9]) * 0.33333334f)
      ;
    }
    piVar18 = g_lmapScene;
    temp_v6 = 0x40000000;
    temp_v12 = 0;
    temp_v32 = g_lmapScene[1];
    if (temp_v32 != 0x35) {
      if (temp_v32 < 0x36) {
        temp_v18 = 0.017453292f;
        if (temp_v32 != 0x32) {
          if (temp_v32 < 0x33) {
            if (temp_v32 != 0) {
              if (temp_v32 != 1) {
                if (temp_v32 == 2) {
                  g_lmapScene[2] = g_lmapScene[2] + 1;
                  FUN_00233e10(1,DAT_005f16ac);
                  temp_v32 = FUN_004d0584();
                  if (temp_v32 != 0) {
                    FUN_003b5714(DAT_005f16a0,DAT_005f16a4,DAT_005f16a8);
                    piVar18 = g_lmapScene;
                    g_lmapScene[0x28] = (int)DAT_005f16b0;
                    piVar18[0x29] = (int)(DAT_005f16b4 - 500.0f);
                    piVar18[0x2a] = (int)DAT_005f16b8;
                    piVar18[0x2b] = piVar18[0x14];
                    piVar18[1] = 0x32;
                    piVar18[2] = 0;
                  }
                  else {
                    temp_v32 = padButtonIsPressed(5);
                    if ((temp_v32 != 0) || (temp_v32 = inputIsQuestMenuPressed(), temp_v32 != 0)) {
                      piVar18 = g_lmapView;
                      g_lmapView[6] = g_lmapScene[0x14];
                      piVar18[0x2c] = 0;
                      FUN_00303460(0);
                      piVar18 = g_lmapScene;
                      g_lmapScene[0x15] = 0;
                      piVar18[0x16] = 0x40a00000;
                      FUN_00233e10(0,DAT_005f16ac);
                      mapIfReleaseSlot3();
                      piVar18 = g_lmapScene;
                      g_lmapScene[1] = 0x5a;
                      piVar18[2] = 0;
                    }
                  }
                }
              }
              else {
                g_lmapScene[2] = g_lmapScene[2] + 1;
                FUN_00233e10(1,DAT_005f16ac);
                piVar18 = g_lmapScene;
                if (g_lmapScene[2] >= 3) {
                  temp_v32 = g_lmapScene[1];
                  g_lmapScene[0x15] = 0x1d;
                  piVar18[0x16] = temp_v6;
                  piVar18[1] = temp_v32 + 1;
                  piVar18[2] = 0;
                }
              }
            }
            else {
              g_lmapScene[0x15] = 0;
              piVar18[0x16] = 0x40400000;
              *(unsigned char *)(piVar18 + 0x1b) = 0;
              temp_v35 = (float)piVar18[10];
              mathPositionHeadingDegrees();
              piVar18 = g_lmapScene;
              temp_v37 = 180.0f;
              g_lmapScene[0x14] = (int)temp_v35;
              temp_v25 = DAT_005f16b8;
              temp_v19 = DAT_005f16b4;
              piVar18[10] = (int)DAT_005f16b0;
              piVar18[0xb] = (int)temp_v19;
              piVar18[0xc] = (int)temp_v25;
              temp_v19 = (temp_v35 + 180.0f) * temp_v18;
              FUN_001bc124();
              piVar18 = g_lmapScene;
              temp_v25 = 110.0f;
              g_lmapScene[10] = (int)((float)g_lmapScene[10] + temp_v19 * 110.0f);
              temp_v18 = ((float)piVar18[0x14] + temp_v37) * temp_v18;
              FUN_001bbf0c();
              g_lmapScene[0xc] = (int)((float)g_lmapScene[0xc] + temp_v18 * temp_v25);
              FUN_00303460(10);
              g_lmapView[0x2c] = -1;
              sysPlaySe(0xdd);
              FUN_00233e10(1,DAT_005f16ac);
              FUN_001bc124();
              FUN_001bbf0c();
              FUN_00246014();
              temp_v32 = g_lmapScene[1];
              piVar18 = g_lmapScene;
              piVar18[1] = temp_v32 + 1;
              piVar18[2] = 0;
            }
            goto LAB_00367f20;
          }
          if (temp_v32 != 0x33) {
            if (temp_v32 == 0x34) {
              pfVar8 = (float *)(g_lmapScene + 8);
              temp_v6 = g_lmapScene[0x2f];
              temp_v18 = (float)g_lmapScene[0x1a] - 2.0f;
              g_lmapScene[0x1a] = (int)temp_v18;
              piVar18[8] = (int)(*pfVar8 + temp_v18);
              if (temp_v6 < 0x28) {
                piVar18[0x2f] = temp_v6 + 1;
                piVar18[7] = (int)((float)piVar18[7] + (float)piVar18[0x2c]);
                piVar18[9] = (int)((float)piVar18[9] + (float)piVar18[0x2e]);
              }
              piVar18[2] = piVar18[2] + 1;
              if (0.0f < temp_v18) {
                piVar18[1] = temp_v32 + 1;
                piVar18[2] = 0;
              }
            }
            goto LAB_00367f20;
          }
          temp_v32 = g_lmapScene[2];
          g_lmapScene[2] = temp_v32 + 1;
          if (temp_v32 + 1 < 0x15) goto LAB_00367f20;
          FUN_0033abd4();
          switch(DAT_005f162e) {
          case 0:
            temp_v3 = 0x10002c4;
            FUN_003d4ed8(temp_v3);
            break;
          case 1:
            temp_v3 = 0x10002c6;
            FUN_003d4ed8(temp_v3);
            break;
          case 2:
            temp_v3 = 0x10002c8;
            FUN_003d4ed8(temp_v3);
            break;
          case 3:
            temp_v3 = 0x10002ca;
            FUN_003d4ed8(temp_v3);
            break;
          case 4:
            temp_v3 = 0x10002cc;
            FUN_003d4ed8(temp_v3);
            break;
          case 5:
            temp_v3 = 0x10002d9;
            FUN_003d4ed8(temp_v3);
            break;
          default:
          }
          FUN_00324e38(0xffffffff);
          FUN_001bc124();
          FUN_001bbf0c();
          FUN_0014af98();
          soundVolumeSettingSet();
          sysPlayVoice(0x10002e5);
          soundVolumeSettingSet(temp_v17);
          piVar18 = g_lmapScene;
          g_lmapScene[0x1a] = 0x41000000;
          piVar18[8] = (int)((float)piVar18[8] + 8.0f);
        }
        else {
          DAT_005f185a = 0;
          g_lmapView[3] = 2;
          piVar18[0x15] = 5;
          piVar18[0x16] = 0x40400000;
          piVar18[0x2c] = (int)((float)piVar18[0x28] - (float)piVar18[7]);
          piVar18[0x2d] = (int)((float)piVar18[0x29] - (float)piVar18[8]);
          piVar18[0x2e] = (int)((float)piVar18[0x2a] - (float)piVar18[9]);
          piVar18[0x2c] = (int)(((float)piVar18[0x28] - (float)piVar18[7]) * 0.025f);
          piVar18[0x2d] = (int)((float)piVar18[0x2d] * 0.025f);
          piVar18[0x2e] = (int)((float)piVar18[0x2e] * 0.025f);
          piVar18 = g_lmapScene;
          g_lmapScene[0x2f] = 0;
        }
        temp_v32 = piVar18[1];
        piVar18[1] = temp_v32 + 1;
        piVar18[2] = 0;
      }
      else if (temp_v32 != 0x5a) {
        if (temp_v32 < 0x5b) {
          if (temp_v32 != 0x36) {
            if (temp_v32 == 0x37) {
              g_lmapScene[2] = g_lmapScene[2] + 1;
              mapIfOverlayRelease();
              temp_v17 = 0x12;
              mapSetSceneState(temp_v17);
            }
            goto LAB_00367f20;
          }
          mapIfReleaseSlot3();
          piVar10 = g_lmapScene;
          g_lmapScene[0x1a] = temp_v12;
          piVar18 = g_lmapView;
          g_lmapView[6] = piVar10[0x14];
          piVar18[0x2c] = 0;
          FUN_00303460(0);
          piVar18 = g_lmapScene;
          temp_v32 = piVar18[1];
          piVar18[1] = temp_v32 + 1;
          piVar18[2] = 0;
        }
        else if (temp_v32 != 0x5b) {
          if ((temp_v32 == 0x5c) &&
             (temp_v32 = g_lmapScene[2], g_lmapScene[2] = temp_v32 + 1, temp_v32 + 1 >= 4)) {
            temp_v17 = 1;
            mapSetSceneState(temp_v17);
          }
        }
        else {
          mapIfOverlayRelease();
          piVar18 = g_lmapScene;
          temp_v32 = piVar18[1];
          piVar18[1] = temp_v32 + 1;
          piVar18[2] = 0;
        }
      }
      else {
        piVar18[1] = temp_v32 + 1;
        piVar18[2] = 0;
      }
    }
    else {
      temp_v18 = (float)g_lmapScene[0x1a];
      pfVar8 = (float *)(g_lmapScene + 8);
      temp_v32 = g_lmapScene[0x2f];
      g_lmapScene[0x1a] = (int)(temp_v18 - 2.0f);
      piVar18[8] = (int)(*pfVar8 + (temp_v18 - 2.0f));
      if (temp_v32 < 0x28) {
        piVar18[0x2f] = temp_v32 + 1;
        piVar18[7] = (int)((float)piVar18[7] + (float)piVar18[0x2c]);
        piVar18[9] = (int)((float)piVar18[9] + (float)piVar18[0x2e]);
      }
      temp_v32 = piVar18[2];
      piVar18[2] = temp_v32 + 1;
      if (temp_v32 + 1 == 10) {
        sysPlayVoice(0x1000112);
      }
      if (g_lmapScene[2] == 0x1e) {
        slotSetRequest(0,10,0xff);
        slotSetRequest(1,10,0xff);
      }
      if ((g_lmapScene[2] >= 0x1f) && (temp_v32 = FUN_002e07f4(), temp_v32 != 0)) {
        temp_v32 = g_lmapScene[1];
        piVar18 = g_lmapScene;
        piVar18[1] = temp_v32 + 1;
        piVar18[2] = 0;
      }
    }
LAB_00367f20:
    FUN_002e364c(g_lmapScene + 10);
    temp_v34 = CONCAT44(fStack_2c,fStack_30);
    in_d9 = CONCAT44(fStack_24,fStack_28);
    in_d10 = CONCAT44(fStack_1c,fStack_20);
    goto code_r0x00327ee8;
  case 0x13:
    fStack_28 = temp_v35;
    fStack_24 = temp_v37;
    temp_v17 = soundVolumeSettingGet();
    if (g_lmapScene[1] < 10) {
      mapEaseSceneHeading();
      piVar18 = g_lmapScene;
      g_lmapScene[7] =
           (int)((float)g_lmapScene[7] +
                ((float)g_lmapScene[10] - (float)g_lmapScene[7]) * 0.33333334f);
      piVar18[8] = (int)((float)piVar18[8] + ((float)piVar18[0xb] - (float)piVar18[8]) * 0.16666667f)
      ;
      piVar18[9] = (int)((float)piVar18[9] + ((float)piVar18[0xc] - (float)piVar18[9]) * 0.33333334f)
      ;
    }
    piVar18 = g_lmapScene;
    temp_v6 = 0x40a00000;
    temp_v32 = g_lmapScene[1];
    if (temp_v32 != 0xd) {
      if (0xd >= temp_v32) {
        temp_v18 = 0.017453292f;
        if (temp_v32 != 10) {
          if (10 >= temp_v32) {
            if (temp_v32 != 0) {
              if (temp_v32 != 1) {
                if (temp_v32 == 2) {
                  g_lmapScene[2] = g_lmapScene[2] + 1;
                  FUN_00233e10(1,DAT_005f16ac);
                  temp_v32 = FUN_004d0584();
                  piVar18 = g_lmapScene;
                  if (temp_v32 != 0) {
                    g_lmapScene[1] = 10;
                    piVar18[2] = 0;
                  }
                  else {
                    temp_v32 = padButtonIsPressed(6);
                    if ((temp_v32 != 0) || (temp_v32 = inputIsQuestMenuPressed(), temp_v32 != 0)) {
                      piVar18 = g_lmapView;
                      g_lmapView[6] = g_lmapScene[0x14];
                      piVar18[0x2c] = 0;
                      FUN_00303460(0);
                      piVar18 = g_lmapScene;
                      g_lmapScene[0x15] = 0;
                      piVar18[0x16] = temp_v6;
                      FUN_00233e10(0,DAT_005f16ac);
                      mapIfReleaseSlot4();
                      piVar18 = g_lmapScene;
                      g_lmapScene[1] = 0x5a;
                      piVar18[2] = 0;
                    }
                  }
                }
              }
              else {
                g_lmapScene[2] = g_lmapScene[2] + 1;
                FUN_00233e10(1,DAT_005f16ac);
                piVar18 = g_lmapScene;
                if (g_lmapScene[2] >= 3) {
                  temp_v32 = g_lmapScene[1];
                  g_lmapScene[0x15] = 0x1c;
                  piVar18[0x16] = 0x40000000;
                  piVar18[1] = temp_v32 + 1;
                  piVar18[2] = 0;
                }
              }
            }
            else {
              g_lmapScene[0x15] = 0;
              piVar18[0x16] = 0x40400000;
              *(unsigned char *)(piVar18 + 0x1b) = 0;
              temp_v25 = DAT_005f16b8;
              temp_v19 = DAT_005f16b4;
              piVar18[10] = (int)DAT_005f16b0;
              piVar18[0xb] = (int)temp_v19;
              piVar18[0xc] = (int)temp_v25;
              temp_v19 = DAT_005f16cc * 0.017453292f;
              FUN_001bc124();
              temp_v25 = 25.0f;
              g_lmapScene[10] = (int)((float)g_lmapScene[10] + temp_v19 * 25.0f);
              temp_v18 = DAT_005f16cc * temp_v18;
              FUN_001bbf0c();
              piVar18 = g_lmapScene;
              g_lmapScene[0xc] = (int)((float)g_lmapScene[0xc] + temp_v18 * temp_v25);
              piVar18[0x14] = (int)DAT_005f16bc;
              FUN_00303460(0xd);
              g_lmapView[0x2c] = 1;
              sysPlaySe(0xdc);
              FUN_00233e10(1,DAT_005f16ac);
              mapIfShowActionMarker();
              piVar18 = g_lmapScene;
              temp_v32 = piVar18[1];
              piVar18[1] = temp_v32 + 1;
              piVar18[2] = 0;
            }
          }
          else {
            if (temp_v32 != 0xb) {
              if ((temp_v32 == 0xc) && (temp_v32 = mapIfHasSelection(), temp_v32 == 0)) {
                mapIfReleaseSlot4();
                piVar18 = g_lmapView;
                g_lmapView[6] = g_lmapScene[0x14];
                piVar18[0x2c] = 0;
                FUN_00303460(0);
                temp_v32 = g_lmapScene[1];
                piVar18 = g_lmapScene;
                piVar18[1] = temp_v32 + 1;
                piVar18[2] = 0;
              }
              goto LAB_0033eae8;
            }
            temp_v32 = g_lmapScene[2];
            g_lmapScene[2] = temp_v32 + 1;
            if (temp_v32 + 1 != 10) goto LAB_0033eae8;
            FUN_0033abd4();
            switch(DAT_005f162e) {
            case 0:
              temp_v3 = 0x10002c4;
              FUN_003d4ed8(temp_v3);
              break;
            case 1:
              temp_v3 = 0x10002c6;
              FUN_003d4ed8(temp_v3);
              break;
            case 2:
              temp_v3 = 0x10002c8;
              FUN_003d4ed8(temp_v3);
              break;
            case 3:
              temp_v3 = 0x10002ca;
              FUN_003d4ed8(temp_v3);
              break;
            case 4:
              temp_v3 = 0x10002cc;
              FUN_003d4ed8(temp_v3);
              break;
            case 5:
              temp_v3 = 0x10002d9;
              FUN_003d4ed8(temp_v3);
              break;
            default:
            }
            FUN_00324e38(0xffffffff);
            FUN_001bc124();
            FUN_001bbf0c();
            FUN_0014af98();
            soundVolumeSettingSet();
            sysPlayVoice(0x10002e5);
            soundVolumeSettingSet(temp_v17);
            FUN_002342b8();
            temp_v32 = g_lmapScene[1];
            piVar18 = g_lmapScene;
            piVar18[1] = temp_v32 + 1;
            piVar18[2] = 0;
          }
        }
        else {
          DAT_005f185a = 0;
          g_lmapView[3] = 1;
          piVar18[0x15] = 0x15;
          piVar18[0x16] = 0x40a00000;
          temp_v32 = piVar18[1];
          piVar18[1] = temp_v32 + 1;
          piVar18[2] = 0;
        }
      }
      else if (temp_v32 != 100) {
        if (100 >= temp_v32) {
          if (temp_v32 != 0x5a) {
            if (temp_v32 != 0x5b) {
              if ((temp_v32 == 0x5c) &&
                 (temp_v32 = g_lmapScene[2], g_lmapScene[2] = temp_v32 + 1, temp_v32 + 1 >= 4)) {
                mapSetSceneState(1);
              }
            }
            else {
              mapIfReleaseResource();
              temp_v32 = g_lmapScene[1];
              piVar18 = g_lmapScene;
              piVar18[1] = temp_v32 + 1;
              piVar18[2] = 0;
            }
          }
          else {
            piVar18[1] = temp_v32 + 1;
            piVar18[2] = 0;
          }
        }
        else if (temp_v32 != 0x65) {
          if (temp_v32 == 0x66) {
            mapIfReleaseResource();
            mapSetSceneState(0x14);
            temp_v32 = g_lmapScene[1];
            piVar18 = g_lmapScene;
            piVar18[1] = temp_v32 + 1;
            piVar18[2] = 0;
          }
        }
        else {
          temp_v32 = FUN_002e07f4();
          piVar18 = g_lmapView;
          if (temp_v32 != 0) {
            g_lmapView[6] = g_lmapScene[0x14];
            piVar18[0x2c] = 0;
            FUN_00303460(0);
            piVar18 = g_lmapScene;
            g_lmapScene[0x15] = 0;
            piVar18[0x16] = temp_v6;
            FUN_00233e10(0,DAT_005f16ac);
            mapIfReleaseSlot4();
            temp_v32 = g_lmapScene[1];
            piVar18 = g_lmapScene;
            piVar18[1] = temp_v32 + 1;
            piVar18[2] = 0;
          }
        }
      }
      else {
        slotSetRequest(0,10,0xff);
        temp_v32 = g_lmapScene[1];
        piVar18 = g_lmapScene;
        piVar18[1] = temp_v32 + 1;
        piVar18[2] = 0;
      }
    }
    else {
      mapIfReleaseResource();
      mapSetSceneState(0x14);
      temp_v32 = g_lmapScene[1];
      piVar18 = g_lmapScene;
      piVar18[1] = temp_v32 + 1;
      piVar18[2] = 0;
    }
LAB_0033eae8:
    FUN_002e364c(g_lmapScene + 10);
    temp_v34 = CONCAT44(fStack_24,fStack_28);
    goto code_r0x00327ee8;
  case 0x15:
    fStack_3c = temp_v19;
    iStack_38 = temp_v32;
    fStack_2c = temp_v35;
    temp_v18 = fStack_28;
    fStack_28 = temp_v37;
    fStack_20 = fStack_24;
    fStack_24 = temp_v18;
    temp_v17 = soundVolumeSettingGet();
    if (g_lmapScene[1] < 10) {
      mapEaseSceneHeading();
      piVar18 = g_lmapScene;
      g_lmapScene[7] =
           (int)((float)g_lmapScene[7] +
                ((float)g_lmapScene[10] - (float)g_lmapScene[7]) * 0.33333334f);
      piVar18[8] = (int)((float)piVar18[8] + ((float)piVar18[0xb] - (float)piVar18[8]) * 0.16666667f)
      ;
      piVar18[9] = (int)((float)piVar18[9] + ((float)piVar18[0xc] - (float)piVar18[9]) * 0.33333334f)
      ;
    }
    piVar18 = g_lmapScene;
    temp_v32 = g_lmapScene[1];
    temp_v6 = 0x40000000;
    temp_v18 = 0.0f;
    if (temp_v32 != 0xb) {
      if (temp_v32 < 0xb) {
        temp_v19 = 0.017453292f;
        temp_v25 = 25.0f;
        if (temp_v32 != 0) {
          if (temp_v32 != 1) {
            if (temp_v32 != 2) {
              if (temp_v32 == 10) {
                temp_v32 = g_lmapScene[2];
                g_lmapScene[2] = temp_v32 + 1;
                if (temp_v32 + 1 == 1) {
                  if ((g_gameState != (unsigned int *)0x26) && (g_gameState != (unsigned int *)0x1a))
                  {
                    FUN_003d4ed8(0x10002bb);
                  }
                  FUN_00324e38(0xffffffff);
                  FUN_001bc124();
                  FUN_001bbf0c();
                  FUN_0014af98();
                  soundVolumeSettingSet();
                  sysPlayVoice(0x10002e7);
                  soundVolumeSettingSet(temp_v17);
                }
                piVar18 = g_lmapScene;
                if (g_lmapScene[2] == 2) {
                  g_lmapScene[0x15] = 0xf;
                  piVar18[0x16] = (int)temp_v18;
                  DAT_005f185a = 0;
                  mapIfReleaseSlot4();
                  piVar18 = g_lmapScene;
                  piVar10 = g_lmapScene + 7;
                  g_lmapScene[0x13] = g_lmapScene[0x14];
                  temp_v32 = piVar18[0xb];
                  temp_v6 = piVar18[0xc];
                  *piVar10 = piVar18[10];
                  piVar18[8] = temp_v32;
                  piVar18[9] = temp_v6;
                  piVar18[1] = piVar18[1] + 1;
                  if (g_gameState == (unsigned int *)0x26 || g_gameState == (unsigned int *)0x1a) {
                    FUN_003d4ed8(0x10000f7);
                  }
                  g_lmapScene[2] = 0;
                }
              }
            }
            else {
              g_lmapScene[2] = g_lmapScene[2] + 1;
              FUN_00233e10(1,DAT_005f16ac);
              temp_v32 = FUN_004d0584();
              piVar18 = g_lmapScene;
              if (temp_v32 != 0) {
                g_lmapScene[1] = 10;
                piVar18[2] = 0;
                g_lmapView[3] = 2;
                fStack_3c = (float)piVar18[0xb];
                iStack_38 = piVar18[0xc];
                uStack_4c = romwright_piece_4_4(&fStack_34,(unsigned int)uStack_4c);
                uStack_44 = romwright_piece_4_4(piVar18[10],1);
                FUN_00325ba4(2,10,0x66,(int)&uStack_44 + 4);
                piVar18 = g_lmapScene;
                temp_v35 = 180.0f;
                fStack_34 = fStack_34 + 180.0f;
                if (fStack_34 < temp_v18) {
                  fStack_34 = fStack_34 + 360.0f;
                }
                if ((int)fStack_34 >= 0x43b40001) {
                  fStack_34 = fStack_34 - 360.0f;
                }
                g_lmapScene[0x14] = (int)fStack_34;
                piVar18[10] = (int)(*(float *)((unsigned char *)&uStack_44 + 4));
                piVar18[0xb] = (int)fStack_3c;
                piVar18[0xc] = iStack_38;
                piVar18[0xb] = (int)(fStack_3c - 250.0f);
                temp_v18 = ((float)piVar18[0x13] + 180.0f) * temp_v19;
                FUN_001bc124();
                piVar18 = g_lmapScene;
                g_lmapScene[10] = (int)((float)g_lmapScene[10] + temp_v18 * temp_v25);
                temp_v19 = ((float)piVar18[0x13] + temp_v35) * temp_v19;
                FUN_001bbf0c();
                g_lmapScene[0xc] = (int)((float)g_lmapScene[0xc] + temp_v19 * temp_v25);
              }
              else {
                temp_v32 = padButtonIsPressed(6);
                if ((temp_v32 != 0) || (temp_v32 = inputIsQuestMenuPressed(), temp_v32 != 0)) {
                  piVar18 = g_lmapView;
                  g_lmapView[6] = g_lmapScene[0x14];
                  piVar18[0x2c] = 0;
                  FUN_00303460(0);
                  piVar18 = g_lmapScene;
                  g_lmapScene[0x15] = 0;
                  piVar18[0x16] = 0x40a00000;
                  FUN_00233e10(0,DAT_005f16ac);
                  mapIfReleaseSlot4();
                  piVar18 = g_lmapScene;
                  g_lmapScene[1] = 0x5a;
                  piVar18[2] = 0;
                }
              }
            }
          }
          else {
            g_lmapScene[2] = g_lmapScene[2] + 1;
            FUN_00233e10(1,DAT_005f16ac);
            piVar18 = g_lmapScene;
            if (g_lmapScene[2] >= 3) {
              temp_v32 = g_lmapScene[1];
              g_lmapScene[0x15] = 0x1c;
              piVar18[0x16] = temp_v6;
              piVar18[1] = temp_v32 + 1;
              piVar18[2] = 0;
            }
          }
        }
        else {
          g_lmapScene[0x15] = 0;
          piVar18[0x16] = 0x40400000;
          *(unsigned char *)(piVar18 + 0x1b) = 0;
          temp_v35 = DAT_005f16b8;
          temp_v18 = DAT_005f16b4;
          piVar18[10] = (int)DAT_005f16b0;
          piVar18[0xb] = (int)temp_v18;
          piVar18[0xc] = (int)temp_v35;
          temp_v18 = DAT_005f16cc * 0.017453292f;
          FUN_001bc124();
          g_lmapScene[10] = (int)((float)g_lmapScene[10] + temp_v18 * temp_v25);
          temp_v19 = DAT_005f16cc * temp_v19;
          FUN_001bbf0c();
          piVar18 = g_lmapScene;
          g_lmapScene[0xc] = (int)((float)g_lmapScene[0xc] + temp_v19 * temp_v25);
          piVar18[0x14] = (int)DAT_005f16bc;
          FUN_00303460(0xd);
          g_lmapView[0x2c] = 1;
          sysPlaySe(0xdc);
          FUN_00233e10(1,DAT_005f16ac);
          mapIfShowActionMarker();
          piVar18 = g_lmapScene;
          g_lmapScene[1] = g_lmapScene[1] + 1;
          piVar18[2] = 0;
        }
      }
      else {
        if (temp_v32 == 0xc) {
          temp_v17 = 0x16;
        }
        else {
          if (temp_v32 == 0x5a) {
            g_lmapScene[1] = 0x5b;
            piVar18[2] = 0;
            FUN_002e364c(g_lmapScene + 10);
            FUN_00327ee8();
            return;
          }
          if (temp_v32 == 0x5b) {
            mapIfReleaseResource();
            piVar18 = g_lmapScene;
            g_lmapScene[1] = g_lmapScene[1] + 1;
            piVar18[2] = 0;
            FUN_002e364c(g_lmapScene + 10);
            FUN_00327ee8();
            return;
          }
          if ((temp_v32 != 0x5c) ||
             (temp_v32 = g_lmapScene[2], g_lmapScene[2] = temp_v32 + 1, temp_v32 + 1 < 4)) {
            FUN_002e364c(g_lmapScene + 10);
            FUN_00327ee8();
            return;
          }
          temp_v17 = 1;
        }
        mapSetSceneState(temp_v17);
      }
    }
    else {
      temp_v5 = g_lmapScene[2] + 1;
      g_lmapScene[2] = temp_v5;
      temp_v19 = (float)piVar18[0xb];
      piVar18[0xb] = (int)(temp_v19 + 2.0f);
      piVar18[7] = piVar18[10];
      piVar18[8] = (int)(temp_v19 + 2.0f);
      piVar18[9] = piVar18[0xc];
      if ((g_gameState != (unsigned int *)0x26) && (g_gameState != (unsigned int *)0x1a)) {
        if ((temp_v5 == 0xb || temp_v5 == 0x1c) || temp_v5 == 0x29) {
          FUN_003d4ed8((temp_v5 & 3) + 0x10002bb);
          FUN_00324e38(0xffffffff);
        }
      }
      else if ((temp_v5 == 0xb || temp_v5 == 0x1c) || temp_v5 == 0x29) {
        FUN_00324e38(0xffffffff);
      }
      if (g_lmapScene[2] == 0x1e) {
        FUN_002342b8();
      }
      if ((g_lmapScene[2] >= 0x1f) && (temp_v32 = mapIfHasSelection(), temp_v32 == 0)) {
        mapIfReleaseResource();
        piVar18 = g_lmapView;
        g_lmapView[6] = g_lmapScene[0x14];
        piVar18[0x2c] = 0;
        FUN_00303460(0);
        piVar18 = g_lmapScene;
        g_lmapScene[0x15] = 0;
        piVar18[0x16] = (int)temp_v18;
        piVar18[1] = piVar18[1] + 1;
        piVar18[2] = 0;
      }
    }
    FUN_002e364c(g_lmapScene + 10);
    FUN_00327ee8();
    return;
  case 0x17:
    fStack_20 = temp_v35;
    fStack_1c = temp_v37;
    temp_v17 = soundVolumeSettingGet();
    piVar18 = g_lmapScene;
    temp_v32 = g_lmapScene[1];
    if (temp_v32 != 0) {
      if (temp_v32 != 1) {
        if ((temp_v32 == 2) &&
           (temp_v32 = g_lmapScene[2], g_lmapScene[2] = temp_v32 + 1, temp_v32 + 1 >= 6)) {
          mapSetSceneState(1);
        }
      }
      else {
        temp_v32 = g_lmapScene[2];
        g_lmapScene[2] = temp_v32 + 1;
        if (temp_v32 + 1 == 3) {
          FUN_0033abd4();
        }
        if (g_lmapScene[2] == 6) {
          FUN_002d1f40(0x1e,0x32,0);
          switch(DAT_005f162e) {
          case 0:
            temp_v3 = 0x10002c5;
            FUN_003d4ed8(temp_v3);
            break;
          case 1:
            temp_v3 = 0x10002c7;
            FUN_003d4ed8(temp_v3);
            break;
          case 2:
            temp_v3 = 0x10002c9;
            FUN_003d4ed8(temp_v3);
            break;
          case 3:
            temp_v3 = 0x10002cb;
            FUN_003d4ed8(temp_v3);
            break;
          case 4:
            temp_v3 = 0x10002cd;
            FUN_003d4ed8(temp_v3);
            break;
          case 5:
            temp_v3 = 0x10002da;
            FUN_003d4ed8(temp_v3);
            break;
          default:
          }
          FUN_00324e38(0xffffffff);
          FUN_001bc124();
          FUN_001bbf0c();
          FUN_0014af98();
          soundVolumeSettingSet();
          sysPlayVoice(0x10002e6);
          soundVolumeSettingSet(temp_v17);
        }
        piVar18 = g_lmapScene;
        if (g_lmapScene[2] >= 0x24) {
          temp_v32 = g_lmapScene[1];
          g_lmapScene[0x16] = 0x40a00000;
          piVar18[0x15] = 0;
          piVar18[1] = temp_v32 + 1;
          piVar18[2] = 0;
        }
      }
    }
    else {
      g_lmapScene[0x15] = 7;
      piVar18[0x16] = 0;
      piVar18[1] = 1;
      piVar18[2] = 0;
    }
    goto code_r0x0024947c;
  case 0x18:
    fStack_20 = temp_v35;
    fStack_1c = temp_v37;
    temp_v17 = soundVolumeSettingGet();
    piVar18 = g_lmapScene;
    temp_v32 = g_lmapScene[1];
    if (temp_v32 != 0) {
      if (temp_v32 != 1) {
        if ((temp_v32 == 2) &&
           (temp_v32 = g_lmapScene[2], g_lmapScene[2] = temp_v32 + 1, temp_v32 + 1 >= 0x1f)) {
          FUN_00303460(0);
          mapSetSceneState(1);
        }
      }
      else {
        temp_v32 = g_lmapScene[2];
        g_lmapScene[2] = temp_v32 + 1;
        if (temp_v32 + 1 == 3) {
          FUN_0033abd4();
        }
        if (g_lmapScene[2] == 6) {
          FUN_002d1f40(0x1e,0x32,0);
          switch(DAT_005f162e) {
          case 0:
            temp_v3 = 0x10002c5;
            FUN_003d4ed8(temp_v3);
            break;
          case 1:
            temp_v3 = 0x10002c7;
            FUN_003d4ed8(temp_v3);
            break;
          case 2:
            temp_v3 = 0x10002c9;
            FUN_003d4ed8(temp_v3);
            break;
          case 3:
            temp_v3 = 0x10002cb;
            FUN_003d4ed8(temp_v3);
            break;
          case 4:
            temp_v3 = 0x10002cd;
            FUN_003d4ed8(temp_v3);
            break;
          case 5:
            temp_v3 = 0x10002da;
            FUN_003d4ed8(temp_v3);
            break;
          default:
          }
          FUN_00324e38(0xffffffff);
          FUN_001bc124();
          FUN_001bbf0c();
          FUN_0014af98();
          soundVolumeSettingSet();
          sysPlayVoice(0x10002e6);
          soundVolumeSettingSet(temp_v17);
        }
        if (g_lmapScene[2] >= 0x24) {
          FUN_00303460(9);
          piVar18 = g_lmapScene;
          g_lmapScene[0x15] = 0;
          piVar18[0x16] = 0x40a00000;
          piVar18[1] = piVar18[1] + 1;
          piVar18[2] = 0;
        }
      }
    }
    else {
      g_lmapScene[0x15] = 7;
      piVar18[0x16] = 0;
      FUN_00303460(8);
      piVar18 = g_lmapScene;
      g_lmapScene[1] = g_lmapScene[1] + 1;
      piVar18[2] = 0;
    }
    goto code_r0x0024947c;
  case 0x19:
    temp_v32 = g_lmapScene[1];
    if (temp_v32 != 0) {
      if (temp_v32 != 1) {
        fStack_20 = temp_v35;
        fStack_1c = temp_v37;
        if ((temp_v32 == 2) &&
           (temp_v32 = g_lmapScene[2], g_lmapScene[2] = temp_v32 + 1, temp_v32 + 1 >= 2)) {
          piVar18[0x16] = 0x40a00000;
          mapSetSceneState(1);
        }
      }
      else {
        temp_v32 = g_lmapScene[2];
        g_lmapScene[2] = temp_v32 + 1;
        fStack_20 = temp_v35;
        fStack_1c = temp_v37;
        if (temp_v32 + 1 >= 0x10) {
          piVar18[1] = 2;
          piVar18[2] = 0;
        }
      }
    }
    else {
      g_lmapScene[0x15] = 0x1b;
      piVar18[0x16] = 0;
      fStack_20 = temp_v35;
      fStack_1c = temp_v37;
      FUN_00324e38(0);
      piVar18 = g_lmapScene;
      g_lmapScene[1] = g_lmapScene[1] + 1;
      piVar18[2] = 0;
    }
    goto code_r0x0024947c;
  case 0x1a:
    fStack_20 = temp_v35;
    fStack_1c = temp_v37;
    temp_v17 = soundVolumeSettingGet();
    piVar18 = g_lmapScene;
    temp_v32 = g_lmapScene[1];
    if (temp_v32 != 0) {
      if (temp_v32 != 1) {
        if ((temp_v32 == 2) &&
           (temp_v32 = g_lmapScene[2], g_lmapScene[2] = temp_v32 + 1, temp_v32 + 1 >= 2)) {
          piVar18[0x16] = 0x40a00000;
          mapSetSceneState(1);
        }
      }
      else {
        temp_v32 = g_lmapScene[2];
        g_lmapScene[2] = temp_v32 + 1;
        if (temp_v32 + 1 >= 0x10) {
          piVar18[1] = 2;
          piVar18[2] = 0;
        }
      }
    }
    else {
      g_lmapScene[0x15] = 0x1b;
      piVar18[0x16] = 0;
      piVar18[1] = 1;
      piVar18[2] = 0;
      switch(DAT_005f162e) {
      case 0:
        temp_v3 = 0x10002c5;
        FUN_003d4ed8(temp_v3);
        break;
      case 1:
        temp_v3 = 0x10002c7;
        FUN_003d4ed8(temp_v3);
        break;
      case 2:
        temp_v3 = 0x10002c9;
        FUN_003d4ed8(temp_v3);
        break;
      case 3:
        temp_v3 = 0x10002cb;
        FUN_003d4ed8(temp_v3);
        break;
      case 4:
        temp_v3 = 0x10002cd;
        FUN_003d4ed8(temp_v3);
        break;
      case 5:
        temp_v3 = 0x10002da;
        FUN_003d4ed8(temp_v3);
        break;
      default:
      }
      FUN_00324e38(0xffffffff);
      FUN_001bc124();
      FUN_001bbf0c();
      FUN_0014af98();
      soundVolumeSettingSet();
      sysPlayVoice(0x10002e6);
      soundVolumeSettingSet(temp_v17);
    }
    goto code_r0x0024947c;
  case 0x1c:
    temp_v33 = *(unsigned long long *)(g_lmapScene + 10);
    temp_v32 = g_lmapScene[0xc];
    fStack_20 = temp_v35;
    fStack_1c = temp_v37;
    mapEaseSceneHeading();
    piVar18 = g_lmapScene;
    temp_v6 = g_lmapScene[1];
    if (temp_v6 != 0xb) {
      if (temp_v6 < 0xc) {
        if (temp_v6 != 0) {
          if (temp_v6 != 1) {
            if (temp_v6 == 10) {
              g_lmapScene[0x15] = 0x13;
              piVar18[0x16] = 0x40a00000;
              piVar10 = g_lmapView;
              g_lmapView[0x84] = 0;
              piVar10[0x85] = 0;
              piVar18[0x1a] = 0;
              piVar18[7] = piVar18[10];
              piVar18[8] = piVar18[0xb];
              piVar18[9] = piVar18[0xc];
              linkHolderApplyFirst(piVar18[0x6a],piVar18[0x15]);
              piVar18 = g_lmapScene;
              temp_v6 = 0;
              g_lmapScene[1] = g_lmapScene[1] + 1;
              piVar18[2] = temp_v6;
            }
          }
          else {
            temp_v6 = g_lmapScene[2] + 1;
            piVar18[2] = temp_v6;
          }
        }
        else {
          g_lmapScene[0x15] = 0x13;
          piVar18[0x16] = 0x40a00000;
          FUN_00324e38(0);
          piVar18 = g_lmapScene;
          temp_v6 = 0;
          *(unsigned char *)(g_lmapScene + 0x1b) = 0;
          piVar18[1] = piVar18[1] + 1;
          piVar18[2] = temp_v6;
        }
      }
      else if (temp_v6 == 0x14) {
        g_lmapScene[2] = g_lmapScene[2] + 1;
        FUN_00317af8(&uStack_190,temp_v44,0);
        if ((((0xbf000000 < uStack_190) || ((int)uStack_190 >= 0x3f000001)) ||
            (0xbf000000 < temp_v44[0])) ||
           (((int)temp_v44[0] >= 0x3f000001 ||
            (controllerGetSourceValue(g_lmapScene[0x6a]), in_s0 >= 0x42d20001)))) {
          piVar18 = g_lmapScene;
          g_lmapScene[1] = 100;
          piVar18[2] = 0;
        }
      }
    }
    else {
      temp_v6 = g_lmapScene[2] + 1;
      piVar18[2] = temp_v6;
    }
    pfVar8 = &fStack_1ac;
    FUN_002469d0();
    piVar18 = g_lmapScene;
    pfVar16 = (float *)(g_lmapScene + 10);
    g_lmapScene[0xc] = (int)afStack_1a8[1];
    *pfVar16 = fStack_1ac;
    piVar18[0xb] = (int)afStack_1a8[0];
    piVar18[0xd] = (int)temp_v33;
    piVar18[0xe] = (int)((unsigned long long)temp_v33 >> 0x20);
    piVar18[0xf] = temp_v32;
    afStack_1a8[2] = afStack_1a8[0];
joined_r0x00248750:
    if (((DAT_005f1c48 == '\0') && (DAT_005f161e != '\0')) && (pfVar8 != (float *)0x0)) {
      *(float *)((int)piVar18 + 0x2c) = afStack_1a8[2] - 2.0f;
      FUN_0025ef68((int *)((int)piVar18 + 0x28),(int *)((int)piVar18 + 0x34),0);
    }
    piVar18 = g_lmapScene;
    piVar10 = g_lmapScene + 7;
    piVar7 = g_lmapScene + 0x10;
    g_lmapScene[7] =
         (int)((float)g_lmapScene[7] +
              ((float)g_lmapScene[10] - (float)g_lmapScene[7]) * 0.33333334f);
    piVar18[8] = (int)((float)piVar18[8] + ((float)piVar18[0xb] - (float)piVar18[8]) * 0.33333334f);
    temp_v18 = (float)piVar18[9] + ((float)piVar18[0xc] - (float)piVar18[9]) * 0.33333334f;
    piVar18[9] = (int)temp_v18;
    temp_v6 = piVar18[8];
    *piVar7 = *piVar10;
    piVar18[0x11] = temp_v6;
    piVar18[0x12] = (int)temp_v18;
    piVar18[0xd] = (int)temp_v33;
    piVar18[0xe] = (int)((unsigned long long)temp_v33 >> 0x20);
    piVar18[0xf] = temp_v32;
    return;
  case 0x1d:
    g_lmapScene[0x15] = 0;
    piVar18[0x16] = 0;
    return;
  case 0x1e:
    if (g_lmapScene[1] == 0) {
      temp_v32 = g_lmapScene[2];
      g_lmapScene[2] = temp_v32 + 1;
      if (temp_v32 + 1 < 0x3d) {
        return;
      }
      piVar18[0x15] = 0x11;
      temp_v32 = 1;
      piVar18[0x16] = 0x40a00000;
      piVar18[1] = temp_v32;
      piVar18[2] = 0;
      return;
    }
    if (g_lmapScene[1] != 1) {
      return;
    }
    temp_v32 = g_lmapScene[2] + 1;
    g_lmapScene[2] = temp_v32;
    if (temp_v32 == 0x96) {
      piVar18[0x15] = 0;
      piVar18[0x16] = 0x40a00000;
      return;
    }
    break;
  case 0x1f:
    uStack_44 = in_d8;
    fStack_3c = fStack_28;
    iStack_38 = (int)fStack_24;
    fStack_34 = fStack_20;
    fStack_30 = fStack_1c;
    fStack_28 = temp_v25;
    temp_v17 = gameFlagsGetBlock();
    uStack_5c = romwright_piece_4_4((*(unsigned int *)((unsigned char *)&uStack_5c + 4)),temp_v17);
    temp_v17 = soundVolumeSettingGet();
    piVar18 = g_lmapScene;
    uStack_54 = romwright_piece_4_4((*(unsigned int *)((unsigned char *)&uStack_54 + 4)),temp_v17);
    temp_v18 = 0.0f;
    temp_v32 = 0x40400000;
    temp_v6 = g_lmapScene[1];
    if (temp_v6 != 9) {
      if (temp_v6 < 9) {
        switch(temp_v6) {
        case 0:
          DAT_005f1adc = 1;
          DAT_005f161c = 1;
          DAT_005f1859 = 0;
          DAT_005f185a = 0;
          temp_v32 = mapTrapGetUnk38();
          mapTrapArm(*(short *)(temp_v32 + 0xe) != 0);
          piVar18 = g_lmapScene;
          piVar10 = g_lmapScene + 7;
          g_lmapScene[0x15] = 9;
          piVar18[0x16] = (int)temp_v18;
          piVar18[0x14] = piVar18[0x13];
          piVar18[10] = *piVar10;
          piVar18[0xb] = piVar18[8];
          piVar18[0xc] = piVar18[9];
          *(unsigned char *)(piVar18 + 0x1b) = 0;
          FUN_001bc124();
          FUN_001bbf0c();
          temp_v17 = FUN_00152f44();
          temp_v3 = FUN_0014af98();
          FUN_001628c0(&LAB_002d9eec,temp_v3,temp_v17,1);
          piVar18 = g_lmapScene;
          g_lmapScene[1] = g_lmapScene[1] + 1;
          piVar18[2] = 0;
          piVar18[0x9c] = 0;
          temp_v32 = gameFlagIsSet(0x68);
          if (temp_v32 != 0) {
            FUN_002c2d44(
                        "碂辂閂暁銂薂䂁钂銂膂邂邂薂蒂䦁䂁熂膂邂覂蒂貂馂䂁邂銂薂鎂鎂䂁钂袂薂䂁瞂䂁憂閂钂钂辂躂䒁"
                        );
            sysPlaySe(0xe9);
          }
          *(unsigned char *)((int)g_lmapScene + 0x291) = 0;
          FUN_002d1f40(8,0x78,0);
          temp_v32 = sysPlayVoice(0x10000d2);
          g_lmapScene[0x99] = temp_v32;
          break;
        case 1:
          temp_v6 = g_lmapScene[2];
          g_lmapScene[2] = temp_v6 + 1;
          if (temp_v6 + 1 == 6) {
            FUN_00324e38(0);
          }
          piVar18 = g_lmapScene;
          if (g_lmapScene[2] >= 0x15) {
            temp_v6 = g_lmapScene[1];
            g_lmapScene[0x15] = 10;
            piVar18[0x16] = temp_v32;
            piVar18[2] = 0;
            piVar18[3] = 0;
            piVar18[1] = temp_v6 + 1;
            piVar18[0x9b] = 0;
            FUN_003024a0(1);
          }
          if (g_gameState == (unsigned int *)0x18) {
            piVar18 = (int *)((int)uStack_5c + 0x1520);
            temp_v32 = *piVar18;
            if (temp_v32 != 0) {
              *piVar18 = 0;
            }
          }
          break;
        case 2:
          temp_v6 = gameFlagIsSet(0x68);
          if (temp_v6 == 0) {
            mapMainStartEntry(&LAB_002d9efc);
            g_lmapScene[1] = 99;
          }
          temp_v6 = mapTrapGetUnk38();
          piVar18 = g_lmapScene;
          g_lmapScene[2] = g_lmapScene[2] + 1;
          if (piVar18[0x15] != 10) {
            piVar18[0x9c] = piVar18[0x9c] + 1;
          }
          temp_v12 = inputIsQuestCancelPressed();
          piVar18 = g_lmapScene;
          if ((temp_v12 != 0) && ((g_lmapScene[0x9c] >= 0x13 || (g_lmapScene[0x15] == 10)))) {
            *(unsigned char *)((int)g_lmapScene + 0x291) = 1;
            if (DAT_005f1848 == 0) {
              temp_v12 = 4;
              piVar18[0x15] = temp_v12;
            }
            else if (DAT_005f1848 == 1) {
              piVar18[0x15] = 0x16;
            }
            else if (DAT_005f1848 == 2) {
              piVar18[0x15] = 0x17;
            }
            else if (DAT_005f1848 == 3) {
              temp_v12 = 0x18;
              piVar18[0x15] = temp_v12;
            }
            *(unsigned char *)(piVar18 + 0x17) = 1;
            piVar18[0x9c] = 0;
          }
          if (DAT_005f1848 != 0) {
            if (DAT_005f1848 != 1) {
              if (DAT_005f1848 != 2) {
                if (DAT_005f1848 != 3) goto LAB_002da3cc;
                if (g_lmapScene[0x9c] == 2) {
                  temp_v11 = (short)g_lmapScene[0x67];
                  if (0 < temp_v11) goto LAB_002da2b0;
                  *(unsigned short *)(g_lmapScene + 0x67) = 1;
                  FUN_001bc124();
                  FUN_001bbf0c();
                  uStack_60 = randBetween(0,1);
                  FUN_0014af98();
                  soundVolumeSettingSet();
                  sysPlayVoice(uStack_60 + 0x10002e2);
                  soundVolumeSettingSet((unsigned int)uStack_54);
                }
                if (g_lmapScene[0x9c] == 3) {
                  FUN_001bc124();
                  FUN_001bbf0c();
                  FUN_003d4ed8(0x100029e);
                  FUN_00324e38(0xffffffff);
                }
                if ((g_lmapScene[0x9c] == 6) && (mapSpawnRandomEventKindEffect(), g_lmapScene[0x9c] == 6)) {
                  FUN_00297f00(8,10);
                  FUN_002d1f40(8,0x28,0);
                }
                temp_v12 = g_lmapScene[0x9c];
                goto joined_r0x002da15c;
              }
              if (g_lmapScene[0x9c] != 2) {
LAB_002da1e4:
                if (g_lmapScene[0x9c] == 3) {
                  FUN_001bc124();
                  FUN_001bbf0c();
                  FUN_003d4ed8(0x100029d);
                  FUN_00324e38(0xffffffff);
                }
                if (g_lmapScene[0x9c] == 4) {
                  FUN_00297f00(8,10);
                  FUN_002d1f40(8,0x28,0);
                  mapSpawnRandomEventKindEffect();
                }
                temp_v12 = g_lmapScene[0x9c];
                goto joined_r0x002da15c;
              }
              temp_v11 = (short)g_lmapScene[0x67];
              if (temp_v11 < 1) {
                *(unsigned short *)(g_lmapScene + 0x67) = 1;
                FUN_001bc124();
                FUN_001bbf0c();
                uStack_60 = randBetween(0,1);
                FUN_0014af98();
                soundVolumeSettingSet();
                sysPlayVoice(uStack_60 + 0x10002e0);
                soundVolumeSettingSet((unsigned int)uStack_54);
                goto LAB_002da1e4;
              }
LAB_002da2b0:
              *(short *)(g_lmapScene + 0x67) = temp_v11 - 1;
            }
            else {
              if (g_lmapScene[0x9c] == 3) {
                FUN_001bc124();
                FUN_001bbf0c();
                FUN_003d4ed8(0x100029c);
                if ((short)g_lmapScene[0x67] >= 1) {
                  *(short *)(g_lmapScene + 0x67) = (short)g_lmapScene[0x67] - 1;
                }
                else {
                  *(unsigned short *)(g_lmapScene + 0x67) = 1;
                  FUN_001bc124();
                  FUN_001bbf0c();
                  uStack_60 = randBetween(0,1);
                  FUN_0014af98();
                  soundVolumeSettingSet();
                  sysPlayVoice(uStack_60 + 0x10002de);
                  soundVolumeSettingSet((unsigned int)uStack_54);
                }
                FUN_00324e38(0xffffffff);
              }
              if (g_lmapScene[0x9c] == 6) {
                FUN_00297f00(8,10);
                FUN_002d1f40(8,0x28,0);
                mapSpawnRandomEventKindEffect();
              }
              temp_v12 = g_lmapScene[0x9c];
joined_r0x002da15c:
              if (temp_v12 != 0xe) {
LAB_002da3cc:
                piVar18 = g_lmapScene;
                if (g_lmapScene[0x9c] == 1) {
                  g_lmapScene[0x5a] = -1;
                  piVar18[0x59] = 0;
                  slotTargetApplyActiveValue(piVar18[0x6a]);
                  DAT_005f17ac = '\x01';
                }
                piVar18 = g_lmapScene;
                if (g_lmapScene[0x9c] >= 0x14) {
                  DAT_005f17ac = '\0';
                  g_lmapScene[0x15] = 10;
                  piVar18[0x59] = 0;
                }
              }
              else {
                g_lmapScene[0x9b] = DAT_005f1c94 + g_lmapScene[0x9b] + 3;
              }
            }
          }
          else {
            if (g_lmapScene[0x9c] == 3) {
              FUN_001bc124();
              FUN_001bbf0c();
              FUN_003d4ed8(0x100029b);
              if ((short)g_lmapScene[0x67] >= 1) {
                *(short *)(g_lmapScene + 0x67) = (short)g_lmapScene[0x67] - 1;
              }
              else {
                *(unsigned short *)(g_lmapScene + 0x67) = 1;
                FUN_001bc124();
                FUN_001bbf0c();
                uStack_60 = randBetween(0,1);
                FUN_0014af98();
                soundVolumeSettingSet();
                sysPlayVoice(uStack_60 + 0x10002dc);
                soundVolumeSettingSet((unsigned int)uStack_54);
              }
              FUN_00324e38(0xffffffff);
            }
            if ((g_lmapScene[0x9c] == 6) && (mapSpawnRandomEventKindEffect(), g_lmapScene[0x9c] == 6)) {
              FUN_00297f00(8,10);
              FUN_002d1f40(8,0x28,0);
            }
            if (g_lmapScene[0x9c] != 0xe) goto LAB_002da3cc;
            g_lmapScene[0x9b] = DAT_005f1c94 + g_lmapScene[0x9b] + 3;
          }
          if ((int)(unsigned int)*(unsigned short *)(temp_v6 + 2) <= g_lmapScene[2]) {
            FUN_002d1f40(10,0x78,0);
            if (g_lmapScene[0x9b] >= (int)(unsigned int)*(unsigned short *)(temp_v6 + 4)) {
              popupStateClose();
              FUN_003d2158(g_lmapScene[0x99],0);
              FUN_002de104();
              FUN_00324e38(0);
              piVar18 = g_lmapScene;
              g_lmapScene[0x15] = 0;
              piVar18[0x16] = 0x40a00000;
              piVar18[1] = 0x15;
              piVar18[2] = 0;
              FUN_003024a0(0);
              DAT_005f17ac = '\0';
            }
            else {
              popupStateClose();
              FUN_003d2158(g_lmapScene[0x99],0);
              mapTrapEnable();
              FUN_00324e38(0);
              piVar18 = g_lmapScene;
              g_lmapScene[0x15] = 3;
              piVar18[0x16] = temp_v32;
              DAT_005f17ac = '\0';
              FUN_003024a0(0);
              temp_v11 = *(short *)(temp_v6 + 10);
              if (temp_v11 == 0) {
                g_lmapScene[1] = 0x16;
              }
              else if (temp_v11 == 1) {
                g_lmapScene[1] = 0x17;
              }
              else {
                if (temp_v11 == 2) {
                  temp_v32 = 0x18;
                }
                else {
                  if (temp_v11 != 3) {
                    g_lmapScene[2] = 0;
                    break;
                  }
                  temp_v32 = 0x19;
                }
                g_lmapScene[1] = temp_v32;
              }
              g_lmapScene[2] = 0;
            }
          }
          break;
        case 3:
          g_lmapScene[2] = g_lmapScene[2] + 1;
          DAT_005f17ac = '\0';
          if (piVar18[2] == 1) {
            piVar18[0x15] = 0;
            piVar18[0x16] = 0x40400000;
            temp_v17 = FUN_00152f44();
            temp_v3 = FUN_0014af98();
            FUN_001628c0(&LAB_002da77c,temp_v3,temp_v17,1);
          }
          if (g_lmapScene[2] >= 6) {
            mapTrapGetUnk3C();
            uiPlayGatedActionFeedback();
            FUN_00303460(0);
            mapSetSceneState(1);
            DAT_005f161c = 0;
            DAT_005f1614 = '\0';
            DAT_005f1859 = 1;
            DAT_005f185a = 1;
          }
          break;
        case 4:
          g_lmapScene[2] = g_lmapScene[2] + 1;
          DAT_005f17ac = '\0';
          if (piVar18[2] >= 11) {
            temp_v6 = mapTrapGetUnk38();
            piVar18 = g_lmapScene;
            g_lmapScene[0x15] = 0;
            piVar18[0x16] = temp_v32;
            piVar18[1] = 10;
            piVar18[2] = 0;
            temp_v5 = (unsigned int)*(unsigned short *)(temp_v6 + 8);
            FUN_00303bd4();
            if (temp_v5 != 0) {
              temp_v10 = temp_v5;
              FUN_0015f858();
              FUN_003180c4(0,temp_v10);
              flagValueSub(temp_v5,1);
              mapMainStartEntry(&LAB_002dab1c);
            }
            else {
              mapSetSceneState(1);
              DAT_005f161c = 0;
              DAT_005f1859 = 1;
              DAT_005f185a = 1;
            }
          }
          break;
        case 5:
          g_lmapScene[2] = g_lmapScene[2] + 1;
          DAT_005f17ac = '\0';
          if (piVar18[2] >= 11) {
            temp_v6 = mapTrapGetUnk38();
            piVar18 = g_lmapScene;
            g_lmapScene[0x15] = 0;
            piVar18[0x16] = temp_v32;
            piVar18[1] = 10;
            piVar18[2] = 0;
            temp_v5 = (unsigned int)*(unsigned short *)(temp_v6 + 8);
            FUN_00303bd4();
            temp_v17 = FUN_003e0034();
            temp_v19 = (float)VectorSignedToFloat(temp_v17,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v25 = (float)VectorSignedToFloat(temp_v17,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v18 = (float)VectorUnsignedToFloat
                                      ((unsigned int)*(unsigned short *)(temp_v6 + 0xc),(unsigned char)(in_fpscr >> 0x16) & 3)
            ;
            playerSetClampedValue((int)(short)(int)(temp_v19 - temp_v25 * temp_v18 * 0.01f));
            if (temp_v5 == 0) {
              temp_v17 = 0x2dab34;
            }
            else {
              temp_v10 = temp_v5;
              FUN_0015f858(temp_v5,0);
              FUN_003180c4(0,temp_v10);
              flagValueSub(temp_v5,1);
              temp_v17 = 0x2dab4c;
            }
            mapMainStartEntry(temp_v17);
          }
          break;
        case 6:
          g_lmapScene[2] = g_lmapScene[2] + 1;
          DAT_005f17ac = '\0';
          if (0 < piVar18[2]) {
            DAT_005f1614 = '\x01';
            mapTrapGetUnk38();
            piVar18 = g_lmapScene;
            g_lmapScene[0x15] = 0;
            piVar18[0x16] = temp_v32;
            piVar18[1] = 7;
            piVar18[2] = 0;
            slotSetRequest(0,10,0xff);
            slotSetRequest(1,10,0xff);
            sysPlayVoice(0x10000c4);
          }
          break;
        case 7:
          temp_v32 = FUN_002e07f4();
          if (temp_v32 != 0) {
            temp_v32 = mapTrapGetUnk38();
            g_lmapScene[2] = g_lmapScene[2] + 1;
            puVar6 = (unsigned int *)(unsigned int)*(unsigned short *)(temp_v32 + 0x12);
            if ((g_gameState != puVar6) ||
               (DAT_005f1600 != (unsigned int *)(unsigned int)*(unsigned short *)(temp_v32 + 0x14))) {
              FUN_00365c94(puVar6,*(unsigned short *)(temp_v32 + 0x14),*(unsigned short *)(temp_v32 + 0x16));
              temp_v32 = mapTrapGetUnk38();
              temp_v5 = (unsigned int)*(unsigned short *)(temp_v32 + 8);
              FUN_00303bd4();
              DAT_005f19d0 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
            }
            else {
              FUN_003b5714(puVar6,(unsigned int *)(unsigned int)*(unsigned short *)(temp_v32 + 0x14),
                           *(unsigned short *)(temp_v32 + 0x16));
              if (puVar6 != (unsigned int *)0xffffffff) {
                temp_v6 = dataTableGetRecord23();
                piVar18 = g_lmapScene;
                temp_v12 = VectorSignedToFloat((int)*(short *)(temp_v6 + 4),
                                             (unsigned char)(in_fpscr >> 0x16) & 3);
                g_lmapScene[7] = temp_v12;
                temp_v12 = VectorSignedToFloat((int)*(short *)(temp_v6 + 6),
                                             (unsigned char)(in_fpscr >> 0x16) & 3);
                piVar18[8] = temp_v12;
                temp_v12 = VectorSignedToFloat((int)*(short *)(temp_v6 + 8),
                                             (unsigned char)(in_fpscr >> 0x16) & 3);
                piVar18[9] = temp_v12;
                piVar18[10] = piVar18[7];
                piVar18[0xb] = piVar18[8];
                piVar18[0xc] = temp_v12;
                temp_v12 = VectorSignedToFloat((int)*(short *)(temp_v6 + 10),
                                             (unsigned char)(in_fpscr >> 0x16) & 3);
                piVar18[0x13] = temp_v12;
                piVar18[0x14] = temp_v12;
                temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v6 + 10),
                                             (unsigned char)(in_fpscr >> 0x16) & 3);
                g_lmapView[6] = temp_v6;
                uStack_60 = 0;
                uStack_5c = uStack_5c & 0xffffffff00000000;
                naviMainSetFlagsAndActivate(*(unsigned short *)(temp_v32 + 0x18) & 0xff,*(unsigned short *)(temp_v32 + 0x1a) & 0xff,0);
                DAT_005f1604 = (unsigned int)*(unsigned short *)(temp_v32 + 0x18);
                naviMainSetRequestTriple(*(unsigned short *)(temp_v32 + 0x12),*(unsigned short *)(temp_v32 + 0x14),
                             *(unsigned short *)(temp_v32 + 0x18));
                naviMainApplyRequestValue(DAT_005f1608);
                temp_v32 = mapTrapGetUnk38();
                temp_v5 = (unsigned int)*(unsigned short *)(temp_v32 + 8);
                FUN_00303bd4();
                DAT_005f19d0 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
              }
              if (g_lmapScene[2] >= 0x1f) {
LAB_002dad8c:
                g_lmapScene[2] = 0;
                FUN_003d54f8(0,10);
                FUN_003d54f8(1,10);
                piVar18 = g_lmapScene;
                g_lmapScene[1] = 8;
                piVar18[0x15] = 0x23;
                FUN_00303460(0x16);
                g_lmapScene[0x16] = (int)temp_v18;
              }
            }
          }
          break;
        case 8:
          temp_v32 = g_lmapScene[2];
          g_lmapScene[2] = temp_v32 + 1;
          if (temp_v32 + 1 == 5) {
            sysPlayVoice(0x10000c5);
            temp_v17 = FUN_00152f44();
            temp_v3 = FUN_0014af98();
            FUN_001628c0(&LAB_002dae38,temp_v3,temp_v17,1);
          }
          if (g_lmapScene[2] == 7) {
            FUN_002d1f40(4,0x32,0);
          }
          temp_v32 = linkHolderCallFirst(g_lmapScene[0x6a]);
          if ((temp_v32 == 0x23) && (temp_v32 = linkHolderCheckFirst(g_lmapScene[0x6a]), temp_v32 != 0)) {
            FUN_00303460(0x17);
            piVar18 = g_lmapScene;
            g_lmapScene[0x15] = 0x24;
            piVar18[0x16] = (int)temp_v18;
            piVar18[1] = 9;
            piVar18[2] = 0;
          }
        }
      }
      else if (temp_v6 != 0x16) {
        if (temp_v6 < 0x16) {
          if (temp_v6 != 10) {
            if (temp_v6 != 0xb) {
              if (temp_v6 != 0xc) {
                if (temp_v6 == 0x15) {
                  temp_v6 = g_lmapScene[2];
                  g_lmapScene[2] = temp_v6 + 1;
                  if (temp_v6 + 1 == 1) {
                    sysPlayVoice(0x10000c3);
                  }
                  if (g_lmapScene[2] == 0x14) {
                    DAT_005f1adc = 0;
                    if (*(char *)((int)g_lmapScene + 0x291) != '\0') {
                      FUN_002950a8();
                    }
                    piVar18 = g_lmapScene;
                    g_lmapScene[0x15] = 0x11;
                    piVar18[0x16] = temp_v32;
                  }
                  temp_v32 = linkHolderCallFirst(g_lmapScene[0x6a]);
                  if ((temp_v32 == 0x11) && (temp_v32 = linkHolderCheckFirst(g_lmapScene[0x6a]), temp_v32 != 0))
                  {
                    linkedTargetSetFloat(g_lmapScene[0x6a]);
                    piVar18 = g_lmapScene;
                    g_lmapScene[1] = 3;
                    piVar18[2] = 0;
                  }
                }
              }
              else {
                temp_v32 = FUN_002e07f4();
                if (temp_v32 != 0) {
                  mapTrapGetUnk38();
                  g_lmapScene[2] = g_lmapScene[2] + 1;
                  lmapSceneRestoreEntryPosition();
                  if (g_lmapScene[2] >= 11) goto LAB_002dad8c;
                }
              }
            }
            else {
              g_lmapScene[2] = g_lmapScene[2] + 1;
              DAT_005f17ac = '\0';
              if (0 < piVar18[2]) {
                mapTrapGetUnk38();
                piVar18 = g_lmapScene;
                g_lmapScene[0x15] = 0;
                piVar18[0x16] = temp_v32;
                piVar18[1] = 0xc;
                piVar18[2] = 0;
                slotSetRequest(0,10,0xff);
                slotSetRequest(1,10,0xff);
              }
            }
          }
          else {
            temp_v32 = mapJobIsDone();
            if (temp_v32 != 0) {
              DAT_005f1adc = 0;
              uiPlayGatedActionFeedback();
              FUN_00303460(0);
              mapSetSceneState(1);
              DAT_005f161c = 0;
              DAT_005f1614 = '\0';
              DAT_005f1859 = 1;
              DAT_005f185a = 1;
            }
          }
        }
        else if (temp_v6 != 0x17) {
          if (temp_v6 != 0x18) {
            if (temp_v6 != 0x19) {
              if ((temp_v6 == 99) && (temp_v32 = mapJobIsDone(), temp_v32 != 0)) {
                sysPlaySe(0xe9);
                FUN_002c2d44(
                            "碂辂閂暁銂薂䂁钂銂膂邂邂薂蒂䦁䂁熂膂邂覂蒂貂馂䂁邂銂薂鎂鎂䂁钂袂薂䂁瞂䂁憂閂钂钂辂躂䒁"
                            );
                g_lmapScene[1] = 2;
                temp_v32 = sysPlayVoice(0x10000d2);
                g_lmapScene[0x99] = temp_v32;
              }
            }
            else {
              temp_v32 = g_lmapScene[2] + 1;
              g_lmapScene[2] = temp_v32;
              if (temp_v32 != 1) {
                if (temp_v32 >= 2) {
                  piVar18[1] = 0xb;
                  piVar18[2] = 0;
                }
              }
              else {
                piVar18[0x15] = 0;
                piVar18[0x16] = 0x40400000;
              }
            }
          }
          else {
            temp_v32 = g_lmapScene[2] + 1;
            g_lmapScene[2] = temp_v32;
            if (temp_v32 != 1) {
              if (temp_v32 >= 2) {
                piVar18[1] = 6;
                piVar18[2] = 0;
              }
            }
            else {
              piVar18[0x15] = 0;
              piVar18[0x16] = 0x40400000;
            }
          }
        }
        else {
          temp_v32 = g_lmapScene[2] + 1;
          g_lmapScene[2] = temp_v32;
          if (temp_v32 != 10) {
            if (temp_v32 >= 0x29) {
              piVar18[1] = 5;
              piVar18[2] = 0;
            }
          }
          else {
            piVar18[0x15] = 0;
            piVar18[0x16] = 0x40400000;
          }
        }
      }
      else {
        temp_v32 = g_lmapScene[2] + 1;
        g_lmapScene[2] = temp_v32;
        if (temp_v32 != 10) {
          if (temp_v32 >= 0x29) {
            piVar18[1] = 4;
            piVar18[2] = 0;
          }
        }
        else {
          piVar18[0x15] = 0;
          piVar18[0x16] = 0x40400000;
        }
      }
    }
    else {
      temp_v32 = linkHolderCheckFirst(g_lmapScene[0x6a]);
      if ((temp_v32 != 0) && (temp_v32 = FUN_002e07f4(), temp_v32 != 0)) {
        temp_v32 = (int)DAT_005f19d0;
        if (temp_v32 != 0) {
          temp_v6 = temp_v32;
          FUN_0015f858(temp_v32,0);
          FUN_003180c4(0,temp_v6);
          flagValueSub(temp_v32,1);
          mapMainStartEntry(&LAB_002dae40);
          FUN_001681c4();
        }
        else {
          mapMainStartEntry(&LAB_002dae54);
          FUN_001681c4();
        }
        g_lmapScene[1] = 10;
        DAT_005f19d0 = temp_v18;
      }
    }
    FUN_002e364c(g_lmapScene + 10);
    in_d9 = CONCAT44(iStack_38,fStack_3c);
    in_d10 = CONCAT44(fStack_30,fStack_34);
    in_d11 = CONCAT44(fStack_28,fStack_2c);
    temp_v34 = uStack_44;
    goto code_r0x00327ee8;
  case 0x20:
    fStack_20 = temp_v35;
    fStack_1c = temp_v37;
    temp_v17 = soundVolumeSettingGet();
    piVar10 = g_lmapScene;
    if (g_lmapScene[1] != 0) {
      piVar18 = g_lmapScene;
      if ((g_lmapScene[1] == 1) &&
         (temp_v32 = g_lmapScene[2], g_lmapScene[2] = temp_v32 + 1, piVar18 = g_lmapScene,
         temp_v32 + 1 >= 11)) {
        piVar10[0x16] = 0x40a00000;
        mapSetSceneState(1);
        piVar18 = g_lmapScene;
      }
    }
    else {
      g_lmapScene[0x15] = 3;
      piVar10[0x16] = 0x40000000;
      piVar10[0x14] = piVar10[0x13];
      piVar10[10] = piVar10[7];
      piVar10[0xb] = piVar10[8];
      piVar10[0xc] = piVar10[9];
      *(unsigned char *)(piVar10 + 0x1b) = 0;
      FUN_002d1f40(10,0x14,0);
      FUN_00324e38(0);
      FUN_003d4ed8(0x1000224);
      FUN_001bc124();
      FUN_001bbf0c();
      temp_v32 = randBetween(0,1);
      if (temp_v32 == 0) {
        FUN_0014af98();
        soundVolumeSettingSet();
        sysPlayVoice(0x10002e4);
        soundVolumeSettingSet(temp_v17);
      }
      puVar6 = (unsigned int *)&g_gameState;
      if (g_gameState == (unsigned int *)0x5) {
        puVar6 = DAT_005f1600;
      }
      if (!(g_gameState == (unsigned int *)0x5 && puVar6 == (unsigned int *)0x9)) {
        gameDataFlagTestBit(0x84);
        FUN_0049fe58(2);
        FUN_0049fc88(2,5);
      }
      else {
        gameDataFlagTestBit(0x84);
        FUN_0049fe58(2);
        FUN_0049fc88(2,5);
      }
      piVar18 = g_lmapScene;
      g_lmapScene[1] = g_lmapScene[1] + 1;
      piVar18[2] = 0;
      piVar18 = g_lmapScene;
    }
    goto LAB_00246d70;
  case 0x21:
    fStack_20 = temp_v35;
    fStack_1c = temp_v37;
    mapEaseSceneHeading();
    piVar18 = g_lmapScene;
    *(unsigned char *)(g_lmapScene + 0x1b) = 0;
    piVar18[0x15] = 0;
    piVar18[0x16] = 0;
    piVar18[7] = (int)((float)piVar18[7] + ((float)piVar18[10] - (float)piVar18[7]) * 0.33333334f);
    piVar18[8] = (int)((float)piVar18[8] + ((float)piVar18[0xb] - (float)piVar18[8]) * 0.16666667f);
    piVar18[9] = (int)((float)piVar18[9] + ((float)piVar18[0xc] - (float)piVar18[9]) * 0.33333334f);
    goto LAB_00246d70;
  case 0x22:
    switch(g_lmapScene[1]) {
    case 0:
      g_lmapScene[0x15] = 0x21;
      piVar18[0x16] = 0;
      fStack_20 = temp_v35;
      fStack_1c = temp_v37;
      FUN_00303460(5);
      FUN_00234118();
      piVar18 = g_lmapScene;
      piVar10 = g_lmapScene + 10;
      g_lmapScene[0x14] = g_lmapScene[0x13];
      temp_v32 = piVar18[8];
      temp_v6 = piVar18[9];
      *piVar10 = piVar18[7];
      piVar18[0xb] = temp_v32;
      piVar18[0xc] = temp_v6;
      *(unsigned char *)(piVar18 + 0x1b) = 0;
      piVar18[1] = piVar18[1] + 1;
      piVar18[2] = 0;
      return;
    case 1:
      fStack_20 = temp_v35;
      fStack_1c = temp_v37;
      if (g_lmapScene[2] == 2) {
        sysPlayVoice(0x1000219);
      }
      if ((g_lmapScene[2] == 0x2d) && (sysPlayVoice(0x10002a9), g_lmapScene[2] == 0x2d)) {
        sysPlayVoice(0x10000c9);
      }
      if (g_lmapScene[2] == 0x9c) {
        sysPlayVoice(0x10000c8);
      }
      if (g_lmapScene[2] == 0xf0) {
        sysPlayVoice(0x10002aa);
      }
      piVar18 = g_lmapScene;
      temp_v32 = g_lmapScene[2];
      g_lmapScene[2] = temp_v32 + 1;
      if (temp_v32 + 1 >= 0xf1) {
        piVar10 = piVar18 + 1;
        *piVar10 = *piVar10 + 1;
        piVar18[2] = 0;
        return;
      }
      break;
    case 2:
      temp_v32 = g_lmapScene[2];
      g_lmapScene[2] = temp_v32 + 1;
      if (temp_v32 + 1 >= 0x5b) {
        fStack_20 = temp_v35;
        fStack_1c = temp_v37;
        slotSetRequest(0,10,0xff);
        piVar18 = g_lmapScene;
        g_lmapScene[1] = g_lmapScene[1] + 1;
        piVar18[2] = 0;
        return;
      }
      break;
    case 3:
      fStack_20 = temp_v35;
      fStack_1c = temp_v37;
      temp_v32 = FUN_002e07f4();
      if (temp_v32 != 0) {
        FUN_00303460(0);
        piVar18 = g_lmapScene;
        g_lmapScene[0x15] = 0;
        piVar18[0x16] = 0x40a00000;
        mapInterfaceUnregisterHandle();
        piVar18 = g_lmapScene;
        g_lmapScene[1] = g_lmapScene[1] + 1;
        piVar18[2] = 0;
        return;
      }
      break;
    case 4:
      temp_v32 = 5;
      piVar18[1] = temp_v32;
      piVar18[2] = 0;
      return;
    case 5:
      fStack_20 = temp_v35;
      fStack_1c = temp_v37;
      mapIfReleaseHandle();
      piVar18 = g_lmapScene;
      g_lmapScene[0x15] = 0;
      piVar18[0x16] = 0;
      if (DAT_005f188c == '\0') {
        FUN_0013cab8(0,10,0xff);
      }
      piVar18 = g_lmapScene;
      g_lmapScene[1] = g_lmapScene[1] + 1;
      piVar18[2] = 0;
      return;
    case 6:
      temp_v32 = g_lmapScene[2];
      g_lmapScene[2] = temp_v32 + 1;
      if (temp_v32 + 1 >= 0x10) {
        piVar18[0x16] = 0x40a00000;
        fStack_20 = temp_v35;
        fStack_1c = temp_v37;
code_r0x00313648:
        temp_v32 = gameFlagsGetBlock();
        piVar18 = g_lmapScene;
        if (*g_lmapScene != 1) {
          g_lmapScene[1] = 0;
          *piVar18 = 1;
          piVar18[2] = 0;
          piVar18[0x9d] = 0;
          piVar18[0x9e] = 0;
          *(unsigned int *)(temp_v32 + 0x1518) = 0;
          *(unsigned int *)(temp_v32 + 0x151c) = 0;
          if (*piVar18 == 1) {
            piVar18[0x16] = 0x40a00000;
          }
          else if ((*piVar18 == 3) || (DAT_005f17ac = '\0', *piVar18 == 3)) {
            *(unsigned short *)(piVar18 + 0x67) = 0;
          }
        }
        return;
      }
    }
    break;
  case 0x23:
    fStack_20 = temp_v35;
    fStack_1c = temp_v37;
    __aeabi_memcpy4(afStack_1a8,0x531fd8,0x188);
    temp_v32 = piVar18[1];
    if (temp_v32 == 0) {
      piVar18[0x15] = 0;
      piVar18[0x16] = 0x40000000;
      temp_v18 = DAT_005f16cc;
      piVar18[0x13] = (int)DAT_005f16cc;
      piVar18[0x14] = (int)temp_v18;
      temp_v25 = DAT_005f16b8;
      temp_v19 = DAT_005f16b4;
      temp_v18 = DAT_005f16b0;
      piVar18[7] = (int)DAT_005f16b0;
      piVar18[8] = (int)temp_v19;
      piVar18[9] = (int)temp_v25;
      piVar18[10] = (int)temp_v18;
      piVar18[0xb] = (int)temp_v19;
      piVar18[0xc] = (int)temp_v25;
      *(unsigned char *)(piVar18 + 0x1b) = 0;
      FUN_00303460(6);
      piVar18 = g_lmapScene;
      g_lmapScene[1] = g_lmapScene[1] + 1;
      piVar18[2] = 0;
      return;
    }
    if (temp_v32 != 1) {
      if (temp_v32 == 2) {
        temp_v5 = piVar18[2];
        if (temp_v5 < 0x62) {
          piVar18[8] = (int)((float)piVar18[0xb] + afStack_1a8[temp_v5]);
        }
        piVar18[2] = temp_v5 + 1;
        return;
      }
    }
    else {
      temp_v32 = piVar18[2];
      piVar18[2] = temp_v32 + 1;
      if (temp_v32 + 1 >= 11) {
        FUN_003128d8();
        sysPlayVoice(0x10000e7);
        piVar18 = g_lmapScene;
        g_lmapScene[1] = g_lmapScene[1] + 1;
        piVar18[2] = 0;
        return;
      }
    }
    break;
  case 0x24:
    temp_v32 = g_lmapScene[1];
    if (temp_v32 == 0) {
      g_lmapScene[0x15] = 0;
      piVar18[0x16] = 0x40400000;
      temp_v19 = DAT_005f16b8;
      temp_v18 = DAT_005f16b4;
      piVar18[10] = (int)DAT_005f16b0;
      piVar18[0xb] = (int)temp_v18;
      piVar18[0xc] = (int)temp_v19;
      temp_v32 = piVar18[7];
      fStack_20 = temp_v35;
      fStack_1c = temp_v37;
      mathPositionHeadingDegrees();
      piVar18 = g_lmapScene;
      g_lmapScene[0x14] = temp_v32;
      *(unsigned char *)(piVar18 + 0x1b) = 0;
      piVar18[1] = piVar18[1] + 1;
      piVar18[2] = 0;
      return;
    }
    if (temp_v32 != 1) {
      if (temp_v32 != 2) {
        if (temp_v32 == 3) {
          if (g_lmapScene[2] == 4) {
            fStack_20 = temp_v35;
            fStack_1c = temp_v37;
            FUN_00324e38(0);
            FUN_001bc124();
            FUN_001bbf0c();
            temp_v17 = FUN_00152f44();
            temp_v3 = FUN_0014af98();
            FUN_001628c0(0x2483f0,temp_v3,temp_v17,1);
          }
          piVar18 = g_lmapScene;
          g_lmapScene[7] =
               (int)((float)g_lmapScene[7] +
                    ((float)g_lmapScene[10] - (float)g_lmapScene[7]) * 0.1f);
          piVar18[9] = (int)((float)piVar18[9] + ((float)piVar18[0xc] - (float)piVar18[9]) * 0.1f);
          temp_v32 = piVar18[2] + 1;
          temp_v18 = (float)VectorSignedToFloat(piVar18[2],(unsigned char)(in_fpscr >> 0x16) & 3);
          piVar18[8] = (int)((float)piVar18[8] + temp_v18 * 3.0f);
          piVar18[2] = temp_v32;
          return;
        }
      }
      else {
        pfVar8 = (float *)(g_lmapScene + 10);
        pfVar16 = (float *)(g_lmapScene + 7);
        temp_v19 = (float)g_lmapScene[0xc];
        temp_v18 = (float)g_lmapScene[9];
        temp_v32 = g_lmapScene[2];
        g_lmapScene[2] = temp_v32 + 1;
        piVar18[7] = (int)(*pfVar16 + (*pfVar8 - *pfVar16) * 0.1f);
        piVar18[9] = (int)(temp_v18 + (temp_v19 - temp_v18) * 0.1f);
        if (temp_v32 + 1 >= 6) {
          piVar18[0x15] = 6;
          piVar18[0x16] = 0x40400000;
          piVar18[1] = 3;
          piVar18[2] = 0;
          return;
        }
      }
    }
    else {
      fStack_20 = temp_v35;
      fStack_1c = temp_v37;
      mapEaseSceneHeading();
      piVar18 = g_lmapScene;
      g_lmapScene[7] =
           (int)((float)g_lmapScene[7] + ((float)g_lmapScene[10] - (float)g_lmapScene[7]) * 0.1f);
      piVar18[8] = (int)((float)piVar18[8] + ((float)piVar18[0xb] - (float)piVar18[8]) * 0.1f);
      piVar18[9] = (int)((float)piVar18[9] + ((float)piVar18[0xc] - (float)piVar18[9]) * 0.1f);
      temp_v32 = piVar18[2];
      piVar18[2] = temp_v32 + 1;
      if (temp_v32 + 1 == 1) {
        if ((DAT_005f1600 != (unsigned int *)0x3) && (DAT_005f1600 != (unsigned int *)0x7)) {
          return;
        }
        FUN_00303460(7);
      }
      if (DAT_005f1600 != (unsigned int *)0x3) {
        if (g_lmapScene[2] >= 8) {
          sysPlayVoice(0x10000e8);
          piVar18 = g_lmapScene;
          g_lmapScene[1] = g_lmapScene[1] + 1;
          piVar18[2] = 0;
          return;
        }
      }
      else if (g_lmapScene[2] >= 0x10) {
        sysPlayVoice(0x10000e8);
        piVar18 = g_lmapScene;
        g_lmapScene[1] = g_lmapScene[1] + 1;
        piVar18[2] = 0;
        return;
      }
    }
    break;
  case 0x25:
    temp_v6 = g_lmapScene[10];
    temp_v25 = (float)g_lmapScene[0xb];
    temp_v32 = g_lmapScene[0xc];
    g_lmapScene[0x14] = (int)DAT_005f16bc;
    *(unsigned char *)(piVar18 + 0x1b) = 0;
    if (((DAT_005f161e != '\0') && (DAT_005f1c48 == '\0')) &&
       ((temp_v27 = (float)piVar18[0x1a], 0xbdcccccc < (unsigned int)temp_v27 || ((int)temp_v27 >= 0x3dcccccd)))) {
      piVar18[0xb] = (int)((temp_v25 - 2.0f) - temp_v27);
    }
    temp_v27 = (float)piVar18[0x1f];
    piVar18[0x15] = 0x12;
    piVar18[0x16] = 0x41200000;
    if ((int)temp_v27 < 0x40800001) {
      piVar18[0x1f] = 0x40800000;
    }
    else {
      piVar18[0x1f] = (int)(temp_v27 - (temp_v27 - 4.0f) * 0.5f);
    }
    temp_v27 = 0.017453292f;
    temp_v18 = temp_v18 * 0.017453292f;
    fStack_3c = temp_v19;
    fStack_20 = temp_v35;
    fStack_1c = temp_v37;
    FUN_001bc124();
    piVar18 = g_lmapScene;
    g_lmapScene[10] = (int)((float)g_lmapScene[10] + temp_v18 * (float)g_lmapScene[0x1f]);
    temp_v27 = (float)piVar18[0x14] * temp_v27;
    FUN_001bbf0c();
    piVar18 = g_lmapScene;
    g_lmapScene[0xc] = (int)((float)g_lmapScene[0xc] + temp_v27 * (float)g_lmapScene[0x1f]);
    piVar18[0xd] = temp_v6;
    piVar18[0xe] = (int)temp_v25;
    piVar18[0xf] = temp_v32;
    if ((DAT_005f1c48 == '\0') && (DAT_005f161e != '\0')) {
      piVar10 = piVar18 + 10;
      FUN_0025ef68(piVar10,piVar18 + 0xd,0);
      piVar18 = g_lmapScene;
      if (piVar10 != (int *)0x0) {
        g_lmapScene[0x1a] = 0;
      }
      else {
        temp_v18 = (float)g_lmapScene[0x1a] + 2.0f;
        g_lmapScene[0x1a] = (int)temp_v18;
        if ((int)temp_v18 >= 0x41a00001) {
          temp_v18 = 20.0f;
        }
        piVar18[0x1a] = (int)temp_v18;
      }
    }
    FUN_002e364c(g_lmapScene + 10);
    g_lmapScene[0x57] = 0;
    FUN_00327ee8();
    piVar18 = g_lmapScene;
    g_lmapScene[7] =
         (int)((float)g_lmapScene[7] +
              ((float)g_lmapScene[10] - (float)g_lmapScene[7]) * 0.33333334f);
    piVar18[8] = (int)((float)piVar18[8] + ((float)piVar18[0xb] - (float)piVar18[8]) * 0.33333334f);
    piVar18[9] = (int)((float)piVar18[9] + ((float)piVar18[0xc] - (float)piVar18[9]) * 0.33333334f);
    mapEaseSceneHeading();
    piVar18 = g_lmapScene;
    piVar10 = g_lmapScene + 8;
    temp_v12 = g_lmapScene[9];
    g_lmapScene[0x10] = g_lmapScene[7];
    piVar18[0x11] = *piVar10;
    piVar18[0x12] = temp_v12;
    piVar18[0xd] = temp_v6;
    piVar18[0xe] = (int)temp_v25;
    piVar18[0xf] = temp_v32;
    temp_v32 = 0xf;
    in_d8 = CONCAT44(fStack_1c,fStack_20);
    goto code_r0x00303460;
  case 0x26:
    g_lmapScene[0x14] = (int)DAT_005f16bc;
    if (piVar18[1] != 0) {
      fStack_20 = temp_v35;
      fStack_1c = temp_v37;
      if (((piVar18[1] == 1) && (temp_v32 = piVar18[2], piVar18[2] = temp_v32 + 1, temp_v32 + 1 == 4)) &&
         (DAT_005f16e0 < 99)) {
        if (DAT_005f16e0 != 0x62) {
          if (DAT_005f16e0 == 0x61) {
            temp_v32 = 0x10001b6;
          }
          else if (DAT_005f16e0 == 0x60) {
            temp_v32 = 0x100010c;
          }
          else if (DAT_005f16e0 == 0x5f) {
            temp_v32 = 0x100010e;
          }
          else {
            temp_v32 = DAT_005f16e0 + 0x10000d6;
          }
          sysPlayVoice(temp_v32);
        }
        else {
          sysPlayVoice(0x1000130);
        }
        DAT_005f1a50 = DAT_005f16e0;
        if (DAT_005f16e0 == 0x61 || DAT_005f16e0 == 0x60) {
          DAT_005f1a50 = -1;
        }
        if (DAT_005f1a54 != '\0') {
          DAT_005f1a54 = '\0';
          DAT_005f1a50 = -1;
        }
      }
    }
    else {
      *(unsigned char *)(piVar18 + 0x1b) = 0;
      piVar18[0x15] = 0;
      piVar18[0x16] = 0x40a00000;
      piVar18[1] = 1;
      piVar18[2] = 0;
      fStack_20 = temp_v35;
      fStack_1c = temp_v37;
    }
    FUN_002e364c(g_lmapScene + 10);
    g_lmapScene[0x57] = 0;
    FUN_00327ee8();
    piVar18 = g_lmapScene;
    g_lmapScene[7] =
         (int)((float)g_lmapScene[7] +
              ((float)g_lmapScene[10] - (float)g_lmapScene[7]) * 0.33333334f);
    piVar18[8] = (int)((float)piVar18[8] + ((float)piVar18[0xb] - (float)piVar18[8]) * 0.16666667f);
    piVar18[9] = (int)((float)piVar18[9] + ((float)piVar18[0xc] - (float)piVar18[9]) * 0.33333334f);
    temp_v19 = (float)g_lmapScene[0x13];
    mathAngleDeltaDegrees();
    temp_v18 = temp_v19;
    if (temp_v19 < 0.0f) {
      temp_v18 = -temp_v19;
    }
    if ((int)temp_v18 < 0x41700000) {
      temp_v25 = 0.2f;
    }
    else {
      temp_v25 = 0.33333334f;
    }
    piVar18 = (int *)romwright_f2u((float)((temp_v18 * temp_v25)));
    piVar10 = piVar18;
    if ((int)piVar18 < 0x40a00000) {
      piVar10 = (int *)0x40a00000;
    }
    if (temp_v18 <= romwright_u2f((unsigned int)(piVar10))) {
      piVar18 = g_lmapScene;
    }
    if (temp_v18 <= romwright_u2f((unsigned int)(piVar10))) {
      temp_v18 = (float)piVar18[0x14];
    }
    else if (temp_v19 < 0.0f) {
      temp_v18 = (float)g_lmapScene[0x13] - romwright_u2f((unsigned int)(piVar10));
    }
    else {
      temp_v18 = (float)g_lmapScene[0x13] + romwright_u2f((unsigned int)(piVar10));
    }
    if (temp_v18 < 0.0f) {
      temp_v18 = temp_v18 + 360.0f;
    }
    if ((int)temp_v18 >= 0x43b40001) {
      temp_v18 = temp_v18 - 360.0f;
    }
    g_lmapScene[0x13] = (int)temp_v18;
    return;
  case 0x27:
    temp_v33 = *(unsigned long long *)(g_lmapScene + 10);
    temp_v32 = g_lmapScene[0xc];
    fStack_20 = temp_v35;
    fStack_1c = temp_v37;
    mapEaseSceneHeading();
    piVar18 = g_lmapScene;
    if (g_lmapScene[1] != 0) {
      if (g_lmapScene[1] == 1) {
        g_lmapScene[2] = g_lmapScene[2] + 1;
        controllerGetSourceValue(piVar18[0x6a]);
        piVar18 = g_lmapScene;
        if (in_s0 >= 0x41800000) {
          g_lmapScene[0x15] = 0x14;
          piVar18[0x16] = 0;
          piVar18[1] = piVar18[1] + 1;
          piVar18[2] = 0;
        }
      }
    }
    else {
      g_lmapScene[0x15] = 0x13;
      piVar18[0x16] = 0;
      FUN_00324e38(0);
      piVar18 = g_lmapScene;
      *(unsigned char *)(g_lmapScene + 0x1b) = 0;
      piVar18[1] = piVar18[1] + 1;
      piVar18[2] = 0;
    }
    pfVar8 = afStack_1a8 + 1;
    FUN_002469d0();
    piVar18 = g_lmapScene;
    piVar10 = g_lmapScene + 10;
    g_lmapScene[0xc] = iStack_19c;
    *piVar10 = (int)afStack_1a8[1];
    piVar18[0xb] = (int)afStack_1a8[2];
    piVar18[0xd] = (int)temp_v33;
    piVar18[0xe] = (int)((unsigned long long)temp_v33 >> 0x20);
    piVar18[0xf] = temp_v32;
    goto joined_r0x00248750;
  case 0x28:
    if (g_lmapScene[1] == 0) {
      g_lmapScene[0x15] = 0x11;
      piVar18[0x16] = 0x40a00000;
      piVar18[1] = 1;
      piVar18[2] = 0;
      return;
    }
    if (g_lmapScene[1] != 1) {
      return;
    }
    temp_v32 = g_lmapScene[2] + 1;
    g_lmapScene[2] = temp_v32;
    if (temp_v32 == 0x96) {
      piVar18[0x15] = 0;
      piVar18[0x16] = 0x40a00000;
      return;
    }
    break;
  case 0x29:
    fStack_20 = temp_v35;
    fStack_1c = temp_v37;
    mapEaseSceneHeading();
    piVar18 = g_lmapScene;
    *(unsigned char *)(g_lmapScene + 0x1b) = 0;
    if (DAT_005f1774 != '\0') {
      piVar18[7] = (int)((float)piVar18[7] + ((float)piVar18[10] - (float)piVar18[7]) * 0.083333336f)
      ;
      piVar18[8] = (int)((float)piVar18[8] + ((float)piVar18[0xb] - (float)piVar18[8]) * 0.083333336f
                        );
      piVar18[9] = (int)((float)piVar18[9] + ((float)piVar18[0xc] - (float)piVar18[9]) * 0.083333336f
                        );
    }
    else {
      piVar18[9] = (int)((float)piVar18[9] + ((float)piVar18[0xc] - (float)piVar18[9]) * 0.33333334f)
      ;
      piVar18[7] = (int)((float)piVar18[7] + ((float)piVar18[10] - (float)piVar18[7]) * 0.33333334f);
      piVar18[8] = (int)((float)piVar18[8] + ((float)piVar18[0xb] - (float)piVar18[8]) * 0.16666667f)
      ;
    }
    temp_v32 = piVar18[1];
    if (temp_v32 == 0) {
      FUN_00324e38(1);
      piVar18 = g_lmapScene;
      if (g_gameState != (unsigned int *)0x16) {
        g_lmapScene[0x15] = 0x1f;
        piVar18[0x16] = 0;
        if (DAT_005f1774 != '\0') {
          temp_v32 = piVar18[10];
          mathPositionHeadingDegrees();
          g_lmapScene[0x14] = temp_v32;
        }
      }
      else {
        g_lmapScene[0x15] = 0;
        piVar18[0x16] = 0x40a00000;
        temp_v32 = piVar18[7];
        mathPositionHeadingDegrees();
        g_lmapScene[0x14] = temp_v32;
      }
      FUN_00303460(0xe);
      sysPlaySe(0xdd);
      piVar18 = g_lmapScene;
      g_lmapScene[1] = g_lmapScene[1] + 1;
      piVar18[2] = 0;
      return;
    }
    if (temp_v32 != 1) {
      if ((temp_v32 == 2) && (temp_v32 = piVar18[2], piVar18[2] = temp_v32 + 1, temp_v32 + 1 >= 4)) {
        piVar18[1] = 3;
        piVar18[2] = 0;
        return;
      }
    }
    else {
      temp_v32 = piVar18[2] + 1;
      piVar18[2] = temp_v32;
      if (g_gameState == (unsigned int *)0x16 && temp_v32 == 0x14) {
        piVar18[0x15] = 0xe;
        piVar18[0x16] = 0x40a00000;
        return;
      }
      if (temp_v32 >= 0x24) {
        piVar18[1] = 2;
        piVar18[2] = 0;
        return;
      }
    }
    break;
  case 0x2a:
    if (g_lmapScene[1] == 0) {
      g_lmapScene[0x15] = 0x20;
      piVar18[0x16] = 0;
      piVar18[1] = 1;
      piVar18[2] = 0;
      return;
    }
    if (g_lmapScene[1] == 1) {
      g_lmapScene[2] = g_lmapScene[2] + 1;
      fStack_20 = temp_v35;
      fStack_1c = temp_v37;
      temp_v32 = linkHolderCheckFirst(piVar18[0x6a]);
      if (temp_v32 == 0) {
        return;
      }
      goto code_r0x00313648;
    }
    break;
  case 0x2b:
    temp_v6 = 0;
    temp_v18 = 5.0f;
    temp_v32 = g_lmapScene[1];
    fStack_3c = temp_v19;
    fStack_30 = temp_v35;
    fStack_2c = temp_v37;
    if (temp_v32 < 5) {
      pfVar8 = (float *)(g_lmapScene + 7);
      temp_v26 = (float)g_lmapScene[0xc];
      temp_v25 = (float)g_lmapScene[9];
      temp_v31 = (float)g_lmapScene[0xb];
      temp_v27 = *pfVar8;
      temp_v20 = (float)g_lmapScene[8];
      temp_v24 = (float)g_lmapScene[10];
      g_lmapScene[0xd] = (int)temp_v24;
      piVar18[0xe] = (int)temp_v31;
      piVar18[0xf] = (int)temp_v26;
      piVar18[9] = (int)(temp_v25 + (temp_v26 - temp_v25) * 0.33333334f);
      *pfVar8 = temp_v27 + (temp_v24 - temp_v27) * 0.33333334f;
      piVar18[8] = (int)(temp_v20 + (temp_v31 - temp_v20) * 0.16666667f);
      if (temp_v32 != 2) {
        piVar18[0xb] = (int)(temp_v31 - 5.0f);
        FUN_0025ef68(piVar18 + 10,piVar18 + 0xd,0);
        piVar18 = g_lmapScene;
        piVar10 = g_lmapScene + 0xe;
        temp_v32 = g_lmapScene[0xf];
        g_lmapScene[10] = g_lmapScene[0xd];
        piVar18[0xb] = *piVar10;
        piVar18[0xc] = temp_v32;
      }
    }
    FUN_002e364c(g_lmapScene + 10);
    piVar18 = g_lmapScene;
    temp_v32 = 0x42a00000;
    temp_v19 = 0.017453292f;
    switch(g_lmapScene[1]) {
    case 0:
      g_lmapScene[0x15] = 0x22;
      piVar18[0x16] = temp_v6;
      piVar18[1] = 1;
      piVar18[2] = 0;
      piVar18[0x14] = 0x42a00000;
      piVar18[0x13] = 0x42a00000;
      DAT_005f1a4e = 1;
      return;
    case 1:
      if (g_lmapScene[2] < 2) {
        g_lmapScene[0xb] = (int)((float)g_lmapScene[0xb] + temp_v18);
      }
      else {
        if (g_lmapScene[2] == 2) {
          temp_v17 = FUN_00152f44();
          temp_v3 = FUN_0014af98();
          FUN_001628c0(&LAB_002d94f8,temp_v3,temp_v17,1);
          FUN_00303460(0x12);
        }
        if (g_lmapScene[2] >= 2) {
          temp_v18 = (float)g_lmapScene[7];
          mathPositionHeadingDegrees();
          temp_v18 = temp_v18 * temp_v19;
          FUN_001bc124();
          piVar18 = g_lmapScene;
          temp_v25 = 20.0f;
          g_lmapScene[10] = (int)((float)g_lmapScene[10] + temp_v18 * 20.0f);
          temp_v18 = (float)piVar18[7];
          mathPositionHeadingDegrees();
          temp_v18 = temp_v18 * temp_v19;
          FUN_001bbf0c();
          piVar18 = g_lmapScene;
          g_lmapScene[0xc] = (int)((float)g_lmapScene[0xc] + temp_v18 * temp_v25);
          if (piVar18[2] >= 0x17) {
            piVar18[1] = piVar18[1] + 1;
            piVar18[2] = 0;
            piVar18[7] = -0x3bdd0000;
            piVar18[9] = 0x45051000;
            piVar18[8] = 0x445f4000;
            piVar18[10] = -0x3bdd0000;
            piVar18[0xb] = 0x445f4000;
            piVar18[0xc] = 0x45051000;
            linkHolderSetFlag(piVar18[0x6a]);
            FUN_0025ef68(g_lmapScene + 10,g_lmapScene + 0xd,0);
            piVar18 = g_lmapScene;
            piVar10 = g_lmapScene + 0xe;
            temp_v32 = g_lmapScene[0xf];
            g_lmapScene[10] = g_lmapScene[0xd];
            piVar18[0xb] = *piVar10;
            piVar18[0xc] = temp_v32;
            *(unsigned char *)(g_lmapView + 0x2d) = 0;
            FUN_00303460(0x13);
            temp_v25 = 180.0f;
            temp_v18 = ((float)g_lmapScene[0x14] + 180.0f) * temp_v19;
            FUN_001bc124();
            piVar18 = g_lmapScene;
            temp_v35 = 500.0f;
            g_lmapScene[10] = (int)((float)g_lmapScene[10] + temp_v18 * 500.0f);
            temp_v19 = ((float)piVar18[0x14] + temp_v25) * temp_v19;
            FUN_001bbf0c();
            g_lmapScene[0xc] = (int)((float)g_lmapScene[0xc] + temp_v19 * temp_v35);
          }
        }
      }
      g_lmapScene[2] = g_lmapScene[2] + 1;
      return;
    case 2:
      temp_v32 = g_lmapScene[2];
      g_lmapScene[2] = temp_v32 + 1;
      if (temp_v32 + 1 < 0x15) {
        return;
      }
      piVar18[1] = 3;
      piVar18[2] = 0;
      linkHolderClearFlag(piVar18[0x6a]);
      piVar18 = g_lmapScene;
      g_lmapScene[7] = -0x3b9e8000;
      piVar18[9] = 0x450b5000;
      piVar18[8] = 0x4466c000;
      piVar18[10] = -0x3b9e8000;
      piVar18[0xb] = 0x4466c000;
      piVar18[0xc] = 0x450b5000;
      FUN_0025ef68(piVar18 + 10,piVar18 + 0xd,0);
      piVar18 = g_lmapScene;
      piVar10 = g_lmapScene + 0xe;
      temp_v32 = g_lmapScene[0xf];
      g_lmapScene[10] = g_lmapScene[0xd];
      piVar18[0xb] = *piVar10;
      piVar18[0xc] = temp_v32;
      return;
    case 3:
      g_lmapScene[2] = g_lmapScene[2] + 1;
      temp_v18 = (float)piVar18[0x14] * 0.017453292f;
      FUN_001bc124();
      piVar18 = g_lmapScene;
      temp_v25 = 22.5f;
      g_lmapScene[10] = (int)((float)g_lmapScene[10] + temp_v18 * 22.5f);
      temp_v19 = (float)piVar18[0x14] * temp_v19;
      FUN_001bbf0c();
      piVar18 = g_lmapScene;
      g_lmapScene[0xc] = (int)((float)g_lmapScene[0xc] + temp_v19 * temp_v25);
      if (piVar18[2] < 0x29) {
        return;
      }
      piVar18[1] = piVar18[1] + 1;
      piVar18[2] = 0;
      temp_v32 = 0x14;
      in_d8 = CONCAT44(fStack_2c,fStack_30);
      in_d9 = CONCAT44(fStack_24,fStack_28);
      in_d10 = CONCAT44(fStack_1c,fStack_20);
      break;
    case 4:
      g_lmapScene[0x15] = 0x23;
      piVar18[0x16] = temp_v6;
      piVar18[1] = 5;
      piVar18[2] = 0;
      iStack_38 = 0;
      fStack_34 = 0.0f;
      naviMainSetFlagsAndActivate(0x86,0,0);
      DAT_005f1604 = 0x86;
      return;
    case 5:
      temp_v18 = (float)g_lmapScene[0x14] * 0.017453292f;
      FUN_001bc124();
      piVar18 = g_lmapScene;
      temp_v25 = 100.0f;
      g_lmapScene[7] = (int)((float)g_lmapScene[7] + temp_v18 * 100.0f);
      temp_v19 = (float)piVar18[0x14] * temp_v19;
      FUN_001bbf0c();
      piVar18 = g_lmapScene;
      temp_v18 = (float)g_lmapScene[9] + temp_v19 * temp_v25;
      g_lmapScene[9] = (int)temp_v18;
      piVar18[8] = -0x3d420000;
      piVar18[10] = piVar18[7];
      piVar18[0xb] = -0x3d420000;
      piVar18[0xc] = (int)temp_v18;
      FUN_0025ef68(piVar18 + 10,piVar18 + 0xd,0);
      piVar18 = g_lmapScene;
      piVar10 = g_lmapScene + 0xd;
      piVar7 = g_lmapScene + 10;
      piVar23 = g_lmapScene + 0xe;
      temp_v6 = g_lmapScene[0xf];
      g_lmapScene[2] = 0;
      *piVar7 = *piVar10;
      piVar18[0xb] = *piVar23;
      piVar18[0xc] = temp_v6;
      piVar18[0x14] = temp_v32;
      piVar18[1] = piVar18[1] + 1;
      return;
    case 6:
      temp_v32 = linkHolderCheckFirst(g_lmapScene[0x6a]);
      piVar18 = g_lmapScene;
      if (temp_v32 == 0) {
        return;
      }
      g_lmapScene[0x15] = 0x24;
      piVar18[0x16] = temp_v6;
      piVar18[1] = piVar18[1] + 1;
      piVar18[2] = 0;
      temp_v32 = 0x15;
      in_d8 = CONCAT44(fStack_2c,fStack_30);
      in_d9 = CONCAT44(fStack_24,fStack_28);
      in_d10 = CONCAT44(fStack_1c,fStack_20);
      break;
    case 7:
      temp_v32 = linkHolderCheckFirst(g_lmapScene[0x6a]);
      if (temp_v32 == 0) {
        return;
      }
      *(unsigned char *)(g_lmapScene + 0x1b) = 0;
      DAT_005f1a4e = 0;
      mapSetSceneState(1);
      temp_v32 = 0;
      in_d8 = CONCAT44(fStack_2c,fStack_30);
      in_d9 = CONCAT44(fStack_24,fStack_28);
      in_d10 = CONCAT44(fStack_1c,fStack_20);
      break;
    default:
      return;
    }
    goto code_r0x00303460;
  case 0x2d:
    temp_v32 = 0;
    fStack_20 = temp_v35;
    fStack_1c = temp_v37;
    mapEaseSceneHeading();
    __aeabi_memcpy4(afStack_1a8,0x531f38,0xa0);
    piVar18 = g_lmapScene;
    temp_v6 = g_lmapScene[1];
    if (temp_v6 == 0) {
      g_lmapScene[0x14] = (int)DAT_005f16bc;
      DAT_005f1859 = 0;
      DAT_005f185a = 0;
      piVar18[0x15] = 0;
      piVar18[0x16] = 0x40400000;
      *(unsigned char *)(piVar18 + 0x1b) = 0;
      FUN_00303460(0x1a);
      DAT_005f1a4e = 1;
      piVar18 = g_lmapScene;
      g_lmapScene[1] = g_lmapScene[1] + 1;
      piVar18[2] = 0;
      return;
    }
    if (temp_v6 != 1) {
      if (temp_v6 != 2) {
        return;
      }
      temp_v32 = g_lmapScene[2];
      g_lmapScene[2] = temp_v32 + 1;
      if (temp_v32 + 1 == 1) {
        in_s0 = 0x3f400000;
        temp_v32 = *(int *)(piVar18[0x61] + 4);
        *(unsigned int *)(temp_v32 + 0x1fc) = 0x3f400000;
        FUN_003fe86c(temp_v32,0,2);
        *(unsigned int *)(temp_v32 + 4) = *(unsigned int *)(temp_v32 + 4) & 0xfffffffc;
        slotTargetApplyActiveValue(g_lmapScene[0x6a]);
        linkedTargetSetFloat(g_lmapScene[0x6a]);
      }
      if (g_lmapScene[2] >= 7) {
        DAT_005f17b0 = g_lmapScene[7];
        DAT_005f17b4 = g_lmapScene[8];
        DAT_005f17b8 = g_lmapScene[9];
        DAT_005f17bc = g_lmapScene[0x13];
        DAT_005f1a4f = 1;
      }
      controllerGetSourceValue(g_lmapScene[0x6a]);
      if (in_s0 >= 0x41500000) {
        FUN_003fe86c(*(unsigned int *)(g_lmapScene[0x61] + 4),0,2);
        slotTargetApplyActiveValue(g_lmapScene[0x6a]);
      }
      piVar18 = g_lmapScene;
      if (g_lmapScene[2] < 0x1e) {
        return;
      }
      DAT_005f1859 = 1;
      DAT_005f185a = 1;
      DAT_005f1614 = 0;
      DAT_005f161c = 0;
      DAT_005f1a4f = 0;
      temp_v32 = *(int *)(g_lmapScene[0x61] + 4);
      *(unsigned int *)(temp_v32 + 4) = *(unsigned int *)(temp_v32 + 4) | 3;
      *(unsigned int *)(temp_v32 + 0x1fc) = 0x3f800000;
      linkedTargetSetFloat(piVar18[0x6a]);
      DAT_005f1a4e = 0;
      mapSetSceneState(1);
      FUN_00303460(0);
      return;
    }
    temp_v6 = g_lmapScene[2] + 1;
    g_lmapScene[2] = temp_v6;
    goto joined_r0x002495a4;
  case 0x2e:
    temp_v32 = g_lmapScene[1];
    if (temp_v32 == 0) {
      g_lmapScene[0x15] = 0x20;
      piVar18[0x16] = 0;
      piVar18[1] = 1;
      piVar18[2] = 0;
      return;
    }
    if (temp_v32 == 1) {
      g_lmapScene[1] = 2;
      piVar18[2] = 0;
      temp_v17 = 0;
      temp_v32 = *(int *)(*(int *)(piVar18[0x6a] + 8) + 4);
      if (temp_v32 == 0) {
        return;
      }
      fStack_20 = temp_v35;
      fStack_1c = temp_v37;
      temp_v5 = slots4FGetActiveValue();
      fStack_20 = temp_v35;
      fStack_1c = temp_v37;
      FUN_003fd924();
      FUN_003fd7c0(temp_v32,temp_v5,0);
      temp_v6 = *(int *)(temp_v32 + 0x20c);
      if (temp_v6 != 0) {
        temp_v6 = temp_v6 + 0xc;
      }
      if ((temp_v5 < *(unsigned short *)(*(int *)(temp_v6 + 0x30) + 0x7c)) &&
         (temp_v6 = *(int *)(*(int *)(*(int *)(temp_v6 + 0x30) + 0x78) + temp_v5 * 4), temp_v6 != 0)) {
        *(unsigned int *)(temp_v32 + 0xb4) = temp_v5;
        *(unsigned int *)(temp_v32 + 0xb8) = temp_v17;
        *(int *)(temp_v32 + 0xc0) = temp_v6;
        FUN_0045adc0(temp_v32 + 200,temp_v6,*(unsigned int *)(temp_v32 + 0x210));
        *(unsigned char *)(temp_v32 + 0xd4) = 0;
      }
      temp_v32 = *(int *)(temp_v32 + 0x25c);
      if (temp_v32 != 0) {
        *(unsigned int *)(temp_v32 + 0x10) = temp_v5;
        itemTableClear(temp_v32 + 0x1c);
        piVar18 = (int *)(temp_v32 + 0x1c);
        temp_v12 = *(int *)(temp_v32 + 4);
        *(unsigned int *)(temp_v32 + 0x1c) = 0;
        temp_v6 = 0;
        if (0 < *(int *)(temp_v12 + 8)) {
          do {
            piVar10 = *(int **)(*(int *)(temp_v12 + 0xc) + temp_v6 * 4);
            temp_v15 = (piVar10[1] & 1U) == 0;
            if (temp_v15) {
              piVar10 = (int *)*piVar10;
            }
            if (temp_v15 && piVar10 == (int *)temp_v5) {
              *piVar18 = *piVar18 + 1;
            }
            temp_v6 = temp_v6 + 1;
          } while (temp_v6 < *(int *)(temp_v12 + 8));
          if (*piVar18 != 0) {
            fStack_28 = 1.4013e-45f;
            temp_v17 = 0x100;
            asdMemoryAllocTracked(0x100,0x100,0,*piVar18 << 2);
            *(unsigned int *)(temp_v32 + 0x20) = temp_v17;
            temp_v13 = 0;
            temp_v6 = 0;
            if (temp_v6 < *(int *)(temp_v12 + 8)) {
              do {
                puVar17 = *(unsigned int **)(*(int *)(temp_v12 + 0xc) + temp_v6 * 4);
                temp_v10 = puVar17[1];
                temp_v15 = (temp_v10 & 1) == 0;
                if (temp_v15) {
                  temp_v10 = *puVar17;
                }
                if (temp_v15 && temp_v10 == temp_v5) {
                  puVar11 = (unsigned int *)0x10;
                  FUN_00178b04(0x10,"c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelEffect.cpp",
                               0xf0);
                  if (puVar11 != (unsigned int *)0x0) {
                    *puVar11 = 0xffffffff;
                    puVar11[1] = 0;
                    puVar11[2] = 0;
                    puVar11[3] = 0;
                  }
                  *puVar11 = *puVar17;
                  puVar11[1] = puVar17[1];
                  puVar11[2] = puVar17[2];
                  temp_v10 = puVar17[3];
                  FUN_00291038();
                  puVar11[3] = temp_v10;
                  *(unsigned int **)(*(int *)(temp_v32 + 0x20) + temp_v13 * 4) = puVar11;
                  temp_v13 = temp_v13 + 1;
                }
                temp_v6 = temp_v6 + 1;
              } while (temp_v6 < *(int *)(temp_v12 + 8));
            }
            return;
          }
        }
        *(unsigned int *)(temp_v32 + 0x20) = 0;
        return;
      }
      return;
    }
    if (temp_v32 == 2) {
      g_lmapScene[2] = g_lmapScene[2] + 1;
      fStack_20 = temp_v35;
      fStack_1c = temp_v37;
      temp_v32 = linkHolderCheckFirst(piVar18[0x6a]);
      if ((temp_v32 != 0) && (linkedTargetSetFloat(g_lmapScene[0x6a]), g_lmapScene[2] >= 5))
      goto code_r0x00313648;
    }
    break;
  case 0x2f:
    temp_v32 = g_lmapScene[1];
    if (temp_v32 == 0) {
      g_lmapScene[0x15] = 6;
      piVar18[0x16] = 0;
      piVar18[1] = 1;
      piVar18[2] = 0;
      DAT_005f1a4e = 1;
      return;
    }
    if (temp_v32 != 1) {
      if (temp_v32 != 2) {
        return;
      }
      temp_v32 = g_lmapScene[2];
      g_lmapScene[8] = (int)((float)g_lmapScene[8] - 36.0f);
      piVar18[2] = temp_v32 + 1;
      if (temp_v32 + 1 < 0x51) {
        return;
      }
      fStack_20 = temp_v35;
      fStack_1c = temp_v37;
      mapSetSceneState(0x30);
      piVar18 = g_lmapScene;
      g_lmapScene[1] = g_lmapScene[1] + 1;
      piVar18[2] = 0;
      return;
    }
    g_lmapScene[2] = 0;
    piVar18[1] = 2;
    piVar18[0x14] = 0x43550000;
    piVar18[0x13] = 0x43550000;
    piVar18[7] = 0x43220000;
    piVar18[8] = 0x44da6000;
    piVar18[9] = -0x3b4fc000;
    piVar18[10] = 0x43220000;
    piVar18[0xb] = 0x44da6000;
    piVar18[0xc] = -0x3b4fc000;
    *(unsigned char *)(g_lmapView + 0x2d) = 0;
    temp_v32 = 0x1b;
    fStack_3c = temp_v19;
    goto code_r0x00303460;
  case 0x31:
    temp_v32 = g_lmapScene[1];
    if (temp_v32 == 0) {
      g_lmapScene[0x15] = 6;
      piVar18[0x16] = 0;
      piVar18[1] = 1;
      piVar18[2] = 0;
      DAT_005f1a4e = 1;
      return;
    }
    if (temp_v32 != 1) {
      if (temp_v32 != 2) {
        return;
      }
      temp_v32 = g_lmapScene[2];
      g_lmapScene[8] = (int)((float)g_lmapScene[8] + 36.0f);
      piVar18[2] = temp_v32 + 1;
      if (temp_v32 + 1 < 0x51) {
        return;
      }
      fStack_20 = temp_v35;
      fStack_1c = temp_v37;
      mapSetSceneState(0x32);
      piVar18 = g_lmapScene;
      g_lmapScene[1] = g_lmapScene[1] + 1;
      piVar18[2] = 0;
      return;
    }
    g_lmapScene[2] = 0;
    piVar18[1] = 2;
    piVar18[9] = -0x3b4fc000;
    piVar18[0x14] = 0x43550000;
    piVar18[0x13] = 0x43550000;
    piVar18[7] = 0x43220000;
    piVar18[8] = -0x3c380000;
    piVar18[0xc] = -0x3b4fc000;
    piVar18[10] = 0x43220000;
    piVar18[0xb] = -0x3c380000;
    *(unsigned char *)(g_lmapView + 0x2d) = 0;
    temp_v32 = 0x1c;
    fStack_3c = temp_v19;
    goto code_r0x00303460;
  case 0x33:
    fStack_20 = temp_v35;
    fStack_1c = temp_v37;
    mapEaseSceneHeading();
    piVar18 = g_lmapScene;
    *(unsigned char *)(g_lmapScene + 0x1b) = 0;
    piVar18[7] = (int)((float)piVar18[7] + ((float)piVar18[10] - (float)piVar18[7]) * 0.33333334f);
    piVar18[8] = (int)((float)piVar18[8] + ((float)piVar18[0xb] - (float)piVar18[8]) * 0.16666667f);
    piVar18[9] = (int)((float)piVar18[9] + ((float)piVar18[0xc] - (float)piVar18[9]) * 0.33333334f);
    if (piVar18[1] == 0) {
      FUN_00324e38(1);
      FUN_00303460(0x1d);
      piVar18 = g_lmapScene;
      g_lmapScene[0x15] = 0x29;
      piVar18[0x16] = 0x40a00000;
      piVar18[1] = piVar18[1] + 1;
      piVar18[2] = 0;
      return;
    }
    break;
  case 0x34:
    if (g_lmapScene[1] == 0) {
      fStack_20 = temp_v35;
      fStack_1c = temp_v37;
      FUN_00324e38(1);
      piVar18 = g_lmapScene;
      g_lmapScene[0x15] = 0x2a;
      piVar18[0x16] = 0x40a00000;
      piVar18[1] = piVar18[1] + 1;
      piVar18[2] = 0;
      return;
    }
    if (g_lmapScene[1] != 1) {
      return;
    }
    fStack_3c = temp_v19;
    fStack_20 = temp_v35;
    fStack_1c = temp_v37;
    temp_v32 = linkHolderCheckFirst(g_lmapScene[0x6a]);
    if (temp_v32 == 0) {
      return;
    }
    *(unsigned char *)(g_lmapScene + 0x1b) = 0;
    mapSetSceneState(1);
    temp_v32 = 0;
    in_d8 = CONCAT44(fStack_1c,fStack_20);
code_r0x00303460:
    piVar18 = g_lmapView;
    piVar10 = g_lmapView + 8;
    *(unsigned char *)(g_lmapView + 0x88) = 0;
    *piVar18 = temp_v32;
    piVar18[1] = 0;
    piVar18[2] = 0;
    temp_v6 = *piVar10;
    piVar18[0xa6] = 0;
    piVar18[0xb] = temp_v6;
    piVar18[0xc] = piVar18[9];
    piVar18[0xd] = piVar18[10];
    if (temp_v32 != 0) {
      piVar18[0x84] = 0;
      piVar18[0x85] = 0;
      *(unsigned char *)(piVar18 + 0x2d) = 0;
      *(unsigned char *)((int)piVar18 + 0xb5) = 0;
      *(unsigned short *)((int)piVar18 + 0xb6) = 10;
      *(unsigned short *)(piVar18 + 0x2e) = 0;
      piVar18[0x2f] = 0;
      piVar18[0x30] = 0;
      piVar18[0x31] = 0x3f800000;
      if (temp_v32 == 8 || temp_v32 == 9) {
        piVar18[0xa6] = 0x43340000;
      }
    }
    temp_v13 = DAT_005f1714;
    temp_v12 = DAT_005f1710;
    temp_v6 = DAT_005f16f8;
    temp_v32 = DAT_005f16f4;
    piVar10 = g_lmapScene;
    piVar18 = g_lmapView;
    fStack_34 = (float)in_d8;
    fStack_30 = (float)(in_d8 >> 0x20);
    fStack_2c = (float)in_d9;
    fStack_28 = (float)((unsigned long long)in_d9 >> 0x20);
    fStack_24 = (float)in_d10;
    fStack_20 = (float)(in_d10 >> 0x20);
    fStack_1c = (float)in_d11;
    switch(*g_lmapView) {
    case 0:
      FUN_0033982c();
      break;
    case 1:
      temp_v19 = (float)g_lmapView[6];
      mathAngleDeltaDegrees();
      temp_v5 = in_fpscr & 0xfffffff;
      temp_v18 = temp_v19;
      if (temp_v19 < 0.0f) {
        temp_v18 = -temp_v19;
      }
      temp_v25 = temp_v18 * 0.2f;
      in_fpscr = temp_v5 | ((unsigned int)(temp_v25 <= temp_v18) << 0x1d);
      if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
        g_lmapView[6] = g_lmapScene[0x14];
      }
      else {
        in_fpscr = temp_v5 | ((unsigned int)(0.0f <= temp_v19) << 0x1d);
        if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
          temp_v25 = (float)g_lmapView[6] - temp_v25;
        }
        else {
          temp_v25 = (float)g_lmapView[6] + temp_v25;
        }
        g_lmapView[6] = (int)temp_v25;
      }
      break;
    case 2:
      g_lmapView[6] = g_lmapScene[0x14];
      break;
    case 3:
      g_lmapView[0x1d] = DAT_005f16f0;
      piVar18[0x1e] = temp_v32;
      piVar18[0x1f] = temp_v6;
      temp_v6 = DAT_005f1704;
      temp_v32 = DAT_005f1700;
      piVar18[0x1a] = DAT_005f16fc;
      piVar18[0x1b] = temp_v32;
      piVar18[0x1c] = temp_v6;
      piVar18[0x20] = DAT_005f1708;
      break;
    case 4:
      g_lmapView[0x24] = DAT_005f170c;
      piVar18[0x25] = temp_v12;
      piVar18[0x26] = temp_v13;
      temp_v6 = DAT_005f171c;
      temp_v32 = DAT_005f1718;
      piVar18[0x23] = DAT_005f1720;
      piVar18[0x21] = temp_v32;
      piVar18[0x22] = temp_v6;
      break;
    case 5:
      FUN_002d1780();
      break;
    case 6:
      temp_v19 = 0.017453292f;
      temp_v18 = (float)g_lmapScene[8];
      temp_v32 = g_lmapScene[9];
      g_lmapView[0x17] = g_lmapScene[7];
      piVar18[0x18] = (int)temp_v18;
      piVar18[0x19] = temp_v32;
      piVar18[0x18] = (int)(temp_v18 + 150.0f);
      temp_v18 = (float)piVar10[0xb];
      temp_v32 = piVar10[0xc];
      piVar18[0x14] = piVar10[10];
      piVar18[0x15] = (int)temp_v18;
      piVar18[0x16] = temp_v32;
      piVar18[0x15] = (int)(temp_v18 + 150.0f);
      temp_v18 = (float)piVar10[0x14] * 0.017453292f;
      FUN_001bc124();
      temp_v25 = 600.0f;
      g_lmapView[0x14] = (int)((float)g_lmapView[0x14] + temp_v18 * 600.0f);
      temp_v19 = (float)g_lmapScene[0x14] * temp_v19;
      FUN_001bbf0c();
      g_lmapView[0x16] = (int)((float)g_lmapView[0x16] + temp_v19 * temp_v25);
      break;
    case 7:
      temp_v18 = (float)g_lmapScene[0x13];
      calcHeadingRoundedToCardinalDirection();
      temp_v6 = (int)temp_v18;
      temp_v18 = 0.017453292f;
      temp_v32 = temp_v7;
      if (temp_v6 != 0x5a) {
        temp_v32 = temp_v6 - 0x100;
      }
      temp_v19 = (float)g_lmapView[0xa6] * 0.017453292f;
      if (!(temp_v6 != 0x5a && temp_v32 != 0xe)) {
        FUN_001bc124();
        piVar18 = g_lmapView;
        g_lmapView[0xd] = (int)temp_v19;
        temp_v18 = (float)piVar18[0xa6] * temp_v18;
        FUN_001bbf0c();
        piVar18 = g_lmapView;
        g_lmapView[0xc] = (int)temp_v18;
        piVar18[0xb] = 0;
      }
      else {
        FUN_001bc124();
        piVar18 = g_lmapView;
        g_lmapView[0xb] = (int)temp_v19;
        temp_v18 = (float)piVar18[0xa6] * temp_v18;
        FUN_001bbf0c();
        piVar18 = g_lmapView;
        g_lmapView[0xc] = (int)temp_v18;
        piVar18[0xd] = 0;
      }
      piVar18 = g_lmapView;
      temp_v18 = (float)g_lmapView[0xa6] + 10.0f;
      g_lmapView[0xa6] = (int)temp_v18;
      if ((int)temp_v18 >= 0x43340001) {
        temp_v18 = 180.0f;
      }
      piVar18[0xa6] = (int)temp_v18;
      break;
    case 8:
      temp_v18 = (float)g_lmapScene[0x13];
      calcHeadingRoundedToCardinalDirection();
      temp_v6 = (int)temp_v18;
      temp_v18 = 0.017453292f;
      temp_v32 = temp_v8;
      if (temp_v6 != 0x5a) {
        temp_v32 = temp_v6 - 0x100;
      }
      temp_v19 = (float)g_lmapView[0xa6] * 0.017453292f;
      if (!(temp_v6 != 0x5a && temp_v32 != 0xe)) {
        FUN_001bc124();
        piVar18 = g_lmapView;
        g_lmapView[0xd] = (int)temp_v19;
        temp_v18 = (float)piVar18[0xa6] * temp_v18;
        FUN_001bbf0c();
        piVar18 = g_lmapView;
        g_lmapView[0xc] = (int)temp_v18;
        piVar18[0xb] = 0;
      }
      else {
        FUN_001bc124();
        piVar18 = g_lmapView;
        g_lmapView[0xb] = (int)temp_v19;
        temp_v18 = (float)piVar18[0xa6] * temp_v18;
        FUN_001bbf0c();
        piVar18 = g_lmapView;
        g_lmapView[0xc] = (int)temp_v18;
        piVar18[0xd] = 0;
      }
      temp_v18 = (float)g_lmapView[0xa6];
      temp_v5 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v18 < 0.0f) << 0x1f) |
              ((unsigned int)(temp_v18 == 0.0f) << 0x1e);
      in_fpscr = temp_v5 | ((unsigned int)(temp_v18 != temp_v18) << 0x1c);
      temp_v1 = (unsigned char)(temp_v5 >> 0x18);
      piVar18 = g_lmapView;
      if ((unsigned char)((temp_v1 >> 6) & 1) || temp_v1 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
        temp_v18 = 0.0f;
      }
      piVar18[0xa6] = (int)temp_v18;
      break;
    case 9:
      temp_v18 = (float)g_lmapScene[0x13];
      calcHeadingRoundedToCardinalDirection();
      temp_v6 = (int)temp_v18;
      temp_v18 = 0.017453292f;
      temp_v32 = temp_v9;
      if (temp_v6 != 0x5a) {
        temp_v32 = temp_v6 - 0x100;
      }
      temp_v19 = (float)g_lmapView[0xa6] * 0.017453292f;
      if (!(temp_v6 != 0x5a && temp_v32 != 0xe)) {
        FUN_001bc124();
        piVar18 = g_lmapView;
        g_lmapView[0xd] = (int)temp_v19;
        temp_v18 = (float)piVar18[0xa6] * temp_v18;
        FUN_001bbf0c();
        piVar18 = g_lmapView;
        g_lmapView[0xc] = (int)temp_v18;
        piVar18[0xb] = 0;
      }
      else {
        FUN_001bc124();
        piVar18 = g_lmapView;
        g_lmapView[0xb] = (int)temp_v19;
        temp_v18 = (float)piVar18[0xa6] * temp_v18;
        FUN_001bbf0c();
        piVar18 = g_lmapView;
        g_lmapView[0xc] = (int)temp_v18;
        piVar18[0xd] = 0;
      }
      piVar18 = g_lmapView;
      temp_v18 = (float)g_lmapView[0xa6] - 10.0f;
      g_lmapView[0xa6] = (int)temp_v18;
      temp_v5 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v18 < 0.0f) << 0x1f) |
              ((unsigned int)(temp_v18 == 0.0f) << 0x1e);
      in_fpscr = temp_v5 | ((unsigned int)(temp_v18 != temp_v18) << 0x1c);
      temp_v1 = (unsigned char)(temp_v5 >> 0x18);
      if ((unsigned char)((temp_v1 >> 6) & 1) || temp_v1 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
        temp_v18 = 0.0f;
      }
      piVar18[0xa6] = (int)temp_v18;
      break;
    case 10:
      temp_v32 = g_lmapView[1];
      if (temp_v32 != 0) {
        if (temp_v32 != 1) {
          if (temp_v32 == 2) {
            FUN_0033a374();
            piVar18 = g_lmapView;
            g_lmapView = piVar18;
            if (temp_v32 != 0) {
              piVar18[1] = piVar18[1] + 1;
              piVar18[2] = 0;
            }
          }
        }
        else {
          FUN_0033a374();
          if (temp_v32 != 0) {
            fStack_b8 = (float)piVar18[0x95];
            fStack_b4 = (float)piVar18[0x96];
            fStack_b0 = (float)piVar18[0x97];
            temp_v19 = 0.017453292f;
            fStack_ac = (float)piVar18[0x98];
            fStack_a8 = (float)piVar18[0x99];
            iStack_a4 = piVar18[0x9a];
            temp_v25 = (float)g_lmapScene[0xc];
            temp_v18 = (float)g_lmapScene[0x14] * 0.017453292f;
            temp_v35 = (float)g_lmapScene[10];
            temp_v27 = (float)g_lmapScene[0xb];
            FUN_001bc124();
            temp_v37 = 90.0f;
            temp_v35 = temp_v35 + temp_v18 * 90.0f;
            temp_v27 = temp_v27 + 65.0f;
            temp_v18 = (float)g_lmapScene[0x14] * temp_v19;
            FUN_001bbf0c();
            fStack_98 = temp_v25 + temp_v18 * temp_v37;
            temp_v31 = 110.0f;
            temp_v25 = (float)g_lmapScene[0xc];
            temp_v37 = (float)g_lmapScene[10];
            temp_v20 = (float)g_lmapScene[0xb];
            temp_v18 = ((float)g_lmapScene[0x14] - 110.0f) * temp_v19;
            fStack_a0 = temp_v35;
            fStack_9c = temp_v27;
            FUN_001bc124();
            temp_v35 = 120.0f;
            temp_v37 = temp_v37 + temp_v18 * 120.0f;
            fStack_90 = temp_v20 + 250.0f;
            temp_v19 = ((float)g_lmapScene[0x14] - temp_v31) * temp_v19;
            FUN_001bbf0c();
            fStack_8c = temp_v25 + temp_v19 * temp_v35;
            fStack_6c = 4.2039e-43f;
            uStack_70 = 0;
            uStack_4c = (unsigned long long)(*(unsigned int *)((unsigned char *)&uStack_4c + 4)) << 0x20;
            fStack_94 = temp_v37;
            FUN_002d1e44(&fStack_b8);
            piVar18 = g_lmapView;
            g_lmapView[1] = g_lmapView[1] + 1;
            piVar18[2] = 0;
          }
        }
      }
      else {
        fStack_b8 = (float)g_lmapView[0x17];
        fStack_b4 = (float)g_lmapView[0x18];
        fStack_b0 = (float)g_lmapView[0x19];
        temp_v19 = 0.017453292f;
        fStack_ac = (float)g_lmapView[0x14];
        fStack_a8 = (float)g_lmapView[0x15];
        iStack_a4 = g_lmapView[0x16];
        temp_v25 = (float)g_lmapScene[0xc];
        temp_v18 = (float)g_lmapScene[0x14] * 0.017453292f;
        temp_v35 = (float)g_lmapScene[10];
        temp_v27 = (float)g_lmapScene[0xb];
        FUN_001bc124();
        temp_v37 = 90.0f;
        temp_v35 = temp_v35 + temp_v18 * 90.0f;
        temp_v27 = temp_v27 + 75.0f;
        temp_v18 = (float)g_lmapScene[0x14] * temp_v19;
        FUN_001bbf0c();
        fStack_98 = temp_v25 + temp_v18 * temp_v37;
        temp_v31 = 110.0f;
        temp_v25 = (float)g_lmapScene[0xc];
        temp_v37 = (float)g_lmapScene[10];
        temp_v20 = (float)g_lmapScene[0xb];
        temp_v18 = ((float)g_lmapScene[0x14] - 110.0f) * temp_v19;
        fStack_a0 = temp_v35;
        fStack_9c = temp_v27;
        FUN_001bc124();
        temp_v35 = 120.0f;
        temp_v37 = temp_v37 + temp_v18 * 120.0f;
        fStack_90 = temp_v20 + 210.0f;
        temp_v19 = ((float)g_lmapScene[0x14] - temp_v31) * temp_v19;
        FUN_001bbf0c();
        fStack_8c = temp_v25 + temp_v19 * temp_v35;
        fStack_6c = 1.12104e-44f;
        uStack_70 = 0;
        uStack_4c = (unsigned long long)(*(unsigned int *)((unsigned char *)&uStack_4c + 4)) << 0x20;
        fStack_94 = temp_v37;
        FUN_002d1e44(&fStack_b8);
        piVar18 = g_lmapView;
        *(unsigned char *)(g_lmapView + 0x88) = 1;
        piVar10 = piVar18 + 1;
        *piVar10 = *piVar10 + 1;
        piVar18[2] = 0;
      }
      break;
    case 0xb:
      temp_v32 = g_lmapView[1];
      if (temp_v32 != 0) {
        if (temp_v32 != 1) {
          if (temp_v32 == 2) {
            FUN_0033a374();
            piVar18 = g_lmapView;
            g_lmapView = piVar18;
            if (temp_v32 != 0) {
              piVar18[1] = piVar18[1] + 1;
              piVar18[2] = 0;
            }
          }
        }
        else {
          FUN_0033a374();
          if (temp_v32 != 0) {
            fStack_b8 = (float)piVar18[0x95];
            fStack_b4 = (float)piVar18[0x96];
            fStack_b0 = (float)piVar18[0x97];
            temp_v19 = 0.017453292f;
            fStack_ac = (float)piVar18[0x98];
            fStack_a8 = (float)piVar18[0x99];
            iStack_a4 = piVar18[0x9a];
            temp_v25 = (float)g_lmapScene[0xc];
            temp_v18 = (float)g_lmapScene[0x14] * 0.017453292f;
            temp_v35 = (float)g_lmapScene[10];
            temp_v27 = (float)g_lmapScene[0xb];
            FUN_001bc124();
            temp_v31 = 120.0f;
            temp_v35 = temp_v35 + temp_v18 * 120.0f;
            temp_v27 = temp_v27 + 70.0f;
            temp_v18 = (float)g_lmapScene[0x14] * temp_v19;
            FUN_001bbf0c();
            fStack_98 = temp_v25 + temp_v18 * temp_v31;
            temp_v25 = (float)g_lmapScene[0xc];
            temp_v37 = (float)g_lmapScene[10];
            temp_v20 = (float)g_lmapScene[0xb];
            temp_v18 = ((float)g_lmapScene[0x14] - temp_v31) * temp_v19;
            fStack_a0 = temp_v35;
            fStack_9c = temp_v27;
            FUN_001bc124();
            temp_v35 = 140.0f;
            temp_v37 = temp_v37 + temp_v18 * 140.0f;
            fStack_90 = temp_v20 + 200.0f;
            temp_v19 = ((float)g_lmapScene[0x14] - temp_v31) * temp_v19;
            FUN_001bbf0c();
            fStack_8c = temp_v25 + temp_v19 * temp_v35;
            fStack_6c = 4.2039e-43f;
            uStack_70 = 0;
            uStack_4c = (unsigned long long)(*(unsigned int *)((unsigned char *)&uStack_4c + 4)) << 0x20;
            fStack_94 = temp_v37;
            FUN_002d1e44(&fStack_b8);
            piVar18 = g_lmapView;
            g_lmapView[1] = g_lmapView[1] + 1;
            piVar18[2] = 0;
          }
        }
      }
      else {
        pfVar8 = (float *)(g_lmapView + 0x17);
        g_lmapView[3] = 0;
        fStack_b8 = *pfVar8;
        fStack_b4 = (float)piVar18[0x18];
        fStack_b0 = (float)piVar18[0x19];
        temp_v19 = 0.017453292f;
        fStack_ac = (float)piVar18[0x14];
        fStack_a8 = (float)piVar18[0x15];
        iStack_a4 = piVar18[0x16];
        temp_v25 = (float)g_lmapScene[0xc];
        temp_v18 = (float)g_lmapScene[0x14] * 0.017453292f;
        temp_v35 = (float)g_lmapScene[10];
        temp_v27 = (float)g_lmapScene[0xb];
        FUN_001bc124();
        temp_v31 = 120.0f;
        temp_v35 = temp_v35 + temp_v18 * 120.0f;
        temp_v27 = temp_v27 + 70.0f;
        temp_v18 = (float)g_lmapScene[0x14] * temp_v19;
        FUN_001bbf0c();
        fStack_98 = temp_v25 + temp_v18 * temp_v31;
        temp_v25 = (float)g_lmapScene[0xc];
        temp_v37 = (float)g_lmapScene[10];
        temp_v20 = (float)g_lmapScene[0xb];
        temp_v18 = ((float)g_lmapScene[0x14] - temp_v31) * temp_v19;
        fStack_a0 = temp_v35;
        fStack_9c = temp_v27;
        FUN_001bc124();
        temp_v35 = 140.0f;
        temp_v37 = temp_v37 + temp_v18 * 140.0f;
        fStack_90 = temp_v20 + 200.0f;
        temp_v19 = ((float)g_lmapScene[0x14] - temp_v31) * temp_v19;
        FUN_001bbf0c();
        fStack_8c = temp_v25 + temp_v19 * temp_v35;
        fStack_6c = 1.12104e-44f;
        uStack_70 = 0;
        uStack_4c = (unsigned long long)(*(unsigned int *)((unsigned char *)&uStack_4c + 4)) << 0x20;
        fStack_94 = temp_v37;
        FUN_002d1e44(&fStack_b8);
        piVar18 = g_lmapView;
        *(unsigned char *)(g_lmapView + 0x88) = 1;
        piVar10 = piVar18 + 1;
        *piVar10 = *piVar10 + 1;
        piVar18[2] = 0;
      }
      break;
    case 0xc:
      FUN_003026d8();
      break;
    case 0xd:
      FUN_002b56e0();
      break;
    case 0xe:
      temp_v32 = g_lmapView[1];
      if (temp_v32 != 0) {
        if (temp_v32 != 1) {
          if (temp_v32 == 2) {
            FUN_0033a374();
            piVar18 = g_lmapView;
            g_lmapView = piVar18;
            if (temp_v32 != 0) {
              piVar18[1] = piVar18[1] + 1;
              piVar18[2] = 0;
            }
          }
        }
        else {
          FUN_0033a374();
          if (temp_v32 != 0) {
            fStack_b8 = (float)piVar18[0x95];
            fStack_b4 = (float)piVar18[0x96];
            fStack_b0 = (float)piVar18[0x97];
            temp_v19 = 0.017453292f;
            fStack_ac = (float)piVar18[0x98];
            fStack_a8 = (float)piVar18[0x99];
            iStack_a4 = piVar18[0x9a];
            temp_v25 = (float)g_lmapScene[0xc];
            temp_v18 = (float)g_lmapScene[0x14] * 0.017453292f;
            temp_v35 = (float)g_lmapScene[10];
            temp_v37 = (float)g_lmapScene[0xb];
            FUN_001bc124();
            temp_v27 = 40.0f;
            fStack_9c = temp_v37 + 20.0f;
            fStack_a0 = temp_v35 + temp_v18 * 40.0f;
            if (g_gameState == (unsigned int *)0x16) {
              fStack_9c = fStack_9c + 20.0f;
            }
            temp_v18 = (float)g_lmapScene[0x14] * temp_v19;
            FUN_001bbf0c();
            fStack_98 = temp_v25 + temp_v18 * temp_v27;
            temp_v20 = 170.0f;
            temp_v25 = (float)g_lmapScene[0xc];
            temp_v35 = (float)g_lmapScene[10];
            temp_v37 = (float)g_lmapScene[0xb];
            temp_v18 = ((float)g_lmapScene[0x14] - 170.0f) * temp_v19;
            FUN_001bc124();
            temp_v27 = 180.0f;
            temp_v35 = temp_v35 + temp_v18 * 180.0f;
            fStack_90 = temp_v37 + 221.0f;
            temp_v19 = ((float)g_lmapScene[0x14] - temp_v20) * temp_v19;
            FUN_001bbf0c();
            fStack_8c = temp_v25 + temp_v19 * temp_v27;
            if (g_gameState == (unsigned int *)0x16) {
              fStack_90 = fStack_90 + 80.0f;
            }
            fStack_6c = 6.30584e-43f;
            uStack_70 = 0;
            uStack_4c = (unsigned long long)(*(unsigned int *)((unsigned char *)&uStack_4c + 4)) << 0x20;
            fStack_94 = temp_v35;
            FUN_002d1e44(&fStack_b8);
            piVar18 = g_lmapView;
            g_lmapView[1] = g_lmapView[1] + 1;
            piVar18[2] = 0;
          }
        }
      }
      else {
        fStack_b8 = (float)g_lmapView[0x17];
        fStack_b4 = (float)g_lmapView[0x18];
        fStack_b0 = (float)g_lmapView[0x19];
        temp_v19 = 0.017453292f;
        fStack_ac = (float)g_lmapView[0x14];
        fStack_a8 = (float)g_lmapView[0x15];
        iStack_a4 = g_lmapView[0x16];
        temp_v25 = (float)g_lmapScene[0xc];
        temp_v18 = (float)g_lmapScene[0x14] * 0.017453292f;
        temp_v35 = (float)g_lmapScene[10];
        temp_v37 = (float)g_lmapScene[0xb];
        FUN_001bc124();
        temp_v27 = 40.0f;
        fStack_9c = temp_v37 + 20.0f;
        fStack_a0 = temp_v35 + temp_v18 * 40.0f;
        if (g_gameState == (unsigned int *)0x16) {
          fStack_9c = fStack_9c + 20.0f;
        }
        temp_v18 = (float)g_lmapScene[0x14] * temp_v19;
        FUN_001bbf0c();
        fStack_98 = temp_v25 + temp_v18 * temp_v27;
        temp_v20 = 160.0f;
        temp_v25 = (float)g_lmapScene[0xc];
        temp_v35 = (float)g_lmapScene[10];
        temp_v37 = (float)g_lmapScene[0xb];
        temp_v18 = ((float)g_lmapScene[0x14] - 160.0f) * temp_v19;
        FUN_001bc124();
        temp_v27 = 180.0f;
        temp_v35 = temp_v35 + temp_v18 * 180.0f;
        fStack_90 = temp_v37 + 220.0f;
        temp_v19 = ((float)g_lmapScene[0x14] - temp_v20) * temp_v19;
        FUN_001bbf0c();
        fStack_8c = temp_v25 + temp_v19 * temp_v27;
        if (g_gameState == (unsigned int *)0x16) {
          fStack_90 = fStack_90 + 80.0f;
        }
        fStack_6c = 8.40779e-44f;
        uStack_70 = 0;
        uStack_4c = (unsigned long long)(*(unsigned int *)((unsigned char *)&uStack_4c + 4)) << 0x20;
        fStack_94 = temp_v35;
        FUN_002d1e44(&fStack_b8);
        piVar18 = g_lmapView;
        *(unsigned char *)(g_lmapView + 0x88) = 1;
        piVar10 = piVar18 + 1;
        *piVar10 = *piVar10 + 1;
        piVar18[2] = 0;
      }
      break;
    case 0xf:
      FUN_0030250c();
      break;
    case 0x10:
      FUN_00352568();
      break;
    case 0x12:
      temp_v32 = g_lmapView[1];
      if (temp_v32 != 0) {
        if (temp_v32 == 1) {
          FUN_0033a374();
          piVar18 = g_lmapView;
          g_lmapView = piVar18;
          if (temp_v32 != 0) {
            piVar18[1] = piVar18[1] + 1;
            piVar18[2] = 0;
          }
        }
      }
      else {
        g_lmapView[3] = 0;
        fStack_b8 = (float)piVar18[0x17];
        fStack_b4 = (float)piVar18[0x18];
        fStack_b0 = (float)piVar18[0x19];
        temp_v19 = 0.017453292f;
        temp_v18 = (float)g_lmapScene[0x14] * 0.017453292f;
        FUN_001bc124();
        temp_v25 = 100.0f;
        fStack_b8 = fStack_b8 + temp_v18 * 100.0f;
        fStack_b4 = fStack_b4 - 100.0f;
        fStack_ac = (float)g_lmapView[0x14];
        fStack_a8 = (float)g_lmapView[0x15];
        iStack_a4 = g_lmapView[0x16];
        temp_v18 = (float)g_lmapScene[0x14] * temp_v19;
        FUN_001bc124();
        fStack_ac = fStack_ac + temp_v18 * temp_v25;
        fStack_a8 = fStack_a8 - temp_v25;
        temp_v25 = (float)g_lmapScene[0xc];
        temp_v18 = (float)g_lmapScene[0x14] * temp_v19;
        temp_v35 = (float)g_lmapScene[10];
        temp_v27 = (float)g_lmapScene[0xb];
        FUN_001bc124();
        temp_v37 = 50.0f;
        temp_v35 = temp_v35 + temp_v18 * 50.0f;
        temp_v27 = temp_v27 + 200.0f;
        temp_v18 = (float)g_lmapScene[0x14] * temp_v19;
        FUN_001bbf0c();
        fStack_98 = temp_v25 + temp_v18 * temp_v37;
        temp_v31 = 180.0f;
        temp_v25 = (float)g_lmapScene[0xc];
        temp_v37 = (float)g_lmapScene[10];
        temp_v20 = (float)g_lmapScene[0xb];
        temp_v18 = ((float)g_lmapScene[0x14] + 180.0f) * temp_v19;
        fStack_a0 = temp_v35;
        fStack_9c = temp_v27;
        FUN_001bc124();
        temp_v35 = 400.0f;
        temp_v37 = temp_v37 + temp_v18 * 400.0f;
        fStack_90 = temp_v20 + 300.0f;
        temp_v19 = ((float)g_lmapScene[0x14] + temp_v31) * temp_v19;
        FUN_001bbf0c();
        fStack_8c = temp_v25 + temp_v19 * temp_v35;
        fStack_6c = 2.8026e-44f;
        uStack_70 = 0;
        uStack_4c = (unsigned long long)(*(unsigned int *)((unsigned char *)&uStack_4c + 4)) << 0x20;
        fStack_94 = temp_v37;
        FUN_002d1e44(&fStack_b8);
        piVar18 = g_lmapView;
        piVar10 = g_lmapView + 1;
        *(unsigned char *)(g_lmapView + 0x88) = 1;
        *piVar10 = piVar18[1] + 1;
        piVar18[2] = 0;
        piVar18[3] = 0;
      }
      break;
    case 0x13:
      temp_v32 = g_lmapView[1];
      if (temp_v32 != 0) {
        if (temp_v32 == 1) {
          FUN_0033a374();
          piVar18 = g_lmapView;
          g_lmapView = piVar18;
          if (temp_v32 != 0) {
            piVar18[1] = piVar18[1] + 1;
            piVar18[2] = 0;
          }
        }
      }
      else {
        pfVar8 = (float *)(g_lmapView + 0x17);
        g_lmapView[3] = 0;
        fStack_b8 = *pfVar8;
        fStack_b4 = (float)piVar18[0x18];
        fStack_b0 = (float)piVar18[0x19];
        temp_v19 = 0.017453292f;
        fStack_ac = (float)piVar18[0x14];
        fStack_a8 = (float)piVar18[0x15];
        iStack_a4 = piVar18[0x16];
        temp_v25 = (float)g_lmapScene[0xc];
        temp_v18 = (float)g_lmapScene[0x14] * 0.017453292f;
        temp_v35 = (float)g_lmapScene[10];
        temp_v27 = (float)g_lmapScene[0xb];
        FUN_001bc124();
        temp_v37 = 100.0f;
        temp_v35 = temp_v35 + temp_v18 * 100.0f;
        temp_v27 = temp_v27 - 150.0f;
        temp_v18 = (float)g_lmapScene[0x14] * temp_v19;
        FUN_001bbf0c();
        fStack_98 = temp_v25 + temp_v18 * temp_v37;
        temp_v25 = (float)g_lmapScene[0xc];
        temp_v37 = (float)g_lmapScene[10];
        temp_v20 = (float)g_lmapScene[0xb];
        temp_v18 = ((float)g_lmapScene[0x14] - 38.0f) * temp_v19;
        fStack_a0 = temp_v35;
        fStack_9c = temp_v27;
        FUN_001bc124();
        temp_v35 = 900.0f;
        temp_v37 = temp_v37 + temp_v18 * 900.0f;
        fStack_90 = temp_v20 + 250.0f;
        temp_v19 = ((float)g_lmapScene[0x14] - 42.5f) * temp_v19;
        FUN_001bbf0c();
        fStack_8c = temp_v25 + temp_v19 * temp_v35;
        fStack_6c = 1.4013e-45f;
        uStack_70 = 0;
        uStack_4c = (unsigned long long)(*(unsigned int *)((unsigned char *)&uStack_4c + 4)) << 0x20;
        fStack_94 = temp_v37;
        FUN_002d1e44(&fStack_b8);
        piVar18 = g_lmapView;
        piVar10 = g_lmapView + 1;
        *(unsigned char *)(g_lmapView + 0x88) = 1;
        *piVar10 = piVar18[1] + 1;
        piVar18[2] = 0;
        piVar18[3] = 0;
      }
      break;
    case 0x14:
      temp_v32 = g_lmapView[1];
      if (temp_v32 != 0) {
        if ((temp_v32 == 1) && (FUN_0033a374(), piVar18 = g_lmapView, temp_v32 != 0)) {
          g_lmapView[0x86] = 0;
          piVar18[0x87] = 0;
          piVar18[6] = (int)((float)g_lmapScene[0x14] + 110.0f);
          piVar18[0x14] = (int)fStack_94;
          piVar18[0x15] = (int)fStack_90;
          piVar18[0x16] = (int)fStack_8c;
          piVar18[0x17] = (int)fStack_a0;
          piVar18[0x18] = (int)fStack_9c;
          piVar18[0x19] = (int)fStack_98;
          piVar18[1] = piVar18[1] + 1;
          piVar18[2] = 0;
        }
      }
      else {
        pfVar8 = (float *)(g_lmapView + 0x17);
        g_lmapView[3] = 0;
        fStack_b8 = *pfVar8;
        fStack_b4 = (float)piVar18[0x18];
        fStack_b0 = (float)piVar18[0x19];
        temp_v19 = 0.017453292f;
        fStack_ac = (float)piVar18[0x14];
        fStack_a8 = (float)piVar18[0x15];
        iStack_a4 = piVar18[0x16];
        temp_v25 = (float)g_lmapScene[0xc];
        temp_v18 = (float)g_lmapScene[0x14] * 0.017453292f;
        temp_v35 = (float)g_lmapScene[10];
        temp_v27 = (float)g_lmapScene[0xb];
        FUN_001bc124();
        temp_v37 = -30.0f;
        temp_v35 = temp_v35 + temp_v18 * -30.0f;
        temp_v27 = temp_v27 - 750.0f;
        temp_v18 = (float)g_lmapScene[0x14] * temp_v19;
        FUN_001bbf0c();
        fStack_98 = temp_v25 + temp_v18 * temp_v37;
        temp_v31 = 30.0f;
        temp_v25 = (float)g_lmapScene[0xc];
        temp_v37 = (float)g_lmapScene[10];
        temp_v20 = (float)g_lmapScene[0xb];
        temp_v18 = ((float)g_lmapScene[0x14] - 30.0f) * temp_v19;
        fStack_a0 = temp_v35;
        fStack_9c = temp_v27;
        FUN_001bc124();
        temp_v35 = 250.0f;
        temp_v37 = temp_v37 + temp_v18 * 250.0f;
        fStack_90 = temp_v20 - 700.0f;
        temp_v19 = ((float)g_lmapScene[0x14] - temp_v31) * temp_v19;
        FUN_001bbf0c();
        fStack_8c = temp_v25 + temp_v19 * temp_v35;
        fStack_6c = 1.4013e-45f;
        uStack_70 = 0;
        uStack_4c = (unsigned long long)(*(unsigned int *)((unsigned char *)&uStack_4c + 4)) << 0x20;
        fStack_94 = temp_v37;
        FUN_002d1e44(&fStack_b8);
        piVar18 = g_lmapView;
        piVar10 = g_lmapView + 1;
        *(unsigned char *)(g_lmapView + 0x88) = 1;
        *piVar10 = piVar18[1] + 1;
        piVar18[2] = 0;
        piVar18[3] = 0;
      }
      break;
    case 0x15:
      temp_v32 = FUN_003033d4();
      piVar18 = g_lmapView;
      if (g_lmapView[1] != 0) {
        if ((g_lmapView[1] == 1) &&
           (piVar10 = g_lmapView, FUN_0033a374(), piVar18 = g_lmapView, piVar10 != (int *)0x0))
        {
          g_lmapView[0x86] = 0;
          piVar18[0x87] = 0;
          piVar18[6] = (int)((float)g_lmapScene[0x14] + 110.0f);
          piVar18[0x14] = (int)fStack_94;
          piVar18[0x15] = (int)fStack_90;
          piVar18[0x16] = (int)fStack_8c;
          piVar18[0x17] = (int)fStack_a0;
          piVar18[0x18] = (int)fStack_9c;
          piVar18[0x19] = (int)fStack_98;
          piVar18[1] = piVar18[1] + 1;
          piVar18[2] = 0;
        }
      }
      else {
        pfVar8 = (float *)(g_lmapView + 0x17);
        g_lmapView[3] = 0;
        fStack_b8 = *pfVar8;
        fStack_b4 = (float)piVar18[0x18];
        fStack_b0 = (float)piVar18[0x19];
        temp_v27 = 90.0f;
        fStack_ac = (float)piVar18[0x14];
        fStack_a8 = (float)piVar18[0x15];
        iStack_a4 = piVar18[0x16];
        temp_v19 = 0.017453292f;
        temp_v35 = (float)g_lmapScene[7];
        temp_v25 = (float)g_lmapScene[9];
        temp_v37 = (float)g_lmapScene[8] + (float)piVar18[temp_v32 + 0x33];
        temp_v18 = ((float)piVar18[6] - 90.0f) * 0.017453292f;
        FUN_001bc124();
        temp_v35 = temp_v35 + temp_v18 * (float)g_lmapView[temp_v32 + 0x53];
        temp_v18 = ((float)g_lmapView[6] - temp_v27) * temp_v19;
        FUN_001bbf0c();
        fStack_98 = temp_v25 + temp_v18 * (float)g_lmapView[temp_v32 + 0x53];
        temp_v18 = (float)g_lmapView[6] * temp_v19;
        fStack_a0 = temp_v35;
        fStack_9c = temp_v37;
        FUN_001bc124();
        temp_v25 = (float)g_lmapScene[7] - temp_v18 * (float)g_lmapView[temp_v32 + 99];
        temp_v18 = (float)g_lmapView[6] * temp_v19;
        FUN_001bbf0c();
        temp_v37 = (float)g_lmapScene[9] - temp_v18 * (float)g_lmapView[temp_v32 + 99];
        temp_v35 = (float)g_lmapScene[8] + (float)g_lmapView[temp_v32 + 0x43] +
                 (float)g_lmapView[7];
        temp_v18 = ((float)g_lmapView[6] - temp_v27) * temp_v19;
        FUN_001bc124();
        temp_v25 = temp_v25 + temp_v18 * (float)g_lmapView[temp_v32 + 0x53];
        temp_v19 = ((float)g_lmapView[6] - temp_v27) * temp_v19;
        FUN_001bbf0c();
        temp_v6 = 0;
        fStack_8c = temp_v37 + temp_v19 * (float)g_lmapView[temp_v32 + 0x53];
        fStack_6c = 1.26117e-43f;
        uStack_70 = 0;
        uStack_4c = (unsigned long long)(*(unsigned int *)((unsigned char *)&uStack_4c + 4)) << 0x20;
        fStack_94 = temp_v25;
        fStack_90 = temp_v35;
        FUN_002d1e44(&fStack_b8);
        piVar18 = g_lmapView;
        piVar10 = g_lmapView + 1;
        *(unsigned char *)(g_lmapView + 0x88) = 1;
        piVar18[0x86] = temp_v6;
        piVar18[0x87] = temp_v6;
        *piVar10 = piVar18[1] + 1;
        piVar18[2] = 0;
        piVar18[3] = 0;
      }
      break;
    case 0x16:
      temp_v32 = g_lmapView[1];
      if (temp_v32 != 0) {
        if ((temp_v32 == 1) && (FUN_0033a374(), piVar18 = g_lmapView, temp_v32 != 0)) {
          g_lmapView[0x86] = 0;
          piVar18[0x87] = 0;
          piVar18[6] = g_lmapScene[0x13];
          piVar18[0x14] = (int)fStack_94;
          piVar18[0x15] = (int)fStack_90;
          piVar18[0x16] = (int)fStack_8c;
          piVar18[0x17] = (int)fStack_a0;
          piVar18[0x18] = (int)fStack_9c;
          piVar18[0x19] = (int)fStack_98;
          piVar18[1] = piVar18[1] + 1;
          piVar18[2] = 0;
        }
      }
      else {
        pfVar8 = (float *)(g_lmapView + 0x17);
        g_lmapView[3] = 0;
        fStack_b8 = *pfVar8;
        fStack_b4 = (float)piVar18[0x18];
        fStack_b0 = (float)piVar18[0x19];
        temp_v19 = 0.017453292f;
        fStack_ac = (float)piVar18[0x14];
        fStack_a8 = (float)piVar18[0x15];
        iStack_a4 = piVar18[0x16];
        temp_v25 = (float)g_lmapScene[0xc];
        temp_v18 = (float)g_lmapScene[0x14] * 0.017453292f;
        temp_v35 = (float)g_lmapScene[10];
        temp_v27 = (float)g_lmapScene[0xb];
        FUN_001bc124();
        temp_v37 = -30.0f;
        temp_v35 = temp_v35 + temp_v18 * -30.0f;
        temp_v27 = temp_v27 + 50.0f;
        temp_v18 = (float)g_lmapScene[0x14] * temp_v19;
        FUN_001bbf0c();
        fStack_98 = temp_v25 + temp_v18 * temp_v37;
        temp_v31 = 30.0f;
        temp_v25 = (float)g_lmapScene[0xc];
        temp_v37 = (float)g_lmapScene[10];
        temp_v20 = (float)g_lmapScene[0xb];
        temp_v18 = ((float)g_lmapScene[0x14] - 30.0f) * temp_v19;
        fStack_a0 = temp_v35;
        fStack_9c = temp_v27;
        FUN_001bc124();
        temp_v35 = 250.0f;
        temp_v37 = temp_v37 + temp_v18 * 250.0f;
        fStack_90 = temp_v20 + 100.0f;
        temp_v19 = ((float)g_lmapScene[0x14] - temp_v31) * temp_v19;
        FUN_001bbf0c();
        fStack_8c = temp_v25 + temp_v19 * temp_v35;
        fStack_6c = 1.4013e-45f;
        uStack_70 = 0;
        uStack_4c = (unsigned long long)(*(unsigned int *)((unsigned char *)&uStack_4c + 4)) << 0x20;
        fStack_94 = temp_v37;
        FUN_002d1e44(&fStack_b8);
        piVar18 = g_lmapView;
        piVar10 = g_lmapView + 1;
        *(unsigned char *)(g_lmapView + 0x88) = 1;
        *piVar10 = piVar18[1] + 1;
        piVar18[2] = 0;
        piVar18[3] = 0;
      }
      break;
    case 0x17:
      temp_v32 = FUN_003033d4();
      piVar18 = g_lmapView;
      if (g_lmapView[1] != 0) {
        if (g_lmapView[1] == 1) {
          piVar10 = g_lmapView;
          FUN_0033a374();
          piVar18 = g_lmapView;
joined_r0x00397538:
          g_lmapView = piVar18;
          if (piVar10 != (int *)0x0) {
            piVar18[0x86] = 0;
            piVar18[0x87] = 0;
            piVar18[6] = g_lmapScene[0x13];
            piVar18[0x14] = (int)fStack_94;
            piVar18[0x15] = (int)fStack_90;
            piVar18[0x16] = (int)fStack_8c;
            piVar18[0x17] = (int)fStack_a0;
            piVar18[0x18] = (int)fStack_9c;
            piVar18[0x19] = (int)fStack_98;
            piVar18[1] = piVar18[1] + 1;
            piVar18[2] = 0;
          }
        }
      }
      else {
        pfVar8 = (float *)(g_lmapView + 0x17);
        g_lmapView[3] = 0;
        fStack_b8 = *pfVar8;
        fStack_b4 = (float)piVar18[0x18];
        fStack_b0 = (float)piVar18[0x19];
        temp_v27 = 90.0f;
        fStack_ac = (float)piVar18[0x14];
        fStack_a8 = (float)piVar18[0x15];
        iStack_a4 = piVar18[0x16];
        temp_v19 = 0.017453292f;
        temp_v35 = (float)g_lmapScene[7];
        temp_v25 = (float)g_lmapScene[9];
        temp_v37 = (float)g_lmapScene[8] + (float)piVar18[temp_v32 + 0x33];
        temp_v18 = ((float)piVar18[6] - 90.0f) * 0.017453292f;
        FUN_001bc124();
        temp_v35 = temp_v35 + temp_v18 * (float)g_lmapView[temp_v32 + 0x53];
        temp_v18 = ((float)g_lmapView[6] - temp_v27) * temp_v19;
        FUN_001bbf0c();
        fStack_98 = temp_v25 + temp_v18 * (float)g_lmapView[temp_v32 + 0x53];
        temp_v18 = (float)g_lmapView[6] * temp_v19;
        fStack_a0 = temp_v35;
        fStack_9c = temp_v37;
        FUN_001bc124();
        temp_v25 = (float)g_lmapScene[7] - temp_v18 * (float)g_lmapView[temp_v32 + 99];
        temp_v18 = (float)g_lmapView[6] * temp_v19;
        FUN_001bbf0c();
        temp_v35 = (float)g_lmapScene[9] - temp_v18 * (float)g_lmapView[temp_v32 + 99];
        temp_v37 = (float)g_lmapScene[8] + (float)g_lmapView[temp_v32 + 0x43] +
                 (float)g_lmapView[7];
        temp_v18 = ((float)g_lmapView[6] - temp_v27) * temp_v19;
        FUN_001bc124();
        temp_v25 = temp_v25 + temp_v18 * (float)g_lmapView[temp_v32 + 0x53];
        temp_v19 = ((float)g_lmapView[6] - temp_v27) * temp_v19;
        FUN_001bbf0c();
        fStack_8c = temp_v35 + temp_v19 * (float)g_lmapView[temp_v32 + 0x53];
        fStack_94 = temp_v25;
        fStack_90 = temp_v37;
        FUN_00330108(&fStack_94,&fStack_a0,&uStack_44);
        fStack_6c = 1.26117e-43f;
        uStack_70 = 0;
        temp_v32 = 0;
        fStack_94 = (float)uStack_44;
        fStack_90 = (*(float *)((unsigned char *)&uStack_44 + 4));
        fStack_8c = fStack_3c;
        uStack_4c = (unsigned long long)(*(unsigned int *)((unsigned char *)&uStack_4c + 4)) << 0x20;
        FUN_002d1e44(&fStack_b8);
        piVar18 = g_lmapView;
        piVar10 = g_lmapView + 1;
        *(unsigned char *)(g_lmapView + 0x88) = 1;
        piVar18[0x86] = temp_v32;
        piVar18[0x87] = temp_v32;
        *piVar10 = piVar18[1] + 1;
        piVar18[2] = 0;
        piVar18[3] = 0;
      }
      break;
    case 0x18:
      temp_v32 = FUN_003033d4();
      piVar18 = g_lmapView;
      if (g_lmapView[1] != 0) {
        if (g_lmapView[1] == 1) {
          piVar10 = g_lmapView;
          FUN_0033a374();
          piVar18 = g_lmapView;
          goto joined_r0x00397538;
        }
      }
      else {
        pfVar8 = (float *)(g_lmapView + 0x17);
        g_lmapView[3] = 0;
        fStack_b8 = *pfVar8;
        fStack_b4 = (float)piVar18[0x18];
        fStack_b0 = (float)piVar18[0x19];
        temp_v27 = 90.0f;
        fStack_ac = (float)piVar18[0x14];
        fStack_a8 = (float)piVar18[0x15];
        iStack_a4 = piVar18[0x16];
        temp_v19 = 0.017453292f;
        temp_v35 = (float)g_lmapScene[7];
        temp_v25 = (float)g_lmapScene[9];
        temp_v37 = (float)g_lmapScene[8] + (float)piVar18[temp_v32 + 0x33];
        temp_v18 = ((float)piVar18[6] - 90.0f) * 0.017453292f;
        FUN_001bc124();
        temp_v35 = temp_v35 + temp_v18 * (float)g_lmapView[temp_v32 + 0x53];
        temp_v18 = ((float)g_lmapView[6] - temp_v27) * temp_v19;
        FUN_001bbf0c();
        fStack_98 = temp_v25 + temp_v18 * (float)g_lmapView[temp_v32 + 0x53];
        temp_v18 = (float)g_lmapView[6] * temp_v19;
        fStack_a0 = temp_v35;
        fStack_9c = temp_v37;
        FUN_001bc124();
        temp_v25 = (float)g_lmapScene[7] - temp_v18 * (float)g_lmapView[temp_v32 + 99];
        temp_v18 = (float)g_lmapView[6] * temp_v19;
        FUN_001bbf0c();
        temp_v35 = (float)g_lmapScene[9] - temp_v18 * (float)g_lmapView[temp_v32 + 99];
        temp_v37 = (float)g_lmapScene[8] + (float)g_lmapView[temp_v32 + 0x43] +
                 (float)g_lmapView[7];
        temp_v18 = ((float)g_lmapView[6] - temp_v27) * temp_v19;
        FUN_001bc124();
        temp_v25 = temp_v25 + temp_v18 * (float)g_lmapView[temp_v32 + 0x53];
        temp_v19 = ((float)g_lmapView[6] - temp_v27) * temp_v19;
        FUN_001bbf0c();
        fStack_8c = temp_v35 + temp_v19 * (float)g_lmapView[temp_v32 + 0x53];
        fStack_94 = temp_v25;
        fStack_90 = temp_v37;
        FUN_00330108(&fStack_94,&fStack_a0,&uStack_44);
        fStack_6c = 2.8026e-44f;
        uStack_70 = 0;
        temp_v32 = 0;
        fStack_94 = (float)uStack_44;
        fStack_90 = (*(float *)((unsigned char *)&uStack_44 + 4));
        fStack_8c = fStack_3c;
        uStack_4c = (unsigned long long)(*(unsigned int *)((unsigned char *)&uStack_4c + 4)) << 0x20;
        FUN_002d1e44(&fStack_b8);
        piVar18 = g_lmapView;
        piVar10 = g_lmapView + 1;
        *(unsigned char *)(g_lmapView + 0x88) = 1;
        piVar18[0x86] = temp_v32;
        piVar18[0x87] = temp_v32;
        *piVar10 = piVar18[1] + 1;
        piVar18[2] = 0;
        piVar18[3] = 0;
      }
      break;
    case 0x19:
      FUN_003033d4();
      temp_v32 = g_lmapView[1];
      if (temp_v32 != 0) {
        if ((temp_v32 == 1) && (FUN_0033a374(), piVar10 = g_lmapView, temp_v32 != 0)) {
          piVar7 = g_lmapView + 0x14;
          g_lmapView[6] = g_lmapScene[0x13];
          temp_v32 = piVar18[0x99];
          temp_v6 = piVar18[0x9a];
          *piVar7 = piVar18[0x98];
          piVar10[0x15] = temp_v32;
          piVar10[0x16] = temp_v6;
          temp_v32 = piVar18[0x95];
          temp_v6 = piVar18[0x96];
          piVar10[0x19] = piVar18[0x97];
          piVar10[0x17] = temp_v32;
          piVar10[0x18] = temp_v6;
          piVar10[1] = piVar10[1] + 1;
          piVar10[2] = 0;
          DAT_005f1a4c = 1;
          DAT_005f1a4d = '\x01';
        }
      }
      else {
        g_lmapView[3] = 0;
        fStack_b0 = DAT_005f1a2c;
        fStack_b8 = DAT_005f1a24;
        fStack_b4 = DAT_005f1a28;
        fStack_ac = DAT_005f1a18;
        fStack_a8 = DAT_005f1a1c;
        iStack_a4 = DAT_005f1a20;
        fStack_a0 = DAT_005f1a3c;
        fStack_9c = DAT_005f1a40;
        fStack_98 = DAT_005f1a44;
        fStack_94 = DAT_005f1a30;
        fStack_90 = DAT_005f1a34;
        fStack_8c = DAT_005f1a38;
        if (DAT_005f1a4d != '\0') {
          FUN_00330108(&fStack_94,&fStack_a0,&uStack_44);
          fStack_94 = (float)uStack_44;
          fStack_90 = (*(float *)((unsigned char *)&uStack_44 + 4));
          fStack_8c = fStack_3c;
        }
        uStack_70 = 2;
        if ((int)DAT_005f1a48 < 1) {
          DAT_005f1a48 = 1.4013e-45f;
        }
        fStack_6c = DAT_005f1a48;
        uStack_4c = uStack_4c & 0xffffffff00000000;
        FUN_002d1e44(&fStack_b8);
        piVar18 = g_lmapView;
        piVar10 = g_lmapView + 1;
        *(unsigned char *)(g_lmapView + 0x88) = 1;
        *piVar10 = piVar18[1] + 1;
        piVar18[2] = 0;
        piVar18[3] = 0;
      }
      break;
    case 0x1a:
      FUN_003033d4();
      piVar18 = g_lmapView;
      if (g_lmapView[1] != 0) {
        if ((g_lmapView[1] == 1) &&
           (piVar10 = g_lmapView, FUN_0033a374(), piVar18 = g_lmapView, piVar10 != (int *)0x0))
        {
          g_lmapView[0x86] = 0;
          piVar18[0x87] = 0;
          piVar18[6] = g_lmapScene[0x14];
          piVar18[0x14] = (int)fStack_94;
          piVar18[0x15] = (int)fStack_90;
          piVar18[0x16] = (int)fStack_8c;
          piVar18[0x17] = (int)fStack_a0;
          piVar18[0x18] = (int)fStack_9c;
          piVar18[0x19] = (int)fStack_98;
          piVar18[1] = piVar18[1] + 1;
          piVar18[2] = 0;
        }
      }
      else {
        pfVar8 = (float *)(g_lmapView + 0x17);
        g_lmapView[3] = 0;
        fStack_b8 = *pfVar8;
        fStack_b4 = (float)piVar18[0x18];
        fStack_b0 = (float)piVar18[0x19];
        temp_v19 = 0.017453292f;
        fStack_a8 = (float)piVar18[0x15];
        fStack_ac = (float)piVar18[0x14];
        iStack_a4 = piVar18[0x16];
        temp_v25 = (float)g_lmapScene[0xc];
        temp_v18 = (float)g_lmapScene[0x14] * 0.017453292f;
        temp_v35 = (float)g_lmapScene[10];
        temp_v27 = (float)g_lmapScene[0xb];
        FUN_001bc124();
        temp_v37 = 120.0f;
        temp_v35 = temp_v35 + temp_v18 * 120.0f;
        temp_v27 = temp_v27 + 170.0f;
        temp_v18 = (float)g_lmapScene[0x14] * temp_v19;
        FUN_001bbf0c();
        fStack_98 = temp_v25 + temp_v18 * temp_v37;
        temp_v31 = 160.0f;
        temp_v25 = (float)g_lmapScene[0xc];
        temp_v37 = (float)g_lmapScene[10];
        temp_v20 = (float)g_lmapScene[0xb];
        temp_v18 = ((float)g_lmapScene[0x14] - 160.0f) * temp_v19;
        fStack_a0 = temp_v35;
        fStack_9c = temp_v27;
        FUN_001bc124();
        temp_v35 = 240.0f;
        temp_v37 = temp_v37 + temp_v18 * 240.0f;
        fStack_90 = temp_v20 + 30.0f;
        temp_v19 = ((float)g_lmapScene[0x14] - temp_v31) * temp_v19;
        FUN_001bbf0c();
        fStack_8c = temp_v25 + temp_v19 * temp_v35;
        uStack_70 = 2;
        fStack_6c = 1.4013e-44f;
        uStack_4c = (unsigned long long)(*(unsigned int *)((unsigned char *)&uStack_4c + 4)) << 0x20;
        fStack_94 = temp_v37;
        FUN_002d1e44(&fStack_b8);
        piVar18 = g_lmapView;
        *(unsigned char *)(g_lmapView + 0x88) = 1;
        piVar10 = piVar18 + 1;
        *piVar10 = *piVar10 + 1;
        piVar18[2] = 0;
      }
      break;
    case 0x1b:
      temp_v32 = g_lmapView[1];
      if (temp_v32 != 0) {
        if (temp_v32 == 1) {
          FUN_0033a374();
          piVar18 = g_lmapView;
          g_lmapView = piVar18;
          if (temp_v32 != 0) {
            piVar18[1] = piVar18[1] + 1;
            piVar18[2] = 0;
          }
        }
      }
      else {
        g_lmapView[3] = 0;
        fStack_b8 = 1520.0f;
        fStack_b4 = 1786.0f;
        fStack_b0 = -369.0f;
        fStack_ac = 1750.0f;
        fStack_a8 = 1902.0f;
        iStack_a4 = -0x3cd00000;
        fStack_a0 = 1571.0f;
        fStack_9c = 1684.0f;
        fStack_98 = -323.0f;
        fStack_94 = 1750.0f;
        fStack_90 = 1902.0f;
        fStack_8c = -176.0f;
        fStack_6c = 8.40779e-44f;
        uStack_70 = 0;
        uStack_4c = uStack_4c & 0xffffffff00000000;
        FUN_002d1e44(&fStack_b8);
        piVar18 = g_lmapView;
        piVar10 = g_lmapView + 1;
        *(unsigned char *)(g_lmapView + 0x88) = 1;
        *piVar10 = piVar18[1] + 1;
        piVar18[2] = 0;
        piVar18[3] = 0;
      }
      break;
    case 0x1c:
      temp_v32 = g_lmapView[1];
      if (temp_v32 != 0) {
        if (temp_v32 == 1) {
          FUN_0033a374();
          piVar18 = g_lmapView;
          g_lmapView = piVar18;
          if (temp_v32 != 0) {
            piVar18[1] = piVar18[1] + 1;
            piVar18[2] = 0;
          }
        }
      }
      else {
        g_lmapView[3] = 0;
        fStack_b8 = 1571.0f;
        fStack_b4 = 1684.0f;
        fStack_b0 = -323.0f;
        fStack_ac = 1750.0f;
        fStack_a8 = 1902.0f;
        iStack_a4 = -0x3cd00000;
        fStack_a0 = 1520.0f;
        fStack_9c = 1786.0f;
        fStack_98 = -369.0f;
        fStack_94 = 1750.0f;
        fStack_90 = 1902.0f;
        fStack_8c = -176.0f;
        fStack_6c = 8.40779e-44f;
        uStack_70 = 0;
        uStack_4c = (unsigned long long)(*(unsigned int *)((unsigned char *)&uStack_4c + 4)) << 0x20;
        FUN_002d1e44(&fStack_b8);
        piVar18 = g_lmapView;
        piVar10 = g_lmapView + 1;
        *(unsigned char *)(g_lmapView + 0x88) = 1;
        *piVar10 = piVar18[1] + 1;
        piVar18[2] = 0;
        piVar18[3] = 0;
      }
      break;
    case 0x1d:
      temp_v32 = g_lmapView[1];
      if (temp_v32 != 0) {
        if (temp_v32 == 1) {
          FUN_0033a374();
          piVar18 = g_lmapView;
          g_lmapView = piVar18;
          if (temp_v32 != 0) {
            piVar18[1] = piVar18[1] + 1;
            piVar18[2] = 0;
          }
        }
      }
      else {
        pfVar8 = (float *)(g_lmapView + 0x17);
        g_lmapView[3] = 0;
        fStack_b8 = *pfVar8;
        fStack_b4 = (float)piVar18[0x18];
        fStack_b0 = (float)piVar18[0x19];
        temp_v20 = 0.017453292f;
        fStack_ac = (float)piVar18[0x14];
        fStack_a8 = (float)piVar18[0x15];
        iStack_a4 = piVar18[0x16];
        temp_v37 = DAT_005f16bc * 0.017453292f;
        temp_v18 = DAT_005f16b8;
        temp_v19 = DAT_005f16b0;
        temp_v35 = DAT_005f16b4;
        FUN_001bc124();
        temp_v37 = temp_v37 + temp_v19;
        temp_v31 = 200.0f;
        temp_v35 = temp_v35 + 200.0f;
        temp_v19 = DAT_005f16bc * temp_v20;
        FUN_001bbf0c();
        fStack_98 = temp_v19 + temp_v18;
        temp_v24 = 180.0f;
        temp_v27 = (DAT_005f16bc + 180.0f) * temp_v20;
        temp_v18 = DAT_005f16b8;
        temp_v19 = DAT_005f16b4;
        temp_v25 = DAT_005f16b0;
        fStack_a0 = temp_v37;
        fStack_9c = temp_v35;
        FUN_001bc124();
        temp_v35 = 150.0f;
        temp_v19 = temp_v19 + temp_v31;
        fStack_94 = temp_v25 + temp_v27 * 150.0f;
        temp_v20 = (DAT_005f16bc + temp_v24) * temp_v20;
        FUN_001bbf0c();
        fStack_8c = temp_v18 + temp_v20 * temp_v35;
        fStack_6c = 1.4013e-45f;
        uStack_70 = 0;
        uStack_4c = (unsigned long long)(*(unsigned int *)((unsigned char *)&uStack_4c + 4)) << 0x20;
        fStack_90 = temp_v19;
        FUN_002d1e44(&fStack_b8);
        piVar18 = g_lmapView;
        piVar10 = g_lmapView + 1;
        *(unsigned char *)(g_lmapView + 0x88) = 1;
        *piVar10 = piVar18[1] + 1;
        piVar18[2] = 0;
        piVar18[3] = 0;
      }
      break;
    case 0x1e:
      temp_v32 = g_lmapView[1];
      if (temp_v32 != 0) {
        if (temp_v32 == 1) {
          FUN_0033a374();
          piVar18 = g_lmapView;
          g_lmapView = piVar18;
          if (temp_v32 != 0) {
            piVar18[1] = piVar18[1] + 1;
            piVar18[2] = 0;
          }
        }
      }
      else {
        pfVar8 = (float *)(g_lmapView + 0x17);
        g_lmapView[3] = 0;
        fStack_b8 = *pfVar8;
        fStack_b4 = (float)piVar18[0x18];
        fStack_b0 = (float)piVar18[0x19];
        temp_v20 = 0.017453292f;
        fStack_ac = (float)piVar18[0x14];
        fStack_a8 = (float)piVar18[0x15];
        iStack_a4 = piVar18[0x16];
        temp_v37 = DAT_005f16bc * 0.017453292f;
        temp_v18 = DAT_005f16b8;
        temp_v19 = DAT_005f16b0;
        temp_v35 = DAT_005f16b4;
        FUN_001bc124();
        temp_v37 = temp_v37 + temp_v19;
        temp_v31 = 200.0f;
        temp_v35 = temp_v35 + 200.0f;
        temp_v19 = DAT_005f16bc * temp_v20;
        FUN_001bbf0c();
        fStack_98 = temp_v19 + temp_v18;
        temp_v24 = 120.0f;
        temp_v27 = (DAT_005f16bc + 120.0f) * temp_v20;
        temp_v18 = DAT_005f16b0;
        temp_v19 = DAT_005f16b8;
        temp_v25 = DAT_005f16b4;
        fStack_a0 = temp_v37;
        fStack_9c = temp_v35;
        FUN_001bc124();
        fStack_94 = temp_v18 + temp_v27 * temp_v31;
        temp_v25 = temp_v25 + temp_v31;
        temp_v20 = (DAT_005f16bc + temp_v24) * temp_v20;
        FUN_001bbf0c();
        fStack_8c = temp_v19 + temp_v20 * temp_v31;
        fStack_6c = 1.4013e-45f;
        uStack_70 = 0;
        uStack_4c = (unsigned long long)(*(unsigned int *)((unsigned char *)&uStack_4c + 4)) << 0x20;
        fStack_90 = temp_v25;
        FUN_002d1e44(&fStack_b8);
        piVar18 = g_lmapView;
        piVar10 = g_lmapView + 1;
        *(unsigned char *)(g_lmapView + 0x88) = 1;
        *piVar10 = piVar18[1] + 1;
        piVar18[2] = 0;
        piVar18[3] = 0;
      }
      break;
    case 0x1f:
      FUN_00376c64();
      break;
    case 0x20:
      temp_v32 = g_lmapView[1];
      if (temp_v32 != 0) {
        if (temp_v32 == 1) {
          FUN_0033a374();
          piVar18 = g_lmapView;
          g_lmapView = piVar18;
          if (temp_v32 != 0) {
            piVar18[1] = piVar18[1] + 1;
            piVar18[2] = 0;
          }
        }
      }
      else {
        pfVar8 = (float *)(g_lmapView + 0x17);
        g_lmapView[3] = 0;
        fStack_b8 = *pfVar8;
        fStack_b4 = (float)piVar18[0x18];
        fStack_b0 = (float)piVar18[0x19];
        fStack_ac = (float)piVar18[0x14];
        fStack_a8 = (float)piVar18[0x15];
        iStack_a4 = piVar18[0x16];
        fStack_98 = (float)piVar18[0x19];
        fStack_a0 = (float)piVar18[0x17];
        fStack_9c = (float)piVar18[0x18] + 200.0f;
        fStack_90 = (float)piVar18[0x15];
        fStack_94 = (float)piVar18[0x14];
        fStack_8c = (float)piVar18[0x16];
        fStack_6c = 5.60519e-44f;
        uStack_70 = 0;
        uStack_4c = (unsigned long long)(*(unsigned int *)((unsigned char *)&uStack_4c + 4)) << 0x20;
        FUN_002d1e44(&fStack_b8);
        piVar18 = g_lmapView;
        piVar10 = g_lmapView + 1;
        *(unsigned char *)(g_lmapView + 0x88) = 1;
        *piVar10 = piVar18[1] + 1;
        piVar18[2] = 0;
        piVar18[3] = 0;
      }
    }
    fStack_1c = fStack_20;
    fStack_20 = fStack_24;
    fStack_24 = fStack_28;
    fStack_28 = fStack_2c;
    fStack_2c = fStack_30;
    fStack_30 = fStack_34;
    temp_v37 = 0.0f;
    temp_v27 = 1.0f;
    temp_v19 = 1100.0f;
    temp_v25 = (float)g_lmapScene[7];
    temp_v18 = (float)g_lmapScene[8];
    temp_v35 = (float)g_lmapScene[9];
    pfVar8 = (float *)asdModelGetStatic38();
    *pfVar8 = temp_v19;
    if ((*g_lmapView == 0xc) && (g_lmapView[1] >= 100)) {
      temp_v20 = ((float)g_lmapScene[0x13] + 180.0f) * 0.7111111f;
      temp_v5 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v37 <= temp_v20) << 0x1d);
      for (temp_v20 = romwright_fabs_4(temp_v20); temp_v31 = temp_v37, (int)temp_v20 >= 0x47800000;
          temp_v20 = temp_v20 - 65536.0f) {
      }
      for (; (int)temp_v31 >= 0x47800000; temp_v31 = temp_v31 - 65536.0f) {
      }
      temp_v21 = VectorFloatToUnsigned(0x4338e38f,3);
      temp_v22 = VectorFloatToUnsigned(temp_v20,3);
      temp_v23 = VectorFloatToUnsigned(temp_v31,3);
      temp_v10 = temp_v21 & 0xff;
      temp_v26 = (float)VectorUnsignedToFloat(temp_v21 & 0xffff,(unsigned char)(temp_v5 >> 0x16) & 3);
      temp_v21 = temp_v22 & 0xff;
      temp_v28 = (float)VectorUnsignedToFloat(temp_v22 & 0xffff,(unsigned char)(temp_v5 >> 0x16) & 3);
      temp_v22 = temp_v23 & 0xff;
      temp_v24 = (float)VectorUnsignedToFloat(temp_v23 & 0xffff,(unsigned char)(temp_v5 >> 0x16) & 3);
      temp_v29 = (float)(&DAT_00536d14)[temp_v10 * 4] +
               (184.8889f - temp_v26) * (float)(&DAT_00536d1c)[temp_v10 * 4];
      temp_v30 = (float)(&DAT_00536d18)[temp_v10 * 4] +
               (184.8889f - temp_v26) * (float)(&DAT_00536d20)[temp_v10 * 4];
      fStack_80 = (float)(&DAT_00536d14)[temp_v21 * 4] +
                  (temp_v20 - temp_v28) * (float)(&DAT_00536d1c)[temp_v21 * 4];
      temp_v26 = (float)(&DAT_00536d14)[temp_v22 * 4] +
               (temp_v31 - temp_v24) * (float)(&DAT_00536d1c)[temp_v22 * 4];
      temp_v31 = (float)(&DAT_00536d18)[temp_v22 * 4] +
               (temp_v31 - temp_v24) * (float)(&DAT_00536d20)[temp_v22 * 4];
      fStack_7c = (float)(&DAT_00536d18)[temp_v21 * 4] +
                  (temp_v20 - temp_v28) * (float)(&DAT_00536d20)[temp_v21 * 4];
      if (!romwright_subpiece_4_1_0(temp_v5 >> 0x1d,0)) {
        fStack_80 = -fStack_80;
      }
      fStack_a0 = temp_v31 * fStack_7c;
      fStack_90 = temp_v26 * fStack_7c;
      fStack_78 = temp_v30 * fStack_7c;
      fStack_7c = temp_v29 * fStack_7c;
      fStack_9c = temp_v29 * temp_v31 * fStack_80 - temp_v30 * temp_v26;
      fStack_88 = temp_v30 * temp_v26 * fStack_80 - temp_v29 * temp_v31;
      fStack_98 = temp_v29 * temp_v26 + temp_v30 * temp_v31 * fStack_80;
      fStack_8c = temp_v30 * temp_v31 + temp_v29 * temp_v26 * fStack_80;
    }
    else {
      temp_v31 = romwright_fabs_4(DAT_005f15dc * 0.7111111f);
      temp_v5 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v37 <= DAT_005f15e0 * 0.7111111f) << 0x1d);
      temp_v24 = romwright_fabs_4(DAT_005f15e0 * 0.7111111f);
      for (temp_v20 = romwright_fabs_4(g_localCameraPosition * 0.7111111f); (int)temp_v20 >= 0x47800000;
          temp_v20 = temp_v20 - 65536.0f) {
      }
      for (; (int)temp_v31 >= 0x47800000; temp_v31 = temp_v31 - 65536.0f) {
      }
      for (; (int)temp_v24 >= 0x47800000; temp_v24 = temp_v24 - 65536.0f) {
      }
      temp_v21 = VectorFloatToUnsigned(temp_v20,3);
      temp_v22 = VectorFloatToUnsigned(temp_v31,3);
      temp_v23 = VectorFloatToUnsigned(temp_v24,3);
      temp_v10 = temp_v21 & 0xff;
      temp_v29 = (float)VectorUnsignedToFloat(temp_v21 & 0xffff,(unsigned char)(temp_v5 >> 0x16) & 3);
      temp_v21 = temp_v22 & 0xff;
      temp_v28 = (float)VectorUnsignedToFloat(temp_v22 & 0xffff,(unsigned char)(temp_v5 >> 0x16) & 3);
      temp_v22 = temp_v23 & 0xff;
      temp_v26 = (float)VectorUnsignedToFloat(temp_v23 & 0xffff,(unsigned char)(temp_v5 >> 0x16) & 3);
      temp_v30 = (float)(&DAT_00536d14)[temp_v10 * 4] +
               (temp_v20 - temp_v29) * (float)(&DAT_00536d1c)[temp_v10 * 4];
      temp_v20 = (float)(&DAT_00536d18)[temp_v10 * 4] +
               (temp_v20 - temp_v29) * (float)(&DAT_00536d20)[temp_v10 * 4];
      if (g_localCameraPosition * 0.7111111f < temp_v37) {
        temp_v30 = -temp_v30;
      }
      fStack_80 = (float)(&DAT_00536d14)[temp_v21 * 4] +
                  (temp_v31 - temp_v28) * (float)(&DAT_00536d1c)[temp_v21 * 4];
      fStack_78 = (float)(&DAT_00536d18)[temp_v21 * 4] +
                  (temp_v31 - temp_v28) * (float)(&DAT_00536d20)[temp_v21 * 4];
      temp_v31 = (float)(&DAT_00536d14)[temp_v22 * 4] +
               (temp_v24 - temp_v26) * (float)(&DAT_00536d1c)[temp_v22 * 4];
      temp_v24 = (float)(&DAT_00536d18)[temp_v22 * 4] +
               (temp_v24 - temp_v26) * (float)(&DAT_00536d20)[temp_v22 * 4];
      if (DAT_005f15dc * 0.7111111f < temp_v37) {
        fStack_80 = -fStack_80;
      }
      if (!romwright_subpiece_4_1_0(temp_v5 >> 0x1d,0)) {
        temp_v31 = -temp_v31;
      }
      fStack_a0 = temp_v24 * fStack_78;
      fStack_90 = temp_v31 * fStack_78;
      fStack_7c = temp_v30 * fStack_78;
      fStack_78 = temp_v20 * fStack_78;
      fStack_9c = temp_v30 * temp_v24 * fStack_80 - temp_v20 * temp_v31;
      fStack_88 = temp_v20 * temp_v31 * fStack_80 - temp_v30 * temp_v24;
      fStack_98 = temp_v30 * temp_v31 + temp_v20 * temp_v24 * fStack_80;
      fStack_8c = temp_v20 * temp_v24 + temp_v30 * temp_v31 * fStack_80;
    }
    fStack_80 = -fStack_80;
    fStack_94 = 0.0f;
    uStack_84 = 0;
    uStack_74 = 0;
    fStack_b0 = temp_v37;
    fStack_ac = temp_v37;
    fStack_a8 = temp_v27;
    nn_math_ARMv6_VEC3TransformAsm_2AD44C(&fStack_b0,&fStack_a0);
    fStack_b0 = fStack_b0 * temp_v19;
    fStack_ac = fStack_ac * temp_v19;
    fStack_a8 = fStack_a8 * temp_v19;
    temp_v37 = 0.017453292f;
    temp_v19 = (float)g_lmapView[6] * 0.017453292f;
    FUN_001bc124();
    temp_v31 = 290.0f;
    temp_v25 = temp_v25 + temp_v19 * 290.0f;
    temp_v37 = (float)g_lmapView[6] * temp_v37;
    FUN_001bbf0c();
    temp_v18 = temp_v18 + DAT_005f1a04;
    temp_v32 = *(int *)(g_handleRegistry + 0x14);
    temp_v19 = (float)g_lmapScene[9];
    temp_v20 = (float)g_lmapScene[7];
    temp_v27 = (float)g_lmapScene[8];
    *(float *)(temp_v32 + 0xb8) = temp_v25;
    *(float *)(temp_v32 + 0xbc) = temp_v18;
    *(float *)(temp_v32 + 0xc0) = temp_v35 + temp_v37 * temp_v31;
    temp_v27 = temp_v27 + fStack_ac;
    if (g_gameState != (unsigned int *)0x27) {
      if ((g_gameState != (unsigned int *)0x20) || (DAT_005f1600 != (unsigned int *)0x1)) {
        temp_v18 = temp_v19 + fStack_a8 + DAT_005f1a14;
        temp_v27 = temp_v27 + DAT_005f1a10;
        *(float *)(temp_v32 + 0xac) = temp_v20 + fStack_b0 + DAT_005f1a0c;
        *(float *)(temp_v32 + 0xb0) = temp_v27;
        *(float *)(temp_v32 + 0xb4) = temp_v18;
        return;
      }
      temp_v18 = 160.0f;
    }
    else {
      if ((DAT_005f1600 != (unsigned int *)0x8 && DAT_005f1600 != (unsigned int *)0x9) &&
         ((DAT_005f1600 != (unsigned int *)0xa && DAT_005f1600 != (unsigned int *)0xb) &&
          DAT_005f1600 != (unsigned int *)0x6)) {
        temp_v18 = temp_v19 + fStack_a8 + DAT_005f1a14;
        temp_v27 = temp_v27 + DAT_005f1a10;
        *(float *)(temp_v32 + 0xac) = temp_v20 + fStack_b0 + DAT_005f1a0c;
        *(float *)(temp_v32 + 0xb0) = temp_v27;
        *(float *)(temp_v32 + 0xb4) = temp_v18;
        return;
      }
      temp_v18 = 120.0f;
    }
    temp_v27 = temp_v27 - temp_v18;
    temp_v18 = temp_v19 + fStack_a8 + DAT_005f1a14;
    temp_v27 = temp_v27 + DAT_005f1a10;
    *(float *)(temp_v32 + 0xac) = temp_v20 + fStack_b0 + DAT_005f1a0c;
    *(float *)(temp_v32 + 0xb0) = temp_v27;
    *(float *)(temp_v32 + 0xb4) = temp_v18;
    return;
  case 0x35:
    g_lmapScene[0x14] = (int)DAT_005f16bc;
    if (piVar18[1] != 0) {
      fStack_20 = temp_v35;
      fStack_1c = temp_v37;
      if (((piVar18[1] == 1) && (temp_v32 = piVar18[2], piVar18[2] = temp_v32 + 1, temp_v32 + 1 == 4)) &&
         (DAT_005f16e0 < 99)) {
        if (DAT_005f16e0 != 0x62) {
          if (DAT_005f16e0 == 0x5f) {
            temp_v32 = 0x100010e;
          }
          else {
            temp_v32 = DAT_005f16e0 + 0x10000d6;
          }
          sysPlayVoice(temp_v32);
        }
        else {
          sysPlayVoice(0x1000130);
        }
        DAT_005f1a50 = DAT_005f16e0;
        if (DAT_005f1a54 != '\0') {
          DAT_005f1a54 = '\0';
          DAT_005f1a50 = -1;
        }
      }
    }
    else {
      *(unsigned char *)(piVar18 + 0x1b) = 0;
      piVar18[0x15] = 0;
      piVar18[0x16] = 0x40a00000;
      piVar18[1] = 1;
      piVar18[2] = 0;
      fStack_20 = temp_v35;
      fStack_1c = temp_v37;
    }
    FUN_002e364c(g_lmapScene + 10);
    g_lmapScene[0x57] = 0;
    temp_v34 = CONCAT44(fStack_1c,fStack_20);
    goto code_r0x00327ee8;
  case 0x36:
    temp_v32 = g_lmapScene[1];
    if (temp_v32 != 0) {
      if (temp_v32 != 1) {
        fStack_20 = temp_v35;
        fStack_1c = temp_v37;
        if (temp_v32 == 2) {
          g_lmapScene[2] = g_lmapScene[2] + 1;
          temp_v32 = linkHolderCheckFirst(piVar18[0x6a]);
          if (temp_v32 != 0) {
            g_lmapScene[0x16] = 0x40a00000;
            mapSetSceneState(1);
            FUN_00303460(0);
          }
        }
      }
      else {
        temp_v32 = g_lmapScene[2];
        g_lmapScene[2] = temp_v32 + 1;
        fStack_20 = temp_v35;
        fStack_1c = temp_v37;
        if (temp_v32 + 1 == 5) {
          sysPlayVoice(0x10000c5);
        }
        if (g_lmapScene[2] == 7) {
          FUN_002d1f40(4,0x32,0);
        }
        temp_v32 = linkHolderCallFirst(g_lmapScene[0x6a]);
        if ((temp_v32 == 0x23) && (temp_v32 = linkHolderCheckFirst(g_lmapScene[0x6a]), temp_v32 != 0)) {
          FUN_00303460(0x17);
          piVar18 = g_lmapScene;
          g_lmapScene[0x15] = 0x24;
          piVar18[0x16] = 0;
          piVar18[2] = 0;
          piVar18[1] = piVar18[1] + 1;
        }
      }
    }
    else {
      g_lmapScene[0x15] = 0x23;
      piVar18[0x16] = 0;
      fStack_20 = temp_v35;
      fStack_1c = temp_v37;
      FUN_00303460(0x16);
      piVar18 = g_lmapScene;
      g_lmapScene[1] = g_lmapScene[1] + 1;
      piVar18[2] = 0;
    }
    goto code_r0x0024947c;
  case 0x37:
    if (g_lmapScene[1] != 0) {
      fStack_20 = temp_v35;
      fStack_1c = temp_v37;
      if (g_lmapScene[1] == 1) {
        temp_v25 = (float)g_lmapScene[10];
        temp_v19 = (float)g_lmapScene[7];
        temp_v27 = (float)g_lmapScene[0xc];
        temp_v18 = (float)g_lmapScene[9];
        temp_v6 = g_lmapScene[2] + 1;
        g_lmapScene[8] = (int)((float)g_lmapScene[8] + 10.0f);
        piVar18[2] = temp_v6;
        temp_v32 = temp_v6;
        if (temp_v6 >= 0x50) {
          temp_v32 = 2;
        }
        piVar18[7] = (int)(temp_v19 + (temp_v25 - temp_v19) * 0.1f);
        piVar18[9] = (int)(temp_v18 + (temp_v27 - temp_v18) * 0.1f);
        if (temp_v6 >= 0x50) {
          piVar18[1] = temp_v32;
        }
      }
    }
    else {
      g_lmapScene[0x15] = 6;
      piVar18[0x16] = 0x41700000;
      piVar18[1] = 1;
      piVar18[2] = 0;
      temp_v19 = DAT_005f16b8;
      temp_v18 = DAT_005f16b4;
      piVar18[10] = (int)DAT_005f16b0;
      piVar18[0xb] = (int)temp_v18;
      piVar18[0xc] = (int)temp_v19;
      temp_v32 = piVar18[7];
      fStack_20 = temp_v35;
      fStack_1c = temp_v37;
      mathPositionHeadingDegrees();
      piVar18 = g_lmapScene;
      g_lmapScene[0x14] = temp_v32;
      *(unsigned char *)(piVar18 + 0x1b) = 0;
      FUN_00303460(0x20);
      sysPlayVoice(0x1000145);
    }
code_r0x0024947c:
    FUN_002e364c(g_lmapScene + 10);
    temp_v34 = CONCAT44(fStack_1c,fStack_20);
code_r0x00327ee8:
    temp_v32 = 0;
    fStack_3c = (float)temp_v34;
    iStack_38 = (int)(temp_v34 >> 0x20);
    fStack_34 = (float)in_d9;
    fStack_30 = (float)((unsigned long long)in_d9 >> 0x20);
    fStack_2c = (float)in_d10;
    fStack_28 = (float)(in_d10 >> 0x20);
    fStack_24 = (float)in_d11;
    fStack_20 = (float)((unsigned long long)in_d11 >> 0x20);
    temp_v38 = in_d10 >> 0x20;
    DAT_005f162f = 0xff;
    DAT_005f1631 = 0xff;
    if (0 < DAT_006160dc) {
      temp_v38 = 0;
    }
    temp_v38 = temp_v38 << 0x20;
    if (0 < DAT_006160dc) {
      do {
        temp_v40 = temp_v38 >> 0x20;
        temp_v12 = 0;
        temp_v6 = temp_v32 * 0x7c;
        do {
          if (temp_v12 != 0) {
            if (temp_v12 != 1) {
              if (temp_v12 != 2) {
                if (temp_v12 == 3) {
                  temp_v34 = (unsigned long long)*(unsigned int *)(temp_v6 + 0x614dec);
                  FUN_003250ac((int)&uStack_4c + 4);
                }
              }
              else {
                temp_v34 = (unsigned long long)*(unsigned int *)(temp_v6 + 0x614dd4);
                FUN_003250ac((int)&uStack_4c + 4);
              }
            }
            else {
              temp_v34 = (unsigned long long)*(unsigned int *)(temp_v6 + 0x614dbc);
              FUN_003250ac((int)&uStack_4c + 4);
            }
          }
          else {
            temp_v34 = (unsigned long long)*(unsigned int *)(temp_v6 + 0x614da4);
            FUN_003250ac((int)&uStack_4c + 4);
          }
          temp_v18 = (float)temp_v34;
          mathVec3Dot();
          temp_v2 = DAT_005f162f;
          if (temp_v18 < (float)temp_v40) goto LAB_00328050;
          temp_v12 = temp_v12 + 1;
        } while (temp_v12 < 4);
        temp_v0 = (unsigned char)*(unsigned short *)(temp_v6 + 0x614d96);
        temp_v2 = temp_v0;
        if (*(short *)(temp_v6 + 0x614d94) != 0) {
          temp_v2 = DAT_005f162f;
          DAT_005f1631 = temp_v0;
        }
LAB_00328050:
        DAT_005f162f = temp_v2;
        temp_v32 = temp_v32 + 1;
      } while (temp_v32 < DAT_006160dc);
    }
    return;
  case 0x38:
    fStack_20 = temp_v35;
    fStack_1c = temp_v37;
    mapEaseSceneHeading();
    piVar10 = g_lmapScene;
    g_lmapScene[7] =
         (int)((float)g_lmapScene[7] +
              ((float)g_lmapScene[10] - (float)g_lmapScene[7]) * 0.33333334f);
    piVar10[8] = (int)((float)piVar10[8] + ((float)piVar10[0xb] - (float)piVar10[8]) * 0.16666667f);
    piVar10[9] = (int)((float)piVar10[9] + ((float)piVar10[0xc] - (float)piVar10[9]) * 0.33333334f);
    piVar18 = g_lmapScene;
    if ((piVar10[1] == 0) &&
       (temp_v32 = linkHolderCheckFirst(piVar10[0x6a]), piVar18 = g_lmapScene, temp_v32 != 0)) {
      *(unsigned char *)(g_lmapScene + 0x1b) = 0;
      piVar18[0x15] = 0;
      piVar18[0x16] = 0x40a00000;
      piVar18[1] = piVar18[1] + 1;
      piVar18[2] = 0;
      piVar18 = g_lmapScene;
    }
LAB_00246d70:
    FUN_002e364c(piVar18 + 10);
    temp_v34 = CONCAT44(fStack_1c,fStack_20);
    goto code_r0x00327ee8;
  case 0x39:
    temp_v32 = 0;
    fStack_20 = temp_v35;
    fStack_1c = temp_v37;
    mapEaseSceneHeading();
    __aeabi_memcpy4(temp_v43,0x531e98,0xa0);
    piVar18 = g_lmapScene;
    if (g_lmapScene[1] != 0) {
      if (g_lmapScene[1] != 1) {
        return;
      }
      temp_v32 = g_lmapScene[2];
      g_lmapScene[2] = temp_v32 + 1;
      if (temp_v32 + 1 == 1) {
        in_s0 = 0x3f400000;
        temp_v32 = *(int *)(piVar18[0x61] + 4);
        *(unsigned int *)(temp_v32 + 0x1fc) = 0x3f400000;
        FUN_003fe86c(temp_v32,0,2);
        *(unsigned int *)(temp_v32 + 4) = *(unsigned int *)(temp_v32 + 4) & 0xfffffffc;
        slotTargetApplyActiveValue(g_lmapScene[0x6a]);
        linkedTargetSetFloat(g_lmapScene[0x6a]);
      }
      if (g_lmapScene[2] >= 7) {
        DAT_005f17b0 = g_lmapScene[7];
        DAT_005f17b4 = g_lmapScene[8];
        DAT_005f17b8 = g_lmapScene[9];
        DAT_005f17bc = g_lmapScene[0x13];
        DAT_005f1a4f = 1;
      }
      controllerGetSourceValue(g_lmapScene[0x6a]);
      if (in_s0 < 0x41500000) {
        return;
      }
      FUN_003fe86c(*(unsigned int *)(g_lmapScene[0x61] + 4),0,2);
      slotTargetApplyActiveValue(g_lmapScene[0x6a]);
      return;
    }
    temp_v6 = g_lmapScene[2] + 1;
    g_lmapScene[2] = temp_v6;
joined_r0x002495a4:
    if (temp_v6 >= 5) {
      piVar18[0x15] = 4;
      piVar18[0x16] = temp_v32;
      temp_v32 = *(int *)(piVar18[0x61] + 4);
      *(unsigned int *)(temp_v32 + 4) = *(unsigned int *)(temp_v32 + 4) & 0xfffffffc;
      controllerSetDestination(temp_v32,piVar18 + 7);
      controllerSetRotationEulerDegrees(temp_v32);
      *(unsigned int *)(temp_v32 + 0x1fc) = 0x3f400000;
      FUN_003fd7c0(temp_v32,0,2);
      FUN_003fd924(temp_v32,0,2);
      piVar18 = g_lmapScene;
      g_lmapScene[1] = g_lmapScene[1] + 1;
      piVar18[2] = 0;
      return;
    }
  }
  return;
}

} /* extern "C" */
