/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037f670` (_code @ 0x37f670, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0037d860. */


void FUN_0037f670(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 0;
  *(char *)(param_1 + 0xe) = (char)param_2;
  do {
    if ((temp_v1 < 0x10) && (temp_v0 = *(int *)(param_1 + temp_v1 * 4 + 0x8c), temp_v0 != 0)) {
      FUN_0037d860(temp_v0,param_2);
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x10);
  return;
}
