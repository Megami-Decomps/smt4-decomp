/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003daf0c` (_code @ 0x3daf0c, 0x640 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "gamedata/FlagValueIsPositive.h"
#include "util/CalleeContracts.h"
#include "util/FUN_002a4878.h"

extern "C" {

int campRebuildEnabledFlagList(...);
int flagBanksResetPendingState(...);
int FUN_003a7c00(...);
int messageMainSetTargetFlags(...);
int flagValueSub(...);

int FUN_001517b4(...);
int eventQueueAddUniqueIfValid(...);
int uiSpriteSetImageKeyframe(...);
int FUN_0019de98(...);
int campChangeState(...);
int FUN_0021b274(...);
int FUN_00228b04(int, int);
int campShowSelectedEntryHelp(...);
int campTouchRegionsRemoveGroup(...);
int FUN_002cb278(int, int);
int buttonHelpScriptStart(...);
int FUN_0031f208(...);
int sortMenuAcquire(int, int);
int FUN_003450d4(int, unsigned int, int, int, int, int, char [8], int, int);
int messageDismissNumericBanner(...);
int FUN_003da8f4(int, unsigned int);
int FUN_0048144c(void);

/* stack frame of param_1: 5 slot(s), 17 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned char sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern int g_camp; /* 0x57f108 */

/* Supplied declaration required: FUN_001517b4. */
/* Supplied declaration required: eventQueueAddUniqueIfValid. */
extern unsigned short ifTouchGetButtonHelpValue(void);
extern unsigned int asdTMTexTableEntryAt(unsigned int, unsigned int);
/* Supplied declaration required: uiSpriteSetImageKeyframe. */
/* Supplied declaration required: FUN_0019de98. */
/* Supplied declaration required: campChangeState. */
/* Supplied declaration required: FUN_0021b274. */
/* Supplied declaration required: FUN_00228b04. */
/* Supplied declaration required: campRebuildEnabledFlagList. */
extern int messageMainIsIdle(void);
/* Supplied declaration required: campShowSelectedEntryHelp. */
extern int resourceRunOperationIfUnblocked(int);
extern int FUN_002a4894(int);
extern int messageGetChoiceResult(void);
/* Supplied declaration required: campTouchRegionsRemoveGroup. */
/* Supplied declaration required: FUN_002cb278. */
/* Supplied declaration required: buttonHelpScriptStart. */
/* Supplied declaration required: FUN_0031f208. */
/* Supplied declaration required: sortMenuAcquire. */
/* Supplied declaration required: flagBanksResetPendingState. */
/* Supplied declaration required: FUN_003450d4. */
/* Supplied declaration required: messageDismissNumericBanner. */
/* Supplied declaration required: FUN_003a7c00. */
/* Supplied declaration required: messageMainSetTargetFlags. */
/* Supplied declaration required: FUN_003da8f4. */
/* Supplied declaration required: flagValueSub. */
extern int FUN_00481404(void);
/* Supplied declaration required: FUN_0048144c. */


void FUN_003daf0c(int param_1)

{
/* irregular: 22 native warning(s); review required */
  short temp_v0;
  unsigned short temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  char temp_v8 [8];
  
  temp_v5 = g_camp;
  temp_v7 = 0;
  if (param_1 == 0xb) {
    temp_v7 = g_camp + 0xc0;
  }
  else if (param_1 == 0xd) {
    temp_v7 = g_camp + 0x124;
  }
  else if (param_1 == 0xe) {
    temp_v7 = g_camp + 0x188;
  }
  switch(*(unsigned int *)(g_camp + 0x20)) {
  case 0:
    FUN_002cb278(temp_v7,1);
    temp_v7 = *(int *)(temp_v5 + 0x20) + 1;
    *(int *)(temp_v5 + 0x20) = temp_v7;
    return;
  case 1:
    temp_v8[0] = '\0';
    temp_v2 = asdTMTexTableEntryAt(0x14,0x56d);
    temp_v6 = temp_v7;
    FUN_003450d4(temp_v7,temp_v2,temp_v5 + 0x1b3e,(int)*(short *)(temp_v5 + 0x1b34),
                 (int)*(short *)(temp_v5 + 0x1b36),(int)*(short *)(temp_v5 + 0x1b38),temp_v8,0,1);
    if ((temp_v6 != 0) || (temp_v6 = temp_v7, FUN_00228b04(temp_v7,1), temp_v6 != 0)) {
      temp_v2 = FUN_002a4878((void *)(temp_v5 + 0x40));
      FUN_003da8f4((int)*(char *)(temp_v5 + 0xa4),temp_v2);
      campShowSelectedEntryHelp();
      return;
    }
    temp_v6 = 0;
    FUN_001517b4(0,1);
    temp_v2 = 0x100020f;
    if ((temp_v6 == 0 && temp_v8[0] == '\0') || (param_1 != 0xb)) {
      temp_v6 = 1;
      FUN_001517b4();
      if (temp_v6 != 0) {
        campShowSelectedEntryHelp(0);
        FUN_0021b274(3,0xffffffff,0);
        *(unsigned int *)(temp_v5 + 0x24) = 6;
        campChangeState(5);
        campTouchRegionsRemoveGroup(temp_v7,1);
      }
      else {
        temp_v7 = 9;
        FUN_001517b4(9,1);
        if (temp_v7 == 0) {
          return;
        }
        if (param_1 == 0xd) {
          return;
        }
        if (param_1 != 0xb) {
          if (param_1 == 0xe) {
            sortMenuAcquire(4,0);
            FUN_0031f208(0x21);
            FUN_0031f208(0x10);
            FUN_0031f208(3);
          }
        }
        else {
          sortMenuAcquire(3,0);
          FUN_0031f208(0xc);
          FUN_0031f208(0x10);
          FUN_0031f208(3);
        }
        FUN_0019de98(0,0xf4f4f4ff);
        temp_v1 = ifTouchGetButtonHelpValue();
        *(unsigned short *)(temp_v5 + 0x3a) = temp_v1;
        campChangeState(0x2b);
        temp_v2 = 0x100020e;
      }
      eventQueueAddUniqueIfValid(temp_v2);
      return;
    }
    temp_v6 = resourceRunOperationIfUnblocked(temp_v7);
    temp_v3 = FUN_002a4894(temp_v7);
    temp_v6 = temp_v5 + (temp_v3 + temp_v6) * 2;
    temp_v4 = (unsigned int)*(unsigned short *)(temp_v6 + 0x21b0);
    FUN_0048144c();
    if (temp_v4 == 0) {
      eventQueueAddUniqueIfValid(0x100020f);
      return;
    }
    *(unsigned int *)(temp_v5 + 0x33b8) = (unsigned int)*(unsigned short *)(temp_v6 + 0x21b0);
    temp_v0 = *(short *)(temp_v6 + 0x21b0);
    if (temp_v0 == 0x79f) {
      eventQueueAddUniqueIfValid(0x100020e);
      buttonHelpScriptStart(3);
      temp_v7 = 2;
    }
    else if (temp_v0 == 0x7af) {
      eventQueueAddUniqueIfValid(0x100021c);
      buttonHelpScriptStart(5);
      temp_v7 = 4;
    }
    else if (temp_v0 == 0x7b6) {
      eventQueueAddUniqueIfValid(0x100020e);
      temp_v7 = 5;
    }
    else {
      temp_v3 = FUN_00481404();
      if (temp_v3 != 0) {
        eventQueueAddUniqueIfValid(0x100020e);
        *(unsigned int *)(temp_v5 + 0x20) = 6;
        return;
      }
      if (*(unsigned short *)(temp_v6 + 0x21b0) != 0x7cd) {
        *(unsigned int *)(temp_v5 + 0x34) = (unsigned int)*(unsigned short *)(temp_v6 + 0x21b0);
        FUN_0021b274(3,0xffffffff,0);
        *(unsigned int *)(temp_v5 + 0x24) = 0xb;
        campChangeState(5);
        campTouchRegionsRemoveGroup(temp_v7,1);
        messageDismissNumericBanner(1);
        uiSpriteSetImageKeyframe(g_camp + 0x1634,7,0);
        eventQueueAddUniqueIfValid(0x100020e);
        if (*(short *)(temp_v6 + 0x21b0) == 0x7a5 || *(short *)(temp_v6 + 0x21b0) == 0x7a6) {
          FUN_003a7c00(0);
        }
        return;
      }
      eventQueueAddUniqueIfValid(0x100020e);
      temp_v7 = 7;
    }
    *(int *)(temp_v5 + 0x20) = temp_v7;
    return;
  case 2:
    messageMainSetTargetFlags(1);
    temp_v7 = FUN_002a21e8();
    if (temp_v7 == 0) {
      return;
    }
    temp_v7 = messageGetChoiceResult();
    if (temp_v7 == 0) {
      flagValueSub(0x79f,1);
      temp_v5 = flagValueIsPositive(0x79f);
      if (temp_v5 == 0) {
        campRebuildEnabledFlagList(0xb);
      }
      campChangeState(0x4d);
      return;
    }
    temp_v7 = 3;
    *(int *)(temp_v5 + 0x20) = temp_v7;
    return;
  case 3:
    temp_v7 = messageMainIsIdle();
    if (temp_v7 != 0) {
      messageMainSetTargetFlags(0);
      *(unsigned int *)(temp_v5 + 0x20) = 1;
      return;
    }
    break;
  case 4:
    temp_v7 = FUN_002a21e8();
    if ((temp_v7 != 0) && (temp_v7 = messageMainIsIdle(), temp_v7 != 0)) {
      flagValueSub(0x7af,1);
      temp_v7 = flagValueIsPositive(0x7af);
      if (temp_v7 == 0) {
        campRebuildEnabledFlagList(0xb);
      }
      flagBanksResetPendingState(1);
      *(unsigned int *)(temp_v5 + 0x20) = 1;
      return;
    }
    break;
  case 5:
    temp_v6 = messageMainIsIdle();
    if (temp_v6 != 0) {
      campTouchRegionsRemoveGroup(temp_v7,1);
      messageDismissNumericBanner(1);
      uiSpriteSetImageKeyframe(g_camp + 0x1634,7,0);
      FUN_0021b274(3,0xffffffff,0);
      *(unsigned int *)(temp_v5 + 0x24) = 0xc;
      campChangeState(5);
      return;
    }
    break;
  case 6:
    temp_v6 = messageMainIsIdle();
    if (temp_v6 != 0) {
      campTouchRegionsRemoveGroup(temp_v7,1);
      messageDismissNumericBanner(1);
      uiSpriteSetImageKeyframe(g_camp + 0x1634,7,0);
      FUN_0021b274(3,0xffffffff,0);
      *(unsigned int *)(temp_v5 + 0x24) = 0xd;
      campChangeState(5);
      return;
    }
    break;
  case 7:
    temp_v6 = messageMainIsIdle();
    if (temp_v6 != 0) {
      campTouchRegionsRemoveGroup(temp_v7,1);
      messageDismissNumericBanner(1);
      uiSpriteSetImageKeyframe(g_camp + 0x1634,7,0);
      FUN_0021b274(3,0xffffffff,0);
      *(unsigned int *)(temp_v5 + 0x24) = 0xe;
      campChangeState(5);
      return;
    }
  }
  return;
}

} /* extern "C" */
