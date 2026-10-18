/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f76ca` (_code @ 0x2f76ca, 0x22 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002e98d4. */
/* Supplied declaration required: FUN_0030ff80. */


int FUN_002f76ca(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  if (*(int *)(param_1 + 4) != param_2) {
    if (*(int *)(param_1 + 4) != 0) {
      FUN_002e98d4();
    }
    FUN_0030ff80(param_1 + 4,param_2);
  }
  return param_1;
}
