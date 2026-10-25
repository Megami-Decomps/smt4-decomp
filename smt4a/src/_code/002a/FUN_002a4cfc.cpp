/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a4cfc` (_code @ 0x2a4cfc, 0xff8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "gamedata/GameFlags.h"

extern "C" {

int FUN_0022e774(void);
int FUN_003344b4(...);
int FUN_0036cf98(...);
int FUN_0038b548(...);
int obj48Arm(...);
int pair40Set(...);

int sysPlaySe(...);
int FUN_00215bbc(void);
int FUN_00230ac0(...);
int campReleaseSlotTouchRegions(void);
int bibleOpenMode0(...);
int campCecScriptStart(...);
int FUN_00284ee4(...);
int bibleOpenMode1(...);
int FUN_002a4708(void);
int uniteSetMode(...);
int FUN_002c39dc(...);
int FUN_002e2404(...);
int FUN_0032fbd0(void);
int FUN_00359974(...);
int fusionReleaseRegisteredHandle(void);
int FUN_00370d84(void);
int texEntrySpritesLoad(void);
int FUN_0038800c(...);
int FUN_0038a694(void);
int messageMainStartMenuAnimationIfEnabled(void);
int loadSlotEnsureLoaded(...);

int uiSpriteSetImageKeyframe(...);
int FUN_0019de98(...);
int slotSetRequest(int, int, int);
int configOpen(...);
int campChangeState(...);
int FUN_00215254(void);
int FUN_00215bd0(void);
int FUN_0021b274(...);
int bgmRestart(int);
int uniteStartOrQueueRequest(...);
int campRebuildEnabledFlagList(...);
int campSelectorRebuildList(...);
void campSetSpriteAnimationPreset(int, int, int, unsigned int);
int FUN_002a5cf4(void);
int FUN_002a7b74(void);
int bibleOpenMode2(...);
int FUN_002c8538(...);
int FUN_002e738c(int);
int FUN_002f0c18(void);
int FUN_00319b10(void);
int uiQuestReturnToList(void);
int FUN_00334560(void);
u32 FUN_0035c810(void);
int FUN_0035dbd4(int);
int messageDismissNumericBanner(...);
int partyPanelSetHidden(...);
int FUN_003d386c(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int g_camp; /* 0x57f108 */
extern int g_partyPanel; /* 0x57f268 */

/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: uiSpriteSetImageKeyframe. */
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: FUN_0019de98. */
extern int gameGetSlotTable(void);
/* Supplied declaration required: slotSetRequest. */
/* Supplied declaration required: configOpen. */
/* Supplied declaration required: campChangeState. */
extern unsigned int gameDataBlocksGetTableFlag(void);
/* Supplied declaration required: FUN_00215254. */
/* Supplied declaration required: FUN_00215bbc. */
/* Supplied declaration required: FUN_00215bd0. */
/* Supplied declaration required: FUN_0021b274. */
/* Supplied declaration required: FUN_0022e774. */
/* Supplied declaration required: FUN_00230ac0. */
/* Supplied declaration required: bgmRestart. */
/* Supplied declaration required: uniteStartOrQueueRequest. */
/* Supplied declaration required: campRebuildEnabledFlagList. */
/* Supplied declaration required: campReleaseSlotTouchRegions. */
/* Supplied declaration required: campSelectorRebuildList. */
/* Supplied declaration required: bibleOpenMode0. */
/* Supplied declaration required: campCecScriptStart. */
/* Supplied declaration required: FUN_00284ee4. */
/* Supplied declaration required: bibleOpenMode1. */
/* Supplied declaration required: FUN_002a4708. */
extern int resourceRunOperationIfUnblocked(int);
extern unsigned int FUN_002a4878(int);
extern int FUN_002a4894(int);
/* Supplied declaration required: FUN_002a5cf4. */
/* Supplied declaration required: FUN_002a7b74. */
extern int uniteRequestGet(void);
/* Supplied declaration required: uniteSetMode. */
/* Supplied declaration required: bibleOpenMode2. */
extern int objectApplyIfUnblocked(int);
/* Supplied declaration required: FUN_002c39dc. */
/* Supplied declaration required: FUN_002c8538. */
extern int uniteHasPendingIdle(void);
/* Supplied declaration required: FUN_002e2404. */
/* Supplied declaration required: FUN_002e738c. */
/* Supplied declaration required: FUN_002f0c18. */
/* Supplied declaration required: FUN_00319b10. */
/* Supplied declaration required: uiQuestReturnToList. */
extern int stateAtF4IsActive(void);
/* Supplied declaration required: FUN_0032fbd0. */
extern int gameDataBlocksGetSelectedValue(void);
/* Supplied declaration required: FUN_003344b4. */
/* Supplied declaration required: FUN_00334560. */
/* Supplied declaration required: FUN_00359974. */
extern int campCecEditIsStateSixteen(void);
/* Supplied declaration required: FUN_0035c810. */
/* Supplied declaration required: FUN_0035dbd4. */
/* Supplied declaration required: fusionReleaseRegisteredHandle. */
/* Supplied declaration required: FUN_0036cf98. */
/* Supplied declaration required: FUN_00370d84. */
/* Supplied declaration required: texEntrySpritesLoad. */
/* Supplied declaration required: FUN_0038800c. */
/* Supplied declaration required: messageDismissNumericBanner. */
/* Supplied declaration required: FUN_0038a694. */
/* Supplied declaration required: FUN_0038b548. */
/* Supplied declaration required: messageMainStartMenuAnimationIfEnabled. */
/* Supplied declaration required: partyPanelSetHidden. */
/* Supplied declaration required: FUN_003d386c. */
extern int FUN_003da8f4(int, unsigned int);
/* Supplied declaration required: obj48Arm. */
/* Supplied declaration required: pair40Set. */
/* Supplied declaration required: loadSlotEnsureLoaded. */


/* WARNING: Removing unreachable block (ram,0x0020b744) */
/* WARNING: Removing unreachable block (ram,0x0020b74c) */
/* WARNING: Removing unreachable block (ram,0x0020b750) */
/* WARNING: Removing unreachable block (ram,0x0020b754) */
/* WARNING: Removing unreachable block (ram,0x0020b758) */
/* WARNING: Removing unreachable block (ram,0x0020b760) */
/* WARNING: Removing unreachable block (ram,0x0020b764) */
/* WARNING: Removing unreachable block (ram,0x0020b76c) */
/* WARNING: Removing unreachable block (ram,0x0020b774) */
/* WARNING: Removing unreachable block (ram,0x0020b7ac) */
/* WARNING: Removing unreachable block (ram,0x0020b7b0) */
/* WARNING: Removing unreachable block (ram,0x0020b7e8) */

void FUN_002a4cfc(void)

{
/* irregular: irregular input(s): in_lr; 67 native warning(s); review required */
  char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int unaff_r4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int in_lr;
  
  temp_v3 = g_camp;
  temp_v6 = 0;
  temp_v1 = FUN_002a4878(g_camp + 0x40);
  temp_v2 = FUN_003da8f4((int)*(char *)(temp_v3 + 0xa4),temp_v1);
  switch(temp_v2) {
  case 4:
    campChangeState(0x48);
    FUN_002a5cf4();
    messageDismissNumericBanner(1);
    uiSpriteSetImageKeyframe(g_camp + 0x1634,7,0);
    FUN_002e738c(0);
    return;
  case 7:
    *(unsigned char *)(temp_v3 + 0x32a9) = 1;
    slotSetRequest(0,10,0xff);
    bgmRestart(0x1e);
    return;
  case 9:
    campSetSpriteAnimationPreset(2,3,0xffffffff,0);
    FUN_0021b274(1,0xffffffff,0);
    FUN_002a5cf4();
    FUN_003d386c(1);
    temp_v2 = resourceRunOperationIfUnblocked(temp_v3 + 0x1ec);
    temp_v6 = FUN_002a4894(temp_v3 + 0x1ec);
    if (g_camp != 0) {
      *(int *)(g_camp + 0xbc) = temp_v2 + temp_v6;
    }
    messageDismissNumericBanner(1);
    temp_v2 = objectApplyIfUnblocked(temp_v3 + 0x1ec);
    if (0 < temp_v2) {
      FUN_002c8538(1);
      FUN_00215bd0();
      FUN_0035dbd4(1);
    }
    *(unsigned int *)(temp_v3 + 0x24) = 0x11;
    campChangeState(4);
    return;
  case 0xb:
  case 0xd:
  case 0xe:
    if (temp_v2 == 0xb) {
      temp_v6 = temp_v3 + 0xc0;
    }
    else if (temp_v2 == 0xd) {
      temp_v6 = temp_v3 + 0x124;
    }
    else if (temp_v2 == 0xe) {
      temp_v6 = temp_v3 + 0x188;
    }
    temp_v6 = objectApplyIfUnblocked(temp_v6);
    if (temp_v6 < 1) {
      return;
    }
    campSetSpriteAnimationPreset(2,3,0xffffffff,0);
    FUN_0021b274(1,0xffffffff,0);
    FUN_002a5cf4();
    if (temp_v2 != 0xb) {
      if (temp_v2 != 0xd) {
        if (temp_v2 == 0xe) {
          *(unsigned int *)(temp_v3 + 0x24) = 0x10;
          campRebuildEnabledFlagList(0xe);
        }
        campChangeState(4);
        return;
      }
      *(unsigned int *)(temp_v3 + 0x24) = 0xf;
      temp_v1 = 0xd;
    }
    else {
      *(unsigned int *)(temp_v3 + 0x24) = 10;
      temp_v1 = 0xb;
    }
    campRebuildEnabledFlagList(temp_v1);
    campChangeState(4);
    return;
  case 0xf:
    campSetSpriteAnimationPreset(2,3,0xffffffff,0);
    messageDismissNumericBanner(1);
    campChangeState(0x19);
    return;
  case 0x11:
    campSetSpriteAnimationPreset(2,3,0xffffffff,0);
    messageDismissNumericBanner(1);
    campChangeState(0x49);
    FUN_00319b10();
    return;
  case 0x12:
    campSetSpriteAnimationPreset(2,3,0xffffffff,0);
    messageDismissNumericBanner(1);
    campChangeState(0x1a);
    return;
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
    if (temp_v2 == 0x13) {
      temp_v6 = temp_v3 + 0x2b4;
    }
    else if (temp_v2 == 0x14) {
      temp_v6 = temp_v3 + 0x318;
    }
    else if (temp_v2 == 0x15) {
      temp_v6 = temp_v3 + 0x37c;
    }
    else if (temp_v2 == 0x16) {
      temp_v6 = temp_v3 + 0x3e0;
    }
    else if (temp_v2 == 0x17) {
      temp_v6 = temp_v3 + 0x444;
    }
    else if (temp_v2 == 0x18) {
      temp_v6 = temp_v3 + 0x4a8;
    }
    else if (temp_v2 == 0x19) {
      temp_v6 = temp_v3 + 0x50c;
    }
    temp_v2 = objectApplyIfUnblocked(temp_v6);
    if (0 < temp_v2) {
      campSetSpriteAnimationPreset(2,3,0xffffffff,0);
      FUN_0021b274(1,0xffffffff,0);
      FUN_002a5cf4();
      messageDismissNumericBanner(1);
      FUN_002c8538(1);
      FUN_00215bd0();
      *(unsigned int *)(temp_v3 + 0x24) = 0x1d;
      campSelectorRebuildList(0x13);
      campSelectorRebuildList(0x14);
      campSelectorRebuildList(0x15);
      campSelectorRebuildList(0x16);
      campSelectorRebuildList(0x17);
      campSelectorRebuildList(0x18);
      campSelectorRebuildList(0x19);
      campChangeState(4);
      return;
    }
    break;
  case 0x1a:
    campSetSpriteAnimationPreset(2,3,0xffffffff,0);
    messageDismissNumericBanner(1);
    partyPanelSetHidden(0);
    campChangeState(0x15);
    return;
  case 0x1b:
    campSetSpriteAnimationPreset(2,3,0xffffffff,0);
    FUN_002a5cf4();
    messageDismissNumericBanner(1);
    bibleOpenMode2(0);
    campChangeState(0x24);
    return;
  case 0x1c:
    gameFlagSetValue(0x48c, 1, 1);
    temp_v1 = FUN_0035c810();
    *(unsigned int *)(temp_v3 + 0xc) = temp_v1;
    FUN_002a5cf4();
    FUN_0019de98(0,0xf4f4f4ff);
    campChangeState(0x25);
    return;
  case 0x1d:
    FUN_002a5cf4();
    messageDismissNumericBanner(1);
    campChangeState(0x26);
    FUN_002f0c18();
    FUN_00334560();
    *(unsigned char *)(temp_v3 + 0x3178) = 1;
    return;
  case 0x1e:
    FUN_002a5cf4();
    messageDismissNumericBanner(1);
    campChangeState(0x27);
    FUN_002f0c18();
    uiQuestReturnToList();
    *(unsigned char *)(temp_v3 + 0x3179) = 1;
    return;
  case 0x24:
    temp_v3 = gameFlagIsSet(0x459);
    if ((temp_v3 == 0) && (temp_v3 = uniteRequestGet(), temp_v3 != 0x19)) {
      FUN_002a7b74();
      uniteStartOrQueueRequest(0x19);
      return;
    }
    break;
  case 0x27:
    campSetSpriteAnimationPreset(2,3,0xffffffff,0);
    FUN_002a5cf4();
    messageDismissNumericBanner(1);
    campChangeState(0x31);
    return;
  case 0x28:
    campSetSpriteAnimationPreset(2,3,0xffffffff,0);
    FUN_002a5cf4();
    messageDismissNumericBanner(1);
    campChangeState(0x32);
    return;
  case 0x29:
    temp_v1 = gameDataBlocksGetTableFlag();
    configOpen(temp_v1,1);
    campSetSpriteAnimationPreset(2,3,0xffffffff,0);
    FUN_0021b274(0,0xffffffff);
    FUN_002a5cf4();
    messageDismissNumericBanner(1);
    uiSpriteSetImageKeyframe(g_camp + 0x1634,7,0);
    *(unsigned int *)(temp_v3 + 0x24) = 0x2e;
    campChangeState(4);
    return;
  case 0x2b:
    FUN_00215254();
    campSetSpriteAnimationPreset(2,3,0xffffffff,0);
    FUN_0021b274(0,0xffffffff);
    FUN_002a5cf4();
    *(unsigned int *)(temp_v3 + 0x24) = 0x2f;
    campChangeState(4);
    return;
  case 0x2c:
    temp_v3 = uniteHasPendingIdle();
    if (temp_v3 != 0) {
      campSetSpriteAnimationPreset(2,3,0xffffffff,0);
      uniteSetMode(0);
      campChangeState(0x20);
      campReleaseSlotTouchRegions();
      return;
    }
    break;
  case 0x2d:
    campSetSpriteAnimationPreset(2,3,0xffffffff,0);
    uniteSetMode(2);
    campChangeState(0x20);
    campReleaseSlotTouchRegions();
    return;
  case 0x2e:
    temp_v3 = uniteHasPendingIdle();
    if (temp_v3 != 0) {
      campSetSpriteAnimationPreset(2,3,0xffffffff,0);
      bibleOpenMode0(0);
      campChangeState(0x24);
      FUN_002a7b74();
      campReleaseSlotTouchRegions();
      return;
    }
    break;
  case 0x2f:
    temp_v3 = uniteHasPendingIdle();
    if (temp_v3 != 0) {
      temp_v3 = gameGetSlotTable();
      temp_v5 = 0;
      if (*(unsigned char *)(temp_v3 + 0x1ca3) != 0) {
        do {
          temp_v2 = (int)*(char *)(temp_v3 + temp_v5 + 0x1c88);
          if (-1 < temp_v2) {
            temp_v2 = temp_v3 + temp_v2 * 300 + 0x68;
            FUN_0032fbd0();
            if (temp_v2 == 0) {
              campSetSpriteAnimationPreset(2,3,0xffffffff,0);
              bibleOpenMode1(0);
              campChangeState(0x24);
              FUN_002a7b74();
              campReleaseSlotTouchRegions();
              return;
            }
          }
          temp_v5 = (temp_v5 + 1) & 0xffff;
        } while (temp_v5 < *(unsigned char *)(temp_v3 + 0x1ca3));
        return;
      }
    }
    break;
  case 0x31:
    temp_v2 = uniteHasPendingIdle();
    if (temp_v2 != 0) {
      campSetSpriteAnimationPreset(2,3,0xffffffff,0);
      uniteSetMode(4);
      campChangeState(0x20);
      campReleaseSlotTouchRegions();
      *(unsigned char *)(temp_v3 + 0x317a) = 1;
      return;
    }
    break;
  case 0x32:
    temp_v3 = uniteHasPendingIdle();
    if (temp_v3 != 0) {
      campSetSpriteAnimationPreset(2,3,0xffffffff,0);
      uniteSetMode(5);
      campReleaseSlotTouchRegions();
      fusionReleaseRegisteredHandle();
      messageDismissNumericBanner(1);
      partyPanelSetHidden(1);
      FUN_002c39dc(0xd,0,0xffffffff);
      FUN_00284ee4(1);
      FUN_00215bbc();
      campChangeState(0x16);
      return;
    }
    break;
  case 0x33:
    *(unsigned int *)(temp_v3 + 0x24) = 0x46;
    FUN_002a5cf4();
    return;
  case 0x34:
    *(unsigned int *)(temp_v3 + 0x1c) = 0x34;
    FUN_002e2404(2);
    messageDismissNumericBanner(1);
    messageMainStartMenuAnimationIfEnabled();
    return;
  case 0x35:
    temp_v2 = gameDataBlocksGetSelectedValue();
    if (temp_v2 == 0) {
      *(unsigned int *)(temp_v3 + 0x2c) = 0;
      *(unsigned int *)(temp_v3 + 0x1c) = 0x35;
      campCecScriptStart(0x26);
      sysPlaySe(0x92);
      messageDismissNumericBanner(1);
      messageMainStartMenuAnimationIfEnabled();
      uiSpriteSetImageKeyframe(temp_v3 + 0x1634,7,0);
      return;
    }
    *(unsigned int *)(temp_v3 + 0x1c) = 0x3a;
    temp_v5 = (temp_v2 + 0x3bU) / 0xe10;
    FUN_00359974(0,temp_v5,0xffffffff);
    FUN_00359974(1,((temp_v2 + 0x3bU) % 0xe10) / 0x3c,2);
    if (temp_v5 == 0) {
      campCecScriptStart(0x2e);
      return;
    }
    campCecScriptStart(0x2d);
    return;
  case 0x36:
    *(unsigned int *)(temp_v3 + 0x24) = 0x3d;
    FUN_002e2404(1);
    messageDismissNumericBanner(1);
    messageMainStartMenuAnimationIfEnabled();
    uiSpriteSetImageKeyframe(temp_v3 + 0x1634,7,0);
    return;
  case 0x37:
    *(unsigned int *)(temp_v3 + 0x1c) = 0x3b;
    FUN_002e2404(4);
    messageDismissNumericBanner(1);
    messageMainStartMenuAnimationIfEnabled();
    return;
  case 0x38:
    *(unsigned int *)(temp_v3 + 0x1c) = 0x3b;
    FUN_002e2404(5);
    messageDismissNumericBanner(1);
    messageMainStartMenuAnimationIfEnabled();
    return;
  case 0x39:
    *(unsigned int *)(temp_v3 + 0x1c) = 0x45;
    FUN_002e2404(6);
    messageDismissNumericBanner(1);
    messageMainStartMenuAnimationIfEnabled();
    return;
  case 0x3a:
    temp_v2 = stateAtF4IsActive();
    if (temp_v2 != 0) {
      *(unsigned int *)(temp_v3 + 0x1c) = 0x3e;
      FUN_0038800c(1);
      return;
    }
    break;
  case 0x3b:
    temp_v2 = stateAtF4IsActive();
    if (temp_v2 != 0) {
      *(unsigned int *)(temp_v3 + 0x1c) = 0x3f;
      FUN_0038800c(2);
      return;
    }
    break;
  case 0x3c:
    temp_v2 = stateAtF4IsActive();
    if (temp_v2 != 0) {
      *(unsigned int *)(temp_v3 + 0x1c) = 0x40;
      FUN_0038800c(3);
      return;
    }
    break;
  case 0x3d:
    *(unsigned int *)(temp_v3 + 0x24) = 0x41;
    return;
  case 0x3e:
    temp_v2 = stateAtF4IsActive();
    if (temp_v2 != 0) {
      *(unsigned int *)(temp_v3 + 0x1c) = 0x42;
      FUN_0038800c(5);
      return;
    }
    break;
  case 0x3f:
    temp_v2 = stateAtF4IsActive();
    if (temp_v2 != 0) {
      *(unsigned int *)(temp_v3 + 0x1c) = 0x43;
      FUN_0038800c(6);
      return;
    }
    break;
  case 0x40:
    temp_v2 = stateAtF4IsActive();
    if (temp_v2 != 0) {
      *(unsigned int *)(temp_v3 + 0x1c) = 0x44;
      FUN_0038800c(7);
      return;
    }
    break;
  case 0x41:
    temp_v3 = uniteHasPendingIdle();
    if (temp_v3 != 0) {
      campSetSpriteAnimationPreset(2,3,0xffffffff,0);
      uniteSetMode(1);
      campChangeState(0x20);
      campReleaseSlotTouchRegions();
      return;
    }
    break;
  case 0x42:
    campChangeState(0x50);
    FUN_002a5cf4();
    messageDismissNumericBanner(1);
    uiSpriteSetImageKeyframe(g_camp + 0x1634,7,0);
    FUN_0038a694();
    return;
  case 0x44:
    campChangeState(0x4b);
    messageDismissNumericBanner(1);
    campSetSpriteAnimationPreset(2,3,0xffffffff,0);
    return;
  case 0x45:
    campChangeState(0x51);
    FUN_002a5cf4();
    messageDismissNumericBanner(1);
    uiSpriteSetImageKeyframe(g_camp + 0x1634,7,0);
    FUN_00370d84();
    return;
  case 0x46:
    campChangeState(0x52);
    FUN_002a5cf4();
    messageDismissNumericBanner(1);
    uiSpriteSetImageKeyframe(g_camp + 0x1634,7,0);
    FUN_002a4708();
    return;
  case 0x47:
    campChangeState(0x53);
    texEntrySpritesLoad();
    loadSlotEnsureLoaded(0x3a);
    temp_v3 = g_partyPanel;
    if (g_partyPanel != 0) {
      temp_v0 = *(char *)(g_partyPanel + 0x9b4);
      if ((temp_v0 != '\f' && temp_v0 != '\x04') &&
         ((temp_v0 != '\x0f' && temp_v0 != '\x11') && temp_v0 != '\x13')) {
        FUN_00230ac0(7,0xffffffff,0,0,unaff_r4,in_lr);
      }
      FUN_003344b4(0);
      temp_v0 = *(char *)(temp_v3 + 0x9b4);
      if ((temp_v0 != '\x01' && temp_v0 != '\x06') && (temp_v0 != '\a' && temp_v0 != '\x12')) {
        FUN_0022e774();
      }
      FUN_0038b548(1);
      temp_v3 = g_partyPanel;
      *(unsigned int *)(g_partyPanel + 0x24) = *(unsigned int *)(g_partyPanel + 0x1c);
      *(unsigned int *)(temp_v3 + 0x1c) = 0x17;
      *(unsigned int *)(temp_v3 + 0x18) = 0;
      if (*(int *)(temp_v3 + 0x1c) == 0x16) {
        temp_v2 = 0;
        do {
          temp_v6 = temp_v3 + temp_v2 * 4;
          pair40Set(*(unsigned int *)(temp_v6 + 0xa10),0);
          *(unsigned char *)(*(int *)(temp_v6 + 0xa10) + 0x25) = 0;
          *(unsigned char *)(*(int *)(temp_v6 + 0xa10) + 0x27) = 0;
          temp_v2 = temp_v2 + 1;
        } while (temp_v2 < 4);
        temp_v2 = 0;
        do {
          temp_v6 = temp_v3 + temp_v2 * 4;
          pair40Set(*(unsigned int *)(temp_v6 + 0xa20),0);
          *(unsigned char *)(*(int *)(temp_v6 + 0xa20) + 0x25) = 0;
          *(unsigned char *)(*(int *)(temp_v6 + 0xa20) + 0x27) = 0;
          temp_v2 = temp_v2 + 1;
        } while (temp_v2 < 0x18);
        FUN_003344b4(0);
        if (*(char *)(temp_v3 + 0x9c0) != '\0') {
          obj48Arm(*(unsigned int *)(temp_v3 + 0xa10),0xff);
        }
        temp_v2 = 0;
        do {
          if (*(char *)(temp_v3 + temp_v2 + 0x9c1) != '\0') {
            obj48Arm(*(unsigned int *)(temp_v3 + temp_v2 * 4 + 0xa14),0xff);
          }
          temp_v2 = temp_v2 + 1;
        } while (temp_v2 < 3);
        temp_v2 = 0;
        do {
          if (*(short *)(temp_v3 + temp_v2 * 8 + 0xa84) != 0) {
            obj48Arm(*(unsigned int *)(temp_v3 + temp_v2 * 4 + 0xa20),0xff);
          }
          temp_v2 = temp_v2 + 1;
        } while (temp_v2 < 0x18);
      }
      return;
    }
    return;
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
    temp_v4 = campCecEditIsStateSixteen();
    if (temp_v4 != 0) {
      if (temp_v2 == 0x48) {
        temp_v6 = temp_v3 + 0x2b4;
      }
      else if (temp_v2 == 0x49) {
        temp_v6 = temp_v3 + 0x318;
      }
      else if (temp_v2 == 0x4a) {
        temp_v6 = temp_v3 + 0x37c;
      }
      else if (temp_v2 == 0x4b) {
        temp_v6 = temp_v3 + 0x3e0;
      }
      else if (temp_v2 == 0x4c) {
        temp_v6 = temp_v3 + 0x444;
      }
      else if (temp_v2 == 0x4d) {
        temp_v6 = temp_v3 + 0x4a8;
      }
      else if (temp_v2 == 0x4e) {
        temp_v6 = temp_v3 + 0x50c;
      }
      temp_v2 = objectApplyIfUnblocked(temp_v6);
      if (0 < temp_v2) {
        campSetSpriteAnimationPreset(2,3,0xffffffff,0);
        FUN_0021b274(1,0xffffffff,0);
        *(unsigned int *)(temp_v3 + 0x24) = 0x1d;
        campSelectorRebuildList(0x48);
        campSelectorRebuildList(0x49);
        campSelectorRebuildList(0x4a);
        campSelectorRebuildList(0x4b);
        campSelectorRebuildList(0x4c);
        campSelectorRebuildList(0x4d);
        campSelectorRebuildList(0x4e);
        FUN_0036cf98(1);
        campChangeState(4);
        return;
      }
    }
  }
  return;
}

} /* extern "C" */
