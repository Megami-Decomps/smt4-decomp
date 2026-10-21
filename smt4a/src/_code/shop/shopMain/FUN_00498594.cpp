/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00498594` (_code @ 0x498594, 0x118 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int uiSpriteBankApplyPreset(int, int);
int FUN_004954e8(void);
int FUN_00496a0c(int, int);
int FUN_0049706c(int);
int messageChoiceShowCurrent(int);
int sendEvent100020F(void);
int sendEvent100020E(void);
int sendEvent1000210(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: uiSpriteBankApplyPreset. */
extern int FUN_00284140(int);
/* Supplied declaration required: FUN_004954e8. */
/* Supplied declaration required: FUN_00496a0c. */
/* Supplied declaration required: FUN_0049706c. */
/* Supplied declaration required: messageChoiceShowCurrent. */
/* Supplied declaration required: sendEvent100020F. */
/* Supplied declaration required: sendEvent100020E. */
/* Supplied declaration required: sendEvent1000210. */
extern int inputIsQuestRepeatRight(void);
extern int FUN_004d0494(void);
extern int inputIsQuestCancelPressed(void);
extern int inputIsQuestMenuPressed(void);


void FUN_00498594(int param_1)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  
  FUN_004954e8();
  messageChoiceShowCurrent(param_1);
  temp_v0 = inputIsQuestRepeatRight();
  if ((temp_v0 != 0) || (temp_v0 = FUN_00284140((int)*(short *)(param_1 + 0x1602c)), temp_v0 == 6)) {
    *(unsigned int *)(param_1 + 0xb44) = *(unsigned int *)(*(int *)(param_1 + 0xb44) * 8 + 0x588f78);
    FUN_00496a0c(param_1,1);
    sendEvent1000210();
    return;
  }
  temp_v0 = FUN_004d0494();
  if ((temp_v0 == 0) && (temp_v0 = FUN_00284140((int)*(short *)(param_1 + 0x1602e)), temp_v0 != 6)) {
    temp_v0 = inputIsQuestMenuPressed();
    if (temp_v0 != 0) {
      uiSpriteBankApplyPreset(param_1 + 0x3cc,1);
      sendEvent100020F();
      *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 4);
      *(unsigned int *)(param_1 + 4) = 0x13;
      *(unsigned int *)(param_1 + 8) = 0;
    }
    else {
      temp_v0 = inputIsQuestCancelPressed();
      if (temp_v0 != 0) {
        sendEvent100020E();
        FUN_0049706c(param_1);
        return;
      }
    }
    return;
  }
  *(unsigned int *)(param_1 + 0xb44) = *(unsigned int *)(*(int *)(param_1 + 0xb44) * 8 + 0x588f7c);
  FUN_00496a0c(param_1,1);
  sendEvent1000210();
  return;
}

} /* extern "C" */
