/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003fd8dc` (_code @ 0x3fd8dc, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_003fe298. */


void FUN_003fd8dc(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = *(int *)(param_1 + 0x10c);
  temp_v1 = temp_v0 + *(int *)(param_1 + 0x110) * 0x158;
  for (; temp_v0 != temp_v1; temp_v0 = temp_v0 + 0x158) {
    FUN_003fe298(temp_v0,param_2,param_3);
  }
  return;
}
