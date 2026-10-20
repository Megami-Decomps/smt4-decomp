/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c96f8` (_code @ 0x4c96f8, 0xb4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(...);
int FUN_0019a5a0(...);
int FUN_002804b0(...);

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_002804b0. */


unsigned int FUN_004c96f8(int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0 [128];
  
  if (*(char *)(param_1 + 0x145) != '\0') {
    if (*(int *)(param_1 + 0x18) == 2) {
      *(unsigned char *)(param_1 + 0x145) = 0;
      return 1;
    }
  }
  else if (*(int *)(param_1 + 0x18) == 2) {
    if (*(int *)(param_1 + 0x148) == param_2) {
      return 1;
    }
    if (*(int *)(param_1 + 0x14) != 0) {
      FUN_0019a5a0();
      *(unsigned int *)(param_1 + 0x14) = 0;
    }
    *(int *)(param_1 + 0x148) = param_2;
    FUN_00100388(temp_v0,"battle/talk/TalkTone%s.mbm",*(unsigned int *)(param_2 * 4 + 0x57a7d8));
    FUN_002804b0(temp_v0,param_1 + 0x14,1);
    *(unsigned char *)(param_1 + 0x145) = 1;
    *(unsigned int *)(param_1 + 0x18) = 3;
    return 0;
  }
  return 0;
}

} /* extern "C" */
