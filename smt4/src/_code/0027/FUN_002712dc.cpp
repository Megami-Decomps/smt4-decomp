/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002712dc` (_code @ 0x2712dc, 0x250 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/W6_W6Match3_ForwardEffect.h"

extern "C" {

int FUN_0021b0f0(void);
int FUN_002c5be8(void);
int entryOwnerSetPosition(...);
int VectorFloatToUnsigned(...);
int VectorUnsignedToFloat(...);
int nn_math_ARMv6_VEC3TransformAsm_2AD44C(...);

int FUN_001a9008(void);
int FUN_001f87d4(void);
int FUN_00208504(void);
int FUN_0020ffe8(...);
int FUN_0021b2ec(void);
int FUN_0021df18(void);
int mapDestroyOverlayModel(...);
int partyApplyStatusMask(...);
int partyApplyPercentHealthDamage(...);
float mathSnapHeading8(float angle);
int FUN_0027f94c(...);
int FUN_00282228(...);
int calcHeadingRoundedToCardinalDirection(void);
int FUN_002c29d8(...);
int mathVec3Dot(void);
int FUN_002d1e4c(void);
int mapDestroyPrimaryModel(void);
int placementUpdateSceneState(void);
int mapIfMarkModelDestroy(void);
int mapModelRequest(void);

int FUN_0019db68(void);
int mapDestroyInterfaceModel(void);
int mapIfReleaseSlot1(void);
int mapDestroySecondaryModel(...);
int mapIfReleaseSlot2(void);
int FUN_00248114(void);
int mapIfReleaseSlot3(void);
int FUN_0027d7b0(...);
int slotSetRequest(...);
int FUN_002bf810(...);
int lmapFindNearestMatchingTargetPoint(...);

int FUN_001b4478(void);
int FUN_001fa760(void);
int mapIfActivateRecord(...);
int FUN_0025247c(...);
int mapInterfaceSetStateTwo(void);
int mapIfSetMode1(void);
int FUN_0027fae4(void);
int FUN_0027fc14(...);
int mathPositionHeadingDegrees(void);
int buttonHelpSetPreset(...);
int mapPartDestroy(void);
int mapIfReleaseSlot0(void);

int FUN_001f9188(void);
int FUN_0025bc80(void);
int FUN_0027fca0(...);
int mapEaseSceneHeading(void);
int FUN_002879dc(...);
int mapEnemyAdvancePursuit(void);
int rt_memcpy_w(...);

int CONCAT44(...);
float mathSnapHeading16(float angle);
float calcHeadingRoundedTo32Directions(float angle);
int FUN_001e2be4(void);
int FUN_002562e4(...);
int partyApplyNonlethalAilmentDamage(...);
int FUN_0027f48c(...);
int FUN_0027f848(void);
int FUN_0027f958(...);
int lmapSetSceneId(...);
int mapSelectContainingRegions(void);
int FUN_002804ec(...);
int FUN_00281e34(void);
int FUN_00282390(void);
int FUN_0028250c(void);
int mathDistanceBetweenPoints(void);
int mathGetShortestAngleDelta(void);
int FUN_00291e40(...);
int gameCounterAddSaturating(...);
int FUN_003a66c4(void);
int FUN_003a6988(void);
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
extern unsigned char DAT_00404504; /* 0x404504 */
extern unsigned char DAT_004045a4; /* 0x4045a4 */
extern unsigned char DAT_00404644; /* 0x404644 */
extern unsigned char DAT_004046e4; /* 0x4046e4 */
extern unsigned int DAT_00407ed0; /* 0x407ed0 */
extern unsigned int DAT_00407ed4; /* 0x407ed4 */
extern unsigned int DAT_00407ed8; /* 0x407ed8 */
extern unsigned int DAT_00407edc; /* 0x407edc */
extern int *DAT_004474f4; /* 0x4474f4 */
extern int g_deferredMapModels; /* 0x447e58 */
extern int *g_lmapScene; /* 0x447e88 */
extern int iRam00447e8c; /* 0x447e8c */
extern float DAT_0049f8f8; /* 0x49f8f8 */
extern float DAT_0049f8fc; /* 0x49f8fc */
extern float DAT_0049f900; /* 0x49f900 */
extern unsigned int *g_gameState; /* 0x49f91c */
extern unsigned int *DAT_0049f920; /* 0x49f920 */
extern signed char DAT_0049f934; /* 0x49f934 */
extern int DAT_0049f938; /* 0x49f938 */
extern signed char DAT_0049f93d; /* 0x49f93d */
extern unsigned char DAT_0049f94a; /* 0x49f94a */
extern unsigned char DAT_0049f94b; /* 0x49f94b */
extern unsigned char DAT_0049f94d; /* 0x49f94d */
extern unsigned char DAT_0049f94f; /* 0x49f94f */
extern int DAT_0049f958; /* 0x49f958 */
extern int DAT_0049f968; /* 0x49f968 */
extern unsigned int DAT_0049f990; /* 0x49f990 */
extern unsigned int DAT_0049f994; /* 0x49f994 */
extern unsigned int DAT_0049f998; /* 0x49f998 */
extern unsigned int DAT_0049f99c; /* 0x49f99c */
extern int DAT_0049f9a0; /* 0x49f9a0 */
extern float DAT_0049f9a4; /* 0x49f9a4 */
extern int DAT_0049f9a8; /* 0x49f9a8 */
extern float DAT_0049f9ac; /* 0x49f9ac */
extern float DAT_0049f9bc; /* 0x49f9bc */
extern int DAT_0049f9d0; /* 0x49f9d0 */
extern int DAT_0049f9e0; /* 0x49f9e0 */
extern int DAT_0049f9e4; /* 0x49f9e4 */
extern int DAT_0049f9e8; /* 0x49f9e8 */
extern int DAT_0049f9ec; /* 0x49f9ec */
extern int DAT_0049f9f0; /* 0x49f9f0 */
extern int DAT_0049f9f4; /* 0x49f9f4 */
extern int DAT_0049f9f8; /* 0x49f9f8 */
extern int DAT_0049f9fc; /* 0x49f9fc */
extern int DAT_0049fa00; /* 0x49fa00 */
extern int DAT_0049fa04; /* 0x49fa04 */
extern int DAT_0049fa08; /* 0x49fa08 */
extern int DAT_0049fa0c; /* 0x49fa0c */
extern int DAT_0049fa10; /* 0x49fa10 */
extern signed char DAT_0049fa60; /* 0x49fa60 */
extern signed char DAT_0049fa98; /* 0x49fa98 */
extern int DAT_0049fa9c; /* 0x49fa9c */
extern int DAT_0049faa0; /* 0x49faa0 */
extern int DAT_0049faa4; /* 0x49faa4 */
extern int DAT_0049faa8; /* 0x49faa8 */
extern short DAT_0049faac; /* 0x49faac */
extern unsigned short DAT_0049faae; /* 0x49faae */
extern short DAT_0049fab0; /* 0x49fab0 */
extern signed char DAT_0049fabc; /* 0x49fabc */
extern unsigned int DAT_0049fac0; /* 0x49fac0 */
extern unsigned int DAT_0049fb34; /* 0x49fb34 */
extern unsigned char DAT_0049fb46; /* 0x49fb46 */
extern signed char DAT_0049fb68; /* 0x49fb68 */
extern signed char DAT_0049fc64; /* 0x49fc64 */
extern int DAT_0049fc84; /* 0x49fc84 */
extern signed char DAT_0049fce8; /* 0x49fce8 */
extern int DAT_0049fd04; /* 0x49fd04 */
extern int DAT_004c2420; /* 0x4c2420 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
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
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SUBPIECE_4_2_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_2_0_DEFINED
#define romwright_subpiece_4_2_0(value, offset) ((unsigned short)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_0019db68. */
/* Supplied declaration required: FUN_001a9008. */
/* Supplied declaration required: FUN_001b4478. */
/* Supplied declaration required: FUN_001e2be4. */
/* Supplied declaration required: FUN_001f87d4. */
/* Supplied declaration required: FUN_001f9188. */
/* Supplied declaration required: FUN_001fa760. */
/* Supplied declaration required: FUN_00208504. */
/* Supplied declaration required: mapDestroyInterfaceModel. */
/* Supplied declaration required: FUN_0020ffe8. */
/* Supplied declaration required: FUN_0021b0f0. */
/* Supplied declaration required: FUN_0021b2ec. */
/* Supplied declaration required: FUN_0021df18. */
/* Supplied declaration required: mapIfReleaseSlot1. */
/* Supplied declaration required: mapDestroySecondaryModel. */
/* Supplied declaration required: mapIfReleaseSlot2. */
/* Supplied declaration required: FUN_00248114. */
/* Supplied declaration required: mapDestroyOverlayModel. */
/* Supplied declaration required: mapIfReleaseSlot3. */
/* Supplied declaration required: mapIfActivateRecord. */
/* Supplied declaration required: FUN_0025247c. */
/* Supplied declaration required: FUN_002562e4. */
/* Supplied declaration required: partyApplyNonlethalAilmentDamage. */
extern int inputIsQuestCancelPressed(void);
extern unsigned int FUN_00256540(void);
extern int unitGroupHasFlag(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0025bc80. */
extern int mapIfHasSelection(void);
/* Supplied declaration required: mapInterfaceSetStateTwo. */
extern int inputIsQuestMenuPressed(void);
/* Supplied declaration required: mapIfSetMode1. */
extern int dataTableGetRecord23(void);
/* Supplied declaration required: FUN_0027d7b0. */
extern int FUN_0027ee9c(void);
/* Supplied declaration required: partyApplyStatusMask. */
/* Supplied declaration required: partyApplyPercentHealthDamage. */
/* Supplied declaration required: FUN_0027f48c. */
/* Supplied declaration required: FUN_0027f848. */
/* Supplied declaration required: FUN_0027f94c. */
/* Supplied declaration required: FUN_0027f958. */
/* Supplied declaration required: lmapSetSceneId. */
/* Supplied declaration required: FUN_0027fae4. */
/* Supplied declaration required: FUN_0027fc14. */
/* Supplied declaration required: FUN_0027fca0. */
/* Supplied declaration required: mapSelectContainingRegions. */
/* Supplied declaration required: FUN_002804ec. */
/* Supplied declaration required: mapEaseSceneHeading. */
/* Supplied declaration required: FUN_00281e34. */
extern int vectorPairTransitionStep(void);
/* Supplied declaration required: FUN_00282228. */
/* Supplied declaration required: calcHeadingRoundedToCardinalDirection. */
/* Supplied declaration required: FUN_00282390. */
/* Supplied declaration required: FUN_0028250c. */
/* Supplied declaration required: FUN_002879dc. */
/* Supplied declaration required: mathDistanceBetweenPoints. */
/* Supplied declaration required: mathGetShortestAngleDelta. */
/* Supplied declaration required: mathPositionHeadingDegrees. */
extern int FUN_002896bc(void);
/* Supplied declaration required: FUN_00291e40. */
extern int randBetween(unsigned int, unsigned int);
/* Supplied declaration required: gameCounterAddSaturating. */
/* Supplied declaration required: slotSetRequest. */
/* Supplied declaration required: buttonHelpSetPreset. */
extern int padIsButtonRepeat(unsigned int);
/* Supplied declaration required: FUN_002bf810. */
extern int padIsButtonPressed(unsigned int);
extern int gameFlagIsSet(unsigned int);
extern int gameGetMapBlock(void);
/* Supplied declaration required: FUN_002c29d8. */
/* Supplied declaration required: FUN_002c5be8. */
extern unsigned int asdModelGetStatic38(void);
/* Supplied declaration required: mathVec3Dot. */
/* Supplied declaration required: lmapFindNearestMatchingTargetPoint. */
/* Supplied declaration required: FUN_002d1e4c. */
/* Supplied declaration required: mapEnemyAdvancePursuit. */
/* Supplied declaration required: mapPartDestroy. */
/* Supplied declaration required: mapIfReleaseSlot0. */
/* Supplied declaration required: entryOwnerSetPosition. */
/* Supplied declaration required: FUN_003a66c4. */
/* Supplied declaration required: FUN_003a6988. */
/* Supplied declaration required: mapDestroyPrimaryModel. */
/* Supplied declaration required: placementUpdateSceneState. */
/* Supplied declaration required: mapIfMarkModelDestroy. */
/* Supplied declaration required: mapModelRequest. */
/* Supplied declaration required: nn_math_ARMv6_VEC3TransformAsm_2AD44C. */
/* Supplied declaration required: rt_memcpy_w. */


/* WARNING: Removing unreachable block (ram,0x00308944) */
/* WARNING: Removing unreachable block (ram,0x0027fc80) */
/* WARNING: Removing unreachable block (ram,0x0027fac8) */
/* WARNING: Removing unreachable block (ram,0x0027facc) */
/* WARNING: Removing unreachable block (ram,0x0027fad0) */
/* WARNING: Removing unreachable block (ram,0x0027fc84) */
/* WARNING: Removing unreachable block (ram,0x00308964) */
/* WARNING: Type propagation algorithm not settling */

void FUN_002712dc(void)

{
/* irregular: 24 goto(s); irregular input(s): in_d10, in_d11, in_d12, in_d13, in_d8, in_d9, in_fpscr, in_s0; 101 native warning(s); review required */
  float *pfVar1;
  char temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  unsigned int *puVar5;
  unsigned char temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int *piVar9;
  float *pfVar10;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  unsigned int temp_v12;
  int temp_v13;
  float unaff_r4;
  float unaff_r5;
  unsigned char temp_v14;
  unsigned char temp_v15;
  unsigned char temp_v16;
  unsigned int in_fpscr;
  int in_s0;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  int *piVar22;
  int *piVar23;
  float temp_v20;
  float temp_v21;
  float temp_v22;
  unsigned int temp_v23;
  unsigned int temp_v24;
  unsigned int temp_v25;
  float temp_v26;
  float temp_v27;
  float temp_v28;
  float temp_v29;
  unsigned long long in_d8;
  unsigned long long temp_v30;
  int temp_v31;
  unsigned long long temp_v32;
  unsigned long long in_d9;
  unsigned long long temp_v33;
  float temp_v34;
  float temp_v35;
  unsigned long long in_d10;
  float temp_v36;
  unsigned long long temp_v37;
  unsigned long long in_d11;
  unsigned long long temp_v38;
  unsigned long long in_d12;
  unsigned long long temp_v39;
  unsigned long long in_d13;
  float afStack_2e8 [40];
  float afStack_248 [37];
  int iStack_1b4;
  float fStack_1b0;
  unsigned int uStack_1ac;
  float fStack_1a8;
  float afStack_1a4 [3];
  unsigned int uStack_198;
  unsigned int temp_v40 [35];
  float afStack_108 [28];
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  unsigned long long uStack_54;
  unsigned long long uStack_4c;
  long long uStack_44;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  temp_v34 = fStack_34;
  temp_v19 = fStack_38;
  temp_v17 = fStack_3c;
  temp_v18 = DAT_0049f9ac;
  piVar22 = g_lmapScene;
  fStack_28 = (float)in_d8;
  temp_v35 = fStack_28;
  fStack_24 = (float)((unsigned long long)in_d8 >> 0x20);
  temp_v20 = fStack_24;
  fStack_20 = (float)in_d9;
  fStack_1c = (float)((unsigned long long)in_d9 >> 0x20);
  fStack_3c = (float)in_d11;
  fStack_38 = (float)((unsigned long long)in_d11 >> 0x20);
  fStack_34 = (float)in_d12;
  fStack_30 = (float)((unsigned long long)in_d12 >> 0x20);
  fStack_2c = (float)in_d13;
  fStack_28 = (float)((unsigned long long)in_d13 >> 0x20);
  temp_v36 = fStack_28;
  fStack_28 = (float)in_d10;
  temp_v27 = fStack_28;
  fStack_24 = (float)((unsigned long long)in_d10 >> 0x20);
  temp_v29 = fStack_24;
  switch(*g_lmapScene) {
  case 1:
    fStack_28 = temp_v36;
    temp_v31 = gameGetMapBlock();
    temp_v35 = 20.0f;
    temp_v15 = 0;
    temp_v36 = 0.0f;
    temp_v5 = 0;
    temp_v17 = temp_v35;
    temp_v6 = FUN_00256540();
    temp_v34 = 2.0f;
    temp_v19 = (float)VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v19 = temp_v19 * 0.01f;
    temp_v16 = SBORROW4((int)temp_v19,0x40000000);
    temp_v7 = (int)temp_v19 - 0x40000000;
    temp_v14 = temp_v19 == 2.0f;
    temp_v18 = temp_v34;
    if ((int)temp_v19 < 0x40000001) {
      temp_v16 = SBORROW4((int)temp_v19,0x3f800000);
      temp_v7 = (int)temp_v19 - 0x3f800000;
      temp_v14 = temp_v19 == 1.0f;
      temp_v18 = temp_v19;
    }
    if ((!temp_v14 && temp_v7 < 0 == temp_v16) && (temp_v35 = temp_v35 * temp_v18, (int)temp_v35 >= 0x420c0001)) {
      temp_v35 = 35.0f;
    }
    if (DAT_0049fd04 != 0) {
      temp_v35 = temp_v35 * 2.5f;
    }
    temp_v0 = DAT_0049fc64;
    if (DAT_0049fc64 == '\0') {
      temp_v0 = DAT_0049f934;
    }
    if ((DAT_0049fc64 == '\0' && temp_v0 == '\0') && (DAT_0049f938 < 1)) {
      if (0 < *(int *)(temp_v31 + 0xd98)) {
        *(int *)(temp_v31 + 0xd98) = *(int *)(temp_v31 + 0xd98) - 1;
      }
      temp_v30 = *(unsigned long long *)(g_lmapScene + 10);
      temp_v32 = CONCAT44(temp_v35,g_lmapScene[0xc]);
      FUN_0027f958(&fStack_64,&fStack_68,0);
      piVar22 = g_lmapScene;
      *(unsigned char *)(g_lmapScene + 0x1b) = 0;
      if (DAT_0049fc84 == 0 || DAT_0049fc84 == 3) {
        temp_v7 = piVar22[0x62];
        if (temp_v7 >= 1) {
          piVar22[0x62] = temp_v7 - 1;
        }
        else {
          temp_v7 = inputIsQuestCancelPressed();
          puVar5 = (unsigned int *)0x0;
          if (temp_v7 != 0) {
            puVar5 = g_gameState;
          }
          if ((temp_v7 != 0 && puVar5 != (unsigned int *)0x24) && (DAT_004474f4[0x2b] == 0)) {
            *(unsigned int *)(temp_v31 + 0xd94) = 0;
            lmapSetSceneId(3);
            gameCounterAddSaturating(0x14,1);
            FUN_002804ec(g_lmapScene + 10);
            mapSelectContainingRegions();
            return;
          }
        }
      }
      if (DAT_0049fc84 == 1) {
        if (DAT_0049fce8 != '\0') {
          temp_v7 = padIsButtonPressed(1);
          if (temp_v7 != 0) {
            DAT_0049fce8 = '\0';
          }
          temp_v7 = padIsButtonRepeat(5);
          temp_v18 = 50.0f;
          if (temp_v7 != 0) {
            g_lmapScene[0xb] = (int)((float)g_lmapScene[0xb] + 50.0f);
          }
          temp_v7 = padIsButtonRepeat(6);
          if (temp_v7 != 0) {
            g_lmapScene[0xb] = (int)((float)g_lmapScene[0xb] - temp_v18);
          }
        }
        else {
          temp_v7 = padIsButtonPressed(1);
          if (temp_v7 != 0) {
            DAT_0049fce8 = '\x01';
          }
        }
      }
      if (((((unsigned int)fStack_64 < 0xbf000000) && ((int)fStack_64 < 0x3f000000)) &&
          ((unsigned int)fStack_68 < 0xbf000000)) && ((int)fStack_68 < 0x3f000000)) {
        temp_v15 = 1;
      }
      temp_v39 = CONCAT44(0x447a0000,temp_v17);
      if (DAT_004474f4[0x2b] != 0) {
        temp_v15 = 1;
      }
      if ((DAT_0049f93d != '\0') && (DAT_0049fce8 == '\0')) {
        if ((!temp_v15) ||
           ((temp_v12 = g_lmapScene[0x1a], 0xbdcccccc < temp_v12 ||
            (temp_v5 = (unsigned int)((int)temp_v12 < 0x3dcccccd), (int)temp_v12 >= 0x3dcccccd)))) {
          g_lmapScene[0xb] = (int)(((float)g_lmapScene[0xb] - temp_v34) - (float)g_lmapScene[0x1a])
          ;
        }
        if (0xc69c4000 < (unsigned int)g_lmapScene[0xb]) {
          g_lmapScene[0xb] = 0x447a0000;
        }
      }
      piVar22 = g_lmapScene;
      temp_v18 = 0.5f;
      g_lmapScene[0x15] = 0;
      piVar22[0x16] = 0x40a00000;
      if (temp_v15) {
        *(unsigned char *)(piVar22 + 4) = 0;
        if ((*(int *)(temp_v31 + 0xd98) == 0) &&
           (temp_v7 = *(int *)(temp_v31 + 0xd94) + 1, *(int *)(temp_v31 + 0xd94) = temp_v7, temp_v7 >= 901))
        {
          FUN_001e2be4();
          *(unsigned int *)(temp_v31 + 0xd98) = 0xe10;
          *(unsigned int *)(temp_v31 + 0xd94) = 0;
        }
        temp_v7 = *(int *)(temp_v31 + 0xdb8);
        temp_v13 = temp_v7 + 1;
        *(int *)(temp_v31 + 0xdb8) = temp_v13;
        if (temp_v13 >= 0x1f) {
          *(int *)(temp_v31 + 0xdb8) = temp_v7 - 0x1d;
          gameCounterAddSaturating(0x1d,1);
        }
      }
      else {
        *(unsigned int *)(temp_v31 + 0xd94) = 0;
        FUN_00281e34();
        temp_v17 = 1.0f;
        fStack_64 = fStack_64 * 57.32484f;
        if ((char)g_lmapScene[4] != '\0') {
          temp_v35 = (float)g_lmapScene[5];
          mathGetShortestAngleDelta();
          temp_v19 = temp_v35;
          if (temp_v35 < temp_v36) {
            temp_v19 = -temp_v35;
          }
          if ((int)temp_v19 < 0x42700001) {
            temp_v27 = temp_v19 * temp_v18;
            if ((int)(temp_v19 * temp_v18) < 0x3f800000) {
              temp_v27 = temp_v17;
            }
            if (temp_v27 < temp_v19) {
              if (temp_v36 <= temp_v35) {
                fStack_64 = (float)g_lmapScene[5] + temp_v27;
              }
              else {
                fStack_64 = (float)g_lmapScene[5] - temp_v27;
              }
            }
          }
          g_lmapScene[5] = (int)fStack_64;
          fStack_64 = (float)g_lmapScene[5];
        }
        *(unsigned char *)(g_lmapScene + 4) = 1;
        temp_v37 = CONCAT44(0x43b40000,temp_v34);
        temp_v19 = fStack_64 - (float)DAT_004474f4[6];
        if (temp_v19 < temp_v36) {
          temp_v19 = temp_v19 + 360.0f;
        }
        if ((int)temp_v19 >= 0x43b40001) {
          temp_v19 = temp_v19 - 360.0f;
        }
        if (DAT_004474f4[0x31] != 3) {
          temp_v19 = calcHeadingRoundedTo32Directions(temp_v19);
        }
        else {
          temp_v19 = mathSnapHeading16(temp_v19);
        }
        temp_v19 = -temp_v19;
        temp_v35 = (float)g_lmapScene[0x14];
        mathGetShortestAngleDelta();
        temp_v34 = temp_v35;
        if (temp_v35 < temp_v36) {
          temp_v34 = -temp_v35;
        }
        if ((int)temp_v34 < 0x41f00001) {
          temp_v27 = temp_v34 * temp_v18;
          if ((int)(temp_v34 * temp_v18) < 0x3f800000) {
            temp_v27 = temp_v17;
          }
          if (temp_v27 < temp_v34) {
            if (temp_v36 <= temp_v35) {
              temp_v19 = (float)g_lmapScene[0x14] + temp_v27;
            }
            else {
              temp_v19 = (float)g_lmapScene[0x14] - temp_v27;
            }
          }
        }
        g_lmapScene[0x14] = (int)temp_v19;
        piVar22 = g_lmapScene;
        temp_v17 = (float)g_lmapScene[0x14];
        temp_v19 = 0.017453292f;
        temp_v34 = (float)((unsigned long long)temp_v37 >> 0x20);
        if (temp_v17 < temp_v36) {
          temp_v17 = temp_v17 + temp_v34;
          g_lmapScene[0x14] = (int)temp_v17;
        }
        if ((int)temp_v17 >= 0x43b40001) {
          temp_v17 = temp_v17 - temp_v34;
          piVar22[0x14] = (int)temp_v17;
        }
        temp_v17 = temp_v17 * 0.017453292f;
        *(unsigned char *)(piVar22 + 0x1b) = 1;
        piVar22[0x1f] = (int)((unsigned long long)temp_v32 >> 0x20);
        FUN_0028250c();
        piVar22 = g_lmapScene;
        temp_v34 = (float)temp_v37;
        g_lmapScene[10] =
             (int)((float)g_lmapScene[10] + temp_v17 * (float)((unsigned long long)temp_v32 >> 0x20));
        temp_v19 = (float)piVar22[0x14] * temp_v19;
        FUN_00282390();
        piVar22 = g_lmapScene;
        g_lmapScene[0xc] =
             (int)((float)g_lmapScene[0xc] + temp_v19 * (float)((unsigned long long)temp_v32 >> 0x20));
        piVar22[0x15] = 2;
      }
      temp_v7 = (int)temp_v32;
      temp_v12 = 0;
      FUN_0027f848();
      piVar22 = g_lmapScene;
      g_lmapScene[10] = (int)fStack_60;
      piVar22[0xb] = (int)fStack_5c;
      piVar22[0xc] = (int)fStack_58;
      piVar22[0xd] = (int)temp_v30;
      piVar22[0xe] = (int)((unsigned long long)temp_v30 >> 0x20);
      piVar22[0xf] = temp_v7;
      if (((DAT_0049fce8 == '\0') && (DAT_0049f93d != '\0')) && ((temp_v5 & ~temp_v12) == 0)) {
        piVar9 = piVar22 + 10;
        FUN_0027f48c(piVar9,piVar22 + 0xd);
        piVar22 = g_lmapScene;
        piVar23 = (int *)0x0;
        if (piVar9 != (int *)0x0) {
          piVar23 = g_lmapScene;
        }
        if (piVar9 != (int *)0x0) {
          piVar23[0x1a] = (int)temp_v36;
        }
        else {
          temp_v34 = (float)g_lmapScene[0x1a] + temp_v34;
          g_lmapScene[0x1a] = (int)temp_v34;
          if ((int)temp_v34 < 0x41a00001) {
            temp_v39 = CONCAT44((int)((unsigned long long)temp_v39 >> 0x20),temp_v34);
          }
          piVar22[0x1a] = (int)temp_v39;
        }
      }
      temp_v13 = (int)((unsigned long long)temp_v39 >> 0x20);
      if (((g_gameState != (unsigned int *)0x24) && (temp_v4 = unitGroupHasFlag(2,5), temp_v4 != 0)) &&
         (!temp_v15)) {
        temp_v17 = (float)temp_v30;
        mathDistanceBetweenPoints();
        temp_v19 = (float)g_lmapScene[0x58];
        g_lmapScene[0x58] = (int)(temp_v19 - temp_v17);
        if (temp_v19 - temp_v17 < temp_v36) {
          partyApplyNonlethalAilmentDamage(2,5);
          g_lmapScene[0x58] = temp_v13;
          FUN_002562e4(0xf,0x50);
          temp_v13 = FUN_00291e40(0x1000186);
          piVar22 = g_lmapScene;
          g_lmapScene[99] = temp_v13;
          piVar22[100] = 0x14;
        }
      }
      temp_v19 = (float)temp_v30;
      mathDistanceBetweenPoints();
      temp_v17 = *(float *)(temp_v31 + 0xdb4) + temp_v19;
      *(float *)(temp_v31 + 0xdb4) = temp_v17;
      if ((int)temp_v17 >= 0x47c35001) {
        *(float *)(temp_v31 + 0xdb4) = temp_v17 - 100000.0f;
        gameCounterAddSaturating(0x12,1);
      }
      temp_v13 = 0x44bb8000;
      temp_v17 = *(float *)(temp_v31 + 0xdbc) + temp_v19;
      *(float *)(temp_v31 + 0xdbc) = temp_v17;
      if ((int)temp_v17 >= 0x44bb8001) {
        *(float *)(temp_v31 + 0xdbc) = temp_v17 - 1500.0f;
        FUN_003a66c4();
        FUN_003a6988();
      }
      temp_v19 = *(float *)(temp_v31 + 0xdc4) + temp_v19;
      *(float *)(temp_v31 + 0xdc4) = temp_v19;
      temp_v14 = *(int *)(temp_v31 + 0xdc0) != 0;
      if (temp_v14) {
        temp_v17 = 30000.0f;
        temp_v4 = (int)temp_v19 - 0x46ea6000;
      }
      else {
        *(float *)(temp_v31 + 0xdc4) = temp_v36;
        temp_v4 = 0;
        temp_v17 = 0.0f;
      }
      if ((temp_v14 && temp_v19 != temp_v17) && temp_v4 < 0 == (temp_v14 && SBORROW4((int)temp_v19,(int)temp_v17))
         ) {
        *(float *)(temp_v31 + 0xdc4) = temp_v36;
        *(unsigned int *)(temp_v31 + 0xdc0) = 0;
        *(unsigned char *)(temp_v31 + 0xdc8) = 1;
      }
      piVar22 = g_lmapScene + 10;
      FUN_002804ec();
      temp_v17 = (float)temp_v30;
      if (((unsigned int)piVar22 & 2) != 0) {
        if (!temp_v15) {
          mathDistanceBetweenPoints();
          piVar23 = g_lmapScene;
          temp_v19 = (float)g_lmapScene[0x57];
          g_lmapScene[0x57] = (int)(temp_v19 - temp_v17);
          if (temp_v19 - temp_v17 < temp_v36) {
            puVar5 = g_gameState;
            if (g_gameState == (unsigned int *)0x5) {
              puVar5 = DAT_0049f920;
            }
            if (!(g_gameState == (unsigned int *)0x5 && puVar5 == (unsigned int *)0x9)) {
              piVar23[0x57] = 0x43fa0000;
            }
            else {
              piVar23[0x57] = temp_v13;
            }
            lmapSetSceneId(0x20);
          }
        }
        DAT_0049f94f = 4;
      }
      else {
        if (temp_v36 < (float)g_lmapScene[0x57]) {
          mathDistanceBetweenPoints();
          g_lmapScene[0x57] = (int)((float)g_lmapScene[0x57] - temp_v17);
        }
        temp_v17 = (float)g_lmapScene[0x57];
        if ((float)g_lmapScene[0x57] <= temp_v36) {
          temp_v17 = temp_v36;
        }
        g_lmapScene[0x57] = (int)temp_v17;
        DAT_0049f94f = 0xff;
      }
      if (((unsigned int)piVar22 & 4) != 0) {
        lmapSetSceneId(0x1f);
        gameCounterAddSaturating(0x16,1);
      }
      mapSelectContainingRegions();
      if (((unsigned int)piVar22 & 0x800) != 0) {
        mapEnemyAdvancePursuit();
      }
      if (((unsigned int)piVar22 & 0x2000) != 0) {
        FUN_001f9188();
      }
      piVar22 = g_lmapScene;
      if (temp_v15) {
        g_lmapScene[0x1f] = (int)temp_v36;
        piVar22[7] = (int)((float)piVar22[7] + ((float)piVar22[10] - (float)piVar22[7]) * temp_v18);
        piVar22[8] = (int)((float)piVar22[8] +
                          ((float)piVar22[0xb] - (float)piVar22[8]) * 0.33333334f);
        piVar22[9] = (int)((float)piVar22[9] + ((float)piVar22[0xc] - (float)piVar22[9]) * temp_v18);
      }
      else {
        g_lmapScene[7] =
             (int)((float)g_lmapScene[7] +
                  ((float)g_lmapScene[10] - (float)g_lmapScene[7]) * 0.33333334f);
        piVar22[8] = (int)((float)piVar22[8] +
                          ((float)piVar22[0xb] - (float)piVar22[8]) * 0.33333334f);
        piVar22[9] = (int)((float)piVar22[9] +
                          ((float)piVar22[0xc] - (float)piVar22[9]) * 0.33333334f);
      }
      mapEaseSceneHeading();
      piVar22 = g_lmapScene;
      piVar9 = g_lmapScene + 8;
      temp_v31 = g_lmapScene[9];
      piVar23 = g_lmapScene + 0xd;
      g_lmapScene[0x10] = g_lmapScene[7];
      piVar22[0x11] = *piVar9;
      piVar22[0x12] = temp_v31;
      *piVar23 = (int)temp_v30;
      piVar22[0xe] = (int)((unsigned long long)temp_v30 >> 0x20);
      piVar22[0xf] = temp_v7;
      return;
    }
    *(unsigned int *)(temp_v31 + 0xd94) = 0;
    FUN_002804ec(g_lmapScene + 10);
    mapSelectContainingRegions();
    return;
  case 2:
    fStack_28 = temp_v35;
    fStack_24 = temp_v20;
    mapEaseSceneHeading();
    piVar22 = g_lmapScene;
    g_lmapScene[7] =
         (int)((float)g_lmapScene[7] +
              ((float)g_lmapScene[10] - (float)g_lmapScene[7]) * 0.33333334f);
    piVar22[8] = (int)((float)piVar22[8] + ((float)piVar22[0xb] - (float)piVar22[8]) * 0.16666667f);
    piVar22[9] = (int)((float)piVar22[9] + ((float)piVar22[0xc] - (float)piVar22[9]) * 0.33333334f);
    if (piVar22[1] == 0) {
      *(unsigned char *)(piVar22 + 0x1b) = 0;
      piVar22[0x15] = 0;
      piVar22[0x16] = 0x40a00000;
      piVar22[1] = 1;
      piVar22[2] = 0;
    }
    goto LAB_0027142c;
  case 3:
    fStack_28 = temp_v36;
    rt_memcpy_w(afStack_2e8,&DAT_00404504,0xa0);
    rt_memcpy_w(afStack_248,&DAT_004045a4,0xa0);
    rt_memcpy_w(&fStack_1a8,&DAT_00404644,0xa0);
    rt_memcpy_w(afStack_108,&DAT_004046e4,0xa0);
    piVar22 = g_lmapScene;
    temp_v17 = 0.33333334f;
    temp_v13 = g_lmapScene[1];
    temp_v18 = (float)g_lmapScene[10];
    temp_v31 = g_lmapScene[0xb];
    temp_v7 = g_lmapScene[0xc];
    if (temp_v13 != 0) {
      temp_v19 = 0.0f;
      temp_v34 = 20.0f;
      if (temp_v13 != 1) {
        if (temp_v13 == 2) {
          g_lmapScene[2] = g_lmapScene[2] + 1;
          if (((g_gameState != (unsigned int *)0x24) && (temp_v13 = unitGroupHasFlag(2,5), temp_v13 != 0)) &&
             ((float)g_lmapScene[0x58] < temp_v19)) {
            partyApplyNonlethalAilmentDamage(2,5);
            g_lmapScene[0x58] = 0x447a0000;
            FUN_002562e4(0xf,0x50);
            temp_v13 = FUN_00291e40(0x1000186);
            piVar22 = g_lmapScene;
            g_lmapScene[99] = temp_v13;
            piVar22[100] = 0x14;
          }
          if (temp_v19 > (float)g_lmapScene[0x57]) {
            puVar5 = g_gameState;
            if (g_gameState == (unsigned int *)0x5) {
              puVar5 = DAT_0049f920;
            }
            if (g_gameState == (unsigned int *)0x5 && puVar5 == (unsigned int *)0x9) {
              temp_v13 = 0x44bb8000;
            }
            else {
              temp_v13 = 0x43fa0000;
            }
            g_lmapScene[0x57] = temp_v13;
            temp_v6 = 0x20;
            lmapSetSceneId(temp_v6);
          }
          else {
            FUN_0027f958(&fStack_5c,&fStack_58,0);
            if (DAT_0049fb34 != 0) {
              if (DAT_0049fb34 == 1) {
                if (g_lmapScene[2] == 5) {
                  FUN_0027fca0(0xffffffff);
                  FUN_0025bc80();
                  effectSpawnAheadOfScene(30.0f,20.0f);
                }
                temp_v13 = g_lmapScene[2];
joined_r0x002c9850:
                if (temp_v13 == 6) {
                  FUN_0025bc80();
                  effectSpawnAheadOfScene(-130.0f,20.0f);
                }
                goto LAB_002c9910;
              }
              if (DAT_0049fb34 == 2) {
                if (g_lmapScene[2] == 5) {
                  FUN_0027fca0(0xffffffff);
                  FUN_0025bc80();
                  effectSpawnAheadOfScene(30.0f,20.0f);
                }
                temp_v13 = g_lmapScene[2];
                goto joined_r0x002c9850;
              }
              if (DAT_0049fb34 == 3) {
                if (g_lmapScene[2] == 5) {
                  FUN_0027fca0(0xffffffff);
                  FUN_0025bc80();
                  effectSpawnAheadOfScene(-130.0f,20.0f);
                }
                temp_v13 = g_lmapScene[2];
                goto joined_r0x002c980c;
              }
            }
            else {
              if (g_lmapScene[2] == 5) {
                FUN_0027fca0(0xffffffff);
                FUN_0025bc80();
                effectSpawnAheadOfScene(-130.0f,20.0f);
              }
              temp_v13 = g_lmapScene[2];
joined_r0x002c980c:
              if (temp_v13 == 6) {
                effectSpawnAheadOfScene(30.0f,20.0f);
                FUN_0025bc80();
              }
LAB_002c9910:
              if (DAT_0049fb34 != 0) {
                if (DAT_0049fb34 != 1) {
                  if (DAT_0049fb34 != 2) {
                    if ((DAT_0049fb34 == 3) && (g_lmapScene[2] >= 9)) {
                      temp_v13 = inputIsQuestCancelPressed();
                      piVar22 = g_lmapScene;
joined_r0x002c99a8:
                      g_lmapScene = piVar22;
                      if (temp_v13 != 0) {
                        piVar22[1] = 0;
                        piVar22[2] = 0;
                        goto LAB_002c9a64;
                      }
                    }
                  }
                  else if (g_lmapScene[2] >= 9) {
                    temp_v13 = inputIsQuestCancelPressed();
                    piVar22 = g_lmapScene;
                    goto joined_r0x002c99a8;
                  }
                }
                else if (g_lmapScene[2] >= 4) {
                  temp_v13 = inputIsQuestCancelPressed();
                  piVar22 = g_lmapScene;
                  goto joined_r0x002c99a8;
                }
              }
              else if (g_lmapScene[2] >= 7) {
                temp_v13 = inputIsQuestCancelPressed();
                piVar22 = g_lmapScene;
                goto joined_r0x002c99a8;
              }
            }
            piVar22 = g_lmapScene;
            if ((((unsigned int)fStack_5c >= 0xbf000001) || ((int)fStack_5c >= 0x3f000001)) ||
               (((unsigned int)fStack_58 >= 0xbf000001 ||
                (((int)fStack_58 >= 0x3f000001 || (g_lmapScene[2] >= 0xb)))))) {
              g_lmapScene[0x1a] = (int)temp_v19;
              piVar22[0x16] = 0x40a00000;
              if (piVar22[2] >= 0xb) {
                piVar22[0x62] = 1;
              }
              else if (DAT_0049fb34 < 2) {
                piVar22[0x62] = 2;
              }
              else if (DAT_0049fb34 == 2 || DAT_0049fb34 == 3) {
                piVar22[0x62] = 4;
              }
              temp_v6 = 1;
              lmapSetSceneId(temp_v6);
            }
          }
          goto LAB_002c9a54;
        }
      }
      else {
        temp_v35 = 0.017453292f;
        temp_v13 = g_lmapScene[2] + 1;
        g_lmapScene[2] = temp_v13;
        if (temp_v13 < 0x14) {
          if (DAT_0049fb34 != 0) {
            if (DAT_0049fb34 != 1) {
              if (DAT_0049fb34 != 2) {
                if (DAT_0049fb34 == 3) {
                  unaff_r5 = afStack_108[temp_v13 * 2];
                  unaff_r4 = afStack_108[temp_v13 * 2 + 1];
                }
              }
              else {
                unaff_r5 = (&fStack_1a8)[temp_v13 * 2];
                unaff_r4 = afStack_1a4[temp_v13 * 2];
              }
            }
            else {
              unaff_r5 = afStack_248[temp_v13 * 2];
              unaff_r4 = afStack_248[temp_v13 * 2 + 1];
            }
          }
          else {
            unaff_r5 = afStack_2e8[temp_v13 * 2];
            unaff_r4 = afStack_2e8[temp_v13 * 2 + 1];
          }
          if ((int)unaff_r5 >> 0x10 != 0) {
            effectSpawnAheadOfScene((f32)(s16)unaff_r4,(f32)((s32)unaff_r4 >> 16));
          }
          temp_v27 = (float)VectorSignedToFloat((int)romwright_subpiece_4_2_0(unaff_r5,0),(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v36 = (float)g_lmapScene[0x14] * temp_v35;
          FUN_0028250c();
          piVar22 = g_lmapScene;
          g_lmapScene[10] = (int)((float)g_lmapScene[10] + temp_v36 * temp_v27);
          temp_v35 = (float)piVar22[0x14] * temp_v35;
          FUN_00282390();
          g_lmapScene[0xc] = (int)((float)g_lmapScene[0xc] + temp_v35 * temp_v27);
          FUN_0027f848();
          piVar22 = g_lmapScene;
          g_lmapScene[10] = (int)fStack_68;
          piVar22[0xb] = (int)fStack_64;
          piVar22[0xc] = (int)fStack_60;
          piVar22[0xd] = (int)temp_v18;
          piVar22[0xe] = temp_v31;
          piVar22[0xf] = temp_v7;
          if ((DAT_0049fce8 == '\0') && (DAT_0049f93d != '\0')) {
            piVar9 = piVar22 + 10;
            FUN_0027f48c(piVar9,piVar22 + 0xd);
            piVar22 = g_lmapScene;
            piVar23 = (int *)0x0;
            if (piVar9 != (int *)0x0) {
              piVar23 = g_lmapScene;
            }
            if (piVar9 != (int *)0x0) {
              piVar23[0x1a] = (int)temp_v19;
            }
            else {
              temp_v35 = (float)g_lmapScene[0x1a] + 2.0f;
              g_lmapScene[0x1a] = (int)temp_v35;
              if ((int)temp_v35 < 0x41a00001) {
                temp_v34 = temp_v35;
              }
              piVar22[0x1a] = (int)temp_v34;
            }
          }
          temp_v34 = temp_v18;
          if ((g_gameState != (unsigned int *)0x24) &&
             (temp_v13 = unitGroupHasFlag(2,5), temp_v34 = temp_v18, temp_v13 != 0)) {
            mathDistanceBetweenPoints();
            g_lmapScene[0x58] = (int)((float)g_lmapScene[0x58] - temp_v18);
          }
          piVar22 = g_lmapScene + 10;
          FUN_002804ec();
          temp_v18 = temp_v34;
          if (((unsigned int)piVar22 & 2) != 0) {
            mathDistanceBetweenPoints();
            g_lmapScene[0x57] = (int)((float)g_lmapScene[0x57] - temp_v34);
            DAT_0049f94f = 4;
          }
          else {
            if (temp_v19 < (float)g_lmapScene[0x57]) {
              mathDistanceBetweenPoints();
              g_lmapScene[0x57] = (int)((float)g_lmapScene[0x57] - temp_v34);
            }
            if (temp_v19 < (float)g_lmapScene[0x57]) {
              temp_v19 = (float)g_lmapScene[0x57];
            }
            g_lmapScene[0x57] = (int)temp_v19;
            DAT_0049f94f = 0xff;
          }
          piVar22 = g_lmapScene;
          piVar23 = g_lmapScene + 7;
          piVar9 = g_lmapScene + 0x10;
          g_lmapScene[7] =
               (int)((float)g_lmapScene[7] +
                    ((float)g_lmapScene[10] - (float)g_lmapScene[7]) * temp_v17);
          piVar22[8] = (int)((float)piVar22[8] + ((float)piVar22[0xb] - (float)piVar22[8]) * temp_v17)
          ;
          temp_v19 = (float)piVar22[9] + ((float)piVar22[0xc] - (float)piVar22[9]) * temp_v17;
          piVar22[9] = (int)temp_v19;
          temp_v13 = piVar22[8];
          *piVar9 = *piVar23;
          piVar22[0x11] = temp_v13;
          piVar22[0x12] = (int)temp_v19;
          piVar22[0xd] = (int)temp_v18;
          piVar22[0xe] = temp_v31;
          piVar22[0xf] = temp_v7;
        }
        if (DAT_0049fb34 != 0) {
          if (DAT_0049fb34 != 1) {
            if (DAT_0049fb34 != 2) {
              if (DAT_0049fb34 == 3) {
                if (g_lmapScene[2] == 2) {
                  FUN_0028250c();
                  FUN_00282390();
                  temp_v13 = randBetween(0,2);
                  FUN_00291e40(temp_v13 + 0x1000235);
                }
                if (g_lmapScene[2] == 3) {
                  FUN_0028250c();
                  FUN_00282390();
                  FUN_00291e40(0x10001f3);
                  FUN_0027fca0(0xffffffff);
                }
                if ((g_lmapScene[2] == 6) && (FUN_0025bc80(), g_lmapScene[2] == 6)) {
                  temp_v8 = 0x14;
                  temp_v6 = 6;
                  FUN_002879dc(temp_v6,temp_v8,0);
                }
              }
            }
            else {
              if (g_lmapScene[2] == 2) {
                FUN_0028250c();
                FUN_00282390();
                temp_v13 = randBetween(0,2);
                FUN_00291e40(temp_v13 + 0x1000232);
              }
              if (g_lmapScene[2] == 3) {
                FUN_0028250c();
                FUN_00282390();
                FUN_00291e40(0x10001f2);
                FUN_0027fca0(0xffffffff);
              }
              if (g_lmapScene[2] == 4) {
                FUN_0025bc80();
              }
            }
          }
          else {
            if (g_lmapScene[2] == 3) {
              FUN_0028250c();
              FUN_00282390();
              FUN_00291e40(0x10001f1);
              FUN_0028250c();
              FUN_00282390();
              temp_v13 = randBetween(0,2);
              FUN_00291e40(temp_v13 + 0x100022f);
              FUN_0027fca0(0xffffffff);
            }
            if (g_lmapScene[2] == 6) {
              FUN_0025bc80();
            }
          }
        }
        else {
          if (g_lmapScene[2] == 3) {
            FUN_0028250c();
            FUN_00282390();
            FUN_00291e40(0x10001f0);
            FUN_0028250c();
            FUN_00282390();
            temp_v13 = randBetween(0,2);
            FUN_00291e40(temp_v13 + 0x100022c);
            FUN_0027fca0(0xffffffff);
          }
          if ((g_lmapScene[2] == 6) && (FUN_0025bc80(), g_lmapScene[2] == 6)) {
            temp_v8 = 8;
            temp_v6 = 4;
            FUN_002879dc(temp_v6,temp_v8,0);
          }
        }
        piVar22 = g_lmapScene;
        if (g_lmapScene[2] == 3) {
          g_lmapScene[0x5b] = -1;
          piVar22[0x5a] = 0;
          DAT_0049fa98 = '\x01';
          DAT_0049fa9c = piVar22[7];
          DAT_0049faa0 = piVar22[8];
          DAT_0049faa4 = piVar22[9];
          DAT_0049faa8 = piVar22[0x13];
          DAT_0049faac = 0;
          DAT_0049faae = 0;
        }
        if (DAT_0049fa98 != '\0') {
          DAT_0049fa9c = piVar22[7];
          DAT_0049faa0 = piVar22[8];
          DAT_0049faa4 = piVar22[9];
          DAT_0049faa8 = piVar22[0x13];
          DAT_0049faac = DAT_0049faac + 1;
          temp_v13 = (int)DAT_0049faac;
          DAT_0049faae = 0;
          if (DAT_0049fb34 != 0) {
            if (DAT_0049fb34 != 1) {
              if (DAT_0049fb34 != 2) {
                if ((DAT_0049fb34 == 3) && (temp_v13 - 5U < 5)) {
                  DAT_0049faae = 1;
                }
              }
              else if (5 >= temp_v13 - 6U) {
                DAT_0049faae = 1;
              }
            }
            else {
              temp_v5 = temp_v13 - 3;
              if (temp_v5 < 4) {
                DAT_0049faae = 1;
              }
            }
          }
          else {
            temp_v5 = temp_v13 - 5;
            if (temp_v5 < 4) {
              DAT_0049faae = 1;
            }
          }
        }
        if ((DAT_0049fabc == '\0') && (0 < DAT_0049fab0)) {
          DAT_0049fabc = '\x01';
          DAT_0049fac0 = 0;
        }
        else if ((DAT_0049fab0 == 0) && (piVar22[2] >= 0xf)) {
          DAT_0049fa98 = '\0';
          piVar22[0x5a] = 0;
          piVar22[1] = piVar22[1] + 1;
          piVar22[2] = 0;
        }
LAB_002c9a54:
        if (g_lmapScene[1] == 1) goto LAB_002c9a70;
      }
LAB_002c9a64:
      FUN_002804ec(g_lmapScene + 10);
    }
    else {
      *(unsigned char *)(g_lmapScene + 0x1b) = 0;
      if (DAT_0049fb34 == 0) {
        piVar22[0x15] = 4;
      }
      else if (DAT_0049fb34 == 1) {
        temp_v13 = 0x16;
        piVar22[0x15] = temp_v13;
      }
      else if (DAT_0049fb34 == 2) {
        temp_v13 = 0x17;
        piVar22[0x15] = temp_v13;
      }
      else if (DAT_0049fb34 == 3) {
        piVar22[0x15] = 0x18;
      }
      piVar22[0x16] = 0x40400000;
      *(unsigned char *)(piVar22 + 0x17) = 1;
      piVar22[1] = 1;
      piVar22[2] = 0;
    }
LAB_002c9a70:
    mapSelectContainingRegions();
    mapEaseSceneHeading();
    piVar22 = g_lmapScene;
    piVar23 = g_lmapScene + 7;
    piVar9 = g_lmapScene + 0x10;
    g_lmapScene[7] =
         (int)((float)g_lmapScene[7] + ((float)g_lmapScene[10] - (float)g_lmapScene[7]) * temp_v17)
    ;
    piVar22[8] = (int)((float)piVar22[8] + ((float)piVar22[0xb] - (float)piVar22[8]) * 0.16666667f);
    temp_v17 = (float)piVar22[9] + ((float)piVar22[0xc] - (float)piVar22[9]) * temp_v17;
    piVar22[9] = (int)temp_v17;
    temp_v13 = piVar22[8];
    *piVar9 = *piVar23;
    piVar22[0x11] = temp_v13;
    piVar22[0x12] = (int)temp_v17;
    piVar22[0xd] = (int)temp_v18;
    piVar22[0xe] = temp_v31;
    piVar22[0xf] = temp_v7;
    return;
  case 4:
    fStack_28 = temp_v35;
    fStack_24 = temp_v20;
    mapEaseSceneHeading();
    piVar22 = g_lmapScene;
    temp_v7 = 0;
    *(unsigned char *)(g_lmapScene + 0x1b) = 0;
    piVar22[7] = (int)((float)piVar22[7] + ((float)piVar22[10] - (float)piVar22[7]) * 0.33333334f);
    piVar22[8] = (int)((float)piVar22[8] + ((float)piVar22[0xb] - (float)piVar22[8]) * 0.16666667f);
    piVar22[9] = (int)((float)piVar22[9] + ((float)piVar22[0xc] - (float)piVar22[9]) * 0.33333334f);
    temp_v31 = piVar22[1];
    if (temp_v31 != 0) {
      if (temp_v31 != 1) {
        if ((temp_v31 == 2) && (temp_v31 = piVar22[2], piVar22[2] = temp_v31 + 1, temp_v31 + 1 >= 4)) {
          piVar22[0x15] = 0;
          piVar22[0x16] = 0x40a00000;
          piVar22[1] = 3;
          piVar22[2] = temp_v7;
          return;
        }
      }
      else {
        temp_v7 = piVar22[2];
        piVar22[2] = temp_v7 + 1;
        if (temp_v7 + 1 >= 0x24) {
          piVar22[1] = 2;
          piVar22[2] = 0;
          return;
        }
      }
    }
    else {
      piVar22[0x15] = 0xc;
      piVar22[0x16] = 0x40400000;
      piVar22[1] = 1;
      piVar22[2] = 0;
    }
    break;
  case 5:
    fStack_28 = temp_v35;
    fStack_24 = temp_v20;
    mapEaseSceneHeading();
    piVar22 = g_lmapScene;
    *(unsigned char *)(g_lmapScene + 0x1b) = 0;
    if (DAT_0049fa60 != '\0') {
      temp_v18 = (float)piVar22[8];
      piVar22[7] = (int)((float)piVar22[7] + ((float)piVar22[10] - (float)piVar22[7]) * 0.083333336f)
      ;
      piVar22[8] = (int)(temp_v18 + ((float)piVar22[0xb] - temp_v18) * 0.083333336f);
      piVar22[9] = (int)((float)piVar22[9] + ((float)piVar22[0xc] - (float)piVar22[9]) * 0.083333336f
                        );
    }
    else {
      piVar22[7] = (int)((float)piVar22[7] + ((float)piVar22[10] - (float)piVar22[7]) * 0.33333334f);
      piVar22[8] = (int)((float)piVar22[8] + ((float)piVar22[0xb] - (float)piVar22[8]) * 0.16666667f)
      ;
      piVar22[9] = (int)((float)piVar22[9] + ((float)piVar22[0xc] - (float)piVar22[9]) * 0.33333334f)
      ;
    }
    temp_v7 = piVar22[1];
    if (temp_v7 == 0) {
      FUN_0027fca0(1);
      piVar22 = g_lmapScene;
      if (g_gameState != (unsigned int *)0x16) {
        g_lmapScene[0x15] = 8;
        piVar22[0x16] = 0x40000000;
        if (DAT_0049fa60 != '\0') {
          temp_v7 = piVar22[10];
          mathPositionHeadingDegrees();
          g_lmapScene[0x14] = temp_v7;
        }
      }
      else {
        g_lmapScene[0x15] = 0;
        piVar22[0x16] = 0x40a00000;
        temp_v7 = piVar22[7];
        mathPositionHeadingDegrees();
        g_lmapScene[0x14] = temp_v7;
      }
      FUN_0027fc14(0xe);
      buttonHelpSetPreset(0xdb);
      piVar22 = g_lmapScene;
      g_lmapScene[1] = g_lmapScene[1] + 1;
      piVar22[2] = 0;
      return;
    }
    if (temp_v7 != 1) {
      if ((temp_v7 == 2) && (temp_v7 = piVar22[2], piVar22[2] = temp_v7 + 1, temp_v7 + 1 >= 4)) {
        piVar22[1] = 3;
        piVar22[2] = 0;
        return;
      }
    }
    else {
      temp_v7 = piVar22[2] + 1;
      piVar22[2] = temp_v7;
      if (g_gameState == (unsigned int *)0x16 && temp_v7 == 0x14) {
        piVar22[0x15] = 0xe;
        piVar22[0x16] = 0x40a00000;
        return;
      }
      if (temp_v7 >= 0x24) {
        piVar22[1] = 2;
        piVar22[2] = 0;
        return;
      }
    }
    break;
  case 6:
    fStack_28 = temp_v35;
    fStack_24 = temp_v20;
    mapEaseSceneHeading();
    piVar22 = g_lmapScene;
    temp_v7 = g_lmapScene[1];
    if (temp_v7 != 0) {
      if (temp_v7 != 1) {
        if (temp_v7 != 2) {
          if (temp_v7 == 3) {
            g_lmapScene[0x16] = 0x40a00000;
          }
        }
        else {
          temp_v7 = g_lmapScene[2] + 1;
          g_lmapScene[2] = temp_v7;
          if (temp_v7 < 0x13) {
            temp_v18 = (float)VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
            piVar22[0xc] = (int)((float)piVar22[0x50] + (float)piVar22[0x56] * temp_v18);
            piVar22[10] = (int)((float)piVar22[0x4e] + (float)piVar22[0x54] * temp_v18);
            piVar22[0xb] = (int)((float)piVar22[0x4f] + (float)piVar22[0x55] * temp_v18);
          }
          else {
            FUN_0027fae4();
            switch(DAT_0049f94a) {
            case 0:
              FUN_00291e40(0x100021c);
              break;
            case 1:
              temp_v6 = 0x100021e;
              FUN_00291e40(temp_v6);
              break;
            case 2:
              temp_v6 = 0x1000220;
              FUN_00291e40(temp_v6);
              break;
            case 3:
              temp_v6 = 0x1000222;
              FUN_00291e40(temp_v6);
              break;
            case 4:
              temp_v6 = 0x1000224;
              FUN_00291e40(temp_v6);
              break;
            default:
            }
            FUN_0027fca0(0xffffffff);
            FUN_0028250c();
            FUN_00282390();
            temp_v7 = randBetween(0,1);
            FUN_00291e40(temp_v7 + 0x100023e);
            piVar22 = g_lmapScene;
            g_lmapScene[1] = g_lmapScene[1] + 1;
            piVar22[2] = 0;
          }
        }
      }
      else {
        temp_v7 = g_lmapScene[2];
        g_lmapScene[2] = temp_v7 + 1;
        if (temp_v7 + 1 >= 10) {
          FUN_0027fae4();
          switch(DAT_0049f94a) {
          case 0:
            FUN_00291e40(0x100021b);
            break;
          case 1:
            temp_v6 = 0x100021d;
            FUN_00291e40(temp_v6);
            break;
          case 2:
            temp_v6 = 0x100021f;
            FUN_00291e40(temp_v6);
            break;
          case 3:
            temp_v6 = 0x1000221;
            FUN_00291e40(temp_v6);
            break;
          case 4:
            temp_v6 = 0x1000223;
            FUN_00291e40(temp_v6);
            break;
          default:
          }
          FUN_0027fca0(0xffffffff);
          FUN_0028250c();
          FUN_00282390();
          temp_v7 = randBetween(0,1);
          FUN_00291e40(temp_v7 + 0x100023c);
          piVar22 = g_lmapScene;
          g_lmapScene[1] = g_lmapScene[1] + 1;
          piVar22[2] = 0;
        }
      }
    }
    else {
      g_lmapScene[0x15] = 0xd;
      piVar22[0x16] = 0x40400000;
      piVar22[1] = 1;
      piVar22[2] = 0;
    }
    piVar22 = g_lmapScene;
    g_lmapScene[7] =
         (int)((float)g_lmapScene[7] +
              ((float)g_lmapScene[10] - (float)g_lmapScene[7]) * 0.33333334f);
    piVar22[8] = (int)((float)piVar22[8] + ((float)piVar22[0xb] - (float)piVar22[8]) * 0.16666667f);
    piVar22[9] = (int)((float)piVar22[9] + ((float)piVar22[0xc] - (float)piVar22[9]) * 0.33333334f);
    goto LAB_0027142c;
  case 7:
    temp_v30 = *(unsigned long long *)(g_lmapScene + 10);
    temp_v31 = g_lmapScene[0xc];
    temp_v18 = fStack_38;
    fStack_38 = temp_v35;
    fStack_34 = temp_v20;
    fStack_30 = fStack_20;
    fStack_2c = fStack_1c;
    fStack_20 = fStack_3c;
    fStack_1c = temp_v18;
    mapEaseSceneHeading();
    piVar22 = g_lmapScene;
    temp_v18 = (float)g_lmapScene[7] +
             ((float)g_lmapScene[10] - (float)g_lmapScene[7]) * 0.33333334f;
    g_lmapScene[7] = (int)temp_v18;
    piVar22[8] = (int)((float)piVar22[8] + ((float)piVar22[0xb] - (float)piVar22[8]) * 0.16666667f);
    piVar22[9] = (int)((float)piVar22[9] + ((float)piVar22[0xc] - (float)piVar22[9]) * 0.33333334f);
    temp_v7 = piVar22[1];
    if (temp_v7 != 0xc) {
      if (temp_v7 < 0xc) {
        temp_v13 = 0x40a00000;
        if (temp_v7 != 2) {
          if (temp_v7 < 2) {
            if (temp_v7 != 0) {
              if (temp_v7 == 1) {
                piVar22[2] = piVar22[2] + 1;
                mapIfActivateRecord(1,DAT_0049f99c);
                piVar22 = g_lmapScene;
                if (g_lmapScene[2] >= 3) {
                  temp_v7 = g_lmapScene[1];
                  g_lmapScene[0x15] = 0x1d;
                  piVar22[0x16] = 0x40000000;
                  piVar22[1] = temp_v7 + 1;
                  piVar22[2] = 0;
                }
              }
            }
            else {
              piVar22[0x15] = 0;
              piVar22[0x16] = 0x40400000;
              *(unsigned char *)(piVar22 + 0x1b) = 0;
              mathDistanceBetweenPoints();
              temp_v7 = DAT_0049f9a8;
              temp_v17 = DAT_0049f9a4;
              piVar22 = g_lmapScene;
              temp_v19 = 0.017453292f;
              temp_v35 = 100.0f;
              temp_v13 = 0x41f00000;
              temp_v34 = 180.0f;
              g_lmapScene[0x46] = DAT_0049f9a0;
              piVar22[0x47] = (int)temp_v17;
              piVar22[0x48] = temp_v7;
              if ((int)temp_v18 < 0x42700000) {
                temp_v18 = ((float)piVar22[0x13] + 180.0f) * 0.017453292f;
                FUN_0028250c();
                piVar22 = g_lmapScene;
                g_lmapScene[0x46] = (int)((float)g_lmapScene[0x46] + temp_v18 * temp_v35);
                temp_v19 = ((float)piVar22[0x13] + temp_v34) * temp_v19;
                FUN_00282390();
                piVar22 = g_lmapScene + 0x49;
                g_lmapScene[0x48] = (int)((float)g_lmapScene[0x48] + temp_v19 * temp_v35);
                FUN_0025247c(piVar22);
                piVar22 = g_lmapScene;
                g_lmapScene[0x4c] = temp_v13;
                *(unsigned char *)((int)piVar22 + 0x115) = 1;
                temp_v7 = piVar22[10];
                mathPositionHeadingDegrees();
                g_lmapScene[0x14] = temp_v7;
              }
              else {
                temp_v18 = ((float)piVar22[0x14] + 180.0f) * 0.017453292f;
                FUN_0028250c();
                piVar22 = g_lmapScene;
                g_lmapScene[0x46] = (int)((float)g_lmapScene[0x46] + temp_v18 * temp_v35);
                temp_v19 = ((float)piVar22[0x14] + temp_v34) * temp_v19;
                FUN_00282390();
                piVar22 = g_lmapScene + 0x49;
                g_lmapScene[0x48] = (int)((float)g_lmapScene[0x48] + temp_v19 * temp_v35);
                FUN_0025247c(piVar22);
                piVar22 = g_lmapScene;
                g_lmapScene[0x4c] = temp_v13;
                *(unsigned char *)((int)piVar22 + 0x115) = 1;
                temp_v7 = piVar22[10];
                mathPositionHeadingDegrees();
                g_lmapScene[0x14] = temp_v7;
              }
              FUN_0027fc14(10);
              DAT_004474f4[0x2b] = -1;
              buttonHelpSetPreset(0xdb);
              mapIfActivateRecord(1,DAT_0049f99c);
              FUN_001fa760();
              piVar22 = g_lmapScene;
              temp_v7 = piVar22[1];
              piVar22[1] = temp_v7 + 1;
              piVar22[2] = 0;
            }
          }
          else if (temp_v7 != 10) {
            if ((temp_v7 == 0xb) &&
               (temp_v7 = piVar22[2], piVar22[2] = temp_v7 + 1, temp_v7 + 1 == 0x14)) {
              mapInterfaceSetStateTwo();
              temp_v7 = g_lmapScene[1];
              piVar22 = g_lmapScene;
              piVar22[1] = temp_v7 + 1;
              piVar22[2] = 0;
            }
          }
          else {
            DAT_0049fb46 = 0;
            piVar22[0x15] = 8;
            piVar22[0x16] = 0x40a00000;
            temp_v7 = piVar22[1];
            piVar22[1] = temp_v7 + 1;
            piVar22[2] = 0;
          }
        }
        else {
          piVar22[2] = piVar22[2] + 1;
          mapIfActivateRecord(1,DAT_0049f99c);
          temp_v7 = FUN_0027ee9c();
          piVar22 = g_lmapScene;
          if (temp_v7 != 0) {
            g_lmapScene[1] = 10;
            piVar22[2] = 0;
          }
          else {
            temp_v7 = padIsButtonPressed(5);
            if ((temp_v7 != 0) || (temp_v7 = inputIsQuestMenuPressed(), temp_v7 != 0)) {
              piVar22 = DAT_004474f4;
              DAT_004474f4[6] = g_lmapScene[0x14];
              piVar22[0x2b] = 0;
              FUN_0027fc14(0);
              piVar22 = g_lmapScene;
              g_lmapScene[0x15] = 0;
              piVar22[0x16] = temp_v13;
              mapIfActivateRecord(0,DAT_0049f99c);
              mapIfReleaseSlot0();
              piVar22 = g_lmapScene;
              g_lmapScene[1] = 0x5a;
              piVar22[2] = 0;
            }
          }
        }
      }
      else if (temp_v7 != 0xd) {
        if (temp_v7 != 0x5a) {
          if (temp_v7 != 0x5b) {
            if ((temp_v7 == 0x5c) && (temp_v7 = piVar22[2], piVar22[2] = temp_v7 + 1, temp_v7 + 1 >= 4))
            {
              temp_v6 = 1;
              lmapSetSceneId(temp_v6);
            }
          }
          else {
            mapPartDestroy();
            temp_v7 = g_lmapScene[1];
            piVar22 = g_lmapScene;
            piVar22[1] = temp_v7 + 1;
            piVar22[2] = 0;
          }
        }
        else {
          piVar22[1] = temp_v7 + 1;
          piVar22[2] = 0;
        }
      }
      else {
        temp_v7 = piVar22[2];
        piVar22[2] = temp_v7 + 1;
        if (temp_v7 + 1 == 0x14) {
          mapPartDestroy();
          mapIfSetMode1();
          temp_v6 = 8;
          lmapSetSceneId(temp_v6);
        }
      }
    }
    else {
      temp_v7 = mapIfHasSelection();
      if (temp_v7 == 0) {
        mapIfReleaseSlot0();
        piVar22 = DAT_004474f4;
        DAT_004474f4[6] = g_lmapScene[0x14];
        piVar22[0x2b] = 0;
        FUN_0027fc14(0);
        temp_v7 = g_lmapScene[1];
        piVar22 = g_lmapScene;
        piVar22[1] = temp_v7 + 1;
        piVar22[2] = 0;
      }
    }
    if (*(char *)((int)g_lmapScene + 0x115) != '\0') {
      temp_v18 = (float)g_lmapScene[10];
      mathDistanceBetweenPoints();
      piVar22 = g_lmapScene;
      temp_v17 = (float)g_lmapScene[0x4c];
      if (temp_v17 >= temp_v18) {
        temp_v7 = g_lmapScene[0x47];
        temp_v13 = g_lmapScene[0x48];
        g_lmapScene[10] = g_lmapScene[0x46];
        *(unsigned char *)((int)piVar22 + 0x115) = 0;
        piVar22[0xb] = temp_v7;
        piVar22[0xc] = temp_v13;
      }
      else {
        pfVar10 = (float *)(g_lmapScene + 0x4a);
        temp_v18 = (float)g_lmapScene[0x4b];
        g_lmapScene[10] = (int)((float)g_lmapScene[10] + (float)g_lmapScene[0x49] * temp_v17);
        piVar22[0xb] = (int)((float)piVar22[0xb] + *pfVar10 * temp_v17);
        piVar22[0xc] = (int)((float)piVar22[0xc] + temp_v18 * temp_v17);
      }
      piVar22 = g_lmapScene;
      piVar23 = g_lmapScene + 0xd;
      g_lmapScene[0xd] = (int)temp_v30;
      piVar22[0xe] = (int)((unsigned long long)temp_v30 >> 0x20);
      piVar22[0xf] = temp_v31;
      piVar22 = piVar22 + 10;
      FUN_0027f48c(piVar22,piVar23);
      if (piVar22 != (int *)0x0) {
        *(unsigned char *)((int)g_lmapScene + 0x115) = 0;
      }
    }
    FUN_002804ec(g_lmapScene + 10);
    in_d10 = CONCAT44(fStack_24,fStack_28);
    in_d11 = CONCAT44(fStack_1c,fStack_20);
    goto code_r0x00280364;
  case 9:
    fStack_30 = temp_v35;
    fStack_2c = temp_v20;
    temp_v18 = fStack_28;
    fStack_28 = fStack_20;
    temp_v17 = fStack_24;
    fStack_24 = fStack_1c;
    fStack_20 = temp_v18;
    fStack_1c = temp_v17;
    mapEaseSceneHeading();
    piVar22 = g_lmapScene;
    g_lmapScene[7] =
         (int)((float)g_lmapScene[7] +
              ((float)g_lmapScene[10] - (float)g_lmapScene[7]) * 0.33333334f);
    piVar22[8] = (int)((float)piVar22[8] + ((float)piVar22[0xb] - (float)piVar22[8]) * 0.16666667f);
    piVar22[9] = (int)((float)piVar22[9] + ((float)piVar22[0xc] - (float)piVar22[9]) * 0.33333334f);
    temp_v7 = piVar22[1];
    if (temp_v7 != 0xc) {
      if (temp_v7 < 0xc) {
        temp_v31 = 0x40a00000;
        if (temp_v7 != 2) {
          if (temp_v7 < 2) {
            if (temp_v7 != 0) {
              if (temp_v7 == 1) {
                piVar22[2] = piVar22[2] + 1;
                mapIfActivateRecord(1,DAT_0049f99c);
                piVar22 = g_lmapScene;
                if (g_lmapScene[2] >= 3) {
                  temp_v7 = g_lmapScene[1];
                  g_lmapScene[0x15] = 0x1d;
                  piVar22[0x16] = 0x40000000;
                  piVar22[1] = temp_v7 + 1;
                  piVar22[2] = 0;
                }
              }
            }
            else {
              piVar22[0x15] = 0;
              piVar22[0x16] = 0x40400000;
              *(unsigned char *)(piVar22 + 0x1b) = 0;
              temp_v7 = DAT_0049f9a8;
              temp_v18 = DAT_0049f9a4;
              temp_v17 = 0.017453292f;
              piVar22[10] = DAT_0049f9a0;
              piVar22[0xb] = (int)temp_v18;
              piVar22[0xc] = temp_v7;
              temp_v18 = DAT_0049f9bc * 0.017453292f;
              FUN_0028250c();
              temp_v19 = 40.0f;
              g_lmapScene[10] = (int)((float)g_lmapScene[10] + temp_v18 * 40.0f);
              temp_v17 = DAT_0049f9bc * temp_v17;
              FUN_00282390();
              piVar22 = g_lmapScene;
              g_lmapScene[0xc] = (int)((float)g_lmapScene[0xc] + temp_v17 * temp_v19);
              piVar22[0x14] = (int)DAT_0049f9ac;
              FUN_0027fc14(0xb);
              DAT_004474f4[0x2b] = -2;
              buttonHelpSetPreset(0xdb);
              mapIfActivateRecord(1,DAT_0049f99c);
              FUN_0028250c();
              FUN_00282390();
              FUN_001b4478();
              temp_v7 = g_lmapScene[1];
              piVar22 = g_lmapScene;
              piVar22[1] = temp_v7 + 1;
              piVar22[2] = 0;
            }
          }
          else if (temp_v7 != 10) {
            if ((temp_v7 == 0xb) &&
               (temp_v7 = piVar22[2], piVar22[2] = temp_v7 + 1, temp_v7 + 1 == 0x14)) {
              mapInterfaceSetStateTwo();
              temp_v7 = g_lmapScene[1];
              piVar22 = g_lmapScene;
              piVar22[1] = temp_v7 + 1;
              piVar22[2] = 0;
            }
          }
          else {
            DAT_0049fb46 = 0;
            piVar22[0x15] = 8;
            piVar22[0x16] = 0x40a00000;
            FUN_0027fca0(1);
            temp_v7 = g_lmapScene[1];
            piVar22 = g_lmapScene;
            piVar22[1] = temp_v7 + 1;
            piVar22[2] = 0;
          }
        }
        else {
          piVar22[2] = piVar22[2] + 1;
          mapIfActivateRecord(1,DAT_0049f99c);
          temp_v7 = FUN_0027ee9c();
          piVar22 = g_lmapScene;
          if (temp_v7 != 0) {
            g_lmapScene[1] = 10;
            piVar22[2] = 0;
          }
          else {
            temp_v7 = padIsButtonPressed(5);
            if ((temp_v7 != 0) || (temp_v7 = inputIsQuestMenuPressed(), temp_v7 != 0)) {
              piVar22 = DAT_004474f4;
              DAT_004474f4[6] = g_lmapScene[0x14];
              piVar22[0x2b] = 0;
              FUN_0027fc14(0);
              piVar22 = g_lmapScene;
              g_lmapScene[0x15] = 0;
              piVar22[0x16] = temp_v31;
              mapIfActivateRecord(0,DAT_0049f99c);
              mapIfReleaseSlot1();
              piVar22 = g_lmapScene;
              g_lmapScene[1] = 0x5a;
              piVar22[2] = 0;
            }
          }
        }
      }
      else if (temp_v7 != 0xd) {
        if (temp_v7 != 0x5a) {
          if (temp_v7 != 0x5b) {
            if ((temp_v7 == 0x5c) && (temp_v7 = piVar22[2], piVar22[2] = temp_v7 + 1, temp_v7 + 1 >= 4))
            {
              temp_v6 = 1;
              lmapSetSceneId(temp_v6);
            }
          }
          else {
            mapDestroyInterfaceModel();
            temp_v7 = g_lmapScene[1];
            piVar22 = g_lmapScene;
            piVar22[1] = temp_v7 + 1;
            piVar22[2] = 0;
          }
        }
        else {
          piVar22[1] = temp_v7 + 1;
          piVar22[2] = 0;
        }
      }
      else {
        temp_v7 = piVar22[2];
        piVar22[2] = temp_v7 + 1;
        if (temp_v7 + 1 == 0x14) {
          mapDestroyInterfaceModel();
          mapIfSetMode1();
          temp_v6 = 10;
          lmapSetSceneId(temp_v6);
        }
      }
    }
    else {
      temp_v7 = mapIfHasSelection();
      if (temp_v7 == 0) {
        mapIfReleaseSlot1();
        piVar22 = DAT_004474f4;
        DAT_004474f4[6] = g_lmapScene[0x14];
        piVar22[0x2b] = 0;
        FUN_0027fc14(0);
        temp_v7 = g_lmapScene[1];
        piVar22 = g_lmapScene;
        piVar22[1] = temp_v7 + 1;
        piVar22[2] = 0;
      }
    }
    FUN_002804ec(g_lmapScene + 10);
    in_d10 = CONCAT44(fStack_1c,fStack_20);
    fStack_38 = fStack_30;
    fStack_34 = fStack_2c;
    fStack_30 = fStack_28;
    fStack_2c = fStack_24;
    goto code_r0x00280364;
  case 0xb:
    temp_v18 = fStack_20;
    temp_v17 = fStack_1c;
    fStack_34 = fStack_28;
    fStack_30 = fStack_24;
    fStack_2c = fStack_3c;
    fStack_28 = fStack_38;
    if (g_lmapScene[1] < 10) {
      fStack_3c = fStack_20;
      fStack_28 = fStack_38;
      fStack_38 = fStack_1c;
      mapEaseSceneHeading();
      piVar22 = g_lmapScene;
      g_lmapScene[7] =
           (int)((float)g_lmapScene[7] +
                ((float)g_lmapScene[10] - (float)g_lmapScene[7]) * 0.33333334f);
      piVar22[8] = (int)((float)piVar22[8] + ((float)piVar22[0xb] - (float)piVar22[8]) * 0.16666667f)
      ;
      piVar22[9] = (int)((float)piVar22[9] + ((float)piVar22[0xc] - (float)piVar22[9]) * 0.33333334f)
      ;
      temp_v18 = fStack_3c;
      temp_v17 = fStack_38;
    }
    fStack_38 = temp_v17;
    fStack_3c = temp_v18;
    piVar22 = g_lmapScene;
    temp_v6 = 0x100021b;
    temp_v7 = g_lmapScene[1];
    temp_v18 = 0.017453292f;
    temp_v31 = 0x40000000;
    temp_v17 = 15.0f;
    temp_v13 = 0;
    if (temp_v7 != 0x10) {
      if (temp_v7 >= 0x10) {
        if (temp_v7 == 0x36) {
          mapIfReleaseSlot2();
          piVar23 = g_lmapScene;
          g_lmapScene[0x1a] = temp_v13;
          piVar22 = DAT_004474f4;
          DAT_004474f4[6] = piVar23[0x14];
          piVar22[0x2b] = 0;
          FUN_0027fc14(0);
          piVar22 = g_lmapScene;
          temp_v7 = piVar22[1];
          piVar22[1] = temp_v7 + 1;
          piVar22[2] = 0;
          FUN_002804ec(g_lmapScene + 10);
          mapSelectContainingRegions();
          return;
        }
        if (temp_v7 < 0x37) {
          if (temp_v7 == 0x32) {
            DAT_0049fb46 = 0;
            DAT_004474f4[3] = 2;
            piVar22[0x15] = 5;
            piVar22[0x16] = 0x40400000;
            piVar22[0x2d] = (int)((float)piVar22[0x29] - (float)piVar22[8]);
            piVar22[0x2e] = (int)((float)piVar22[0x2a] - (float)piVar22[9]);
            piVar22[0x2c] = (int)(((float)piVar22[0x28] - (float)piVar22[7]) * 0.025f);
            piVar22[0x2d] = (int)((float)piVar22[0x2d] * 0.025f);
            piVar22[0x2e] = (int)((float)piVar22[0x2e] * 0.025f);
            piVar22 = g_lmapScene;
            g_lmapScene[0x2f] = 0;
            temp_v7 = piVar22[1];
            piVar22[1] = temp_v7 + 1;
            piVar22[2] = 0;
            FUN_002804ec(g_lmapScene + 10);
            mapSelectContainingRegions();
            return;
          }
          if (temp_v7 == 0x33) {
            temp_v7 = g_lmapScene[2];
            g_lmapScene[2] = temp_v7 + 1;
            if (temp_v7 + 1 < 0x15) {
              FUN_002804ec(g_lmapScene + 10);
              mapSelectContainingRegions();
              return;
            }
            FUN_0027fae4();
            switch(DAT_0049f94a) {
            case 0:
              FUN_00291e40(temp_v6);
              break;
            case 1:
              temp_v6 = 0x100021d;
              FUN_00291e40(temp_v6);
              break;
            case 2:
              temp_v6 = 0x100021f;
              FUN_00291e40(temp_v6);
              break;
            case 3:
              temp_v6 = 0x1000221;
              FUN_00291e40(temp_v6);
              break;
            case 4:
              FUN_00291e40(0x1000223);
            }
            goto LAB_002e94f0;
          }
          if (temp_v7 != 0x34) {
            if (temp_v7 != 0x35) {
              FUN_002804ec(g_lmapScene + 10);
              mapSelectContainingRegions();
              return;
            }
            temp_v18 = (float)g_lmapScene[0x1a];
            pfVar10 = (float *)(g_lmapScene + 8);
            temp_v7 = g_lmapScene[0x2f];
            g_lmapScene[0x1a] = (int)(temp_v18 - 2.0f);
            piVar22[8] = (int)(*pfVar10 + (temp_v18 - 2.0f));
            if (temp_v7 < 0x28) {
              piVar22[0x2f] = temp_v7 + 1;
              piVar22[7] = (int)((float)piVar22[7] + (float)piVar22[0x2c]);
              piVar22[9] = (int)((float)piVar22[9] + (float)piVar22[0x2e]);
            }
            temp_v7 = piVar22[2];
            piVar22[2] = temp_v7 + 1;
            if (temp_v7 + 1 == 0x1e) {
              mapInterfaceSetStateTwo();
            }
            if ((g_lmapScene[2] < 0x1f) || (temp_v7 = mapIfHasSelection(), temp_v7 != 0)) {
              FUN_002804ec(g_lmapScene + 10);
              mapSelectContainingRegions();
              return;
            }
            mapInterfaceSetStateTwo();
            temp_v7 = g_lmapScene[1];
            piVar22 = g_lmapScene;
          }
          else {
            pfVar10 = (float *)(g_lmapScene + 8);
            temp_v31 = g_lmapScene[0x2f];
            temp_v18 = (float)g_lmapScene[0x1a] - 2.0f;
            g_lmapScene[0x1a] = (int)temp_v18;
            piVar22[8] = (int)(*pfVar10 + temp_v18);
            if (temp_v31 < 0x28) {
              piVar22[0x2f] = temp_v31 + 1;
              piVar22[7] = (int)((float)piVar22[7] + (float)piVar22[0x2c]);
              piVar22[9] = (int)((float)piVar22[9] + (float)piVar22[0x2e]);
            }
            piVar22[2] = piVar22[2] + 1;
            if (temp_v18 <= 0.0f) {
              FUN_002804ec(g_lmapScene + 10);
              mapSelectContainingRegions();
              return;
            }
          }
        }
        else {
          if (temp_v7 == 0x37) {
            g_lmapScene[2] = g_lmapScene[2] + 1;
            mapDestroySecondaryModel();
            lmapSetSceneId(0xc);
            FUN_002804ec(g_lmapScene + 10);
            mapSelectContainingRegions();
            return;
          }
          if (temp_v7 != 0x5a) {
            if (temp_v7 != 0x5b) {
              if ((temp_v7 != 0x5c) ||
                 (temp_v7 = g_lmapScene[2], g_lmapScene[2] = temp_v7 + 1, temp_v7 + 1 < 4)) {
                FUN_002804ec(g_lmapScene + 10);
                mapSelectContainingRegions();
                return;
              }
              temp_v6 = 1;
              lmapSetSceneId(temp_v6);
              FUN_002804ec(g_lmapScene + 10);
              mapSelectContainingRegions();
              return;
            }
            mapDestroySecondaryModel();
            piVar22 = g_lmapScene;
            temp_v7 = piVar22[1];
          }
        }
        piVar22[1] = temp_v7 + 1;
        piVar22[2] = 0;
        FUN_002804ec(g_lmapScene + 10);
        mapSelectContainingRegions();
        return;
      }
      switch(temp_v7) {
      case 0:
        g_lmapScene[0x15] = 0;
        piVar22[0x16] = 0x40400000;
        *(unsigned char *)(piVar22 + 0x1b) = 0;
        temp_v7 = DAT_0049f9a8;
        temp_v18 = DAT_0049f9a4;
        piVar22[10] = DAT_0049f9a0;
        piVar22[0xb] = (int)temp_v18;
        piVar22[0xc] = temp_v7;
        piVar22[0x14] = (int)DAT_0049f9ac;
        FUN_0027fc14(0xc);
        DAT_004474f4[0x2b] = -3;
        buttonHelpSetPreset(0xdb);
        mapIfActivateRecord(1,DAT_0049f99c);
        FUN_0028250c();
        FUN_00282390();
        FUN_00248114();
        piVar22 = g_lmapScene;
        temp_v7 = piVar22[1];
        piVar22[1] = temp_v7 + 1;
        piVar22[2] = 0;
        break;
      case 1:
        g_lmapScene[2] = g_lmapScene[2] + 1;
        mapIfActivateRecord(1,DAT_0049f99c);
        piVar22 = g_lmapScene;
        if (g_lmapScene[2] >= 3) {
          temp_v7 = g_lmapScene[1];
          g_lmapScene[0x15] = 0x1d;
          piVar22[0x16] = temp_v31;
          piVar22[1] = temp_v7 + 1;
          piVar22[2] = 0;
        }
        break;
      case 2:
        g_lmapScene[2] = g_lmapScene[2] + 1;
        mapIfActivateRecord(1,DAT_0049f99c);
        temp_v7 = FUN_0027ee9c();
        if (temp_v7 != 0) {
          FUN_0027d7b0(DAT_0049f990,DAT_0049f994,DAT_0049f998);
          temp_v7 = dataTableGetRecord23();
          piVar22 = g_lmapScene;
          if (DAT_0049f968 != 0) {
            temp_v17 = (float)g_lmapScene[0x14] * temp_v18;
            FUN_0028250c();
            piVar22 = g_lmapScene;
            temp_v19 = 250.0f;
            g_lmapScene[0x28] = (int)((float)g_lmapScene[10] + temp_v17 * 250.0f);
            piVar22[0x29] = (int)((float)piVar22[0xb] - 500.0f);
            temp_v18 = (float)piVar22[0x14] * temp_v18;
            FUN_00282390();
            piVar22 = g_lmapScene;
            g_lmapScene[0x2a] = (int)((float)g_lmapScene[0xc] + temp_v18 * temp_v19);
            piVar22[0x2b] = piVar22[0x14];
            piVar22[1] = 0x32;
            piVar22[2] = 0;
          }
          else {
            temp_v31 = VectorSignedToFloat((int)*(short *)(temp_v7 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
            g_lmapScene[0x28] = temp_v31;
            temp_v31 = VectorSignedToFloat((int)*(short *)(temp_v7 + 6),(unsigned char)(in_fpscr >> 0x16) & 3);
            piVar22[0x29] = temp_v31;
            temp_v31 = VectorSignedToFloat((int)*(short *)(temp_v7 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
            piVar22[0x2a] = temp_v31;
            temp_v7 = VectorSignedToFloat((int)*(short *)(temp_v7 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
            piVar22[0x2b] = temp_v7;
            piVar22[1] = 10;
            piVar22[2] = 0;
          }
        }
        else {
          temp_v7 = padIsButtonPressed(5);
          if ((temp_v7 != 0) || (temp_v7 = inputIsQuestMenuPressed(), temp_v7 != 0)) {
            piVar22 = DAT_004474f4;
            DAT_004474f4[6] = g_lmapScene[0x14];
            piVar22[0x2b] = 0;
            FUN_0027fc14(0);
            piVar22 = g_lmapScene;
            g_lmapScene[0x15] = 0;
            piVar22[0x16] = 0x40a00000;
            mapIfActivateRecord(0,DAT_0049f99c);
            mapIfReleaseSlot2();
            piVar22 = g_lmapScene;
            g_lmapScene[1] = 0x5a;
            piVar22[2] = 0;
          }
        }
        break;
      case 10:
        DAT_0049fb46 = 0;
        DAT_004474f4[3] = 1;
        piVar22[0x15] = 5;
        piVar22[0x16] = 0x40400000;
        piVar22[0x2c] = (int)((float)piVar22[0x28] - (float)piVar22[7]);
        piVar22[0x2d] = (int)((float)piVar22[0x29] - (float)piVar22[8]);
        piVar22[0x2e] = (int)((float)piVar22[0x2a] - (float)piVar22[9]);
        piVar22[0x2c] = (int)(((float)piVar22[0x28] - (float)piVar22[7]) * 0.025f);
        piVar22[0x2d] = (int)((float)piVar22[0x2d] * 0.025f);
        piVar22[0x2e] = (int)((float)piVar22[0x2e] * 0.025f);
        piVar22 = g_lmapScene;
        g_lmapScene[0x2f] = 0;
        temp_v7 = piVar22[1];
        piVar22[1] = temp_v7 + 1;
        piVar22[2] = 0;
        break;
      case 0xb:
        temp_v7 = g_lmapScene[2];
        g_lmapScene[2] = temp_v7 + 1;
        if (temp_v7 + 1 < 0x15) break;
        FUN_0027fae4();
        switch(DAT_0049f94a) {
        case 0:
          FUN_00291e40(temp_v6);
          break;
        case 1:
          temp_v6 = 0x100021d;
          FUN_00291e40(temp_v6);
          break;
        case 2:
          temp_v6 = 0x100021f;
          FUN_00291e40(temp_v6);
          break;
        case 3:
          temp_v6 = 0x1000221;
          FUN_00291e40(temp_v6);
          break;
        case 4:
          FUN_00291e40(0x1000223);
        default:
        }
LAB_002e94f0:
        FUN_0027fca0(0xffffffff);
        FUN_0028250c();
        FUN_00282390();
        temp_v7 = randBetween(0,1);
        FUN_00291e40(temp_v7 + 0x100023c);
        piVar22 = g_lmapScene;
        g_lmapScene[0x1a] = (int)temp_v17;
        piVar22[8] = (int)((float)piVar22[8] + temp_v17);
        temp_v7 = piVar22[1];
        piVar22[1] = temp_v7 + 1;
        piVar22[2] = 0;
        break;
      case 0xc:
        pfVar10 = (float *)(g_lmapScene + 8);
        temp_v7 = g_lmapScene[0x2f];
        temp_v18 = (float)g_lmapScene[0x1a] - 2.0f;
        g_lmapScene[0x1a] = (int)temp_v18;
        piVar22[8] = (int)(*pfVar10 + temp_v18);
        if (temp_v7 < 0x28) {
          piVar22[0x2f] = temp_v7 + 1;
          piVar22[7] = (int)((float)piVar22[7] + (float)piVar22[0x2c]);
          piVar22[9] = (int)((float)piVar22[9] + (float)piVar22[0x2e]);
        }
        piVar22[2] = piVar22[2] + 1;
        if (0.0f < temp_v18) {
          piVar22[1] = 0xd;
          piVar22[2] = 0;
        }
        break;
      case 0xd:
        temp_v18 = (float)g_lmapScene[0x1a];
        pfVar10 = (float *)(g_lmapScene + 8);
        temp_v7 = g_lmapScene[0x2f];
        g_lmapScene[0x1a] = (int)(temp_v18 - 2.0f);
        temp_v18 = *pfVar10 + (temp_v18 - 2.0f);
        piVar22[8] = (int)temp_v18;
        if (temp_v7 < 0x28) {
          piVar22[0x2f] = temp_v7 + 1;
          piVar22[7] = (int)((float)piVar22[7] + (float)piVar22[0x2c]);
          piVar22[9] = (int)((float)piVar22[9] + (float)piVar22[0x2e]);
        }
        temp_v17 = (float)piVar22[0x29];
        piVar22[2] = piVar22[2] + 1;
        if (temp_v18 < temp_v17) {
          temp_v7 = piVar22[0x28];
          temp_v31 = piVar22[0x2a];
          piVar22[7] = temp_v7;
          piVar22[0x1a] = 0;
          piVar22[9] = temp_v31;
          piVar22[8] = (int)temp_v17;
          piVar22[0x15] = 7;
          piVar22[0x16] = 0x40400000;
          piVar22[0xc] = temp_v31;
          piVar22[2] = 0;
          piVar22[1] = 0xe;
          piVar22[10] = temp_v7;
          piVar22[0xb] = (int)temp_v17;
          piVar22[0xf] = temp_v31;
          piVar22[0xd] = temp_v7;
          piVar22[0xe] = (int)temp_v17;
          piVar22[0x12] = temp_v31;
          piVar22[0x10] = temp_v7;
          piVar22[0x11] = (int)temp_v17;
        }
        break;
      case 0xe:
        temp_v7 = g_lmapScene[2];
        g_lmapScene[2] = temp_v7 + 1;
        if (temp_v7 + 1 == 1) {
          mapIfReleaseSlot2();
          piVar22 = DAT_004474f4;
          DAT_004474f4[6] = g_lmapScene[0x14];
          piVar22[0x2b] = 0;
          FUN_0027fc14(0);
          *(unsigned char *)(DAT_004474f4 + 0x29) = 1;
        }
        if (g_lmapScene[2] == 3) {
          FUN_0027fae4();
          switch(DAT_0049f94a) {
          case 0:
            temp_v6 = 0x100021c;
            FUN_00291e40(temp_v6);
            break;
          case 1:
            temp_v6 = 0x100021e;
            FUN_00291e40(temp_v6);
            break;
          case 2:
            temp_v6 = 0x1000220;
            FUN_00291e40(temp_v6);
            break;
          case 3:
            temp_v6 = 0x1000222;
            FUN_00291e40(temp_v6);
            break;
          case 4:
            FUN_00291e40(0x1000224);
          default:
          }
          FUN_0027fca0(0xffffffff);
          FUN_0028250c();
          FUN_00282390();
          temp_v7 = randBetween(0,1);
          FUN_00291e40(temp_v7 + 0x100023e);
        }
        if (g_lmapScene[2] != 6) break;
        if (g_lmapScene[0x2f] >= 0x24) {
          temp_v6 = 0x1e;
          temp_v8 = 0x14;
        }
        else {
          temp_v6 = 0xf;
          temp_v8 = 10;
        }
        FUN_002879dc(temp_v8,temp_v6,0);
        temp_v7 = g_lmapScene[1];
        piVar22 = g_lmapScene;
        piVar22[1] = temp_v7 + 1;
        piVar22[2] = 0;
        break;
      case 0xf:
        mapDestroySecondaryModel();
        piVar22 = g_lmapScene;
        temp_v7 = piVar22[1];
        piVar22[1] = temp_v7 + 1;
        piVar22[2] = 0;
      }
    }
    else {
      temp_v7 = g_lmapScene[2];
      g_lmapScene[2] = temp_v7 + 1;
      if ((temp_v7 + 1 < 0x12) ||
         ((((FUN_0027f958((int)&uStack_54 + 4,&uStack_4c,0), (*(unsigned int *)((unsigned char *)&uStack_54 + 4)) < 0xbf000001 &&
            ((int)(*(unsigned int *)((unsigned char *)&uStack_54 + 4)) < 0x3f000001)) && ((unsigned int)uStack_4c < 0xbf000001)) &&
          (((int)(unsigned int)uStack_4c < 0x3f000001 && (g_lmapScene[2] < 0x1f)))))) {
        FUN_002804ec(g_lmapScene + 10);
        mapSelectContainingRegions();
        return;
      }
      g_lmapScene[0x16] = 0x40a00000;
      temp_v6 = 0xc;
      lmapSetSceneId(temp_v6);
    }
    FUN_002804ec(g_lmapScene + 10);
    mapSelectContainingRegions();
    return;
  case 0xd:
    fStack_3c = temp_v17;
    fStack_38 = temp_v19;
    fStack_34 = temp_v34;
    fStack_2c = temp_v35;
    fStack_24 = fStack_20;
    fStack_20 = fStack_1c;
    temp_v18 = fStack_28;
    if (g_lmapScene[1] < 10) {
      temp_v18 = fStack_28;
      fStack_28 = temp_v20;
      fStack_20 = fStack_1c;
      fStack_1c = temp_v18;
      mapEaseSceneHeading();
      piVar22 = g_lmapScene;
      g_lmapScene[7] =
           (int)((float)g_lmapScene[7] +
                ((float)g_lmapScene[10] - (float)g_lmapScene[7]) * 0.33333334f);
      piVar22[8] = (int)((float)piVar22[8] + ((float)piVar22[0xb] - (float)piVar22[8]) * 0.16666667f)
      ;
      piVar22[9] = (int)((float)piVar22[9] + ((float)piVar22[0xc] - (float)piVar22[9]) * 0.33333334f)
      ;
      temp_v20 = fStack_28;
      temp_v18 = fStack_1c;
    }
    fStack_1c = temp_v18;
    fStack_28 = temp_v20;
    piVar22 = g_lmapScene;
    temp_v31 = 0x40000000;
    temp_v7 = g_lmapScene[1];
    temp_v17 = 0.0f;
    temp_v18 = 180.0f;
    if (temp_v7 != 0xb) {
      if (temp_v7 < 0xb) {
        temp_v19 = 0.017453292f;
        if (temp_v7 != 0) {
          if (temp_v7 != 1) {
            if (temp_v7 != 2) {
              if (temp_v7 == 10) {
                temp_v7 = g_lmapScene[2];
                g_lmapScene[2] = temp_v7 + 1;
                if (temp_v7 + 1 == 1) {
                  piVar22[0x15] = 0x10;
                  piVar22[0x16] = 0;
                  FUN_00291e40();
                  FUN_0027fca0(0xffffffff);
                  FUN_0028250c();
                  FUN_00282390();
                  FUN_00291e40(0x1000240);
                }
                if (g_lmapScene[2] == 2) {
                  mapIfReleaseSlot2();
                  piVar22 = g_lmapScene;
                  DAT_0049fb46 = 0;
                  piVar23 = g_lmapScene + 7;
                  g_lmapScene[0x13] = g_lmapScene[0x14];
                  temp_v7 = piVar22[0xb];
                  temp_v31 = piVar22[0xc];
                  *piVar23 = piVar22[10];
                  piVar22[8] = temp_v7;
                  piVar22[9] = temp_v31;
                  piVar22[1] = piVar22[1] + 1;
                  piVar22[2] = 0;
                }
              }
            }
            else {
              g_lmapScene[2] = g_lmapScene[2] + 1;
              mapIfActivateRecord(1,DAT_0049f99c);
              temp_v7 = FUN_0027ee9c();
              piVar22 = g_lmapScene;
              if (temp_v7 != 0) {
                g_lmapScene[1] = 10;
                piVar22[2] = 0;
                if (DAT_0049f968 == 0) {
                  temp_v7 = 3;
                }
                else {
                  temp_v7 = 4;
                }
                DAT_004474f4[3] = temp_v7;
                fStack_3c = (float)piVar22[0xb];
                fStack_38 = (float)piVar22[0xc];
                uStack_4c = romwright_piece_4_4(&fStack_34,(unsigned int)uStack_4c);
                uStack_44 = romwright_piece_4_4(piVar22[10],0xffffffff);
                lmapFindNearestMatchingTargetPoint(2,10,0x66,(int)&uStack_44 + 4);
                piVar22 = g_lmapScene;
                fStack_34 = fStack_34 + temp_v18;
                if (fStack_34 < temp_v17) {
                  fStack_34 = fStack_34 + 360.0f;
                }
                if ((int)fStack_34 >= 0x43b40001) {
                  fStack_34 = fStack_34 - 360.0f;
                }
                g_lmapScene[0x14] = (int)fStack_34;
                piVar22[10] = (*(unsigned int *)((unsigned char *)&uStack_44 + 4));
                piVar22[0xb] = (int)fStack_3c;
                piVar22[0xc] = (int)fStack_38;
                temp_v17 = (fStack_34 + temp_v18) * temp_v19;
                piVar22[0xb] = (int)(fStack_3c - 142.0f);
                FUN_0028250c();
                piVar22 = g_lmapScene;
                temp_v34 = 35.0f;
                g_lmapScene[10] = (int)((float)g_lmapScene[10] + temp_v17 * 35.0f);
                temp_v19 = ((float)piVar22[0x14] + temp_v18) * temp_v19;
                FUN_00282390();
                g_lmapScene[0xc] = (int)((float)g_lmapScene[0xc] + temp_v19 * temp_v34);
              }
              else {
                temp_v7 = padIsButtonPressed(5);
                if ((temp_v7 != 0) || (temp_v7 = inputIsQuestMenuPressed(), temp_v7 != 0)) {
                  piVar22 = DAT_004474f4;
                  DAT_004474f4[6] = g_lmapScene[0x14];
                  piVar22[0x2b] = 0;
                  FUN_0027fc14(0);
                  piVar22 = g_lmapScene;
                  g_lmapScene[0x15] = 0;
                  piVar22[0x16] = 0x40a00000;
                  mapIfActivateRecord(0,DAT_0049f99c);
                  mapIfReleaseSlot2();
                  piVar22 = g_lmapScene;
                  g_lmapScene[1] = 0x5a;
                  piVar22[2] = 0;
                }
              }
            }
          }
          else {
            g_lmapScene[2] = g_lmapScene[2] + 1;
            mapIfActivateRecord(1,DAT_0049f99c);
            piVar22 = g_lmapScene;
            if (g_lmapScene[2] >= 3) {
              temp_v7 = g_lmapScene[1];
              g_lmapScene[0x15] = 0x1d;
              piVar22[0x16] = temp_v31;
              piVar22[1] = temp_v7 + 1;
              piVar22[2] = 0;
            }
          }
        }
        else {
          g_lmapScene[0x15] = 0;
          piVar22[0x16] = 0x40400000;
          *(unsigned char *)(piVar22 + 0x1b) = 0;
          temp_v7 = DAT_0049f9a8;
          temp_v18 = DAT_0049f9a4;
          piVar22[10] = DAT_0049f9a0;
          piVar22[0xb] = (int)temp_v18;
          piVar22[0xc] = temp_v7;
          piVar22[0x14] = (int)DAT_0049f9ac;
          FUN_0027fc14(0xc);
          DAT_004474f4[0x2b] = -3;
          buttonHelpSetPreset(0xdb);
          mapIfActivateRecord(1,DAT_0049f99c);
          FUN_0028250c();
          FUN_00282390();
          FUN_00248114();
          piVar22 = g_lmapScene;
          g_lmapScene[1] = g_lmapScene[1] + 1;
          piVar22[2] = 0;
        }
      }
      else {
        if (temp_v7 == 0xc) {
          temp_v6 = 0xe;
        }
        else {
          if (temp_v7 == 0x5a) {
            g_lmapScene[1] = 0x5b;
            piVar22[2] = 0;
            FUN_002804ec(g_lmapScene + 10);
            mapSelectContainingRegions();
            return;
          }
          if (temp_v7 == 0x5b) {
            mapDestroySecondaryModel(0x1000212);
            piVar22 = g_lmapScene;
            g_lmapScene[1] = g_lmapScene[1] + 1;
            piVar22[2] = 0;
            FUN_002804ec(g_lmapScene + 10);
            mapSelectContainingRegions();
            return;
          }
          if ((temp_v7 != 0x5c) ||
             (temp_v7 = g_lmapScene[2], g_lmapScene[2] = temp_v7 + 1, temp_v7 + 1 < 4)) {
            FUN_002804ec(g_lmapScene + 10);
            mapSelectContainingRegions();
            return;
          }
          temp_v6 = 1;
        }
        lmapSetSceneId(temp_v6);
      }
    }
    else {
      piVar23 = g_lmapScene + 10;
      temp_v19 = (float)g_lmapScene[0xb] - 2.0f;
      temp_v7 = g_lmapScene[0xc];
      temp_v5 = g_lmapScene[2] + 1;
      g_lmapScene[0xb] = (int)temp_v19;
      piVar22[7] = *piVar23;
      piVar22[2] = temp_v5;
      piVar22[9] = temp_v7;
      piVar22[8] = (int)temp_v19;
      if ((temp_v5 == 1) || ((temp_v5 == 0xb || temp_v5 == 0x1c) || temp_v5 == 0x29)) {
        FUN_00291e40((temp_v5 & 3) + 0x1000212,piVar22,temp_v5 & 3,temp_v19);
        FUN_0027fca0(0xffffffff);
      }
      if (g_lmapScene[2] == 0x1e) {
        mapInterfaceSetStateTwo();
      }
      if ((g_lmapScene[2] >= 0x1f) && (temp_v7 = mapIfHasSelection(), temp_v7 == 0)) {
        mapDestroySecondaryModel();
        piVar22 = DAT_004474f4;
        DAT_004474f4[6] = (int)((float)g_lmapScene[0x14] + temp_v18);
        piVar22[0x2b] = 0;
        FUN_0027fc14(0);
        piVar22 = g_lmapScene;
        g_lmapScene[0x15] = 0;
        piVar22[0x16] = (int)temp_v17;
        piVar22[1] = piVar22[1] + 1;
        piVar22[2] = 0;
      }
    }
    FUN_002804ec(g_lmapScene + 10);
    mapSelectContainingRegions();
    return;
  case 0xf:
    fStack_28 = temp_v35;
    fStack_24 = temp_v20;
    mapEaseSceneHeading();
    piVar22 = g_lmapScene;
    temp_v18 = (float)g_lmapScene[7] +
             ((float)g_lmapScene[10] - (float)g_lmapScene[7]) * 0.33333334f;
    g_lmapScene[7] = (int)temp_v18;
    piVar22[8] = (int)((float)piVar22[8] + ((float)piVar22[0xb] - (float)piVar22[8]) * 0.16666667f);
    piVar22[9] = (int)((float)piVar22[9] + ((float)piVar22[0xc] - (float)piVar22[9]) * 0.33333334f);
    temp_v7 = piVar22[1];
    if (temp_v7 != 0xb) {
      if (temp_v7 < 0xc) {
        if (temp_v7 != 0) {
          if (temp_v7 != 1) {
            temp_v31 = 0x40a00000;
            if (temp_v7 != 2) {
              if (temp_v7 == 10) {
                DAT_0049fb46 = 0;
                piVar22[0x15] = 8;
                piVar22[0x16] = 0x40a00000;
                FUN_0027fca0(1);
                temp_v7 = g_lmapScene[1];
                piVar22 = g_lmapScene;
                piVar22[1] = temp_v7 + 1;
                piVar22[2] = 0;
              }
            }
            else {
              piVar22[2] = piVar22[2] + 1;
              mapIfActivateRecord(1,DAT_0049f99c);
              temp_v7 = FUN_0027ee9c();
              piVar22 = g_lmapScene;
              if (temp_v7 != 0) {
                g_lmapScene[1] = 10;
                piVar22[2] = 0;
              }
              else {
                temp_v7 = padIsButtonPressed(5);
                if ((temp_v7 != 0) || (temp_v7 = inputIsQuestMenuPressed(), temp_v7 != 0)) {
                  piVar22 = DAT_004474f4;
                  DAT_004474f4[6] = g_lmapScene[0x14];
                  piVar22[0x2b] = 0;
                  FUN_0027fc14(0);
                  piVar22 = g_lmapScene;
                  g_lmapScene[0x15] = 0;
                  piVar22[0x16] = temp_v31;
                  mapIfActivateRecord(0,DAT_0049f99c);
                  piVar22 = g_lmapScene;
                  g_lmapScene[1] = 0x5a;
                  piVar22[2] = 0;
                }
              }
            }
          }
          else {
            piVar22[2] = piVar22[2] + 1;
            mapIfActivateRecord(1,DAT_0049f99c);
            piVar22 = g_lmapScene;
            if (g_lmapScene[2] >= 3) {
              temp_v7 = g_lmapScene[1];
              g_lmapScene[0x15] = 0x1d;
              piVar22[0x16] = 0x40000000;
              piVar22[1] = temp_v7 + 1;
              piVar22[2] = 0;
            }
          }
        }
        else {
          piVar22[0x15] = 0;
          piVar22[0x16] = 0x40400000;
          *(unsigned char *)(piVar22 + 0x1b) = 0;
          mathDistanceBetweenPoints();
          temp_v7 = DAT_0049f9a8;
          temp_v17 = DAT_0049f9a4;
          piVar22 = g_lmapScene;
          temp_v34 = 180.0f;
          temp_v19 = 0.017453292f;
          temp_v35 = 100.0f;
          if ((int)temp_v18 < 0x42700000) {
            g_lmapScene[10] = DAT_0049f9a0;
            piVar22[0xb] = (int)temp_v17;
            piVar22[0xc] = temp_v7;
            temp_v18 = ((float)piVar22[0x13] + 180.0f) * 0.017453292f;
            FUN_0028250c();
            piVar22 = g_lmapScene;
            g_lmapScene[10] = (int)((float)g_lmapScene[10] + temp_v18 * temp_v35);
            temp_v19 = ((float)piVar22[0x13] + temp_v34) * temp_v19;
            FUN_00282390();
            piVar22 = g_lmapScene;
            g_lmapScene[0xc] = (int)((float)g_lmapScene[0xc] + temp_v19 * temp_v35);
            temp_v7 = piVar22[10];
            mathPositionHeadingDegrees();
            g_lmapScene[0x14] = temp_v7;
          }
          else {
            temp_v17 = (float)g_lmapScene[10];
            mathPositionHeadingDegrees();
            piVar22 = g_lmapScene;
            g_lmapScene[0x14] = (int)temp_v17;
            temp_v7 = DAT_0049f9a8;
            temp_v18 = DAT_0049f9a4;
            piVar22[10] = DAT_0049f9a0;
            piVar22[0xb] = (int)temp_v18;
            piVar22[0xc] = temp_v7;
            temp_v18 = (temp_v17 + temp_v34) * temp_v19;
            FUN_0028250c();
            piVar22 = g_lmapScene;
            g_lmapScene[10] = (int)((float)g_lmapScene[10] + temp_v18 * temp_v35);
            temp_v19 = ((float)piVar22[0x14] + temp_v34) * temp_v19;
            FUN_00282390();
            g_lmapScene[0xc] = (int)((float)g_lmapScene[0xc] + temp_v19 * temp_v35);
          }
          FUN_0027fc14(10);
          DAT_004474f4[0x2b] = -1;
          buttonHelpSetPreset(0xdb);
          mapIfActivateRecord(1,DAT_0049f99c);
          temp_v7 = g_lmapScene[1];
          piVar22 = g_lmapScene;
          piVar22[1] = temp_v7 + 1;
          piVar22[2] = 0;
        }
      }
      else if (!(temp_v7 == 0x5a || temp_v7 == 0x5b)) {
        if ((temp_v7 == 0x5c) && (temp_v7 = piVar22[2], piVar22[2] = temp_v7 + 1, temp_v7 + 1 >= 4)) {
          FUN_0027fca0(0);
          temp_v6 = 1;
          lmapSetSceneId(temp_v6);
        }
      }
      else {
        piVar22[1] = temp_v7 + 1;
        piVar22[2] = 0;
      }
    }
    else {
      temp_v7 = piVar22[2];
      piVar22[2] = temp_v7 + 1;
      if (temp_v7 + 1 >= 0x10) {
        temp_v6 = 0x10;
        lmapSetSceneId(temp_v6);
      }
    }
    FUN_002804ec(g_lmapScene + 10);
    fStack_38 = fStack_28;
    fStack_34 = fStack_24;
    fStack_30 = fStack_20;
    fStack_2c = fStack_1c;
    goto code_r0x00280364;
  case 0x11:
    fStack_30 = temp_v35;
    fStack_2c = temp_v20;
    temp_v18 = fStack_20;
    temp_v17 = fStack_1c;
    temp_v19 = fStack_28;
    temp_v34 = fStack_24;
    if (g_lmapScene[1] < 10) {
      temp_v18 = fStack_28;
      fStack_28 = fStack_20;
      temp_v17 = fStack_24;
      fStack_24 = fStack_1c;
      fStack_20 = temp_v18;
      fStack_1c = temp_v17;
      mapEaseSceneHeading();
      piVar22 = g_lmapScene;
      g_lmapScene[7] =
           (int)((float)g_lmapScene[7] +
                ((float)g_lmapScene[10] - (float)g_lmapScene[7]) * 0.33333334f);
      piVar22[8] = (int)((float)piVar22[8] + ((float)piVar22[0xb] - (float)piVar22[8]) * 0.16666667f)
      ;
      piVar22[9] = (int)((float)piVar22[9] + ((float)piVar22[0xc] - (float)piVar22[9]) * 0.33333334f)
      ;
      temp_v18 = fStack_28;
      temp_v17 = fStack_24;
      temp_v19 = fStack_20;
      temp_v34 = fStack_1c;
    }
    fStack_1c = temp_v34;
    fStack_20 = temp_v19;
    fStack_24 = temp_v17;
    fStack_28 = temp_v18;
    piVar22 = g_lmapScene;
    temp_v31 = 0x40000000;
    temp_v13 = 0;
    temp_v7 = g_lmapScene[1];
    if (temp_v7 != 0x35) {
      if (0x35 >= temp_v7) {
        temp_v18 = 0.017453292f;
        if (temp_v7 != 0x32) {
          if (temp_v7 < 0x33) {
            if (temp_v7 != 0) {
              if (temp_v7 != 1) {
                if (temp_v7 == 2) {
                  g_lmapScene[2] = g_lmapScene[2] + 1;
                  mapIfActivateRecord(1,DAT_0049f99c);
                  temp_v7 = FUN_0027ee9c();
                  if (temp_v7 != 0) {
                    FUN_0027d7b0(DAT_0049f990,DAT_0049f994,DAT_0049f998);
                    piVar22 = g_lmapScene;
                    g_lmapScene[0x28] = DAT_0049f9a0;
                    piVar22[0x29] = (int)(DAT_0049f9a4 - 500.0f);
                    piVar22[0x2a] = DAT_0049f9a8;
                    piVar22[0x2b] = piVar22[0x14];
                    piVar22[1] = 0x32;
                    piVar22[2] = 0;
                  }
                  else {
                    temp_v7 = padIsButtonPressed(5);
                    if ((temp_v7 != 0) || (temp_v7 = inputIsQuestMenuPressed(), temp_v7 != 0)) {
                      piVar22 = DAT_004474f4;
                      DAT_004474f4[6] = g_lmapScene[0x14];
                      piVar22[0x2b] = 0;
                      FUN_0027fc14(0);
                      piVar22 = g_lmapScene;
                      g_lmapScene[0x15] = 0;
                      piVar22[0x16] = 0x40a00000;
                      mapIfActivateRecord(0,DAT_0049f99c);
                      mapIfReleaseSlot2();
                      piVar22 = g_lmapScene;
                      g_lmapScene[1] = 0x5a;
                      piVar22[2] = 0;
                    }
                  }
                }
              }
              else {
                g_lmapScene[2] = g_lmapScene[2] + 1;
                mapIfActivateRecord(1,DAT_0049f99c);
                piVar22 = g_lmapScene;
                if (g_lmapScene[2] >= 3) {
                  temp_v7 = g_lmapScene[1];
                  g_lmapScene[0x15] = 0x1d;
                  piVar22[0x16] = temp_v31;
                  piVar22[1] = temp_v7 + 1;
                  piVar22[2] = 0;
                }
              }
            }
            else {
              g_lmapScene[0x15] = 0;
              piVar22[0x16] = 0x40400000;
              *(unsigned char *)(piVar22 + 0x1b) = 0;
              temp_v19 = (float)piVar22[10];
              mathPositionHeadingDegrees();
              piVar22 = g_lmapScene;
              temp_v34 = 180.0f;
              g_lmapScene[0x14] = (int)temp_v19;
              temp_v7 = DAT_0049f9a8;
              temp_v17 = DAT_0049f9a4;
              piVar22[10] = DAT_0049f9a0;
              piVar22[0xb] = (int)temp_v17;
              piVar22[0xc] = temp_v7;
              temp_v17 = (temp_v19 + 180.0f) * temp_v18;
              FUN_0028250c();
              piVar22 = g_lmapScene;
              temp_v19 = 110.0f;
              g_lmapScene[10] = (int)((float)g_lmapScene[10] + temp_v17 * 110.0f);
              temp_v18 = ((float)piVar22[0x14] + temp_v34) * temp_v18;
              FUN_00282390();
              g_lmapScene[0xc] = (int)((float)g_lmapScene[0xc] + temp_v18 * temp_v19);
              FUN_0027fc14(10);
              DAT_004474f4[0x2b] = -1;
              buttonHelpSetPreset(0xdb);
              mapIfActivateRecord(1,DAT_0049f99c);
              FUN_0028250c();
              FUN_00282390();
              FUN_00248114();
              temp_v7 = g_lmapScene[1];
              piVar22 = g_lmapScene;
              piVar22[1] = temp_v7 + 1;
              piVar22[2] = 0;
            }
          }
          else if (temp_v7 != 0x33) {
            if (temp_v7 == 0x34) {
              pfVar10 = (float *)(g_lmapScene + 8);
              temp_v31 = g_lmapScene[0x2f];
              temp_v18 = (float)g_lmapScene[0x1a] - 2.0f;
              g_lmapScene[0x1a] = (int)temp_v18;
              piVar22[8] = (int)(*pfVar10 + temp_v18);
              if (temp_v31 < 0x28) {
                piVar22[0x2f] = temp_v31 + 1;
                piVar22[7] = (int)((float)piVar22[7] + (float)piVar22[0x2c]);
                piVar22[9] = (int)((float)piVar22[9] + (float)piVar22[0x2e]);
              }
              piVar22[2] = piVar22[2] + 1;
              if (0.0f < temp_v18) {
                piVar22[1] = temp_v7 + 1;
                piVar22[2] = 0;
              }
            }
          }
          else {
            temp_v7 = g_lmapScene[2];
            g_lmapScene[2] = temp_v7 + 1;
            if (temp_v7 + 1 >= 0x15) {
              FUN_0027fae4();
              switch(DAT_0049f94a) {
              case 0:
                temp_v6 = 0x100021b;
                FUN_00291e40(temp_v6);
                break;
              case 1:
                temp_v6 = 0x100021d;
                FUN_00291e40(temp_v6);
                break;
              case 2:
                temp_v6 = 0x100021f;
                FUN_00291e40(temp_v6);
                break;
              case 3:
                temp_v6 = 0x1000221;
                FUN_00291e40(temp_v6);
                break;
              case 4:
                FUN_00291e40(0x1000223);
              default:
              }
              FUN_0027fca0(0xffffffff);
              FUN_0028250c();
              FUN_00282390();
              temp_v7 = randBetween(0,1);
              FUN_00291e40(temp_v7 + 0x100023c);
              piVar22 = g_lmapScene;
              g_lmapScene[0x1a] = 0x41000000;
              piVar22[8] = (int)((float)piVar22[8] + 8.0f);
              temp_v7 = piVar22[1];
              piVar22[1] = temp_v7 + 1;
              piVar22[2] = 0;
            }
          }
        }
        else {
          DAT_0049fb46 = 0;
          DAT_004474f4[3] = 2;
          piVar22[0x15] = 5;
          piVar22[0x16] = 0x40400000;
          piVar22[0x2c] = (int)((float)piVar22[0x28] - (float)piVar22[7]);
          piVar22[0x2d] = (int)((float)piVar22[0x29] - (float)piVar22[8]);
          piVar22[0x2e] = (int)((float)piVar22[0x2a] - (float)piVar22[9]);
          piVar22[0x2c] = (int)(((float)piVar22[0x28] - (float)piVar22[7]) * 0.025f);
          piVar22[0x2d] = (int)((float)piVar22[0x2d] * 0.025f);
          piVar22[0x2e] = (int)((float)piVar22[0x2e] * 0.025f);
          piVar22 = g_lmapScene;
          g_lmapScene[0x2f] = 0;
          temp_v7 = piVar22[1];
          piVar22[1] = temp_v7 + 1;
          piVar22[2] = 0;
        }
      }
      else if (temp_v7 != 0x5a) {
        if (0x5a >= temp_v7) {
          if (temp_v7 != 0x36) {
            if (temp_v7 == 0x37) {
              g_lmapScene[2] = g_lmapScene[2] + 1;
              mapDestroySecondaryModel();
              temp_v6 = 0x12;
              lmapSetSceneId(temp_v6);
            }
          }
          else {
            mapIfReleaseSlot2();
            piVar23 = g_lmapScene;
            g_lmapScene[0x1a] = temp_v13;
            piVar22 = DAT_004474f4;
            DAT_004474f4[6] = piVar23[0x14];
            piVar22[0x2b] = 0;
            FUN_0027fc14(0);
            piVar22 = g_lmapScene;
            temp_v7 = piVar22[1];
            piVar22[1] = temp_v7 + 1;
            piVar22[2] = 0;
          }
        }
        else if (temp_v7 != 0x5b) {
          if ((temp_v7 == 0x5c) &&
             (temp_v7 = g_lmapScene[2], g_lmapScene[2] = temp_v7 + 1, temp_v7 + 1 >= 4)) {
            temp_v6 = 1;
            lmapSetSceneId(temp_v6);
          }
        }
        else {
          mapDestroySecondaryModel();
          piVar22 = g_lmapScene;
          temp_v7 = piVar22[1];
          piVar22[1] = temp_v7 + 1;
          piVar22[2] = 0;
        }
      }
      else {
        piVar22[1] = temp_v7 + 1;
        piVar22[2] = 0;
      }
    }
    else {
      temp_v18 = (float)g_lmapScene[0x1a];
      pfVar10 = (float *)(g_lmapScene + 8);
      temp_v7 = g_lmapScene[0x2f];
      g_lmapScene[0x1a] = (int)(temp_v18 - 2.0f);
      piVar22[8] = (int)(*pfVar10 + (temp_v18 - 2.0f));
      if (temp_v7 < 0x28) {
        piVar22[0x2f] = temp_v7 + 1;
        piVar22[7] = (int)((float)piVar22[7] + (float)piVar22[0x2c]);
        piVar22[9] = (int)((float)piVar22[9] + (float)piVar22[0x2e]);
      }
      temp_v7 = piVar22[2];
      piVar22[2] = temp_v7 + 1;
      if (temp_v7 + 1 == 10) {
        FUN_002bf810(0x10000e7);
      }
      if (g_lmapScene[2] == 0x1e) {
        slotSetRequest(0,10,0xff);
        slotSetRequest(1,10,0xff);
      }
      if ((g_lmapScene[2] >= 0x1f) && (temp_v7 = FUN_002896bc(), temp_v7 != 0)) {
        temp_v7 = g_lmapScene[1];
        piVar22 = g_lmapScene;
        piVar22[1] = temp_v7 + 1;
        piVar22[2] = 0;
      }
    }
    FUN_002804ec(g_lmapScene + 10);
    in_d10 = CONCAT44(fStack_1c,fStack_20);
    fStack_38 = fStack_30;
    fStack_34 = fStack_2c;
    fStack_30 = fStack_28;
    fStack_2c = fStack_24;
    goto code_r0x00280364;
  case 0x13:
    fStack_38 = temp_v35;
    fStack_34 = temp_v20;
    fStack_30 = fStack_20;
    fStack_2c = fStack_1c;
    if (g_lmapScene[1] < 10) {
      mapEaseSceneHeading();
      piVar22 = g_lmapScene;
      g_lmapScene[7] =
           (int)((float)g_lmapScene[7] +
                ((float)g_lmapScene[10] - (float)g_lmapScene[7]) * 0.33333334f);
      piVar22[8] = (int)((float)piVar22[8] + ((float)piVar22[0xb] - (float)piVar22[8]) * 0.16666667f)
      ;
      piVar22[9] = (int)((float)piVar22[9] + ((float)piVar22[0xc] - (float)piVar22[9]) * 0.33333334f)
      ;
    }
    piVar22 = g_lmapScene;
    temp_v31 = 0x40a00000;
    temp_v7 = g_lmapScene[1];
    if (temp_v7 != 0xd) {
      if (0xd >= temp_v7) {
        temp_v18 = 0.017453292f;
        if (temp_v7 != 10) {
          if (temp_v7 < 0xb) {
            if (temp_v7 != 0) {
              if (temp_v7 != 1) {
                if (temp_v7 == 2) {
                  g_lmapScene[2] = g_lmapScene[2] + 1;
                  mapIfActivateRecord(1,DAT_0049f99c);
                  temp_v7 = FUN_0027ee9c();
                  piVar22 = g_lmapScene;
                  if (temp_v7 != 0) {
                    g_lmapScene[1] = 10;
                    piVar22[2] = 0;
                  }
                  else {
                    temp_v7 = padIsButtonPressed(6);
                    if ((temp_v7 != 0) || (temp_v7 = inputIsQuestMenuPressed(), temp_v7 != 0)) {
                      piVar22 = DAT_004474f4;
                      DAT_004474f4[6] = g_lmapScene[0x14];
                      piVar22[0x2b] = 0;
                      FUN_0027fc14(0);
                      piVar22 = g_lmapScene;
                      g_lmapScene[0x15] = 0;
                      piVar22[0x16] = temp_v31;
                      mapIfActivateRecord(0,DAT_0049f99c);
                      mapIfReleaseSlot3();
                      piVar22 = g_lmapScene;
                      g_lmapScene[1] = 0x5a;
                      piVar22[2] = 0;
                    }
                  }
                }
              }
              else {
                g_lmapScene[2] = g_lmapScene[2] + 1;
                mapIfActivateRecord(1,DAT_0049f99c);
                piVar22 = g_lmapScene;
                if (g_lmapScene[2] >= 3) {
                  temp_v7 = g_lmapScene[1];
                  g_lmapScene[0x15] = 0x1c;
                  piVar22[0x16] = 0x40000000;
                  piVar22[1] = temp_v7 + 1;
                  piVar22[2] = 0;
                }
              }
            }
            else {
              g_lmapScene[0x15] = 0;
              piVar22[0x16] = 0x40400000;
              *(unsigned char *)(piVar22 + 0x1b) = 0;
              temp_v7 = DAT_0049f9a8;
              temp_v17 = DAT_0049f9a4;
              piVar22[10] = DAT_0049f9a0;
              piVar22[0xb] = (int)temp_v17;
              piVar22[0xc] = temp_v7;
              temp_v17 = DAT_0049f9bc * 0.017453292f;
              FUN_0028250c();
              temp_v19 = 25.0f;
              g_lmapScene[10] = (int)((float)g_lmapScene[10] + temp_v17 * 25.0f);
              temp_v18 = DAT_0049f9bc * temp_v18;
              FUN_00282390();
              piVar22 = g_lmapScene;
              g_lmapScene[0xc] = (int)((float)g_lmapScene[0xc] + temp_v18 * temp_v19);
              piVar22[0x14] = (int)DAT_0049f9ac;
              FUN_0027fc14(0xd);
              DAT_004474f4[0x2b] = 1;
              buttonHelpSetPreset(0xda);
              mapIfActivateRecord(1,DAT_0049f99c);
              FUN_0019db68();
              piVar22 = g_lmapScene;
              g_lmapScene[1] = g_lmapScene[1] + 1;
              piVar22[2] = 0;
            }
          }
          else if (temp_v7 != 0xb) {
            if (temp_v7 == 0xc) {
              if ((DAT_0049f958 == 0x3303001) && (temp_v7 = gameFlagIsSet(0x292), temp_v7 != 0)) {
                temp_v7 = FUN_002896bc();
                if (temp_v7 != 0) {
LAB_002d472c:
                  mapIfReleaseSlot3();
                  piVar22 = DAT_004474f4;
                  DAT_004474f4[6] = g_lmapScene[0x14];
                  piVar22[0x2b] = 0;
                  FUN_0027fc14(0);
                  piVar22 = g_lmapScene;
                  g_lmapScene[1] = g_lmapScene[1] + 1;
                  piVar22[2] = 0;
                }
              }
              else {
                temp_v7 = mapIfHasSelection();
                if (temp_v7 == 0) goto LAB_002d472c;
              }
            }
          }
          else {
            temp_v7 = g_lmapScene[2];
            g_lmapScene[2] = temp_v7 + 1;
            if (temp_v7 + 1 == 10) {
              FUN_0027fae4();
              switch(DAT_0049f94a) {
              case 0:
                FUN_00291e40(0x100021b);
                break;
              case 1:
                temp_v6 = 0x100021d;
                FUN_00291e40(temp_v6);
                break;
              case 2:
                temp_v6 = 0x100021f;
                FUN_00291e40(temp_v6);
                break;
              case 3:
                temp_v6 = 0x1000221;
                FUN_00291e40(temp_v6);
                break;
              case 4:
                temp_v6 = 0x1000223;
                FUN_00291e40(temp_v6);
                break;
              default:
              }
              FUN_0027fca0(0xffffffff);
              FUN_0028250c();
              FUN_00282390();
              temp_v7 = randBetween(0,1);
              FUN_00291e40(temp_v7 + 0x100023c);
              if ((DAT_0049f958 == 0x3303001) && (temp_v7 = gameFlagIsSet(0x292), temp_v7 != 0)) {
                slotSetRequest(0,0xf,0xff);
                temp_v8 = 0xf;
                temp_v6 = 1;
                slotSetRequest(temp_v6,temp_v8,0xff);
              }
              else {
                mapInterfaceSetStateTwo();
              }
              piVar22 = g_lmapScene;
              g_lmapScene[1] = g_lmapScene[1] + 1;
              piVar22[2] = 0;
            }
          }
        }
        else {
          DAT_0049fb46 = 0;
          DAT_004474f4[3] = 1;
          piVar22[0x15] = 0x15;
          piVar22[0x16] = 0x40a00000;
          piVar22[1] = piVar22[1] + 1;
          piVar22[2] = 0;
        }
      }
      else if (temp_v7 != 100) {
        if (100 >= temp_v7) {
          if (temp_v7 != 0x5a) {
            if (temp_v7 != 0x5b) {
              if ((temp_v7 == 0x5c) &&
                 (temp_v7 = g_lmapScene[2], g_lmapScene[2] = temp_v7 + 1, temp_v7 + 1 >= 4)) {
                lmapSetSceneId(1);
              }
            }
            else {
              mapDestroyOverlayModel();
              piVar22 = g_lmapScene;
              g_lmapScene[1] = g_lmapScene[1] + 1;
              piVar22[2] = 0;
            }
          }
          else {
            g_lmapScene[1] = 0x5b;
            piVar22[2] = 0;
          }
        }
        else if (temp_v7 != 0x65) {
          if (temp_v7 == 0x66) {
            mapDestroyOverlayModel();
            lmapSetSceneId(0x14);
            piVar22 = g_lmapScene;
            g_lmapScene[1] = g_lmapScene[1] + 1;
            piVar22[2] = 0;
          }
        }
        else {
          temp_v7 = FUN_002896bc();
          piVar22 = DAT_004474f4;
          if (temp_v7 != 0) {
            DAT_004474f4[6] = g_lmapScene[0x14];
            piVar22[0x2b] = 0;
            FUN_0027fc14(0);
            piVar22 = g_lmapScene;
            g_lmapScene[0x15] = 0;
            piVar22[0x16] = temp_v31;
            mapIfActivateRecord(0,DAT_0049f99c);
            mapIfReleaseSlot3();
            piVar22 = g_lmapScene;
            g_lmapScene[1] = g_lmapScene[1] + 1;
            piVar22[2] = 0;
          }
        }
      }
      else {
        temp_v8 = 10;
        temp_v6 = 0;
        slotSetRequest(temp_v6,temp_v8,0xff);
        piVar22 = g_lmapScene;
        g_lmapScene[1] = g_lmapScene[1] + 1;
        piVar22[2] = 0;
      }
    }
    else {
      mapDestroyOverlayModel();
      lmapSetSceneId(0x14);
      piVar22 = g_lmapScene;
      g_lmapScene[1] = g_lmapScene[1] + 1;
      piVar22[2] = 0;
    }
    FUN_002804ec(g_lmapScene + 10);
    in_d10 = CONCAT44(fStack_24,fStack_28);
    goto code_r0x00280364;
  case 0x15:
    fStack_3c = temp_v17;
    fStack_38 = temp_v19;
    fStack_34 = temp_v34;
    fStack_30 = temp_v35;
    fStack_2c = temp_v20;
    temp_v18 = fStack_20;
    temp_v36 = fStack_1c;
    temp_v27 = fStack_28;
    temp_v29 = fStack_24;
    if (g_lmapScene[1] < 10) {
      temp_v18 = fStack_28;
      fStack_28 = fStack_20;
      temp_v17 = fStack_24;
      fStack_24 = fStack_1c;
      fStack_20 = temp_v18;
      fStack_1c = temp_v17;
      mapEaseSceneHeading();
      piVar22 = g_lmapScene;
      g_lmapScene[7] =
           (int)((float)g_lmapScene[7] +
                ((float)g_lmapScene[10] - (float)g_lmapScene[7]) * 0.33333334f);
      piVar22[8] = (int)((float)piVar22[8] + ((float)piVar22[0xb] - (float)piVar22[8]) * 0.16666667f)
      ;
      piVar22[9] = (int)((float)piVar22[9] + ((float)piVar22[0xc] - (float)piVar22[9]) * 0.33333334f)
      ;
      temp_v18 = fStack_28;
      temp_v36 = fStack_24;
      temp_v27 = fStack_20;
      temp_v29 = fStack_1c;
    }
    fStack_1c = temp_v29;
    fStack_20 = temp_v27;
    fStack_24 = temp_v36;
    fStack_28 = temp_v18;
    piVar22 = g_lmapScene;
    temp_v31 = 0x40000000;
    temp_v7 = g_lmapScene[1];
    temp_v18 = 0.0f;
    if (temp_v7 != 0xb) {
      if (temp_v7 < 0xb) {
        temp_v17 = 0.017453292f;
        temp_v19 = 25.0f;
        if (temp_v7 != 0) {
          if (temp_v7 != 1) {
            if (temp_v7 != 2) {
              if (temp_v7 == 10) {
                temp_v7 = g_lmapScene[2];
                g_lmapScene[2] = temp_v7 + 1;
                if (temp_v7 + 1 == 1) {
                  piVar22[0x15] = 0xf;
                  piVar22[0x16] = 0;
                  FUN_00291e40();
                  FUN_0027fca0(0xffffffff);
                  FUN_0028250c();
                  FUN_00282390();
                  FUN_00291e40(0x1000240);
                }
                if (g_lmapScene[2] == 2) {
                  DAT_0049fb46 = 0;
                  mapIfReleaseSlot3();
                  piVar22 = g_lmapScene;
                  piVar23 = g_lmapScene + 7;
                  g_lmapScene[0x13] = g_lmapScene[0x14];
                  temp_v7 = piVar22[0xb];
                  temp_v31 = piVar22[0xc];
                  *piVar23 = piVar22[10];
                  piVar22[8] = temp_v7;
                  piVar22[9] = temp_v31;
                  piVar22[1] = piVar22[1] + 1;
                  piVar22[2] = 0;
                }
              }
            }
            else {
              g_lmapScene[2] = g_lmapScene[2] + 1;
              mapIfActivateRecord(1,DAT_0049f99c);
              temp_v7 = FUN_0027ee9c();
              piVar22 = g_lmapScene;
              if (temp_v7 != 0) {
                g_lmapScene[1] = 10;
                piVar22[2] = 0;
                DAT_004474f4[3] = 2;
                fStack_3c = (float)piVar22[0xb];
                fStack_38 = (float)piVar22[0xc];
                uStack_4c = romwright_piece_4_4(&fStack_34,(unsigned int)uStack_4c);
                uStack_44 = romwright_piece_4_4(piVar22[10],1);
                lmapFindNearestMatchingTargetPoint(2,10,0x66,(int)&uStack_44 + 4);
                piVar22 = g_lmapScene;
                temp_v34 = 180.0f;
                fStack_34 = fStack_34 + 180.0f;
                if (fStack_34 < temp_v18) {
                  fStack_34 = fStack_34 + 360.0f;
                }
                if ((int)fStack_34 >= 0x43b40001) {
                  fStack_34 = fStack_34 - 360.0f;
                }
                g_lmapScene[0x14] = (int)fStack_34;
                piVar22[10] = (*(unsigned int *)((unsigned char *)&uStack_44 + 4));
                piVar22[0xb] = (int)fStack_3c;
                piVar22[0xc] = (int)fStack_38;
                piVar22[0xb] = (int)(fStack_3c - 250.0f);
                temp_v18 = ((float)piVar22[0x13] + 180.0f) * temp_v17;
                FUN_0028250c();
                piVar22 = g_lmapScene;
                g_lmapScene[10] = (int)((float)g_lmapScene[10] + temp_v18 * temp_v19);
                temp_v17 = ((float)piVar22[0x13] + temp_v34) * temp_v17;
                FUN_00282390();
                g_lmapScene[0xc] = (int)((float)g_lmapScene[0xc] + temp_v17 * temp_v19);
              }
              else {
                temp_v7 = padIsButtonPressed(6);
                if ((temp_v7 != 0) || (temp_v7 = inputIsQuestMenuPressed(), temp_v7 != 0)) {
                  piVar22 = DAT_004474f4;
                  DAT_004474f4[6] = g_lmapScene[0x14];
                  piVar22[0x2b] = 0;
                  FUN_0027fc14(0);
                  piVar22 = g_lmapScene;
                  g_lmapScene[0x15] = 0;
                  piVar22[0x16] = 0x40a00000;
                  mapIfActivateRecord(0,DAT_0049f99c);
                  mapIfReleaseSlot3();
                  piVar22 = g_lmapScene;
                  g_lmapScene[1] = 0x5a;
                  piVar22[2] = 0;
                }
              }
            }
          }
          else {
            g_lmapScene[2] = g_lmapScene[2] + 1;
            mapIfActivateRecord(1,DAT_0049f99c);
            piVar22 = g_lmapScene;
            if (g_lmapScene[2] >= 3) {
              temp_v7 = g_lmapScene[1];
              g_lmapScene[0x15] = 0x1c;
              piVar22[0x16] = temp_v31;
              piVar22[1] = temp_v7 + 1;
              piVar22[2] = 0;
            }
          }
        }
        else {
          g_lmapScene[0x15] = 0;
          piVar22[0x16] = 0x40400000;
          *(unsigned char *)(piVar22 + 0x1b) = 0;
          temp_v7 = DAT_0049f9a8;
          temp_v18 = DAT_0049f9a4;
          piVar22[10] = DAT_0049f9a0;
          piVar22[0xb] = (int)temp_v18;
          piVar22[0xc] = temp_v7;
          temp_v18 = DAT_0049f9bc * 0.017453292f;
          FUN_0028250c();
          g_lmapScene[10] = (int)((float)g_lmapScene[10] + temp_v18 * temp_v19);
          temp_v17 = DAT_0049f9bc * temp_v17;
          FUN_00282390();
          piVar22 = g_lmapScene;
          g_lmapScene[0xc] = (int)((float)g_lmapScene[0xc] + temp_v17 * temp_v19);
          piVar22[0x14] = (int)DAT_0049f9ac;
          FUN_0027fc14(0xd);
          DAT_004474f4[0x2b] = 1;
          buttonHelpSetPreset(0xda);
          mapIfActivateRecord(1,DAT_0049f99c);
          FUN_0019db68();
          piVar22 = g_lmapScene;
          g_lmapScene[1] = g_lmapScene[1] + 1;
          piVar22[2] = 0;
        }
      }
      else {
        if (temp_v7 == 0xc) {
          temp_v6 = 0x16;
        }
        else {
          if (temp_v7 == 0x5a) {
            g_lmapScene[1] = 0x5b;
            piVar22[2] = 0;
            FUN_002804ec(g_lmapScene + 10);
            mapSelectContainingRegions();
            return;
          }
          if (temp_v7 == 0x5b) {
            mapDestroyOverlayModel(0x1000212);
            piVar22 = g_lmapScene;
            g_lmapScene[1] = g_lmapScene[1] + 1;
            piVar22[2] = 0;
            FUN_002804ec(g_lmapScene + 10);
            mapSelectContainingRegions();
            return;
          }
          if ((temp_v7 != 0x5c) ||
             (temp_v7 = g_lmapScene[2], g_lmapScene[2] = temp_v7 + 1, temp_v7 + 1 < 4)) {
            FUN_002804ec(g_lmapScene + 10);
            mapSelectContainingRegions();
            return;
          }
          temp_v6 = 1;
        }
        lmapSetSceneId(temp_v6);
      }
    }
    else {
      piVar23 = g_lmapScene + 10;
      temp_v17 = (float)g_lmapScene[0xb] + 2.0f;
      temp_v7 = g_lmapScene[0xc];
      temp_v5 = g_lmapScene[2] + 1;
      g_lmapScene[0xb] = (int)temp_v17;
      piVar22[7] = *piVar23;
      piVar22[2] = temp_v5;
      piVar22[9] = temp_v7;
      piVar22[8] = (int)temp_v17;
      if ((temp_v5 == 0xb) || (temp_v5 == 0x1c || temp_v5 == 0x29)) {
        FUN_00291e40((temp_v5 & 3) + 0x1000212,piVar22,temp_v5 & 3,temp_v17);
        FUN_0027fca0(0xffffffff);
      }
      if (g_lmapScene[2] == 0x1e) {
        mapInterfaceSetStateTwo();
      }
      if ((g_lmapScene[2] >= 0x1f) && (temp_v7 = mapIfHasSelection(), temp_v7 == 0)) {
        mapDestroyOverlayModel();
        piVar22 = DAT_004474f4;
        DAT_004474f4[6] = g_lmapScene[0x14];
        piVar22[0x2b] = 0;
        FUN_0027fc14(0);
        piVar22 = g_lmapScene;
        g_lmapScene[0x15] = 0;
        piVar22[0x16] = (int)temp_v18;
        piVar22[1] = piVar22[1] + 1;
        piVar22[2] = 0;
      }
    }
    FUN_002804ec(g_lmapScene + 10);
    mapSelectContainingRegions();
    return;
  case 0x17:
    temp_v7 = g_lmapScene[1];
    if (temp_v7 != 0) {
      if (temp_v7 != 1) {
        fStack_28 = temp_v35;
        fStack_24 = temp_v20;
        if ((temp_v7 == 2) &&
           (temp_v7 = g_lmapScene[2], g_lmapScene[2] = temp_v7 + 1, temp_v7 + 1 >= 6)) {
          lmapSetSceneId(1);
        }
      }
      else {
        temp_v7 = g_lmapScene[2];
        g_lmapScene[2] = temp_v7 + 1;
        fStack_28 = temp_v35;
        fStack_24 = temp_v20;
        if (temp_v7 + 1 == 3) {
          FUN_0027fae4();
        }
        if (g_lmapScene[2] == 6) {
          FUN_002879dc(0x1e,0x32,0);
          switch(DAT_0049f94a) {
          case 0:
            FUN_00291e40(0x100021c);
            break;
          case 1:
            temp_v6 = 0x100021e;
            FUN_00291e40(temp_v6);
            break;
          case 2:
            temp_v6 = 0x1000220;
            FUN_00291e40(temp_v6);
            break;
          case 3:
            temp_v6 = 0x1000222;
            FUN_00291e40(temp_v6);
            break;
          case 4:
            temp_v6 = 0x1000224;
            FUN_00291e40(temp_v6);
            break;
          default:
          }
          FUN_0027fca0(0xffffffff);
          FUN_0028250c();
          FUN_00282390();
          temp_v7 = randBetween(0,1);
          FUN_00291e40(temp_v7 + 0x100023e);
        }
        piVar22 = g_lmapScene;
        if (g_lmapScene[2] >= 0x24) {
          temp_v7 = g_lmapScene[1];
          g_lmapScene[0x16] = 0x40a00000;
          piVar22[0x15] = 0;
          piVar22[1] = temp_v7 + 1;
          piVar22[2] = 0;
        }
      }
    }
    else {
      g_lmapScene[0x15] = 7;
      temp_v7 = 1;
      piVar22[0x16] = 0;
      piVar22[1] = temp_v7;
      piVar22[2] = 0;
      fStack_28 = temp_v35;
      fStack_24 = temp_v20;
    }
    goto code_r0x00272944;
  case 0x18:
    temp_v7 = g_lmapScene[1];
    if (temp_v7 != 0) {
      if (temp_v7 != 1) {
        fStack_28 = temp_v35;
        fStack_24 = temp_v20;
        if ((temp_v7 == 2) &&
           (temp_v7 = g_lmapScene[2], g_lmapScene[2] = temp_v7 + 1, temp_v7 + 1 >= 0x1f)) {
          FUN_0027fc14(0);
          lmapSetSceneId(1);
        }
      }
      else {
        temp_v7 = g_lmapScene[2];
        g_lmapScene[2] = temp_v7 + 1;
        fStack_28 = temp_v35;
        fStack_24 = temp_v20;
        if (temp_v7 + 1 == 3) {
          FUN_0027fae4();
        }
        if (g_lmapScene[2] == 6) {
          FUN_002879dc(0x1e,0x32,0);
          switch(DAT_0049f94a) {
          case 0:
            FUN_00291e40(0x100021c);
            break;
          case 1:
            temp_v6 = 0x100021e;
            FUN_00291e40(temp_v6);
            break;
          case 2:
            temp_v6 = 0x1000220;
            FUN_00291e40(temp_v6);
            break;
          case 3:
            temp_v6 = 0x1000222;
            FUN_00291e40(temp_v6);
            break;
          case 4:
            temp_v6 = 0x1000224;
            FUN_00291e40(temp_v6);
            break;
          default:
          }
          FUN_0027fca0(0xffffffff);
          FUN_0028250c();
          FUN_00282390();
          temp_v7 = randBetween(0,1);
          FUN_00291e40(temp_v7 + 0x100023e);
        }
        if (g_lmapScene[2] >= 0x24) {
          FUN_0027fc14(9);
          piVar22 = g_lmapScene;
          g_lmapScene[0x15] = 0;
          piVar22[0x16] = 0x40a00000;
          piVar22[1] = piVar22[1] + 1;
          piVar22[2] = 0;
        }
      }
    }
    else {
      g_lmapScene[0x15] = 7;
      piVar22[0x16] = 0;
      fStack_28 = temp_v35;
      fStack_24 = temp_v20;
      FUN_0027fc14(8);
      piVar22 = g_lmapScene;
      g_lmapScene[1] = g_lmapScene[1] + 1;
      piVar22[2] = 0;
    }
    goto code_r0x00272944;
  case 0x19:
    temp_v7 = g_lmapScene[1];
    if (temp_v7 != 0) {
      if (temp_v7 != 1) {
        fStack_28 = temp_v35;
        fStack_24 = temp_v20;
        if (temp_v7 == 2) {
          temp_v7 = g_lmapScene[2] + 1;
          g_lmapScene[2] = temp_v7;
          fStack_28 = temp_v35;
          fStack_24 = temp_v20;
          if (temp_v7 >= 2) {
            piVar22[0x16] = 0x40a00000;
            fStack_28 = temp_v35;
            fStack_24 = temp_v20;
            lmapSetSceneId(1);
          }
        }
      }
      else {
        temp_v7 = g_lmapScene[2];
        g_lmapScene[2] = temp_v7 + 1;
        fStack_28 = temp_v35;
        fStack_24 = temp_v20;
        if (temp_v7 + 1 >= 0x10) {
          temp_v7 = 2;
          piVar22[1] = temp_v7;
          piVar22[2] = 0;
          fStack_28 = temp_v35;
          fStack_24 = temp_v20;
        }
      }
    }
    else {
      g_lmapScene[0x15] = 0x1b;
      piVar22[0x16] = 0;
      fStack_28 = temp_v35;
      fStack_24 = temp_v20;
      FUN_0027fca0(0);
      piVar22 = g_lmapScene;
      g_lmapScene[1] = g_lmapScene[1] + 1;
      piVar22[2] = 0;
    }
    goto code_r0x00272944;
  case 0x1a:
    temp_v7 = g_lmapScene[1];
    if (temp_v7 != 0) {
      if (temp_v7 != 1) {
        fStack_28 = temp_v35;
        fStack_24 = temp_v20;
        if (temp_v7 == 2) {
          temp_v7 = g_lmapScene[2] + 1;
          g_lmapScene[2] = temp_v7;
          fStack_28 = temp_v35;
          fStack_24 = temp_v20;
          if (temp_v7 >= 2) {
            piVar22[0x16] = 0x40a00000;
            fStack_28 = temp_v35;
            fStack_24 = temp_v20;
            lmapSetSceneId(1);
          }
        }
      }
      else {
        temp_v7 = g_lmapScene[2];
        g_lmapScene[2] = temp_v7 + 1;
        fStack_28 = temp_v35;
        fStack_24 = temp_v20;
        if (temp_v7 + 1 >= 0x10) {
          piVar22[1] = 2;
          piVar22[2] = 0;
        }
      }
    }
    else {
      g_lmapScene[0x15] = 0x1b;
      piVar22[0x16] = 0;
      piVar22[1] = 1;
      piVar22[2] = 0;
      fStack_28 = temp_v35;
      fStack_24 = temp_v20;
      switch(DAT_0049f94a) {
      case 0:
        FUN_00291e40(0x100021c);
        break;
      case 1:
        FUN_00291e40(0x100021e);
        break;
      case 2:
        FUN_00291e40(0x1000220);
        break;
      case 3:
        FUN_00291e40(0x1000222);
        break;
      case 4:
        FUN_00291e40(0x1000224);
      }
      FUN_0027fca0(0xffffffff);
      FUN_0028250c();
      FUN_00282390();
      temp_v7 = randBetween(0,1);
      FUN_00291e40(temp_v7 + 0x100023e);
    }
    goto code_r0x00272944;
  case 0x1c:
    temp_v30 = *(unsigned long long *)(g_lmapScene + 10);
    temp_v31 = g_lmapScene[0xc];
    fStack_28 = temp_v35;
    fStack_24 = temp_v20;
    mapEaseSceneHeading();
    piVar22 = g_lmapScene;
    temp_v7 = g_lmapScene[1];
    if (temp_v7 != 0xb) {
      if (0xb >= temp_v7) {
        if (temp_v7 != 0) {
          if (temp_v7 != 1) {
            if (temp_v7 == 10) {
              g_lmapScene[0x15] = 0x13;
              piVar22[0x16] = 0x40a00000;
              piVar23 = DAT_004474f4;
              DAT_004474f4[0x83] = 0;
              piVar23[0x84] = 0;
              piVar22[0x1a] = 0;
              piVar22[7] = piVar22[10];
              piVar22[8] = piVar22[0xb];
              piVar22[9] = piVar22[0xc];
              FUN_0020ffe8(piVar22[0x65],piVar22[0x15]);
              piVar22 = g_lmapScene;
              temp_v7 = 0;
              g_lmapScene[1] = g_lmapScene[1] + 1;
              piVar22[2] = temp_v7;
            }
          }
          else {
            temp_v7 = g_lmapScene[2] + 1;
            piVar22[2] = temp_v7;
          }
        }
        else {
          g_lmapScene[0x15] = 0x13;
          piVar22[0x16] = 0x40a00000;
          FUN_0027fca0(0);
          piVar22 = g_lmapScene;
          temp_v7 = 0;
          *(unsigned char *)(g_lmapScene + 0x1b) = 0;
          piVar22[1] = piVar22[1] + 1;
          piVar22[2] = temp_v7;
        }
      }
      else if (temp_v7 == 0x14) {
        g_lmapScene[2] = g_lmapScene[2] + 1;
        FUN_0027f958(&uStack_198,temp_v40,0);
        if ((((0xbf000000 < uStack_198) || ((int)uStack_198 >= 0x3f000001)) ||
            (0xbf000000 < temp_v40[0])) ||
           (((int)temp_v40[0] >= 0x3f000001 ||
            (FUN_0027f94c(g_lmapScene[0x65]), in_s0 >= 0x42d20001)))) {
          piVar22 = g_lmapScene;
          g_lmapScene[1] = 100;
          piVar22[2] = 0;
        }
      }
    }
    else {
      temp_v7 = g_lmapScene[2] + 1;
      piVar22[2] = temp_v7;
    }
    piVar23 = &iStack_1b4;
    FUN_0027f848();
    piVar22 = g_lmapScene;
    piVar9 = g_lmapScene + 10;
    g_lmapScene[0xc] = uStack_1ac;
    *piVar9 = iStack_1b4;
    piVar22[0xb] = (int)fStack_1b0;
    piVar22[0xd] = (int)temp_v30;
    piVar22[0xe] = (int)((unsigned long long)temp_v30 >> 0x20);
    piVar22[0xf] = temp_v31;
    if (((DAT_0049fce8 == '\0') && (DAT_0049f93d != '\0')) && (piVar23 != (int *)0x0)) {
      piVar22[0xb] = (int)(fStack_1b0 - 2.0f);
      FUN_0027f48c(piVar22 + 10,piVar22 + 0xd);
    }
    piVar22 = g_lmapScene;
    piVar23 = g_lmapScene + 7;
    g_lmapScene[7] =
         (int)((float)g_lmapScene[7] +
              ((float)g_lmapScene[10] - (float)g_lmapScene[7]) * 0.33333334f);
    piVar22[8] = (int)((float)piVar22[8] + ((float)piVar22[0xb] - (float)piVar22[8]) * 0.33333334f);
    piVar22[9] = (int)((float)piVar22[9] + ((float)piVar22[0xc] - (float)piVar22[9]) * 0.33333334f);
    piVar22[0x10] = *piVar23;
    piVar22[0x11] = piVar22[8];
    piVar22[0x12] = piVar22[9];
    piVar22[0xd] = (int)temp_v30;
    piVar22[0xe] = (int)((unsigned long long)temp_v30 >> 0x20);
    piVar22[0xf] = temp_v31;
    return;
  case 0x1d:
    g_lmapScene[0x15] = 0;
    piVar22[0x16] = 0;
    return;
  case 0x1e:
    if (g_lmapScene[1] != 0) {
      if ((g_lmapScene[1] == 1) &&
         (temp_v7 = g_lmapScene[2], g_lmapScene[2] = temp_v7 + 1, temp_v7 + 1 == 0x96)) {
        piVar22[0x15] = 0;
        piVar22[0x16] = 0x40a00000;
        return;
      }
    }
    else {
      temp_v7 = g_lmapScene[2];
      g_lmapScene[2] = temp_v7 + 1;
      if (temp_v7 + 1 >= 0x3d) {
        piVar22[0x15] = 0x11;
        temp_v7 = 1;
        piVar22[0x16] = 0x40a00000;
        piVar22[1] = temp_v7;
        piVar22[2] = 0;
        return;
      }
    }
    break;
  case 0x1f:
    temp_v7 = g_lmapScene[1];
    if (temp_v7 != 0) {
      if (temp_v7 != 1) {
        if (temp_v7 != 2) {
          fStack_28 = temp_v35;
          fStack_24 = temp_v20;
          if ((temp_v7 == 3) &&
             (temp_v7 = g_lmapScene[2], g_lmapScene[2] = temp_v7 + 1, temp_v7 + 1 >= 11)) {
            piVar22[0x16] = 0x40a00000;
            lmapSetSceneId(1);
          }
        }
        else {
          g_lmapScene[2] = g_lmapScene[2] + 1;
          fStack_28 = temp_v35;
          fStack_24 = temp_v20;
          FUN_0027f958(afStack_1a4,&uStack_1ac,0);
          if ((((0xbf000000 < (unsigned int)afStack_1a4[0]) || ((int)afStack_1a4[0] >= 0x3f000001)) ||
              (0xbf000000 < uStack_1ac)) || ((int)uStack_1ac >= 0x3f000001)) {
            FUN_00281e34();
            temp_v18 = afStack_1a4[0] * 57.32484f;
            temp_v18 = mathSnapHeading8(temp_v18);
            if (iRam00447e8c != (int)(temp_v18 * 0.125f)) {
              g_lmapScene[3] = g_lmapScene[3] + 2;
            }
          }
          temp_v7 = padIsButtonPressed(1);
          if (((temp_v7 != 0) || (temp_v7 = padIsButtonPressed(0), temp_v7 != 0)) ||
             ((temp_v7 = padIsButtonPressed(9), temp_v7 != 0 || (temp_v7 = padIsButtonPressed(10), temp_v7 != 0))))
          {
            g_lmapScene[3] = g_lmapScene[3] + 3;
          }
          temp_v7 = g_lmapScene[2];
          if (temp_v7 != 0x4b) {
            if (temp_v7 < 0x4c) {
              if (temp_v7 == 10 || temp_v7 == 0x28) {
                FUN_0027fca0(0);
              }
            }
            else if (temp_v7 == 0x6e || temp_v7 == 0x91) {
              FUN_0027fca0(0);
            }
          }
          else {
            FUN_0027fca0(0);
          }
          if (g_lmapScene[2] + g_lmapScene[3] >= 0x79) {
            mapModelRequest();
            FUN_0027fca0(0);
            piVar22 = g_lmapScene;
            g_lmapScene[0x15] = 0xb;
            piVar22[0x16] = 0x40400000;
            piVar22[1] = piVar22[1] + 1;
            piVar22[2] = 0;
          }
        }
      }
      else {
        temp_v7 = g_lmapScene[2];
        g_lmapScene[2] = temp_v7 + 1;
        fStack_28 = temp_v35;
        fStack_24 = temp_v20;
        if (temp_v7 + 1 == 6) {
          FUN_0027fca0(0);
        }
        piVar22 = g_lmapScene;
        if (g_lmapScene[2] >= 0x15) {
          g_lmapScene[0x15] = 10;
          piVar22[0x16] = 0x40400000;
          piVar22[2] = 0;
          piVar22[1] = piVar22[1] + 1;
          piVar22[3] = 0;
          iRam00447e8c = 0;
        }
      }
    }
    else {
      fStack_28 = temp_v35;
      fStack_24 = temp_v20;
      placementUpdateSceneState();
      piVar22 = g_lmapScene;
      g_lmapScene[0x15] = 9;
      piVar22[0x16] = 0;
      piVar22[0x14] = piVar22[0x13];
      piVar22[10] = piVar22[7];
      piVar22[0xb] = (int)*(unsigned long long *)(piVar22 + 8);
      piVar22[0xc] = (int)((unsigned long long)*(unsigned long long *)(piVar22 + 8) >> 0x20);
      *(unsigned char *)(piVar22 + 0x1b) = 0;
      FUN_0028250c();
      FUN_00282390();
      FUN_00291e40(0x100023a);
      piVar22 = g_lmapScene;
      g_lmapScene[1] = g_lmapScene[1] + 1;
      piVar22[2] = 0;
    }
    FUN_002804ec(g_lmapScene + 10);
    mapSelectContainingRegions();
    return;
  case 0x20:
    if (g_lmapScene[1] != 0) {
      fStack_28 = temp_v35;
      fStack_24 = temp_v20;
      if ((g_lmapScene[1] == 1) &&
         (temp_v7 = g_lmapScene[2], g_lmapScene[2] = temp_v7 + 1, temp_v7 + 1 >= 11)) {
        piVar22[0x16] = 0x40a00000;
        fStack_28 = temp_v35;
        fStack_24 = temp_v20;
        lmapSetSceneId(1);
      }
    }
    else {
      g_lmapScene[0x15] = 3;
      piVar22[0x16] = 0x40000000;
      piVar22[0x14] = piVar22[0x13];
      piVar22[10] = piVar22[7];
      piVar22[0xb] = piVar22[8];
      piVar22[0xc] = piVar22[9];
      *(unsigned char *)(piVar22 + 0x1b) = 0;
      fStack_28 = temp_v35;
      fStack_24 = temp_v20;
      FUN_002879dc(10,0x14,0);
      FUN_0027fca0(0);
      FUN_00291e40(0x1000186);
      FUN_0028250c();
      FUN_00282390();
      temp_v7 = randBetween(0,1);
      FUN_00291e40(temp_v7 + 0x1000238);
      puVar5 = (unsigned int *)&g_gameState;
      if (g_gameState == (unsigned int *)0x5) {
        puVar5 = DAT_0049f920;
      }
      if (!(g_gameState == (unsigned int *)0x5 && puVar5 == (unsigned int *)0x9)) {
        partyApplyPercentHealthDamage(2,3);
        partyApplyStatusMask(2,5,0xf);
      }
      else {
        partyApplyPercentHealthDamage(2,5);
        partyApplyStatusMask(2,5);
      }
      piVar22 = g_lmapScene;
      g_lmapScene[1] = g_lmapScene[1] + 1;
      piVar22[2] = 0;
    }
code_r0x00272944:
    FUN_002804ec(g_lmapScene + 10);
    fStack_38 = fStack_28;
    fStack_34 = fStack_24;
    fStack_30 = fStack_20;
    fStack_2c = fStack_1c;
code_r0x00280364:
    temp_v7 = 0;
    fStack_28 = (float)in_d10;
    fStack_24 = (float)((unsigned long long)in_d10 >> 0x20);
    fStack_20 = (float)in_d11;
    fStack_1c = (float)((unsigned long long)in_d11 >> 0x20);
    DAT_0049f94b = 0xff;
    DAT_0049f94d = 0xff;
    if (0 < DAT_004c2420) {
      temp_v33 = 0;
      temp_v18 = fStack_38;
      do {
        temp_v38 = temp_v33 >> 0x20;
        temp_v13 = 0;
        temp_v31 = temp_v7 * 0x7c;
        do {
          temp_v5 = (unsigned int)(temp_v33 >> 0x20);
          if (temp_v13 != 0) {
            if (temp_v13 != 1) {
              if (temp_v13 != 2) {
                temp_v17 = temp_v18;
                if (temp_v13 == 3) {
                  temp_v17 = *(float *)(temp_v31 + 0x4c1510);
                  temp_v33 = (unsigned long long)temp_v5 << 0x20;
                  FUN_0025247c((int)&uStack_4c + 4);
                }
              }
              else {
                temp_v17 = *(float *)(temp_v31 + 0x4c14f8);
                temp_v33 = (unsigned long long)temp_v5 << 0x20;
                FUN_0025247c((int)&uStack_4c + 4);
              }
            }
            else {
              temp_v17 = *(float *)(temp_v31 + 0x4c14e0);
              temp_v33 = (unsigned long long)temp_v5 << 0x20;
              FUN_0025247c((int)&uStack_4c + 4);
            }
          }
          else {
            temp_v17 = *(float *)(temp_v31 + 0x4c14c8);
            temp_v33 = (unsigned long long)temp_v5 << 0x20;
            FUN_0025247c((int)&uStack_4c + 4);
          }
          temp_v18 = temp_v17;
          mathVec3Dot();
          temp_v3 = DAT_0049f94b;
          if (temp_v17 < (float)temp_v38) goto LAB_002804c4;
          temp_v13 = temp_v13 + 1;
        } while (temp_v13 < 4);
        temp_v1 = (unsigned char)*(unsigned short *)(temp_v31 + 0x4c14ba);
        temp_v3 = temp_v1;
        if (*(short *)(temp_v31 + 0x4c14b8) != 0) {
          temp_v3 = DAT_0049f94b;
          DAT_0049f94d = temp_v1;
        }
LAB_002804c4:
        DAT_0049f94b = temp_v3;
        temp_v7 = temp_v7 + 1;
      } while (temp_v7 < DAT_004c2420);
    }
    return;
  case 0x21:
    fStack_28 = temp_v35;
    fStack_24 = temp_v20;
    mapEaseSceneHeading();
    piVar22 = g_lmapScene;
    *(unsigned char *)(g_lmapScene + 0x1b) = 0;
    piVar22[0x15] = 0;
    piVar22[0x16] = 0;
    piVar22[7] = (int)((float)piVar22[7] + ((float)piVar22[10] - (float)piVar22[7]) * 0.33333334f);
    piVar22[8] = (int)((float)piVar22[8] + ((float)piVar22[0xb] - (float)piVar22[8]) * 0.16666667f);
    piVar22[9] = (int)((float)piVar22[9] + ((float)piVar22[0xc] - (float)piVar22[9]) * 0.33333334f);
LAB_0027142c:
    FUN_002804ec(piVar22 + 10);
    fStack_38 = fStack_28;
    fStack_34 = fStack_24;
    fStack_30 = fStack_20;
    fStack_2c = fStack_1c;
    goto code_r0x00280364;
  case 0x22:
    switch(g_lmapScene[1]) {
    case 0:
      g_lmapScene[0x15] = 0x21;
      piVar22[0x16] = 0;
      fStack_28 = temp_v35;
      fStack_24 = temp_v20;
      FUN_0027fc14(5);
      FUN_001a9008();
      piVar22 = g_lmapScene;
      piVar23 = g_lmapScene + 10;
      g_lmapScene[0x14] = g_lmapScene[0x13];
      temp_v7 = piVar22[8];
      temp_v31 = piVar22[9];
      *piVar23 = piVar22[7];
      piVar22[0xb] = temp_v7;
      piVar22[0xc] = temp_v31;
      *(unsigned char *)(piVar22 + 0x1b) = 0;
      piVar22[1] = piVar22[1] + 1;
      piVar22[2] = 0;
      return;
    case 1:
      fStack_28 = temp_v35;
      fStack_24 = temp_v20;
      if (g_lmapScene[2] == 2) {
        FUN_002bf810(0x1000179);
      }
      if ((g_lmapScene[2] == 0x2d) && (FUN_002bf810(0x10001fd), g_lmapScene[2] == 0x2d)) {
        FUN_002bf810(0x1000202);
      }
      if (g_lmapScene[2] == 0x9c) {
        FUN_002bf810(0x1000201);
      }
      if (g_lmapScene[2] == 0xf0) {
        FUN_002bf810(0x10001fe);
      }
      piVar22 = g_lmapScene;
      temp_v7 = g_lmapScene[2];
      g_lmapScene[2] = temp_v7 + 1;
      if (temp_v7 + 1 >= 0xf1) {
        piVar23 = piVar22 + 1;
        *piVar23 = *piVar23 + 1;
        piVar22[2] = 0;
        return;
      }
      break;
    case 2:
      temp_v7 = g_lmapScene[2];
      g_lmapScene[2] = temp_v7 + 1;
      if (temp_v7 + 1 >= 0x5b) {
        fStack_28 = temp_v35;
        fStack_24 = temp_v20;
        slotSetRequest(0,10,0xff);
        piVar22 = g_lmapScene;
        g_lmapScene[1] = g_lmapScene[1] + 1;
        piVar22[2] = 0;
        return;
      }
      break;
    case 3:
      fStack_28 = temp_v35;
      fStack_24 = temp_v20;
      temp_v7 = FUN_002896bc();
      if (temp_v7 != 0) {
        FUN_0027fc14(0);
        piVar22 = g_lmapScene;
        g_lmapScene[0x15] = 0;
        piVar22[0x16] = 0x40a00000;
        mapIfMarkModelDestroy();
        piVar22 = g_lmapScene;
        g_lmapScene[1] = g_lmapScene[1] + 1;
        piVar22[2] = 0;
        return;
      }
      break;
    case 4:
      temp_v7 = 5;
      piVar22[1] = temp_v7;
      piVar22[2] = 0;
      return;
    case 5:
      fStack_28 = temp_v35;
      fStack_24 = temp_v20;
      mapDestroyPrimaryModel();
      piVar22 = g_lmapScene;
      g_lmapScene[0x15] = 0;
      piVar22[0x16] = 0;
      if (DAT_0049fb68 == '\0') {
        FUN_002c29d8(0,10,0xff);
      }
      piVar22 = g_lmapScene;
      g_lmapScene[1] = g_lmapScene[1] + 1;
      piVar22[2] = 0;
      return;
    case 6:
      temp_v7 = g_lmapScene[2];
      g_lmapScene[2] = temp_v7 + 1;
      if (temp_v7 + 1 >= 0x10) {
        piVar22[0x16] = 0x40a00000;
        piVar22 = g_lmapScene;
        if (*g_lmapScene != 1) {
          *g_lmapScene = 1;
          piVar22[1] = 0;
          piVar22[2] = 0;
          piVar22[0x16] = 0x40a00000;
        }
        return;
      }
    }
    break;
  case 0x23:
    fStack_28 = temp_v35;
    fStack_24 = temp_v20;
    rt_memcpy_w(&fStack_1b0,
                "਽㹗\xeb85㽑㵱㿪롒䁎\xf5c3䂠晦䃦휊䄛晦䅊轜䅾㵱䆜\xeb85䆻凬䇞긔䈁蔟䈕馚䈪\xeb85䉀炤䉘⣶䉱蔟䊅ԟ䊓ཛྷ䊡ꣶ䊯슏䊾慈䋎竡䋞ཛྷ䋯ཛྷ䌀콜䌈쨽䌑\xf852䌚尩䌤\xf333䌭뫡䌷댳䍁휊䍋♦䍖ꅈ䍠䊏䍫਽䍶竡䎀ʏ䎆髡䎋䊏䎑連䎖뵱䎜轜䎢殅䎨呻䎮䞮䎴䊏䎺䞮䏀匳䏆晦䏌纸䏒鰩䏘뵱䏞\xe148䏤ޮ䏫イ䏱塒䏷耀䏽폗䐁\xe5c3䐄\xf666䐇ԟ䐋ᅈ䐎ᨽ䐑₤䐔⊏䐗₤䐚ᦚ䐝ด䐠ﳍ䐢\xe51f䐥윊䐨ꊏ䐫癦䐮䇬䐱׃䐴셈䐶猳䐹ᮅ䐼릚䐾䵱䑁홦䑃呻䑆왦䑈⮅䑋葻䑍키䑏ຸ䑒㺸䑔悤䑖猳䑘癦䑚樽䑜䵱䑞₤䑠"
                ,0x188);
    temp_v7 = piVar22[1];
    if (temp_v7 == 0) {
      piVar22[0x15] = 0;
      piVar22[0x16] = 0x40000000;
      temp_v18 = DAT_0049f9bc;
      piVar22[0x13] = (int)DAT_0049f9bc;
      piVar22[0x14] = (int)temp_v18;
      temp_v31 = DAT_0049f9a8;
      temp_v18 = DAT_0049f9a4;
      temp_v7 = DAT_0049f9a0;
      piVar22[7] = DAT_0049f9a0;
      piVar22[8] = (int)temp_v18;
      piVar22[9] = temp_v31;
      piVar22[10] = temp_v7;
      piVar22[0xb] = (int)temp_v18;
      piVar22[0xc] = temp_v31;
      *(unsigned char *)(piVar22 + 0x1b) = 0;
      FUN_0027fc14(6);
      piVar22 = g_lmapScene;
      g_lmapScene[1] = g_lmapScene[1] + 1;
      piVar22[2] = 0;
      return;
    }
    if (temp_v7 != 1) {
      if (temp_v7 == 2) {
        temp_v5 = piVar22[2];
        if (temp_v5 < 0x62) {
          piVar22[8] = (int)((float)piVar22[0xb] + (&fStack_1b0)[temp_v5]);
        }
        piVar22[2] = temp_v5 + 1;
        return;
      }
    }
    else {
      temp_v7 = piVar22[2];
      piVar22[2] = temp_v7 + 1;
      if (temp_v7 + 1 >= 11) {
        FUN_0021df18();
        FUN_002bf810(0x10000c0);
        piVar22 = g_lmapScene;
        g_lmapScene[1] = g_lmapScene[1] + 1;
        piVar22[2] = 0;
        return;
      }
    }
    break;
  case 0x24:
    temp_v7 = g_lmapScene[1];
    if (temp_v7 == 0) {
      g_lmapScene[0x15] = 0;
      piVar22[0x16] = 0x40400000;
      temp_v7 = DAT_0049f9a8;
      temp_v18 = DAT_0049f9a4;
      piVar22[10] = DAT_0049f9a0;
      piVar22[0xb] = (int)temp_v18;
      piVar22[0xc] = temp_v7;
      temp_v7 = piVar22[7];
      fStack_28 = temp_v35;
      fStack_24 = temp_v20;
      mathPositionHeadingDegrees();
      piVar22 = g_lmapScene;
      g_lmapScene[0x14] = temp_v7;
      *(unsigned char *)(piVar22 + 0x1b) = 0;
      piVar22[1] = piVar22[1] + 1;
      piVar22[2] = 0;
      return;
    }
    if (temp_v7 != 1) {
      if (temp_v7 != 2) {
        if (temp_v7 == 3) {
          if (g_lmapScene[2] == 4) {
            fStack_28 = temp_v35;
            fStack_24 = temp_v20;
            FUN_0027fca0(0);
            FUN_0028250c();
            FUN_00282390();
            FUN_00291e40(0x100023b);
          }
          piVar22 = g_lmapScene;
          g_lmapScene[7] =
               (int)((float)g_lmapScene[7] +
                    ((float)g_lmapScene[10] - (float)g_lmapScene[7]) * 0.1f);
          piVar22[9] = (int)((float)piVar22[9] + ((float)piVar22[0xc] - (float)piVar22[9]) * 0.1f);
          temp_v7 = piVar22[2] + 1;
          temp_v18 = (float)VectorSignedToFloat(piVar22[2],(unsigned char)(in_fpscr >> 0x16) & 3);
          piVar22[8] = (int)((float)piVar22[8] + temp_v18 * 3.0f);
          piVar22[2] = temp_v7;
          return;
        }
      }
      else {
        pfVar10 = (float *)(g_lmapScene + 10);
        pfVar1 = (float *)(g_lmapScene + 7);
        temp_v17 = (float)g_lmapScene[0xc];
        temp_v18 = (float)g_lmapScene[9];
        temp_v7 = g_lmapScene[2];
        g_lmapScene[2] = temp_v7 + 1;
        piVar22[7] = (int)(*pfVar1 + (*pfVar10 - *pfVar1) * 0.1f);
        piVar22[9] = (int)(temp_v18 + (temp_v17 - temp_v18) * 0.1f);
        if (temp_v7 + 1 >= 6) {
          piVar22[0x15] = 6;
          piVar22[0x16] = 0x40400000;
          piVar22[1] = 3;
          piVar22[2] = 0;
          return;
        }
      }
    }
    else {
      fStack_28 = temp_v35;
      fStack_24 = temp_v20;
      mapEaseSceneHeading();
      piVar22 = g_lmapScene;
      g_lmapScene[7] =
           (int)((float)g_lmapScene[7] + ((float)g_lmapScene[10] - (float)g_lmapScene[7]) * 0.1f);
      piVar22[8] = (int)((float)piVar22[8] + ((float)piVar22[0xb] - (float)piVar22[8]) * 0.1f);
      piVar22[9] = (int)((float)piVar22[9] + ((float)piVar22[0xc] - (float)piVar22[9]) * 0.1f);
      temp_v7 = piVar22[2];
      piVar22[2] = temp_v7 + 1;
      if (temp_v7 + 1 == 1) {
        if ((DAT_0049f920 != (unsigned int *)0x3) && (DAT_0049f920 != (unsigned int *)0x7)) {
          return;
        }
        FUN_0027fc14(7);
      }
      if (DAT_0049f920 != (unsigned int *)0x3) {
        if (g_lmapScene[2] >= 8) {
          FUN_002bf810(0x10000c1);
          piVar22 = g_lmapScene;
          g_lmapScene[1] = g_lmapScene[1] + 1;
          piVar22[2] = 0;
          return;
        }
      }
      else if (g_lmapScene[2] >= 0x10) {
        FUN_002bf810(0x10000c1);
        piVar22 = g_lmapScene;
        g_lmapScene[1] = g_lmapScene[1] + 1;
        piVar22[2] = 0;
        return;
      }
    }
    break;
  case 0x25:
    temp_v31 = g_lmapScene[10];
    temp_v17 = (float)g_lmapScene[0xb];
    temp_v7 = g_lmapScene[0xc];
    g_lmapScene[0x14] = (int)DAT_0049f9ac;
    *(unsigned char *)(piVar22 + 0x1b) = 0;
    if (((DAT_0049f93d != '\0') && (DAT_0049fce8 == '\0')) &&
       ((temp_v19 = (float)piVar22[0x1a], 0xbdcccccc < (unsigned int)temp_v19 || ((int)temp_v19 >= 0x3dcccccd)))) {
      piVar22[0xb] = (int)((temp_v17 - 2.0f) - temp_v19);
    }
    temp_v19 = (float)piVar22[0x1f];
    piVar22[0x15] = 0x12;
    piVar22[0x16] = 0x41200000;
    if ((int)temp_v19 < 0x40800001) {
      piVar22[0x1f] = 0x40800000;
    }
    else {
      piVar22[0x1f] = (int)(temp_v19 - (temp_v19 - 4.0f) * 0.5f);
    }
    temp_v19 = 0.017453292f;
    temp_v18 = temp_v18 * 0.017453292f;
    fStack_28 = temp_v35;
    fStack_24 = temp_v20;
    FUN_0028250c();
    piVar22 = g_lmapScene;
    g_lmapScene[10] = (int)((float)g_lmapScene[10] + temp_v18 * (float)g_lmapScene[0x1f]);
    temp_v19 = (float)piVar22[0x14] * temp_v19;
    FUN_00282390();
    piVar22 = g_lmapScene;
    g_lmapScene[0xc] = (int)((float)g_lmapScene[0xc] + temp_v19 * (float)g_lmapScene[0x1f]);
    piVar22[0xd] = temp_v31;
    piVar22[0xe] = (int)temp_v17;
    piVar22[0xf] = temp_v7;
    if ((DAT_0049fce8 == '\0') && (DAT_0049f93d != '\0')) {
      piVar23 = piVar22 + 10;
      FUN_0027f48c(piVar23,piVar22 + 0xd);
      piVar22 = g_lmapScene;
      if (piVar23 != (int *)0x0) {
        g_lmapScene[0x1a] = 0;
      }
      else {
        temp_v18 = (float)g_lmapScene[0x1a] + 2.0f;
        g_lmapScene[0x1a] = (int)temp_v18;
        if ((int)temp_v18 >= 0x41a00001) {
          temp_v18 = 20.0f;
        }
        piVar22[0x1a] = (int)temp_v18;
      }
    }
    FUN_002804ec(g_lmapScene + 10);
    g_lmapScene[0x57] = 0;
    mapSelectContainingRegions();
    piVar22 = g_lmapScene;
    g_lmapScene[7] =
         (int)((float)g_lmapScene[7] +
              ((float)g_lmapScene[10] - (float)g_lmapScene[7]) * 0.33333334f);
    piVar22[8] = (int)((float)piVar22[8] + ((float)piVar22[0xb] - (float)piVar22[8]) * 0.33333334f);
    piVar22[9] = (int)((float)piVar22[9] + ((float)piVar22[0xc] - (float)piVar22[9]) * 0.33333334f);
    mapEaseSceneHeading();
    piVar22 = g_lmapScene;
    piVar23 = g_lmapScene + 8;
    temp_v13 = g_lmapScene[9];
    g_lmapScene[0x10] = g_lmapScene[7];
    piVar22[0x11] = *piVar23;
    piVar22[0x12] = temp_v13;
    piVar22[0xd] = temp_v31;
    piVar22[0xe] = (int)temp_v17;
    piVar22[0xf] = temp_v7;
    piVar22 = DAT_004474f4;
    piVar23 = DAT_004474f4 + 7;
    *(unsigned char *)(DAT_004474f4 + 0x87) = 0;
    *piVar22 = 0xf;
    piVar22[1] = 0;
    piVar22[2] = 0;
    temp_v7 = *piVar23;
    piVar22[0xa4] = 0;
    piVar22[10] = temp_v7;
    piVar22[0xb] = piVar22[8];
    piVar22[0xc] = piVar22[9];
    piVar22[0x83] = 0;
    piVar22[0x84] = 0;
    *(unsigned char *)(piVar22 + 0x2c) = 0;
    *(unsigned char *)((int)piVar22 + 0xb1) = 0;
    *(unsigned short *)((int)piVar22 + 0xb2) = 10;
    *(unsigned short *)(piVar22 + 0x2d) = 0;
    piVar22[0x2e] = 0;
    piVar22[0x2f] = 0;
    piVar22[0x30] = 0x3f800000;
    temp_v4 = DAT_0049fa04;
    temp_v13 = DAT_0049fa00;
    temp_v31 = DAT_0049f9e8;
    temp_v7 = DAT_0049f9e4;
    piVar23 = g_lmapScene;
    piVar22 = DAT_004474f4;
    switch(*DAT_004474f4) {
    case 0:
      FUN_002d1e4c();
      break;
    case 1:
      temp_v17 = (float)DAT_004474f4[6];
      mathGetShortestAngleDelta();
      temp_v5 = in_fpscr & 0xfffffff;
      temp_v18 = temp_v17;
      if (temp_v17 < 0.0f) {
        temp_v18 = -temp_v17;
      }
      temp_v19 = temp_v18 * 0.2f;
      in_fpscr = temp_v5 | ((unsigned int)(temp_v19 <= temp_v18) << 0x1d);
      if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
        DAT_004474f4[6] = g_lmapScene[0x14];
      }
      else {
        in_fpscr = temp_v5 | ((unsigned int)(0.0f <= temp_v17) << 0x1d);
        if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
          temp_v19 = (float)DAT_004474f4[6] - temp_v19;
        }
        else {
          temp_v19 = (float)DAT_004474f4[6] + temp_v19;
        }
        DAT_004474f4[6] = (int)temp_v19;
      }
      break;
    case 2:
      DAT_004474f4[6] = g_lmapScene[0x14];
      break;
    case 3:
      DAT_004474f4[0x1c] = DAT_0049f9e0;
      piVar22[0x1d] = temp_v7;
      piVar22[0x1e] = temp_v31;
      temp_v31 = DAT_0049f9f4;
      temp_v7 = DAT_0049f9f0;
      piVar22[0x19] = DAT_0049f9ec;
      piVar22[0x1a] = temp_v7;
      piVar22[0x1b] = temp_v31;
      piVar22[0x1f] = DAT_0049f9f8;
      break;
    case 4:
      DAT_004474f4[0x23] = DAT_0049f9fc;
      piVar22[0x24] = temp_v13;
      piVar22[0x25] = temp_v4;
      temp_v31 = DAT_0049fa10;
      temp_v7 = DAT_0049fa0c;
      piVar22[0x20] = DAT_0049fa08;
      piVar22[0x21] = temp_v7;
      piVar22[0x22] = temp_v31;
      break;
    case 5:
      FUN_00208504();
      break;
    case 6:
      temp_v17 = 0.017453292f;
      temp_v18 = (float)g_lmapScene[8];
      temp_v7 = g_lmapScene[9];
      DAT_004474f4[0x16] = g_lmapScene[7];
      piVar22[0x17] = (int)temp_v18;
      piVar22[0x18] = temp_v7;
      piVar22[0x17] = (int)(temp_v18 + 150.0f);
      temp_v18 = (float)piVar23[0xb];
      temp_v7 = piVar23[0xc];
      piVar22[0x13] = piVar23[10];
      piVar22[0x14] = (int)temp_v18;
      piVar22[0x15] = temp_v7;
      piVar22[0x14] = (int)(temp_v18 + 150.0f);
      temp_v18 = (float)piVar23[0x14] * 0.017453292f;
      FUN_0028250c();
      temp_v19 = 600.0f;
      DAT_004474f4[0x13] = (int)((float)DAT_004474f4[0x13] + temp_v18 * 600.0f);
      temp_v17 = (float)g_lmapScene[0x14] * temp_v17;
      FUN_00282390();
      DAT_004474f4[0x15] = (int)((float)DAT_004474f4[0x15] + temp_v17 * temp_v19);
      break;
    case 7:
      temp_v18 = (float)g_lmapScene[0x13];
      calcHeadingRoundedToCardinalDirection();
      temp_v31 = (int)temp_v18;
      temp_v18 = 0.017453292f;
      temp_v7 = temp_v9;
      if (temp_v31 != 0x5a) {
        temp_v7 = temp_v31 - 0x100;
      }
      temp_v17 = (float)DAT_004474f4[0xa4] * 0.017453292f;
      if (!(temp_v31 != 0x5a && temp_v7 != 0xe)) {
        FUN_0028250c();
        piVar22 = DAT_004474f4;
        DAT_004474f4[0xc] = (int)temp_v17;
        temp_v18 = (float)piVar22[0xa4] * temp_v18;
        FUN_00282390();
        piVar22 = DAT_004474f4;
        DAT_004474f4[0xb] = (int)temp_v18;
        piVar22[10] = 0;
      }
      else {
        FUN_0028250c();
        piVar22 = DAT_004474f4;
        DAT_004474f4[10] = (int)temp_v17;
        temp_v18 = (float)piVar22[0xa4] * temp_v18;
        FUN_00282390();
        piVar22 = DAT_004474f4;
        DAT_004474f4[0xb] = (int)temp_v18;
        piVar22[0xc] = 0;
      }
      piVar22 = DAT_004474f4;
      temp_v18 = (float)DAT_004474f4[0xa4] + 10.0f;
      DAT_004474f4[0xa4] = (int)temp_v18;
      if ((int)temp_v18 >= 0x43340001) {
        temp_v18 = 180.0f;
      }
      piVar22[0xa4] = (int)temp_v18;
      break;
    case 8:
      temp_v18 = (float)g_lmapScene[0x13];
      calcHeadingRoundedToCardinalDirection();
      temp_v31 = (int)temp_v18;
      temp_v18 = 0.017453292f;
      temp_v7 = temp_v10;
      if (temp_v31 != 0x5a) {
        temp_v7 = temp_v31 - 0x100;
      }
      temp_v17 = (float)DAT_004474f4[0xa4] * 0.017453292f;
      if (!(temp_v31 != 0x5a && temp_v7 != 0xe)) {
        FUN_0028250c();
        piVar22 = DAT_004474f4;
        DAT_004474f4[0xc] = (int)temp_v17;
        temp_v18 = (float)piVar22[0xa4] * temp_v18;
        FUN_00282390();
        piVar22 = DAT_004474f4;
        DAT_004474f4[0xb] = (int)temp_v18;
        piVar22[10] = 0;
      }
      else {
        FUN_0028250c();
        piVar22 = DAT_004474f4;
        DAT_004474f4[10] = (int)temp_v17;
        temp_v18 = (float)piVar22[0xa4] * temp_v18;
        FUN_00282390();
        piVar22 = DAT_004474f4;
        DAT_004474f4[0xb] = (int)temp_v18;
        piVar22[0xc] = 0;
      }
      temp_v18 = (float)DAT_004474f4[0xa4];
      temp_v5 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v18 < 0.0f) << 0x1f) |
              ((unsigned int)(temp_v18 == 0.0f) << 0x1e);
      in_fpscr = temp_v5 | ((unsigned int)(temp_v18 != temp_v18) << 0x1c);
      temp_v2 = (unsigned char)(temp_v5 >> 0x18);
      piVar22 = DAT_004474f4;
      if ((unsigned char)((temp_v2 >> 6) & 1) || temp_v2 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
        temp_v18 = 0.0f;
      }
      piVar22[0xa4] = (int)temp_v18;
      break;
    case 9:
      temp_v18 = (float)g_lmapScene[0x13];
      calcHeadingRoundedToCardinalDirection();
      temp_v31 = (int)temp_v18;
      temp_v18 = 0.017453292f;
      temp_v7 = temp_v11;
      if (temp_v31 != 0x5a) {
        temp_v7 = temp_v31 - 0x100;
      }
      temp_v17 = (float)DAT_004474f4[0xa4] * 0.017453292f;
      if (!(temp_v31 != 0x5a && temp_v7 != 0xe)) {
        FUN_0028250c();
        piVar22 = DAT_004474f4;
        DAT_004474f4[0xc] = (int)temp_v17;
        temp_v18 = (float)piVar22[0xa4] * temp_v18;
        FUN_00282390();
        piVar22 = DAT_004474f4;
        DAT_004474f4[0xb] = (int)temp_v18;
        piVar22[10] = 0;
      }
      else {
        FUN_0028250c();
        piVar22 = DAT_004474f4;
        DAT_004474f4[10] = (int)temp_v17;
        temp_v18 = (float)piVar22[0xa4] * temp_v18;
        FUN_00282390();
        piVar22 = DAT_004474f4;
        DAT_004474f4[0xb] = (int)temp_v18;
        piVar22[0xc] = 0;
      }
      piVar22 = DAT_004474f4;
      temp_v18 = (float)DAT_004474f4[0xa4] - 10.0f;
      DAT_004474f4[0xa4] = (int)temp_v18;
      temp_v5 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v18 < 0.0f) << 0x1f) |
              ((unsigned int)(temp_v18 == 0.0f) << 0x1e);
      in_fpscr = temp_v5 | ((unsigned int)(temp_v18 != temp_v18) << 0x1c);
      temp_v2 = (unsigned char)(temp_v5 >> 0x18);
      if ((unsigned char)((temp_v2 >> 6) & 1) || temp_v2 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
        temp_v18 = 0.0f;
      }
      piVar22[0xa4] = (int)temp_v18;
      break;
    case 10:
      temp_v7 = DAT_004474f4[1];
      piVar22 = DAT_004474f4 + 0x88;
      if (temp_v7 == 0) {
        iStack_98 = DAT_004474f4[0x16];
        iStack_94 = DAT_004474f4[0x17];
        iStack_90 = DAT_004474f4[0x18];
        temp_v17 = 0.017453292f;
        iStack_84 = DAT_004474f4[0x15];
        iStack_8c = DAT_004474f4[0x13];
        iStack_88 = DAT_004474f4[0x14];
        temp_v19 = (float)g_lmapScene[10];
        temp_v36 = (float)g_lmapScene[0xb];
        temp_v18 = (float)g_lmapScene[0x14] * 0.017453292f;
        temp_v34 = (float)g_lmapScene[0xc];
        FUN_0028250c();
        temp_v35 = 90.0f;
        temp_v19 = temp_v19 + temp_v18 * 90.0f;
        temp_v36 = temp_v36 + 75.0f;
        temp_v18 = (float)g_lmapScene[0x14] * temp_v17;
        FUN_00282390();
        fStack_78 = temp_v34 + temp_v18 * temp_v35;
        temp_v21 = 110.0f;
        temp_v34 = (float)g_lmapScene[10];
        temp_v20 = (float)g_lmapScene[0xb];
        temp_v35 = (float)g_lmapScene[0xc];
        temp_v18 = ((float)g_lmapScene[0x14] - 110.0f) * temp_v17;
        fStack_80 = temp_v19;
        fStack_7c = temp_v36;
        FUN_0028250c();
        temp_v19 = 120.0f;
        temp_v34 = temp_v34 + temp_v18 * 120.0f;
        temp_v20 = temp_v20 + 210.0f;
        temp_v17 = ((float)g_lmapScene[0x14] - temp_v21) * temp_v17;
        FUN_00282390();
        fStack_6c = temp_v35 + temp_v17 * temp_v19;
        uStack_4c = romwright_piece_4_4((*(unsigned int *)((unsigned char *)&uStack_4c + 4)),8);
        uStack_54 = (unsigned long long)(unsigned int)uStack_54;
        fStack_2c = 0.0f;
        fStack_74 = temp_v34;
        fStack_70 = temp_v20;
        FUN_00282228(&iStack_98);
        piVar22 = DAT_004474f4;
        *(unsigned char *)(DAT_004474f4 + 0x87) = 1;
        piVar23 = piVar22 + 1;
        *piVar23 = *piVar23 + 1;
        piVar22[2] = 0;
        break;
      }
      if (temp_v7 == 1) {
        temp_v7 = vectorPairTransitionStep();
        if (temp_v7 != 0) {
          iStack_98 = piVar22[0xc];
          iStack_94 = piVar22[0xd];
          iStack_90 = piVar22[0xe];
          temp_v17 = 0.017453292f;
          iStack_8c = piVar22[0xf];
          iStack_88 = piVar22[0x10];
          iStack_84 = piVar22[0x11];
          temp_v19 = (float)g_lmapScene[0xc];
          temp_v18 = (float)g_lmapScene[0x14] * 0.017453292f;
          temp_v30 = *(unsigned long long *)(g_lmapScene + 10);
          FUN_0028250c();
          temp_v36 = 90.0f;
          temp_v34 = (float)temp_v30 + temp_v18 * 90.0f;
          temp_v35 = (float)((unsigned long long)temp_v30 >> 0x20) + 65.0f;
          temp_v18 = (float)g_lmapScene[0x14] * temp_v17;
          FUN_00282390();
          fStack_78 = temp_v19 + temp_v18 * temp_v36;
          temp_v36 = 110.0f;
          temp_v19 = (float)g_lmapScene[0xc];
          temp_v30 = *(unsigned long long *)(g_lmapScene + 10);
          temp_v18 = ((float)g_lmapScene[0x14] - 110.0f) * temp_v17;
          fStack_80 = temp_v34;
          fStack_7c = temp_v35;
          FUN_0028250c();
          temp_v35 = 120.0f;
          temp_v18 = (float)temp_v30 + temp_v18 * 120.0f;
          temp_v34 = (float)((unsigned long long)temp_v30 >> 0x20) + 250.0f;
          temp_v17 = ((float)g_lmapScene[0x14] - temp_v36) * temp_v17;
          FUN_00282390();
          fStack_6c = temp_v19 + temp_v17 * temp_v35;
          uStack_4c = romwright_piece_4_4((*(unsigned int *)((unsigned char *)&uStack_4c + 4)),300);
          uStack_54 = (unsigned long long)(unsigned int)uStack_54;
          fStack_2c = 0.0f;
          fStack_74 = temp_v18;
          fStack_70 = temp_v34;
          FUN_00282228(&iStack_98);
          piVar22 = DAT_004474f4;
          DAT_004474f4[1] = DAT_004474f4[1] + 1;
          piVar22[2] = 0;
        }
        break;
      }
      if ((temp_v7 != 2) || (temp_v7 = vectorPairTransitionStep(), temp_v7 == 0)) break;
      piVar22 = DAT_004474f4;
      DAT_004474f4[1] = DAT_004474f4[1] + 1;
      piVar22[2] = 0;
      break;
    case 0xb:
      temp_v7 = DAT_004474f4[1];
      piVar23 = DAT_004474f4 + 0x88;
      if (temp_v7 == 0) {
        piVar23 = DAT_004474f4 + 0x16;
        DAT_004474f4[3] = 0;
        iStack_98 = *piVar23;
        iStack_94 = piVar22[0x17];
        iStack_90 = piVar22[0x18];
        temp_v17 = 0.017453292f;
        iStack_84 = piVar22[0x15];
        iStack_8c = piVar22[0x13];
        iStack_88 = piVar22[0x14];
        temp_v19 = (float)g_lmapScene[0xc];
        temp_v18 = (float)g_lmapScene[0x14] * 0.017453292f;
        temp_v35 = (float)g_lmapScene[10];
        temp_v20 = (float)g_lmapScene[0xb];
        FUN_0028250c();
        temp_v34 = 120.0f;
        temp_v35 = temp_v35 + temp_v18 * 120.0f;
        temp_v20 = temp_v20 + 70.0f;
        temp_v18 = (float)g_lmapScene[0x14] * temp_v17;
        FUN_00282390();
        fStack_78 = temp_v19 + temp_v18 * temp_v34;
        temp_v19 = (float)g_lmapScene[0xc];
        temp_v36 = (float)g_lmapScene[10];
        temp_v21 = (float)g_lmapScene[0xb];
        temp_v18 = ((float)g_lmapScene[0x14] - temp_v34) * temp_v17;
        fStack_80 = temp_v35;
        fStack_7c = temp_v20;
        FUN_0028250c();
        temp_v35 = 140.0f;
        temp_v36 = temp_v36 + temp_v18 * 140.0f;
        temp_v21 = temp_v21 + 200.0f;
        temp_v17 = ((float)g_lmapScene[0x14] - temp_v34) * temp_v17;
        FUN_00282390();
        fStack_6c = temp_v19 + temp_v17 * temp_v35;
        uStack_4c = romwright_piece_4_4((*(unsigned int *)((unsigned char *)&uStack_4c + 4)),8);
        uStack_54 = (unsigned long long)(unsigned int)uStack_54;
        fStack_2c = 0.0f;
        fStack_74 = temp_v36;
        fStack_70 = temp_v21;
        FUN_00282228(&iStack_98);
        piVar22 = DAT_004474f4;
        *(unsigned char *)(DAT_004474f4 + 0x87) = 1;
        piVar23 = piVar22 + 1;
        *piVar23 = *piVar23 + 1;
        piVar22[2] = 0;
        break;
      }
      if (temp_v7 == 1) {
        temp_v7 = vectorPairTransitionStep();
        if (temp_v7 != 0) {
          iStack_98 = piVar23[0xc];
          iStack_94 = piVar23[0xd];
          iStack_90 = piVar23[0xe];
          temp_v17 = 0.017453292f;
          iStack_8c = piVar23[0xf];
          iStack_88 = piVar23[0x10];
          iStack_84 = piVar23[0x11];
          temp_v19 = (float)g_lmapScene[10];
          temp_v20 = (float)g_lmapScene[0xb];
          temp_v18 = (float)g_lmapScene[0x14] * 0.017453292f;
          temp_v34 = (float)g_lmapScene[0xc];
          FUN_0028250c();
          temp_v35 = 120.0f;
          temp_v19 = temp_v19 + temp_v18 * 120.0f;
          temp_v20 = temp_v20 + 70.0f;
          temp_v18 = (float)g_lmapScene[0x14] * temp_v17;
          FUN_00282390();
          fStack_78 = temp_v34 + temp_v18 * temp_v35;
          temp_v34 = (float)g_lmapScene[10];
          temp_v21 = (float)g_lmapScene[0xb];
          temp_v36 = (float)g_lmapScene[0xc];
          temp_v18 = ((float)g_lmapScene[0x14] - temp_v35) * temp_v17;
          fStack_80 = temp_v19;
          fStack_7c = temp_v20;
          FUN_0028250c();
          temp_v19 = 140.0f;
          fStack_74 = temp_v34 + temp_v18 * 140.0f;
          temp_v21 = temp_v21 + 200.0f;
          temp_v17 = ((float)g_lmapScene[0x14] - temp_v35) * temp_v17;
          FUN_00282390();
          fStack_6c = temp_v36 + temp_v17 * temp_v19;
          uStack_4c = romwright_piece_4_4((*(unsigned int *)((unsigned char *)&uStack_4c + 4)),300);
          uStack_54 = (unsigned long long)(unsigned int)uStack_54;
          fStack_2c = 0.0f;
          fStack_70 = temp_v21;
          FUN_00282228(&iStack_98);
          piVar22 = DAT_004474f4;
          DAT_004474f4[1] = DAT_004474f4[1] + 1;
          piVar22[2] = 0;
        }
        break;
      }
      if (temp_v7 != 2) break;
      temp_v7 = vectorPairTransitionStep();
      if (temp_v7 != 0) {
        piVar22 = DAT_004474f4;
        DAT_004474f4[1] = DAT_004474f4[1] + 1;
        piVar22[2] = 0;
      }
      break;
    case 0xc:
      FUN_0021b2ec();
      break;
    case 0xd:
      FUN_001f87d4();
      break;
    case 0xe:
      temp_v7 = DAT_004474f4[1];
      piVar22 = DAT_004474f4 + 0x88;
      if (temp_v7 == 0) {
        iStack_98 = DAT_004474f4[0x16];
        iStack_94 = DAT_004474f4[0x17];
        iStack_90 = DAT_004474f4[0x18];
        temp_v17 = 0.017453292f;
        iStack_84 = DAT_004474f4[0x15];
        iStack_8c = DAT_004474f4[0x13];
        iStack_88 = DAT_004474f4[0x14];
        temp_v35 = (float)g_lmapScene[10];
        temp_v34 = (float)g_lmapScene[0xb];
        temp_v18 = (float)g_lmapScene[0x14] * 0.017453292f;
        temp_v19 = (float)g_lmapScene[0xc];
        FUN_0028250c();
        temp_v36 = 40.0f;
        fStack_7c = temp_v34 + 20.0f;
        fStack_80 = temp_v35 + temp_v18 * 40.0f;
        if (g_gameState == (unsigned int *)0x16) {
          fStack_7c = fStack_7c + 20.0f;
        }
        temp_v18 = (float)g_lmapScene[0x14] * temp_v17;
        FUN_00282390();
        fStack_78 = temp_v19 + temp_v18 * temp_v36;
        temp_v35 = 160.0f;
        temp_v19 = (float)g_lmapScene[10];
        temp_v30 = *(unsigned long long *)(g_lmapScene + 0xb);
        temp_v18 = ((float)g_lmapScene[0x14] - 160.0f) * temp_v17;
        FUN_0028250c();
        temp_v34 = 180.0f;
        fStack_74 = temp_v19 + temp_v18 * 180.0f;
        temp_v19 = (float)((unsigned long long)temp_v30 >> 0x20);
        temp_v18 = (float)temp_v30 + 220.0f;
        temp_v17 = ((float)g_lmapScene[0x14] - temp_v35) * temp_v17;
        FUN_00282390();
        fStack_6c = temp_v19 + temp_v17 * temp_v34;
        if (g_gameState == (unsigned int *)0x16) {
          temp_v18 = temp_v18 + 80.0f;
        }
        uStack_4c = romwright_piece_4_4((*(unsigned int *)((unsigned char *)&uStack_4c + 4)),0x3c);
        uStack_54 = (unsigned long long)(unsigned int)uStack_54;
        fStack_2c = 0.0f;
        fStack_70 = temp_v18;
        FUN_00282228(&iStack_98);
        piVar22 = DAT_004474f4;
        *(unsigned char *)(DAT_004474f4 + 0x87) = 1;
        piVar23 = piVar22 + 1;
        *piVar23 = *piVar23 + 1;
        piVar22[2] = 0;
        break;
      }
      if (temp_v7 == 1) {
        temp_v7 = vectorPairTransitionStep();
        if (temp_v7 != 0) {
          iStack_98 = piVar22[0xc];
          iStack_94 = piVar22[0xd];
          iStack_90 = piVar22[0xe];
          temp_v17 = 0.017453292f;
          iStack_8c = piVar22[0xf];
          iStack_88 = piVar22[0x10];
          iStack_84 = piVar22[0x11];
          temp_v18 = (float)g_lmapScene[0x14] * 0.017453292f;
          temp_v19 = (float)g_lmapScene[10];
          temp_v30 = *(unsigned long long *)(g_lmapScene + 0xb);
          FUN_0028250c();
          temp_v34 = 40.0f;
          fStack_78 = (float)((unsigned long long)temp_v30 >> 0x20);
          fStack_7c = (float)temp_v30 + 20.0f;
          fStack_80 = temp_v19 + temp_v18 * 40.0f;
          if (g_gameState == (unsigned int *)0x16) {
            fStack_7c = fStack_7c + 20.0f;
          }
          temp_v18 = (float)g_lmapScene[0x14] * temp_v17;
          FUN_00282390();
          fStack_78 = fStack_78 + temp_v18 * temp_v34;
          temp_v36 = 170.0f;
          temp_v19 = (float)g_lmapScene[10];
          temp_v30 = *(unsigned long long *)(g_lmapScene + 0xb);
          temp_v18 = ((float)g_lmapScene[0x14] - 170.0f) * temp_v17;
          FUN_0028250c();
          temp_v35 = 180.0f;
          temp_v19 = temp_v19 + temp_v18 * 180.0f;
          temp_v34 = (float)((unsigned long long)temp_v30 >> 0x20);
          temp_v18 = (float)temp_v30 + 221.0f;
          temp_v17 = ((float)g_lmapScene[0x14] - temp_v36) * temp_v17;
          FUN_00282390();
          fStack_6c = temp_v34 + temp_v17 * temp_v35;
          if (g_gameState == (unsigned int *)0x16) {
            temp_v18 = temp_v18 + 80.0f;
          }
          uStack_4c = romwright_piece_4_4((*(unsigned int *)((unsigned char *)&uStack_4c + 4)),0x1c2);
          uStack_54 = (unsigned long long)(unsigned int)uStack_54;
          fStack_2c = 0.0f;
          fStack_74 = temp_v19;
          fStack_70 = temp_v18;
          FUN_00282228(&iStack_98);
          piVar22 = DAT_004474f4;
          DAT_004474f4[1] = DAT_004474f4[1] + 1;
          piVar22[2] = 0;
        }
        break;
      }
      if (temp_v7 != 2) break;
      temp_v7 = vectorPairTransitionStep();
      if (temp_v7 != 0) {
        piVar22 = DAT_004474f4;
        DAT_004474f4[1] = DAT_004474f4[1] + 1;
        piVar22[2] = 0;
      }
      break;
    case 0xf:
      FUN_0021b0f0();
    }
    fStack_30 = fStack_28;
    fStack_2c = fStack_24;
    fStack_28 = fStack_20;
    fStack_24 = fStack_1c;
    temp_v17 = 1.0f;
    temp_v35 = (float)g_lmapScene[8] - 20.0f;
    temp_v18 = 0.0f;
    temp_v19 = (float)g_lmapScene[7];
    temp_v34 = (float)g_lmapScene[9];
    if ((int)romwright_sqrt_4(((float)DAT_004474f4[0x16] - (float)DAT_004474f4[0x13]) *
                  ((float)DAT_004474f4[0x16] - (float)DAT_004474f4[0x13]) +
                  ((float)DAT_004474f4[0x17] - (float)DAT_004474f4[0x14]) *
                  ((float)DAT_004474f4[0x17] - (float)DAT_004474f4[0x14]) +
                  ((float)DAT_004474f4[0x18] - (float)DAT_004474f4[0x15]) *
                  ((float)DAT_004474f4[0x18] - (float)DAT_004474f4[0x15])) < 0x43480000) {
      temp_v36 = 200.0f;
    }
    else {
      temp_v7 = 0;
      temp_v36 = temp_v17;
      do {
        temp_v31 = g_deferredMapModels + temp_v7 * 0x38;
        temp_v15 = *(char *)(temp_v31 + 0xc) != '\0';
        temp_v0 = '\0';
        if (temp_v15) {
          temp_v0 = *(char *)(temp_v31 + 0xd);
        }
        if (temp_v15 && temp_v0 != '\0') {
          temp_v20 = (float)g_lmapScene[8] - *(float *)(temp_v31 + 0x20);
          if ((((unsigned int)temp_v20 < 0xc2c80001) && ((int)temp_v20 < 0x42c80001)) &&
             (temp_v22 = *(float *)(temp_v31 + 0x1c) - (float)g_lmapScene[7],
             temp_v21 = *(float *)(temp_v31 + 0x20) - (float)g_lmapScene[8],
             temp_v20 = *(float *)(temp_v31 + 0x24) - (float)g_lmapScene[9],
             (int)romwright_sqrt_4(temp_v22 * temp_v22 + temp_v21 * temp_v21 + temp_v20 * temp_v20) < 0x44898001)) {
            temp_v36 = temp_v36 + 1.0f;
            temp_v19 = temp_v19 + *(float *)(temp_v31 + 0x1c);
            temp_v35 = temp_v35 + *(float *)(temp_v31 + 0x20);
            temp_v34 = temp_v34 + *(float *)(temp_v31 + 0x24);
          }
        }
        temp_v7 = temp_v7 + 1;
      } while (temp_v7 < 0x40);
      if ((int)temp_v36 < 0x40000000) {
        temp_v36 = 300.0f;
      }
      else {
        temp_v36 = 1.0f / temp_v36;
        temp_v19 = temp_v19 * temp_v36;
        temp_v34 = temp_v34 * temp_v36;
        temp_v35 = temp_v35 * temp_v36;
        temp_v26 = temp_v19 - (float)g_lmapScene[7];
        temp_v22 = temp_v34 - (float)g_lmapScene[9];
        temp_v21 = temp_v35 - (float)g_lmapScene[8];
        temp_v20 = romwright_sqrt_4(temp_v26 * temp_v26 + temp_v21 * temp_v21 + temp_v22 * temp_v22);
        in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f <= temp_v20) << 0x1d);
        temp_v36 = temp_v20;
        if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
          temp_v36 = -temp_v20;
        }
        if ((int)temp_v36 >= 0x43c80001) {
          temp_v20 = 1.0f / temp_v20;
          temp_v36 = 400.0f;
          temp_v19 = (float)g_lmapScene[7] + temp_v26 * temp_v20 * 400.0f;
          temp_v35 = (float)g_lmapScene[8] + temp_v21 * temp_v20 * 400.0f;
          temp_v34 = (float)g_lmapScene[9] + temp_v22 * temp_v20 * 400.0f;
        }
        temp_v36 = temp_v36 + 450.0f;
      }
    }
    fStack_20 = temp_v27;
    fStack_1c = temp_v29;
    pfVar10 = (float *)asdModelGetStatic38();
    *pfVar10 = temp_v36;
    if ((*DAT_004474f4 == 0xc) && (DAT_004474f4[1] >= 100)) {
      temp_v20 = ((float)g_lmapScene[0x13] + 180.0f) * 0.7111111f;
      temp_v5 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v18 <= temp_v20) << 0x1d);
      for (temp_v20 = romwright_fabs_4(temp_v20); temp_v29 = temp_v18, (int)temp_v20 >= 0x47800000;
          temp_v20 = temp_v20 - 65536.0f) {
      }
      for (; (int)temp_v29 >= 0x47800000; temp_v29 = temp_v29 - 65536.0f) {
      }
      temp_v23 = VectorFloatToUnsigned(0x4338e38f,3);
      temp_v24 = VectorFloatToUnsigned(temp_v20,3);
      temp_v25 = VectorFloatToUnsigned(temp_v29,3);
      temp_v12 = temp_v23 & 0xff;
      temp_v27 = (float)VectorUnsignedToFloat(temp_v23 & 0xffff,(unsigned char)(temp_v5 >> 0x16) & 3);
      temp_v23 = temp_v24 & 0xff;
      temp_v26 = (float)VectorUnsignedToFloat(temp_v24 & 0xffff,(unsigned char)(temp_v5 >> 0x16) & 3);
      temp_v24 = temp_v25 & 0xff;
      temp_v21 = (float)VectorUnsignedToFloat(temp_v25 & 0xffff,(unsigned char)(temp_v5 >> 0x16) & 3);
      temp_v28 = (float)(&DAT_00407ed0)[temp_v12 * 4] +
               (184.8889f - temp_v27) * (float)(&DAT_00407ed8)[temp_v12 * 4];
      temp_v22 = (float)(&DAT_00407ed4)[temp_v12 * 4] +
               (184.8889f - temp_v27) * (float)(&DAT_00407edc)[temp_v12 * 4];
      temp_v27 = (float)(&DAT_00407ed0)[temp_v23 * 4] +
               (temp_v20 - temp_v26) * (float)(&DAT_00407ed8)[temp_v23 * 4];
      temp_v26 = (float)(&DAT_00407ed4)[temp_v23 * 4] +
               (temp_v20 - temp_v26) * (float)(&DAT_00407edc)[temp_v23 * 4];
      temp_v20 = (float)(&DAT_00407ed0)[temp_v24 * 4] +
               (temp_v29 - temp_v21) * (float)(&DAT_00407ed8)[temp_v24 * 4];
      temp_v29 = (float)(&DAT_00407ed4)[temp_v24 * 4] +
               (temp_v29 - temp_v21) * (float)(&DAT_00407edc)[temp_v24 * 4];
      if (!romwright_subpiece_4_1_0(temp_v5 >> 0x1d,0)) {
        temp_v27 = -temp_v27;
      }
      fStack_60 = temp_v29 * temp_v26;
      temp_v21 = temp_v20 * temp_v26;
      fStack_3c = temp_v28 * temp_v26;
      fStack_38 = temp_v22 * temp_v26;
      fStack_5c = temp_v28 * temp_v29 * temp_v27 - temp_v22 * temp_v20;
      fStack_58 = temp_v28 * temp_v20 + temp_v22 * temp_v29 * temp_v27;
      uStack_4c = CONCAT44(temp_v22 * temp_v20 * temp_v27 - temp_v28 * temp_v29,
                           temp_v22 * temp_v29 + temp_v28 * temp_v20 * temp_v27);
    }
    else {
      temp_v20 = romwright_fabs_4(DAT_0049f8fc * 0.7111111f);
      temp_v5 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v18 <= DAT_0049f900 * 0.7111111f) << 0x1d);
      temp_v29 = romwright_fabs_4(DAT_0049f900 * 0.7111111f);
      for (temp_v27 = romwright_fabs_4(DAT_0049f8f8 * 0.7111111f); (int)temp_v27 >= 0x47800000;
          temp_v27 = temp_v27 - 65536.0f) {
      }
      for (; (int)temp_v20 >= 0x47800000; temp_v20 = temp_v20 - 65536.0f) {
      }
      for (; (int)temp_v29 >= 0x47800000; temp_v29 = temp_v29 - 65536.0f) {
      }
      temp_v23 = VectorFloatToUnsigned(temp_v27,3);
      temp_v24 = VectorFloatToUnsigned(temp_v20,3);
      temp_v25 = VectorFloatToUnsigned(temp_v29,3);
      temp_v12 = temp_v23 & 0xff;
      temp_v28 = (float)VectorUnsignedToFloat(temp_v23 & 0xffff,(unsigned char)(temp_v5 >> 0x16) & 3);
      temp_v23 = temp_v24 & 0xff;
      temp_v22 = (float)VectorUnsignedToFloat(temp_v24 & 0xffff,(unsigned char)(temp_v5 >> 0x16) & 3);
      temp_v24 = temp_v25 & 0xff;
      temp_v21 = (float)VectorUnsignedToFloat(temp_v25 & 0xffff,(unsigned char)(temp_v5 >> 0x16) & 3);
      temp_v26 = (float)(&DAT_00407ed0)[temp_v12 * 4] +
               (temp_v27 - temp_v28) * (float)(&DAT_00407ed8)[temp_v12 * 4];
      temp_v28 = (float)(&DAT_00407ed4)[temp_v12 * 4] +
               (temp_v27 - temp_v28) * (float)(&DAT_00407edc)[temp_v12 * 4];
      temp_v27 = (float)(&DAT_00407ed0)[temp_v23 * 4] +
               (temp_v20 - temp_v22) * (float)(&DAT_00407ed8)[temp_v23 * 4];
      temp_v22 = (float)(&DAT_00407ed4)[temp_v23 * 4] +
               (temp_v20 - temp_v22) * (float)(&DAT_00407edc)[temp_v23 * 4];
      temp_v20 = (float)(&DAT_00407ed0)[temp_v24 * 4] +
               (temp_v29 - temp_v21) * (float)(&DAT_00407ed8)[temp_v24 * 4];
      temp_v29 = (float)(&DAT_00407ed4)[temp_v24 * 4] +
               (temp_v29 - temp_v21) * (float)(&DAT_00407edc)[temp_v24 * 4];
      if (DAT_0049f8f8 * 0.7111111f < temp_v18) {
        temp_v26 = -temp_v26;
      }
      if (DAT_0049f8fc * 0.7111111f < temp_v18) {
        temp_v27 = -temp_v27;
      }
      if (!romwright_subpiece_4_1_0(temp_v5 >> 0x1d,0)) {
        temp_v20 = -temp_v20;
      }
      fStack_3c = temp_v26 * temp_v22;
      fStack_60 = temp_v29 * temp_v22;
      temp_v21 = temp_v20 * temp_v22;
      fStack_38 = temp_v28 * temp_v22;
      fStack_58 = temp_v26 * temp_v20 + temp_v28 * temp_v29 * temp_v27;
      fStack_5c = temp_v26 * temp_v29 * temp_v27 - temp_v28 * temp_v20;
      uStack_4c = CONCAT44(temp_v28 * temp_v20 * temp_v27 - temp_v26 * temp_v29,
                           temp_v28 * temp_v29 + temp_v26 * temp_v20 * temp_v27);
    }
    uStack_54 = (unsigned long long)(unsigned int)temp_v21 << 0x20;
    uStack_44 = (unsigned long long)(unsigned int)-temp_v27 << 0x20;
    fStack_34 = 0.0f;
    fStack_6c = temp_v18;
    fStack_68 = temp_v18;
    fStack_64 = temp_v17;
    nn_math_ARMv6_VEC3TransformAsm_2AD44C(&fStack_6c,&fStack_60);
    fStack_6c = fStack_6c * temp_v36;
    fStack_68 = fStack_68 * temp_v36;
    fStack_64 = fStack_64 * temp_v36;
    fStack_80 = temp_v19;
    fStack_7c = temp_v35;
    fStack_78 = temp_v34;
    temp_v6 = FUN_002c5be8();
    entryOwnerSetPosition(temp_v6,&fStack_80);
    temp_v17 = fStack_80 + fStack_6c;
    temp_v18 = fStack_7c + fStack_68;
    temp_v19 = fStack_78 + fStack_64;
    temp_v7 = FUN_002c5be8();
    *(float *)(temp_v7 + 0x58) = temp_v17;
    *(float *)(temp_v7 + 0x68) = temp_v18;
    *(float *)(temp_v7 + 0x78) = temp_v19;
    *(unsigned int *)(temp_v7 + 0x88) = *(unsigned int *)(temp_v7 + 0x88) | 0x800;
    return;
  case 0x26:
    g_lmapScene[0x14] = (int)DAT_0049f9ac;
    if (piVar22[1] != 0) {
      fStack_28 = temp_v35;
      fStack_24 = temp_v20;
      if (((piVar22[1] == 1) && (temp_v7 = piVar22[2], piVar22[2] = temp_v7 + 1, temp_v7 + 1 == 4)) &&
         (DAT_0049f9d0 < 99)) {
        FUN_002bf810(DAT_0049f9d0 + 0x10000af);
      }
    }
    else {
      *(unsigned char *)(piVar22 + 0x1b) = 0;
      piVar22[0x15] = 0;
      piVar22[0x16] = 0x40a00000;
      piVar22[1] = 1;
      piVar22[2] = 0;
      fStack_28 = temp_v35;
      fStack_24 = temp_v20;
    }
    FUN_002804ec(g_lmapScene + 10);
    g_lmapScene[0x57] = 0;
    mapSelectContainingRegions();
    piVar22 = g_lmapScene;
    g_lmapScene[7] =
         (int)((float)g_lmapScene[7] +
              ((float)g_lmapScene[10] - (float)g_lmapScene[7]) * 0.33333334f);
    piVar22[8] = (int)((float)piVar22[8] + ((float)piVar22[0xb] - (float)piVar22[8]) * 0.16666667f);
    piVar22[9] = (int)((float)piVar22[9] + ((float)piVar22[0xc] - (float)piVar22[9]) * 0.33333334f);
    temp_v17 = (float)g_lmapScene[0x13];
    mathGetShortestAngleDelta();
    temp_v18 = temp_v17;
    if (temp_v17 < 0.0f) {
      temp_v18 = -temp_v17;
    }
    if ((int)temp_v18 < 0x41700000) {
      temp_v19 = 0.2f;
    }
    else {
      temp_v19 = 0.33333334f;
    }
    piVar22 = (int *)romwright_f2u((float)((temp_v18 * temp_v19)));
    piVar23 = piVar22;
    if ((int)piVar22 < 0x40a00000) {
      piVar23 = (int *)0x40a00000;
    }
    if (temp_v18 <= romwright_u2f((unsigned int)(piVar23))) {
      piVar22 = g_lmapScene;
    }
    if (temp_v18 <= romwright_u2f((unsigned int)(piVar23))) {
      temp_v18 = (float)piVar22[0x14];
    }
    else if (temp_v17 < 0.0f) {
      temp_v18 = (float)g_lmapScene[0x13] - romwright_u2f((unsigned int)(piVar23));
    }
    else {
      temp_v18 = (float)g_lmapScene[0x13] + romwright_u2f((unsigned int)(piVar23));
    }
    if (temp_v18 < 0.0f) {
      temp_v18 = temp_v18 + 360.0f;
    }
    if ((int)temp_v18 >= 0x43b40001) {
      temp_v18 = temp_v18 - 360.0f;
    }
    g_lmapScene[0x13] = (int)temp_v18;
    return;
  }
  return;
}

} /* extern "C" */
