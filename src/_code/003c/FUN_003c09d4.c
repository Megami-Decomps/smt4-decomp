/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c09d4` (_code @ 0x3c09d4, 0xb4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00297704. */
/* Supplied declaration required: FUN_002be7fc. */
/* Supplied declaration required: FUN_002c4360. */


unsigned int FUN_003c09d4(int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0 [128];
  
  if (*(char *)(param_1 + 0xc5) != '\0') {
    if (*(int *)(param_1 + 0x18) == 2) {
      *(unsigned char *)(param_1 + 0xc5) = 0;
      return 1;
    }
  }
  else if (*(int *)(param_1 + 0x18) == 2) {
    if (*(int *)(param_1 + 200) == param_2) {
      return 1;
    }
    if (*(int *)(param_1 + 0x14) != 0) {
      FUN_002c4360();
      *(unsigned int *)(param_1 + 0x14) = 0;
    }
    *(int *)(param_1 + 200) = param_2;
    FUN_002be7fc(temp_v0,"battle/talk/TalkTone%s.mbm",*(unsigned int *)(param_2 * 4 + 0x439b70));
    FUN_00297704(temp_v0,param_1 + 0x14,0);
    *(unsigned char *)(param_1 + 0xc5) = 1;
    *(unsigned int *)(param_1 + 0x18) = 3;
    return 0;
  }
  return 0;
}
