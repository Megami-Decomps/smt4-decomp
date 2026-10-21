/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ab128` (_code @ 0x3ab128, 0x21c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int pointConvertToFloat(int, unsigned int, unsigned int);
int FUN_00233240(int, int);
int flaggedValueHolderGetTotal(int);
int messageMainSetTargetFlags(int);
int gameClearUnlockedSavedId(unsigned int);
int FUN_0029c43c(int, int);
int buttonHelpSetPreset(int);
int FUN_002b8ee0(int, int);
int FUN_002bf818(int);
int statusOpenSkillSelection(int, int);

extern int buttonHelpIsNotActive(void);
/* Supplied declaration required: pointConvertToFloat. */
/* Supplied declaration required: FUN_00233240. */
/* Supplied declaration required: flaggedValueHolderGetTotal. */
/* Supplied declaration required: messageMainSetTargetFlags. */
/* Supplied declaration required: gameClearUnlockedSavedId. */
extern unsigned int statusDownGetValue(void);
extern int statusScreenIsClosed(void);
/* Supplied declaration required: FUN_0029c43c. */
/* Supplied declaration required: buttonHelpSetPreset. */
/* Supplied declaration required: FUN_002b8ee0. */
extern unsigned int vec2GetYInt(int);
extern unsigned int vec2GetXInt(int);
/* Supplied declaration required: FUN_002bf818. */
/* Supplied declaration required: statusOpenSkillSelection. */


void FUN_003ab128(int param_1)

{
/* irregular: 10 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v1 = flaggedValueHolderGetTotal(param_1 + 0x20);
  temp_v0 = *(unsigned short *)(param_1 + temp_v1 * 0x20 + 0x5ac);
  switch(*(unsigned int *)(param_1 + 0x18)) {
  case 0:
    messageMainSetTargetFlags(0);
    break;
  case 1:
    FUN_00233240(param_1 + 0xdc,1);
    statusOpenSkillSelection(temp_v0,1);
    break;
  case 2:
    temp_v1 = param_1 + 0x188;
    FUN_002bf818(temp_v1);
    temp_v3 = vec2GetYInt(temp_v1);
    temp_v4 = vec2GetXInt(temp_v1);
    pointConvertToFloat(param_1 + 200,temp_v4,temp_v3);
    if (*(char *)(param_1 + 0x212) == '\0') {
      return;
    }
    break;
  case 3:
    temp_v1 = statusScreenIsClosed();
    if (temp_v1 == 0) {
      return;
    }
    temp_v2 = statusDownGetValue();
    *(unsigned int *)(param_1 + 0xa5b4) = temp_v2;
    if (temp_v2 != 0) {
      gameClearUnlockedSavedId(temp_v2 & 0xffff);
      flaggedValueHolderGetTotal(param_1 + 0x20);
      messageMainSetTargetFlags(1);
    }
    FUN_00233240(param_1 + 0xdc,0);
    buttonHelpSetPreset(0x3e);
    break;
  case 4:
    temp_v1 = param_1 + 0xfc;
    FUN_002b8ee0(temp_v1,0);
    temp_v3 = vec2GetYInt(temp_v1);
    temp_v4 = vec2GetXInt(temp_v1);
    pointConvertToFloat(param_1 + 200,temp_v4,temp_v3);
    if (*(char *)(param_1 + 0x186) == '\0') {
      return;
    }
    temp_v1 = buttonHelpIsNotActive();
    if (temp_v1 == 0) {
      return;
    }
    if (*(int *)(param_1 + 0xa5b4) != 0) {
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      return;
    }
    temp_v1 = 10;
    *(int *)(param_1 + 0x18) = temp_v1;
    return;
  case 5:
    temp_v1 = flaggedValueHolderGetTotal(param_1 + 0x20);
    FUN_0029c43c(-*(int *)(param_1 + temp_v1 * 0x20 + 0x5b4),0);
    *(unsigned int *)(param_1 + 0x14) = 7;
    *(unsigned int *)(param_1 + 0x18) = 0;
    return;
  default:
    return;
  case 10:
    *(unsigned int *)(param_1 + 0x14) = 3;
    *(unsigned int *)(param_1 + 0x18) = 0;
    return;
  }
  temp_v1 = *(int *)(param_1 + 0x18) + 1;
  *(int *)(param_1 + 0x18) = temp_v1;
  return;
}

} /* extern "C" */
