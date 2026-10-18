/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a49fc` (_code @ 0x2a49fc, 0x60 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002bb170. */
/* Supplied declaration required: FUN_002c3a24. */
/* Supplied declaration required: FUN_002c3aa8. */


int FUN_002a49fc(int param_1,int param_2,int param_3)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = param_1 + 0x2c;
  FUN_002c3aa8(temp_v1);
  if (*(int *)(param_1 + param_2 * 0xc) != 0) {
    temp_v0 = *(int *)(param_1 + param_2 * 0xc + 4);
    if (param_3 != 0) {
      FUN_002bb170();
    }
    FUN_002c3a24(temp_v1);
    return temp_v0 - 4;
  }
  FUN_002c3a24(temp_v1);
  return 0;
}
