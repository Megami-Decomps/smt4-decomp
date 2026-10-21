/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a8450` (_code @ 0x3a8450, 0x370 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00232848(void);
int FUN_002328b4(void);
int FUN_00233240(...);
int FUN_00233818(int);
int ifTouchRegionClearAll(unsigned int);
int messageMainSetTargetFlags(...);
int FUN_0026c57c(void);
int FUN_00295660(int, int [33]);
int scrScriptProcessStartEntry(...);
int beginStatusPanelClose(void);
int FUN_0029cc44(...);
int FUN_0029ce60(unsigned int, int, int);
int useCounterStart(void);
int FUN_0029e328(...);
int sortMenuCreate(...);
int messageTargetSetValue(unsigned int, int);
int FUN_0029ede8(int, unsigned int, unsigned int, int);
int FUN_0029ee6c(...);
int FUN_002a0cc8(...);
int buttonHelpSetPreset(...);
int FUN_002bd06c(unsigned int);
int libc_strcpy(int [33], unsigned int);
int FUN_003a7ec8(int, int);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int spA8; /* 0xa8: local_a8 */
} param_1_stack;

extern unsigned char DAT_0043d9c8; /* 0x43d9c8 */

/* Supplied declaration required: FUN_00232848. */
/* Supplied declaration required: FUN_002328b4. */
/* Supplied declaration required: FUN_00233240. */
extern int flaggedValueHolderGetTotal(int);
/* Supplied declaration required: FUN_00233818. */
/* Supplied declaration required: ifTouchRegionClearAll. */
/* Supplied declaration required: messageMainSetTargetFlags. */
extern int inputIsQuestCancelPressed(void);
/* Supplied declaration required: FUN_0026c57c. */
extern int gameGetNavigationState(void);
extern int inputIsQuestMenuPressed(void);
extern int FUN_0027ee9c(void);
/* Supplied declaration required: FUN_00295660. */
/* Supplied declaration required: scrScriptProcessStartEntry. */
/* Supplied declaration required: beginStatusPanelClose. */
/* Supplied declaration required: FUN_0029cc44. */
/* Supplied declaration required: FUN_0029ce60. */
extern int gameGetFlagByte12e8(void);
/* Supplied declaration required: useCounterStart. */
/* Supplied declaration required: FUN_0029e328. */
/* Supplied declaration required: sortMenuCreate. */
/* Supplied declaration required: messageTargetSetValue. */
/* Supplied declaration required: FUN_0029ede8. */
/* Supplied declaration required: FUN_0029ee6c. */
/* Supplied declaration required: FUN_002a0cc8. */
/* Supplied declaration required: buttonHelpSetPreset. */
extern unsigned int FUN_002bce30(unsigned short, unsigned int);
/* Supplied declaration required: FUN_002bd06c. */
/* Supplied declaration required: libc_strcpy. */
/* Supplied declaration required: FUN_003a7ec8. */


void FUN_003a8450(int param_1)

{
/* irregular: 23 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7 [33];
  
  temp_v5 = 0;
  temp_v6 = 0;
  temp_v1 = flaggedValueHolderGetTotal(param_1 + 0x20);
  temp_v7[0] = 0;
  temp_v2 = (unsigned int)*(unsigned short *)(param_1 + 0x5a8 + temp_v1 * 0x20 + 4);
  FUN_0029ce60(temp_v2,*(unsigned char *)(param_1 + 0x5a5),0);
  messageTargetSetValue(-temp_v2,0);
  temp_v1 = inputIsQuestMenuPressed();
  temp_v7[0] = param_1 + 0x55c;
  if (0 < *(short *)(param_1 + 0x5a8)) {
    temp_v5 = FUN_0027ee9c();
    temp_v6 = inputIsQuestCancelPressed();
    if (temp_v5 == 0) {
      temp_v5 = (int)*(char *)(temp_v7[0] + 0x12);
    }
  }
  temp_v3 = gameGetNavigationState();
  if (temp_v3 != 0) {
    *(unsigned int *)(param_1 + 0x14) = 9;
    *(unsigned int *)(param_1 + 0x18) = 0;
    temp_v1 = gameGetFlagByte12e8();
    if (temp_v1 == 1) {
      *(unsigned short *)(param_1 + 0xa5b4) = 1;
    }
    else {
      *(unsigned short *)(param_1 + 0xa5b4) = 5;
    }
    FUN_00233240(param_1 + 0xdc,(int)*(short *)(param_1 + 0xa5b4));
    if (*(char *)(param_1 + 0x5a4) == '\0') {
      FUN_0029cc44(1);
    }
    ifTouchRegionClearAll(*(unsigned int *)(param_1 + 0x590));
    FUN_00233818(temp_v7[0]);
    return;
  }
  if (temp_v5 != 0) {
    temp_v1 = flaggedValueHolderGetTotal(param_1 + 0x20);
    temp_v0 = *(unsigned short *)(param_1 + 0x5a8 + temp_v1 * 0x20 + 4);
    temp_v7[0] = 0;
    temp_v2 = (unsigned int)temp_v0;
    FUN_0029ce60(temp_v2,*(unsigned char *)(param_1 + 0x5a5),0);
    FUN_0029ede8(0x18,temp_v2,0xffffffff,0);
    temp_v1 = param_1;
    FUN_003a7ec8(param_1,temp_v0);
    if (temp_v1 != 0) {
      temp_v2 = (unsigned int)temp_v0;
      FUN_002bd06c(temp_v2);
      libc_strcpy(temp_v7,temp_v2);
      FUN_00295660(8,temp_v7);
      temp_v4 = FUN_002bce30(temp_v0,1);
      libc_strcpy(temp_v7,temp_v4);
      FUN_00295660(0x10,temp_v7);
      scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0x5a0),0);
      *(unsigned int *)(param_1 + 0x14) = 3;
      *(unsigned int *)(param_1 + 0x18) = 0;
    }
    else {
      temp_v4 = 0;
      switch(*(unsigned char *)(param_1 + 0xa5b0)) {
      case 1:
        temp_v4 = 2;
        break;
      case 2:
        temp_v4 = 1;
        break;
      case 3:
        temp_v4 = 3;
        break;
      case 4:
        temp_v4 = 4;
        break;
      case 5:
        temp_v4 = 5;
      }
      scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0x5a0),temp_v4);
      *(unsigned int *)(param_1 + 0x14) = 5;
      *(unsigned int *)(param_1 + 0x18) = 0;
      buttonHelpSetPreset(0x9e);
    }
    messageMainSetTargetFlags(1);
    FUN_002a0cc8(1);
    FUN_002328b4();
    return;
  }
  if (temp_v1 == 0) {
    if (temp_v6 == 0) {
      return;
    }
    (*(unsigned int *)((unsigned char *)&DAT_0043d9c8 + 0x4)) = 0xffffffff;
    sortMenuCreate(0xf,0);
    FUN_0029e328(1);
    FUN_0029e328(2);
    FUN_0029e328(7);
    FUN_0029e328(3);
    useCounterStart();
    FUN_002a0cc8(1);
    *(unsigned int *)(param_1 + 0x14) = 6;
    *(unsigned int *)(param_1 + 0x18) = 0;
    FUN_0029ee6c(0,0x323232ff);
    FUN_002328b4();
    return;
  }
  if (*(char *)(param_1 + 0x5a4) == '\0') {
    FUN_0029cc44(1);
  }
  FUN_0029ee6c(0,0x323232ff);
  beginStatusPanelClose();
  FUN_00233240(param_1 + 0xdc,1);
  FUN_002a0cc8(1);
  *(unsigned int *)(param_1 + 0x14) = 0xb;
  *(unsigned int *)(param_1 + 0x18) = 0;
  FUN_00232848();
  FUN_0026c57c();
  return;
}

} /* extern "C" */
