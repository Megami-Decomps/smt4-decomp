/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001003bc` (_code @ 0x1003bc, 0x16 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001003ea. */
/* Supplied declaration required: FUN_001028f4. */


unsigned int FUN_001003bc(int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_001028f4();
  }
  else {
    FUN_001003ea();
  }
  return 1;
}
