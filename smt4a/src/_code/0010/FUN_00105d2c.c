/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00105d2c` (_code @ 0x105d2c, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002ec728. */
/* Supplied declaration required: FUN_002ecb04. */
/* Supplied declaration required: FUN_002ecb32. */


void FUN_00105d2c(int param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  FUN_002ec728(param_1 + 0x20);
  FUN_002ecb04(**(unsigned int **)(param_1 + 4),param_2);
  FUN_002ecb04(**(unsigned int **)(param_1 + 0x10),param_2);
  FUN_002ecb32(param_1);
  return;
}
