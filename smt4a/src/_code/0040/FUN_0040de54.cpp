/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0040de54` (_code @ 0x40de54, 0x247c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/W6_W6Match6_BattleCamera.h"
#include "battle/btlMain.h"
struct BattleMaskState;
struct TransitionView;

extern "C" {

int panelSetMode3(...);
int FUN_0037c8e4(...);
int messageDismissNumericBanner(...);
int FUN_003e5354(...);
int FUN_003edfd4(...);
int FUN_003f2498(...);
int btlApplyDirectionBucket(...);
int FUN_004112b0(...);
int FUN_00416960(...);
int FUN_0047f314(...);
int partyAddMoneyClamped(...);
int FUN_004c8c10(...);
int asdModelStartReferencedAnimation(...);
int FUN_004d888c(...);
int FUN_004e5f2c(...);
int FUN_004f56cc(...);
int FUN_004fbd5c(...);

int sysPlaySe(...);
int scrScriptProcessStartEntry(...);
int buttonHelpGetValue(...);
int FUN_003e77cc(...);
int FUN_003e7ef0(...);
int FUN_003e7fa4(...);
int FUN_0040c64c(...);
int FUN_00410410(...);
int FUN_0047effc(...);
int FUN_004a9d68(...);
int FUN_004aa008(...);
int FUN_004c0850(...);
int FUN_004c6edc(...);
int FUN_004c80f0(...);
int FUN_004c8284(...);
int FUN_004c9d04(...);
int FUN_004cae0c(...);
int FUN_004cb348(...);
int asdModelActivateOwnedSlots(...);
int FUN_004f5fb8(...);
int resourceEnsureCachedObject(...);
int btlResetMatchingBoundObjects(...);
int keyedValueFindPair(...);
int FUN_004fb43c(...);
int FUN_004fb798(...);
int FUN_004fd508(...);
int FUN_004fe7e4(...);
int FUN_004fe900(...);

int btlScriptUnitHasFlags(...);
int stateFinishIfPresent(...);
int FUN_0040ca18(...);
int FUN_0040d274(...);
int btlUiSetDefaultLimits(...);
int FUN_004c8800(...);
int FUN_004c8cb0(...);
int FUN_004c8d8c(...);
int FUN_004c8e30(...);
int FUN_004c909c(...);
int FUN_004c9160(...);
int FUN_004c9474(...);
int FUN_004c9538(...);
int FUN_004cab9c(...);
int FUN_004cad84(void);
void FUN_004cb8a0(TransitionView *state);
int FUN_004cbab0(...);
int uiStartRangeAnimationFromTable(...);
void btlCameraSetFormationSlot(BattleActionCamera *, BattleMaskState *, int);
int flags64CSetTarget(...);
int FUN_004f26cc(...);
int FUN_004f41b0(...);
int FUN_004fb4fc(...);
int FUN_004fb670(...);
int btlReflectSetValuePair(...);
int btlReflectRequestPairScalar(...);

int btlGetMainState(void);
int asdMemFree(void);
int wstrlen(short *);
int FUN_003e7840(unsigned int, int);
int FUN_003f0e20(...);
int btlResetSlot(...);
int FUN_003f2280(...);
int FUN_0040cd6c(int *, short *);
int FUN_0040d97c(...);
int FUN_0040dcdc(int *, short *);
int resourcePairApply(unsigned int, unsigned int);
int FUN_004a96fc(int, int, unsigned int, unsigned int, int);
int FUN_004ab6f4(...);
int btlUnitGet(...);
int FUN_004f5238(...);
int FUN_004f741c(...);
int FUN_004f85c8(...);
int FUN_004f89e8(...);
u32 btlAuxAreResourcesReady(BtlAuxA*);
int FUN_004f950c(...);
int resourceTestPendingRecordsReady(...);
int FUN_004f9c40(...);
int FUN_004fa0ec(...);
int FUN_004fa5ec(void);
int VectorSignedToFloat(int, int);

/* stack frame of param_1: 14 slot(s), 56 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
} param_1_stack;

extern unsigned int g_btlScriptUnit; /* 0x57113c */
extern unsigned int g_btlActionReflect; /* 0x5712f0 */
extern unsigned int DAT_005712f8; /* 0x5712f8 */
extern unsigned int DAT_005712fc; /* 0x5712fc */
extern unsigned int DAT_00571300; /* 0x571300 */
extern unsigned int DAT_00571304; /* 0x571304 */
extern unsigned int uRam00571308; /* 0x571308 */
extern unsigned int uRam0057130c; /* 0x57130c */
extern unsigned int DAT_00571310; /* 0x571310 */
extern unsigned int DAT_00571314; /* 0x571314 */
extern unsigned int DAT_00571318; /* 0x571318 */
extern unsigned int DAT_0057131c; /* 0x57131c */
extern unsigned int DAT_00571320; /* 0x571320 */
extern unsigned int DAT_00571324; /* 0x571324 */
extern unsigned int DAT_00571328; /* 0x571328 */
extern unsigned int DAT_0057132c; /* 0x57132c */
extern unsigned int DAT_00571330; /* 0x571330 */
extern unsigned int DAT_00571334; /* 0x571334 */
extern unsigned int DAT_00571338; /* 0x571338 */
extern unsigned int DAT_0057133c; /* 0x57133c */
extern unsigned int uRam00571340; /* 0x571340 */
extern unsigned int uRam00571344; /* 0x571344 */
extern unsigned int DAT_00571358; /* 0x571358 */
extern unsigned int DAT_0057135c; /* 0x57135c */
extern unsigned int uRam00571360; /* 0x571360 */
extern unsigned int uRam00571364; /* 0x571364 */
extern unsigned int DAT_00571368; /* 0x571368 */
extern unsigned int DAT_0057136c; /* 0x57136c */
extern unsigned int DAT_00571370; /* 0x571370 */
extern unsigned int DAT_00571374; /* 0x571374 */
extern unsigned int uRam00571378; /* 0x571378 */
extern unsigned int uRam0057137c; /* 0x57137c */
extern unsigned int uRam00571380; /* 0x571380 */
extern unsigned int uRam00571384; /* 0x571384 */
extern unsigned int DAT_00571398; /* 0x571398 */
extern unsigned int DAT_0057139c; /* 0x57139c */
extern unsigned int uRam005713a0; /* 0x5713a0 */
extern unsigned int uRam005713a4; /* 0x5713a4 */
extern unsigned int uRam005713a8; /* 0x5713a8 */
extern unsigned int uRam005713ac; /* 0x5713ac */
extern int g_btlCamera; /* 0x571508 */
extern int g_btlAux; /* 0x573808 */
extern int g_btlPartnerAttack; /* 0x573c50 */
extern int g_btlUiBlock; /* 0x57a9c8 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: btlGetMainState. */
extern int infoWinIsActive(void);
/* Supplied declaration required: sysPlaySe. */
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: asdMemFree. */
extern int scrRunOpcodesStub(unsigned int);
/* Supplied declaration required: scrScriptProcessStartEntry. */
/* Supplied declaration required: wstrlen. */
/* Supplied declaration required: panelSetMode3. */
/* Supplied declaration required: buttonHelpGetValue. */
extern int FUN_0034919c(void);
extern int panelIsActiveState2(void);
extern int panelStateIs0(void);
/* Supplied declaration required: FUN_0037c8e4. */
/* Supplied declaration required: messageDismissNumericBanner. */
extern unsigned int FUN_003d214c(unsigned int);
extern int FUN_003e48bc(void);
/* Supplied declaration required: FUN_003e5354. */
extern unsigned int FUN_003e53ec(void);
/* Supplied declaration required: FUN_003e77cc. */
/* Supplied declaration required: FUN_003e7840. */
extern int btlIsExtendedState(unsigned int, unsigned int);
/* Supplied declaration required: FUN_003e7ef0. */
/* Supplied declaration required: FUN_003e7fa4. */
extern unsigned int FUN_003e82d4(int);
/* Supplied declaration required: btlScriptUnitHasFlags. */
extern int btlSlotStateIsNot456(unsigned int, unsigned int);
/* Supplied declaration required: stateFinishIfPresent. */
extern int FUN_003ec77c(int);
extern int FUN_003ec7b0(int);
/* Supplied declaration required: FUN_003edfd4. */
/* Supplied declaration required: FUN_003f0e20. */
/* Supplied declaration required: btlResetSlot. */
/* Supplied declaration required: FUN_003f2280. */
/* Supplied declaration required: FUN_003f2498. */
extern int controllerGetRecordValue(void);
/* Supplied declaration required: FUN_0040c64c. */
/* Supplied declaration required: btlApplyDirectionBucket. */
/* Supplied declaration required: FUN_0040ca18. */
/* Supplied declaration required: FUN_0040cd6c. */
/* Supplied declaration required: FUN_0040d274. */
/* Supplied declaration required: FUN_0040d97c. */
/* Supplied declaration required: FUN_0040dcdc. */
/* Supplied declaration required: FUN_00410410. */
/* Supplied declaration required: FUN_004112b0. */
/* Supplied declaration required: FUN_00416960. */
extern unsigned int FUN_0047ecc8(void);
/* Supplied declaration required: FUN_0047effc. */
/* Supplied declaration required: FUN_0047f314. */
/* Supplied declaration required: resourcePairApply. */
extern int FUN_0047f5b8(void);
extern unsigned int FUN_0047fa50(unsigned int);
/* Supplied declaration required: partyAddMoneyClamped. */
/* Supplied declaration required: FUN_004a96fc. */
/* Supplied declaration required: btlUiSetDefaultLimits. */
/* Supplied declaration required: FUN_004a9d68. */
/* Supplied declaration required: FUN_004aa008. */
/* Supplied declaration required: FUN_004ab6f4. */
/* Supplied declaration required: FUN_004c0850. */
/* Supplied declaration required: FUN_004c6edc. */
/* Supplied declaration required: FUN_004c80f0. */
/* Supplied declaration required: FUN_004c8284. */
/* Supplied declaration required: FUN_004c8800. */
/* Supplied declaration required: FUN_004c8c10. */
/* Supplied declaration required: FUN_004c8cb0. */
/* Supplied declaration required: FUN_004c8d8c. */
/* Supplied declaration required: FUN_004c8e30. */
/* Supplied declaration required: FUN_004c909c. */
/* Supplied declaration required: FUN_004c9160. */
/* Supplied declaration required: FUN_004c9474. */
/* Supplied declaration required: FUN_004c9538. */
/* Supplied declaration required: FUN_004c9d04. */
/* Supplied declaration required: FUN_004cab9c. */
/* Supplied declaration required: FUN_004cad84. */
/* Supplied declaration required: FUN_004cae0c. */
/* Supplied declaration required: FUN_004cb348. */
/* Supplied declaration required: FUN_004cb8a0. */
/* Supplied declaration required: FUN_004cbab0. */
extern int holderObjectCall(unsigned int);
/* Supplied declaration required: asdModelStartReferencedAnimation. */
extern int animationIsReferencedClipComplete(unsigned int);
/* Supplied declaration required: FUN_004d888c. */
/* Supplied declaration required: FUN_004e5f2c. */
/* Supplied declaration required: btlUnitGet. */
/* Supplied declaration required: uiStartRangeAnimationFromTable. */
/* Supplied declaration required: btlCameraSetFormationSlot. */
/* Supplied declaration required: flags64CSetTarget. */
/* Supplied declaration required: FUN_004f26cc. */
extern int FUN_004f2708(int, int, unsigned int);
extern int FUN_004f283c(int);
/* Supplied declaration required: FUN_004f41b0. */
/* Supplied declaration required: FUN_004f5238. */
/* Supplied declaration required: FUN_004f56cc. */
extern int FUN_004f5c84(int, int);
/* Supplied declaration required: asdModelActivateOwnedSlots. */
/* Supplied declaration required: FUN_004f5fb8. */
/* Supplied declaration required: resourceEnsureCachedObject. */
/* Supplied declaration required: FUN_004f741c. */
/* Supplied declaration required: btlResetMatchingBoundObjects. */
/* Supplied declaration required: FUN_004f85c8. */
/* Supplied declaration required: FUN_004f89e8. */
/* Supplied declaration required: FUN_004f950c. */
/* Supplied declaration required: resourceTestPendingRecordsReady. */
extern int FUN_004f9c2c(int);
/* Supplied declaration required: FUN_004f9c40. */
extern int FUN_004fa0d8(int);
/* Supplied declaration required: FUN_004fa0ec. */
/* Supplied declaration required: FUN_004fa5ec. */
extern int FUN_004fa7bc(int);
/* Supplied declaration required: keyedValueFindPair. */
/* Supplied declaration required: FUN_004fb43c. */
/* Supplied declaration required: FUN_004fb4fc. */
/* Supplied declaration required: FUN_004fb670. */
/* Supplied declaration required: FUN_004fb798. */
/* Supplied declaration required: FUN_004fbd5c. */
/* Supplied declaration required: FUN_004fd508. */
/* Supplied declaration required: FUN_004fe7e4. */
/* Supplied declaration required: FUN_004fe900. */
/* Supplied declaration required: btlReflectSetValuePair. */
/* Supplied declaration required: btlReflectRequestPairScalar. */
extern int FUN_004ffba8(unsigned int);


/* WARNING: Type propagation algorithm not settling */

unsigned int FUN_0040de54(int *param_1)

{
/* irregular: 76 unstructured edge(s); 24 goto(s); irregular input(s): in_fpscr; 97 native warning(s); review required */
  char temp_v0;
  short *psVar2;
  unsigned char temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar5;
  unsigned int *puVar6;
  int temp_v3;
  short temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  unsigned int *unaff_r8;
  short *psVar14;
  unsigned char temp_v10;
  unsigned char temp_v11;
  unsigned int in_fpscr;
  unsigned int temp_v12;
  
  psVar14 = (short *)param_1[2];
joined_r0x0040de68:
  psVar2 = psVar14;
  temp_v3 = g_btlUiBlock;
  if (psVar2 == (short *)0x0) {
    return 0;
  }
  temp_v0 = (char)psVar2[2];
  psVar14 = *(short **)(psVar2 + 6);
  if (temp_v0 == '+') goto LAB_0040de9c;
  if (temp_v0 < '+') {
    if (temp_v0 == '\x1a' || temp_v0 == '\x1b') goto LAB_0040de9c;
  }
  else if (temp_v0 == ',' || temp_v0 == '5') goto LAB_0040de9c;
  goto LAB_0040deb4;
LAB_0040de9c:
  if ((*(int *)(psVar2 + 10) != 0) && ((*(unsigned int *)(*(int *)(psVar2 + 10) + 0x58) & 7) != 0))
  goto joined_r0x0040de68;
LAB_0040deb4:
  if (0 < *psVar2) {
    *psVar2 = *psVar2 - 1;
    goto joined_r0x0040de68;
  }
  if (psVar2[1] < 0) {
    if (*(int *)(psVar2 + 8) == 0) {
      param_1[2] = (int)psVar14;
    }
    else {
      *(short **)(*(int *)(psVar2 + 8) + 0xc) = psVar14;
    }
    if (*(int *)(psVar2 + 6) == 0) {
      param_1[3] = *(int *)(psVar2 + 8);
    }
    else {
      *(int *)(*(int *)(psVar2 + 6) + 0x10) = *(int *)(psVar2 + 8);
    }
    param_1[1] = param_1[1] - 1;
    asdMemFree();
    goto joined_r0x0040de68;
  }
  if ((*(unsigned char *)((int)psVar2 + 5) & 2) != 0) goto joined_r0x0040de68;
  switch(temp_v0) {
  case '\x01':
    if (*(int *)(psVar2 + 0x16) != 0) {
      temp_v3 = *(int *)(psVar2 + 0x20);
      if ((temp_v3 == 0) || (*(int *)(temp_v3 + 4) >= *(int *)(temp_v3 + 8))) {
        *(unsigned int *)(g_btlCamera + 0x64c) = *(unsigned int *)(g_btlCamera + 0x64c) & 0xf7ffffff;
        temp_v4 = 0;
      }
      else {
        if ((char)psVar2[0x10] != '\0') {
          *(unsigned int *)(g_btlCamera + 0x64c) = *(unsigned int *)(g_btlCamera + 0x64c) | 0x8000000;
        }
        temp_v4 = 1;
      }
      psVar2[1] = temp_v4;
    }
    else {
      temp_v3 = g_btlAux;
      FUN_004f5238(g_btlAux,(int)psVar2[0x12],(int)psVar2[0x13],(int)psVar2[0x24],
                   (int)psVar2[0x25],*(unsigned int *)(psVar2 + 0x14),psVar2 + 0x34,
                   *(int *)(psVar2 + 0x28) != 0,*(int *)(psVar2 + 0x26) != 0);
      wstrlen(psVar2 + 0x34);
      if (temp_v3 != 0) {
        *(int *)(psVar2 + 0x20) = temp_v3;
        psVar2[1] = 1;
        *(int *)(psVar2 + 0x16) = *(int *)(psVar2 + 0x16) + 1;
      }
    }
    break;
  case '\x02':
    FUN_0040cd6c(param_1,psVar2);
    break;
  case '\x03':
    puVar6 = (unsigned int *)btlGetMainState();
    FUN_003f0e20(puVar6,(int)*(short *)(*(int *)(psVar2 + 10) + 0x6a));
    if (puVar6 != (unsigned int *)0x0) {
      if ((puVar6[1] & DAT_0057131c) == 0 && (*puVar6 & DAT_00571318) == 0) {
        temp_v6 = (int)*(short *)((int)puVar6 + 0x6e);
        temp_v3 = *(int *)(psVar2 + 0x14);
        if ((*puVar6 & DAT_00571320) != 0 || (puVar6[1] & DAT_00571324) != 0) {
          temp_v6 = 4;
        }
        if (temp_v3 == 0) {
          temp_v8 = 0;
        }
        else {
          if (temp_v3 != 2) {
            if (temp_v3 == 1) {
              temp_v8 = 0;
            }
            else {
              if (temp_v3 != 3) break;
              temp_v8 = 1;
            }
            FUN_004a96fc(g_btlUiBlock,temp_v6,*(unsigned int *)(psVar2 + 0x26),temp_v8,1);
            break;
          }
          temp_v8 = 1;
        }
        FUN_004a96fc(g_btlUiBlock,temp_v6,*(unsigned int *)(psVar2 + 0x26),temp_v8,0);
      }
    }
    break;
  case '\x04':
    temp_v5 = *(unsigned int *)(g_btlAux + 0x339c);
    if ((temp_v5 & 0x8000) != 0) {
      *(unsigned int *)(g_btlAux + 0x339c) = temp_v5 & 0xffff7fff;
    }
    else {
      *(unsigned int *)(g_btlAux + 0x339c) = temp_v5 | 2;
      temp_v3 = btlUnitGet(g_btlScriptUnit);
      if (*(char *)(temp_v3 + 0x59c) != '\0') {
        resourcePairApply(*(unsigned int *)(temp_v3 + 0x594) & 0xffff,*(unsigned int *)(psVar2 + 4));
      }
    }
    break;
  case '\x05':
    if (0 < *(int *)(psVar2 + 0x14)) {
      temp_v8 = btlGetMainState();
      VectorSignedToFloat((int)(char)psVar2[0x10],(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat((int)*(char *)((int)psVar2 + 0x21),(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat((int)(char)psVar2[0x11],(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(*(int *)(psVar2 + 0x14) - *(int *)(psVar2 + 0x26),
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_003e7840(temp_v8,*(int *)(psVar2 + 0x14) - *(int *)(psVar2 + 0x26));
      temp_v3 = *(int *)(psVar2 + 0x26);
      *(int *)(psVar2 + 0x26) = temp_v3 + 1;
      if (temp_v3 + 1 < *(int *)(psVar2 + 0x14)) {
        psVar2[1] = 1;
      }
    }
    break;
  case '\x06':
    FUN_0040dcdc(param_1,psVar2);
    break;
  case '\a':
    puVar6 = *(unsigned int **)(psVar2 + 0xc);
    if ((DAT_00571318 & *puVar6) == 0 && (DAT_0057131c & puVar6[1]) == 0) {
      temp_v3 = (int)*(short *)((int)puVar6 + 0x6e);
      if ((*puVar6 & DAT_00571320) != 0 || (puVar6[1] & DAT_00571324) != 0) {
        temp_v3 = 4;
      }
      FUN_004ab6f4(g_btlUiBlock,temp_v3);
    }
    break;
  case '\b':
    FUN_0040d97c(param_1,psVar2);
    break;
  case '\t':
    puVar6 = (unsigned int *)btlGetMainState();
    FUN_003f0e20(puVar6,(int)*(short *)(*(int *)(psVar2 + 10) + 0x6a));
    if (puVar6 != (unsigned int *)0x0) {
      temp_v7 = *puVar6;
      temp_v5 = puVar6[1];
      if (((temp_v5 & DAT_0057131c) == 0 && (temp_v7 & DAT_00571318) == 0) &&
         (((DAT_00571300 | DAT_00571310) & temp_v7) != 0 ||
          ((DAT_00571304 | DAT_00571314) & temp_v5) != 0)) {
        temp_v3 = (int)*(short *)((int)puVar6 + 0x6e);
        temp_v2 = *(unsigned int *)(psVar2 + 0x14);
        if ((temp_v5 & DAT_00571324) != 0 || (temp_v7 & DAT_00571320) != 0) {
          temp_v3 = 4;
        }
        if ((((((temp_v2 & 0x20) != 0) || ((temp_v2 & 0x40) != 0)) || ((temp_v2 & 0x80) != 0)) ||
            ((((temp_v2 & 0x100) != 0 || ((temp_v2 & 0x200) != 0)) ||
             (((temp_v2 & 8) != 0 || (((temp_v2 & 0x800) != 0 || ((temp_v2 & 0x1000) != 0)))))))) ||
           ((temp_v2 & 0x2000) != 0)) {
          FUN_004ab6f4(g_btlUiBlock,temp_v3);
        }
      }
    }
    break;
  case '\n':
    FUN_004f5238(g_btlAux);
    break;
  case '\f':
  case '\r':
  case '\x0e':
    btlGetMainState();
    temp_v3 = g_btlAux;
    temp_v4 = psVar2[0x12];
    if (temp_v4 == 0) {
      temp_v0 = (char)psVar2[2];
      if (temp_v0 != '\f') {
        if (temp_v0 != '\x0e') {
          if (temp_v0 == '\r') {
            FUN_004f9c40(g_btlAux);
          }
        }
        else {
          FUN_004f741c(g_btlAux);
        }
      }
      else {
        FUN_004f85c8(g_btlAux,*(int *)(psVar2 + 0x14) != 0);
      }
      psVar2[0x12] = psVar2[0x12] + 1;
      temp_v4 = 1;
      psVar2[1] = temp_v4;
      break;
    }
    if (temp_v4 == 1) {
      temp_v0 = (char)psVar2[2];
      if (temp_v0 != '\f') {
        if (temp_v0 != '\x0e') {
          if (temp_v0 == '\r') {
            temp_v6 = g_btlAux;
            FUN_004fa5ec();
            if (temp_v6 == 0) {
              temp_v4 = 1;
              psVar2[1] = temp_v4;
              break;
            }
            FUN_004fa0ec(temp_v3);
          }
        }
        else {
          temp_v6 = btlAuxAreResourcesReady((BtlAuxA*)g_btlAux);
          if (temp_v6 == 0) {
            temp_v4 = 1;
            psVar2[1] = temp_v4;
            break;
          }
          FUN_004f89e8(temp_v3);
        }
      }
      else {
        temp_v6 = g_btlAux;
        resourceTestPendingRecordsReady(g_btlAux,*(int *)(psVar2 + 0x14) != 0);
        if (temp_v6 == 0) {
          temp_v4 = 1;
          psVar2[1] = temp_v4;
          break;
        }
        FUN_004f950c(temp_v3,*(int *)(psVar2 + 0x14) != 0);
      }
      psVar2[0x12] = psVar2[0x12] + 1;
      temp_v4 = 1;
      psVar2[1] = temp_v4;
      break;
    }
    if (temp_v4 != 2) {
      temp_v4 = 1;
      psVar2[1] = temp_v4;
      break;
    }
    temp_v0 = (char)psVar2[2];
    if (temp_v0 != '\f') {
      if (temp_v0 != '\x0e') {
        if (temp_v0 != '\r') {
          temp_v4 = 1;
          psVar2[1] = temp_v4;
          break;
        }
        temp_v3 = FUN_004fa7bc(g_btlAux);
      }
      else {
        temp_v3 = FUN_004f9c2c(g_btlAux);
      }
    }
    else {
      temp_v3 = FUN_004fa0d8(g_btlAux);
    }
    if (temp_v3 == 0) {
      temp_v4 = 1;
      psVar2[1] = temp_v4;
    }
    break;
  case '\x0f':
    temp_v8 = btlGetMainState();
    temp_v4 = psVar2[0x12];
    if (temp_v4 == 0) {
      FUN_003f2280(temp_v8,0,(int)psVar2[0x13],*(unsigned int *)(psVar2 + 0x14),
                   *(unsigned int *)(psVar2 + 0x26) & 0xff);
      temp_v4 = 1;
      psVar2[0x12] = temp_v4;
      temp_v4 = 1;
      psVar2[1] = temp_v4;
      break;
    }
    if (temp_v4 == 1) {
      temp_v3 = btlSlotStateIsNot456(temp_v8,0);
      if (temp_v3 == 0) {
        temp_v4 = 1;
        psVar2[1] = temp_v4;
        break;
      }
      btlResetSlot(temp_v8,0);
      temp_v4 = 2;
      psVar2[0x12] = temp_v4;
      temp_v4 = 1;
      psVar2[1] = temp_v4;
      break;
    }
    if (temp_v4 == 2) {
      temp_v3 = btlIsExtendedState(temp_v8,0);
joined_r0x0040e860:
      if (temp_v3 == 0) {
        temp_v4 = 1;
        psVar2[1] = temp_v4;
        break;
      }
      temp_v4 = 0;
    }
    else {
LAB_0040e864:
      temp_v4 = 1;
    }
    psVar2[1] = temp_v4;
    break;
  case '\x10':
    temp_v8 = btlGetMainState();
    temp_v0 = (char)psVar2[0x10];
    if (temp_v0 != '\0') {
      if (temp_v0 != '\x01') {
        if (temp_v0 != '\x02') {
          if (temp_v0 != '\x03') {
            temp_v4 = 1;
            psVar2[1] = temp_v4;
            break;
          }
          temp_v3 = btlIsExtendedState(temp_v8,1);
          goto joined_r0x0040e860;
        }
      }
      else {
        temp_v3 = btlSlotStateIsNot456(temp_v8,1);
        if (temp_v3 == 0) {
          temp_v4 = 1;
          psVar2[1] = temp_v4;
          break;
        }
        *(unsigned char *)(psVar2 + 0x10) = 2;
      }
      temp_v3 = *(int *)(psVar2 + 0x28);
      *(unsigned int *)(psVar2 + 0x28) = temp_v3 + 1U;
      if (*(unsigned int *)(psVar2 + 0x16) > temp_v3 + 1U) {
        temp_v4 = 1;
        psVar2[1] = temp_v4;
        break;
      }
      btlResetSlot(temp_v8,1);
      temp_v10 = 3;
    }
    else {
      FUN_003f2280(temp_v8,1,(int)psVar2[0x13],*(unsigned int *)(psVar2 + 0x14),
                   *(unsigned int *)(psVar2 + 0x26) & 0xff);
      temp_v10 = 1;
    }
    *(unsigned char *)(psVar2 + 0x10) = temp_v10;
    temp_v4 = 1;
    psVar2[1] = temp_v4;
    break;
  case '\x11':
    if (g_btlUiBlock != -0x28c4) {
      *(unsigned int *)(g_btlUiBlock + 0x6a64) = 0;
      *(unsigned int *)(temp_v3 + 0x6a68) = 0;
      *(unsigned int *)(temp_v3 + 0x6a6c) = *(unsigned int *)(psVar2 + 0x18);
      *(unsigned int *)(temp_v3 + 0x6a70) = *(unsigned int *)(psVar2 + 0x14);
      *(unsigned int *)(temp_v3 + 0x6a74) = *(unsigned int *)(temp_v3 + 0x6a6c);
      *(unsigned int *)(temp_v3 + 0x6a78) = *(unsigned int *)(temp_v3 + 0x6a70);
    }
    break;
  case '\x12':
    temp_v3 = btlGetMainState();
    if (((DAT_00571358 | DAT_00571368) & *(unsigned int *)(temp_v3 + 0x45a0)) == 0 &&
        ((DAT_0057135c | DAT_0057136c) & *(unsigned int *)(temp_v3 + 0x45a4)) == 0) {
      if (psVar2[0x12] == 0) {
        if (*(int *)(psVar2 + 0x14) >= 1) {
          FUN_004c8d8c(*(int *)(psVar2 + 0x14),*(unsigned int *)(psVar2 + 0xc));
          psVar2[0x12] = psVar2[0x12] + 1;
          temp_v4 = 1;
          psVar2[1] = temp_v4;
          break;
        }
        FUN_004c8e30(*(unsigned int *)(psVar2 + 0x26),0);
        psVar2[0x12] = psVar2[0x12] + 1;
        temp_v4 = 1;
        psVar2[1] = temp_v4;
        break;
      }
      if (psVar2[0x12] != 1) {
        temp_v4 = 1;
        psVar2[1] = temp_v4;
        break;
      }
      temp_v3 = infoWinIsActive();
joined_r0x0040ec14:
      if (temp_v3 != 0) {
        temp_v4 = 1;
        psVar2[1] = temp_v4;
        break;
      }
    }
    temp_v4 = 0;
    psVar2[1] = temp_v4;
    break;
  case '\x13':
    temp_v3 = btlGetMainState();
    if (((DAT_0057136c | DAT_0057135c) & *(unsigned int *)(temp_v3 + 0x45a4)) != 0 ||
        ((DAT_00571358 | DAT_00571368) & *(unsigned int *)(temp_v3 + 0x45a0)) != 0) {
      temp_v4 = 0;
      psVar2[1] = temp_v4;
      break;
    }
    if (psVar2[0x12] == 0) {
      FUN_004c9160(*(unsigned int *)(psVar2 + 0x14),*(unsigned int *)(psVar2 + 0xc));
      psVar2[0x12] = psVar2[0x12] + 1;
      temp_v4 = 1;
      psVar2[1] = temp_v4;
      break;
    }
    if (psVar2[0x12] != 1) {
      temp_v4 = 1;
      psVar2[1] = temp_v4;
      break;
    }
    temp_v3 = infoWinIsActive();
    goto joined_r0x0040ec14;
  case '\x14':
    temp_v3 = btlGetMainState();
    if (((DAT_0057135c | DAT_0057136c) & *(unsigned int *)(temp_v3 + 0x45a4)) != 0 ||
        ((DAT_00571358 | DAT_00571368) & *(unsigned int *)(temp_v3 + 0x45a0)) != 0) {
      temp_v4 = 0;
      psVar2[1] = temp_v4;
      break;
    }
    if (psVar2[0x12] == 0) {
      FUN_004c9538(*(unsigned int *)(psVar2 + 0x14),*(unsigned int *)(psVar2 + 0xc));
      psVar2[0x12] = psVar2[0x12] + 1;
      temp_v4 = 1;
      psVar2[1] = temp_v4;
      break;
    }
    if (psVar2[0x12] != 1) {
      temp_v4 = 1;
      psVar2[1] = temp_v4;
      break;
    }
    temp_v3 = infoWinIsActive();
    goto joined_r0x0040ec14;
  case '\x15':
    FUN_0040ca18(param_1,psVar2);
    break;
  case '\x16':
    temp_v3 = btlGetMainState();
    if (((DAT_0057136c | DAT_0057135c) & *(unsigned int *)(temp_v3 + 0x45a4)) != 0 ||
        ((DAT_00571358 | DAT_00571368) & *(unsigned int *)(temp_v3 + 0x45a0)) != 0) {
      temp_v4 = 0;
      psVar2[1] = temp_v4;
      break;
    }
    if (psVar2[0x12] == 0) {
      FUN_004c9474(*(unsigned int *)(psVar2 + 0x14),*(unsigned int *)(psVar2 + 0xc));
      psVar2[0x12] = psVar2[0x12] + 1;
      temp_v4 = 1;
      psVar2[1] = temp_v4;
      break;
    }
    if (psVar2[0x12] != 1) {
      temp_v4 = 1;
      psVar2[1] = temp_v4;
      break;
    }
    temp_v3 = infoWinIsActive();
    goto joined_r0x0040ec14;
  case '\x17':
    temp_v3 = btlGetMainState();
    if (((DAT_0057136c | DAT_0057135c) & *(unsigned int *)(temp_v3 + 0x45a4)) != 0 ||
        ((DAT_00571358 | DAT_00571368) & *(unsigned int *)(temp_v3 + 0x45a0)) != 0) {
      temp_v4 = 0;
      psVar2[1] = temp_v4;
      break;
    }
    if (psVar2[0x12] == 0) {
      FUN_004c909c(*(unsigned int *)(psVar2 + 0x14),*(unsigned int *)(psVar2 + 0xc));
      psVar2[0x12] = psVar2[0x12] + 1;
      temp_v4 = 1;
      psVar2[1] = temp_v4;
      break;
    }
    if (psVar2[0x12] != 1) {
      temp_v4 = 1;
      psVar2[1] = temp_v4;
      break;
    }
    temp_v3 = infoWinIsActive();
    goto joined_r0x0040ec14;
  case '\x18':
    temp_v3 = btlGetMainState();
    if (((DAT_0057136c | DAT_0057135c) & *(unsigned int *)(temp_v3 + 0x45a4)) != 0 ||
        ((DAT_00571368 | DAT_00571358) & *(unsigned int *)(temp_v3 + 0x45a0)) != 0) {
      temp_v4 = 0;
      psVar2[1] = temp_v4;
      break;
    }
    if (psVar2[0x12] == 0) {
      FUN_004c8cb0(*(unsigned int *)(psVar2 + 0x14),*(unsigned int *)(psVar2 + 0x26));
      psVar2[0x12] = psVar2[0x12] + 1;
      temp_v4 = 1;
      psVar2[1] = temp_v4;
      break;
    }
    if (psVar2[0x12] != 1) {
      temp_v4 = 1;
      psVar2[1] = temp_v4;
      break;
    }
    temp_v3 = infoWinIsActive();
    goto joined_r0x0040ec14;
  case '\x19':
    temp_v3 = btlGetMainState();
    if (!(((DAT_0057136c | DAT_0057135c) & *(unsigned int *)(temp_v3 + 0x45a4)) == 0 &&
         ((DAT_00571358 | DAT_00571368) & *(unsigned int *)(temp_v3 + 0x45a0)) == 0)) {
      temp_v4 = 0;
      psVar2[1] = temp_v4;
      break;
    }
    FUN_004c8800(*(int *)(temp_v3 + 0x1ffc) + *(int *)(psVar2 + 0x14) * 0x408,
                 *(unsigned int *)(psVar2 + 0x26));
    break;
  case '\x1a':
  case '\x1b':
    puVar5 = (unsigned int *)btlGetMainState();
    puVar6 = puVar5;
    FUN_003f0e20(puVar5,(int)*(short *)(*(int *)(psVar2 + 10) + 0x6a));
    if (puVar6 != (unsigned int *)0x0) {
      if ((char)psVar2[2] != '\x1a') {
        if ((char)psVar2[2] == '\x1b') {
          FUN_004cab9c(*(unsigned int *)(psVar2 + 10));
        }
      }
      else if (!((puVar6[1] & DAT_0057131c) == 0 && (*puVar6 & DAT_00571318) == 0)) {
        temp_v3 = btlScriptUnitHasFlags(puVar5);
        if (temp_v3 != 0) {
          FUN_004cad84();
        }
        else {
          FUN_004cbab0(*(unsigned int *)(psVar2 + 10),*(unsigned int *)(psVar2 + 0x26));
        }
      }
      else {
        temp_v3 = (int)*(short *)((int)puVar6 + 0x6e);
        if ((*puVar6 & DAT_00571320) != 0 || (puVar6[1] & DAT_00571324) != 0) {
          temp_v3 = 4;
        }
        btlUiSetDefaultLimits(g_btlUiBlock,temp_v3);
        if (psVar2[0x12] != 0) {
          flags64CSetTarget(g_btlCamera);
        }
      }
    }
    break;
  case '\x1c':
    puVar6 = (unsigned int *)btlGetMainState();
    FUN_003f0e20(puVar6,(int)*(short *)(*(int *)(psVar2 + 10) + 0x6a));
    if (puVar6 != (unsigned int *)0x0) {
      if (!(((DAT_00571318 | DAT_00571330) & *puVar6) != 0 ||
           ((DAT_00571334 | DAT_0057131c) & puVar6[1]) != 0)) {
        FUN_004cab9c(*(unsigned int *)(psVar2 + 10));
        break;
      }
      temp_v3 = btlGetMainState();
      temp_v6 = 0;
      do {
        temp_v9 = (int)*(short *)((int)puVar6 + temp_v6 * 2 + 8);
        if (-1 < temp_v9) {
          FUN_004cab9c(*(int *)(temp_v3 + 0x1ed4) + temp_v9 * 0x1d0);
        }
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < 0x32);
    }
    break;
  case '\x1d':
    temp_v3 = btlGetMainState();
    temp_v3 = FUN_003f0e20(temp_v3,(int)*(short *)(*(int *)(psVar2 + 10) + 0x6a));
    if (temp_v3 != 0) {
      FUN_004cb8a0(reinterpret_cast<TransitionView *>(*(int *)(psVar2 + 10)));
    }
    break;
  case '\x1e':
    FUN_0040d274(param_1,psVar2);
    break;
  case '\x1f':
    temp_v3 = btlGetMainState();
    unaff_r8 = (unsigned int *)btlUnitGet(g_btlScriptUnit);
    temp_v8 = 0;
    temp_v6 = (int)(short)*(unsigned int *)(psVar2 + 0x14);
    if (psVar2[0x13] != 0) {
      temp_v6 = 1;
    }
    if (((-1 < *(int *)(g_btlCamera + 0x7cc)) &&
        (temp_v9 = FUN_004f2708(g_btlCamera,temp_v3,0), temp_v9 != 0)) &&
       (((*(unsigned int *)(temp_v3 + 0x45a0) & DAT_00571370) == 0 &&
         (*(unsigned int *)(temp_v3 + 0x45a4) & DAT_00571374) == 0 ||
        (temp_v9 = FUN_004f283c(g_btlCamera), temp_v9 == 0)))) {
      FUN_004fb670(0,*(unsigned int *)(psVar2 + 4));
    }
    temp_v5 = uRam00571360;
    if ((*unaff_r8 & 0x200) != 0) {
      puVar6 = (unsigned int *)(temp_v3 + 0x45a0);
      *(unsigned int *)(temp_v3 + 0x45a4) = uRam00571364 | *(unsigned int *)(temp_v3 + 0x45a4);
      *puVar6 = temp_v5 | *puVar6;
      btlReflectRequestPairScalar(1,*(unsigned int *)(psVar2 + 4),0xffffffff,1,1);
      if ((*(unsigned int *)(temp_v3 + 0x45a4) & uRam0057137c) != 0 || (uRam00571378 & *puVar6) != 0) {
        FUN_004fb4fc(0,*(unsigned int *)(psVar2 + 4));
      }
    }
    else {
      if ((*unaff_r8 & 0x2000) == 0) {
        temp_v8 = FUN_003e82d4(temp_v3);
      }
      if (psVar2[0x12] == 0) {
        temp_v8 = 0xffffffff;
      }
      else if ((*(unsigned int *)(temp_v3 + 0x45a4) & uRam0057137c) != 0 ||
               (uRam00571378 & *(unsigned int *)(temp_v3 + 0x45a0)) != 0) {
        FUN_004fb4fc(0,*(unsigned int *)(psVar2 + 4));
      }
      btlReflectRequestPairScalar(1,*(unsigned int *)(psVar2 + 4),temp_v8,1,temp_v6);
    }
    break;
  case ' ':
    uiStartRangeAnimationFromTable(g_btlCamera,*(unsigned int *)(psVar2 + 0x14));
    break;
  case '!':
    temp_v8 = btlGetMainState();
    if (-1 < psVar2[0x12]) {
      btlCameraSetFormationSlot((BattleActionCamera *)g_btlCamera,(BattleMaskState *)temp_v8,psVar2[0x12]);
    }
    if (psVar2[0x13] != 0) {
      FUN_004f41b0(g_btlCamera,0);
    }
    break;
  case '\"':
    FUN_004f26cc(g_btlCamera);
    break;
  case '#':
    temp_v3 = param_1[2];
    while (temp_v6 = temp_v3, temp_v6 != 0) {
      temp_v0 = *(char *)(temp_v6 + 4);
      temp_v3 = *(int *)(temp_v6 + 0xc);
      if (temp_v0 != '\x02') {
        if (temp_v0 != '\x01') {
          if (temp_v0 == '\b') {
            temp_v11 = *(int *)(temp_v6 + 8) == *(int *)(psVar2 + 4);
            if (temp_v11) {
              temp_v6 = *(int *)(temp_v6 + 0x28);
            }
            if (temp_v11 && temp_v6 == 3) goto LAB_0040e864;
          }
        }
        else if (*(int *)(temp_v6 + 8) == *(int *)(psVar2 + 4)) goto LAB_0040e864;
      }
      else if (*(int *)(temp_v6 + 8) == *(int *)(psVar2 + 4)) goto LAB_0040e864;
    }
    temp_v3 = btlGetMainState();
    if (*(char *)(temp_v3 + 0x3004) >= '\x01') {
      temp_v4 = 1;
      psVar2[1] = temp_v4;
      break;
    }
    btlGetMainState();
    stateFinishIfPresent();
    btlReflectSetValuePair(0,*(unsigned int *)(psVar2 + 4),0,1,1);
    temp_v4 = 0;
    psVar2[1] = temp_v4;
    break;
  case '$':
    temp_v3 = btlGetMainState();
    *(char *)(temp_v3 + 0x3004) = *(char *)(temp_v3 + 0x3004) - '\x01';
    break;
  case '%':
    puVar6 = (unsigned int *)*param_1;
    FUN_003f0e20(puVar6,(int)*(short *)(*(int *)(psVar2 + 10) + 0x6a));
    if (!((*(unsigned int *)(*param_1 + 0x45ac) & uRam005713ac) != 0 ||
         (*(unsigned int *)(*param_1 + 0x45a8) & uRam005713a8) != 0)) {
      temp_v3 = gameFlagIsSet(0x591);
      if (temp_v3 != 0) {
        if (puVar6 != (unsigned int *)0x0) {
          if (((puVar6[1] & DAT_0057131c) == 0 && (DAT_00571318 & *puVar6) == 0) &&
             (*(int *)(psVar2 + 0x26) < 0)) break;
LAB_0040f258:
          if ((puVar6[0x56] == 0) &&
             ((((puVar6[1] & uRam00571344) != 0 || (uRam00571340 & *puVar6) != 0 &&
               (*(int *)(psVar2 + 0x14) == 0)) && ((int)puVar6[0x96] <= -*(int *)(psVar2 + 0x26)))))
          {
            *(unsigned int *)(psVar2 + 0x26) = -(puVar6[0x96] - 1);
          }
          if ((0 < (int)puVar6[0x57]) && (*(int *)(psVar2 + 0x14) == 0)) {
            temp_v3 = (int)(puVar6[0x97] * puVar6[0x57]) / 100;
            if ((int)(puVar6[0x96] + *(int *)(psVar2 + 0x26)) < temp_v3) {
              *(unsigned int *)(psVar2 + 0x26) = temp_v3 - puVar6[0x96];
            }
          }
        }
      }
      else if (puVar6 != (unsigned int *)0x0) goto LAB_0040f258;
      FUN_004c80f0((int)*(short *)(*(int *)(psVar2 + 10) + 0x6a),*(unsigned int *)(psVar2 + 0x14));
    }
    break;
  case '&':
    FUN_004c0850((int)*(short *)(*(int *)(psVar2 + 10) + 0x6a),*(int *)(psVar2 + 0x14) != 0);
    temp_v8 = btlGetMainState();
    if ((*(unsigned int *)(psVar2 + 0x26) & 0x10) != 0) {
      puVar6 = (unsigned int *)*param_1;
      if (*(int *)(psVar2 + 0x14) != 0) {
        FUN_003f0e20(puVar6,(int)*(short *)(*(int *)(psVar2 + 10) + 0x6a));
        temp_v5 = *puVar6;
        temp_v7 = puVar6[1];
        if ((!((temp_v7 & DAT_00571304) == 0 && (temp_v5 & DAT_00571300) == 0)) ||
           (!((DAT_00571310 & temp_v5) == 0 && (DAT_00571314 & temp_v7) == 0))) {
          temp_v3 = btlScriptUnitHasFlags(temp_v8);
          if (temp_v3 == 0) {
            FUN_004fb43c(0,*(unsigned int *)(psVar2 + 4),0x1000275,0,1,0,0);
          }
          FUN_004aa008(g_btlUiBlock,(int)*(short *)((int)puVar6 + 0x6e));
        }
        else if ((temp_v5 & DAT_00571318) != 0 || (temp_v7 & DAT_0057131c) != 0) {
          temp_v3 = btlScriptUnitHasFlags(temp_v8);
          if (temp_v3 == 0) {
            FUN_004fb43c(0,*(unsigned int *)(psVar2 + 4),0x1000275,0,1,0,0);
          }
          FUN_003e7fa4(*param_1,(int)*(short *)(*(int *)(psVar2 + 10) + 0x6a));
          FUN_004a9d68(g_btlUiBlock,puVar6);
        }
      }
      else {
        FUN_003f0e20(puVar6,(int)*(short *)(*(int *)(psVar2 + 10) + 0x6a));
        if (puVar6 != (unsigned int *)0x0) {
          temp_v5 = ~uRam00571308;
          puVar6[1] = puVar6[1] & ~uRam0057130c;
          *puVar6 = *puVar6 & temp_v5;
        }
      }
    }
    break;
  case '\'':
    FUN_00410410(param_1,psVar2);
    break;
  case '(':
    FUN_004fd508(0,*(unsigned int *)(psVar2 + 4),*(unsigned int *)(psVar2 + 0x14),0,1);
    break;
  case '*':
    FUN_004fe7e4(0,*(unsigned int *)(psVar2 + 4));
    break;
  case '+':
  case ',':
    temp_v5 = *(unsigned int *)(*(int *)(psVar2 + 10) + 0x50);
    if (!((temp_v5 & 1) == 0 || (temp_v5 & 2) == 0)) {
      if (psVar2[0x12] != 0) {
        if (temp_v0 != '+') {
          if (temp_v0 != ',') {
            temp_v4 = 1;
            psVar2[1] = temp_v4;
            break;
          }
          temp_v5 = temp_v5 & 0x2000;
        }
        else {
          temp_v5 = temp_v5 & 0x1000;
        }
        if (temp_v5 != 0) {
          temp_v4 = 1;
          psVar2[1] = temp_v4;
          break;
        }
        temp_v4 = 0;
        psVar2[1] = temp_v4;
        break;
      }
      if (temp_v0 != '+') {
        if (temp_v0 != ',') {
          psVar2[0x12] = psVar2[0x12] + 1;
          temp_v4 = 1;
          psVar2[1] = temp_v4;
          break;
        }
        FUN_004cae0c(*param_1);
        psVar2[0x12] = psVar2[0x12] + 1;
        temp_v4 = 1;
        psVar2[1] = temp_v4;
        break;
      }
      FUN_004cb348(*param_1);
      psVar2[0x12] = psVar2[0x12] + 1;
      temp_v4 = 1;
      psVar2[1] = temp_v4;
    }
    break;
  case '-':
    FUN_0040c64c(param_1,psVar2);
    break;
  case '.':
    FUN_004c9d04((int)*(short *)(*(int *)(psVar2 + 0xc) + 0x6e),0);
    btlGetMainState();
    FUN_003e7ef0();
    break;
  case '/':
    temp_v3 = *(int *)(psVar2 + 0x26);
    if (temp_v3 != 0) {
      if (temp_v3 == 1) goto LAB_0040f684;
      if (temp_v3 != 2) {
        temp_v4 = 1;
        psVar2[1] = temp_v4;
        break;
      }
      temp_v3 = g_btlAux;
      keyedValueFindPair(g_btlAux,(int)psVar2[0x12]);
      if ((temp_v3 != 0) && (temp_v3 = FUN_004ffba8(*(unsigned int *)(temp_v3 + 4)), temp_v3 == 0)) {
        temp_v5 = *(unsigned int *)(*(int *)(psVar2 + 10) + 0x50);
joined_r0x0040f750:
        if ((temp_v5 & 1) != 0) {
          temp_v4 = 1;
          psVar2[1] = temp_v4;
          break;
        }
      }
      temp_v3 = btlGetMainState();
      *(char *)(temp_v3 + 0x3004) = *(char *)(temp_v3 + 0x3004) - '\x01';
      temp_v4 = 0;
      psVar2[1] = temp_v4;
      break;
    }
    FUN_004f5fb8(g_btlAux,(int)*(short *)(*(int *)(psVar2 + 10) + 0x6a));
    *(int *)(psVar2 + 0x26) = *(int *)(psVar2 + 0x26) + 1;
LAB_0040f684:
    *(unsigned int *)(*(int *)(psVar2 + 10) + 0x50) = *(unsigned int *)(*(int *)(psVar2 + 10) + 0x50) | 0x100000;
    FUN_004fe900(0,*(unsigned int *)(psVar2 + 4),*(unsigned int *)(psVar2 + 10),0,0,0,0,0);
    btlResetMatchingBoundObjects(g_btlAux,(int)psVar2[0x12],*(unsigned int *)(*(int *)(psVar2 + 10) + 100));
    FUN_0047effc(*(unsigned int *)(psVar2 + 0x14) & 0xffff,*(unsigned int *)(psVar2 + 4));
    *(int *)(psVar2 + 0x26) = *(int *)(psVar2 + 0x26) + 1;
    temp_v4 = 1;
    psVar2[1] = temp_v4;
    break;
  case '0':
    temp_v3 = *(int *)(psVar2 + 0x26);
    temp_v6 = (int)*(short *)(*(int *)(psVar2 + 10) + 0x6a);
    if (temp_v3 == 0) {
      FUN_004f5fb8(g_btlAux,temp_v6);
      resourceEnsureCachedObject(g_btlAux,temp_v6);
      *(int *)(psVar2 + 0x26) = *(int *)(psVar2 + 0x26) + 1;
      goto LAB_0040f684;
    }
    if (temp_v3 == 1) goto LAB_0040f684;
    if (temp_v3 != 2) {
      temp_v4 = 1;
      psVar2[1] = temp_v4;
      break;
    }
    temp_v3 = FUN_004f5c84(g_btlAux,temp_v6);
    if (temp_v3 != 0) {
      temp_v5 = *(unsigned int *)(*(int *)(psVar2 + 10) + 0x50);
      goto joined_r0x0040f750;
    }
    temp_v3 = btlGetMainState();
    *(char *)(temp_v3 + 0x3004) = *(char *)(temp_v3 + 0x3004) - '\x01';
    temp_v4 = 0;
    psVar2[1] = temp_v4;
    break;
  case '2':
    temp_v4 = *(short *)(*(int *)(psVar2 + 10) + 0x68);
    temp_v8 = btlGetMainState();
    FUN_003e77cc(temp_v8,6,(int)temp_v4,0,unaff_r8);
    puVar6 = (unsigned int *)btlGetMainState();
    FUN_003f0e20(puVar6,(int)*(short *)(*(int *)(psVar2 + 10) + 0x6a));
    if (puVar6 != (unsigned int *)0x0) {
      temp_v5 = ~DAT_00571338;
      puVar6[1] = puVar6[1] & ~DAT_0057133c;
      *puVar6 = *puVar6 & temp_v5;
    }
    break;
  case '3':
    asdModelActivateOwnedSlots(g_btlAux);
    break;
  case '4':
    temp_v11 = (DAT_00571334 & (*(unsigned int **)(psVar2 + 0xc))[1]) != 0;
    temp_v1 = (DAT_00571330 & **(unsigned int **)(psVar2 + 0xc)) != 0;
    temp_v3 = 0;
    if (temp_v11 || temp_v1) {
      temp_v3 = *(int *)(psVar2 + 0x14);
    }
    if (!((!temp_v11 && !temp_v1) || temp_v3 == 0)) {
      temp_v3 = btlGetMainState();
      temp_v6 = btlScriptUnitHasFlags();
      if (temp_v6 != 0) {
        FUN_004fd508(0,*(unsigned int *)(psVar2 + 4),0,0,1);
      }
      else {
        if (*(int *)(psVar2 + 0x26) == 0) {
          temp_v10 = *(int *)(psVar2 + 0x14) == 1;
          if ((!temp_v10) && (*(int *)(psVar2 + 0x14) == 2)) {
            temp_v10 = 2;
          }
          scrScriptProcessStartEntry(*(unsigned int *)(temp_v3 + 0x228c),temp_v10);
          sysPlaySe(0x92);
          *(int *)(psVar2 + 0x26) = *(int *)(psVar2 + 0x26) + 1;
          temp_v4 = 1;
          psVar2[1] = temp_v4;
          break;
        }
        if (*(int *)(psVar2 + 0x26) != 1) {
          temp_v4 = 1;
          psVar2[1] = temp_v4;
          break;
        }
        temp_v3 = scrRunOpcodesStub(*(unsigned int *)(temp_v3 + 0x228c));
        if (temp_v3 != 2) {
          temp_v4 = 1;
          psVar2[1] = temp_v4;
          break;
        }
        FUN_004fd508(0,*(unsigned int *)(psVar2 + 4),0,0,1);
        buttonHelpGetValue();
        sysPlaySe();
      }
    }
    break;
  case '5':
    FUN_004c6edc((int)*(short *)(*(int *)(psVar2 + 10) + 0x6a),*(unsigned int *)(psVar2 + 0x14));
    break;
  case '6':
    FUN_004c8284((int)*(short *)(*(int *)(psVar2 + 10) + 0x6a),*(unsigned int *)(psVar2 + 0x14));
    break;
  case '7':
    if (*(int *)(psVar2 + 0x14) == 0) {
      FUN_004f5238(g_btlAux);
    }
    break;
  case '8':
    temp_v3 = btlGetMainState();
    temp_v8 = btlUnitGet(g_btlScriptUnit);
    if (*(int *)(psVar2 + 0x14) != 0) {
      temp_v3 = *(int *)(psVar2 + 0x14) + 1;
      *(int *)(psVar2 + 0x14) = temp_v3;
      if (0x14 >= temp_v3) {
        temp_v4 = 1;
        psVar2[1] = temp_v4;
      }
    }
    else {
      unaff_r8 = &g_btlActionReflect;
      temp_v6 = 0;
      do {
        puVar6 = (unsigned int *)(*(int *)(temp_v3 + 0x1ffc) + temp_v6 * 0x408);
        if (((((DAT_005712f8 & *puVar6) != 0 || (DAT_005712fc & puVar6[1]) != 0) &&
             ((puVar6[1] & DAT_0057132c) == 0 && (*puVar6 & DAT_00571328) == 0)) &&
            (temp_v5 = puVar6[0x56], temp_v5 != 0)) && (-1 < (short)puVar6[2])) {
          if ((((puVar6[0x9d] & 8) == 0) && (temp_v5 != 1)) && (temp_v5 != 3)) {
            if ((temp_v5 != 2) || (temp_v12 = puVar6[0x97], temp_v12 == 0xffffffff))
            goto LAB_0040fb78;
          }
          else {
            temp_v12 = 1;
          }
          FUN_004fb798(0,*(unsigned int *)(psVar2 + 4),0,
                       *(int *)(temp_v3 + 0x1ed4) + (short)puVar6[2] * 0x1d0,0,temp_v12,0xffffffff,
                       0xffffffff,0,0,0,9,0,1,1);
          FUN_004fb43c(0,*(unsigned int *)(psVar2 + 4),0x1000267,0,1,0,0);
          FUN_004fbd5c(0,*(unsigned int *)(psVar2 + 4),(int)*(short *)((int)puVar6 + 0x6e),
                       puVar6[0x56]);
          FUN_004e5f2c(g_btlScriptUnit,temp_v8);
          psVar2[0x14] = 1;
          psVar2[0x15] = 0;
          psVar2[1] = 1;
        }
LAB_0040fb78:
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < 0x6d);
    }
    break;
  case '9':
    temp_v3 = *(int *)(psVar2 + 0x26);
    if (temp_v3 != 0) {
      if (temp_v3 != 1) {
        if (temp_v3 != 2) {
          temp_v4 = 1;
          psVar2[1] = temp_v4;
          break;
        }
        temp_v3 = panelStateIs0();
        if (temp_v3 != 1) {
          temp_v4 = 1;
          psVar2[1] = temp_v4;
          break;
        }
        partyAddMoneyClamped(*(unsigned int *)(psVar2 + 0x14));
        messageDismissNumericBanner(1);
        temp_v4 = 0;
        psVar2[1] = temp_v4;
        break;
      }
      temp_v3 = panelIsActiveState2();
      if (temp_v3 == 0) {
        temp_v4 = 1;
        psVar2[1] = temp_v4;
        break;
      }
      panelSetMode3(*(unsigned int *)(psVar2 + 0x14),0);
    }
    else {
      temp_v3 = FUN_0034919c();
      if (temp_v3 == 0) {
        FUN_0037c8e4(0);
      }
    }
    *(int *)(psVar2 + 0x26) = *(int *)(psVar2 + 0x26) + 1;
    temp_v4 = 1;
    psVar2[1] = temp_v4;
    break;
  case ':':
    temp_v3 = *param_1;
    temp_v5 = temp_v3 + 0x4c00;
    temp_v11 = *(short *)(temp_v3 + 0x4c74) == 0;
    if (temp_v11) {
      temp_v5 = (unsigned int)*(unsigned short *)(temp_v3 + 0x4c76);
    }
    if (temp_v11 && temp_v5 == 0) {
      FUN_003f2498(temp_v3,*(unsigned int *)(temp_v3 + 0x4ce8));
    }
    break;
  case ';':
    temp_v3 = btlGetMainState();
    if (*(int *)(psVar2 + 0x14) != 0) {
      temp_v8 = FUN_003d214c(*(unsigned int *)(psVar2 + 0x16));
    }
    else if (*(int *)(psVar2 + 0x26) != 0) {
      temp_v8 = FUN_0047ecc8();
    }
    else {
      temp_v8 = FUN_0047fa50(*(unsigned int *)(psVar2 + 0x16));
    }
    if (0 < psVar2[0x12]) {
      *(unsigned int *)(temp_v3 + 0x4cf4) = temp_v8;
    }
    break;
  case '<':
    btlApplyDirectionBucket(param_1,psVar2);
    break;
  case '=':
    temp_v3 = btlGetMainState();
    temp_v3 = *(int *)(temp_v3 + 0x4cf0);
    if ((0 < temp_v3) || ((temp_v3 == -1 && (temp_v3 = FUN_0047f5b8(), 0 < temp_v3)))) {
      FUN_004fb43c(0,*(unsigned int *)(psVar2 + 4),temp_v3,0,0,0,0);
    }
    break;
  case '>':
    puVar6 = (unsigned int *)*param_1;
    if ((puVar6[0x116c] & 1) == 0) {
      temp_v3 = *(int *)(psVar2 + 10);
      if (((*(unsigned int *)(temp_v3 + 0x50) & 1) != 0) && ((*(unsigned int *)(temp_v3 + 0x50) & 0x80) != 0)) {
        FUN_003f0e20(puVar6,(int)*(short *)(temp_v3 + 0x6a));
        temp_v5 = *puVar6;
        temp_v7 = puVar6[1];
        if ((DAT_005712f8 & temp_v5) != 0 || (DAT_005712fc & temp_v7) != 0) {
          if (!((DAT_00571320 & temp_v5) == 0 && (DAT_00571324 & temp_v7) == 0)) {
            FUN_003edfd4(*param_1);
          }
          else if (((DAT_00571318 & temp_v5) != 0 || (DAT_0057131c & temp_v7) != 0) ||
                  ((temp_v5 & DAT_00571310) != 0 || (temp_v7 & DAT_00571314) != 0)) {
            FUN_0047f314((int)*(short *)(temp_v3 + 0x6a));
            *(unsigned int *)(*param_1 + 0x45b0) = *(unsigned int *)(*param_1 + 0x45b0) | 1;
          }
        }
      }
    }
    break;
  case '?':
    FUN_004f56cc(g_btlAux,*(unsigned int *)(psVar2 + 0x14));
    break;
  case '@':
    temp_v3 = FUN_003ec77c(*param_1);
    if (temp_v3 == 0) {
      temp_v5 = FUN_003e53ec();
      FUN_003e5354(*(unsigned int *)(psVar2 + 0x14));
      temp_v7 = FUN_003e53ec();
      if ((temp_v5 < temp_v7) && (temp_v3 = FUN_003e48bc(), temp_v3 != 0)) {
        temp_v3 = *param_1;
        temp_v5 = uRam00571380 | *(unsigned int *)(temp_v3 + 0x45a0);
        *(unsigned int *)(temp_v3 + 0x45a4) = uRam00571384 | *(unsigned int *)(temp_v3 + 0x45a4);
        *(unsigned int *)(temp_v3 + 0x45a0) = temp_v5;
      }
    }
    break;
  case 'A':
    temp_v3 = FUN_003ec7b0(*param_1);
    if (temp_v3 == 0) {
      temp_v3 = *param_1;
      if (((DAT_0057139c & *(unsigned int *)(temp_v3 + 0x45a4)) == 0 &&
           (DAT_00571398 & *(unsigned int *)(temp_v3 + 0x45a0)) == 0) &&
         ((*(unsigned int *)(temp_v3 + 0x45a0) & uRam005713a0) == 0 &&
          (*(unsigned int *)(temp_v3 + 0x45a4) & uRam005713a4) == 0)) {
        temp_v7 = *(unsigned int *)(temp_v3 + 0x4d60);
        temp_v5 = *(unsigned int *)(psVar2 + 0x14);
        if (*(unsigned int *)(psVar2 + 0x14) < temp_v7) {
          temp_v5 = temp_v7;
        }
        *(unsigned int *)(temp_v3 + 0x4d60) = temp_v5;
      }
    }
    break;
  case 'B':
    temp_v8 = *(unsigned int *)(g_btlPartnerAttack + 0x30);
    FUN_004112b0(g_btlPartnerAttack,*(unsigned int *)(psVar2 + 0x14));
    FUN_00416960(temp_v8,*(unsigned int *)(psVar2 + 0x14));
    break;
  case 'C':
    temp_v3 = btlGetMainState();
    temp_v3 = temp_v3 + *(int *)(psVar2 + 0x14) * 0x10;
    if (*(int *)(temp_v3 + 0x4d78) != 0) {
      temp_v6 = controllerGetRecordValue();
      if (*(int *)(psVar2 + 0x26) < temp_v6) {
        *(int *)(temp_v3 + 0x4d7c) = *(int *)(psVar2 + 0x26);
        *(unsigned int *)(temp_v3 + 0x4d80) = 0;
        temp_v4 = psVar2[0x12];
        *(int *)(temp_v3 + 0x4d84) = (int)temp_v4;
        if (temp_v4 < 0) {
          *(unsigned int *)(temp_v3 + 0x4d84) = 9999;
        }
      }
    }
    break;
  case 'D':
    FUN_004c8c10(*(unsigned int *)(psVar2 + 0x26),*(unsigned int *)(psVar2 + 0x14));
    break;
  case 'E':
    temp_v3 = *(int *)(psVar2 + 10);
    if ((temp_v3 != 0) &&
       (!((*(unsigned int *)(temp_v3 + 0x50) & 1) == 0 || (*(unsigned int *)(temp_v3 + 0x50) & 0x80) == 0))) {
      puVar6 = (unsigned int *)*param_1;
      FUN_003f0e20(puVar6,(int)*(short *)(temp_v3 + 0x6a));
      if (!((DAT_005712fc & puVar6[1]) == 0 && (DAT_005712f8 & *puVar6) == 0)) {
        switch(*(unsigned short *)(temp_v3 + 0x1c8)) {
        case 0:
        case 1:
        case 2:
        case 4:
        case 7:
          break;
        default:
          if (500 >= (unsigned short)psVar2[3]) {
            temp_v4 = 1;
            psVar2[1] = temp_v4;
          }
        }
      }
    }
    break;
  case 'F':
    temp_v3 = btlGetMainState();
    temp_v5 = temp_v3 + 0x2200;
    temp_v11 = *(char *)(temp_v3 + 0x22cc) != '\0';
    if (temp_v11) {
      temp_v5 = (unsigned int)*(unsigned char *)(temp_v3 + 0x22cd);
    }
    if (((!(!temp_v11 || temp_v5 == 0)) && (temp_v6 = (int)psVar2[0x12], 3 >= temp_v6)) &&
       (temp_v9 = temp_v3 + temp_v6, *(char *)(temp_v9 + 0x2340) != '\0')) {
      if (*(int *)(psVar2 + 0x16) != 0) {
        temp_v3 = temp_v3 + temp_v6 * 4;
        temp_v6 = holderObjectCall(*(unsigned int *)(temp_v3 + 0x22bc));
        if (temp_v6 == 0) {
          temp_v4 = 1;
          psVar2[1] = temp_v4;
          break;
        }
        temp_v3 = animationIsReferencedClipComplete(*(unsigned int *)(temp_v3 + 0x22bc));
        if (temp_v3 == 0) {
          temp_v4 = 1;
          psVar2[1] = temp_v4;
          break;
        }
        *(unsigned char *)(temp_v9 + 0x2340) = 0;
      }
      else {
        if (*(char *)(temp_v9 + 0x234c) == '\0') {
          FUN_004d888c(*(unsigned int *)(temp_v3 + temp_v6 * 4 + 0x22bc),(int)psVar2[0x13]);
        }
        if (*(int *)(psVar2 + 0x26) != 0) {
          *(unsigned char *)(temp_v9 + 0x234c) = 1;
          *(int *)(psVar2 + 0x16) = *(int *)(psVar2 + 0x16) + 1;
          temp_v4 = 1;
          psVar2[1] = temp_v4;
        }
      }
    }
    break;
  case 'G':
    temp_v3 = btlGetMainState();
    temp_v5 = temp_v3 + 0x2200;
    temp_v11 = *(char *)(temp_v3 + 0x22cc) != '\0';
    if (temp_v11) {
      temp_v5 = (unsigned int)*(unsigned char *)(temp_v3 + 0x22cd);
    }
    if (((temp_v11 && temp_v5 != 0) && (temp_v6 = (int)psVar2[0x12], temp_v6 < 4)) &&
       (*(char *)(temp_v3 + temp_v6 + 0x2340) != '\0')) {
      asdModelStartReferencedAnimation(*(unsigned int *)(temp_v3 + temp_v6 * 4 + 0x22bc),(int)psVar2[0x13]);
    }
    break;
  case 'H':
    if ((g_btlCamera != 0) && (*(int *)(g_btlCamera + 0x38) == 3)) {
      temp_v4 = 1;
      psVar2[1] = temp_v4;
    }
  }
  if ((*(unsigned char *)((int)psVar2 + 5) & 1) == 0) {
    psVar2[1] = psVar2[1] - 1;
  }
  psVar2[3] = psVar2[3] + 1;
  goto joined_r0x0040de68;
}

} /* extern "C" */
