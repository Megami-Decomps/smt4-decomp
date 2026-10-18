/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00273760` (_code @ 0x273760, 0x14c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0019dfbc(unsigned int);
/* Supplied declaration required: FUN_00290374. */
/* Supplied declaration required: FUN_00290410. */
extern int FUN_0029066c(void);
extern unsigned int FUN_00290694(void);
/* Supplied declaration required: FUN_002971e4. */
/* Supplied declaration required: FUN_002972f8. */
/* Supplied declaration required: FUN_00297704. */
extern int FUN_00299064(void);
/* Supplied declaration required: FUN_002b8b78. */


unsigned int FUN_00273760(unsigned int *param_1)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  switch(*param_1) {
  case 0:
    FUN_00297704("event/quest/QuestScr.bf",param_1 + 3,0);
    FUN_00297704("event/quest/QuestSys.mbm",param_1 + 4,0);
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
      FUN_002b8b78(0x90);
    }
    temp_v1 = param_1[3];
    FUN_002972f8(temp_v1,param_1[4]);
    param_1[5] = temp_v1;
    *(unsigned int *)(temp_v1 + 0x108) = 2;
    FUN_002971e4(param_1[5],param_1[1]);
    temp_v0 = 2;
    *param_1 = temp_v0;
    break;
  case 2:
    temp_v1 = FUN_0019dfbc(param_1[5]);
    if (temp_v1 != 2) {
      return 0;
    }
    temp_v0 = FUN_00290694();
    temp_v1 = FUN_00299064();
    if (temp_v1 != 0) {
      FUN_00290410(temp_v0,0);
    }
    FUN_00290374();
    temp_v1 = FUN_0029066c();
    if (temp_v1 == 0) {
      *param_1 = 4;
      break;
    }
    FUN_002971e4(param_1[5],0xd);
    temp_v0 = 3;
    *param_1 = temp_v0;
    break;
  case 3:
    temp_v1 = FUN_0019dfbc(param_1[5]);
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
