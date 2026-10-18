/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037c424` (_code @ 0x37c424, 0x48 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00360320. */


void FUN_0037c424(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if ((*(int *)(param_1 + 0x40) != 1) && (temp_v1 = 0, 0 < *(int *)(param_1 + 8))) {
    do {
      temp_v0 = *(int *)(param_1 + temp_v1 * 4);
      if (temp_v0 != 0) {
        FUN_00360320(temp_v0,*(unsigned int *)(param_1 + 0x40));
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < *(int *)(param_1 + 8));
  }
  return;
}
