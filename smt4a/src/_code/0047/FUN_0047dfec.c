/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0047dfec` (_code @ 0x47dfec, 0x4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001681cc. */
extern int FUN_00224880(unsigned int);
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: FUN_00275f44. */
/* Supplied declaration required: FUN_002804b0. */
/* Supplied declaration required: FUN_003a36b4. */
/* Supplied declaration required: FUN_00418070. */
extern int FUN_004185ec(void);
extern unsigned int FUN_004186e0(void);
extern int FUN_00473244(void);
/* Supplied declaration required: FUN_004da2f8. */


unsigned int FUN_0047dfec(unsigned int *param_1)

{
/* irregular: 7 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  switch(*param_1) {
  case 0:
    FUN_002804b0("event/quest/QuestScr.bf",param_1 + 3,0);
    FUN_002804b0("event/quest/QuestSys.mbm",param_1 + 4,0);
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
      FUN_001681cc(0x92);
    }
    temp_v1 = param_1[3];
    FUN_00275bc8(temp_v1,param_1[4]);
    param_1[5] = temp_v1;
    *(unsigned int *)(temp_v1 + 0x108) = 2;
    FUN_00275f44(param_1[5],param_1[1]);
    temp_v0 = 2;
    *param_1 = temp_v0;
    break;
  case 2:
    temp_v1 = FUN_00224880(param_1[5]);
    if (temp_v1 != 2) {
      return 0;
    }
    temp_v0 = FUN_004186e0();
    temp_v1 = FUN_004185ec();
    if (temp_v1 != 0) {
      FUN_00418070(temp_v0,0);
    }
    FUN_004da2f8();
    FUN_003a36b4();
    temp_v1 = FUN_00473244();
    if (temp_v1 == 0) {
      *param_1 = 4;
      break;
    }
    FUN_00275f44(param_1[5],0xe);
    temp_v0 = 3;
    *param_1 = temp_v0;
    break;
  case 3:
    temp_v1 = FUN_00224880(param_1[5]);
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
