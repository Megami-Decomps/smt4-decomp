/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a3c7c` (_code @ 0x3a3c7c, 0x2a4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrRunOpcodesStub(unsigned int);
int FUN_0022e648(int, int);
int FUN_0022fa2c(int);
int FUN_0022faf8(void);
int FUN_0022fb64(int);
int FUN_0022fcb8(int, int);
int FUN_00230df0(int);
int FUN_00232848(void);
int FUN_002328b4(void);
int FUN_00233240(int, int);
int FUN_00233818(int);
int ifTouchRegionClearAll(unsigned int);
int messageMainFinishWindow(void);
int messageMainSetEnabled(int);
int messageTargetSetValue(int);
int FUN_0029ee6c(int, int);
int ifTouchRegionRemove(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: scrRunOpcodesStub. */
/* Supplied declaration required: FUN_0022e648. */
/* Supplied declaration required: FUN_0022fa2c. */
/* Supplied declaration required: FUN_0022faf8. */
extern int inputIsQuestRepeatLeft(void);
extern int inputIsQuestRepeatRight(void);
/* Supplied declaration required: FUN_0022fb64. */
extern int FUN_0022fbc0(int);
/* Supplied declaration required: FUN_0022fcb8. */
extern int FUN_00230b90(int, unsigned short);
/* Supplied declaration required: FUN_00230df0. */
/* Supplied declaration required: FUN_00232848. */
/* Supplied declaration required: FUN_002328b4. */
/* Supplied declaration required: FUN_00233240. */
extern int flaggedValueHolderGetTotal(int);
/* Supplied declaration required: FUN_00233818. */
/* Supplied declaration required: ifTouchRegionClearAll. */
extern int inputIsQuestCancelPressed(void);
extern int inputIsQuestMenuPressed(void);
extern int FUN_0027ee9c(void);
extern int FUN_0028fb3c(unsigned short);
/* Supplied declaration required: messageMainFinishWindow. */
/* Supplied declaration required: messageMainSetEnabled. */
extern int ifTouchGetSelectionModeForRegion(int);
/* Supplied declaration required: messageTargetSetValue. */
/* Supplied declaration required: FUN_0029ee6c. */
/* Supplied declaration required: ifTouchRegionRemove. */


void FUN_003a3c7c(int param_1)

{
/* irregular: 17 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  if (*(int *)(param_1 + 8) != 0) {
    if ((*(int *)(param_1 + 8) == 1) &&
       (temp_v1 = scrRunOpcodesStub(*(unsigned int *)(param_1 + 0x168)), temp_v1 == 2)) {
      *(unsigned int *)(param_1 + 4) = 3;
      *(unsigned int *)(param_1 + 8) = 0;
      FUN_0029ee6c(0,0x323232ff);
      messageMainSetEnabled(1);
      return;
    }
  }
  else {
    messageMainSetEnabled(0);
    scrRunOpcodesStub(*(unsigned int *)(param_1 + 0x168));
    messageTargetSetValue(0);
    temp_v1 = FUN_0022fbc0(param_1);
    FUN_0022fb64(param_1);
    if ((0 < *(int *)(param_1 + *(int *)(param_1 + 0x860) * 0x74 + 0x888)) &&
       (temp_v2 = FUN_0027ee9c(), temp_v2 != 0)) {
      temp_v1 = 1;
    }
    temp_v2 = *(int *)(param_1 + 0x860);
    temp_v3 = flaggedValueHolderGetTotal(param_1 + temp_v2 * 0x74 + 0x880);
    temp_v0 = *(unsigned short *)(param_1 + temp_v2 * 0x1002 + 0xc94 + temp_v3 * 4);
    if ((((*(int *)(param_1 + 0x860) != 8) || (temp_v2 = FUN_00230b90(param_1,temp_v0), temp_v2 == 0)) ||
        (temp_v2 = FUN_0028fb3c(temp_v0), temp_v2 >= 2)) && (temp_v1 != 0)) {
      FUN_002328b4();
      FUN_0022e648(param_1,0xb);
      return;
    }
    temp_v1 = inputIsQuestRepeatRight();
    if ((temp_v1 != 0) || (temp_v1 = ifTouchGetSelectionModeForRegion((int)*(short *)(param_1 + 0x15d4c)), temp_v1 == 6)) {
      *(unsigned int *)(param_1 + 0x864) = *(unsigned int *)(*(int *)(param_1 + 0x864) * 8 + 0x44e020);
      FUN_0022fcb8(param_1,1);
      FUN_0022faf8();
      return;
    }
    temp_v1 = inputIsQuestRepeatLeft();
    if ((temp_v1 != 0) || (temp_v1 = ifTouchGetSelectionModeForRegion((int)*(short *)(param_1 + 0x15d4e)), temp_v1 == 6)) {
      *(unsigned int *)(param_1 + 0x864) = *(unsigned int *)(*(int *)(param_1 + 0x864) * 8 + 0x44e024);
      FUN_0022fcb8(param_1,1);
      FUN_0022faf8();
      return;
    }
    temp_v1 = inputIsQuestMenuPressed();
    if (temp_v1 != 0) {
      FUN_00230df0(0);
      FUN_00232848();
      FUN_00233240(param_1 + 0x3a8,1);
      messageMainFinishWindow();
      if (*(char *)(param_1 + 0x14) == '\x01') {
        *(unsigned int *)(param_1 + 0x15d60) = 1;
      }
      else {
        *(unsigned int *)(param_1 + 0x15d60) = 2;
      }
      ifTouchRegionClearAll(*(unsigned int *)(param_1 + 0x85c));
      FUN_00233818(param_1 + 0x828);
      temp_v1 = 0;
      if (temp_v1 < *(short *)(param_1 + 0x15d50)) {
        do {
          ifTouchRegionRemove();
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < *(short *)(param_1 + 0x15d50));
      }
      *(unsigned int *)(param_1 + 8) = 1;
    }
    else {
      temp_v1 = inputIsQuestCancelPressed();
      if (temp_v1 != 0) {
        FUN_002328b4();
        FUN_0022fa2c(param_1);
        return;
      }
    }
  }
  return;
}

} /* extern "C" */
