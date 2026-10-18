/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ea0c8` (_code @ 0x2ea0c8, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002e98d4. */
/* Supplied declaration required: FUN_0030ffac. */


int FUN_002ea0c8(int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  if (*(int *)(param_1 + 4) != 0) {
    FUN_002e98d4();
  }
  FUN_0030ffac(param_1 + 4,param_2);
  return param_1;
}
