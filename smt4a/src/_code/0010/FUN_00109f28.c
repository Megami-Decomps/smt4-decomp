/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00109f28` (_code @ 0x109f28, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002e7232. */
/* Supplied declaration required: FUN_002f2faa. */


unsigned int FUN_00109f28(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  if (param_2 != 0) {
    FUN_002f2faa(param_1 + 0x78);
    FUN_002e7232(param_2);
    return 1;
  }
  return 0;
}
