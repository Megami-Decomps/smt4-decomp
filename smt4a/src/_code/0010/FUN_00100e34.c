/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00100e34` (_code @ 0x100e34, 0x16 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00100b14. */
/* Supplied declaration required: FUN_00102984. */


unsigned int FUN_00100e34(int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_00102984();
  }
  else {
    FUN_00100b14();
  }
  return 1;
}
