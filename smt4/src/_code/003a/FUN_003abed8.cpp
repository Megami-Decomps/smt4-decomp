/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003abed8` (_code @ 0x3abed8, 0x330 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0020349c(...);
int FUN_00232848(void);
int FUN_002328b4(void);
int uiOwnerUpdateAnimationChannels(void);
int messageMainSetTargetFlags(int);
int FUN_00288e68(int);
int FUN_00295660(int, unsigned char [36]);
int scrScriptProcessStartEntry(unsigned int, int);
int beginStatusPanelClose(void);
int FUN_0029cc44(int);
int FUN_0029d684(...);
int FUN_0029defc(...);
int FUN_0029dfc0(int);
int useCounterStart(void);
int FUN_0029e328(int);
int sortMenuCreate(int, int);
int messageTargetSetValue(unsigned int, int);
int FUN_0029ede8(int, unsigned int, unsigned int, int);
int FUN_0029ee6c(int, int);
int dataTable00FindById(void);
int libc_strcpy(unsigned char [36], unsigned int);
int FUN_003ac468(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
} param_1_stack;

/* Supplied declaration required: FUN_0020349c. */
extern unsigned int gameSlotTableGetHeader(void);
/* Supplied declaration required: FUN_00232848. */
/* Supplied declaration required: FUN_002328b4. */
/* Supplied declaration required: uiOwnerUpdateAnimationChannels. */
extern int FUN_002333a4(int, unsigned int);
extern unsigned int FUN_002333f0(int);
extern int flaggedValueHolderGetTotal(int);
/* Supplied declaration required: messageMainSetTargetFlags. */
extern int inputIsQuestCancelPressed(void);
extern int FUN_00262cb0(unsigned short);
extern int inputIsQuestMenuPressed(void);
extern int FUN_0027ee9c(void);
/* Supplied declaration required: FUN_00288e68. */
/* Supplied declaration required: FUN_00295660. */
/* Supplied declaration required: scrScriptProcessStartEntry. */
/* Supplied declaration required: beginStatusPanelClose. */
/* Supplied declaration required: FUN_0029cc44. */
/* Supplied declaration required: FUN_0029d684. */
/* Supplied declaration required: FUN_0029defc. */
extern int FUN_0029dfa8(void);
/* Supplied declaration required: FUN_0029dfc0. */
extern int FUN_0029e0f8(void);
/* Supplied declaration required: useCounterStart. */
/* Supplied declaration required: FUN_0029e328. */
/* Supplied declaration required: sortMenuCreate. */
/* Supplied declaration required: messageTargetSetValue. */
/* Supplied declaration required: FUN_0029ede8. */
/* Supplied declaration required: FUN_0029ee6c. */
/* Supplied declaration required: dataTable00FindById. */
extern unsigned int aocIndexValueOrDefault(void);
/* Supplied declaration required: libc_strcpy. */
/* Supplied declaration required: FUN_003ac468. */


void FUN_003abed8(int param_1)

{
/* irregular: 22 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  short *psVar6;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned char temp_v9 [36];
  
  uiOwnerUpdateAnimationChannels();
  temp_v1 = flaggedValueHolderGetTotal(param_1 + 0x20);
  temp_v6 = *(unsigned int *)(param_1 + temp_v1 * 0x20 + 0x5b4);
  messageTargetSetValue(-temp_v6,0);
  temp_v7 = 0;
  temp_v8 = 0;
  temp_v1 = inputIsQuestMenuPressed();
  if (0 < *(short *)(param_1 + 0x5a8)) {
    temp_v8 = inputIsQuestCancelPressed();
    temp_v7 = FUN_0027ee9c();
  }
  if (*(char *)(param_1 + 0x56e) != '\0') {
    temp_v2 = FUN_002333f0(param_1 + 0x55c);
    temp_v3 = FUN_002333a4(param_1 + 0x20,temp_v2);
    if (temp_v3 != 0) {
      temp_v7 = 1;
    }
  }
  temp_v5 = param_1 + 0x5a8;
  temp_v3 = flaggedValueHolderGetTotal(param_1 + 0x20);
  temp_v3 = FUN_00262cb0(*(unsigned short *)(temp_v5 + temp_v3 * 0x20 + 4));
  if ((temp_v3 == 0) && (temp_v7 != 0)) {
    temp_v4 = gameSlotTableGetHeader();
    if (temp_v4 < temp_v6) {
      scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0x5a0),9);
      *(unsigned int *)(param_1 + 0x14) = 8;
      *(unsigned int *)(param_1 + 0x18) = 0;
    }
    else {
      temp_v1 = flaggedValueHolderGetTotal(param_1 + 0x20);
      FUN_00288e68(*(unsigned short *)(temp_v5 + temp_v1 * 0x20 + 4));
      temp_v2 = aocIndexValueOrDefault();
      libc_strcpy(temp_v9,temp_v2);
      FUN_00295660(0x14,temp_v9);
      FUN_0029ede8(0x18,temp_v6,0xffffffff,0);
      scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0x5a0),8);
      messageMainSetTargetFlags(1);
      *(unsigned int *)(param_1 + 0x14) = 5;
      *(unsigned int *)(param_1 + 0x18) = 0;
    }
    FUN_002328b4();
  }
  else if (temp_v1 != 0) {
    FUN_0029cc44(1);
    FUN_003ac468();
    beginStatusPanelClose();
    FUN_0029ee6c(0,0x323232ff);
    *(unsigned int *)(param_1 + 0x14) = 10;
    *(unsigned int *)(param_1 + 0x18) = 0;
    FUN_00232848();
  }
  else if (temp_v8 != 0) {
    sortMenuCreate(0x10,0);
    FUN_0029e328(0xb);
    FUN_0029e328(7);
    FUN_0029e328(0xf);
    FUN_0029e328(0x11);
    FUN_0029e328(3);
    useCounterStart();
    *(unsigned int *)(param_1 + 0x14) = 4;
    *(unsigned int *)(param_1 + 0x18) = 0;
    FUN_0029ee6c(0,0x323232ff);
    FUN_002328b4();
  }
  if (*(short *)(param_1 + 0x5a8) == 0) {
    FUN_0029dfc0(0);
    return;
  }
  temp_v1 = FUN_0029e0f8();
  if (temp_v1 != 0) {
    temp_v1 = flaggedValueHolderGetTotal(param_1 + 0x20);
    temp_v0 = *(short *)(temp_v5 + temp_v1 * 0x20 + 4);
    if (*(short *)(param_1 + 0x5a4) != temp_v0) {
      if (*(char *)(param_1 + 0x90) != '\0') {
        FUN_0029dfc0(0);
        return;
      }
      temp_v1 = FUN_0029dfa8();
      if (temp_v1 == 0) {
        psVar6 = (short *)0x0;
        *(short *)(param_1 + 0x5a4) = temp_v0;
        dataTable00FindById();
        temp_v1 = 0;
        do {
          if (psVar6[0x50] == *(short *)(param_1 + 0x5a4)) {
            if (*psVar6 == 0) {
              return;
            }
            FUN_0029defc((int)*psVar6,0);
            FUN_0020349c(*(unsigned short *)(param_1 + 0x5a4));
            FUN_0029d684(1);
            return;
          }
          temp_v1 = temp_v1 + 1;
          psVar6 = psVar6 + 0x54;
        } while (temp_v1 < 0x4b1);
      }
    }
  }
  return;
}

} /* extern "C" */
