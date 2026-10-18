/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e40d0` (_code @ 0x3e40d0, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001517b4. */


void FUN_003e40d0(int param_1,unsigned int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  if (param_1 != 0) {
    FUN_001517b4(param_3,0);
    if (param_3 != 0) {
      return;
    }
  }
  else {
    FUN_001517b4(param_3,0);
  }
  return;
}
