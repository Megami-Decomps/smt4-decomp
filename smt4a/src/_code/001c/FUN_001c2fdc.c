/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c2fdc` (_code @ 0x1c2fdc, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00462374. */


/* WARNING: Removing unreachable block (ram,0x001c302c) */

void FUN_001c2fdc(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 0;
  do {
    if (param_2 == 0) {
      return;
    }
    if ((((param_2 & 1) != 0) && (temp_v1 < 0x10)) &&
       (temp_v0 = *(int *)(param_1 + temp_v1 * 4 + 0x90), temp_v0 != 0)) {
      FUN_00462374(temp_v0,param_3);
    }
    temp_v1 = temp_v1 + 1;
    param_2 = param_2 >> 1;
  } while (temp_v1 < 0x10);
  return;
}
