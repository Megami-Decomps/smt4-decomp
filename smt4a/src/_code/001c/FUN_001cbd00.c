/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001cbd00` (_code @ 0x1cbd00, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001d1a34. */


void FUN_001cbd00(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 0;
  if (temp_v1 < *(int *)(param_1 + 8)) {
    do {
      temp_v0 = *(int *)(param_1 + temp_v1 * 4);
      if (temp_v0 != 0) {
        FUN_001d1a34(temp_v0,param_2);
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < *(int *)(param_1 + 8));
  }
  *(char *)(param_1 + 0x23) = (char)param_2;
  return;
}
