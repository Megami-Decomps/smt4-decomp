/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00246e64` (_code @ 0x246e64, 0x40 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00262bcc. */
/* Supplied declaration required: FUN_002a0640. */


void FUN_00246e64(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *(int *)(param_1 + 0x49d8);
  if (temp_v0 != param_2) {
    if (temp_v0 != -1) {
      FUN_00262bcc(temp_v0,0);
    }
    FUN_002a0640(param_2,0,10);
    *(int *)(param_1 + 0x49d8) = param_2;
  }
  return;
}
