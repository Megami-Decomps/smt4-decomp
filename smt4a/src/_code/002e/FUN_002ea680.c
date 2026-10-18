/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ea680` (_code @ 0x2ea680, 0x2e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002ea6bc. */
/* Supplied declaration required: FUN_002ea6cc. */


void FUN_002ea680(unsigned int param_1,int param_2,int param_3,int param_4,unsigned int param_5)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  for (temp_v0 = 0; temp_v0 < param_4; temp_v0 = temp_v0 + 1) {
    if ((*(int *)(param_2 + temp_v0 * 4) != 0) && (*(int *)(param_3 + temp_v0 * 4) != 0)) {
      FUN_002ea6bc(param_5);
    }
  }
  FUN_002ea6cc(param_5);
  return;
}
