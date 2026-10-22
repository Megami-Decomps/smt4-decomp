/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00499fdc` (_code @ 0x499fdc, 0x2d0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int ifTouchRegionRemove(void);
int uiSpriteBankApplyPreset(int, int);
int FUN_0019de98(int, unsigned int);
int scrRunOpcodesStub(unsigned int);
int obj04Finish(void);
int panelSetTarget(int);
int FUN_0038b010(int);
int messageMainSetFlag(int);
int FUN_00496a0c(int, int);
int FUN_0049706c(int);
int FUN_00498494(int, int);
int messageChoiceShowCurrent(int);
int sendEvent100020F(void);
int sendEvent100020E(void);
int sendEvent1000210(void);
int releaseEntriesA(int);
int releaseEntriesB(unsigned int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: ifTouchRegionRemove. */
/* Supplied declaration required: uiSpriteBankApplyPreset. */
/* Supplied declaration required: FUN_0019de98. */
extern int FUN_001ba3d0(unsigned short);
/* Supplied declaration required: scrRunOpcodesStub. */
extern int recordGetModeForId(int);
/* Supplied declaration required: obj04Finish. */
/* Supplied declaration required: panelSetTarget. */
/* Supplied declaration required: FUN_0038b010. */
/* Supplied declaration required: messageMainSetFlag. */
extern int FUN_0047fe44(unsigned short);
extern int FUN_004954e8(int);
/* Supplied declaration required: FUN_00496a0c. */
/* Supplied declaration required: FUN_0049706c. */
extern int FUN_00498408(int, unsigned short);
/* Supplied declaration required: FUN_00498494. */
/* Supplied declaration required: messageChoiceShowCurrent. */
extern int flaggedValueHolderGetTotal(int);
/* Supplied declaration required: sendEvent100020F. */
/* Supplied declaration required: sendEvent100020E. */
/* Supplied declaration required: sendEvent1000210. */
extern int inputIsQuestRepeatRight(void);
extern int FUN_004d0494(void);
extern int inputIsQuestCancelPressed(void);
extern int inputIsQuestMenuPressed(void);
extern int FUN_004d0584(void);
/* Supplied declaration required: releaseEntriesA. */
/* Supplied declaration required: releaseEntriesB. */


void FUN_00499fdc(int param_1)

{
/* irregular: 17 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  if (*(int *)(param_1 + 8) != 0) {
    if ((*(int *)(param_1 + 8) == 1) &&
       (temp_v1 = scrRunOpcodesStub(*(unsigned int *)(param_1 + 0x18c)), temp_v1 == 2)) {
      *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 4);
      *(unsigned int *)(param_1 + 4) = 5;
      *(unsigned int *)(param_1 + 8) = 0;
      FUN_0019de98(0,0xf4f4f4ff);
      messageMainSetFlag(1);
      return;
    }
  }
  else {
    messageMainSetFlag(0);
    scrRunOpcodesStub(*(unsigned int *)(param_1 + 0x18c));
    panelSetTarget(0);
    temp_v1 = FUN_004954e8(param_1);
    messageChoiceShowCurrent(param_1);
    if ((0 < *(int *)(param_1 + *(int *)(param_1 + 0xb40) * 0x74 + 0xb68)) &&
       (temp_v2 = FUN_004d0584(), temp_v2 != 0)) {
      temp_v1 = 1;
    }
    temp_v2 = *(int *)(param_1 + 0xb40);
    temp_v3 = flaggedValueHolderGetTotal(param_1 + temp_v2 * 0x74 + 0xb60);
    temp_v0 = *(unsigned short *)(param_1 + temp_v2 * 0x1002 + 0xf74 + temp_v3 * 4);
    if (((*(int *)(param_1 + 0xb40) != 8) ||
        (((temp_v2 = FUN_00498408(param_1,temp_v0), temp_v2 == 0 ||
          (temp_v2 = FUN_001ba3d0(temp_v0), temp_v2 >= 2)) && (temp_v2 = FUN_0047fe44(temp_v0), temp_v2 == 0))))
       && (temp_v1 != 0)) {
      sendEvent100020E();
      FUN_00498494(param_1,0xd);
      return;
    }
    temp_v1 = inputIsQuestRepeatRight();
    if ((temp_v1 != 0) || (temp_v1 = recordGetModeForId((int)*(short *)(param_1 + 0x1602c)), temp_v1 == 6)) {
      *(unsigned int *)(param_1 + 0xb44) = *(unsigned int *)(*(int *)(param_1 + 0xb44) * 8 + 0x588f78);
      FUN_00496a0c(param_1,1);
      sendEvent1000210();
      return;
    }
    temp_v1 = FUN_004d0494();
    if ((temp_v1 != 0) || (temp_v1 = recordGetModeForId((int)*(short *)(param_1 + 0x1602e)), temp_v1 == 6)) {
      *(unsigned int *)(param_1 + 0xb44) = *(unsigned int *)(*(int *)(param_1 + 0xb44) * 8 + 0x588f7c);
      FUN_00496a0c(param_1,1);
      sendEvent1000210();
      return;
    }
    temp_v1 = inputIsQuestMenuPressed();
    if (temp_v1 != 0) {
      FUN_0038b010(0);
      sendEvent100020F();
      uiSpriteBankApplyPreset(param_1 + 0x3cc,1);
      obj04Finish();
      if (*(char *)(param_1 + 0x18) == '\x01') {
        *(unsigned int *)(param_1 + 0x16040) = 1;
      }
      else {
        *(unsigned int *)(param_1 + 0x16040) = 2;
      }
      releaseEntriesB(*(unsigned int *)(param_1 + 0xb3c));
      releaseEntriesA(param_1 + 0xb08);
      temp_v1 = 0;
      if (temp_v1 < *(short *)(param_1 + 0x16030)) {
        do {
          ifTouchRegionRemove();
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < *(short *)(param_1 + 0x16030));
      }
      *(unsigned int *)(param_1 + 8) = 1;
    }
    else {
      temp_v1 = inputIsQuestCancelPressed();
      if (temp_v1 != 0) {
        sendEvent100020E();
        FUN_0049706c(param_1);
        return;
      }
      temp_v1 = FUN_004d0584();
      if (temp_v1 != 0) {
        sendEvent100020F();
        return;
      }
    }
  }
  return;
}

} /* extern "C" */
