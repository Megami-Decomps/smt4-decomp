/* NON_MATCHING: romwright 0.5.0 decompilation of `questSysLoadStep` (_code @ 0x2734f0, 0x14c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002900d0(void);
int FUN_0029016c(unsigned int, int);
int scrScriptProcessStartEntry(...);
int FUN_00297060(int, unsigned int);
int FUN_00297468(...);
int buttonHelpSetPreset(int);

extern int FUN_0019e0c0(unsigned int);
/* Supplied declaration required: FUN_002900d0. */
/* Supplied declaration required: FUN_0029016c. */
extern int gameJumpRequestIsPending(void);
extern unsigned int FUN_002903f0(void);
/* Supplied declaration required: scrScriptProcessStartEntry. */
/* Supplied declaration required: FUN_00297060. */
/* Supplied declaration required: FUN_00297468. */
extern int FUN_00298dc8(void);
/* Supplied declaration required: buttonHelpSetPreset. */


unsigned int questSysLoadStep(unsigned int *param_1)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  switch(*param_1) {
  case 0:
    FUN_00297468("event/quest/QuestScr.bf",param_1 + 3,0);
    FUN_00297468("event/quest/QuestSys.mbm",param_1 + 4,0);
    *param_1 = 1;
    break;
  case 1:
    temp_v1 = 0;
    if (param_1[3] != 0) {
      temp_v1 = param_1[4];
    }
    if (param_1[3] == 0 || temp_v1 == 0) {
      return 0;
    }
    if (*(char *)(param_1 + 2) != '\0') {
      buttonHelpSetPreset(0x90);
    }
    temp_v1 = param_1[3];
    FUN_00297060(temp_v1,param_1[4]);
    param_1[5] = temp_v1;
    *(unsigned int *)(temp_v1 + 0x108) = 2;
    scrScriptProcessStartEntry(param_1[5],param_1[1]);
    temp_v0 = 2;
    *param_1 = temp_v0;
    break;
  case 2:
    temp_v1 = FUN_0019e0c0(param_1[5]);
    if (temp_v1 != 2) {
      return 0;
    }
    temp_v0 = FUN_002903f0();
    temp_v1 = FUN_00298dc8();
    if (temp_v1 != 0) {
      FUN_0029016c(temp_v0,0);
    }
    FUN_002900d0();
    temp_v1 = gameJumpRequestIsPending();
    if (temp_v1 == 0) {
      *param_1 = 4;
      break;
    }
    scrScriptProcessStartEntry(param_1[5],0xd);
    temp_v0 = 3;
    *param_1 = temp_v0;
    break;
  case 3:
    temp_v1 = FUN_0019e0c0(param_1[5]);
    if (temp_v1 != 2) {
      return 0;
    }
    *param_1 = 4;
    break;
  case 4:
    return 1;
  }
  return 0;
}

} /* extern "C" */
