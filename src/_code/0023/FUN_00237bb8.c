/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00237bb8` (_code @ 0x237bb8, 0x5c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00238308. */


int FUN_00237bb8(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = param_1 + 8;
  if (*(int *)(param_1 + 0x10) != 0) {
    temp_v0 = *(int *)(param_1 + 0xc);
    while (temp_v0 != temp_v2) {
      temp_v1 = *(int *)(temp_v0 + 4);
      FUN_00238308(*(unsigned int *)(param_1 + 0x10),temp_v0,1);
      temp_v0 = temp_v1;
    }
    *(unsigned int *)(param_1 + 0x10) = 0;
    *(int *)temp_v2 = temp_v2;
    *(int *)(param_1 + 0xc) = temp_v2;
  }
  return param_1;
}
