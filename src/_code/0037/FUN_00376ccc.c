/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00376ccc` (_code @ 0x376ccc, 0x48 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002bb170. */


int FUN_00376ccc(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    temp_v0 = 0;
  }
  else {
    temp_v1 = *(int *)(param_1 + 0x1c);
    temp_v0 = temp_v1 - 0x18;
    FUN_002bb170(param_1 + 0x18);
    *(int *)(temp_v1 - 0x14) = param_2;
    *(int *)(param_2 + 4) = temp_v0;
  }
  return temp_v0;
}
