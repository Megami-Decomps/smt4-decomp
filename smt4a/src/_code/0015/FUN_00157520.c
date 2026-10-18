/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00157520` (_code @ 0x157520, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001006ec. */


int * FUN_00157520(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_001006ec(*param_1,(param_1[2] - *param_1) / 0x30,0);
  return param_1;
}
